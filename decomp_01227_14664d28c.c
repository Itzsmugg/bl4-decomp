// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14664d28c FUN_14664d28c body=70 status=ok
// SIG undefined FUN_14664d28c(void)

undefined8 * FUN_14664d28c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9bf310;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d2d2 FUN_14664d2d2 body=137 status=ok
// SIG undefined FUN_14664d2d2(void)

void FUN_14664d2d2(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x128);
  memset(_Dst,0,0x128);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8aca10;
  *(undefined1 *)(_Dst + 0x24) = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  _Dst[0x1b] = 0;
  _Dst[0x1c] = 0;
  _Dst[0x1d] = 0;
  *(undefined8 *)((longlong)_Dst + 0xec) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf4) = 0;
  _Dst[0x20] = 0;
  _Dst[0x21] = 0;
  *(undefined8 *)((longlong)_Dst + 0x10a) = 0;
  *(undefined8 *)((longlong)_Dst + 0x112) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664d35c FUN_14664d35c body=29 status=ok
// SIG undefined FUN_14664d35c(void)

undefined8 FUN_14664d35c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d37a FUN_14664d37a body=38 status=ok
// SIG undefined FUN_14664d37a(void)

undefined8 FUN_14664d37a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RemoveState",1);
  return param_2;
}



// FUNCTION 14664d3a0 FUN_14664d3a0 body=29 status=ok
// SIG undefined FUN_14664d3a0(void)

undefined8 FUN_14664d3a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d3be FUN_14664d3be body=38 status=ok
// SIG undefined FUN_14664d3be(void)

undefined8 FUN_14664d3be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClearStructureredInteractable",1);
  return param_2;
}



// FUNCTION 14664d3e4 FUN_14664d3e4 body=29 status=ok
// SIG undefined FUN_14664d3e4(void)

undefined8 FUN_14664d3e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d402 FUN_14664d402 body=38 status=ok
// SIG undefined FUN_14664d402(void)

undefined8 FUN_14664d402(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddState",1);
  return param_2;
}



// FUNCTION 14664d428 FUN_14664d428 body=29 status=ok
// SIG undefined FUN_14664d428(void)

undefined8 FUN_14664d428(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d446 FUN_14664d446 body=78 status=ok
// SIG undefined FUN_14664d446(void)

void FUN_14664d446(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x608);
  memset(_Dst,0,0x608);
  FUN_145954194(_Dst);
  *_Dst = &PTR_FUN_14b8ad310;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664d494 FUN_14664d494 body=78 status=ok
// SIG undefined FUN_14664d494(void)

void FUN_14664d494(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xb0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8b6360;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664d4e2 FUN_14664d4e2 body=38 status=ok
// SIG undefined FUN_14664d4e2(void)

undefined8 FUN_14664d4e2(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d508 FUN_14664d508 body=29 status=ok
// SIG undefined FUN_14664d508(void)

undefined8 FUN_14664d508(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d526 FUN_14664d526 body=38 status=ok
// SIG undefined FUN_14664d526(void)

undefined8 FUN_14664d526(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d54c FUN_14664d54c body=38 status=ok
// SIG undefined FUN_14664d54c(void)

undefined8 FUN_14664d54c(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d572 FUN_14664d572 body=99 status=ok
// SIG undefined FUN_14664d572(void)

void FUN_14664d572(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(200);
  memset(_Dst,0,200);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8c2120;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664d5d6 FUN_14664d5d6 body=38 status=ok
// SIG undefined FUN_14664d5d6(void)

undefined8 FUN_14664d5d6(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d5fc FUN_14664d5fc body=111 status=ok
// SIG undefined FUN_14664d5fc(void)

void FUN_14664d5fc(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xd0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8c22b0;
  *(undefined4 *)(_Dst + 0x19) = 0;
  *(undefined1 *)((longlong)_Dst + 0xcc) = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined4 *)(_Dst + 0x18) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664d66c FUN_14664d66c body=38 status=ok
// SIG undefined FUN_14664d66c(void)

undefined8 FUN_14664d66c(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d692 FUN_14664d692 body=38 status=ok
// SIG undefined FUN_14664d692(void)

undefined8 FUN_14664d692(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d6b8 FUN_14664d6b8 body=172 status=ok
// SIG undefined FUN_14664d6b8(void)

void FUN_14664d6b8(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8ca9b0;
  *(undefined4 *)(_Dst + 0x16) = 0x42c80000;
  *(undefined4 *)((longlong)_Dst + 0xc4) = 0;
  *(undefined1 *)(_Dst + 0x19) = 0;
  *(undefined4 *)((longlong)_Dst + 0xcc) = 0;
  *(undefined1 *)(_Dst + 0x1a) = 0;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0;
  *(undefined1 *)(_Dst + 0x1b) = 0;
  *(undefined4 *)((longlong)_Dst + 0xdc) = 0;
  *(undefined1 *)(_Dst + 0x1c) = 0;
  *(undefined4 *)((longlong)_Dst + 0xe4) = 0;
  *(undefined1 *)(_Dst + 0x1d) = 0;
  *(undefined4 *)((longlong)_Dst + 0xec) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb9) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664d764 FUN_14664d764 body=38 status=ok
// SIG undefined FUN_14664d764(void)

undefined8 FUN_14664d764(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d78a FUN_14664d78a body=132 status=ok
// SIG undefined FUN_14664d78a(void)

void FUN_14664d78a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14664d810 FUN_14664d810 body=26 status=ok
// SIG undefined FUN_14664d810(void)

bool FUN_14664d810(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664d82a FUN_14664d82a body=24 status=ok
// SIG undefined FUN_14664d82a(void)

bool FUN_14664d82a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664d842 FUN_14664d842 body=144 status=ok
// SIG undefined FUN_14664d842(void)

bool FUN_14664d842(longlong param_1)

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



// FUNCTION 14664d8d4 FUN_14664d8d4 body=103 status=ok
// SIG undefined FUN_14664d8d4(void)

void FUN_14664d8d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014664d937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014664d91b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14664d93c FUN_14664d93c body=145 status=ok
// SIG undefined FUN_14664d93c(void)

void FUN_14664d93c(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x60;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e06];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x60,8);
  }
  uVar2 = 0x7fffffff;
  if (2 < (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14664d9ce FUN_14664d9ce body=103 status=ok
// SIG undefined FUN_14664d9ce(void)

void FUN_14664d9ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014664da31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014664da15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14664da36 FUN_14664da36 body=80 status=ok
// SIG undefined FUN_14664da36(void)

undefined8 * FUN_14664da36(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3580;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0x40a0000000000000;
  return _Dst;
}



// FUNCTION 14664da86 FUN_14664da86 body=80 status=ok
// SIG undefined FUN_14664da86(void)

undefined8 * FUN_14664da86(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3580;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0x40a0000000000000;
  return _Dst;
}



// FUNCTION 14664dad6 FUN_14664dad6 body=26 status=ok
// SIG undefined FUN_14664dad6(void)

void FUN_14664dad6(undefined8 param_1)

{
  FUN_1410c2f26();
  FUN_145ad8416(param_1);
  return;
}



// FUNCTION 14664daf0 FUN_14664daf0 body=26 status=ok
// SIG undefined FUN_14664daf0(void)

void FUN_14664daf0(undefined8 param_1)

{
  FUN_14598cd22();
  FUN_1401cd71c(param_1);
  return;
}



// FUNCTION 14664db0a FUN_14664db0a body=83 status=ok
// SIG undefined FUN_14664db0a(void)

undefined8 * FUN_14664db0a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3780;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined1 *)(_Dst + 0x55) = 0;
  return _Dst;
}



// FUNCTION 14664db5e FUN_14664db5e body=83 status=ok
// SIG undefined FUN_14664db5e(void)

undefined8 * FUN_14664db5e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3780;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined1 *)(_Dst + 0x55) = 0;
  return _Dst;
}



// FUNCTION 14664dbb2 FUN_14664dbb2 body=79 status=ok
// SIG undefined FUN_14664dbb2(void)

void FUN_14664dbb2(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c5390;
  puVar1[2] = &LAB_148e7b30e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnPing",puVar1);
  return;
}



// FUNCTION 14664dc02 FUN_14664dc02 body=31 status=ok
// SIG undefined FUN_14664dc02(void)

void FUN_14664dc02(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2c8,0x10);
  FUN_14592e8ca(uVar1);
  return;
}



// FUNCTION 14664dc22 FUN_14664dc22 body=142 status=ok
// SIG undefined FUN_14664dc22(void)

void FUN_14664dc22(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410c2540();
  *(undefined4 *)(param_1 + 0x2ac) = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"KmHDisplayText",0);
  FUN_140ac6c96(&local_48,param_1 + 0x2b8);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664dcb2 FUN_14664dcb2 body=66 status=ok
// SIG undefined FUN_14664dcb2(void)

undefined8 * FUN_14664dcb2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3880;
  return _Dst;
}



// FUNCTION 14664dcf4 FUN_14664dcf4 body=66 status=ok
// SIG undefined FUN_14664dcf4(void)

undefined8 * FUN_14664dcf4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3880;
  return _Dst;
}



// FUNCTION 14664dd36 FUN_14664dd36 body=76 status=ok
// SIG undefined FUN_14664dd36(void)

undefined8 * FUN_14664dd36(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3980;
  *(undefined4 *)(_Dst + 0x53) = 0;
  return _Dst;
}



// FUNCTION 14664dd82 FUN_14664dd82 body=76 status=ok
// SIG undefined FUN_14664dd82(void)

undefined8 * FUN_14664dd82(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3980;
  *(undefined4 *)(_Dst + 0x53) = 0;
  return _Dst;
}



// FUNCTION 14664ddce FUN_14664ddce body=26 status=ok
// SIG undefined FUN_14664ddce(void)

void FUN_14664ddce(undefined8 param_1)

{
  FUN_1410ea50c();
  FUN_14133b5c8(param_1);
  return;
}



// FUNCTION 14664dde8 FUN_14664dde8 body=94 status=ok
// SIG undefined FUN_14664dde8(void)

undefined8 * FUN_14664dde8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3a80;
  *(undefined8 *)((longlong)_Dst + 0x2a4) = 0;
  _Dst[0x53] = 0;
  *(undefined4 *)((longlong)_Dst + 0x29f) = 0;
  return _Dst;
}



// FUNCTION 14664de46 FUN_14664de46 body=94 status=ok
// SIG undefined FUN_14664de46(void)

undefined8 * FUN_14664de46(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3a80;
  *(undefined8 *)((longlong)_Dst + 0x2a4) = 0;
  _Dst[0x53] = 0;
  *(undefined4 *)((longlong)_Dst + 0x29f) = 0;
  return _Dst;
}



// FUNCTION 14664dea4 FUN_14664dea4 body=79 status=ok
// SIG undefined FUN_14664dea4(void)

void FUN_14664dea4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c53d0;
  puVar1[2] = FUN_148e7b3ee;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"DeactivateWeaponStatus",puVar1);
  return;
}



// FUNCTION 14664def4 FUN_14664def4 body=76 status=ok
// SIG undefined FUN_14664def4(void)

undefined8 * FUN_14664def4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *_Dst = &PTR_FUN_14b9c3b80;
  return _Dst;
}



// FUNCTION 14664df40 FUN_14664df40 body=76 status=ok
// SIG undefined FUN_14664df40(void)

undefined8 * FUN_14664df40(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *_Dst = &PTR_FUN_14b9c3b80;
  return _Dst;
}



// FUNCTION 14664df8c FUN_14664df8c body=39 status=ok
// SIG undefined FUN_14664df8c(void)

void FUN_14664df8c(undefined8 param_1)

{
  FUN_1410ea50c();
  FUN_140de1078(param_1,&DAT_14cbdc2e8,0,0);
  return;
}



// FUNCTION 14664dfb4 FUN_14664dfb4 body=39 status=ok
// SIG undefined FUN_14664dfb4(void)

void FUN_14664dfb4(undefined8 param_1)

{
  FUN_141196df0();
  FUN_140de1078(param_1,&DAT_14cbdc2f8,0,0);
  return;
}



// FUNCTION 14664dfdc FUN_14664dfdc body=34 status=ok
// SIG undefined FUN_14664dfdc(void)

void FUN_14664dfdc(undefined8 param_1,undefined8 param_2)

{
  FUN_140b4b21c();
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 14664dffe FUN_14664dffe body=137 status=ok
// SIG undefined FUN_14664dffe(void)

void FUN_14664dffe(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c5560;
  puVar1[2] = FUN_146155f92;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SetWeapon",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c5580;
  puVar1[2] = &LAB_148e7b834;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"HighlightWeapon",puVar1);
  return;
}



// FUNCTION 14664e088 FUN_14664e088 body=88 status=ok
// SIG undefined FUN_14664e088(void)

void FUN_14664e088(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1412e9408();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b9c3c80;
    puVar2[1] = DAT_14cbd9698;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 14664e0e0 FUN_14664e0e0 body=117 status=ok
// SIG undefined FUN_14664e0e0(void)

undefined8 * FUN_14664e0e0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3ca0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2a4) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2ac) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2b4) = 0x3f80000044fa0000;
  *(undefined4 *)((longlong)_Dst + 700) = 0x3fc00000;
  *(undefined1 *)(_Dst + 0x58) = 0;
  return _Dst;
}



// FUNCTION 14664e156 FUN_14664e156 body=117 status=ok
// SIG undefined FUN_14664e156(void)

undefined8 * FUN_14664e156(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c3ca0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2a4) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2ac) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2b4) = 0x3f80000044fa0000;
  *(undefined4 *)((longlong)_Dst + 700) = 0x3fc00000;
  *(undefined1 *)(_Dst + 0x58) = 0;
  return _Dst;
}



// FUNCTION 14664e1cc FUN_14664e1cc body=31 status=ok
// SIG undefined FUN_14664e1cc(void)

void FUN_14664e1cc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2c0,0x10);
  FUN_145ac7290(uVar1);
  return;
}



// FUNCTION 14664e1ec FUN_14664e1ec body=69 status=ok
// SIG undefined FUN_14664e1ec(void)

