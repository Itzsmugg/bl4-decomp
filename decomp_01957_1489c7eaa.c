// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489c7eaa FUN_1489c7eaa body=105 status=ok
// SIG undefined FUN_1489c7eaa(void)

undefined8 * FUN_1489c7eaa(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1489c7f14 FUN_1489c7f14 body=98 status=ok
// SIG undefined FUN_1489c7f14(void)

void FUN_1489c7f14(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489c7f76 FUN_1489c7f76 body=45 status=ok
// SIG undefined FUN_1489c7f76(void)

void FUN_1489c7f76(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489c7fa4 FUN_1489c7fa4 body=122 status=ok
// SIG undefined FUN_1489c7fa4(void)

longlong FUN_1489c7fa4(longlong param_1,longlong param_2)

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
    FUN_1489c801e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1489c801e FUN_1489c801e body=210 status=ok
// SIG undefined FUN_1489c801e(void)

undefined8 * FUN_1489c801e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1489c799e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406cd6a8(param_1);
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
          FUN_1489c80f0(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar4 + 0xe);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1489c80f0 FUN_1489c80f0 body=176 status=ok
// SIG undefined FUN_1489c80f0(void)

undefined8 * FUN_1489c80f0(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 1489c8228 FUN_1489c8228 body=59 status=ok
// SIG undefined FUN_1489c8228(void)

undefined8 FUN_1489c8228(longlong *param_1)

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



// FUNCTION 1489c8336 FUN_1489c8336 body=59 status=ok
// SIG undefined FUN_1489c8336(void)

undefined8 FUN_1489c8336(longlong *param_1)

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



// FUNCTION 1489c8420 FUN_1489c8420 body=150 status=ok
// SIG undefined FUN_1489c8420(void)

undefined8 FUN_1489c8420(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x18 + lVar7;
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 6);
      *(undefined4 *)(lVar2 + 0x10) = puVar1[10];
      *(undefined4 *)(lVar2 + 0x14) = puVar1[0xb];
      *(undefined4 *)(lVar2 + 0x18) = puVar1[0xc];
      *(undefined8 *)(lVar2 + 0x1c) = *(undefined8 *)(puVar1 + 0xd);
      uVar6 = *(undefined8 *)(puVar1 + 0x11);
      *(undefined8 *)(lVar2 + 0x24) = *(undefined8 *)(puVar1 + 0xf);
      *(undefined8 *)(lVar2 + 0x2c) = uVar6;
      lVar7 = lVar7 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489c84de FUN_1489c84de body=59 status=ok
// SIG undefined FUN_1489c84de(void)

undefined8 FUN_1489c84de(longlong *param_1)

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



// FUNCTION 1489c8524 FUN_1489c8524 body=38 status=ok
// SIG undefined FUN_1489c8524(void)

void FUN_1489c8524(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1489c85a2 FUN_1489c85a2 body=158 status=ok
// SIG undefined FUN_1489c85a2(void)

void FUN_1489c85a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489ccff2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8642 FUN_1489c8642 body=151 status=ok
// SIG undefined FUN_1489c8642(void)

void FUN_1489c8642(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489cce0e(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c86da FUN_1489c86da body=156 status=ok
// SIG undefined FUN_1489c86da(void)

void FUN_1489c86da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489ccf66(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8778 FUN_1489c8778 body=154 status=ok
// SIG undefined FUN_1489c8778(void)

void FUN_1489c8778(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489cce1c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8814 FUN_1489c8814 body=169 status=ok
// SIG undefined FUN_1489c8814(void)

void FUN_1489c8814(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489d29e0(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c88be FUN_1489c88be body=156 status=ok
// SIG undefined FUN_1489c88be(void)

void FUN_1489c88be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489cd072(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c895c FUN_1489c895c body=171 status=ok
// SIG undefined FUN_1489c895c(void)

void FUN_1489c895c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489cce98(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8a08 FUN_1489c8a08 body=189 status=ok
// SIG undefined FUN_1489c8a08(void)

void FUN_1489c8a08(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489d2aca(param_1,pplVar1);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8b8e FUN_1489c8b8e body=156 status=ok
// SIG undefined FUN_1489c8b8e(void)

void FUN_1489c8b8e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e94ff6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8c2c FUN_1489c8c2c body=261 status=ok
// SIG undefined FUN_1489c8c2c(void)

void FUN_1489c8c2c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e94dce(param_1,local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8d32 FUN_1489c8d32 body=38 status=ok
// SIG undefined FUN_1489c8d32(void)

void FUN_1489c8d32(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489defd2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c8d58 FUN_1489c8d58 body=37 status=ok
// SIG undefined FUN_1489c8d58(void)

void FUN_1489c8d58(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489df0b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c8d7e FUN_1489c8d7e body=38 status=ok
// SIG undefined FUN_1489c8d7e(void)

void FUN_1489c8d7e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489decea();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c8da8 FUN_1489c8da8 body=37 status=ok
// SIG undefined FUN_1489c8da8(void)

void FUN_1489c8da8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489deb6e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c8dd2 FUN_1489c8dd2 body=37 status=ok
// SIG undefined FUN_1489c8dd2(void)

void FUN_1489c8dd2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489def9c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c8dfc FUN_1489c8dfc body=37 status=ok
// SIG undefined FUN_1489c8dfc(void)

void FUN_1489c8dfc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489deb1e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1489c8e22 FUN_1489c8e22 body=171 status=ok
// SIG undefined FUN_1489c8e22(void)

void FUN_1489c8e22(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489de996(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8ece FUN_1489c8ece body=171 status=ok
// SIG undefined FUN_1489c8ece(void)

void FUN_1489c8ece(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489deff0(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c8f7a FUN_1489c8f7a body=171 status=ok
// SIG undefined FUN_1489c8f7a(void)

void FUN_1489c8f7a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489defde(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c9052 FUN_1489c9052 body=156 status=ok
// SIG undefined FUN_1489c9052(void)

void FUN_1489c9052(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e94eea(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c90f6 FUN_1489c90f6 body=163 status=ok
// SIG undefined FUN_1489c90f6(void)

void FUN_1489c90f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489df014(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c91a0 FUN_1489c91a0 body=178 status=ok
// SIG undefined FUN_1489c91a0(void)

void FUN_1489c91a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489df002(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c9254 FUN_1489c9254 body=152 status=ok
// SIG undefined FUN_1489c9254(void)

void FUN_1489c9254(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489df096(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c92ee FUN_1489c92ee body=190 status=ok
// SIG undefined FUN_1489c92ee(void)

void FUN_1489c92ee(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_418 [40];
  undefined1 local_3f0 [976];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1458d791c(local_3f0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_3f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489df082(param_1,puVar1);
  FUN_1458219bc(local_3f0);
  if ((local_20 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c93b2 FUN_1489c93b2 body=158 status=ok
// SIG undefined FUN_1489c93b2(void)

void FUN_1489c93b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489deb8c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c9468 FUN_1489c9468 body=261 status=ok
// SIG undefined FUN_1489c9468(void)

void FUN_1489c9468(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e94d4c(param_1,local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c956e FUN_1489c956e body=156 status=ok
// SIG undefined FUN_1489c956e(void)

void FUN_1489c956e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e94e54(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489c963c FUN_1489c963c body=45 status=ok
// SIG undefined FUN_1489c963c(void)

longlong FUN_1489c963c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ec1a34(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c9684 FUN_1489c9684 body=45 status=ok
// SIG undefined FUN_1489c9684(void)

longlong FUN_1489c9684(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1461b9fa8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c96b2 FUN_1489c96b2 body=45 status=ok
// SIG undefined FUN_1489c96b2(void)

longlong FUN_1489c96b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141699396(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c96e0 FUN_1489c96e0 body=48 status=ok
// SIG undefined FUN_1489c96e0(void)

longlong FUN_1489c96e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_141699396(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c9710 FUN_1489c9710 body=48 status=ok
// SIG undefined FUN_1489c9710(void)

longlong FUN_1489c9710(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_141699396(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489c977c FUN_1489c977c body=68 status=ok
// SIG undefined FUN_1489c977c(void)

undefined1 FUN_1489c977c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1489c98a2(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489c97e8 FUN_1489c97e8 body=59 status=ok
// SIG undefined FUN_1489c97e8(void)

undefined8 FUN_1489c97e8(longlong *param_1)

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



// FUNCTION 1489c982e FUN_1489c982e body=38 status=ok
// SIG undefined FUN_1489c982e(void)

void FUN_1489c982e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1489c98a2 FUN_1489c98a2 body=84 status=ok
// SIG undefined FUN_1489c98a2(void)

undefined8 * FUN_1489c98a2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489c98f6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1489c98f6 FUN_1489c98f6 body=90 status=ok
// SIG undefined FUN_1489c98f6(void)

void FUN_1489c98f6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489c996a FUN_1489c996a body=47 status=ok
// SIG undefined FUN_1489c996a(void)

void FUN_1489c996a(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1489c99b0 FUN_1489c99b0 body=67 status=ok
// SIG undefined FUN_1489c99b0(void)

undefined1 FUN_1489c99b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1489c9a1c FUN_1489c9a1c body=59 status=ok
// SIG undefined FUN_1489c9a1c(void)

undefined8 FUN_1489c9a1c(longlong *param_1)

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



// FUNCTION 1489c9aba FUN_1489c9aba body=51 status=ok
// SIG undefined FUN_1489c9aba(void)

void FUN_1489c9aba(longlong *param_1)

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



// FUNCTION 1489c9b34 FUN_1489c9b34 body=54 status=ok
// SIG undefined FUN_1489c9b34(void)

undefined1 FUN_1489c9b34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489c9c48(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1489c9b92 FUN_1489c9b92 body=59 status=ok
// SIG undefined FUN_1489c9b92(void)

undefined8 FUN_1489c9b92(longlong *param_1)

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



// FUNCTION 1489c9bd8 FUN_1489c9bd8 body=34 status=ok
// SIG undefined FUN_1489c9bd8(void)

void FUN_1489c9bd8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1459b42fe(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1489c9c48 FUN_1489c9c48 body=69 status=ok
// SIG undefined FUN_1489c9c48(void)

longlong FUN_1489c9c48(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1489c9d12 FUN_1489c9d12 body=59 status=ok
// SIG undefined FUN_1489c9d12(void)

undefined8 FUN_1489c9d12(longlong *param_1)

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



// FUNCTION 1489c9de2 FUN_1489c9de2 body=54 status=ok
// SIG undefined FUN_1489c9de2(void)

undefined1 FUN_1489c9de2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489c9f40(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1489c9e40 FUN_1489c9e40 body=59 status=ok
// SIG undefined FUN_1489c9e40(void)

undefined8 FUN_1489c9e40(longlong *param_1)

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



// FUNCTION 1489c9e86 FUN_1489c9e86 body=34 status=ok
// SIG undefined FUN_1489c9e86(void)

void FUN_1489c9e86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1489c9ef6(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1489c9ef6 FUN_1489c9ef6 body=73 status=ok
// SIG undefined FUN_1489c9ef6(void)

void FUN_1489c9ef6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001489c9f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489c9f40 FUN_1489c9f40 body=150 status=ok
// SIG undefined FUN_1489c9f40(void)

undefined8 * FUN_1489c9f40(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  return param_1;
}



// FUNCTION 1489ca038 FUN_1489ca038 body=59 status=ok
// SIG undefined FUN_1489ca038(void)

undefined8 FUN_1489ca038(longlong *param_1)

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



// FUNCTION 1489ca07e FUN_1489ca07e body=32 status=ok
// SIG undefined FUN_1489ca07e(void)

void FUN_1489ca07e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1489ca11e FUN_1489ca11e body=47 status=ok
// SIG undefined FUN_1489ca11e(void)

void FUN_1489ca11e(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1489ca164 FUN_1489ca164 body=83 status=ok
// SIG undefined FUN_1489ca164(void)

undefined8 FUN_1489ca164(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 1489ca1e0 FUN_1489ca1e0 body=59 status=ok
// SIG undefined FUN_1489ca1e0(void)

undefined8 FUN_1489ca1e0(longlong *param_1)

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



// FUNCTION 1489ca27e FUN_1489ca27e body=51 status=ok
// SIG undefined FUN_1489ca27e(void)

void FUN_1489ca27e(longlong *param_1)

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



// FUNCTION 1489ca300 FUN_1489ca300 body=42 status=ok
// SIG undefined FUN_1489ca300(void)

void FUN_1489ca300(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145cbf2f4(param_2);
  return;
}



// FUNCTION 1489ca340 FUN_1489ca340 body=54 status=ok
// SIG undefined FUN_1489ca340(void)

undefined1 FUN_1489ca340(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489ca46a(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1489ca39e FUN_1489ca39e body=59 status=ok
// SIG undefined FUN_1489ca39e(void)

undefined8 FUN_1489ca39e(longlong *param_1)

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



// FUNCTION 1489ca3e4 FUN_1489ca3e4 body=55 status=ok
// SIG undefined FUN_1489ca3e4(void)

void FUN_1489ca3e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145cbf2f4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1489ca46a FUN_1489ca46a body=122 status=ok
// SIG undefined FUN_1489ca46a(void)

longlong FUN_1489ca46a(longlong param_1,longlong param_2)

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
    FUN_1489ca4e4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1489ca4e4 FUN_1489ca4e4 body=211 status=ok
// SIG undefined FUN_1489ca4e4(void)

undefined8 * FUN_1489ca4e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141525ade(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406fba42(param_1);
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
          FUN_1489ca5b8(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(puVar4 + 0x12);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x14;
        puVar6 = puVar6 + 0x14;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1489ca5b8 FUN_1489ca5b8 body=105 status=ok
// SIG undefined FUN_1489ca5b8(void)

undefined8 * FUN_1489ca5b8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1489ca622(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1489ca622 FUN_1489ca622 body=176 status=ok
// SIG undefined FUN_1489ca622(void)

undefined8 * FUN_1489ca622(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 1489ca6ec FUN_1489ca6ec body=47 status=ok
// SIG undefined FUN_1489ca6ec(void)

void FUN_1489ca6ec(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1489ca732 FUN_1489ca732 body=67 status=ok
// SIG undefined FUN_1489ca732(void)

undefined1 FUN_1489ca732(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1489ca79e FUN_1489ca79e body=59 status=ok
// SIG undefined FUN_1489ca79e(void)

undefined8 FUN_1489ca79e(longlong *param_1)

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



// FUNCTION 1489ca83c FUN_1489ca83c body=51 status=ok
// SIG undefined FUN_1489ca83c(void)

void FUN_1489ca83c(longlong *param_1)

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



// FUNCTION 1489ca8a4 FUN_1489ca8a4 body=54 status=ok
// SIG undefined FUN_1489ca8a4(void)

undefined1 FUN_1489ca8a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489e055a(param_2,param_3);
    param_3 = param_3 + 0x1c;
    param_2 = param_2 + 0x1c;
  }
  return 1;
}



// FUNCTION 1489ca902 FUN_1489ca902 body=59 status=ok
// SIG undefined FUN_1489ca902(void)

undefined8 FUN_1489ca902(longlong *param_1)

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



// FUNCTION 1489ca9fe FUN_1489ca9fe body=54 status=ok
// SIG undefined FUN_1489ca9fe(void)

undefined1 FUN_1489ca9fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489e05fc(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1489caa5c FUN_1489caa5c body=59 status=ok
// SIG undefined FUN_1489caa5c(void)

undefined8 FUN_1489caa5c(longlong *param_1)

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



// FUNCTION 1489caaa2 FUN_1489caaa2 body=43 status=ok
// SIG undefined FUN_1489caaa2(void)

void FUN_1489caaa2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1489cab52 FUN_1489cab52 body=54 status=ok
// SIG undefined FUN_1489cab52(void)

undefined1 FUN_1489cab52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489cac6a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1489cabb0 FUN_1489cabb0 body=59 status=ok
// SIG undefined FUN_1489cabb0(void)

undefined8 FUN_1489cabb0(longlong *param_1)

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



// FUNCTION 1489cabf6 FUN_1489cabf6 body=37 status=ok
// SIG undefined FUN_1489cabf6(void)

void FUN_1489cabf6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1489cac6a FUN_1489cac6a body=79 status=ok
// SIG undefined FUN_1489cac6a(void)

undefined8 * FUN_1489cac6a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489cacba(param_1,iVar1);
      FUN_1489cad33(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489cacba FUN_1489cacba body=121 status=ok
// SIG undefined FUN_1489cacba(void)

void FUN_1489cacba(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489cad33 FUN_1489cad33 body=52 status=ok
// SIG undefined FUN_1489cad33(void)

void FUN_1489cad33(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489e0528(param_1,param_2);
    param_1 = param_1 + 0x1c;
    param_2 = param_2 + 0x1c;
  }
  return;
}



// FUNCTION 1489cad78 FUN_1489cad78 body=44 status=ok
// SIG undefined FUN_1489cad78(void)

void FUN_1489cad78(undefined8 param_1,longlong *param_2)

{
  FUN_1489caeb4(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489cadba FUN_1489cadba body=54 status=ok
// SIG undefined FUN_1489cadba(void)

undefined1 FUN_1489cadba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489caee8(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1489cae18 FUN_1489cae18 body=59 status=ok
// SIG undefined FUN_1489cae18(void)

undefined8 FUN_1489cae18(longlong *param_1)

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



// FUNCTION 1489caeb4 FUN_1489caeb4 body=52 status=ok
// SIG undefined FUN_1489caeb4(void)

void FUN_1489caeb4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1489caee8 FUN_1489caee8 body=95 status=ok
// SIG undefined FUN_1489caee8(void)

undefined8 * FUN_1489caee8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1489caeb4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489caf48(param_1,iVar1);
      FUN_1489cafbb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489caf48 FUN_1489caf48 body=115 status=ok
// SIG undefined FUN_1489caf48(void)

void FUN_1489caf48(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489cafbb FUN_1489cafbb body=52 status=ok
// SIG undefined FUN_1489cafbb(void)

void FUN_1489cafbb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489e0584(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1489caff0 FUN_1489caff0 body=50 status=ok
// SIG undefined FUN_1489caff0(void)

void FUN_1489caff0(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1489caeb4(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1489cb046 FUN_1489cb046 body=5 status=ok
// SIG undefined FUN_1489cb046(void)

void FUN_1489cb046(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1489cb04c FUN_1489cb04c body=483 status=ok
// SIG undefined FUN_1489cb04c(void)

void FUN_1489cb04c(longlong param_1,undefined4 param_2,int param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  longlong local_90 [2];
  undefined8 local_80;
  longlong local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  float fStack_68;
  undefined1 uStack_64;
  undefined4 local_54;
  undefined4 *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fStack_68 = (float)param_3 * (param_4 + param_4) * 0.05;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_64 = 0;
  DAT_14cb90b7c = DAT_14cb90b7c + 1;
  local_54 = param_2;
  FUN_1448f870c(local_90);
  FUN_1400b22c2(local_a0,"COHTML_");
  FUN_1401c7f3e(&local_50,local_a0,local_90);
  puVar3 = local_50;
  if ((int)local_48 == 0) {
    puVar3 = (undefined4 *)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_80,puVar3,1);
  lVar1 = FUN_1489cb230(*(undefined8 *)(param_1 + 0x28),local_80);
  uStack_70 = (undefined5)lVar1;
  uStack_6b = (undefined3)((ulonglong)lVar1 >> 0x28);
  if (local_50 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  *(int *)(lVar1 + 0x370) = (int)(longlong)param_4;
  *(byte *)(lVar1 + 0x34d) = *(byte *)(lVar1 + 0x34d) & 0xf3 | 8;
  *(int *)(lVar1 + 0x36c) = param_3;
  *(undefined4 *)(lVar1 + 0x100) = 0x461c4000;
  *(byte *)(lVar1 + 0x183) = *(byte *)(lVar1 + 0x183) & 0xfc;
  *(undefined1 *)(lVar1 + 0x181) = 3;
  lVar2 = FUN_1489cb2e8(*(undefined8 *)(param_1 + 0x28));
  local_78 = lVar2;
  FUN_1479bcde8(lVar2,lVar1);
  *(byte *)(lVar2 + 0x490) = *(byte *)(lVar2 + 0x490) | 2;
  FUN_140b506a4(lVar2);
  if (*(char *)(param_1 + 0x450) == '\x01') {
    FUN_14342da8c(lVar2,param_1 + 0x80);
  }
  local_50 = &local_54;
  local_48 = &local_78;
  FUN_1489d3d04(param_1 + 0x30,local_90);
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cb230 FUN_1489cb230 body=183 status=ok
// SIG undefined FUN_1489cb230(void)

undefined8 FUN_1489cb230(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459915be();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cb2e8 FUN_1489cb2e8 body=148 status=ok
// SIG undefined FUN_1489cb2e8(void)

undefined8 FUN_1489cb2e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14117d122();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 1489cb37e FUN_1489cb37e body=189 status=ok
// SIG undefined FUN_1489cb37e(void)

void FUN_1489cb37e(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    local_78 = 0;
    local_68 = &PTR_LAB_14b452e80;
    local_4c = param_5;
    local_88 = &LAB_143e8d910;
    local_60 = param_1;
    local_58 = param_2;
    local_54 = param_3;
    local_50 = param_4;
    FUN_1407461b0(1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_1489cb04c(param_1,param_2,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cb44e FUN_1489cb44e body=225 status=ok
// SIG undefined FUN_1489cb44e(void)

void FUN_1489cb44e(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar5 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    uVar6 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar6 * 0x28);
        if (*puVar1 == param_2) {
          puVar7 = puVar1 + 2;
          if (puVar7 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return;
          }
          plVar2 = *(longlong **)puVar7;
          cVar4 = FUN_140432338(plVar2);
          if (cVar4 != '\0') {
            (**(code **)(*plVar2 + 0x600))(plVar2);
            FUN_1479bcde8(*(undefined8 *)puVar7,0);
            FUN_1401bf202(*(undefined8 *)puVar7);
            puVar7[0] = 0;
            puVar7[1] = 0;
          }
          uVar3 = *(undefined8 *)(puVar1 + 4);
          cVar4 = FUN_140432338(uVar3);
          if (cVar4 != '\0') {
            FUN_147d41e4a(uVar3);
            puVar1[4] = 0;
            puVar1[5] = 0;
          }
          FUN_1489d41b2((longlong *)(param_1 + 0x30),param_2);
          return;
        }
        uVar6 = puVar1[8];
      } while (uVar6 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1489cb530 FUN_1489cb530 body=152 status=ok
// SIG undefined FUN_1489cb530(void)

void FUN_1489cb530(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar5 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    uVar2 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar2 * 0x28);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return;
          }
          bVar4 = (float)*(int *)(*(longlong *)(puVar1 + 4) + 0x400) < (float)puVar1[6];
          if (!bVar4) {
            plVar3 = *(longlong **)(puVar1 + 2);
            (**(code **)(*plVar3 + 0x5e8))(plVar3,0);
          }
          *(bool *)(puVar1 + 7) = bVar4;
          return;
        }
        uVar2 = puVar1[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1489cb5c8 FUN_1489cb5c8 body=105 status=ok
// SIG undefined FUN_1489cb5c8(void)

void FUN_1489cb5c8(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar2 * 0x28);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) == 0) {
            return;
          }
          *(undefined1 *)(puVar1 + 7) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001489cb62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(puVar1 + 2) + 0x600))();
          return;
        }
        uVar2 = puVar1[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1489cb638 FUN_1489cb638 body=119 status=ok
// SIG undefined FUN_1489cb638(void)

void FUN_1489cb638(longlong param_1,uint param_2,float param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar2 * 0x28);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return;
          }
          if (1.0 <= param_3) {
            param_3 = 1.0;
          }
          if (param_3 <= 0.001) {
            param_3 = 0.001;
          }
          FUN_14342e4a4(*(undefined8 *)(puVar1 + 2),param_3);
          return;
        }
        uVar2 = puVar1[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1489cb6b0 FUN_1489cb6b0 body=279 status=ok
// SIG undefined FUN_1489cb6b0(void)

void FUN_1489cb6b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
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
  *(undefined1 *)(param_1 + 0x450) = 1;
  FUN_1477db452(param_1 + 0x80);
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x58);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      FUN_14342da8c(*(undefined8 *)(*local_78 + 8 + (longlong)iStack_5c * 0x28),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cb7c8 FUN_1489cb7c8 body=996 status=ok
// SIG undefined FUN_1489cb7c8(void)

void FUN_1489cb7c8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  IViewListener *this;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14134c582();
  lVar6 = param_1[0x16];
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  bVar4 = *(byte *)(lVar6 + 0x152);
  if ((bVar4 != 1) && ((6 < bVar4 || ((0x68U >> (bVar4 & 0x1f) & 1) == 0)))) goto LAB_1489cbb1a;
  uVar7 = FUN_145c2452f();
  plVar2 = param_1 + 0x48;
  FUN_14485c47a(plVar2,uVar7);
  FUN_1446f470e(&local_30,L"UCohtmlBaseComponent Audio Wrapper",1);
  local_70 = 0;
  local_78 = local_78 & 0xffffffffffffff00;
  lVar6 = FUN_1489cbbad(param_1,local_30,0,0);
  param_1[0x3e] = lVar6;
  *(longlong **)(lVar6 + 0x28) = param_1;
  FUN_1446f470e(&local_38,L"Multithread Compositor Wrapper",1);
  local_70 = 0;
  local_78 = local_78 & 0xffffffffffffff00;
  lVar6 = FUN_1489cbc87(param_1,local_38,0,0);
  param_1[0x3d] = lVar6;
  FUN_1446f470e(&local_40,L"UCohtmlBaseComponent 3DUI Compositor",1);
  lVar8 = FUN_1489cbd61(param_1[0x3d],local_40);
  FUN_140b506a4(lVar8);
  lVar6 = lVar8 + 0x110;
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  FUN_1489de7cc(param_1[0x3d],lVar8,lVar6);
  FUN_1446f470e(&local_48,L"UCohtmlBaseComponent Custom Effect Renderer",1);
  lVar6 = FUN_1489cbe19(param_1,local_48);
  param_1[0x3f] = lVar6;
  FUN_140b506a4(lVar6);
  this = (IViewListener *)FUN_14001cc68(0x40,0x10);
  cohtml::IViewListener::IViewListener(this);
  cohtml::ITextInputHandler::ITextInputHandler((ITextInputHandler *)(this + 8));
  *(undefined ***)this = &PTR_FUN_14b452ec0;
  *(undefined ***)(this + 8) = &PTR_FUN_14b452f90;
  *(undefined4 *)(this + 0x10) = 0;
  *(longlong **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b452fc0;
  plVar9[2] = (longlong)this;
  param_1[0x42] = (longlong)this;
  plVar5 = (longlong *)param_1[0x43];
  if (plVar9 == plVar5) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001489cb9f9:
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    param_1[0x43] = (longlong)plVar9;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar9 = plVar5;
        goto joined_r0x0001489cb9f9;
      }
    }
  }
  lVar6 = FUN_14001cc68(400,0x40);
  local_78 = param_1[0x15];
  local_68 = param_1[0x42];
  local_58 = local_68 + 8;
  if (local_68 == 0) {
    local_58 = 0;
  }
  local_50 = param_1[0x43];
  if (local_50 == 0) {
    local_60 = 0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
    local_68 = param_1[0x42];
    local_60 = param_1[0x43];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_1414f2198(lVar6,&local_68,&local_58,param_1 + 0x36);
  lVar8 = param_1[0x44];
  lVar10 = lVar8;
  if ((lVar8 != lVar6) && (param_1[0x44] = lVar6, lVar10 = lVar6, lVar8 != 0)) {
    FUN_145ed6ff0(lVar8);
    FUN_1400020a8(lVar8);
    lVar10 = param_1[0x44];
  }
  lVar6 = param_1[0x3d] + 0x28;
  if (param_1[0x3d] == 0) {
    lVar6 = 0;
  }
  FUN_1489dcba2(lVar10,lVar6);
  FUN_1489dcbaa(param_1[0x44],param_1[0x3f]);
  *(undefined2 *)(param_1 + 0x4a) = 0;
  uVar7 = FUN_14479d2ce(plVar2);
  FUN_1489da706(uVar7,param_1);
  FUN_1489cbed1(param_1 + 8,*(undefined1 *)((longlong)param_1 + 0x1b6),plVar2);
  if (*(char *)((longlong)param_1 + 0x1b2) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1b2) = 1;
    *(undefined1 *)(param_1[0x15] + 0x38) = 5;
    (**(code **)(*param_1 + 0x438))(param_1,param_1[0x15]);
  }
  FUN_1400ed49e(param_1);
LAB_1489cbb1a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cbbad FUN_1489cbbad body=217 status=ok
// SIG undefined FUN_1489cbbad(void)

undefined8
FUN_1489cbbad(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14594c230();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cbc87 FUN_1489cbc87 body=217 status=ok
// SIG undefined FUN_1489cbc87(void)

undefined8
FUN_1489cbc87(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14594c314();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cbd61 FUN_1489cbd61 body=183 status=ok
// SIG undefined FUN_1489cbd61(void)

undefined8 FUN_1489cbd61(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b81f2a();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cbe19 FUN_1489cbe19 body=183 status=ok
// SIG undefined FUN_1489cbe19(void)

undefined8 FUN_1489cbe19(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459f128c();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cbed1 FUN_1489cbed1 body=152 status=ok
// SIG undefined FUN_1489cbed1(void)

void FUN_1489cbed1(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 8) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf9;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    *(char *)(param_1 + 8) = (char)param_2;
    *(char *)(param_1 + 9) = (char)param_2;
    plVar2 = (longlong *)FUN_144a7d136();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | *(byte *)(lVar3 + 0x8b);
    cVar1 = FUN_144729dda(param_3);
    if (cVar1 != '\0') {
      lVar3 = FUN_14479d2ce(param_3);
      uVar4 = FUN_14479d2ce(param_3);
      FUN_14082bc44(param_1,uVar4,lVar3 + 0x30);
      return;
    }
  }
  return;
}



// FUNCTION 1489cbf6a FUN_1489cbf6a body=60 status=ok
// SIG undefined FUN_1489cbf6a(void)

void FUN_1489cbf6a(longlong *param_1,byte param_2)

{
  *(byte *)((longlong)param_1 + 0x1b2) = param_2;
  *(byte *)(param_1[0x15] + 0x38) = param_2 * '\x04' + '\x01';
                    /* WARNING: Could not recover jumptable at 0x0001489cbfa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((ulonglong)(param_2 ^ 1) * 0x10 + 0x438 + *param_1))(param_1,param_1[0x15]);
  return;
}



// FUNCTION 1489cbfa6 FUN_1489cbfa6 body=42 status=ok
// SIG undefined FUN_1489cbfa6(void)

void FUN_1489cbfa6(longlong param_1)

{
  FUN_140674fee();
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1489dccd8();
    return;
  }
  return;
}



// FUNCTION 1489cbfd0 FUN_1489cbfd0 body=34 status=ok
// SIG undefined FUN_1489cbfd0(void)

undefined8 FUN_1489cbfd0(void)

{
  undefined8 uVar1;
  
  if ((DAT_14cb90e00 == 0) || (DAT_14cb90e08 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)DAT_14cb90e08 >> 8),0 < *(int *)(DAT_14cb90e08 + 8));
  }
  return uVar1;
}



// FUNCTION 1489cc00a FUN_1489cc00a body=251 status=ok
// SIG undefined FUN_1489cc00a(void)

undefined8 FUN_1489cc00a(undefined8 param_1)

{
  void *_Src;
  int iVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DVar2 = GetCurrentThreadId();
  FUN_140002266(param_1,L"ThreadID_%d",DVar2);
  FUN_141033dca();
  DVar2 = GetCurrentThreadId();
  puVar3 = (undefined8 *)FUN_140270d20(DVar2);
  local_40 = (void *)0x0;
  local_38 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_38;
  _Src = (void *)*puVar3;
  if (lVar4 != 0) {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar4 * 2);
    if (1 < local_38) {
      FUN_140002266(&local_50,L" (%s)");
      iVar1 = local_48 + -1;
      if (local_48 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_1,local_50,iVar1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1489cc106 FUN_1489cc106 body=30 status=ok
// SIG undefined FUN_1489cc106(void)

void FUN_1489cc106(longlong param_1)

{
  FUN_144b20ec4();
  FUN_1415c8144(*(undefined8 *)(param_1 + 0x220));
  return;
}



// FUNCTION 1489cc124 FUN_1489cc124 body=290 status=ok
// SIG undefined FUN_1489cc124(void)

longlong * FUN_1489cc124(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = FUN_1403b9a74();
  if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_88);
  }
  FUN_145c246c2(local_80,param_2,&local_88,5);
  if (local_5c == '\0') {
    *param_1 = local_50 + 0x3c8;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (local_28 == '\x01') {
    FUN_14024445c(local_78);
  }
  if (local_5c != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb90b98) {
      FUN_144b3d300(&DAT_14cb90b98);
      if (DAT_14cb90b98 == -1) {
        DAT_14cb90b88 = 0;
        uRam000000014cb90b90 = 0;
        atexit((_func_5014 *)&LAB_143e7e8f9);
        _Init_thread_footer(&DAT_14cb90b98);
      }
    }
    *param_1 = (longlong)&DAT_14cb90b88;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cc248 FUN_1489cc248 body=340 status=ok
// SIG undefined FUN_1489cc248(void)

void FUN_1489cc248(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (int)param_2[1];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  plVar1 = (longlong *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 0x1c4) < iVar2) {
    FUN_1489d5348(plVar1,iVar2);
  }
  if (iVar2 != 0) {
    iVar7 = 0;
    do {
      cVar5 = FUN_144729dda(*param_2 + (longlong)iVar7 * 8);
      if (cVar5 != '\0') {
        uVar6 = FUN_14479d2ce((longlong)iVar7 * 8 + *param_2);
        FUN_143e7f0db(&local_60,uVar6);
        iVar3 = *(int *)(param_1 + 0x1c0);
        lVar8 = (longlong)iVar3;
        *(uint *)(param_1 + 0x1c0) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x1c4) < iVar3 + 1U) {
          FUN_1489d53b8(plVar1,iVar3);
        }
        lVar4 = *plVar1;
        *(undefined8 *)(lVar4 + lVar8 * 0x18) = local_60;
        *(undefined8 *)(lVar4 + 8 + lVar8 * 0x18) = 0;
        *(longlong *)(lVar4 + 8 + lVar8 * 0x18) = local_58;
        local_58 = 0;
        *(undefined4 *)(lVar4 + 0x10 + lVar8 * 0x18) = (undefined4)local_50;
        *(undefined4 *)(lVar4 + 0x14 + lVar8 * 0x18) = local_50._4_4_;
        local_50 = 0;
        FUN_1489d375d(0,0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  *(undefined1 *)(param_1 + 0x251) = 1;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cc3b2 FUN_1489cc3b2 body=222 status=ok
// SIG undefined FUN_1489cc3b2(void)

ulonglong FUN_1489cc3b2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  uVar4 = 0;
  FUN_140e40420(*(undefined8 *)(param_1 + 0xa8),&local_38,0);
  if ((int)uStack_30 != 0) {
    lVar2 = *local_38;
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = FUN_144a7a726();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) {
        uVar4 = 0;
      }
      else {
        local_40 = 0;
        FUN_14485c47a(&local_40,lVar2);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14163bfaa(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = local_40;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1489cc492 FUN_1489cc492 body=98 status=ok
// SIG undefined FUN_1489cc492(void)

longlong FUN_1489cc492(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x238);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = &PTR_FUN_14b454190;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x238) = puVar2;
    }
    FUN_1489cc4f4(puVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 8));
    lVar1 = *(longlong *)(param_1 + 0x238);
  }
  return lVar1;
}



// FUNCTION 1489cc4f4 FUN_1489cc4f4 body=380 status=ok
// SIG undefined FUN_1489cc4f4(void)

void FUN_1489cc4f4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14001cc68(0x18,0x10);
  FUN_1489df96e(lVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != lVar2) && (*(longlong *)(param_1 + 0x10) = lVar2, lVar1 != 0)) {
    thunk_FUN_1489e96ac(lVar1);
    FUN_1400020a8(lVar1);
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x180,0x10);
  FUN_1489dfe5c(puVar3,*(undefined8 *)(param_1 + 0x10),2);
  puVar3[0x28] = param_1;
  local_40 = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(400,0x10);
  FUN_1489df250(puVar3,*(undefined8 *)(param_1 + 0x10),1);
  puVar3[0x28] = param_1;
  local_48 = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(0x168,0x10);
  FUN_1489dfc1a(puVar3,*(undefined8 *)(param_1 + 0x10),0);
  puVar3[0x28] = param_1;
  local_50 = puVar3;
  FUN_1489df986(*(undefined8 *)(param_1 + 0x10),&local_40);
  FUN_1489df986(*(undefined8 *)(param_1 + 0x10),&local_48);
  FUN_1489df986(*(undefined8 *)(param_1 + 0x10),&local_50);
  *(undefined8 *)(param_1 + 8) = param_2;
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cc672 FUN_1489cc672 body=12 status=ok
// SIG undefined FUN_1489cc672(void)

void FUN_1489cc672(longlong param_1)

{
  FUN_1489dcb9a(*(undefined8 *)(param_1 + 0x220));
  return;
}



// FUNCTION 1489cc67e FUN_1489cc67e body=30 status=ok
// SIG undefined FUN_1489cc67e(void)

void FUN_1489cc67e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489cc698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))();
    return;
  }
  return;
}



// FUNCTION 1489cc69c FUN_1489cc69c body=210 status=ok
// SIG undefined FUN_1489cc69c(void)

void FUN_1489cc69c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_2;
    }
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cc7f8 FUN_1489cc7f8 body=30 status=ok
// SIG undefined FUN_1489cc7f8(void)

void FUN_1489cc7f8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489cc812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))();
    return;
  }
  return;
}



// FUNCTION 1489cc816 FUN_1489cc816 body=26 status=ok
// SIG undefined FUN_1489cc816(void)

undefined4 FUN_1489cc816(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 - 7U < 0x1b) {
    uVar1 = *(undefined4 *)(&DAT_14b454230 + (ulonglong)(param_1 - 7U) * 4);
  }
  return uVar1;
}



// FUNCTION 1489cc830 FUN_1489cc830 body=253 status=ok
// SIG undefined FUN_1489cc830(void)

void FUN_1489cc830(longlong param_1,uint param_2)

{
  undefined2 *puVar1;
  bool bVar2;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  int local_130;
  undefined1 local_128 [256];
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_28 = 0;
  if (param_1 == 0) {
    local_20 = 0;
    local_18 = 0;
  }
  else {
    if ((int)param_2 < 1) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_1 + (ulonglong)(param_2 - 1)) == '\0';
      if (bVar2) {
        param_2 = param_2 - 1;
      }
    }
    FUN_1446e6fe8(local_128,param_1,param_2,bVar2);
  }
  FUN_1400089be(&local_138,local_18,local_20);
  puVar1 = local_138;
  if (local_130 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_142855b70(puVar1);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cc92e FUN_1489cc92e body=242 status=ok
// SIG undefined FUN_1489cc92e(void)

void FUN_1489cc92e(undefined8 *param_1)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (wchar_t *)0x0;
  uStack_c0 = 0;
  FUN_140d67490(&local_c8);
  _Str = local_c8;
  if ((int)uStack_c0 == 0) {
    _Str = L"";
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  (**(code **)*param_1)(param_1,local_30,local_28);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cca22 FUN_1489cca22 body=139 status=ok
// SIG undefined FUN_1489cca22(void)

void FUN_1489cca22(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 8) & 0x8000) == 0)) {
    lVar2 = FUN_1489da89c();
    if (lVar2 != 0) {
      FUN_1489da7e6(lVar2,plVar1);
    }
    puVar3 = cohtml::IEventHandler::operator_new(0x18);
    *puVar3 = &PTR_FUN_14b4541e0;
    puVar3[2] = &LAB_1489ccaae;
    puVar3[1] = param_1 + 0x130;
                    /* WARNING: Could not recover jumptable at 0x0001489ccaa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1b0))(plVar1,"ScriptingReady",puVar3,*(code **)(*plVar1 + 0x1b0));
    return;
  }
  return;
}



// FUNCTION 1489ccab4 FUN_1489ccab4 body=29 status=ok
// SIG undefined FUN_1489ccab4(void)

undefined8 FUN_1489ccab4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ccac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x1d0))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1489ccad2 FUN_1489ccad2 body=12 status=ok
// SIG undefined FUN_1489ccad2(void)

void FUN_1489ccad2(void)

{
  FUN_1489ccade(DAT_14c951640);
  return;
}



// FUNCTION 1489ccade FUN_1489ccade body=148 status=ok
// SIG undefined FUN_1489ccade(void)

undefined8 FUN_1489ccade(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_141116e08();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 1489ccb73 FUN_1489ccb73 body=468 status=ok
// SIG undefined FUN_1489ccb73(void)

void FUN_1489ccb73(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  size_t sVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 == 0) || (*(int *)(param_2 + 0xa0) == 0)) {
    if (*(int *)(param_1 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_1;
    }
    local_48 = 0;
    if (pwVar5 == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar3 = wcslen(pwVar5);
      FUN_1446fe5a4(local_c8,pwVar5,sVar3 & 0xffffffff,1);
    }
    (**(code **)(*param_3 + 600))(param_3,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x210))(param_3);
    if (*(int *)(param_1 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_1;
    }
    uVar1 = *(undefined4 *)(param_2 + 0xa0);
    local_48 = 0;
    if (pwVar5 == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar3 = wcslen(pwVar5);
      FUN_1446fe5a4(local_c8,pwVar5,sVar3 & 0xffffffff,1);
    }
    (**(code **)(*plVar2 + 0x50))(plVar2,local_40,uVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (0 < *(int *)(param_2 + 0xa0)) {
      lVar4 = 0;
      lVar6 = 0;
      do {
        FUN_143e843c5(param_2,*(longlong *)(param_2 + 0x98) + lVar4,plVar2);
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar6 < *(int *)(param_2 + 0xa0));
    }
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ccd48 FUN_1489ccd48 body=18 status=ok
// SIG undefined FUN_1489ccd48(void)

void FUN_1489ccd48(longlong param_1,undefined8 param_2)

{
  FUN_143e90a6c(param_2,param_1 + 400);
  return;
}



// FUNCTION 1489ccd5a FUN_1489ccd5a body=18 status=ok
// SIG undefined FUN_1489ccd5a(void)

void FUN_1489ccd5a(longlong param_1,undefined8 param_2)

{
  FUN_143e90bce(param_2,param_1 + 400);
  return;
}



// FUNCTION 1489ccd6c FUN_1489ccd6c body=18 status=ok
// SIG undefined FUN_1489ccd6c(void)

void FUN_1489ccd6c(longlong param_1,undefined8 param_2)

{
  FUN_143e90b88(param_2,param_1 + 400);
  return;
}



// FUNCTION 1489ccd7e FUN_1489ccd7e body=18 status=ok
// SIG undefined FUN_1489ccd7e(void)

void FUN_1489ccd7e(longlong param_1,undefined8 param_2)

{
  FUN_1489da8e2(param_2,param_1 + 400);
  return;
}



// FUNCTION 1489ccd90 FUN_1489ccd90 body=18 status=ok
// SIG undefined FUN_1489ccd90(void)

void FUN_1489ccd90(longlong param_1,undefined8 param_2)

{
  FUN_1489da9f8(param_2,param_1 + 400);
  return;
}



// FUNCTION 1489ccdae FUN_1489ccdae body=57 status=ok
// SIG undefined FUN_1489ccdae(void)

void FUN_1489ccdae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if (lVar1 != 0) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_1489cb6b0(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1489ccde8 FUN_1489ccde8 body=17 status=ok
// SIG undefined FUN_1489ccde8(void)

void FUN_1489ccde8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x3f0);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = lVar1 + 0x338;
  cVar2 = FUN_1489e3b1c(lVar1 + 0x330,lVar5);
  if (cVar2 == '\0') {
    cVar2 = FUN_144729dda(lVar5);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(lVar5);
      if (*(longlong *)(*(longlong *)(lVar3 + 0x220) + 8) != 0) {
        lVar3 = lVar1 + 0x344;
        if (*(char *)(lVar1 + 0x388) == '\0') {
          lVar3 = 0;
        }
        lVar4 = FUN_14479d2ce(lVar5);
        FUN_145afb0de(*(undefined8 *)(*(longlong *)(lVar4 + 0x220) + 8),lVar3);
        *(undefined1 *)(lVar1 + 0x388) = 0;
        lVar3 = lVar1 + 0x370;
        if (*(char *)(lVar1 + 0x389) == '\0') {
          lVar3 = 0;
        }
        lVar5 = FUN_14479d2ce(lVar5);
        FUN_145afb03c(*(undefined8 *)(*(longlong *)(lVar5 + 0x220) + 8),lVar3);
        *(undefined1 *)(lVar1 + 0x389) = 0;
      }
    }
  }
  FUN_14485c47a(lVar1 + 0x330,param_2);
  return;
}



// FUNCTION 1489ccdfa FUN_1489ccdfa body=12 status=ok
// SIG undefined FUN_1489ccdfa(void)

void FUN_1489ccdfa(void)

{
  FUN_1489ccade(DAT_14c951640);
  return;
}



// FUNCTION 1489cce06 FUN_1489cce06 body=8 status=ok
// SIG undefined FUN_1489cce06(void)

void FUN_1489cce06(undefined8 param_1,undefined1 param_2)

{
  FUN_1489cce1c(param_1,param_2);
  return;
}



// FUNCTION 1489cce0e FUN_1489cce0e body=8 status=ok
// SIG undefined FUN_1489cce0e(void)

void FUN_1489cce0e(undefined8 param_1,undefined1 param_2)

{
  FUN_1489cce1c(param_1,param_2);
  return;
}



// FUNCTION 1489cce16 thunk_FUN_1489cce1c body=5 status=ok
// SIG undefined thunk_FUN_1489cce1c(void)

void thunk_FUN_1489cce1c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x28,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20;
  return;
}



// FUNCTION 1489cce1c FUN_1489cce1c body=118 status=ok
// SIG undefined FUN_1489cce1c(void)

void FUN_1489cce1c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x28,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20;
  return;
}



// FUNCTION 1489cce92 thunk_FUN_1489cce98 body=5 status=ok
// SIG undefined thunk_FUN_1489cce98(void)

void thunk_FUN_1489cce98(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x38),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar5 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar4 + lVar5);
  *(undefined8 *)(lVar4 + lVar5) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar4 + 8 + lVar5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) =
       (ulonglong)(iVar2 - 1) << 0x20 | 3;
  return;
}



// FUNCTION 1489cce98 FUN_1489cce98 body=200 status=ok
// SIG undefined FUN_1489cce98(void)

void FUN_1489cce98(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x38),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar5 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar4 + lVar5);
  *(undefined8 *)(lVar4 + lVar5) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar4 + 8 + lVar5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) =
       (ulonglong)(iVar2 - 1) << 0x20 | 3;
  return;
}



// FUNCTION 1489ccf60 thunk_FUN_1489ccf66 body=5 status=ok
// SIG undefined thunk_FUN_1489ccf66(void)

void thunk_FUN_1489ccf66(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x48,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       ((ulonglong)(iVar1 - 1) << 0x20) + 1;
  return;
}



// FUNCTION 1489ccf66 FUN_1489ccf66 body=134 status=ok
// SIG undefined FUN_1489ccf66(void)

void FUN_1489ccf66(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x48,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       ((ulonglong)(iVar1 - 1) << 0x20) + 1;
  return;
}



// FUNCTION 1489ccfec thunk_FUN_1489ccff2 body=5 status=ok
// SIG undefined thunk_FUN_1489ccff2(void)

void thunk_FUN_1489ccff2(longlong param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_1401c3474(param_1 + 0x58,iVar1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1) = param_2;
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 2;
  return;
}



// FUNCTION 1489ccff2 FUN_1489ccff2 body=122 status=ok
// SIG undefined FUN_1489ccff2(void)

void FUN_1489ccff2(longlong param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_1401c3474(param_1 + 0x58,iVar1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1) = param_2;
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 2;
  return;
}



// FUNCTION 1489cd06c thunk_FUN_1489cd072 body=5 status=ok
// SIG undefined thunk_FUN_1489cd072(void)

void thunk_FUN_1489cd072(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  FUN_14485c47a();
  iVar1 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
    FUN_1409d3082(param_1 + 0x68,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8) = uStack_30;
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 5;
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cd072 FUN_1489cd072 body=180 status=ok
// SIG undefined FUN_1489cd072(void)

void FUN_1489cd072(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a();
  iVar1 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
    FUN_1409d3082(param_1 + 0x68,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8) = local_30;
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cd128 thunk_FUN_1489cd12e body=5 status=ok
// SIG undefined thunk_FUN_1489cd12e(void)

void thunk_FUN_1489cd12e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_1489d96a0(param_1 + 0x88,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = param_2;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0x18) = param_3;
  *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x18) = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 6;
  return;
}



// FUNCTION 1489cd12e FUN_1489cd12e body=166 status=ok
// SIG undefined FUN_1489cd12e(void)

void FUN_1489cd12e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_1489d96a0(param_1 + 0x88,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = param_2;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0x18) = param_3;
  *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x18) = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 6;
  return;
}



// FUNCTION 1489cd1d4 FUN_1489cd1d4 body=386 status=ok
// SIG undefined FUN_1489cd1d4(void)

void FUN_1489cd1d4(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489cb7c8();
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
  }
  bVar1 = *(byte *)(lVar3 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    *(undefined1 *)(param_1 + 0x288) = 0;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_140e40420(*(undefined8 *)(param_1 + 0xa8),&local_48);
    if (0 < (int)uStack_40) {
      if (*(longlong *)(param_1 + 0x274) != 0) {
        lVar3 = 0;
        do {
          lVar2 = *(longlong *)((longlong)local_48 + lVar3);
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) == *(longlong *)(param_1 + 0x274))) {
            *(longlong *)(param_1 + 0x280) = lVar2;
            break;
          }
          lVar3 = lVar3 + 8;
        } while ((uStack_40 & 0xffffffff) << 3 != lVar3);
      }
      if (*(longlong *)(param_1 + 0x280) == 0) {
        *(undefined8 *)(param_1 + 0x280) = *local_48;
      }
    }
    lVar3 = FUN_1489cd358(param_1);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_144a7d136();
      plVar5 = (longlong *)plVar4[0x22];
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*plVar4 + 1000))(plVar4);
        plVar5 = (longlong *)plVar4[0x22];
      }
      uVar6 = (**(code **)(*plVar5 + 0x2a8))(plVar5,0);
      FUN_1446f470e(&local_50,L"GammaCorrectionExponent",1);
      FUN_14472da24(lVar3,local_50,uVar6);
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cd358 FUN_1489cd358 body=148 status=ok
// SIG undefined FUN_1489cd358(void)

longlong FUN_1489cd358(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x280) == (longlong *)0x0) ||
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x7b0))(), iVar1 < 1)) {
    return 0;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x610))(*(longlong **)(param_1 + 0x280),0)
  ;
  if (lVar2 != 0) {
    lVar3 = FUN_144a772c4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  lVar2 = FUN_14090ceee(lVar2,*(undefined8 *)(param_1 + 0x280),0);
  (**(code **)(**(longlong **)(param_1 + 0x280) + 0x638))(*(longlong **)(param_1 + 0x280),0,lVar2);
  return lVar2;
}



// FUNCTION 1489cd3ec FUN_1489cd3ec body=160 status=ok
// SIG undefined FUN_1489cd3ec(void)

undefined8 FUN_1489cd3ec(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x280);
  if (lVar2 != 0) {
    lVar3 = FUN_144a7a726();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_20 = 0;
      FUN_14485c47a(&local_20,lVar2);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14163bfaa(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = local_20;
      uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      goto LAB_1489cd432;
    }
  }
  uVar4 = 0;
LAB_1489cd432:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cd492 FUN_1489cd492 body=703 status=ok
// SIG undefined FUN_1489cd492(void)

void FUN_1489cd492(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  ulonglong local_b0 [2];
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_41;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_143e7e616();
  cVar4 = FUN_1489dcb9a(*(undefined8 *)(param_1 + 0x220));
  if (cVar4 != '\0') {
    if (((*(char *)(param_1 + 0x288) == '\0') && (*(char *)(param_1 + 0x270) == '\0')) &&
       (plVar5 = (longlong *)FUN_1489cd358(param_1), plVar5 != (longlong *)0x0)) {
      local_a0 = 0;
      FUN_1446f470e(local_b0,L"UITexture",1);
      local_98 = local_b0[0] & 0xffffffff;
      uStack_90 = CONCAT44(0xffffffff,(int)(local_b0[0] >> 0x20));
      local_88 = CONCAT31(local_88._1_3_,2);
      cVar4 = (**(code **)(*plVar5 + 0x3c8))(plVar5,&local_98,&local_a0,0);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x140);
        if (lVar3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar3 + 0x68);
        }
        FUN_1446f470e(&local_b8,L"UITexture",1);
        FUN_14016d8b0(plVar5,local_b8,uVar7);
        *(undefined1 *)(param_1 + 0x288) = 1;
      }
    }
    goto LAB_1489cd69f;
  }
  if (*(char *)(param_1 + 0x270) == '\0') {
    plVar5 = (longlong *)FUN_1489cd358(param_1);
    if (plVar5 == (longlong *)0x0) goto LAB_1489cd69f;
    local_a0 = 0;
    FUN_1446f470e(local_b0,L"UITexture",1);
    local_98 = local_b0[0] & 0xffffffff;
    uStack_90 = CONCAT44(0xffffffff,(int)(local_b0[0] >> 0x20));
    local_88 = CONCAT31(local_88._1_3_,2);
    cVar4 = (**(code **)(*plVar5 + 0x3c8))(plVar5,&local_98,&local_a0,0);
    if (cVar4 == '\0') goto LAB_1489cd69f;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x268);
  uVar2 = *(undefined4 *)(param_1 + 0x26c);
  *(undefined1 *)(param_1 + 0x1dc) = *(undefined1 *)(param_1 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1dd) = *(undefined1 *)(param_1 + 0x1b3);
  *(undefined1 *)(param_1 + 0x1de) = *(undefined1 *)(param_1 + 0x1b1);
  *(undefined1 *)(param_1 + 0x1df) = *(undefined1 *)(param_1 + 0x1b4);
  *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(param_1 + 0x1b5);
  if (*(int *)(param_1 + 0x260) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)(param_1 + 600);
  }
  FUN_140056680(local_b0,puVar6);
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 1;
  local_64 = 1;
  uStack_5c = 0;
  local_54 = 200;
  local_50 = 0;
  local_48 = 0x41000000;
  local_44 = 0;
  local_41 = 0;
  local_38 = 0;
  local_88 = uVar1;
  local_84 = uVar2;
  FUN_145c22d2a(*(undefined8 *)(param_1 + 0x220),&local_98,local_b0,param_1 + 0x1dc);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
LAB_1489cd69f:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cd766 FUN_1489cd766 body=394 status=ok
// SIG undefined FUN_1489cd766(void)

void FUN_1489cd766(undefined8 param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  wchar_t *_Str;
  double dVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined2 local_90 [2];
  undefined4 local_8c;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1446ddc76(local_88,"CohtmlPlugin",1);
  pcVar1 = local_88[0];
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1402c9134(uVar2,pcVar1,local_90,1);
  FUN_1400b22c2(local_a0,&DAT_149e02088);
  (**(code **)(*plVar3 + 0x40))(plVar3,1,local_a0,2);
  local_a8 = 0;
  if ((int)param_2[1] < 1) {
    fVar6 = 1.0;
  }
  else {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    dVar5 = _wtof(_Str);
    fVar6 = (float)dVar5;
  }
  if (param_3 != 0) {
    if (*(longlong *)(param_3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(param_3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x1f0) + 0xf0);
    }
    local_88[0] = FUN_140d11fbe;
    local_78 = 0;
    local_68 = &PTR_LAB_149e01e20;
    local_60 = FUN_143e8e46c;
    local_48 = 3;
    local_90[0] = 0;
    local_8c = 0xbf800000;
    local_b8 = local_90;
    FUN_1406f4044(*puVar4,&local_a8,local_88,fVar6);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cd8f1 FUN_1489cd8f1 body=94 status=ok
// SIG undefined FUN_1489cd8f1(void)

void FUN_1489cd8f1(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_1489dc917(param_1,*(longlong *)(lVar1 + lVar3),
                    *(undefined8 *)(*(longlong *)(lVar1 + lVar3) + 0x10));
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001489cd948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 1489cd94f FUN_1489cd94f body=120 status=ok
// SIG undefined FUN_1489cd94f(void)

void FUN_1489cd94f(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
  uVar1 = -*(int *)(param_3 + 0x5c) & (*(int *)(param_3 + 0x58) + *(int *)(param_3 + 0x5c)) - 1U;
  if (0 < (int)((int)param_2[1] * uVar1)) {
    lVar2 = 0;
    do {
      FUN_1401e1be1(param_1,*param_2 + lVar2,param_3);
      lVar2 = lVar2 + (int)uVar1;
    } while (lVar2 < (longlong)(int)param_2[1] * (longlong)(int)uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001489cd9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 1489cd9c7 FUN_1489cd9c7 body=116 status=ok
// SIG undefined FUN_1489cd9c7(void)

void FUN_1489cd9c7(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    iVar2 = 0;
    lVar3 = 8;
    do {
      puVar1 = &DAT_149dfb77a;
      if (*(int *)(*param_2 + lVar3) != 0) {
        puVar1 = *(undefined2 **)(*param_2 + -8 + lVar3);
      }
      (**(code **)(*param_1 + 0xd0))(param_1,puVar1);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < (int)param_2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001489cda34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 1489cda40 FUN_1489cda40 body=592 status=ok
// SIG undefined FUN_1489cda40(void)

ulonglong FUN_1489cda40(_LIST_ENTRY *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4
                       )

{
  longlong *plVar1;
  int *piVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  longlong *plVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  _LIST_ENTRY *p_Var8;
  ulonglong uVar9;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  longlong **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = param_3;
  local_58 = param_4;
  FUN_1489cee64(&local_70);
  plVar7 = (longlong *)FUN_1489d7299(param_2,&local_58,&local_60,&local_70);
  local_80 = plVar7 + 2;
  local_78 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  DVar6 = (**(code **)(*local_60 + 8))();
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_70 + 0xf0))();
  plVar1 = local_78;
  plVar7 = local_80;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  EnterCriticalSection(lpCriticalSection);
  if (lpCriticalSection[1].LockCount != 4) {
    FUN_1446efa72(lpCriticalSection + 1,0,4,0x10);
    lpCriticalSection[1].LockCount = 4;
  }
  p_Var3 = lpCriticalSection[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149f2a800;
  LOCK();
  UNLOCK();
  p_Var8 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var8 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var8 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var8;
  *(undefined ***)p_Var3 = &PTR_FUN_14b453550;
  (p_Var3->ProcessLocksList).Blink = param_1;
  p_Var3->EntryCount = DVar6;
  *(longlong **)&p_Var3->Flags = plVar7;
  *(longlong **)(p_Var3 + 1) = plVar1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  p_Var8 = param_1 + 7;
  EnterCriticalSection((LPCRITICAL_SECTION)&p_Var8->Blink);
  if (*(int *)&param_1->Blink - *(int *)((longlong)&param_1[3].Flink + 4) <
      *(int *)&param_1[7].Flink) {
    cVar5 = (**(code **)(*local_70 + 0xe8))();
    if (cVar5 == '\0') {
      uVar9 = 0;
      goto LAB_1489cdbb2;
    }
    local_84 = (**(code **)(*(longlong *)local_80[5] + 8))();
    local_50 = &local_84;
    local_48 = &local_80;
    FUN_1489d74b6(param_1,local_3c);
  }
  else {
    param_1 = param_1 + 5;
    FUN_1489cf16e(param_1,&local_80);
  }
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1489cdbb2:
  LeaveCriticalSection((LPCRITICAL_SECTION)&p_Var8->Blink);
  plVar7 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cdc92 FUN_1489cdc92 body=76 status=ok
// SIG undefined FUN_1489cdc92(void)

ulonglong FUN_1489cdc92(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x44)) &&
     (*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0xe4))) {
    cVar1 = FUN_1489cdcde(param_1 + 0x160);
    if (cVar1 == '\0') {
      uVar2 = CONCAT71(uVar3,*(int *)(*(longlong *)(param_1 + 0x210) + 0x28) !=
                             *(int *)(*(longlong *)(param_1 + 0x210) + 0x54));
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1489cdcde FUN_1489cdcde body=59 status=ok
// SIG undefined FUN_1489cdcde(void)

ulonglong FUN_1489cdcde(longlong param_1)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined7 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar1 = CONCAT71(uVar2,1);
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    uVar1 = CONCAT71(uVar2,*(int *)(param_1 + 0x68) != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1489cdd22 FUN_1489cdd22 body=278 status=ok
// SIG undefined FUN_1489cdd22(void)

void FUN_1489cdd22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459a02b0();
  FUN_1489cde3a(&local_28,param_1);
  *(undefined8 *)(param_1 + 0x528) = local_28;
  FUN_1489cdfc2(&local_28,param_1);
  *(undefined8 *)(param_1 + 0x520) = local_28;
  plVar4 = DAT_14c968090;
  lVar3 = DAT_14c968088;
  if (DAT_14c98e618 != 0) {
    if (DAT_14c968090 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      FUN_1489ce0ee(lVar3 + 0x38,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x530) = local_28;
    }
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
  bVar5 = *(longlong *)(param_1 + 0x3e0) == 0;
  if (!bVar5) {
    FUN_14007fbbc();
    FUN_14578778c(*(undefined8 *)(param_1 + 0x3e0));
  }
  *(bool *)(param_1 + 0x502) = bVar5;
  FUN_1489cdf2a(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cde3a FUN_1489cde3a body=239 status=ok
// SIG undefined FUN_1489cde3a(void)

undefined8 FUN_1489cde3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b4533e0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1489cdf2a;
  FUN_1448b6402(&DAT_14c8672b0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cdf2a FUN_1489cdf2a body=150 status=ok
// SIG undefined FUN_1489cdf2a(void)

void FUN_1489cdf2a(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_20);
    local_24 = (float)local_1c;
    local_28 = (float)local_20;
    FUN_145787b40(DAT_14c98e618,param_1 + 0x50c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cdfc2 FUN_1489cdfc2 body=239 status=ok
// SIG undefined FUN_1489cdfc2(void)

undefined8 FUN_1489cdfc2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8e9b60;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b453450;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1489ce0b2;
  FUN_145c22c52(&DAT_14cb0ca98,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ce0b2 FUN_1489ce0b2 body=60 status=ok
// SIG undefined FUN_1489ce0b2(void)

void FUN_1489ce0b2(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0x3e0) == 0;
  if (!bVar1) {
    FUN_14007fbbc();
    FUN_14578778c(*(undefined8 *)(param_1 + 0x3e0));
  }
  *(bool *)(param_1 + 0x502) = bVar1;
  FUN_1489cdf2a(param_1);
  return;
}



// FUNCTION 1489ce0ee FUN_1489ce0ee body=244 status=ok
// SIG undefined FUN_1489ce0ee(void)

undefined8 FUN_1489ce0ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149efde30;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4534c0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1489ce1e4;
  FUN_145937e4a(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ce1e4 FUN_1489ce1e4 body=60 status=ok
// SIG undefined FUN_1489ce1e4(void)

void FUN_1489ce1e4(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(longlong *)(param_1 + 0x3e0) == 0;
  if (!bVar1) {
    FUN_14007fbbc();
    FUN_14578778c(*(undefined8 *)(param_1 + 0x3e0));
  }
  *(bool *)(param_1 + 0x502) = bVar1;
  FUN_1489cdf2a(param_1);
  return;
}



// FUNCTION 1489ce220 FUN_1489ce220 body=136 status=ok
// SIG undefined FUN_1489ce220(void)

uint FUN_1489ce220(void)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1489ce2aa(&local_20);
  uVar2 = 0;
  if (0 < (longlong)local_18) {
    lVar1 = 0;
    do {
      uVar2 = uVar2 + (**(char **)(local_20 + lVar1 * 8) == '\x03');
      lVar1 = lVar1 + 1;
    } while (local_18 != lVar1);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1 < uVar2);
  }
  FUN_1459633b0(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ce2aa FUN_1489ce2aa body=132 status=ok
// SIG undefined FUN_1489ce2aa(void)

longlong * FUN_1489ce2aa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar6);
      uVar5 = FUN_14001cc68(0x368,0x10);
      FUN_1489d68ea(uVar5,uVar3);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar5;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return param_1;
}



// FUNCTION 1489ce390 FUN_1489ce390 body=470 status=ok
// SIG undefined FUN_1489ce390(void)

int * FUN_1489ce390(longlong param_1,int *param_2)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar2 = (float)FUN_145787b36();
  if (fVar2 < 1.0) {
    cVar1 = FUN_1489ce220();
    if (cVar1 != '\0') {
      FUN_1489cdf2a(param_1);
      *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x90) =
           -((int)ROUND(-0.5 - (*(float *)(param_1 + 0x50c) + *(float *)(param_1 + 0x50c))) >> 1);
      *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x94) =
           -((int)ROUND(-0.5 - (*(float *)(param_1 + 0x510) + *(float *)(param_1 + 0x510))) >> 1);
      *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x98) =
           -((int)ROUND(-0.5 - (*(float *)(param_1 + 0x514) + *(float *)(param_1 + 0x514))) >> 1);
      *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x9c) =
           -((int)ROUND(-0.5 - (*(float *)(param_1 + 0x518) + *(float *)(param_1 + 0x518))) >> 1);
      FUN_1404835a8(*(undefined8 *)(param_1 + 0x3e0));
      FUN_1404838ec(*(undefined8 *)(param_1 + 0x3e0));
    }
  }
  FUN_1489c6612(param_1,&local_40);
  *(int *)(param_1 + 0x504) = local_40;
  *(int *)(param_1 + 0x508) = local_38;
  local_48 = (double)*(int *)(*(longlong *)(param_1 + 0x3e0) + 0x8c);
  local_50 = (double)*(int *)(*(longlong *)(param_1 + 0x3e0) + 0x88);
  FUN_14039c14e(*(undefined8 *)(DAT_14cb0d2b0 + 0xc20),&local_50);
  *param_2 = (int)((ulonglong)(longlong)ROUND(local_50 + local_50 + 0.5) >> 1) -
             (local_40 + local_3c);
  param_2[1] = (int)((ulonglong)(longlong)ROUND(local_48 + local_48 + 0.5) >> 1) -
               (local_38 + local_34);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ce568 FUN_1489ce568 body=556 status=ok
// SIG undefined FUN_1489ce568(void)

void FUN_1489ce568(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  size_t sVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  wchar_t *_Str;
  bool bVar9;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  undefined8 local_c0 [16];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14048362e();
  if (*(longlong *)(param_1 + 0x480) == 0) goto LAB_1489ce598;
  if (*(char *)(param_1 + 0x502) == '\x01') {
    bVar9 = *(longlong *)(param_1 + 0x3e0) == 0;
    if (!bVar9) {
      FUN_14007fbbc();
      FUN_14578778c(*(undefined8 *)(param_1 + 0x3e0));
    }
    *(bool *)(param_1 + 0x502) = bVar9;
  }
  FUN_1489ce390(param_1,&local_c8);
  plVar1 = *(longlong **)(param_1 + 0x480);
  lVar2 = plVar1[0x44];
  plVar3 = *(longlong **)(lVar2 + 8);
  if (plVar3 == (longlong *)0x0) {
    cVar4 = FUN_1489dcb9a(lVar2);
    if ((((cVar4 == '\0') && (DAT_14cb90e00 != 0)) && (DAT_14cb90e08 != 0)) &&
       (0 < *(int *)(DAT_14cb90e08 + 8))) {
      *(int *)(param_1 + 0x498) = local_c8;
      *(int *)(param_1 + 0x49c) = local_c4;
      lVar2 = *(longlong *)(param_1 + 0x480);
      puVar7 = (undefined8 *)(param_1 + 0x488);
      puVar8 = local_c0;
      for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_145c22d2a(*(undefined8 *)(lVar2 + 0x220),local_c0,param_1 + 0x4f0,lVar2 + 0x1dc);
      *(undefined1 *)(param_1 + 0x501) = 1;
    }
  }
  else {
    if ((*(int *)(lVar2 + 0x88) != local_c8) || (*(int *)(lVar2 + 0x8c) != local_c4)) {
      (**(code **)(*plVar1 + 0x478))(plVar1,local_c8,local_c4);
    }
    if (*(char *)(param_1 + 0x500) == '\x01') {
      if (*(int *)(param_1 + 0x4f8) == 0) {
        _Str = L"";
LAB_1489ce702:
        local_40 = 0;
        sVar5 = wcslen(_Str);
        FUN_1446fe5a4(local_c0,_Str,sVar5 & 0xffffffff,1);
      }
      else {
        _Str = *(wchar_t **)(param_1 + 0x4f0);
        local_40 = 0;
        if (_Str != (wchar_t *)0x0) goto LAB_1489ce702;
        local_38 = 0;
        local_30 = 0;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x500) = 0;
    }
  }
  FUN_143e86992(*(undefined8 *)(param_1 + 0x480),*(undefined8 *)(param_1 + 0x3e0));
LAB_1489ce598:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489ce796 FUN_1489ce796 body=762 status=ok
// SIG undefined FUN_1489ce796(void)

void FUN_1489ce796(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f4759e();
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar7 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[10];
    }
    iVar8 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)param_1[0xb] - 1U & *(uint *)(param_2 + 0xc)) * 4);
    if (iVar8 != -1) {
      do {
        lVar10 = param_1[2] + (longlong)iVar8 * 0x80;
        if (*(uint *)(param_1[2] + (longlong)iVar8 * 0x80) == *(uint *)(param_2 + 0xc))
        goto LAB_1489ce7ce;
        iVar8 = *(int *)(lVar10 + 0x78);
      } while (iVar8 != -1);
    }
  }
  lVar10 = 0;
LAB_1489ce7ce:
  local_50 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_2 + 0x20))->QuadPart;
  local_48 = *(undefined8 *)(param_2 + 0x28);
  local_40 = *(longlong **)(param_2 + 0x30);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_140230656(&local_50);
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (cVar5 != '\0') {
    lVar6 = *(longlong *)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x30);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    uVar9 = 0;
    if (((((lVar6 != DAT_14c9658a8) && (uVar9 = 1, lVar6 != DAT_14c9658c0)) &&
         (uVar9 = 2, lVar6 != DAT_14c9658d8)) &&
        (((uVar9 = 3, lVar6 != DAT_14c9658f0 && (uVar9 = 4, lVar6 != DAT_14c965908)) &&
         ((uVar9 = 5, lVar6 != DAT_14c965920 &&
          ((uVar9 = 6, lVar6 != DAT_14c965938 && (uVar9 = 7, lVar6 != DAT_14c965950)))))))) &&
       ((uVar9 = 8, lVar6 != DAT_14c965848 &&
        (((((uVar9 = 9, lVar6 != DAT_14c965890 && (uVar9 = 10, lVar6 != DAT_14c965818)) &&
           (uVar9 = 0xb, lVar6 != DAT_14c965830)) &&
          ((uVar9 = 0xc, lVar6 != DAT_14c965968 && (uVar9 = 0xd, lVar6 != DAT_14c965980)))) &&
         (uVar9 = 0xe, lVar6 != DAT_14c9659b0)))))) {
      uVar9 = -(uint)(lVar6 != DAT_14c965998) | 0xf;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (-1 < (int)uVar9) {
      if (param_3 == '\0') {
        uVar12 = 0;
      }
      else {
        uVar12 = 0x3f800000;
      }
      *(undefined4 *)(lVar10 + 0x30 + (ulonglong)uVar9 * 4) = uVar12;
    }
    plVar7 = (longlong *)param_1[1];
    if (plVar7 != (longlong *)0x0) {
      iVar8 = (int)plVar7[1];
      do {
        if (iVar8 == 0) goto LAB_1489cea6d;
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar11 = iVar8 == iVar4;
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar8 + 1;
          iVar4 = iVar8;
        }
        iVar8 = iVar4;
        UNLOCK();
      } while (!bVar11);
      puVar3 = (undefined8 *)*param_1;
      if (puVar3 != (undefined8 *)0x0) {
        QueryPerformanceCounter(&local_50);
        lVar6 = local_50.QuadPart - puVar3[3];
        auVar13._8_4_ = (int)((ulonglong)lVar6 >> 0x20);
        auVar13._0_8_ = lVar6;
        auVar13._12_4_ = 0x45300000;
        *(float *)(lVar10 + 0xc) =
             (float)((((double)CONCAT44(0x43300000,(int)lVar6) - 4503599627370496.0) +
                     (auVar13._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
        (**(code **)(*(longlong *)*puVar3 + 0x98))((longlong *)*puVar3,lVar10 + 8);
      }
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
LAB_1489cea6d:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cea92 FUN_1489cea92 body=526 status=ok
// SIG undefined FUN_1489cea92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489cea92(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70 [9];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0xd) != *(int *)((longlong)param_1 + 0x94)) {
    puVar9 = param_1 + 0x13;
    if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_1[0x14];
    }
    iVar10 = *(int *)((longlong)puVar9 + (ulonglong)(*(int *)(param_1 + 0x15) - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar11 = param_1[0xc] + (longlong)iVar10 * 0x80;
        if (*(uint *)(param_1[0xc] + (longlong)iVar10 * 0x80) == param_2) goto LAB_1489ceac3;
        iVar10 = *(int *)(lVar11 + 0x78);
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_1489ceac3:
  puVar8 = (undefined4 *)(lVar11 + 8);
  if (lVar11 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 3) != *(int *)((longlong)param_1 + 0x44)) {
    puVar9 = param_1 + 9;
    if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_1[10];
    }
    iVar10 = *(int *)((longlong)puVar9 + (ulonglong)(*(int *)(param_1 + 0xb) - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar11 = param_1[2] + (longlong)iVar10 * 0x80;
        if (*(uint *)(param_1[2] + (longlong)iVar10 * 0x80) == param_2) goto LAB_1489ceadc;
        iVar10 = *(int *)(lVar11 + 0x78);
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_1489ceadc:
  puVar12 = (undefined4 *)(lVar11 + 8);
  if (lVar11 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  if ((puVar8 != (undefined4 *)0x0) && (puVar12 != (undefined4 *)0x0)) {
    uVar3 = *puVar8;
    local_88 = &local_80;
    local_90 = local_70;
    local_80 = **(undefined8 **)(puVar8 + 4);
    uStack_78 = (*(undefined8 **)(puVar8 + 4))[1];
    local_98 = uVar3;
    memcpy(local_90,*(void **)(puVar8 + 2),0x44);
    puVar6 = local_88;
    local_98 = *puVar12;
    *puVar12 = uVar3;
    puVar9 = *(undefined8 **)(puVar12 + 4);
    uVar4 = *puVar9;
    *puVar9 = *local_88;
    *local_88 = uVar4;
    uVar4 = puVar9[1];
    puVar9[1] = puVar6[1];
    puVar6[1] = uVar4;
    uVar4 = **(undefined8 **)(puVar12 + 2);
    **(undefined8 **)(puVar12 + 2) = *local_90;
    *local_90 = uVar4;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) {
LAB_1489cec67:
      (**(code **)(*_DAT_00000000 + 0x98))(_DAT_00000000,puVar12);
    }
    else {
      iVar10 = (int)plVar5[1];
      do {
        if (iVar10 == 0) goto LAB_1489cec67;
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar13 = iVar10 == iVar7;
        if (bVar13) {
          *(int *)(plVar5 + 1) = iVar10 + 1;
          iVar7 = iVar10;
        }
        iVar10 = iVar7;
        UNLOCK();
      } while (!bVar13);
      (**(code **)(**(longlong **)*param_1 + 0x98))(*(longlong **)*param_1,puVar12);
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
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489ceca2 FUN_1489ceca2 body=123 status=ok
// SIG undefined FUN_1489ceca2(void)

void FUN_1489ceca2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = (undefined4)param_3;
  local_18 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_14 = (undefined4)param_2;
  local_10 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_28 = (undefined4)param_4;
  local_24 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_c = 2;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),&local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ced1e FUN_1489ced1e body=103 status=ok
// SIG undefined FUN_1489ced1e(void)

void FUN_1489ced1e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_14 = 0;
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_c = 3;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ced86 FUN_1489ced86 body=117 status=ok
// SIG undefined FUN_1489ced86(void)

void FUN_1489ced86(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_14 = (undefined4)param_3;
  local_10 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_c = 1;
  local_38 = 0;
  local_20 = param_4;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cedfc FUN_1489cedfc body=103 status=ok
// SIG undefined FUN_1489cedfc(void)

void FUN_1489cedfc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_14 = 0;
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_c = 4;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cee64 FUN_1489cee64 body=776 status=ok
// SIG undefined FUN_1489cee64(void)

undefined8 * FUN_1489cee64(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  char *pcVar9;
  size_t sVar10;
  void *_Src;
  undefined8 uVar11;
  int iVar12;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  undefined8 *local_188;
  longlong local_180 [2];
  longlong local_170 [2];
  longlong *local_160;
  uint local_158;
  undefined4 uStack_154;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_188 = param_1;
  FUN_144a791f8(param_2,&DAT_149e3fc1c,4,1);
  plVar8 = (longlong *)FUN_141054386();
  (**(code **)(*plVar8 + 0x40))(plVar8,&local_160);
  plVar8 = local_160;
  lVar3 = CONCAT44(uStack_154,local_158);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)CONCAT44(uStack_154,local_158);
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
  local_190 = lVar3;
  (**(code **)(*local_160 + 0x68))(local_160,param_2);
  iVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  if (iVar6 != 0) {
    iVar12 = 0;
    do {
      pcVar9 = (char *)(**(code **)(*param_3 + 0x50))(param_3,iVar12);
      local_60 = 0;
      if (pcVar9 == (char *)0x0) {
        local_58 = 0;
        local_50 = 0;
      }
      else {
        sVar10 = strlen(pcVar9);
        FUN_1446e6fe8(&local_160,pcVar9,sVar10 & 0xffffffff,1);
      }
      FUN_140056680(local_170,local_58);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      pcVar9 = (char *)(**(code **)(*param_3 + 0x38))(param_3,iVar12);
      local_60 = 0;
      if (pcVar9 == (char *)0x0) {
        local_58 = 0;
        local_50 = 0;
      }
      else {
        sVar10 = strlen(pcVar9);
        FUN_1446e6fe8(&local_160,pcVar9,sVar10 & 0xffffffff,1);
      }
      FUN_140056680(local_180,local_58);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*local_160 + 0xb0))(local_160,local_170,local_180);
      if (local_180[0] != 0) {
        FUN_1400020a8();
      }
      if (local_170[0] != 0) {
        FUN_1400020a8();
      }
      iVar12 = iVar12 + 1;
    } while (iVar6 != iVar12);
  }
  uVar7 = (**(code **)(*param_3 + 0x60))(param_3);
  _Src = (void *)(**(code **)(*param_3 + 0x58))(param_3);
  local_160 = (longlong *)0x0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7);
  }
  local_158 = uVar7;
  if (uVar7 == 0) {
    uStack_154 = 0;
  }
  else {
    FUN_1447a127e(&local_160,uVar7,0);
    memcpy(local_160,_Src,(ulonglong)uVar7);
  }
  (**(code **)(*plVar8 + 0x88))(plVar8,&local_160);
  uVar11 = (**(code **)(*param_3 + 0x20))(param_3);
  FUN_1400b22c2(local_170,uVar11);
  (**(code **)(*plVar8 + 0x60))(plVar8,local_170);
  if (local_170[0] != 0) {
    FUN_1400020a8();
  }
  puVar5 = local_188;
  *local_188 = plVar8;
  local_188[1] = local_190;
  if (local_160 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1489cf16e FUN_1489cf16e body=130 status=ok
// SIG undefined FUN_1489cf16e(void)

void FUN_1489cf16e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = *param_2;
  lVar1 = param_2[1];
  puVar2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      plVar3 = param_1 + 2;
    }
    else {
      puVar2[2] = lVar1;
      plVar3 = (longlong *)(lVar1 + 0x18);
    }
    *plVar3 = (longlong)puVar2;
    param_1[1] = (longlong)puVar2;
                    /* WARNING: Could not recover jumptable at 0x0001489cf1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 1489cf1f0 FUN_1489cf1f0 body=197 status=ok
// SIG undefined FUN_1489cf1f0(void)

void FUN_1489cf1f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 == 0) {
    return;
  }
  if ((int)param_1[3] != 1) {
    if (param_1[1] == param_2) {
      lVar3 = *(longlong *)(param_1[1] + 0x10);
      param_1[1] = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    else if (param_1[2] == param_2) {
      lVar3 = *(longlong *)(param_1[2] + 0x18);
      param_1[2] = lVar3;
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x18);
      *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18) = lVar3;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    plVar4 = *(longlong **)(param_2 + 8);
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
    FUN_1400020a8(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001489cf276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + -1);
    return;
  }
  FUN_145cbf3c6(param_1);
  return;
}



// FUNCTION 1489cf2b6 FUN_1489cf2b6 body=125 status=ok
// SIG undefined FUN_1489cf2b6(void)

longlong FUN_1489cf2b6(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[9] == 0) {
    return 0;
  }
  plVar2 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[8];
  }
  iVar3 = *(int *)((longlong)plVar2 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar1 = *param_1;
    lVar4 = (longlong)iVar3 * 0x20;
    iVar3 = *(int *)(lVar1 + 0x18 + lVar4);
  } while (*(uint *)(lVar1 + lVar4) != param_2);
  if (*(longlong *)(lVar1 + 8 + lVar4) == *param_3) {
    return lVar1 + lVar4 + 8;
  }
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar4 = (longlong)iVar3 * 0x20;
    iVar3 = *(int *)(lVar1 + 0x18 + lVar4);
  } while ((*(uint *)(lVar1 + lVar4) != param_2) || (*(longlong *)(lVar1 + 8 + lVar4) != *param_3));
  return lVar1 + lVar4 + 8;
}



// FUNCTION 1489cf334 FUN_1489cf334 body=109 status=ok
// SIG undefined FUN_1489cf334(void)

void FUN_1489cf334(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar5;
  int iVar4;
  
  if ((int)param_1[9] != 0) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar4 = iVar3, iVar4 != -1) {
      lVar1 = *param_1;
      lVar5 = (longlong)iVar4 * 0x20;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5);
      if (*(uint *)(lVar1 + lVar5) == param_2) {
        do {
          if (*(longlong *)(lVar1 + 8 + lVar5) == *param_3) {
            FUN_1489d7850(param_1,iVar4);
            return;
          }
          do {
            iVar4 = iVar3;
            if (iVar4 == -1) {
              return;
            }
            lVar5 = (longlong)iVar4 * 0x20;
            iVar3 = *(int *)(lVar1 + 0x18 + lVar5);
          } while (*(uint *)(lVar1 + lVar5) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1489cf3a2 FUN_1489cf3a2 body=293 status=ok
// SIG undefined FUN_1489cf3a2(void)

void FUN_1489cf3a2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_28,"CohtmlPlugin",1);
  uVar2 = FUN_144a52528();
  FUN_1402c9134(uVar2,local_28,local_1c,1);
  if (((DAT_14cb90c20 == 0) || (DAT_14cb90c18 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*DAT_14cb90c18 + 0x30))(), cVar1 == '\0')) {
    FUN_1446f470e(&local_30,L"CohtmlHUD Surface Partitioning Compositor",1);
    lVar3 = FUN_1489cf4c8(param_1,local_30);
  }
  else {
    plVar4 = DAT_14cb90c18;
    if (DAT_14cb90c20 == 0) {
      plVar4 = (longlong *)0x0;
    }
    lVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  }
  *(longlong *)(lVar3 + 0x150) = param_1;
  *(undefined4 *)(lVar3 + 0x58) = 0;
  lVar5 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  FUN_1489de7cc(*(undefined8 *)(param_1 + 0x1e8),lVar3,lVar5);
  lVar3 = *(longlong *)(param_1 + 0x1e8) + 0x28;
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    lVar3 = 0;
  }
  FUN_1489dcba2(*(undefined8 *)(param_1 + 0x220),lVar3);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cf4c8 FUN_1489cf4c8 body=183 status=ok
// SIG undefined FUN_1489cf4c8(void)

undefined8 FUN_1489cf4c8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b12c34();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cf5ac FUN_1489cf5ac body=114 status=ok
// SIG undefined FUN_1489cf5ac(void)

undefined4 FUN_1489cf5ac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    lVar2 = FUN_140c1325c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1489cf5e0;
  }
  lVar4 = 0;
LAB_1489cf5e0:
  plVar3 = (longlong *)FUN_147aeddb2(lVar4);
  uVar5 = 0;
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
    uVar5 = 0;
    if (cVar1 != '\0') {
      lVar4 = FUN_144a7ba4c(plVar3);
      if (lVar4 != 0) {
        uVar5 = *(undefined4 *)(lVar4 + 0xe0);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1489cf61e FUN_1489cf61e body=358 status=ok
// SIG undefined FUN_1489cf61e(void)

void FUN_1489cf61e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_108 [40];
  longlong local_e0 [2];
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined8 local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = FUN_14090ceee(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x278),
                        *(longlong *)(param_1 + 0x128),0);
  plVar2 = (longlong *)FUN_144a7d136();
  plVar3 = (longlong *)plVar2[0x22];
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    plVar3 = (longlong *)plVar2[0x22];
  }
  uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,1);
  FUN_1446f470e(&local_70,L"GammaCorrectionExponent",1);
  FUN_14472da24(uVar1,local_70,uVar4);
  FUN_1400b22c2(local_d0,param_3);
  FUN_1489cf786(local_c0,uVar1,local_d0);
  FUN_1400b22c2(local_e0,param_3);
  local_68 = local_e0;
  local_60 = local_c0;
  FUN_1489d7ab0(param_1 + 0x130,local_54);
  if (local_e0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cf786 FUN_1489cf786 body=123 status=ok
// SIG undefined FUN_1489cf786(void)

undefined8 * FUN_1489cf786(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  iVar1 = (int)param_3[1];
  _Src = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1489cf802 FUN_1489cf802 body=167 status=ok
// SIG undefined FUN_1489cf802(void)

void FUN_1489cf802(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_49;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_49 = param_5;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1400b22c2(local_60,param_3);
  local_48 = local_60;
  local_40 = &local_49;
  FUN_1489d8024(param_1 + 0x180,local_34,&local_48,0);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cf8aa FUN_1489cf8aa body=248 status=ok
// SIG undefined FUN_1489cf8aa(void)

void FUN_1489cf8aa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1400b22c2(&local_40,param_3);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  iVar1 = local_38 + -1;
  if (local_38 == 0) {
    iVar1 = 0;
  }
  FUN_144a49b4a(iVar1,puVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_40,param_3);
  FUN_1489d8192(param_1 + 0x130,&local_40);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_40,param_3);
  FUN_1489d8330(param_1 + 0xd8,&local_40);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489cf9a4 FUN_1489cf9a4 body=82 status=ok
// SIG undefined FUN_1489cf9a4(void)

undefined8 * FUN_1489cf9a4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_145c22f68();
  *param_1 = &PTR_FUN_14b452010;
  param_1[5] = *param_2;
  lVar2 = param_2[1];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  return param_1;
}



// FUNCTION 1489cf9f6 FUN_1489cf9f6 body=157 status=ok
// SIG undefined FUN_1489cf9f6(void)

longlong * FUN_1489cf9f6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_1489cfa5d:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1489cfa5d;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x28);
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
    if ((lVar4 == 0) || (cVar6 = FUN_144729dda(lVar4 + 0x328), cVar6 == '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
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
    else {
      *param_2 = lVar4;
      param_2[1] = (longlong)plVar3;
    }
  }
  return param_2;
}



// FUNCTION 1489cfa94 FUN_1489cfa94 body=110 status=ok
// SIG undefined FUN_1489cfa94(void)

bool FUN_1489cfa94(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1489cf9f6(param_1,&local_28);
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



// FUNCTION 1489cfb04 FUN_1489cfb04 body=155 status=ok
// SIG undefined FUN_1489cfb04(void)

undefined8 FUN_1489cfb04(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1489cf9f6(param_1,&local_28);
  if (local_28 != 0) {
    cVar3 = FUN_144729dda(local_28 + 0x330);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(local_28 + 0x330);
      uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x220) + 8);
      goto LAB_1489cfb58;
    }
  }
  uVar5 = 0;
LAB_1489cfb58:
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
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cfba0 FUN_1489cfba0 body=171 status=ok
// SIG undefined FUN_1489cfba0(void)

undefined4 * FUN_1489cfba0(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1489cf9f6(param_1,&local_28);
  if (local_28 != 0) {
    cVar3 = FUN_144729dda(local_28 + 0x330);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(local_28 + 0x330);
      uVar5 = *(undefined4 *)(lVar4 + 0x200);
      uVar6 = *(undefined4 *)(lVar4 + 0x204);
      uVar7 = *(undefined4 *)(lVar4 + 0x208);
      uVar8 = *(undefined4 *)(lVar4 + 0x20c);
      goto LAB_1489cfbf4;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
LAB_1489cfbf4:
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cfc4e FUN_1489cfc4e body=159 status=ok
// SIG undefined FUN_1489cfc4e(void)

ulonglong FUN_1489cfc4e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1489cf9f6(param_1,&local_28);
  if (local_28 != 0) {
    cVar3 = FUN_144729dda(local_28 + 0x330);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(local_28 + 0x330);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = FUN_145b81e40();
      uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 == lVar5);
      goto LAB_1489cfc8d;
    }
  }
  uVar6 = 0;
LAB_1489cfc8d:
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
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cfcee FUN_1489cfcee body=171 status=ok
// SIG undefined FUN_1489cfcee(void)

undefined8 FUN_1489cfcee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_1489cfd68:
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    FUN_1413055f8(param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1489cfd68;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_28 = *(undefined8 *)(param_1 + 0x28);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plStack_20 = plVar3;
    FUN_1413055f8(param_2);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489cfd9c FUN_1489cfd9c body=125 status=ok
// SIG undefined FUN_1489cfd9c(void)

undefined8 FUN_1489cfd9c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141011706(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143e94adc();
  }
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cfe1a FUN_1489cfe1a body=144 status=ok
// SIG undefined FUN_1489cfe1a(void)

undefined4 * FUN_1489cfe1a(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141011706(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(local_28 + 0x210);
    uVar4 = *(undefined4 *)(local_28 + 0x214);
    uVar5 = *(undefined4 *)(local_28 + 0x218);
    uVar6 = *(undefined4 *)(local_28 + 0x21c);
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cfeb2 FUN_1489cfeb2 body=26 status=ok
// SIG undefined FUN_1489cfeb2(void)

byte FUN_1489cfeb2(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_1489cfecc(*(longlong *)(param_1 + 0x28) + 0x10,0);
  return bVar1 ^ 1;
}



// FUNCTION 1489cfecc FUN_1489cfecc body=16 status=ok
// SIG undefined FUN_1489cfecc(void)

byte FUN_1489cfecc(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 1489cfedc FUN_1489cfedc body=33 status=ok
// SIG undefined FUN_1489cfedc(void)

undefined8 FUN_1489cfedc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x28) + 0x10);
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x220) + 8);
}



// FUNCTION 1489cfefe FUN_1489cfefe body=40 status=ok
// SIG undefined FUN_1489cfefe(void)

undefined8 * FUN_1489cfefe(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x28) + 0x10);
  uVar1 = *(undefined8 *)(lVar2 + 0x208);
  *param_2 = *(undefined8 *)(lVar2 + 0x200);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1489cff26 FUN_1489cff26 body=39 status=ok
// SIG undefined FUN_1489cff26(void)

bool FUN_1489cff26(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x28) + 0x10);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar2 = FUN_145b81e40();
  return lVar1 == lVar2;
}



// FUNCTION 1489cff4e FUN_1489cff4e body=149 status=ok
// SIG undefined FUN_1489cff4e(void)

undefined8 * FUN_1489cff4e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*DAT_14c98e618 + 0x30))(DAT_14c98e618,&local_28);
  *param_2 = *(undefined8 *)(local_28 + 0x510);
  lVar3 = *(longlong *)(local_28 + 0x518);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489cffe4 FUN_1489cffe4 body=1003 status=ok
// SIG undefined FUN_1489cffe4(void)

void FUN_1489cffe4(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  longlong *local_278;
  longlong *local_270;
  undefined1 local_268;
  undefined1 local_267;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_249;
  undefined1 local_248 [8];
  longlong *local_240;
  longlong local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  uVar7 = FUN_1447210f0();
  iVar6 = FUN_14490d72a(uVar7);
  if (iVar6 != 1) {
    (**(code **)(*param_1 + 0x638))(param_1,&local_200);
    plVar1 = local_1f8;
    if (param_1 + 0x7e != &local_200) {
      param_1[0x7e] = local_200;
      local_200 = 0;
      plVar3 = (longlong *)param_1[0x7f];
      if (local_1f8 != plVar3) {
        local_1f8 = (longlong *)0x0;
        param_1[0x7f] = (longlong)plVar1;
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
    }
    plVar1 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1f8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar4 = DAT_14cb0d2b0;
    cVar5 = FUN_140432338(DAT_14cb0d2b0);
    if (cVar5 != '\0') {
      local_278 = *(longlong **)(lVar4 + 0xc20);
      FUN_1469b80c8(&local_200);
      local_230 = param_1[0x7e];
      local_270 = (longlong *)param_1[0x7f];
      if (local_270 == (longlong *)0x0) {
        local_228 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_270 + 1) = (int)local_270[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_270 + 1) = (int)local_270[1] + 1;
        UNLOCK();
        local_228 = local_270;
      }
      uVar7 = FUN_1469b8142(&local_200,&local_230);
      local_288 = &local_249;
      FUN_1469e620a(local_248,"SWeakWidget",
                    ".\\../Plugins/Runtime/Coherent/CohtmlPlugin/Source/CohtmlPlugin/Private/CohtmlInputActor.cpp"
                    ,0x58);
      FUN_1469b81c8(local_248,&local_220,uVar7);
      local_210 = local_220;
      local_208 = local_218;
      if (local_218 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_218 + 1) = (int)local_218[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_278 + 0x2d8))(local_278,&local_210,0);
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_218 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar2 = (int *)((longlong)local_218 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_218 + 0x10))(local_218);
          }
        }
      }
      plVar1 = local_270;
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_240 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)local_240 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_240 + 0x10))(local_240);
          }
        }
      }
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1469b823c(&local_200);
    }
    if (param_1[0x7e] != 0) {
      local_268 = DAT_14c96b238;
      local_267 = 1;
      local_260 = 0;
      uStack_258 = 0;
      FUN_14020e622();
      FUN_1489e28b2(param_1[0x7e],param_2);
      FUN_1489e28ba(param_1[0x7e],param_3);
      FUN_1489e28c2(param_1[0x7e],param_4);
      FUN_1489e28ca(param_1[0x7e],param_5);
      FUN_1489d03e4(param_1[0x7e] + 0x268,&local_200,param_1,FUN_1489d04da);
      FUN_1489d03e4(param_1[0x7e] + 0x280,&local_200,param_1,FUN_1489d0500);
      FUN_1489d03e4(param_1[0x7e] + 0x298,&local_200,param_1,FUN_1489d0526);
      FUN_1489d03e4(param_1[0x7e] + 0x2b0,&local_200,param_1,FUN_1489d054c);
      FUN_1489d0572(param_1[0x7e] + 0x2c8,&local_200,param_1);
      FUN_1489d0718(param_1[0x7e] + 0x2e0,&local_200,param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d03d0 FUN_1489d03d0 body=19 status=ok
// SIG undefined FUN_1489d03d0(void)

void FUN_1489d03d0(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x3f0) + 0x31d) = param_2;
  }
  return;
}



// FUNCTION 1489d03e4 FUN_1489d03e4 body=244 status=ok
// SIG undefined FUN_1489d03e4(void)

undefined8
FUN_1489d03e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b453690;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b453620;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1489d85da(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d04da FUN_1489d04da body=38 status=ok
// SIG undefined FUN_1489d04da(void)

void FUN_1489d04da(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143e87def(param_2);
  FUN_1489c6a58(param_1 + 0x390,uVar1);
  return;
}



// FUNCTION 1489d0500 FUN_1489d0500 body=38 status=ok
// SIG undefined FUN_1489d0500(void)

void FUN_1489d0500(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143e87def(param_2);
  FUN_1489c6a96(param_1 + 0x3a0,uVar1);
  return;
}



// FUNCTION 1489d0526 FUN_1489d0526 body=38 status=ok
// SIG undefined FUN_1489d0526(void)

void FUN_1489d0526(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143e87def(param_2);
  FUN_1489c6ad4(param_1 + 0x3b0,uVar1);
  return;
}



// FUNCTION 1489d054c FUN_1489d054c body=38 status=ok
// SIG undefined FUN_1489d054c(void)

void FUN_1489d054c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143e87def(param_2);
  FUN_1489c6b12(param_1 + 0x3c0,uVar1);
  return;
}



// FUNCTION 1489d0572 FUN_1489d0572 body=244 status=ok
// SIG undefined FUN_1489d0572(void)

undefined8 FUN_1489d0572(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b453770;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b453700;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1489d0668;
  FUN_1489d8950(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d0668 FUN_1489d0668 body=175 status=ok
// SIG undefined FUN_1489d0668(void)

void FUN_1489d0668(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [40];
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined3 uStack_18;
  undefined4 uStack_15;
  undefined4 uStack_11;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *(undefined8 *)(param_2 + 8);
  uStack_70 = *(undefined8 *)(param_2 + 0x10);
  local_68 = *(undefined8 *)(param_2 + 0x18);
  local_80 = &PTR_FUN_149eda650;
  local_60 = *(undefined8 *)(param_2 + 0x20);
  uStack_58 = *(undefined8 *)(param_2 + 0x28);
  local_50 = *(undefined8 *)(param_2 + 0x30);
  uStack_48 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(undefined8 *)(param_2 + 0x40);
  local_38 = *(undefined8 *)(param_2 + 0x48);
  local_30 = *(longlong *)(param_2 + 0x50);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  uStack_28 = *(undefined4 *)(param_2 + 0x58);
  uStack_24 = *(undefined4 *)(param_2 + 0x5c);
  uStack_20 = *(undefined4 *)(param_2 + 0x60);
  uStack_1c = *(undefined4 *)(param_2 + 100);
  uStack_15 = *(undefined4 *)(param_2 + 0x6b);
  uStack_11 = *(undefined4 *)(param_2 + 0x6f);
  uStack_18 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
  FUN_1489d08f0(param_1 + 0x3d0);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d0718 FUN_1489d0718 body=244 status=ok
// SIG undefined FUN_1489d0718(void)

undefined8 FUN_1489d0718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4537e0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1489d080e;
  FUN_140c6314c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d081a FUN_1489d081a body=133 status=ok
// SIG undefined FUN_1489d081a(void)

bool FUN_1489d081a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*DAT_14c98e618 + 0x98))(DAT_14c98e618,&local_30);
  lVar3 = *(longlong *)(param_1 + 0x3f0);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30 == lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d08a0 FUN_1489d08a0 body=30 status=ok
// SIG undefined FUN_1489d08a0(void)

void FUN_1489d08a0(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1489d081a();
  FUN_143e7fda8(param_1,uVar1 ^ 1);
  return;
}



// FUNCTION 1489d08be FUN_1489d08be body=30 status=ok
// SIG undefined FUN_1489d08be(void)

void FUN_1489d08be(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x400) = param_2;
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    return;
  }
  *(char *)(*(longlong *)(param_1 + 0x3f0) + 0x31e) = (char)param_2;
  return;
}



// FUNCTION 1489d08d6 FUN_1489d08d6 body=7 status=ok
// SIG undefined FUN_1489d08d6(void)

undefined4 FUN_1489d08d6(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x400);
}



// FUNCTION 1489d08de FUN_1489d08de body=24 status=ok
// SIG undefined FUN_1489d08de(void)

void FUN_1489d08de(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x3f0) + 799) = param_2;
  return;
}



// FUNCTION 1489d08f0 FUN_1489d08f0 body=216 status=ok
// SIG undefined FUN_1489d08f0(void)

void FUN_1489d08f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined3 uStack_28;
  undefined4 uStack_25;
  undefined4 uStack_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_2[1];
  uStack_80 = param_2[2];
  local_78 = param_2[3];
  local_90 = &PTR_FUN_149eda650;
  local_70 = param_2[4];
  uStack_68 = param_2[5];
  local_60 = param_2[6];
  uStack_58 = param_2[7];
  local_50 = param_2[8];
  local_48 = param_2[9];
  local_40 = param_2[10];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  uStack_38 = *(undefined4 *)(param_2 + 0xb);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uStack_30 = *(undefined4 *)(param_2 + 0xc);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 100);
  uStack_25 = *(undefined4 *)((longlong)param_2 + 0x6b);
  uStack_21 = *(undefined4 *)((longlong)param_2 + 0x6f);
  uStack_28 = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0x67) >> 8);
  FUN_1489c6b50();
  *param_2 = &PTR_FUN_149eda650;
  plVar3 = (longlong *)param_2[10];
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
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d09ca FUN_1489d09ca body=271 status=ok
// SIG undefined FUN_1489d09ca(void)

undefined8 * FUN_1489d09ca(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_238 [47];
  undefined1 local_209;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8 [424];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1489d0ada(local_1d8);
  local_1f0 = 0;
  FUN_14485c47a(&local_1f0,param_1);
  local_30 = local_1f0;
  FUN_1489d8f42(local_208,&local_209);
  FUN_1489d0afc(local_208,&local_1e8,local_1d8);
  *param_2 = local_1e8;
  param_2[1] = local_1e0;
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
    UNLOCK();
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1e0 + 0x10))(local_1e0);
        }
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  FUN_140a4ff8c(local_1d8);
  if ((local_28 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d0ada FUN_1489d0ada body=33 status=ok
// SIG undefined FUN_1489d0ada(void)

longlong FUN_1489d0ada(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  return param_1;
}



// FUNCTION 1489d0afc FUN_1489d0afc body=115 status=ok
// SIG undefined FUN_1489d0afc(void)

longlong * FUN_1489d0afc(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1489e2770(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1489d0b6f FUN_1489d0b6f body=665 status=ok
// SIG undefined FUN_1489d0b6f(void)

undefined8
FUN_1489d0b6f(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
             float *param_6,float *param_7,float *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  dVar1 = param_3[2];
  dVar10 = param_4[2] - dVar1;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar11 = param_4[1] - dVar3;
  dVar12 = *param_4 - dVar2;
  dVar7 = param_5[2] - dVar1;
  dVar9 = param_5[1] - dVar3;
  dVar8 = *param_5 - dVar2;
  dVar4 = *param_2 * dVar9 - dVar8 * param_2[1];
  dVar6 = param_2[2] * dVar8 - dVar7 * *param_2;
  dVar5 = param_2[1] * dVar7 - param_2[2] * dVar9;
  fVar13 = (float)(dVar10 * dVar4 + dVar12 * dVar5 + dVar11 * dVar6);
  if (0.001 <= fVar13) {
    dVar1 = param_1[2] - dVar1;
    dVar3 = param_1[1] - dVar3;
    dVar2 = *param_1 - dVar2;
    fVar14 = (float)(dVar4 * dVar1 + dVar5 * dVar2 + dVar6 * dVar3);
    *param_7 = fVar14;
    if (fVar14 < 0.0) {
      return 0;
    }
    if (fVar13 < fVar14) {
      return 0;
    }
    dVar4 = dVar2 * dVar11 - dVar12 * dVar3;
    dVar2 = dVar1 * dVar12 - dVar10 * dVar2;
    dVar1 = dVar3 * dVar10 - dVar11 * dVar1;
    fVar14 = (float)(param_2[2] * dVar4 + *param_2 * dVar1 + param_2[1] * dVar2);
    *param_8 = fVar14;
    if ((0.0 <= fVar14) && (fVar14 + *param_7 <= fVar13)) {
      fVar13 = 1.0 / fVar13;
      *param_6 = (float)((double)fVar13 * (dVar7 * dVar4 + dVar8 * dVar1 + dVar9 * dVar2));
      *param_7 = *param_7 * fVar13;
      *param_8 = fVar13 * *param_8;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1489d0e08 FUN_1489d0e08 body=568 status=ok
// SIG undefined FUN_1489d0e08(void)

undefined8
FUN_1489d0e08(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,uint param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  float *local_b0;
  float *local_a8;
  float *local_a0;
  longlong *local_98;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = param_5[1];
  if (0 < (longlong)(int)lVar8) {
    cVar4 = *(char *)((longlong)param_5 + 0xc);
    lVar5 = *param_5;
    lVar12 = *param_4;
    fVar18 = 0.0;
    fVar19 = 3.4028235e+38;
    uVar15 = 0xffffffff;
    uVar16 = 0;
    fVar20 = 0.0;
    local_98 = param_3;
    do {
      if (cVar4 == '\0') {
        uVar7 = (ulonglong)*(ushort *)(lVar5 + uVar16 * 2);
        uVar10 = (ulonglong)*(ushort *)(lVar5 + 4 + uVar16 * 2);
        uVar11 = (uint)*(ushort *)(lVar5 + 2 + uVar16 * 2);
      }
      else {
        uVar7 = (ulonglong)*(int *)(lVar5 + uVar16 * 4);
        uVar10 = (ulonglong)*(int *)(lVar5 + 8 + uVar16 * 4);
        uVar11 = *(uint *)(lVar5 + 4 + uVar16 * 4);
      }
      local_b8 = lVar12 + (longlong)(int)uVar11 * 0x18;
      local_a0 = &local_8c;
      local_a8 = &local_88;
      local_b0 = &local_84;
      cVar6 = FUN_1489d0b6f(param_1,param_2,lVar12 + uVar7 * 0x18,lVar12 + uVar10 * 0x18);
      if ((cVar6 != '\0') && (local_84 < fVar19)) {
        uVar15 = uVar16 & 0xffffffff;
        fVar18 = local_8c;
        fVar19 = local_84;
        fVar20 = local_88;
      }
      uVar16 = uVar16 + 3;
    } while (uVar16 < (ulonglong)(longlong)(int)lVar8);
    iVar14 = (int)uVar15;
    if (iVar14 != -1) {
      if (cVar4 == '\0') {
        uVar11 = (uint)*(ushort *)(lVar5 + (longlong)iVar14 * 2);
      }
      else {
        uVar11 = *(uint *)(lVar5 + (longlong)iVar14 * 4);
      }
      lVar8 = *local_98;
      lVar12 = (longlong)(int)uVar11 * 0x40 + lVar8;
      uVar15 = (ulonglong)param_6;
      fVar17 = (1.0 - fVar20) - fVar18;
      fVar1 = *(float *)(lVar12 + 4 + uVar15 * 8);
      if (cVar4 == '\0') {
        uVar11 = (uint)*(ushort *)(lVar5 + (longlong)(iVar14 + 2) * 2);
      }
      else {
        uVar11 = *(uint *)(lVar5 + (longlong)(iVar14 + 2) * 4);
      }
      lVar13 = (longlong)(int)uVar11 * 0x40 + lVar8;
      fVar2 = *(float *)(lVar13 + 4 + uVar15 * 8);
      if (cVar4 == '\0') {
        uVar11 = (uint)*(ushort *)(lVar5 + (longlong)(iVar14 + 1) * 2);
      }
      else {
        uVar11 = *(uint *)(lVar5 + (longlong)(iVar14 + 1) * 4);
      }
      lVar8 = lVar8 + (longlong)(int)uVar11 * 0x40;
      fVar3 = *(float *)(lVar8 + 4 + uVar15 * 8);
      *param_8 = fVar17 * *(float *)(lVar12 + uVar15 * 8) + fVar20 * *(float *)(lVar13 + uVar15 * 8)
                 + fVar18 * *(float *)(lVar8 + uVar15 * 8);
      param_8[1] = fVar1 * fVar17 + fVar2 * fVar20 + fVar3 * fVar18;
      *param_7 = fVar19;
      uVar9 = 1;
      goto LAB_1489d0f31;
    }
  }
  uVar9 = 0;
LAB_1489d0f31:
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1041 FUN_1489d1041 body=60 status=ok
// SIG undefined FUN_1489d1041(void)

void FUN_1489d1041(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  uVar1 = *(ushort *)(param_2 + 8);
  *(bool *)(param_1 + 2) = (uVar1 & 3) != 0;
  *(bool *)((longlong)param_1 + 0x11) = (uVar1 & 0xc) != 0;
  *(bool *)((longlong)param_1 + 0x12) = (uVar1 & 0x30) != 0;
  *(bool *)((longlong)param_1 + 0x14) = (uVar1 & 0xc0) != 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x58);
  return;
}



// FUNCTION 1489d107d FUN_1489d107d body=147 status=ok
// SIG undefined FUN_1489d107d(void)

byte FUN_1489d107d(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  byte *local_48;
  undefined8 local_40;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_29;
  local_29 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0xd8))(param_1,param_3,1,0);
  if ((local_29 != 0) || (bVar1 = 0, *(int *)(param_3 + 0xc) == 0)) {
    FUN_1489df9da(*(undefined8 *)(param_2 + 0x10),param_3,1);
    bVar1 = local_29;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1111 FUN_1489d1111 body=79 status=ok
// SIG undefined FUN_1489d1111(void)

undefined1 * FUN_1489d1111(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1489d107d(param_2);
  *param_1 = uVar1;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
  return param_1;
}



// FUNCTION 1489d1160 FUN_1489d1160 body=545 status=ok
// SIG undefined FUN_1489d1160(void)

void * FUN_1489d1160(void *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8 [16];
  undefined8 local_228 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  char local_180;
  undefined8 auStack_178 [16];
  char local_f8;
  undefined8 auStack_e8 [16];
  char local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(longlong *)(param_2 + 0x430) != 0) {
    uVar4 = FUN_1449db7f2();
    bVar2 = FUN_144a7ca96((longlong *)(param_2 + 0x430),uVar4);
    plVar1 = *(longlong **)(param_2 + 0x430);
    if ((plVar1 != (longlong *)0x0 & bVar2) == 1) {
      local_2b8 = DAT_14c8464f0;
      local_2c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar6 = &DAT_14c846400;
      puVar7 = local_2a8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = &DAT_14c846400;
      puVar7 = local_228;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_180 = '\0';
      local_f8 = '\0';
      local_68 = '\0';
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_58 = (undefined4)DAT_14c8464e0;
      uStack_54 = DAT_14c8464e0._4_4_;
      uStack_50 = (undefined4)DAT_14c8464e8;
      uStack_4c = DAT_14c8464e8._4_4_;
      local_48 = DAT_14c8464f0;
      local_40 = 0;
      uStack_38 = 0;
      cVar3 = (**(code **)(*plVar1 + 0x358))
                        (plVar1,*(undefined8 *)(plVar1[0xf] + 0xf8),&local_2c8,0xffffffff);
      if (cVar3 != '\0') {
        memcpy(param_1,&local_2c8,0x120);
        *(undefined8 *)((longlong)param_1 + 0x120) = local_1a8;
        *(undefined8 *)((longlong)param_1 + 0x128) = uStack_1a0;
        *(char *)((longlong)param_1 + 0x148) = local_180;
        if (local_180 == '\x01') {
          *(undefined8 *)((longlong)param_1 + 0x140) = local_188;
          *(undefined8 *)((longlong)param_1 + 0x130) = local_198;
          *(undefined8 *)((longlong)param_1 + 0x138) = uStack_190;
        }
        *(char *)((longlong)param_1 + 0x1d0) = local_f8;
        if (local_f8 == '\x01') {
          puVar6 = auStack_178;
          puVar7 = (undefined8 *)((longlong)param_1 + 0x150);
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *(char *)((longlong)param_1 + 0x260) = local_68;
        if (local_68 == '\x01') {
          puVar6 = auStack_e8;
          puVar7 = (undefined8 *)((longlong)param_1 + 0x1e0);
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *(undefined8 *)((longlong)param_1 + 0x280) = local_48;
        *(ulonglong *)((longlong)param_1 + 0x270) = CONCAT44(uStack_54,local_58);
        *(ulonglong *)((longlong)param_1 + 0x278) = CONCAT44(uStack_4c,uStack_50);
        *(undefined4 *)((longlong)param_1 + 0x288) = (undefined4)local_40;
        *(undefined4 *)((longlong)param_1 + 0x28c) = local_40._4_4_;
        *(undefined4 *)((longlong)param_1 + 0x290) = (undefined4)uStack_38;
        *(undefined4 *)((longlong)param_1 + 0x294) = uStack_38._4_4_;
        *(undefined1 *)((longlong)param_1 + 0x2a0) = 1;
        goto LAB_1489d1358;
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x2a0) = 0;
LAB_1489d1358:
  if ((local_28 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1382 FUN_1489d1382 body=784 status=ok
// SIG undefined FUN_1489d1382(void)

undefined1 *
FUN_1489d1382(undefined1 *param_1,longlong param_2,double *param_3,undefined8 param_4,
             longlong *param_5)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [40];
  double *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_3;
  FUN_1489cc124(&local_78);
  uVar9 = (ulonglong)local_70;
  if ((-1 < (int)local_70) && ((int)local_70 < (int)local_78[1])) {
    lVar8 = uVar9 * 8;
    do {
      cVar2 = FUN_144729dda(uVar9 * 8 + *local_78);
      if (cVar2 != '\0') {
        plVar3 = (longlong *)FUN_14479d2ce(*local_78 + lVar8);
        lVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
        if (lVar4 == param_2) {
          lVar4 = FUN_14479d2ce(*local_78 + lVar8);
          if (lVar4 != 0) {
            FUN_14587e2f4();
          }
          local_80 = 0;
          FUN_14485c47a(&local_80);
          cVar2 = FUN_144729dda(&local_80);
          if (cVar2 != '\0') {
            lVar4 = FUN_14479d2ce(&local_80);
            lVar4 = *(longlong *)(lVar4 + 0x10);
            lVar5 = FUN_14479d2ce(&local_80);
            lVar5 = *(longlong *)(lVar5 + 0xa8);
            lVar6 = FUN_1458f2bfe();
            if (lVar6 == lVar4) {
LAB_1489d14cb:
              local_88 = lVar5;
              lVar4 = FUN_14479d2ce(&local_80);
              lVar5 = local_88;
              lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x220) + 8);
              lVar6 = FUN_14479d2ce(&local_80);
              if ((lVar4 != 0) && (*(char *)(lVar6 + 0x1b1) != '\0')) {
                if (lVar5 == 0) {
LAB_1489d1518:
                  lVar5 = 0;
                }
                else {
                  lVar4 = FUN_145a85b7e();
                  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1489d1518;
                }
                uVar7 = *(undefined8 *)(lVar5 + 0x504);
                dVar11 = *local_90 - (double)(int)uVar7;
                *local_90 = dVar11;
                dVar10 = local_90[1] - (double)(int)((ulonglong)uVar7 >> 0x20);
                local_90[1] = dVar10;
                if ((0.0 <= dVar11) && (0.0 <= dVar10)) {
                  local_68 = FUN_14479d2ce(&local_80);
                  pcVar1 = (code *)*param_5;
                  plVar3 = param_5 + 4;
                  if ((longlong *)param_5[2] != (longlong *)0x0) {
                    plVar3 = (longlong *)param_5[2];
                  }
                  uVar7 = (**(code **)(*plVar3 + 8))();
                  (*pcVar1)(param_1,uVar7,local_90,&local_68);
                  goto LAB_1489d15d8;
                }
              }
            }
            else if (lVar5 != 0) {
              lVar4 = FUN_140c1325c();
              if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_1489d14cb;
            }
          }
        }
      }
      local_70 = (int)uVar9 + 1;
      uVar9 = (ulonglong)local_70;
      lVar8 = lVar8 + 8;
    } while ((int)local_70 < (int)local_78[1]);
  }
  *param_1 = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
LAB_1489d15d8:
  if (*param_5 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1694 FUN_1489d1694 body=125 status=ok
// SIG undefined FUN_1489d1694(void)

void FUN_1489d1694(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1489d923a(param_2);
  }
  local_20 = FUN_14587e2f4();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1489d9158(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1712 FUN_1489d1712 body=121 status=ok
// SIG undefined FUN_1489d1712(void)

undefined8 * FUN_1489d1712(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b452110;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  FUN_145c22f68(puVar2);
  *puVar2 = &PTR_FUN_14b452070;
  puVar2[5] = param_1;
  puVar1 = (undefined8 *)param_1[3];
  if ((puVar1 != puVar2) && (param_1[3] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 1489d178c FUN_1489d178c body=211 status=ok
// SIG undefined FUN_1489d178c(void)

uint FUN_1489d178c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_3 + 0x20);
  local_30 = *(undefined8 *)(param_3 + 0x28);
  local_28 = *(longlong **)(param_3 + 0x30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_38);
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_3,1);
  }
  else {
    uVar6 = FUN_1489dab1e();
    FUN_1489ce796(uVar6,param_3,1);
  }
  uVar5 = (**(code **)(*param_1 + 0xd0))(param_1,param_3);
  plVar3 = local_28;
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
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1860 FUN_1489d1860 body=211 status=ok
// SIG undefined FUN_1489d1860(void)

uint FUN_1489d1860(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_3 + 0x20);
  local_30 = *(undefined8 *)(param_3 + 0x28);
  local_28 = *(longlong **)(param_3 + 0x30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_38);
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_3,2);
  }
  else {
    uVar6 = FUN_1489dab1e();
    FUN_1489ce796(uVar6,param_3,0);
  }
  uVar5 = (**(code **)(*param_1 + 0xd0))(param_1,param_3);
  plVar3 = local_28;
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
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1934 FUN_1489d1934 body=52 status=ok
// SIG undefined FUN_1489d1934(void)

ulonglong FUN_1489d1934(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1489dab1e();
  FUN_140f4720e(uVar1,param_3);
  uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,param_3);
  return uVar2 ^ 1;
}



// FUNCTION 1489d1968 FUN_1489d1968 body=65 status=ok
// SIG undefined FUN_1489d1968(void)

undefined8 FUN_1489d1968(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x68))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001489d199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1489d19aa FUN_1489d19aa body=68 status=ok
// SIG undefined FUN_1489d19aa(void)

undefined8 FUN_1489d19aa(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x68))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001489d19e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1489d19ee FUN_1489d19ee body=68 status=ok
// SIG undefined FUN_1489d19ee(void)

undefined8 FUN_1489d19ee(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x68))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001489d1a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1489d1a32 FUN_1489d1a32 body=68 status=ok
// SIG undefined FUN_1489d1a32(void)

undefined8 FUN_1489d1a32(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x68))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001489d1a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1489d1a76 FUN_1489d1a76 body=68 status=ok
// SIG undefined FUN_1489d1a76(void)

undefined8 FUN_1489d1a76(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x68))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001489d1aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,3);
    return uVar2;
  }
  return 0;
}