void FUN_14664e1ec(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda((longlong)param_1 + 0x1e4);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce((longlong)param_1 + 0x1e4);
                    /* WARNING: Could not recover jumptable at 0x00014664e226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x478))(param_1,uVar1,*(code **)(*param_1 + 0x478));
    return;
  }
  return;
}



// FUNCTION 14664e232 FUN_14664e232 body=114 status=ok
// SIG undefined FUN_14664e232(void)

void FUN_14664e232(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  if (lVar1 != 0) {
    local_40 = (longlong *)*param_2;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
    local_38 = (undefined4)param_2[1];
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_140a5cace(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664e2a6 FUN_14664e2a6 body=77 status=ok
// SIG undefined FUN_14664e2a6(void)

undefined8 * FUN_14664e2a6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x368);
  memset(_Dst,0,0x368);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9c3e80;
  _Dst[0x6c] = 0;
  return _Dst;
}



// FUNCTION 14664e2f4 FUN_14664e2f4 body=77 status=ok
// SIG undefined FUN_14664e2f4(void)

undefined8 * FUN_14664e2f4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x368);
  memset(_Dst,0,0x368);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9c3e80;
  _Dst[0x6c] = 0;
  return _Dst;
}



// FUNCTION 14664e342 FUN_14664e342 body=330 status=ok
// SIG undefined FUN_14664e342(void)

undefined8 *
FUN_14664e342(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b9c7240;
  FUN_1446ddc76(&local_50,"SetItem",1);
  FUN_14039176c(param_1,param_2,local_50,1);
  *param_1 = &PTR_FUN_14b9c7240;
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x3c) = param_4;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xf;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x27] = *(undefined8 *)(param_6 + 4);
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 0x25) = *param_6;
  *(undefined4 *)((longlong)param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664e48e FUN_14664e48e body=1383 status=ok
// SIG undefined FUN_14664e48e(void)

void FUN_14664e48e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140db10ee();
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5db0;
  puVar2[2] = &LAB_148e85538;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"VListPageSizeRefreshed",puVar2);
  lVar1 = param_1 + 0x38;
  FUN_1446ddc76(local_50,"VListPageSizeRefreshed",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5dd0;
  puVar2[2] = &LAB_148e85546;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"InputFocusChanged",puVar2);
  FUN_1446ddc76(local_50,"InputFocusChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5dd0;
  puVar2[2] = &LAB_148e85546;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInputFocusChanged",puVar2);
  FUN_1446ddc76(local_50,"OnInputFocusChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5dd0;
  puVar2[2] = &LAB_148e85554;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInputSelectionChanged",puVar2);
  FUN_1446ddc76(local_50,"OnInputSelectionChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5df0;
  puVar2[2] = FUN_1414951e0;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"InitNativeVirtualList",puVar2);
  FUN_1446ddc76(local_50,"InitNativeVirtualList",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5e10;
  puVar2[2] = FUN_1442c977a;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"SetVirtualStartIndex",puVar2);
  FUN_1446ddc76(local_50,"SetVirtualStartIndex",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5df0;
  puVar2[2] = FUN_148e85562;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"Event_OnClickEscape",puVar2);
  FUN_1446ddc76(local_50,"Event_OnClickEscape",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5df0;
  puVar2[2] = &LAB_148e8566c;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"Event_OnDropdownClicked",puVar2);
  FUN_1446ddc76(local_50,"Event_OnDropdownClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c5e30;
  puVar2[2] = &LAB_148e8567a;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"Event_OnDropdownItemClicked",puVar2);
  FUN_1446ddc76(local_50,"Event_OnDropdownItemClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664e9f6 FUN_14664e9f6 body=97 status=ok
// SIG undefined FUN_14664e9f6(void)

undefined8 * FUN_14664e9f6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x398);
  memset(_Dst,0,0x398);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9c41d0;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  _Dst[0x6f] = 0;
  _Dst[0x70] = 0;
  _Dst[0x71] = 0;
  *(undefined1 *)(_Dst + 0x72) = 0;
  return _Dst;
}



// FUNCTION 14664ea58 FUN_14664ea58 body=86 status=ok
// SIG undefined FUN_14664ea58(void)

undefined8 * FUN_14664ea58(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2d0);
  memset(_Dst,0,0x2d0);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  *_Dst = &PTR_FUN_14b9c4470;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  return _Dst;
}



// FUNCTION 14664eaae FUN_14664eaae body=52 status=ok
// SIG undefined FUN_14664eaae(void)

void FUN_14664eaae(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(1000);
  memset(_Dst,0,1000);
  FUN_145c5dbf0(_Dst);
  return;
}



// FUNCTION 14664eae2 FUN_14664eae2 body=16 status=ok
// SIG undefined FUN_14664eae2(void)

byte FUN_14664eae2(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 14664eaf2 FUN_14664eaf2 body=171 status=ok
// SIG undefined FUN_14664eaf2(void)

void FUN_14664eaf2(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
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
  if (*(char *)(lVar3 + 0x15a) != param_2) {
    *(char *)(lVar3 + 0x15a) = param_2;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664eb9e FUN_14664eb9e body=99 status=ok
// SIG undefined FUN_14664eb9e(void)

void FUN_14664eb9e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_144a88394(lVar2);
      puVar4 = (undefined8 *)(param_1 + 0x2e0);
      lVar2 = FUN_144a61814(uVar3,puVar4);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar3,*puVar4);
      }
      *puVar4 = 0;
    }
  }
  return;
}



// FUNCTION 14664ec02 FUN_14664ec02 body=651 status=ok
// SIG undefined FUN_14664ec02(void)

void FUN_14664ec02(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61b0;
  puVar1[2] = FUN_148e8d332;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ExploreItemHovered",puVar1);
  *(undefined8 *)(param_1 + 0x350) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61b0;
  puVar1[2] = &LAB_148e8d442;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_WeeklyActivityHovered",puVar1);
  *(undefined8 *)(param_1 + 0x358) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61b0;
  puVar1[2] = FUN_148e8d4b8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ExploreItemSelected",puVar1);
  *(undefined8 *)(param_1 + 0x360) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61d0;
  puVar1[2] = FUN_148e8d6e6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ToggleFilter",puVar1);
  *(undefined8 *)(param_1 + 0x370) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61d0;
  puVar1[2] = FUN_148e8db2c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ToggleFilterCategory",puVar1);
  *(undefined8 *)(param_1 + 0x368) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61f0;
  puVar1[2] = FUN_148e8dfd4;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnSetAllFilters",puVar1);
  *(undefined8 *)(param_1 + 0x378) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61d0;
  puVar1[2] = FUN_148e8e212;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ClearPip",puVar1);
  *(undefined8 *)(param_1 + 0x380) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6210;
  puVar1[2] = FUN_148e8c9f2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ExploreClicked",puVar1);
  *(undefined8 *)(param_1 + 0x388) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c61f0;
  puVar1[2] = FUN_14664eaf2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_BlockMapHover",puVar1);
  *(undefined8 *)(param_1 + 0x390) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6210;
  puVar1[2] = FUN_1442cdb68;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnViewOverworld",puVar1);
  *(undefined8 *)(param_1 + 0x398) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6210;
  puVar1[2] = FUN_1442cdcc2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ToggleProgressClicked",puVar1);
  *(undefined8 *)(param_1 + 0x3a0) = uVar2;
  return;
}



// FUNCTION 14664ee8e FUN_14664ee8e body=1967 status=ok
// SIG undefined FUN_14664ee8e(void)

void FUN_14664ee8e(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_248 [32];
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218 [2];
  longlong *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  ulonglong *local_1e8;
  undefined1 *local_1e0;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ulonglong local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  longlong local_1a0 [2];
  undefined4 local_190;
  undefined1 local_188 [304];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1448d5e3c(&local_1c8,param_1 + 0x208);
  lVar3 = *(longlong *)(local_1c8 + 0x410);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x1b0));
  plVar8 = plStack_1c0;
  if (plStack_1c0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_1c0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_1c0)(plStack_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    bVar2 = *(byte *)(lVar4 + 0x48c);
    if (*(char *)(lVar3 + 0x158) == '\x01') {
      if (*(byte *)(lVar3 + 0x138) != bVar2) goto LAB_14664ef1d;
      *(byte *)(lVar4 + 0x48c) = bVar2 ^ 1;
      if (bVar2 == 0) {
        FUN_1400b22c2(&local_1c8,"StartBigMapEndGameMenuTutorial");
        thunk_FUN_140afad18(param_1,&local_1c8);
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
        auVar12._0_8_ = (double)*(longlong *)(lVar3 + 0x140) * 10000000.0 + 0.5;
        auVar12._8_8_ = 0;
        auVar12 = roundpd(auVar12,auVar12,1);
        lVar10 = (longlong)auVar12._0_8_;
        iVar7 = (int)((double)lVar10 / 36000000000.0);
        if (*(int *)(lVar4 + 0x4b0) == iVar7) goto LAB_14664ef1d;
        *(int *)(lVar4 + 0x4b0) = iVar7;
        if (1.0 <= (double)lVar10 / 36000000000.0) {
          plVar8 = (longlong *)FUN_140e82300();
          local_208 = (longlong *)*plVar8;
          if (local_208 != (longlong *)0x0) {
            (**(code **)(*local_208 + 8))();
          }
          local_200 = (undefined4)plVar8[1];
          local_1c8 = 0;
          plStack_1c0 = (longlong *)0x0;
          local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
          local_1b0 = 0;
          uStack_1a8 = 0;
          FUN_1446ddda2(&local_1c8,"UIBigMap_WeeklyActivities_ResetTime",0);
          FUN_140ac6c96(&local_1c8,&local_208);
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
          uVar6 = (uint)((ulonglong)((lVar10 / 36000000000) * 0x2aaaaaab) >> 0x20);
          FUN_14023409e(&local_228,&local_208,1);
          local_1e0 = local_188;
          local_1c8 = local_1c8 & 0xffffffff00000000;
          local_1b8 = 0;
          local_1b0 = local_1b0 & 0xffffffff00000000;
          uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
          local_1a0[1] = 0;
          local_190 = 0;
          local_1e8 = &local_1c8;
          plStack_1c0 = (longlong *)(lVar10 / 864000000000);
          local_1a0[0] = (longlong)
                         (int)((int)(lVar10 / 36000000000) +
                              ((uVar6 >> 2) - ((int)uVar6 >> 0x1f)) * -0x18);
          FUN_14010d304(&local_1d8);
          local_1f8 = local_228;
          local_1f0 = local_220;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_220 + 1) = (int)local_220[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_218,&local_1f8,&local_1d8);
          FUN_14007f2db(local_1d8,uStack_1d0);
          if (local_1d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar10 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_1c8 + lVar10) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_1c8 + lVar10) + 0x10))();
              *(undefined8 *)((longlong)&local_1c8 + lVar10) = 0;
              *(undefined4 *)((longlong)&plStack_1c0 + lVar10) = 0;
            }
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != -0x10);
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_220 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar1 = (int *)((longlong)local_220 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_220 + 0x10))(local_220);
              }
            }
          }
          FUN_140008f88(lVar4 + 0x4a0,local_218);
          if (local_218[0] != (longlong *)0x0) {
            (**(code **)(*local_218[0] + 0x10))();
          }
          if (local_208 != (longlong *)0x0) {
            (**(code **)(*local_208 + 0x10))();
          }
        }
        else {
          local_1c8 = 0;
          plStack_1c0 = (longlong *)0x0;
          local_1b8 = local_1b8 & 0xffffffff00000000;
          local_1b0 = 0;
          uStack_1a8 = 0;
          FUN_1446ddda2(&local_1c8,"UIBigMap_WeeklyActivities_ResetTime_Soon",0);
          FUN_140ac6c96(&local_1c8,lVar4 + 0x4a0);
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
        }
        plVar8 = (longlong *)(lVar4 + 0x490);
        if (0 < *(int *)(lVar4 + 0x498)) {
          iVar7 = *(int *)(lVar4 + 0x49c);
          FUN_148c6edef(*(undefined8 *)(lVar4 + 0x490));
          *(undefined4 *)(lVar4 + 0x498) = 0;
          if ((iVar7 < 0) && (*(int *)(lVar4 + 0x49c) != 0)) {
            FUN_148e9b5b8(plVar8);
          }
        }
        if ((longlong)*(int *)(lVar3 + 0x150) != 0) {
          lVar10 = *(longlong *)(lVar3 + 0x148);
          lVar11 = (longlong)*(int *)(lVar3 + 0x150) * 0x150 + lVar10;
          do {
            local_1c8 = local_1c8 & 0xffffffffffffff00;
            FUN_1400b22c2(&plStack_1c0,&DAT_149e02088);
            FUN_1400b22c2(&local_1b0,&DAT_149e02088);
            FUN_144074204(local_1a0);
            FUN_148c6e2de(local_1a0,lVar10);
            local_1c8 = local_1c8 & 0xffffffffffffff00;
            FUN_1400b22c2(&local_1d8,"trait_mission");
            if (plStack_1c0 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_1b8 = CONCAT44(uStack_1cc,uStack_1d0);
            plStack_1c0 = local_1d8;
            FUN_140390f7a(lVar10 + 0x120,&local_1b0);
            iVar7 = *(int *)(lVar4 + 0x498);
            *(uint *)(lVar4 + 0x498) = iVar7 + 1U;
            if (*(uint *)(lVar4 + 0x49c) < iVar7 + 1U) {
              FUN_148e9c2c2(plVar8,iVar7);
            }
            FUN_148c6f170((longlong)iVar7 * 0x178 + *plVar8,&local_1c8);
            FUN_148c6e2a4(&local_1c8);
            lVar10 = lVar10 + 0x150;
          } while (lVar10 != lVar11);
        }
        if ((longlong)*(int *)(lVar3 + 0x168) != 0) {
          plVar9 = *(longlong **)(lVar3 + 0x160);
          lVar10 = (longlong)*(int *)(lVar3 + 0x168) * 0x150;
          do {
            lVar11 = *plVar9;
            if (lVar11 != 0) {
              local_1c8 = local_1c8 & 0xffffffffffffff00;
              FUN_1400b22c2(&plStack_1c0,&DAT_149e02088);
              FUN_1400b22c2(&local_1b0,&DAT_149e02088);
              FUN_144074204(local_1a0);
              FUN_148c6e2de(local_1a0,plVar9);
              local_1c8 = CONCAT71(local_1c8._1_7_,local_58);
              FUN_1400b22c2(&local_1d8,"black_market_vendor");
              if (plStack_1c0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              local_1b8 = CONCAT44(uStack_1cc,uStack_1d0);
              plStack_1c0 = local_1d8;
              FUN_140390f7a(lVar11 + 0x18,&local_1b0);
              iVar7 = *(int *)(lVar4 + 0x498);
              *(uint *)(lVar4 + 0x498) = iVar7 + 1U;
              if (*(uint *)(lVar4 + 0x49c) < iVar7 + 1U) {
                FUN_148e9c2c2(plVar8,iVar7);
              }
              FUN_148c6f170((longlong)iVar7 * 0x178 + *plVar8,&local_1c8);
              FUN_148c6e2a4(&local_1c8);
            }
            plVar9 = plVar9 + 0x2a;
            lVar10 = lVar10 + -0x150;
          } while (lVar10 != 0);
        }
        if ((longlong)*(int *)(lVar3 + 0x180) != 0) {
          plVar9 = *(longlong **)(lVar3 + 0x178);
          lVar10 = (longlong)*(int *)(lVar3 + 0x180) * 0x150;
          do {
            lVar11 = *plVar9;
            if (lVar11 != 0) {
              local_1c8 = local_1c8 & 0xffffffffffffff00;
              FUN_1400b22c2(&plStack_1c0,&DAT_149e02088);
              FUN_1400b22c2(&local_1b0,&DAT_149e02088);
              FUN_144074204(local_1a0);
              FUN_148c6e2de(local_1a0,plVar9);
              FUN_1400b22c2(&local_1d8,"true_boss");
              if (plStack_1c0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              local_1b8 = CONCAT44(uStack_1cc,uStack_1d0);
              plStack_1c0 = local_1d8;
              FUN_140390f7a(lVar11 + 0x18,&local_1b0);
              iVar7 = *(int *)(lVar4 + 0x498);
              *(uint *)(lVar4 + 0x498) = iVar7 + 1U;
              if (*(uint *)(lVar4 + 0x49c) < iVar7 + 1U) {
                FUN_148e9c2c2(plVar8,iVar7);
              }
              FUN_148c6f170((longlong)iVar7 * 0x178 + *plVar8,&local_1c8);
              FUN_148c6e2a4(&local_1c8);
            }
            plVar9 = plVar9 + 0x2a;
            lVar10 = lVar10 + -0x150;
          } while (lVar10 != 0);
        }
      }
    }
    else {
      if (bVar2 == 0) goto LAB_14664ef1d;
      *(undefined1 *)(lVar4 + 0x48c) = 0;
    }
    puVar5 = *(ushort **)(lVar4 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
  }
LAB_14664ef1d:
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x1b0));
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14664f63e FUN_14664f63e body=404 status=ok
// SIG undefined FUN_14664f63e(void)

void FUN_14664f63e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  int local_b8;
  longlong local_88;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && ((longlong)(int)param_2[1] != 0)) {
    lVar5 = *param_2;
    lVar6 = (longlong)(int)param_2[1] * 0x60 + lVar5;
    do {
      FUN_14604922a(local_c0,lVar5);
      lVar8 = *(longlong *)(lVar1 + 0x4b8);
      lVar4 = (longlong)*(int *)(lVar1 + 0x4c0);
      if (lVar4 == 0) {
        bVar9 = true;
        lVar7 = lVar8;
      }
      else {
        lVar3 = lVar4 * 0x60 + lVar8;
        lVar4 = lVar4 * 0x60;
        do {
          bVar9 = *(int *)(lVar8 + 8) != local_b8;
          lVar7 = lVar8;
          if (!bVar9) break;
          lVar8 = lVar8 + 0x60;
          lVar4 = lVar4 + -0x60;
          lVar7 = lVar3;
        } while (lVar4 != 0);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (!(bool)(bVar9 | lVar7 == 0)) {
        uVar2 = *(undefined8 *)(lVar5 + 0x18);
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
        *(undefined8 *)(lVar7 + 0x18) = uVar2;
        bVar9 = true;
        if (((0.0 < *(double *)(lVar7 + 0x10)) && (*(double *)(lVar7 + 0x10) < 1.0)) &&
           (0.0 < *(double *)(lVar7 + 0x18))) {
          bVar9 = 1.0 <= *(double *)(lVar7 + 0x18);
        }
        *(bool *)(lVar7 + 0x5c) = bVar9;
        *(undefined4 *)(lVar7 + 0x58) = *(undefined4 *)(lVar5 + 0x58);
      }
      lVar5 = lVar5 + 0x60;
    } while (lVar5 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14664f7d4 FUN_14664f7d4 body=128 status=ok
// SIG undefined FUN_14664f7d4(void)

void FUN_14664f7d4(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(char *)(param_1 + 0x3c0) = param_2;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x288) + 0x3f1) = 0;
    }
  }
  else {
    FUN_1400b22c2(local_28,"StartBigMapIntroMenuTutorial");
    thunk_FUN_140afad18(param_1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664f856 FUN_14664f856 body=356 status=ok
// SIG undefined FUN_14664f856(void)

void FUN_14664f856(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  longlong local_70;
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x4b8);
    iVar2 = *(int *)(lVar3 + 0x4c4);
    FUN_14580f9f9(*(undefined8 *)(lVar3 + 0x4b8),*(undefined4 *)(lVar3 + 0x4c0));
    *(undefined4 *)(lVar3 + 0x4c0) = 0;
    if ((iVar2 < 0) && (*(int *)(lVar3 + 0x4c4) != 0)) {
      FUN_148e2bd30(plVar1,0);
    }
    if ((longlong)(int)param_2[1] != 0) {
      lVar6 = *param_2;
      lVar5 = (longlong)(int)param_2[1] * 0x60;
      do {
        FUN_14604922a(local_a8,lVar6);
        lVar4 = FUN_14090ae24(local_88);
        if (lVar4 != 0) {
          FUN_140390f7a(local_88,local_60);
        }
        iVar2 = *(int *)(lVar3 + 0x4c0);
        *(uint *)(lVar3 + 0x4c0) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0x4c4) < iVar2 + 1U) {
          FUN_14620b48c(plVar1,iVar2);
        }
        FUN_14604922a((longlong)iVar2 * 0x60 + *plVar1,local_a8);
        if (local_60[0] != 0) {
          FUN_1400020a8();
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        lVar6 = lVar6 + 0x60;
        lVar5 = lVar5 + -0x60;
      } while (lVar5 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664f9bc FUN_14664f9bc body=258 status=ok
// SIG undefined FUN_14664f9bc(void)

void FUN_14664f9bc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      FUN_1446ddc76(&local_30,"RefreshOptions",1);
      FUN_1401cd85c(lVar1,local_30,param_1 + 0x2c0);
    }
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      FUN_1446ddc76(&local_38,"Option_GameSettings_SliderUpdate",1);
      FUN_1401cd85c(lVar1,local_38,param_1 + 0x2c8);
    }
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      FUN_1446ddc76(&local_40,"Option_GameSettings_SettingEnabledChanged",1);
      FUN_1401cd85c(lVar1,local_40,param_1 + 0x2d0);
    }
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664fac0 FUN_14664fac0 body=81 status=ok
// SIG undefined FUN_14664fac0(void)

undefined8 * FUN_14664fac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2d8,0x10);
  FUN_140e8cfb8(puVar1);
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  *puVar1 = &PTR_FUN_14b9c27a0;
  puVar1[0x56] = DAT_14cbdd4b8;
  return puVar1;
}



// FUNCTION 14664fb12 FUN_14664fb12 body=81 status=ok
// SIG undefined FUN_14664fb12(void)

undefined8 * FUN_14664fb12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2d8,0x10);
  FUN_140e8cfb8(puVar1);
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  *puVar1 = &PTR_FUN_14b9c2960;
  puVar1[0x56] = DAT_14cbdd498;
  return puVar1;
}



// FUNCTION 14664fb64 FUN_14664fb64 body=88 status=ok
// SIG undefined FUN_14664fb64(void)

undefined8 * FUN_14664fb64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2e0,0x10);
  FUN_140e8cfb8(puVar1);
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  *puVar1 = &PTR_FUN_14b9c2b40;
  *(undefined1 *)(puVar1 + 0x5b) = 0;
  puVar1[0x56] = DAT_14cbdd4a0;
  return puVar1;
}



// FUNCTION 14664fbbc FUN_14664fbbc body=88 status=ok
// SIG undefined FUN_14664fbbc(void)

undefined8 * FUN_14664fbbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2e0,0x10);
  FUN_140e8cfb8(puVar1);
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  *puVar1 = &PTR_FUN_14b9c2b40;
  *(undefined1 *)(puVar1 + 0x5b) = 0;
  puVar1[0x56] = DAT_14cbdd4a0;
  return puVar1;
}



// FUNCTION 14664fc14 FUN_14664fc14 body=78 status=ok
// SIG undefined FUN_14664fc14(void)

void FUN_14664fc14(longlong param_1)

{
  FUN_1407cbc56();
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_14592564c(*(longlong *)(param_1 + 0x288),param_1 + 0x160);
    if ((*(longlong *)(param_1 + 0x288) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x288) + 0xe8) == '\x01')) {
      *(undefined8 *)(param_1 + 0x2b0) = DAT_14cbdd4a8;
    }
  }
  return;
}



// FUNCTION 14664fc62 FUN_14664fc62 body=31 status=ok
// SIG undefined FUN_14664fc62(void)

void FUN_14664fc62(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x6b0,0x10);
  FUN_145965304(uVar1);
  return;
}



// FUNCTION 14664fc82 FUN_14664fc82 body=379 status=ok
// SIG undefined FUN_14664fc82(void)

void FUN_14664fc82(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145af40a6();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c64f0;
  puVar1[2] = &LAB_148e91cc8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"OnApplySettings",puVar1);
  FUN_1446ddc76(local_50,"OnApplySettings",1);
  uVar3 = local_50._0_4_ & 0xffff;
  puVar1 = (undefined8 *)
           FUN_140db173c(param_1 + 0x38,
                         (local_50._0_4_ << 0x10 | uVar3) + local_50._4_4_ +
                         (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar3 >> 4),local_50)
  ;
  *puVar1 = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c64f0;
  puVar1[2] = &LAB_148e91cd6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"OnRestoreSettings",puVar1);
  FUN_1446ddc76(local_50,"OnRestoreSettings",1);
  uVar3 = local_50._0_4_ & 0xffff;
  puVar1 = (undefined8 *)
           FUN_140db173c(param_1 + 0x38,
                         (local_50._0_4_ << 0x10 | uVar3) + local_50._4_4_ +
                         (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar3 >> 4),local_50)
  ;
  *puVar1 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664fdfe FUN_14664fdfe body=86 status=ok
// SIG undefined FUN_14664fdfe(void)

undefined8 * FUN_14664fdfe(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c48d0;
  return _Dst;
}



// FUNCTION 14664fe54 FUN_14664fe54 body=86 status=ok
// SIG undefined FUN_14664fe54(void)

undefined8 * FUN_14664fe54(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c48d0;
  return _Dst;
}



// FUNCTION 14664feaa FUN_14664feaa body=132 status=ok
// SIG undefined FUN_14664feaa(void)

void FUN_14664feaa(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6510;
  puVar1[2] = FUN_148e922ea;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnCategorySelected",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6510;
  puVar1[2] = FUN_148e9232c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnChallengeFocused",puVar1);
  return;
}



// FUNCTION 14664ff2e FUN_14664ff2e body=66 status=ok
// SIG undefined FUN_14664ff2e(void)

undefined8 * FUN_14664ff2e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9c4a90;
  return _Dst;
}



// FUNCTION 14664ff70 FUN_14664ff70 body=66 status=ok
// SIG undefined FUN_14664ff70(void)

undefined8 * FUN_14664ff70(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9c4a90;
  return _Dst;
}



// FUNCTION 14664ffb8 FUN_14664ffb8 body=79 status=ok
// SIG undefined FUN_14664ffb8(void)

void FUN_14664ffb8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c66f0;
  puVar1[2] = &LAB_1461407a6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"HideHintBar",puVar1);
  return;
}



// FUNCTION 14665000e FUN_14665000e body=118 status=ok
// SIG undefined FUN_14665000e(void)

void FUN_14665000e(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  
  FUN_14588cd9e();
  FUN_14129c41e(param_1,&DAT_14cbd94e8,0);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0xb0) == '\0') {
    iVar3 = 1;
    if (*(int *)(lVar1 + 0xb4) != 0) goto LAB_14665005e;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0xb4) + 1;
  }
  *(undefined1 *)(lVar1 + 0xb0) = 0;
  *(int *)(lVar1 + 0xb4) = iVar3;
LAB_14665005e:
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 146650084 FUN_146650084 body=36 status=ok
// SIG undefined FUN_146650084(void)

void FUN_146650084(undefined8 param_1)

{
  FUN_1459249be();
  FUN_14129c41e(param_1,&DAT_14cbd94e8,1);
  return;
}



// FUNCTION 1466500a8 FUN_1466500a8 body=100 status=ok
// SIG undefined FUN_1466500a8(void)

undefined8 * FUN_1466500a8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2f0);
  memset(_Dst,0,0x2f0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9c4c10;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0x400000003f000000;
  return _Dst;
}



// FUNCTION 14665010c FUN_14665010c body=104 status=ok
// SIG undefined FUN_14665010c(void)

undefined8 * FUN_14665010c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c4d80;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  _Dst[0x56] = 0;
  *(undefined1 *)(_Dst + 0x57) = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2cc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2d4) = 0;
  return _Dst;
}



// FUNCTION 146650174 FUN_146650174 body=104 status=ok
// SIG undefined FUN_146650174(void)

undefined8 * FUN_146650174(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c4d80;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  _Dst[0x56] = 0;
  *(undefined1 *)(_Dst + 0x57) = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2cc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2d4) = 0;
  return _Dst;
}



// FUNCTION 1466501e2 FUN_1466501e2 body=52 status=ok
// SIG undefined FUN_1466501e2(void)

void FUN_1466501e2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x4b0);
  memset(_Dst,0,0x4b0);
  FUN_145d88a6e(_Dst);
  return;
}



// FUNCTION 146650216 FUN_146650216 body=377 status=ok
// SIG undefined FUN_146650216(void)

void FUN_146650216(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6960;
  puVar1[2] = &LAB_145f83692;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ListItemHovered",puVar1);
  *(undefined8 *)(param_1 + 0x2f0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6980;
  puVar1[2] = FUN_148e93f1a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ListItemSelected",puVar1);
  *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c69a0;
  puVar1[2] = FUN_1442d5b5e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_CustomizationSelected",puVar1);
  *(undefined8 *)(param_1 + 0x318) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c69a0;
  puVar1[2] = FUN_148e942be;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_CustomizationHovered",puVar1);
  *(undefined8 *)(param_1 + 0x308) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6960;
  puVar1[2] = &LAB_148e94506;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_CustomizationHoveredSound",puVar1);
  *(undefined8 *)(param_1 + 0x300) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6960;
  puVar1[2] = FUN_1442d4962;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ApplyClicked",puVar1);
  *(undefined8 *)(param_1 + 0x330) = uVar2;
  return;
}



// FUNCTION 146650396 FUN_146650396 body=76 status=ok
// SIG undefined FUN_146650396(void)

undefined8 * FUN_146650396(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x368);
  memset(_Dst,0,0x368);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9c5090;
  *(undefined4 *)(_Dst + 0x6c) = 0;
  return _Dst;
}



// FUNCTION 1466503e2 FUN_1466503e2 body=76 status=ok
// SIG undefined FUN_1466503e2(void)

undefined8 * FUN_1466503e2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x368);
  memset(_Dst,0,0x368);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9c5090;
  *(undefined4 *)(_Dst + 0x6c) = 0;
  return _Dst;
}



// FUNCTION 14665042e FUN_14665042e body=69 status=ok
// SIG undefined FUN_14665042e(void)

undefined8 * FUN_14665042e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1780;
  if ((longlong *)param_1[0x57] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x57] + 0x10))();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650474 FUN_146650474 body=59 status=ok
// SIG undefined FUN_146650474(void)

longlong FUN_146650474(longlong param_1,int param_2)

{
  if (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x10))();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466504b0 FUN_1466504b0 body=70 status=ok
// SIG undefined FUN_1466504b0(void)

undefined8 * FUN_1466504b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466504f6 FUN_1466504f6 body=70 status=ok
// SIG undefined FUN_1466504f6(void)

undefined8 * FUN_1466504f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665053c FUN_14665053c body=70 status=ok
// SIG undefined FUN_14665053c(void)

undefined8 * FUN_14665053c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650582 FUN_146650582 body=99 status=ok
// SIG undefined FUN_146650582(void)

void FUN_146650582(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1459b6156(_Dst);
  *_Dst = &PTR_FUN_14b8a01e0;
  _Dst[0x1e] = 0;
  _Dst[0x1f] = 0;
  _Dst[0x20] = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1466505e6 FUN_1466505e6 body=38 status=ok
// SIG undefined FUN_1466505e6(void)

undefined8 FUN_1466505e6(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665060c FUN_14665060c body=157 status=ok
// SIG undefined FUN_14665060c(void)

void FUN_14665060c(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8cd370;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *(undefined4 *)((longlong)_Dst + 0xb4) = 0;
  *(undefined1 *)(_Dst + 0x17) = 0;
  *(undefined4 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined1 *)(_Dst + 0x18) = 0;
  *(undefined4 *)((longlong)_Dst + 0xc4) = 0;
  *(undefined1 *)(_Dst + 0x19) = 0;
  *(undefined1 *)(_Dst + 0x1d) = 0;
  *(undefined4 *)((longlong)_Dst + 0xec) = 0;
  *(undefined8 *)((longlong)_Dst + 0xcc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xd4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xdc) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1466506aa FUN_1466506aa body=70 status=ok
// SIG undefined FUN_1466506aa(void)

undefined8 * FUN_1466506aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c3780;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466506f0 FUN_1466506f0 body=136 status=ok
// SIG undefined FUN_1466506f0(void)

void FUN_1466506f0(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8cdab0;
  *(undefined2 *)(_Dst + 0x16) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb4) = 0xffffffffffffffff;
  FUN_1400b22c2(_Dst + 0x18,"vault");
  FUN_1400b22c2(_Dst + 0x1a,"Unknown Type");
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146650778 FUN_146650778 body=38 status=ok
// SIG undefined FUN_146650778(void)

undefined8 FUN_146650778(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665079e FUN_14665079e body=95 status=ok
// SIG undefined FUN_14665079e(void)

void FUN_14665079e(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb8);
  memset(_Dst,0,0xb8);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8ce200;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *(undefined4 *)((longlong)_Dst + 0xb4) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1466507fe FUN_1466507fe body=38 status=ok
// SIG undefined FUN_1466507fe(void)

undefined8 FUN_1466507fe(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650824 FUN_146650824 body=98 status=ok
// SIG undefined FUN_146650824(void)

void FUN_146650824(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(200);
  memset(_Dst,0,200);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8d6d90;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined4 *)(_Dst + 0x18) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146650886 FUN_146650886 body=38 status=ok
// SIG undefined FUN_146650886(void)

undefined8 FUN_146650886(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466508ac FUN_1466508ac body=38 status=ok
// SIG undefined FUN_1466508ac(void)

undefined8 FUN_1466508ac(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466508d2 FUN_1466508d2 body=144 status=ok
// SIG undefined FUN_1466508d2(void)

void FUN_1466508d2(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_1408f3f9e(_Dst);
  _Dst[0x1a] = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
  *(undefined4 *)(_Dst + 0x1b) = 0x3f19999a;
  *_Dst = &PTR_FUN_14b8d74e0;
  *(undefined1 *)(_Dst + 0x1c) = 0xff;
  *(undefined8 *)((longlong)_Dst + 0xe4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xec) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xfc) = 0;
  _Dst[0x20] = 0;
  _Dst[0x21] = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146650962 FUN_146650962 body=29 status=ok
// SIG undefined FUN_146650962(void)

undefined8 FUN_146650962(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650980 FUN_146650980 body=38 status=ok
// SIG undefined FUN_146650980(void)

undefined8 FUN_146650980(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_WidgetDeactivated",1);
  return param_2;
}



// FUNCTION 1466509a6 FUN_1466509a6 body=29 status=ok
// SIG undefined FUN_1466509a6(void)

undefined8 FUN_1466509a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466509c4 FUN_1466509c4 body=38 status=ok
// SIG undefined FUN_1466509c4(void)

undefined8 FUN_1466509c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_SwitchWeapon",1);
  return param_2;
}



// FUNCTION 1466509ea FUN_1466509ea body=38 status=ok
// SIG undefined FUN_1466509ea(void)

undefined8 FUN_1466509ea(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650a10 FUN_146650a10 body=52 status=ok
// SIG undefined FUN_146650a10(void)

void FUN_146650a10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xb50,0x10);
  FUN_145854e74(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 146650a44 FUN_146650a44 body=38 status=ok
// SIG undefined FUN_146650a44(void)

undefined8 FUN_146650a44(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetItem",1);
  return param_2;
}



// FUNCTION 146650a6a FUN_146650a6a body=42 status=ok
// SIG undefined FUN_146650a6a(void)

longlong FUN_146650a6a(longlong param_1,int param_2)

{
  FUN_140368b56(param_1 + 0x48);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650a94 FUN_146650a94 body=38 status=ok
// SIG undefined FUN_146650a94(void)

undefined8 FUN_146650a94(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UpdateItemFlags",1);
  return param_2;
}



// FUNCTION 146650aba FUN_146650aba body=29 status=ok
// SIG undefined FUN_146650aba(void)

undefined8 FUN_146650aba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650ad8 FUN_146650ad8 body=38 status=ok
// SIG undefined FUN_146650ad8(void)

undefined8 FUN_146650ad8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClearItem",1);
  return param_2;
}



// FUNCTION 146650afe FUN_146650afe body=29 status=ok
// SIG undefined FUN_146650afe(void)

undefined8 FUN_146650afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650b1c FUN_146650b1c body=38 status=ok
// SIG undefined FUN_146650b1c(void)

undefined8 FUN_146650b1c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetGlyphs",1);
  return param_2;
}



// FUNCTION 146650b42 FUN_146650b42 body=29 status=ok
// SIG undefined FUN_146650b42(void)

undefined8 FUN_146650b42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650b60 FUN_146650b60 body=38 status=ok
// SIG undefined FUN_146650b60(void)

undefined8 FUN_146650b60(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"DeinitStandIn",1);
  return param_2;
}



// FUNCTION 146650b86 FUN_146650b86 body=29 status=ok
// SIG undefined FUN_146650b86(void)

undefined8 FUN_146650b86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650ba4 FUN_146650ba4 body=38 status=ok
// SIG undefined FUN_146650ba4(void)

undefined8 FUN_146650ba4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClearPendingThumbnails",1);
  return param_2;
}



// FUNCTION 146650bca FUN_146650bca body=29 status=ok
// SIG undefined FUN_146650bca(void)

undefined8 FUN_146650bca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650be8 FUN_146650be8 body=38 status=ok
// SIG undefined FUN_146650be8(void)

undefined8 FUN_146650be8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MenuOpened",1);
  return param_2;
}



// FUNCTION 146650c0e FUN_146650c0e body=29 status=ok
// SIG undefined FUN_146650c0e(void)

undefined8 FUN_146650c0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650c2c FUN_146650c2c body=70 status=ok
// SIG undefined FUN_146650c2c(void)

undefined8 * FUN_146650c2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650c72 FUN_146650c72 body=29 status=ok
// SIG undefined FUN_146650c72(void)

undefined8 FUN_146650c72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650c90 FUN_146650c90 body=38 status=ok
// SIG undefined FUN_146650c90(void)

undefined8 FUN_146650c90(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_ToggleLegend",1);
  return param_2;
}



// FUNCTION 146650cb6 FUN_146650cb6 body=29 status=ok
// SIG undefined FUN_146650cb6(void)

undefined8 FUN_146650cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650cd4 FUN_146650cd4 body=38 status=ok
// SIG undefined FUN_146650cd4(void)

undefined8 FUN_146650cd4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_DiscoverLocationsUpdated",1);
  return param_2;
}



// FUNCTION 146650cfa FUN_146650cfa body=70 status=ok
// SIG undefined FUN_146650cfa(void)

undefined8 * FUN_146650cfa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650d40 FUN_146650d40 body=70 status=ok
// SIG undefined FUN_146650d40(void)

undefined8 * FUN_146650d40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650d86 FUN_146650d86 body=95 status=ok
// SIG undefined FUN_146650d86(void)

void FUN_146650d86(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb8);
  memset(_Dst,0,0xb8);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8a0500;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *(undefined4 *)((longlong)_Dst + 0xb4) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146650de6 FUN_146650de6 body=29 status=ok
// SIG undefined FUN_146650de6(void)

undefined8 FUN_146650de6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650e04 FUN_146650e04 body=106 status=ok
// SIG undefined FUN_146650e04(void)

void FUN_146650e04(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xd0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8a0ca0;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146650e6e FUN_146650e6e body=29 status=ok
// SIG undefined FUN_146650e6e(void)

undefined8 FUN_146650e6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650e8c FUN_146650e8c body=38 status=ok
// SIG undefined FUN_146650e8c(void)

undefined8 FUN_146650e8c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_Customization_SetEntryType",1);
  return param_2;
}



// FUNCTION 146650eb2 FUN_146650eb2 body=38 status=ok
// SIG undefined FUN_146650eb2(void)

undefined8 FUN_146650eb2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RespawnStandIn",1);
  return param_2;
}



// FUNCTION 146650ed8 FUN_146650ed8 body=60 status=ok
// SIG undefined FUN_146650ed8(void)

longlong FUN_146650ed8(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0x100) == '\x01') {
    FUN_145a1457c(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650f14 FUN_146650f14 body=38 status=ok
// SIG undefined FUN_146650f14(void)

undefined8 FUN_146650f14(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146650f3a FUN_146650f3a body=78 status=ok
// SIG undefined FUN_146650f3a(void)

void FUN_146650f3a(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb50);
  memset(_Dst,0,0xb50);
  FUN_145854e74(_Dst);
  *_Dst = &PTR_FUN_14b8a1980;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146650f88 FUN_146650f88 body=184 status=ok
// SIG undefined FUN_146650f88(void)

void FUN_146650f88(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_3);
    puVar4 = &DAT_149dfb77a;
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(puVar2 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar2;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar3);
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_4);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar2;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar4);
    (**(code **)(*plVar1 + 0x140))(plVar1,*param_5);
                    /* WARNING: Could not recover jumptable at 0x00014665102f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 146651040 FUN_146651040 body=103 status=ok
// SIG undefined FUN_146651040(void)

void FUN_146651040(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001466510a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146651087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1466510a8 FUN_1466510a8 body=29 status=ok
// SIG undefined FUN_1466510a8(void)

undefined8 FUN_1466510a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466510c6 FUN_1466510c6 body=29 status=ok
// SIG undefined FUN_1466510c6(void)

undefined8 FUN_1466510c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466510e4 FUN_1466510e4 body=38 status=ok
// SIG undefined FUN_1466510e4(void)

undefined8 FUN_1466510e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PlayerController",1);
  return param_2;
}



// FUNCTION 14665110a FUN_14665110a body=29 status=ok
// SIG undefined FUN_14665110a(void)

undefined8 FUN_14665110a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146651128 FUN_146651128 body=66 status=ok
// SIG undefined FUN_146651128(void)

undefined8 * FUN_146651128(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c6140;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665116a FUN_14665116a body=118 status=ok
// SIG undefined FUN_14665116a(void)

void FUN_14665116a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c6250;
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



// FUNCTION 1466511e0 FUN_1466511e0 body=66 status=ok
// SIG undefined FUN_1466511e0(void)

longlong FUN_1466511e0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0x90;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != -0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146651222 FUN_146651222 body=38 status=ok
// SIG undefined FUN_146651222(void)

undefined8 FUN_146651222(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"OptionUpdate_GameSettings",1);
  return param_2;
}



// FUNCTION 146651248 FUN_146651248 body=103 status=ok
// SIG undefined FUN_146651248(void)

void FUN_146651248(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001466512ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014665128f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1466512b0 FUN_1466512b0 body=93 status=ok
// SIG undefined FUN_1466512b0(void)

undefined8 * FUN_1466512b0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2d0);
  memset(_Dst,0,0x2d0);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c9720;
  *(undefined1 *)(_Dst + 0x59) = 0;
  return _Dst;
}



// FUNCTION 14665130e FUN_14665130e body=93 status=ok
// SIG undefined FUN_14665130e(void)

undefined8 * FUN_14665130e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2d0);
  memset(_Dst,0,0x2d0);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c9720;
  *(undefined1 *)(_Dst + 0x59) = 0;
  return _Dst;
}



// FUNCTION 14665136c FUN_14665136c body=1107 status=ok
// SIG undefined FUN_14665136c(void)

void FUN_14665136c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140db10ee();
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cbe80;
  puVar2[2] = FUN_1442e06ae;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInputSelectionChanged",puVar2);
  lVar1 = param_1 + 0x38;
  FUN_1446ddc76(local_50,"OnInputSelectionChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cbe80;
  puVar2[2] = FUN_148ea15f8;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInputFocusChanged",puVar2);
  FUN_1446ddc76(local_50,"OnInputFocusChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cbea0;
  puVar2[2] = FUN_1442e084e;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnLogEntryFocused",puVar2);
  FUN_1446ddc76(local_50,"OnLogEntryFocused",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cbea0;
  puVar2[2] = FUN_1442e0bb2;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnLogEntryClicked",puVar2);
  FUN_1446ddc76(local_50,"OnLogEntryClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cbec0;
  puVar2[2] = FUN_148ea166a;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"Event_OnDropdownClicked",puVar2);
  FUN_1446ddc76(local_50,"Event_OnDropdownClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cbee0;
  puVar2[2] = FUN_148ea17d2;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"Event_OnDropdownItemClicked",puVar2);
  FUN_1446ddc76(local_50,"Event_OnDropdownItemClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cbf00;
  puVar2[2] = FUN_148ea1936;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnPlayEchoLog",puVar2);
  FUN_1446ddc76(local_50,"OnPlayEchoLog",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466517c0 FUN_1466517c0 body=93 status=ok
// SIG undefined FUN_1466517c0(void)

undefined8 * FUN_1466517c0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2d8);
  memset(_Dst,0,0x2d8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c9930;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0;
  return _Dst;
}



// FUNCTION 14665181e FUN_14665181e body=93 status=ok
// SIG undefined FUN_14665181e(void)

undefined8 * FUN_14665181e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2d8);
  memset(_Dst,0,0x2d8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c9930;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0;
  return _Dst;
}



// FUNCTION 146651882 FUN_146651882 body=147 status=ok
// SIG undefined FUN_146651882(void)

void FUN_146651882(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cbfb0;
  puVar1[2] = FUN_148ea2764;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_SDUClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2c8) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cbfb0;
  puVar1[2] = &LAB_148ea2c0e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_SDULeave",puVar1);
  *(undefined8 *)(param_1 + 0x2d0) = uVar2;
  return;
}



// FUNCTION 14665191c FUN_14665191c body=188 status=ok
// SIG undefined FUN_14665191c(void)

undefined8 * FUN_14665191c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x370);
  memset(_Dst,0,0x370);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c9af0;
  *(undefined1 *)(_Dst + 0x59) = 0;
  *(undefined4 *)((longlong)_Dst + 0x2fc) = 0;
  *(undefined1 *)(_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2cc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2d4) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2dc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2e4) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2e9) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2f1) = 0;
  *(undefined8 *)((longlong)_Dst + 0x304) = 0;
  *(undefined8 *)((longlong)_Dst + 0x30c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x314) = 0;
  *(undefined8 *)((longlong)_Dst + 0x31c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x324) = 0;
  *(undefined8 *)((longlong)_Dst + 0x32c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x334) = 0;
  *(undefined8 *)((longlong)_Dst + 0x33c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x344) = 0;
  *(undefined8 *)((longlong)_Dst + 0x34c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x354) = 0;
  *(undefined8 *)((longlong)_Dst + 0x35c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x364) = 0;
  return _Dst;
}



// FUNCTION 1466519d8 FUN_1466519d8 body=188 status=ok
// SIG undefined FUN_1466519d8(void)

undefined8 * FUN_1466519d8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x370);
  memset(_Dst,0,0x370);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9c9af0;
  *(undefined1 *)(_Dst + 0x59) = 0;
  *(undefined4 *)((longlong)_Dst + 0x2fc) = 0;
  *(undefined1 *)(_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2cc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2d4) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2dc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2e4) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2e9) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2f1) = 0;
  *(undefined8 *)((longlong)_Dst + 0x304) = 0;
  *(undefined8 *)((longlong)_Dst + 0x30c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x314) = 0;
  *(undefined8 *)((longlong)_Dst + 0x31c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x324) = 0;
  *(undefined8 *)((longlong)_Dst + 0x32c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x334) = 0;
  *(undefined8 *)((longlong)_Dst + 0x33c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x344) = 0;
  *(undefined8 *)((longlong)_Dst + 0x34c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x354) = 0;
  *(undefined8 *)((longlong)_Dst + 0x35c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x364) = 0;
  return _Dst;
}



// FUNCTION 146651a94 FUN_146651a94 body=183 status=ok
// SIG undefined FUN_146651a94(void)

undefined8 * FUN_146651a94(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c13e0;
  FUN_1446ddc76(&local_38,"AddState",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c13e0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_40,iVar1,*param_3,1);
  FUN_1447683ea(param_1 + 7,local_40,1);
  *(undefined1 *)(param_1 + 8) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146651b4c FUN_146651b4c body=967 status=ok
// SIG undefined FUN_146651b4c(void)

void FUN_146651b4c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140db10ee();
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cc010;
  puVar2[2] = FUN_1459169de;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"VListPageSizeRefreshed",puVar2);
  lVar1 = param_1 + 0x38;
  FUN_1446ddc76(local_50,"VListPageSizeRefreshed",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cc030;
  puVar2[2] = FUN_141354436;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnEquipmentSlotFocused",puVar2);
  FUN_1446ddc76(local_50,"OnEquipmentSlotFocused",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cc030;
  puVar2[2] = FUN_145917952;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnEquipmentSlotClicked",puVar2);
  FUN_1446ddc76(local_50,"OnEquipmentSlotClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cc050;
  puVar2[2] = FUN_148ea2caa;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"Event_OnDropdownItemClicked",puVar2);
  FUN_1446ddc76(local_50,"Event_OnDropdownItemClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cc010;
  puVar2[2] = FUN_1442e1ac6;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnOpenRewardCenter",puVar2);
  FUN_1446ddc76(local_50,"OnOpenRewardCenter",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9cc070;
  puVar2[2] = FUN_148ea2c26;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInputSelectionChanged",puVar2);
  FUN_1446ddc76(local_50,"OnInputSelectionChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146651f14 FUN_146651f14 body=266 status=ok
// SIG undefined FUN_146651f14(void)

void FUN_146651f14(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410c3574();
  if (*(longlong *)(param_1 + 0x358) == 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar1 = &DAT_14c9a1308;
    }
    else {
      puVar1 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbde798);
    }
    uVar2 = FUN_140625082(puVar1,&DAT_14c9a12e0);
    FUN_1447325ac(uVar2,&local_38,1);
    *(undefined8 *)(param_1 + 0x358) = local_38;
    puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_FUN_14b9c9cb0;
    FUN_1446ddc76(&local_38,"SetMenuList",1);
    FUN_14039176c(puVar1,uVar2,local_38,1);
    *puVar1 = &PTR_FUN_14b9c9cb0;
    puVar1[7] = *(undefined8 *)(param_1 + 0x358);
    FUN_140391314(param_1,puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146652020 FUN_146652020 body=82 status=ok
// SIG undefined FUN_146652020(void)

void FUN_146652020(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14134fce6();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  *(int *)(lVar1 + 0xa8) = *(int *)(lVar1 + 0xa8) + 1;
  *(int *)(lVar1 + 0xa0) = *(int *)(lVar1 + 0xa0) + -1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  FUN_14586a994(param_1,param_2);
  return;
}



// FUNCTION 146652072 FUN_146652072 body=66 status=ok
// SIG undefined FUN_146652072(void)

undefined8 * FUN_146652072(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c9ce0;
  return _Dst;
}



// FUNCTION 1466520b4 FUN_1466520b4 body=66 status=ok
// SIG undefined FUN_1466520b4(void)

undefined8 * FUN_1466520b4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9c9ce0;
  return _Dst;
}



// FUNCTION 1466520f6 FUN_1466520f6 body=55 status=ok
// SIG undefined FUN_1466520f6(void)

void FUN_1466520f6(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401cd71c();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x128) = *(byte *)(lVar1 + 0x128) | 1;
    *(undefined4 *)(lVar1 + 0xac) = 0;
  }
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 14665212e FUN_14665212e body=398 status=ok
// SIG undefined FUN_14665212e(void)

void FUN_14665212e(longlong param_1)

{
  void **ppvVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407cbe30();
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar5 = &DAT_14c9a1308;
    }
    else {
      puVar5 = (undefined8 *)FUN_1408db3b0(*(longlong *)(param_1 + 0x160),"class_html");
    }
    FUN_144a7cdd6(puVar5,0);
    FUN_1400b22c2(&local_38);
    _Src = local_38;
    ppvVar1 = (void **)(lVar3 + 0x130);
    iVar2 = *(int *)(lVar3 + 0x138);
    if (iVar2 == local_30) {
      if (1 < iVar2) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)((longlong)*ppvVar1 + lVar6);
          uVar8 = (ulonglong)uVar7;
          uVar9 = *(ushort *)((longlong)local_38 + lVar6);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_146652211;
LAB_146652278:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_146652278;
        }
        if (uVar7 != uVar9) goto LAB_1466521b4;
      }
    }
    else if (iVar2 + local_30 != 1) {
LAB_1466521b4:
      if (ppvVar1 != &local_38) {
        *(int *)(lVar3 + 0x138) = local_30;
        if (*(int *)(lVar3 + 0x13c) == 0 && local_30 == 0) {
          *(undefined4 *)(lVar3 + 0x13c) = 0;
        }
        else {
          FUN_1446dd670(ppvVar1,local_30);
          if (local_30 != 0) {
            memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
          }
        }
      }
      puVar4 = *(ushort **)(lVar3 + 0x80);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
LAB_146652211:
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1466522be FUN_1466522be body=215 status=ok
// SIG undefined FUN_1466522be(void)

void FUN_1466522be(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc290;
  puVar1[2] = FUN_148ea43b0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"OnInputFocusChanged",puVar1);
  FUN_1446ddc76(local_28,"OnInputFocusChanged",1);
  uVar3 = local_28._0_4_ & 0xffff;
  puVar1 = (undefined8 *)
           FUN_140db173c(param_1 + 0x38,
                         (local_28._0_4_ << 0x10 | uVar3) + local_28._4_4_ +
                         (local_28._2_4_ << 0x13 | local_28._2_4_ & 0xffff) + (uVar3 >> 4),local_28)
  ;
  *puVar1 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146652396 FUN_146652396 body=77 status=ok
// SIG undefined FUN_146652396(void)

undefined8 * FUN_146652396(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9c9de0;
  _Dst[0x58] = 0;
  return _Dst;
}



// FUNCTION 1466523e4 FUN_1466523e4 body=77 status=ok
// SIG undefined FUN_1466523e4(void)

undefined8 * FUN_1466523e4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9c9de0;
  _Dst[0x58] = 0;
  return _Dst;
}



// FUNCTION 146652432 FUN_146652432 body=305 status=ok
// SIG undefined FUN_146652432(void)

void FUN_146652432(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1407cbc56();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_1446ddc76(local_28,"scroll_speed",1);
    puVar3 = &DAT_14c9a1308;
    puVar2 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar2 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),local_28);
    }
    uVar4 = FUN_140b963dc(puVar2,0x44200000);
    *(undefined4 *)(lVar1 + 0x104) = uVar4;
    FUN_1446ddc76(local_28,"scroll_speed_max",1);
    puVar2 = &DAT_14c9a1308;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar2 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),local_28);
    }
    uVar4 = FUN_140b963dc(puVar2,0x44a00000);
    *(undefined4 *)(lVar1 + 0x108) = uVar4;
    FUN_1446ddc76(local_28,"scroll_speed_time",1);
    if (*(longlong *)(param_1 + 0x160) != 0) {
      puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),local_28);
    }
    uVar4 = FUN_140b963dc(puVar3,0x40800000);
    *(undefined4 *)(lVar1 + 0x10c) = uVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146652564 FUN_146652564 body=147 status=ok
// SIG undefined FUN_146652564(void)

void FUN_146652564(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc2b0;
  puVar1[2] = FUN_148ea4740;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"AcceptCurrentEULA",puVar1);
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc2b0;
  puVar1[2] = &LAB_148ea486c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"AllowAccept",puVar1);
  *(undefined8 *)(param_1 + 0x2b8) = uVar2;
  return;
}



// FUNCTION 1466525f8 FUN_1466525f8 body=107 status=ok
// SIG undefined FUN_1466525f8(void)

void FUN_1466525f8(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x2b0);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2b8);
  FUN_141346d9a(param_1,&local_20);
  FUN_141346e22(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146652664 FUN_146652664 body=52 status=ok
// SIG undefined FUN_146652664(void)

void FUN_146652664(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x388);
  memset(_Dst,0,0x388);
  FUN_145c02652(_Dst);
  return;
}



// FUNCTION 146652698 FUN_146652698 body=226 status=ok
// SIG undefined FUN_146652698(void)

void FUN_146652698(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_1410c2540();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0xb8) = DAT_14cbdea58;
    FUN_144a787a6(lVar1 + 0xe0,&DAT_14cbdea88);
    *(undefined8 *)(lVar1 + 0x210) = DAT_14cbdea60;
    FUN_144a787a6(lVar1 + 0x238,&DAT_14cbdea98);
    *(undefined8 *)(lVar1 + 0x290) = DAT_14cbdea70;
    FUN_144a787a6(lVar1 + 0x2b8,&DAT_14cbdeaa8);
    *(undefined8 *)(lVar1 + 0x138) = DAT_14cbdea78;
    FUN_144a787a6(lVar1 + 0x148,&DAT_14cbdeab8);
    *(undefined8 *)(lVar1 + 0x158) = DAT_14cbdea80;
    FUN_144a787a6(lVar1 + 0x168,&DAT_14cbdeac8);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 14665277a FUN_14665277a body=240 status=ok
// SIG undefined FUN_14665277a(void)

void FUN_14665277a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc340;
  puVar1[2] = &LAB_148ea505e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnStepperValueChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc340;
  puVar1[2] = FUN_148ea50a4;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,&DAT_14b9c7bec,puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc360;
  puVar1[2] = &LAB_148ea534e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnToggleValueChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc380;
  puVar1[2] = &LAB_148ea5382;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnApplySettings",puVar1);
  return;
}



// FUNCTION 14665286a FUN_14665286a body=91 status=ok
// SIG undefined FUN_14665286a(void)

void FUN_14665286a(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  FUN_1407cbc56();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      plVar3 = &DAT_14c9a1308;
    }
    else {
      plVar3 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdeb00);
    }
    if (*plVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14000584e(*plVar3,0);
    }
    *(undefined1 *)(lVar1 + 0x321) = uVar2;
  }
  return;
}



// FUNCTION 1466528c6 FUN_1466528c6 body=87 status=ok
// SIG undefined FUN_1466528c6(void)

undefined8 * FUN_1466528c6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9ca110;
  *(undefined4 *)(_Dst + 0x53) = 0;
  *(undefined8 *)((longlong)_Dst + 0x29c) = 0;
  return _Dst;
}



// FUNCTION 14665291e FUN_14665291e body=87 status=ok
// SIG undefined FUN_14665291e(void)

undefined8 * FUN_14665291e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9ca110;
  *(undefined4 *)(_Dst + 0x53) = 0;
  *(undefined8 *)((longlong)_Dst + 0x29c) = 0;
  return _Dst;
}



// FUNCTION 146652976 FUN_146652976 body=203 status=ok
// SIG undefined FUN_146652976(void)

void FUN_146652976(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0x10100;
    local_54 = 0;
    local_4c = 0;
    uVar2 = FUN_14001cc68(0x28,0x10);
    FUN_140e63992(uVar2,&local_48,&local_58);
    FUN_14039144e(lVar1,uVar2);
    FUN_140e027f0(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x29c) = 0;
  FUN_141196df0(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146652a42 FUN_146652a42 body=132 status=ok
// SIG undefined FUN_146652a42(void)

void FUN_146652a42(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc3a0;
  puVar1[2] = FUN_145d57f22;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"HintEntryMouseDown",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc3a0;
  puVar1[2] = &LAB_145d57f16;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"HintEntryMouseUp",puVar1);
  return;
}



// FUNCTION 146652ac6 FUN_146652ac6 body=86 status=ok
// SIG undefined FUN_146652ac6(void)

undefined8 * FUN_146652ac6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9ca210;
  return _Dst;
}



// FUNCTION 146652b1c FUN_146652b1c body=66 status=ok
// SIG undefined FUN_146652b1c(void)

undefined8 * FUN_146652b1c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9ca3b0;
  return _Dst;
}



// FUNCTION 146652b5e FUN_146652b5e body=66 status=ok
// SIG undefined FUN_146652b5e(void)

undefined8 * FUN_146652b5e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9ca3b0;
  return _Dst;
}



// FUNCTION 146652ba0 FUN_146652ba0 body=64 status=ok
// SIG undefined FUN_146652ba0(void)

void FUN_146652ba0(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_1410ea50c();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x118) = *(byte *)(lVar1 + 0x118) & 0xfb;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 146652be0 FUN_146652be0 body=52 status=ok
// SIG undefined FUN_146652be0(void)

void FUN_146652be0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x5f0);
  memset(_Dst,0,0x5f0);
  FUN_145f9a6ec(_Dst);
  return;
}



// FUNCTION 146652c1a FUN_146652c1a body=132 status=ok
// SIG undefined FUN_146652c1a(void)

void FUN_146652c1a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc510;
  puVar1[2] = FUN_148ea61b4;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SetAgumentTooltip",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc510;
  puVar1[2] = FUN_148ea64bc;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SetElementTooltip",puVar1);
  return;
}



// FUNCTION 146652c9e FUN_146652c9e body=66 status=ok
// SIG undefined FUN_146652c9e(void)

undefined8 * FUN_146652c9e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9ca5c0;
  return _Dst;
}



// FUNCTION 146652ce0 FUN_146652ce0 body=66 status=ok
// SIG undefined FUN_146652ce0(void)

undefined8 * FUN_146652ce0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9ca5c0;
  return _Dst;
}



// FUNCTION 146652d22 FUN_146652d22 body=77 status=ok
// SIG undefined FUN_146652d22(void)

undefined8 * FUN_146652d22(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9ca6c0;
  _Dst[0x56] = 0;
  return _Dst;
}



// FUNCTION 146652d70 FUN_146652d70 body=77 status=ok
// SIG undefined FUN_146652d70(void)

undefined8 * FUN_146652d70(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9ca6c0;
  _Dst[0x56] = 0;
  return _Dst;
}



// FUNCTION 146652dca FUN_146652dca body=132 status=ok
// SIG undefined FUN_146652dca(void)

void FUN_146652dca(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc530;
  puVar1[2] = FUN_146045e7e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnFadeOutComplete",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc530;
  puVar1[2] = FUN_146045eec;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"LegalIntroComplete",puVar1);
  return;
}



// FUNCTION 146652e4e FUN_146652e4e body=52 status=ok
// SIG undefined FUN_146652e4e(void)

void FUN_146652e4e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x328);
  memset(_Dst,0,0x328);
  FUN_145945610(_Dst);
  return;
}



// FUNCTION 146652e82 FUN_146652e82 body=137 status=ok
// SIG undefined FUN_146652e82(void)

void FUN_146652e82(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_1457aaa84();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc6a0;
  puVar1[2] = FUN_1442e782e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"ClickedNewCharacter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc6c0;
  puVar1[2] = &LAB_1442e8294;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SharedProgression",puVar1);
  return;
}



// FUNCTION 146652f0c FUN_146652f0c body=52 status=ok
// SIG undefined FUN_146652f0c(void)

void FUN_146652f0c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x3c0);
  memset(_Dst,0,0x3c0);
  FUN_145c969fc(_Dst);
  return;
}



// FUNCTION 146652f40 FUN_146652f40 body=365 status=ok
// SIG undefined FUN_146652f40(void)

void FUN_146652f40(longlong param_1)

{
  ushort *puVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  FUN_1410ea50c();
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x370) == '\0') {
      bVar2 = 0 < *(int *)(param_1 + 0x388);
    }
    else {
      bVar2 = true;
    }
    *(bool *)(lVar5 + 0x2a0) = bVar2;
    lVar4 = FUN_14479d2ce(param_1 + 0x30);
    uVar3 = FUN_140426394(lVar4 + 0x3c0,&DAT_14cbd92d8);
    *(undefined1 *)(lVar5 + 0x29d) = uVar3;
    lVar4 = FUN_14479d2ce(param_1 + 0x30);
    uVar3 = FUN_140426394(lVar4 + 0x3c0,&DAT_14cbd9318);
    *(undefined1 *)(lVar5 + 0x29e) = uVar3;
    puVar1 = *(ushort **)(lVar5 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
    lVar5 = *(longlong *)(param_1 + 0x288);
    if (lVar5 != 0) {
      if ((*(char *)(param_1 + 0x3a0) == '\0') && (*(char *)(param_1 + 0x3a8) != '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        if (*(char *)(lVar5 + 0x29f) == '\0') {
          uVar3 = *(undefined1 *)(lVar5 + 0x29e);
        }
      }
      *(undefined1 *)(lVar5 + 0x29c) = uVar3;
      puVar1 = *(ushort **)(lVar5 + 0x80);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
  }
  lVar5 = FUN_140391552(param_1);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_14b9cabe0;
    *(undefined1 *)(puVar6 + 4) = 1;
    FUN_14039144e(lVar5,puVar6);
    return;
  }
  return;
}



// FUNCTION 1466530ae FUN_1466530ae body=109 status=ok
// SIG undefined FUN_1466530ae(void)

void FUN_1466530ae(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9cabe0;
    *(undefined1 *)(puVar2 + 4) = 0;
    FUN_14039144e(lVar1,puVar2);
  }
  FUN_14129c92c(param_1);
  FUN_1412e39f8(param_1);
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 14665311c FUN_14665311c body=152 status=ok
// SIG undefined FUN_14665311c(void)

void FUN_14665311c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    lVar1 = FUN_140391552(param_1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_14b9cabe0;
      *(undefined1 *)(puVar2 + 4) = 0;
      FUN_14039144e(lVar1,puVar2);
    }
  }
  if (*(int *)(param_1 + 0x38c) < 0) {
    *(undefined4 *)(param_1 + 0x388) = 0;
    FUN_1402191ca(param_1 + 0x380,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x388) = 0;
  }
  FUN_141497d7e(param_1);
  return;
}



// FUNCTION 1466531b4 FUN_1466531b4 body=633 status=ok
// SIG undefined FUN_1466531b4(void)

void FUN_1466531b4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc6e0;
  puVar1[2] = FUN_1459c762e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PlayerEntryClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc6e0;
  puVar1[2] = FUN_1459c72f2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PlayerEntryFocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc700;
  puVar1[2] = FUN_1412e39f8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PlayerEntryUnfocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc720;
  puVar1[2] = FUN_1459707fe;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"ContextItemClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc720;
  puVar1[2] = &LAB_145970768;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PagedSectionFocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc720;
  puVar1[2] = &LAB_145970710;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PagedSectionUnfocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc740;
  puVar1[2] = &LAB_148ea7600;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PageClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc760;
  puVar1[2] = &DAT_148ea7680;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PageGlyphClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc780;
  puVar1[2] = FUN_1461c81f8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SpecialEntryFocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc700;
  puVar1[2] = FUN_1458bf080;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SpecialEntryUnfocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc700;
  puVar1[2] = &LAB_148ea75c0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"FooterClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cc700;
  puVar1[2] = FUN_14129c92c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"HideContextDropdown",puVar1);
  return;
}



// FUNCTION 14665342e FUN_14665342e body=101 status=ok
// SIG undefined FUN_14665342e(void)

void FUN_14665342e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_1412e3a72(param_1);
  FUN_14129c92c(param_1);
  FUN_14129cb24(param_1);
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 146653494 FUN_146653494 body=194 status=ok
// SIG undefined FUN_146653494(void)

void FUN_146653494(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x368) != 0) {
      FUN_1446ddc76(&local_30,"FOakUIEvent_StartMenuActiveStatusChanged",1);
      FUN_1401cd85c(lVar1,local_30,param_1 + 0x368);
    }
    if (*(longlong *)(param_1 + 0x378) != 0) {
      FUN_1446ddc76(&local_38,"FOakUIEvent_SpecialNavMenuActiveStatusChanged",1);
      FUN_1401cd85c(lVar1,local_38,param_1 + 0x378);
    }
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146653558 FUN_146653558 body=87 status=ok
// SIG undefined FUN_146653558(void)

undefined8 * FUN_146653558(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x378);
  memset(_Dst,0,0x378);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9cac40;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  return _Dst;
}



// FUNCTION 1466535b0 FUN_1466535b0 body=66 status=ok
// SIG undefined FUN_1466535b0(void)

undefined8 * FUN_1466535b0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9caeb0;
  return _Dst;
}



// FUNCTION 1466535f2 FUN_1466535f2 body=76 status=ok
// SIG undefined FUN_1466535f2(void)

undefined8 * FUN_1466535f2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c0);
  memset(_Dst,0,0x2c0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9cb020;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  return _Dst;
}



// FUNCTION 14665363e FUN_14665363e body=76 status=ok
// SIG undefined FUN_14665363e(void)

undefined8 * FUN_14665363e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c0);
  memset(_Dst,0,0x2c0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9cb020;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  return _Dst;
}



// FUNCTION 14665368a FUN_14665368a body=26 status=ok
// SIG undefined FUN_14665368a(void)

void FUN_14665368a(undefined8 param_1)

{
  FUN_1407cbc56();
  FUN_1456babc0(param_1);
  return;
}



// FUNCTION 1466536a4 FUN_1466536a4 body=79 status=ok
// SIG undefined FUN_1466536a4(void)

void FUN_1466536a4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccae0;
  puVar1[2] = FUN_148eabb6c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnClick",puVar1);
  return;
}



// FUNCTION 1466536f4 FUN_1466536f4 body=174 status=ok
// SIG undefined FUN_1466536f4(void)

void FUN_1466536f4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401cd71c();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"PauseGame_End",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x2b0);
    FUN_1446ddc76(&local_38,"MenuClosed",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x2b8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466537a4 FUN_1466537a4 body=52 status=ok
// SIG undefined FUN_1466537a4(void)

void FUN_1466537a4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_145a4ffec(_Dst);
  return;
}



// FUNCTION 1466537d8 FUN_1466537d8 body=85 status=ok
// SIG undefined FUN_1466537d8(void)

void FUN_1466537d8(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_1410c2540();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0xc0) = DAT_14cbdf8f0;
    *(undefined8 *)(lVar1 + 0x140) = DAT_14cbdf8f8;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 14665382e FUN_14665382e body=392 status=ok
// SIG undefined FUN_14665382e(void)

void FUN_14665382e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccc50;
  puVar1[2] = &LAB_148eac494;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"EntryClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccc50;
  puVar1[2] = FUN_148eac4b8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnEntryEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccc70;
  puVar1[2] = FUN_148eac596;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnEntryLeave",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccc90;
  puVar1[2] = FUN_148eac5ee;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnDropdownItemClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cccb0;
  puVar1[2] = &LAB_148eac66a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_OnDropdownClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccc70;
  puVar1[2] = FUN_148eac168;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnOpenSettings",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cccd0;
  puVar1[2] = &LAB_148eac6d2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnOfflineButtonMouseEvent",puVar1);
  return;
}



// FUNCTION 1466539b6 FUN_1466539b6 body=52 status=ok
// SIG undefined FUN_1466539b6(void)

void FUN_1466539b6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x350);
  memset(_Dst,0,0x350);
  FUN_145ad2096(_Dst);
  return;
}



// FUNCTION 1466539ea FUN_1466539ea body=156 status=ok
// SIG undefined FUN_1466539ea(void)

void FUN_1466539ea(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_1410c2540();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x170) = DAT_14cbdf9a0;
    FUN_144a787a6(lVar1 + 0x198,&DAT_14cbdf9c0);
    *(undefined8 *)(lVar1 + 0xb8) = DAT_14cbdf9b8;
    FUN_144a787a6(lVar1 + 200,&DAT_14cbdf9e0);
    *(undefined8 *)(lVar1 + 0x270) = DAT_14cbdf9a8;
    FUN_144a787a6(lVar1 + 0x298,&DAT_14cbdf9d0);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 146653a86 FUN_146653a86 body=293 status=ok
// SIG undefined FUN_146653a86(void)

void FUN_146653a86(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cccf0;
  puVar1[2] = &LAB_148eacefe;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnStepperValueChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cccf0;
  puVar1[2] = FUN_148eacf06;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,&DAT_14b9c7bec,puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccd10;
  puVar1[2] = &LAB_148ead07a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnToggleValueChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccd30;
  puVar1[2] = &LAB_148ead0aa;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_OnDropdownClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccd50;
  puVar1[2] = &LAB_148ead118;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnApplySettings",puVar1);
  return;
}



// FUNCTION 146653bac FUN_146653bac body=91 status=ok
// SIG undefined FUN_146653bac(void)

void FUN_146653bac(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  FUN_1407cbc56();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      plVar3 = &DAT_14c9a1308;
    }
    else {
      plVar3 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdfa18);
    }
    if (*plVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14000584e(*plVar3,0);
    }
    *(undefined1 *)(lVar1 + 0x311) = uVar2;
  }
  return;
}



// FUNCTION 146653c08 FUN_146653c08 body=66 status=ok
// SIG undefined FUN_146653c08(void)

undefined8 * FUN_146653c08(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9cb500;
  return _Dst;
}



// FUNCTION 146653c4a FUN_146653c4a body=76 status=ok
// SIG undefined FUN_146653c4a(void)

undefined8 * FUN_146653c4a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9cb600;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  return _Dst;
}



// FUNCTION 146653c96 FUN_146653c96 body=76 status=ok
// SIG undefined FUN_146653c96(void)

undefined8 * FUN_146653c96(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9cb600;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  return _Dst;
}



// FUNCTION 146653ce2 FUN_146653ce2 body=659 status=ok
// SIG undefined FUN_146653ce2(void)

void FUN_146653ce2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140db1448();
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9ccd90;
  puVar2[2] = &LAB_148eadb3c;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnFocusHoverButton",puVar2);
  lVar1 = param_1 + 0x38;
  FUN_1446ddc76(local_50,"OnFocusHoverButton",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9ccd90;
  puVar2[2] = &LAB_148eadb6a;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnUnfocusHoverButton",puVar2);
  FUN_1446ddc76(local_50,"OnUnfocusHoverButton",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9ccd90;
  puVar2[2] = &LAB_148eadb98;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnFocusDetachedButton",puVar2);
  FUN_1446ddc76(local_50,"OnFocusDetachedButton",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9ccd90;
  puVar2[2] = &LAB_148eadbc6;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnUnfocusDetachedButton",puVar2);
  FUN_1446ddc76(local_50,"OnUnfocusDetachedButton",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146653f76 FUN_146653f76 body=140 status=ok
// SIG undefined FUN_146653f76(void)

void FUN_146653f76(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  FUN_1410ea50c();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    cVar3 = FUN_140426394(lVar2 + 0x3c0,&DAT_14cbd9378);
    if (cVar3 == '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x30);
      cVar3 = FUN_140426394(lVar2 + 0x3c0,&DAT_14cbd9380);
    }
    else {
      cVar3 = '\x01';
    }
    if (cVar3 == *(char *)(lVar1 + 0x2e0)) {
      iVar4 = 1;
      if (*(int *)(lVar1 + 0x2e4) != 0) {
        return;
      }
    }
    else {
      iVar4 = *(int *)(lVar1 + 0x2e4) + 1;
    }
    *(char *)(lVar1 + 0x2e0) = cVar3;
    *(int *)(lVar1 + 0x2e4) = iVar4;
  }
  return;
}



// FUNCTION 146654002 FUN_146654002 body=174 status=ok
// SIG undefined FUN_146654002(void)

void FUN_146654002(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401cd71c();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_SkillTree_ResetSkillTree",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x298);
    FUN_1446ddc76(&local_38,"FOakUIEvent_SkillTree_ResetSpecializations",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x2a0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466540b2 FUN_1466540b2 body=97 status=ok
// SIG undefined FUN_1466540b2(void)

undefined8 * FUN_1466540b2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_145c2946e(_Dst);
  *_Dst = &PTR_FUN_14b9cb700;
  _Dst[0x5e] = 0;
  *(undefined4 *)(_Dst + 0x5f) = 0;
  _Dst[0x60] = 0;
  _Dst[0x61] = 0;
  return _Dst;
}



// FUNCTION 14665411a FUN_14665411a body=77 status=ok
// SIG undefined FUN_14665411a(void)

undefined8 * FUN_14665411a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9cb8d0;
  _Dst[0x56] = 0;
  return _Dst;
}



// FUNCTION 146654168 FUN_146654168 body=100 status=ok
// SIG undefined FUN_146654168(void)

undefined8 * FUN_146654168(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e8);
  memset(_Dst,0,0x2e8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9cba50;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0;
  _Dst[0x5b] = 0;
  *(undefined4 *)(_Dst + 0x5c) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1466541cc FUN_1466541cc body=100 status=ok
// SIG undefined FUN_1466541cc(void)

undefined8 * FUN_1466541cc(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e8);
  memset(_Dst,0,0x2e8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9cba50;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0;
  _Dst[0x5b] = 0;
  *(undefined4 *)(_Dst + 0x5c) = 0xffffffff;
  return _Dst;
}



// FUNCTION 146654230 FUN_146654230 body=193 status=ok
// SIG undefined FUN_146654230(void)

void FUN_146654230(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1459249be();
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_1446ddc76(&local_38,"ClearStructureredInteractable",1);
  FUN_14039176c(puVar2,uVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_140391314(param_1);
  *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
    memset(*(void **)(param_1 + 0x2b0),0,(longlong)*(int *)(param_1 + 0x2b8));
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466542f2 FUN_1466542f2 body=279 status=ok
// SIG undefined FUN_1466542f2(void)

void FUN_1466542f2(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cce90;
  puVar1[2] = &LAB_148eae764;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PrevPage",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cce90;
  puVar1[2] = &LAB_148eae798;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"NextPage",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cce90;
  puVar1[2] = &LAB_148eae7d0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"AcceptClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cce90;
  puVar1[2] = &LAB_148eae7d8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"TrackClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cceb0;
  puVar1[2] = FUN_1461ce9a2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"ChangeToPage",puVar1);
  return;
}



// FUNCTION 14665440a FUN_14665440a body=96 status=ok
// SIG undefined FUN_14665440a(void)

undefined8 * FUN_14665440a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x300);
  memset(_Dst,0,0x300);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9cbc40;
  *(undefined4 *)(_Dst + 0x59) = 0;
  return _Dst;
}



// FUNCTION 14665446a FUN_14665446a body=96 status=ok
// SIG undefined FUN_14665446a(void)

undefined8 * FUN_14665446a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x300);
  memset(_Dst,0,0x300);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *_Dst = &PTR_FUN_14b9cbc40;
  *(undefined4 *)(_Dst + 0x59) = 0;
  return _Dst;
}



// FUNCTION 1466544ca FUN_1466544ca body=785 status=ok
// SIG undefined FUN_1466544ca(void)

void FUN_1466544ca(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined8 auStack_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbdfe58) {
    FUN_144b3d300(&DAT_14cbdfe58);
    if (DAT_14cbdfe58 == -1) {
      FUN_144a5dc74(&DAT_14cbdfe48);
      atexit((_func_5014 *)&LAB_1442ec494);
      _Init_thread_footer(&DAT_14cbdfe58);
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  auStack_48[0] = 0;
  FUN_1446ddda2(&local_68,"SortHeaderText",0);
  FUN_140ac6c96(&local_68,&DAT_14cbdfe48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((-1 < (int)param_2) && (uVar3 = *(uint *)(param_1 + 0x130), (int)param_2 < (int)uVar3)) {
    lVar6 = (ulonglong)param_2 * 0x90;
    if ((*(byte *)(*(longlong *)(param_1 + 0x128) + 0x89 + lVar6) & 1) == 0) {
      lVar7 = 0x88;
      uVar8 = 0;
      do {
        *(byte *)(*(longlong *)(param_1 + 0x128) + lVar7) =
             *(byte *)(*(longlong *)(param_1 + 0x128) + lVar7) & 0xbf | (param_2 == uVar8) << 6;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x90;
      } while (uVar3 != uVar8);
      *(undefined1 *)(param_1 + 0xe0) = 0;
      FUN_140009b9a(&local_a8,*(longlong *)(param_1 + 0x128) + lVar6 + 0x10);
      local_c8 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 8))();
      }
      local_c0 = local_a0;
      FUN_14023409e(&local_d8,&DAT_14cbdfe48,1);
      local_68 = CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,&local_c8);
      local_80 = auStack_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_d8;
      local_90 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_b8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
      }
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d0 + 0x10))(local_d0);
          }
        }
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))();
      }
      uVar5 = FUN_1447a1f4a(local_b8);
      FUN_144a787a6(param_1 + 0xe8,uVar5);
      if (local_b8[0] != (longlong *)0x0) {
        (**(code **)(*local_b8[0] + 0x10))();
      }
      *(uint *)(param_1 + 0x354) = param_2;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
    else {
      FUN_148e6a14e(param_1 + 0xd0,param_2);
      puVar4 = *(ushort **)(param_1 + 0x80);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466547dc FUN_1466547dc body=387 status=ok
// SIG undefined FUN_1466547dc(void)

void FUN_1466547dc(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccfb0;
  puVar1[2] = FUN_148eaebb6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnToggleSortDirection",puVar1);
  *(undefined8 *)(param_1 + 0x2d0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccfd0;
  puVar1[2] = FUN_148eaec38;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnDropdownClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccff0;
  puVar1[2] = FUN_148eaed78;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_MissionSelected",puVar1);
  *(undefined8 *)(param_1 + 0x2e8) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cd010;
  puVar1[2] = FUN_148eaf084;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnDropdownItemClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2e0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9cd030;
  puVar1[2] = FUN_148eaf1be;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_ClearPip",puVar1);
  *(undefined8 *)(param_1 + 0x2f0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9ccfb0;
  puVar1[2] = FUN_148eaf3a6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnTrackMission",puVar1);
  *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  return;
}



// FUNCTION 146654960 FUN_146654960 body=185 status=ok
// SIG undefined FUN_146654960(void)

void FUN_146654960(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x2d8);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2d0);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2e8);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2e0);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2f0);
  FUN_141346d9a(param_1,&local_20);
  FUN_141346e22(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146654a1a FUN_146654a1a body=333 status=ok
// SIG undefined FUN_146654a1a(void)

int FUN_146654a1a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  uint local_210;
  int iStack_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  longlong *local_1f8;
  uint local_1f0;
  int iStack_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  byte local_b8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar1 = param_1 + 2;
  local_200 = 0x100000000;
  local_1f0 = 0xffffffff;
  iStack_1ec = 0;
  local_1e8 = 0;
  iVar4 = 0;
  iVar3 = 0;
  local_1f8 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_200);
    iVar3 = (int)param_1[5];
  }
  local_210 = local_1f0;
  iStack_20c = iStack_1ec;
  local_208 = local_1e8;
  local_204 = local_1e4;
  local_220 = local_200;
  local_218 = local_1f8;
  local_228 = param_1;
  if ((iStack_1ec != iVar3) || (local_1f8 != plVar1)) {
    iVar4 = 0;
    do {
      do {
        puVar2 = (undefined8 *)(*local_228 + (longlong)iStack_20c * 0x1d0);
        local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,*(undefined4 *)(puVar2 + 1));
        local_200 = *puVar2;
        FUN_141445df2(&local_1f0);
        iVar4 = iVar4 + (uint)local_b8;
        FUN_141445c56(&local_1f0);
        local_210 = local_210 & ~local_220._4_4_;
        FUN_1449c0562(&local_220);
      } while (iStack_20c != iVar3);
    } while ((local_218 != plVar1) || (local_228 != param_1));
  }
  if ((local_38 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146654b68 FUN_146654b68 body=3718 status=ok
// SIG undefined FUN_146654b68(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146654b68(longlong param_1,longlong *param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong ******pppppplVar2;
  longlong ******pppppplVar3;
  longlong ******pppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  longlong ******pppppplVar7;
  longlong *******ppppppplVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *******ppppppplVar13;
  longlong *******ppppppplVar14;
  longlong *******ppppppplVar15;
  int iVar16;
  longlong *******ppppppplVar17;
  longlong lVar18;
  longlong ******pppppplVar19;
  longlong lVar20;
  longlong *******ppppppplVar21;
  int iVar22;
  longlong *******ppppppplVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *******ppppppplVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_518 [32];
  longlong *******local_4f8;
  longlong *******local_4f0;
  longlong *******local_4e8;
  longlong *******local_4e0;
  longlong *******local_4d8;
  ulonglong local_4d0;
  int local_4c4;
  longlong *******local_4c0;
  longlong *******local_4b8;
  longlong *******local_4b0;
  longlong *local_4a8;
  undefined1 *local_4a0;
  longlong local_498;
  undefined1 local_489;
  longlong *******local_488;
  longlong *******local_480;
  undefined4 local_478 [188];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_498 = *(longlong *)(param_1 + 0x288);
  local_489 = param_3;
  if (local_498 != 0) {
    local_4a8 = (longlong *)&local_489;
    iVar10 = (int)param_2[1];
    if (1 < (longlong)iVar10) {
      ppppppplVar13 = (longlong *******)*param_2;
      memset(local_478,0,0x2f0);
      local_480 = ppppppplVar13 + (longlong)iVar10 * 4 + -4;
      local_488 = ppppppplVar13;
      fVar28 = logf((float)iVar10);
      local_478[0] = (undefined4)(longlong)(fVar28 + fVar28);
      local_4e8 = (longlong *******)&local_488;
      do {
        ppppppplVar14 = (longlong *******)*local_4e8;
        ppppppplVar13 = (longlong *******)local_4e8[1];
        iVar10 = (int)((ulonglong)((longlong)ppppppplVar13 - (longlong)ppppppplVar14) >> 5);
        local_4f8 = (longlong *******)(ulonglong)(iVar10 + 1);
        local_4f0 = (longlong *******)CONCAT44(local_4f0._4_4_,*(int *)(local_4e8 + 2));
        ppppppplVar17 = ppppppplVar13;
        ppppppplVar23 = ppppppplVar14;
        if (*(int *)(local_4e8 + 2) != 0) {
LAB_146654d74:
          local_4d8 = ppppppplVar23;
          local_4e0 = ppppppplVar17;
          if (8 < (int)local_4f8) {
            uVar25 = (ulonglong)local_4f8 >> 1;
            pppppplVar19 = ppppppplVar14[uVar25 * 4];
            pppppplVar2 = (ppppppplVar14 + uVar25 * 4)[1];
            local_178 = ppppppplVar14[uVar25 * 4 + 2];
            uStack_170 = (ppppppplVar14 + uVar25 * 4 + 2)[1];
            pppppplVar3 = *ppppppplVar14;
            pppppplVar4 = ppppppplVar14[1];
            pppppplVar5 = ppppppplVar14[3];
            ppppppplVar14[uVar25 * 4 + 2] = ppppppplVar14[2];
            (ppppppplVar14 + uVar25 * 4 + 2)[1] = pppppplVar5;
            ppppppplVar14[uVar25 * 4] = pppppplVar3;
            (ppppppplVar14 + uVar25 * 4)[1] = pppppplVar4;
            local_188._0_4_ = SUB84(pppppplVar19,0);
            local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
            uStack_180._0_4_ = (int)pppppplVar2;
            uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
            ppppppplVar14[2] = local_178;
            ppppppplVar14[3] = uStack_170;
            *(undefined4 *)ppppppplVar14 = (undefined4)local_188;
            *(undefined4 *)((longlong)ppppppplVar14 + 4) = local_188._4_4_;
            *(int *)(ppppppplVar14 + 1) = (int)uStack_180;
            *(undefined4 *)((longlong)ppppppplVar14 + 0xc) = uStack_180._4_4_;
            ppppppplVar26 = ppppppplVar13 + 4;
            ppppppplVar15 = ppppppplVar14;
            local_188 = pppppplVar19;
            uStack_180 = pppppplVar2;
            do {
              ppppppplVar17 = ppppppplVar15 + 4;
              ppppppplVar8 = ppppppplVar15 + 4;
              do {
                ppppppplVar15 = ppppppplVar8;
                ppppppplVar23 = ppppppplVar17;
                if (ppppppplVar13 < ppppppplVar15) break;
                cVar9 = FUN_1442ee578(&local_4a8,ppppppplVar14,ppppppplVar15);
                ppppppplVar17 = ppppppplVar23 + 4;
                ppppppplVar8 = ppppppplVar15 + 4;
              } while (cVar9 == '\0');
              ppppppplVar8 = ppppppplVar26 + -8;
              do {
                ppppppplVar21 = ppppppplVar26;
                ppppppplVar17 = ppppppplVar8;
                ppppppplVar26 = ppppppplVar21 + -4;
                if (ppppppplVar26 <= ppppppplVar14) break;
                cVar9 = FUN_1442ee578(&local_4a8,ppppppplVar26,ppppppplVar14);
                ppppppplVar8 = ppppppplVar17 + -4;
              } while (cVar9 == '\0');
              if (ppppppplVar26 < ppppppplVar15) goto LAB_146654e86;
              pppppplVar19 = *ppppppplVar15;
              pppppplVar2 = ppppppplVar15[1];
              local_178 = ppppppplVar15[2];
              uStack_170 = ppppppplVar15[3];
              pppppplVar3 = *ppppppplVar26;
              pppppplVar4 = ppppppplVar21[-3];
              pppppplVar5 = ppppppplVar21[-1];
              ppppppplVar15[2] = ppppppplVar21[-2];
              ppppppplVar15[3] = pppppplVar5;
              *ppppppplVar15 = pppppplVar3;
              ppppppplVar15[1] = pppppplVar4;
              local_188._0_4_ = SUB84(pppppplVar19,0);
              local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
              uStack_180._0_4_ = (int)pppppplVar2;
              uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
              ppppppplVar21[-2] = local_178;
              ppppppplVar21[-1] = uStack_170;
              *(undefined4 *)ppppppplVar26 = (undefined4)local_188;
              *(undefined4 *)((longlong)ppppppplVar21 + -0x1c) = local_188._4_4_;
              *(int *)(ppppppplVar21 + -3) = (int)uStack_180;
              *(undefined4 *)((longlong)ppppppplVar21 + -0x14) = uStack_180._4_4_;
              local_188 = pppppplVar19;
              uStack_180 = pppppplVar2;
            } while( true );
          }
          for (; ppppppplVar23 = ppppppplVar14, ppppppplVar17 = ppppppplVar14,
              ppppppplVar14 < ppppppplVar13; ppppppplVar13 = ppppppplVar13 + -4) {
            while (ppppppplVar26 = ppppppplVar23, ppppppplVar17 = ppppppplVar17 + 4,
                  ppppppplVar17 <= ppppppplVar13) {
              cVar9 = FUN_1442ee578(&local_4a8,ppppppplVar26,ppppppplVar17);
              ppppppplVar23 = ppppppplVar17;
              if (cVar9 == '\0') {
                ppppppplVar23 = ppppppplVar26;
              }
            }
            pppppplVar19 = *ppppppplVar26;
            pppppplVar2 = ppppppplVar26[1];
            local_178 = ppppppplVar26[2];
            uStack_170 = ppppppplVar26[3];
            pppppplVar3 = *ppppppplVar13;
            pppppplVar4 = ppppppplVar13[1];
            pppppplVar5 = ppppppplVar13[3];
            ppppppplVar26[2] = ppppppplVar13[2];
            ppppppplVar26[3] = pppppplVar5;
            *ppppppplVar26 = pppppplVar3;
            ppppppplVar26[1] = pppppplVar4;
            local_188._0_4_ = SUB84(pppppplVar19,0);
            local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
            uStack_180._0_4_ = (int)pppppplVar2;
            uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
            ppppppplVar13[2] = local_178;
            ppppppplVar13[3] = uStack_170;
            *(undefined4 *)ppppppplVar13 = (undefined4)local_188;
            *(undefined4 *)((longlong)ppppppplVar13 + 4) = local_188._4_4_;
            *(int *)(ppppppplVar13 + 1) = (int)uStack_180;
            *(undefined4 *)((longlong)ppppppplVar13 + 0xc) = uStack_180._4_4_;
            local_188 = pppppplVar19;
            uStack_180 = pppppplVar2;
          }
          goto LAB_14665528e;
        }
LAB_146654f86:
        if ((int)local_4f8 != 0) {
          iVar10 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
          do {
            iVar12 = iVar10 * 2 + 1;
            iVar24 = iVar10;
            if (iVar12 < (int)local_4f8) {
              do {
                iVar22 = iVar24 * 2 + 2;
                iVar16 = iVar12;
                if ((iVar22 < (int)local_4f8) &&
                   (cVar9 = FUN_1442ee578(&local_4a8,ppppppplVar14 + (longlong)iVar22 * 4,
                                          ppppppplVar14 + (longlong)iVar12 * 4), cVar9 == '\0')) {
                  iVar16 = iVar22;
                }
                ppppppplVar13 = ppppppplVar14 + (longlong)iVar24 * 4;
                ppppppplVar17 = ppppppplVar14 + (longlong)iVar16 * 4;
                cVar9 = FUN_1442ee578(&local_4a8,ppppppplVar13,ppppppplVar17);
                if (cVar9 == '\0') break;
                pppppplVar19 = *ppppppplVar13;
                pppppplVar2 = ppppppplVar13[1];
                local_178 = ppppppplVar13[2];
                uStack_170 = ppppppplVar13[3];
                pppppplVar3 = *ppppppplVar17;
                pppppplVar4 = ppppppplVar17[1];
                pppppplVar5 = ppppppplVar17[3];
                ppppppplVar13[2] = ppppppplVar17[2];
                ppppppplVar13[3] = pppppplVar5;
                *ppppppplVar13 = pppppplVar3;
                ppppppplVar13[1] = pppppplVar4;
                local_188._0_4_ = SUB84(pppppplVar19,0);
                local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
                uStack_180._0_4_ = (int)pppppplVar2;
                uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
                ppppppplVar17[2] = local_178;
                ppppppplVar17[3] = uStack_170;
                *(undefined4 *)ppppppplVar17 = (undefined4)local_188;
                *(undefined4 *)((longlong)ppppppplVar17 + 4) = local_188._4_4_;
                *(int *)(ppppppplVar17 + 1) = (int)uStack_180;
                *(undefined4 *)((longlong)ppppppplVar17 + 0xc) = uStack_180._4_4_;
                iVar12 = iVar16 * 2 + 1;
                iVar24 = iVar16;
                local_188 = pppppplVar19;
                uStack_180 = pppppplVar2;
              } while (iVar12 < (int)local_4f8);
            }
            bVar27 = iVar10 != 0;
            iVar10 = iVar10 + -1;
          } while (bVar27);
          if (1 < (int)local_4f8) {
            uVar25 = ((ulonglong)local_4f8 & 0xffffffff) - 1;
            pppppplVar19 = *ppppppplVar14;
            pppppplVar2 = ppppppplVar14[1];
            pppppplVar3 = ppppppplVar14[2];
            pppppplVar4 = ppppppplVar14[3];
            pppppplVar5 = ppppppplVar14[uVar25 * 4];
            pppppplVar6 = (ppppppplVar14 + uVar25 * 4)[1];
            pppppplVar7 = (ppppppplVar14 + uVar25 * 4 + 2)[1];
            ppppppplVar14[2] = ppppppplVar14[uVar25 * 4 + 2];
            ppppppplVar14[3] = pppppplVar7;
            *ppppppplVar14 = pppppplVar5;
            ppppppplVar14[1] = pppppplVar6;
            local_188._0_4_ = SUB84(pppppplVar19,0);
            local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
            uStack_180._0_4_ = (int)pppppplVar2;
            uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
            local_178._0_4_ = SUB84(pppppplVar3,0);
            local_178._4_4_ = (undefined4)((ulonglong)pppppplVar3 >> 0x20);
            uStack_170._0_4_ = SUB84(pppppplVar4,0);
            uStack_170._4_4_ = (undefined4)((ulonglong)pppppplVar4 >> 0x20);
            ppppppplVar13 = ppppppplVar14 + uVar25 * 4 + 2;
            *(undefined4 *)ppppppplVar13 = (undefined4)local_178;
            *(undefined4 *)((longlong)ppppppplVar13 + 4) = local_178._4_4_;
            *(undefined4 *)(ppppppplVar13 + 1) = (undefined4)uStack_170;
            *(undefined4 *)((longlong)ppppppplVar13 + 0xc) = uStack_170._4_4_;
            ppppppplVar13 = ppppppplVar14 + uVar25 * 4;
            *(undefined4 *)ppppppplVar13 = (undefined4)local_188;
            *(undefined4 *)((longlong)ppppppplVar13 + 4) = local_188._4_4_;
            *(int *)(ppppppplVar13 + 1) = (int)uStack_180;
            *(undefined4 *)((longlong)ppppppplVar13 + 0xc) = uStack_180._4_4_;
            local_188 = pppppplVar19;
            uStack_180 = pppppplVar2;
            local_178 = pppppplVar3;
            uStack_170 = pppppplVar4;
            if ((int)local_4f8 != 2) {
              do {
                iVar10 = 0;
                iVar12 = 1;
                iVar24 = 0;
                do {
                  iVar10 = iVar10 + 2;
                  iVar16 = iVar12;
                  if (((longlong)iVar10 < (longlong)uVar25) &&
                     (cVar9 = FUN_1442ee578(&local_4a8,ppppppplVar14 + (longlong)iVar10 * 4,
                                            ppppppplVar14 + (longlong)iVar12 * 4), cVar9 == '\0')) {
                    iVar16 = iVar10;
                  }
                  ppppppplVar13 = ppppppplVar14 + (longlong)iVar24 * 4;
                  ppppppplVar17 = ppppppplVar14 + (longlong)iVar16 * 4;
                  cVar9 = FUN_1442ee578(&local_4a8,ppppppplVar13,ppppppplVar17);
                  if (cVar9 == '\0') break;
                  pppppplVar19 = *ppppppplVar13;
                  pppppplVar2 = ppppppplVar13[1];
                  pppppplVar3 = ppppppplVar13[2];
                  pppppplVar4 = ppppppplVar13[3];
                  pppppplVar5 = *ppppppplVar17;
                  pppppplVar6 = ppppppplVar17[1];
                  pppppplVar7 = ppppppplVar17[3];
                  ppppppplVar13[2] = ppppppplVar17[2];
                  ppppppplVar13[3] = pppppplVar7;
                  *ppppppplVar13 = pppppplVar5;
                  ppppppplVar13[1] = pppppplVar6;
                  local_188._0_4_ = SUB84(pppppplVar19,0);
                  local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
                  uStack_180._0_4_ = (int)pppppplVar2;
                  uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
                  local_178._0_4_ = SUB84(pppppplVar3,0);
                  local_178._4_4_ = (undefined4)((ulonglong)pppppplVar3 >> 0x20);
                  uStack_170._0_4_ = SUB84(pppppplVar4,0);
                  uStack_170._4_4_ = (undefined4)((ulonglong)pppppplVar4 >> 0x20);
                  *(undefined4 *)(ppppppplVar17 + 2) = (undefined4)local_178;
                  *(undefined4 *)((longlong)ppppppplVar17 + 0x14) = local_178._4_4_;
                  *(undefined4 *)(ppppppplVar17 + 3) = (undefined4)uStack_170;
                  *(undefined4 *)((longlong)ppppppplVar17 + 0x1c) = uStack_170._4_4_;
                  *(undefined4 *)ppppppplVar17 = (undefined4)local_188;
                  *(undefined4 *)((longlong)ppppppplVar17 + 4) = local_188._4_4_;
                  *(int *)(ppppppplVar17 + 1) = (int)uStack_180;
                  *(undefined4 *)((longlong)ppppppplVar17 + 0xc) = uStack_180._4_4_;
                  iVar10 = iVar16 * 2;
                  iVar12 = iVar16 * 2 + 1;
                  local_188 = pppppplVar19;
                  uStack_180 = pppppplVar2;
                  local_178 = pppppplVar3;
                  uStack_170 = pppppplVar4;
                  iVar24 = iVar16;
                } while ((longlong)iVar12 < (longlong)uVar25);
                uVar1 = uVar25 - 1;
                pppppplVar19 = *ppppppplVar14;
                pppppplVar2 = ppppppplVar14[1];
                pppppplVar3 = ppppppplVar14[2];
                pppppplVar4 = ppppppplVar14[3];
                pppppplVar5 = ppppppplVar14[uVar1 * 4];
                pppppplVar6 = (ppppppplVar14 + uVar1 * 4)[1];
                pppppplVar7 = (ppppppplVar14 + uVar1 * 4 + 2)[1];
                ppppppplVar14[2] = ppppppplVar14[uVar1 * 4 + 2];
                ppppppplVar14[3] = pppppplVar7;
                *ppppppplVar14 = pppppplVar5;
                ppppppplVar14[1] = pppppplVar6;
                local_188._0_4_ = SUB84(pppppplVar19,0);
                local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
                uStack_180._0_4_ = (int)pppppplVar2;
                uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
                local_178._0_4_ = SUB84(pppppplVar3,0);
                local_178._4_4_ = (undefined4)((ulonglong)pppppplVar3 >> 0x20);
                uStack_170._0_4_ = SUB84(pppppplVar4,0);
                uStack_170._4_4_ = (undefined4)((ulonglong)pppppplVar4 >> 0x20);
                ppppppplVar13 = ppppppplVar14 + uVar1 * 4 + 2;
                *(undefined4 *)ppppppplVar13 = (undefined4)local_178;
                *(undefined4 *)((longlong)ppppppplVar13 + 4) = local_178._4_4_;
                *(undefined4 *)(ppppppplVar13 + 1) = (undefined4)uStack_170;
                *(undefined4 *)((longlong)ppppppplVar13 + 0xc) = uStack_170._4_4_;
                ppppppplVar13 = ppppppplVar14 + uVar1 * 4;
                *(undefined4 *)ppppppplVar13 = (undefined4)local_188;
                *(undefined4 *)((longlong)ppppppplVar13 + 4) = local_188._4_4_;
                *(int *)(ppppppplVar13 + 1) = (int)uStack_180;
                *(undefined4 *)((longlong)ppppppplVar13 + 0xc) = uStack_180._4_4_;
                bVar27 = 2 < uVar25;
                uVar25 = uVar1;
                local_188 = pppppplVar19;
                uStack_180 = pppppplVar2;
                local_178 = pppppplVar3;
                uStack_170 = pppppplVar4;
              } while (bVar27);
            }
          }
        }
LAB_14665528e:
        local_4e8 = local_4e8 + -3;
      } while (&local_488 <= local_4e8);
      iVar10 = (int)param_2[1];
    }
    if (iVar10 != 0) {
      lVar18 = *param_2;
      lVar20 = (longlong)iVar10 * 0x20 + lVar18;
      do {
        local_4a8 = &local_498;
        local_4a0 = &local_489;
        iVar10 = *(int *)(lVar18 + 0x18);
        uVar25 = (ulonglong)iVar10;
        if (1 < (longlong)uVar25) {
          local_4f8 = *(longlong ********)(lVar18 + 0x10);
          memset(local_478,0,0x2f0);
          local_488 = local_4f8;
          local_480 = local_4f8 + uVar25 * 0x27 + -0x27;
          fVar28 = logf((float)iVar10);
          local_478[0] = (undefined4)(longlong)(fVar28 + fVar28);
          local_4c0 = (longlong *******)&local_488;
          do {
            local_4f0 = (longlong *******)*local_4c0;
            local_4d8 = (longlong *******)local_4c0[1];
            local_4c4 = *(int *)(local_4c0 + 2);
            iVar10 = (int)((ulonglong)((longlong)local_4d8 - (longlong)local_4f0) >> 3) *
                     -0x69069069;
            local_4d0 = (ulonglong)(iVar10 + 1);
            ppppppplVar14 = local_4f0;
            ppppppplVar17 = local_4f0;
            ppppppplVar13 = local_4d8;
            if (local_4c4 != 0) {
LAB_146655372:
              local_4b0 = ppppppplVar13;
              local_4b8 = ppppppplVar17;
              if (8 < (int)local_4d0) {
                ppppppplVar14 = local_4f0 + (local_4d0 >> 1) * 0x27;
                memcpy(&local_188,ppppppplVar14,0x138);
                ppppppplVar13 = local_4f0;
                memcpy(ppppppplVar14,local_4f0,0x138);
                memcpy(ppppppplVar13,&local_188,0x138);
                local_4f8 = local_4d8 + 0x27;
                local_4e8 = ppppppplVar13;
                do {
                  ppppppplVar14 = local_4e8 + 0x27;
                  ppppppplVar13 = ppppppplVar14;
                  do {
                    ppppppplVar17 = ppppppplVar13;
                    local_4e0 = ppppppplVar14;
                    if (local_4d8 < ppppppplVar17) break;
                    cVar9 = FUN_1442ee5f8(&local_4a8,local_4f0,ppppppplVar17);
                    ppppppplVar14 = local_4e0 + 0x27;
                    ppppppplVar13 = ppppppplVar17 + 0x27;
                  } while (cVar9 == '\0');
                  ppppppplVar14 = local_4f8 + -0x4e;
                  local_4e8 = ppppppplVar17;
                  do {
                    ppppppplVar13 = ppppppplVar14;
                    local_4f8 = local_4f8 + -0x27;
                    if (local_4f8 <= local_4f0) break;
                    cVar9 = FUN_1442ee5f8(&local_4a8);
                    ppppppplVar14 = ppppppplVar13 + -0x27;
                  } while (cVar9 == '\0');
                  ppppppplVar14 = local_4e8;
                  if (local_4f8 < local_4e8) goto LAB_1466554c1;
                  memcpy(&local_188,local_4e8,0x138);
                  ppppppplVar13 = local_4f8;
                  memcpy(ppppppplVar14,local_4f8,0x138);
                  memcpy(ppppppplVar13,&local_188,0x138);
                } while( true );
              }
              if (local_4f0 < local_4d8) {
                local_4e0 = local_4f0 + 0x27;
                do {
                  ppppppplVar13 = local_4f0;
                  if (local_4e0 <= local_4d8) {
                    local_4f8 = local_4f0;
                    ppppppplVar14 = local_4e0;
                    do {
                      cVar9 = FUN_1442ee5f8(&local_4a8,local_4f8,ppppppplVar14);
                      ppppppplVar13 = ppppppplVar14;
                      if (cVar9 == '\0') {
                        ppppppplVar13 = local_4f8;
                      }
                      ppppppplVar14 = ppppppplVar14 + 0x27;
                      local_4f8 = ppppppplVar13;
                    } while (ppppppplVar14 <= local_4d8);
                  }
                  local_4f8 = local_4d8 + -0x27;
                  memcpy(&local_188,ppppppplVar13,0x138);
                  ppppppplVar14 = local_4d8;
                  memcpy(ppppppplVar13,local_4d8,0x138);
                  memcpy(ppppppplVar14,&local_188,0x138);
                  local_4d8 = local_4f8;
                } while (local_4f0 < local_4f8);
              }
              goto LAB_1466559cf;
            }
LAB_146655612:
            local_4e8 = ppppppplVar14;
            local_4f0 = local_4e8;
            if ((int)local_4d0 != 0) {
              uVar11 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
              do {
                local_4e0 = (longlong *******)(ulonglong)uVar11;
                iVar10 = uVar11 * 2 + 1;
                local_4f8 = (longlong *******)CONCAT44(local_4f8._4_4_,iVar10);
                if (iVar10 < (int)local_4d0) {
                  local_4f0 = (longlong *******)CONCAT44(local_4f0._4_4_,uVar11);
                  do {
                    uVar11 = uVar11 * 2 + 2;
                    if ((int)uVar11 < (int)local_4d0) {
                      cVar9 = FUN_1442ee5f8(&local_4a8,local_4e8 + (longlong)(int)uVar11 * 0x27,
                                            local_4e8 + (longlong)(int)local_4f8 * 0x27);
                      if (cVar9 == '\0') {
                        local_4f8 = (longlong *******)(ulonglong)uVar11;
                      }
                    }
                    ppppppplVar13 = local_4e8 + (longlong)(int)local_4f0 * 0x27;
                    local_4f0 = local_4e8 + (longlong)(int)local_4f8 * 0x27;
                    local_4f8 = (longlong *******)((ulonglong)local_4f8 & 0xffffffff);
                    cVar9 = FUN_1442ee5f8(&local_4a8,ppppppplVar13);
                    if (cVar9 == '\0') break;
                    memcpy(&local_188,ppppppplVar13,0x138);
                    ppppppplVar14 = local_4f0;
                    memcpy(ppppppplVar13,local_4f0,0x138);
                    memcpy(ppppppplVar14,&local_188,0x138);
                    uVar11 = (uint)local_4f8;
                    iVar10 = uVar11 * 2 + 1;
                    local_4f0 = (longlong *******)CONCAT44(local_4f0._4_4_,uVar11);
                    local_4f8 = (longlong *******)CONCAT44(local_4f8._4_4_,iVar10);
                  } while (iVar10 < (int)local_4d0);
                }
                uVar11 = (int)local_4e0 - 1;
              } while ((int)local_4e0 != 0);
              local_4e0 = (longlong *******)&DAT_ffffffff;
              if (1 < (int)local_4d0) {
                local_4e0 = (longlong *******)((local_4d0 & 0xffffffff) - 1);
                ppppppplVar13 = local_4e8 + (longlong)local_4e0 * 0x27;
                memcpy(&local_188,local_4e8,0x138);
                memcpy(local_4e8,ppppppplVar13,0x138);
                memcpy(ppppppplVar13,&local_188,0x138);
                if ((int)local_4d0 != 2) {
                  do {
                    iVar10 = 0;
                    local_4f0 = (longlong *******)CONCAT44(local_4f0._4_4_,1);
                    local_4d8 = (longlong *******)((ulonglong)local_4d8 & 0xffffffff00000000);
                    do {
                      uVar11 = iVar10 + 2;
                      if ((longlong)(int)uVar11 < (longlong)local_4e0) {
                        cVar9 = FUN_1442ee5f8(&local_4a8,local_4e8 + (longlong)(int)uVar11 * 0x27,
                                              local_4e8 + (longlong)(int)local_4f0 * 0x27);
                        if (cVar9 == '\0') {
                          local_4f0 = (longlong *******)(ulonglong)uVar11;
                        }
                      }
                      ppppppplVar13 = (longlong *******)((ulonglong)local_4f0 & 0xffffffff);
                      ppppppplVar14 = local_4e8 + (longlong)(int)local_4d8 * 0x27;
                      local_4f8._0_4_ = (int)local_4f0;
                      local_4f0 = local_4e8 + (longlong)(int)local_4f8 * 0x27;
                      local_4f8 = ppppppplVar13;
                      cVar9 = FUN_1442ee5f8(&local_4a8,ppppppplVar14);
                      if (cVar9 == '\0') break;
                      memcpy(&local_188,ppppppplVar14,0x138);
                      ppppppplVar13 = local_4f0;
                      memcpy(ppppppplVar14,local_4f0,0x138);
                      memcpy(ppppppplVar13,&local_188,0x138);
                      iVar24 = (int)local_4f8;
                      iVar10 = iVar24 * 2;
                      iVar12 = iVar24 * 2 + 1;
                      local_4f0 = (longlong *******)CONCAT44(local_4f0._4_4_,iVar12);
                      local_4d8 = (longlong *******)CONCAT44(local_4d8._4_4_,iVar24);
                    } while ((longlong)iVar12 < (longlong)local_4e0);
                    local_4f8 = (longlong *******)((longlong)local_4e0 + -1);
                    ppppppplVar13 = local_4e8 + (longlong)local_4f8 * 0x27;
                    memcpy(&local_188,local_4e8,0x138);
                    memcpy(local_4e8,ppppppplVar13,0x138);
                    memcpy(ppppppplVar13,&local_188,0x138);
                    ppppppplVar13 = local_4e0;
                    local_4e0 = local_4f8;
                  } while ((longlong *******)0x2 < ppppppplVar13);
                }
              }
            }
LAB_1466559cf:
            local_4c0 = local_4c0 + -3;
          } while (&local_488 <= local_4c0);
          uVar25 = (ulonglong)*(uint *)(lVar18 + 0x18);
        }
        FUN_145a0370c(&local_188,*(undefined4 *)(local_498 + 0x354),*(undefined8 *)(lVar18 + 0x10));
        pppppplVar19 = (longlong ******)&DAT_149dfb77a;
        if ((int)uStack_180 != 0) {
          pppppplVar19 = local_188;
        }
        FUN_140002266(&local_488,L"%s %d",pppppplVar19,uVar25 & 0xffffffff);
        if (local_188 != (longlong ******)0x0) {
          FUN_1400020a8();
        }
        iVar10 = (int)local_480 + -1;
        if ((int)local_480 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(lVar18,local_488,iVar10);
        if (local_488 != (longlong *******)0x0) {
          FUN_1400020a8();
        }
        lVar18 = lVar18 + 0x20;
      } while (lVar18 != lVar20);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146654e86:
  pppppplVar19 = *ppppppplVar14;
  pppppplVar2 = ppppppplVar14[1];
  local_178 = ppppppplVar14[2];
  uStack_170 = ppppppplVar14[3];
  pppppplVar3 = *ppppppplVar26;
  pppppplVar4 = ppppppplVar21[-3];
  pppppplVar5 = ppppppplVar21[-1];
  ppppppplVar14[2] = ppppppplVar21[-2];
  ppppppplVar14[3] = pppppplVar5;
  *ppppppplVar14 = pppppplVar3;
  ppppppplVar14[1] = pppppplVar4;
  local_188._0_4_ = SUB84(pppppplVar19,0);
  local_188._4_4_ = (undefined4)((ulonglong)pppppplVar19 >> 0x20);
  uStack_180._0_4_ = (int)pppppplVar2;
  uStack_180._4_4_ = (undefined4)((ulonglong)pppppplVar2 >> 0x20);
  ppppppplVar21[-2] = local_178;
  ppppppplVar21[-1] = uStack_170;
  *(undefined4 *)ppppppplVar26 = (undefined4)local_188;
  *(undefined4 *)((longlong)ppppppplVar21 + -0x1c) = local_188._4_4_;
  *(int *)(ppppppplVar21 + -3) = (int)uStack_180;
  *(undefined4 *)((longlong)ppppppplVar21 + -0x14) = uStack_180._4_4_;
  iVar24 = (int)local_4f0 + -1;
  local_4f0 = (longlong *******)CONCAT44(local_4f0._4_4_,iVar24);
  ppppppplVar21 = ppppppplVar21 + -8;
  local_188 = pppppplVar19;
  uStack_180 = pppppplVar2;
  if ((longlong)ppppppplVar17 - (longlong)local_4d8 < (longlong)local_4e0 - (longlong)ppppppplVar23)
  {
    if (ppppppplVar15 < ppppppplVar13) {
      *local_4e8 = (longlong ******)ppppppplVar15;
      local_4e8[1] = (longlong ******)ppppppplVar13;
      *(int *)(local_4e8 + 2) = iVar24;
      local_4e8 = local_4e8 + 3;
    }
    ppppppplVar23 = ppppppplVar14;
    if (ppppppplVar26 <= ppppppplVar14 + 4) goto LAB_14665528e;
  }
  else {
    if (ppppppplVar14 + 4 < ppppppplVar26) {
      *local_4e8 = (longlong ******)ppppppplVar14;
      local_4e8[1] = (longlong ******)ppppppplVar21;
      *(int *)(local_4e8 + 2) = iVar24;
      local_4e8 = local_4e8 + 3;
    }
    ppppppplVar17 = ppppppplVar13;
    ppppppplVar14 = ppppppplVar15;
    ppppppplVar21 = ppppppplVar13;
    if (ppppppplVar13 <= ppppppplVar15) goto LAB_14665528e;
  }
  iVar10 = (int)((ulonglong)((longlong)ppppppplVar17 - (longlong)ppppppplVar23) >> 5);
  local_4f8 = (longlong *******)(ulonglong)(iVar10 + 1);
  ppppppplVar13 = ppppppplVar21;
  local_4e0 = ppppppplVar17;
  local_4d8 = ppppppplVar23;
  if (iVar24 == 0) goto LAB_146654f86;
  goto LAB_146654d74;
LAB_1466554c1:
  memcpy(&local_188,local_4f0,0x138);
  memcpy(local_4f0,local_4f8,0x138);
  memcpy(local_4f8,&local_188,0x138);
  local_4c4 = local_4c4 + -1;
  if ((longlong)ppppppplVar13 - (longlong)local_4b8 < (longlong)local_4b0 - (longlong)local_4e0) {
    if (local_4e8 < local_4d8) {
      *local_4c0 = (longlong ******)local_4e8;
      local_4c0[1] = (longlong ******)local_4d8;
      *(int *)(local_4c0 + 2) = local_4c4;
      local_4c0 = local_4c0 + 3;
    }
    if (local_4f8 <= local_4f0 + 0x27) goto LAB_1466559cf;
    local_4e0 = local_4f0;
    local_4e8 = local_4f0;
    local_4d8 = local_4f8 + -0x27;
  }
  else {
    if (local_4f0 + 0x27 < local_4f8) {
      *local_4c0 = (longlong ******)local_4f0;
      local_4c0[1] = (longlong ******)(local_4f8 + -0x27);
      *(int *)(local_4c0 + 2) = local_4c4;
      local_4c0 = local_4c0 + 3;
    }
    ppppppplVar13 = local_4d8;
    if (local_4d8 <= local_4e8) goto LAB_1466559cf;
  }
  iVar10 = (int)((ulonglong)((longlong)ppppppplVar13 - (longlong)local_4e0) >> 3) * -0x69069069;
  local_4d0 = (ulonglong)(iVar10 + 1);
  local_4b8 = local_4e0;
  local_4f0 = local_4e8;
  ppppppplVar14 = local_4e8;
  ppppppplVar17 = local_4b8;
  local_4b0 = ppppppplVar13;
  if (local_4c4 == 0) goto LAB_146655612;
  goto LAB_146655372;
}



// FUNCTION 1466559f0 FUN_1466559f0 body=52 status=ok
// SIG undefined FUN_1466559f0(void)

void FUN_1466559f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x340);
  memset(_Dst,0,0x340);
  FUN_14586bda8(_Dst);
  return;
}



// FUNCTION 146655a24 FUN_146655a24 body=77 status=ok
// SIG undefined FUN_146655a24(void)

void FUN_146655a24(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 146655a72 FUN_146655a72 body=70 status=ok
// SIG undefined FUN_146655a72(void)

undefined8 * FUN_146655a72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655ab8 FUN_146655ab8 body=70 status=ok
// SIG undefined FUN_146655ab8(void)

undefined8 * FUN_146655ab8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655afe FUN_146655afe body=105 status=ok
// SIG undefined FUN_146655afe(void)

void FUN_146655afe(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xd0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8a23e0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
  *(undefined4 *)((longlong)_Dst + 0xcc) = 0xffffffff;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146655b68 FUN_146655b68 body=38 status=ok
// SIG undefined FUN_146655b68(void)

undefined8 FUN_146655b68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetMenuList",1);
  return param_2;
}



// FUNCTION 146655b8e FUN_146655b8e body=29 status=ok
// SIG undefined FUN_146655b8e(void)

undefined8 FUN_146655b8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


