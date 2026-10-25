// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145bfa934 FUN_145bfa934 body=170 status=ok
// SIG undefined FUN_145bfa934(void)

void FUN_145bfa934(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aee9270;
  param_1[5] = &PTR_FUN_14aee9e40;
  param_1[6] = &PTR_LAB_14aee9e80;
  param_1[0x55] = &PTR_FUN_14aee9ed0;
  param_1[0x56] = &PTR_FUN_14aee9f50;
  param_1[0x57] = &PTR_FUN_14aee9f60;
  param_1[0xca] = &PTR_FUN_14aee9f90;
  param_1[0xcb] = &PTR_FUN_14aee9fa0;
  param_1[0xcc] = &PTR_FUN_14aee9fc0;
  param_1[0xcd] = &PTR_FUN_14aee9fe0;
  if (param_1[0xd5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 145bfa9de FUN_145bfa9de body=88 status=ok
// SIG undefined FUN_145bfa9de(void)

void FUN_145bfa9de(longlong param_1)

{
  longlong *plVar1;
  
  FUN_145bfaa7a();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_145bfaa36(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bfaa36 FUN_145bfaa36 body=68 status=ok
// SIG undefined FUN_145bfaa36(void)

void FUN_145bfaa36(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_1484c03ba(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145bfaa7a FUN_145bfaa7a body=90 status=ok
// SIG undefined FUN_145bfaa7a(void)

void FUN_145bfaa7a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 4) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (**(longlong **)(*(longlong *)(param_1 + 8) + lVar2 * 8) != 0) {
        FUN_144740518();
        iVar1 = *(int *)(param_1 + 0x10);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bfaaa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 145bfaad4 FUN_145bfaad4 body=40 status=ok
// SIG undefined FUN_145bfaad4(void)

undefined8 FUN_145bfaad4(undefined8 param_1,int param_2)

{
  FUN_145bfaafc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfaafc FUN_145bfaafc body=87 status=ok
// SIG undefined FUN_145bfaafc(void)

void FUN_145bfaafc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c99a0;
  FUN_145b221f5(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfab53(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bfab53 FUN_145bfab53 body=43 status=ok
// SIG undefined FUN_145bfab53(void)

void FUN_145bfab53(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c7f12e(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 145bfab7e FUN_145bfab7e body=129 status=ok
// SIG undefined FUN_145bfab7e(void)

undefined8 * FUN_145bfab7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b72ba40;
  param_1[5] = &PTR_LAB_14b72c440;
  param_1[6] = &PTR_LAB_14b72c480;
  param_1[0x55] = &PTR_LAB_14b72c4d0;
  param_1[0x56] = &PTR_LAB_14b72c550;
  param_1[0x57] = &PTR_LAB_14b72c560;
  FUN_145bfac00(param_1 + 200);
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfac00 FUN_145bfac00 body=126 status=ok
// SIG undefined FUN_145bfac00(void)

void FUN_145bfac00(longlong *param_1)

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



// FUNCTION 145bfac7e FUN_145bfac7e body=37 status=ok
// SIG undefined FUN_145bfac7e(void)

void FUN_145bfac7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145bfaca4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145bfaca4 FUN_145bfaca4 body=44 status=ok
// SIG undefined FUN_145bfaca4(void)

ulonglong FUN_145bfaca4(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145bfacd0(lVar2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145bfacd0 FUN_145bfacd0 body=4 status=ok
// SIG undefined FUN_145bfacd0(void)

undefined1 FUN_145bfacd0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// FUNCTION 145bfacd4 FUN_145bfacd4 body=90 status=ok
// SIG undefined FUN_145bfacd4(void)

void FUN_145bfacd4(longlong *param_1)

{
  FUN_145bfad2e(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfad56(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145bfad16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145bfad2e FUN_145bfad2e body=40 status=ok
// SIG undefined FUN_145bfad2e(void)

void FUN_145bfad2e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6d884(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145bfad56 FUN_145bfad56 body=40 status=ok
// SIG undefined FUN_145bfad56(void)

void FUN_145bfad56(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6d186(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 145bfad86 FUN_145bfad86 body=77 status=ok
// SIG undefined FUN_145bfad86(void)

undefined8 * FUN_145bfad86(undefined8 *param_1)

{
  FUN_140b54ad8();
  *param_1 = &PTR_FUN_14b94f740;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x13,1);
  return param_1;
}



// FUNCTION 145bfadd4 FUN_145bfadd4 body=38 status=ok
// SIG undefined FUN_145bfadd4(void)

undefined8 FUN_145bfadd4(undefined8 param_1,int param_2)

{
  FUN_145bfadfa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfadfa FUN_145bfadfa body=217 status=ok
// SIG undefined FUN_145bfadfa(void)

void FUN_145bfadfa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9caae0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x5d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5d] + 0x10))();
  }
  if ((longlong *)param_1[0x5b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5b] + 0x10))();
  }
  if ((longlong *)param_1[0x59] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x59] + 0x10))();
  }
  if ((longlong *)param_1[0x57] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x57] + 0x10))();
  }
  if ((longlong *)param_1[0x55] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x55] + 0x10))();
  }
  if ((longlong *)param_1[0x53] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x53] + 0x10))();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145bfaed4 FUN_145bfaed4 body=31 status=ok
// SIG undefined FUN_145bfaed4(void)

void FUN_145bfaed4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x330,0x10);
  FUN_145bfaef4(uVar1);
  return;
}



// FUNCTION 145bfaef4 FUN_145bfaef4 body=139 status=ok
// SIG undefined FUN_145bfaef4(void)

undefined8 * FUN_145bfaef4(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e5) = 0;
  *param_1 = &PTR_FUN_14b9cdc90;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2b4) = 1;
  return param_1;
}



// FUNCTION 145bfaf80 FUN_145bfaf80 body=40 status=ok
// SIG undefined FUN_145bfaf80(void)

undefined8 FUN_145bfaf80(undefined8 param_1,int param_2)

{
  FUN_145bfafa8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfafa8 FUN_145bfafa8 body=78 status=ok
// SIG undefined FUN_145bfafa8(void)

void FUN_145bfafa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14beca860;
  FUN_145bfaff6(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bfaff6 FUN_145bfaff6 body=129 status=ok
// SIG undefined FUN_145bfaff6(void)

void FUN_145bfaff6(longlong param_1)

{
  FUN_145bfb0e5(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_145bfb131(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_145bfb077(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145bfb0ae(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bfb077 FUN_145bfb077 body=55 status=ok
// SIG undefined FUN_145bfb077(void)

void FUN_145bfb077(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xf8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bfb0ae FUN_145bfb0ae body=55 status=ok
// SIG undefined FUN_145bfb0ae(void)

void FUN_145bfb0ae(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 200);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bfb0e5 FUN_145bfb0e5 body=76 status=ok
// SIG undefined FUN_145bfb0e5(void)

void FUN_145bfb0e5(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x100);
    do {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      plVar2 = (longlong *)plVar3[-3];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bfb131 FUN_145bfb131 body=77 status=ok
// SIG undefined FUN_145bfb131(void)

void FUN_145bfb131(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bfb17e FUN_145bfb17e body=312 status=ok
// SIG undefined FUN_145bfb17e(void)

void FUN_145bfb17e(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  thunk_FUN_145bfb2be();
  local_20 = &PTR_FUN_14b9d86d0;
  FUN_14572a0e8(&local_38);
  puVar3 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
  FUN_145bfb568(puVar3);
  puVar2 = *(undefined8 **)(param_1 + 0x140);
  if ((puVar2 != puVar3) &&
     (*(undefined8 **)(param_1 + 0x140) = puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_14572a0dc(&local_38);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xe8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_14482b126(lVar4,0x4000000);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  lVar4 = FUN_144a2383e();
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x58) < 3) {
      local_38 = FUN_145afa72e;
      local_30 = 0;
      FUN_145bfb468(lVar4 + 0x580,local_28,param_1);
    }
    else {
      FUN_145afa72e(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfb2b8 thunk_FUN_145bfb2be body=5 status=ok
// SIG undefined thunk_FUN_145bfb2be(void)

void thunk_FUN_145bfb2be(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [8];
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  byte bStack_38;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      puStack_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_1446efa72(&puStack_88,0,3,0x10);
      puVar5 = puStack_88;
      uStack_80 = 3;
      *puStack_88 = &PTR_LAB_14a1c8830;
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
      puStack_88[2] = lVar6;
      *puStack_88 = &PTR_FUN_14b9a6900;
      puStack_88[3] = 0;
      FUN_14485c47a(puStack_88 + 3,param_1);
      puVar5[4] = param_1;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_14487d8d8(&uStack_78,&puStack_88);
      bStack_38 = 1;
      FUN_14016fdb0(uVar2,auStack_90,&uStack_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[bStack_38])(&uStack_78);
      FUN_1449db362(&puStack_88);
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((uStack_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfb2be FUN_145bfb2be body=417 status=ok
// SIG undefined FUN_145bfb2be(void)

void FUN_145bfb2be(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar5 = local_88;
      local_80 = 3;
      *local_88 = &PTR_LAB_14a1c8830;
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
      local_88[2] = lVar6;
      *local_88 = &PTR_FUN_14b9a6900;
      local_88[3] = 0;
      FUN_14485c47a(local_88 + 3,param_1);
      puVar5[4] = param_1;
      local_78 = 0;
      local_70 = 0;
      FUN_14487d8d8(&local_78,&local_88);
      local_38 = 1;
      FUN_14016fdb0(uVar2,local_90,&local_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
      FUN_1449db362(&local_88);
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfb464 FUN_145bfb464 body=1 status=ok
// SIG undefined FUN_145bfb464(void)

void FUN_145bfb464(void)

{
  return;
}



// FUNCTION 145bfb468 FUN_145bfb468 body=254 status=ok
// SIG undefined FUN_145bfb468(void)

undefined8
FUN_145bfb468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ac8b3b0;
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
  *local_48 = &PTR_FUN_14b9d8b90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14577a226(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfb568 FUN_145bfb568 body=276 status=ok
// SIG undefined FUN_145bfb568(void)

undefined8 * FUN_145bfb568(undefined8 *param_1)

{
  byte *pbVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0xc044000000000000;
  local_60 = 0xc050e00000000000;
  local_58 = 0;
  local_50 = 0x40490fdb3f800000;
  local_48 = 0x125;
  local_40 = 0;
  uStack_38 = 0;
  FUN_14572a418();
  *param_1 = &PTR_FUN_14b9d6900;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x15] = 0;
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
  param_1[0x20] = 0;
  param_1[0x3a] = 0x42700000;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  if (param_1[6] != 0) {
    pbVar1 = (byte *)(param_1[6] + 0x156);
    *pbVar1 = *pbVar1 & 0xef;
  }
  FUN_1446ddc76(&local_70,"OakThumbnailScene",1);
  FUN_1414deb46(param_1,local_70);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfb67e FUN_145bfb67e body=146 status=ok
// SIG undefined FUN_145bfb67e(void)

code * FUN_145bfb67e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145bfb710();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumenLightData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"LumenSceneDirectLighting::FLightDataParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000107;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fd920;
  return FUN_1462e19c0;
}



// FUNCTION 145bfb710 FUN_145bfb710 body=258 status=ok
// SIG undefined FUN_145bfb710(void)

void FUN_145bfb710(void)

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
              0x110) < DAT_14c9fd9a0) {
    FUN_144b3d300(&DAT_14c9fd9a0);
    if (DAT_14c9fd9a0 == -1) {
      FUN_145bfb814(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLightDataParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xe3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fd920,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d992b7);
      _Init_thread_footer(&DAT_14c9fd9a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfb814 FUN_145bfb814 body=226 status=ok
// SIG undefined FUN_145bfb814(void)

longlong * FUN_145bfb814(longlong *param_1)

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
  pcVar13 = FUN_1462e1a52;
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



// FUNCTION 145bfb8fc FUN_145bfb8fc body=132 status=ok
// SIG undefined FUN_145bfb8fc(void)

undefined1 * FUN_145bfb8fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LumenPackedLights";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FLumenPackedLight>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145bfb8f8;
}



// FUNCTION 145bfb980 FUN_145bfb980 body=299 status=ok
// SIG undefined FUN_145bfb980(void)

undefined4 *
FUN_145bfb980(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140967e96(param_1,local_50);
  FUN_145bfbaac(param_3,local_48);
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  local_68 = param_4;
  cVar1 = FUN_140967dda(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[7] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140968080(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfbaac FUN_145bfbaac body=105 status=ok
// SIG undefined FUN_145bfbaac(void)

undefined4 * FUN_145bfbaac(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_2[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[5] = 0;
  }
  else {
    FUN_1446dd670(param_2 + 2,iVar1,0);
    memcpy(*(void **)(param_2 + 2),_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 145bfbb16 FUN_145bfbb16 body=40 status=ok
// SIG undefined FUN_145bfbb16(void)

undefined8 FUN_145bfbb16(undefined8 param_1,int param_2)

{
  FUN_1414deb48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfbb3e FUN_145bfbb3e body=137 status=ok
// SIG undefined FUN_145bfbb3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145bfbb3e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cbc99b0 = _DAT_14cbc99b0 + 1;
  UNLOCK();
  uVar1 = FUN_145bfbc06(DAT_14cbc99a8);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cbc99a8;
  LOCK();
  _DAT_14cbc99b0 = _DAT_14cbc99b0 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_145bfbbc8(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cbc99a8;
  LOCK();
  _DAT_14cbc99b0 = _DAT_14cbc99b0 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_145bfbbc8(param_1 + 4);
  LOCK();
  _DAT_14cbc99b0 = _DAT_14cbc99b0 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 145bfbbc8 FUN_145bfbbc8 body=61 status=ok
// SIG undefined FUN_145bfbbc8(void)

void FUN_145bfbbc8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_145bfbc06(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 145bfbc06 FUN_145bfbc06 body=122 status=ok
// SIG undefined FUN_145bfbc06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145bfbc06(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_145bfbc54:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_145bfbc54;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 145bfbc80 FUN_145bfbc80 body=9 status=ok
// SIG undefined FUN_145bfbc80(void)

void FUN_145bfbc80(longlong param_1)

{
  FUN_145bfbc8a(param_1 + 0x10);
  return;
}



// FUNCTION 145bfbc8a FUN_145bfbc8a body=399 status=ok
// SIG undefined FUN_145bfbc8a(void)

void FUN_145bfbc8a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3cf50;
  param_1[0xe] = &PTR_FUN_14ba3d178;
  if (*(char *)(param_1 + 0x25) == '\x01') {
    FUN_145857a8e(param_1);
  }
  FUN_145bfbe19(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1403472eb(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x24];
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
  plVar3 = (longlong *)param_1[0x22];
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
  plVar3 = (longlong *)param_1[0x20];
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
  plVar3 = (longlong *)param_1[0x1e];
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
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_145bfbe50(param_1);
  return;
}



// FUNCTION 145bfbe19 FUN_145bfbe19 body=54 status=ok
// SIG undefined FUN_145bfbe19(void)

void FUN_145bfbe19(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1403472eb(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145bfbe50 FUN_145bfbe50 body=134 status=ok
// SIG undefined FUN_145bfbe50(void)

void FUN_145bfbe50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14b436c70;
  param_1[0xe] = &PTR_LAB_14b436e98;
  FUN_144959b6a(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  while (puVar1 = (undefined8 *)param_1[0x17], puVar1 != (undefined8 *)0x0) {
    param_1[0x17] = *puVar1;
    FUN_1449db362(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  FUN_145bfbed6(param_1 + 0xe);
  FUN_145bfbf6a(param_1);
  return;
}



// FUNCTION 145bfbed6 FUN_145bfbed6 body=131 status=ok
// SIG undefined FUN_145bfbed6(void)

void FUN_145bfbed6(undefined8 *param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_149e00cc0;
  local_28 = param_1[1];
  local_20 = param_1[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  if (param_1[2] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[2] + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfbf6a FUN_145bfbf6a body=195 status=ok
// SIG undefined FUN_145bfbf6a(void)

void FUN_145bfbf6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b438010;
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
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
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000145bfc029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bfc02e FUN_145bfc02e body=332 status=ok
// SIG undefined FUN_145bfc02e(void)

undefined4 * FUN_145bfc02e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145bfc1fc(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145bfc17c(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145bfc2e4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfc17c FUN_145bfc17c body=127 status=ok
// SIG undefined FUN_145bfc17c(void)

undefined8 FUN_145bfc17c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_148812878((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145bfc1fc FUN_145bfc1fc body=231 status=ok
// SIG undefined FUN_145bfc1fc(void)

int * FUN_145bfc1fc(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145bfc2e4 FUN_145bfc2e4 body=482 status=ok
// SIG undefined FUN_145bfc2e4(void)

void FUN_145bfc2e4(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145bfc4d2 FUN_145bfc4d2 body=274 status=ok
// SIG undefined FUN_145bfc4d2(void)

undefined8 * FUN_145bfc4d2(undefined8 *param_1)

{
  FUN_145bfc5e4();
  *param_1 = &PTR_FUN_14b6e3ea0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0xc1800000c2400000;
  *(undefined4 *)(param_1 + 0x8b) = 0x461c4000;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  memset(param_1 + 0x9c,0,200);
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  return param_1;
}



// FUNCTION 145bfc5e4 FUN_145bfc5e4 body=435 status=ok
// SIG undefined FUN_145bfc5e4(void)

undefined8 * FUN_145bfc5e4(undefined8 *param_1)

{
  FUN_145bfc798();
  *param_1 = &PTR_FUN_14b157de0;
  param_1[0x37] = 0x447a000040a00000;
  *(undefined4 *)(param_1 + 0x38) = 0x437a0000;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xaaad1010;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = &DAT_3f8000003f800000;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xaaad1010;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x78] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x3f800000;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  param_1[0x87] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  return param_1;
}



// FUNCTION 145bfc798 FUN_145bfc798 body=49 status=ok
// SIG undefined FUN_145bfc798(void)

undefined8 * FUN_145bfc798(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14aca4380;
  memset(param_1 + 6,0,0x188);
  return param_1;
}



// FUNCTION 145bfc7ca FUN_145bfc7ca body=40 status=ok
// SIG undefined FUN_145bfc7ca(void)

undefined8 FUN_145bfc7ca(undefined8 param_1,int param_2)

{
  FUN_145bfc7f2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfc7f2 FUN_145bfc7f2 body=91 status=ok
// SIG undefined FUN_145bfc7f2(void)

void FUN_145bfc7f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ba700;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfc84d(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e842(param_1);
  return;
}



// FUNCTION 145bfc84d FUN_145bfc84d body=40 status=ok
// SIG undefined FUN_145bfc84d(void)

void FUN_145bfc84d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147884b5c(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145bfc876 FUN_145bfc876 body=91 status=ok
// SIG undefined FUN_145bfc876(void)

void FUN_145bfc876(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145bfc8d2();
  *(undefined8 *)(param_1 + 0x378) = 0;
  plVar3 = *(longlong **)(param_1 + 0x380);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x380) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145bfc8cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bfc8d2 FUN_145bfc8d2 body=80 status=ok
// SIG undefined FUN_145bfc8d2(void)

void FUN_145bfc8d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x268) = 0;
  plVar3 = *(longlong **)(param_1 + 0x270);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x270) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145bfc91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bfc922 FUN_145bfc922 body=171 status=ok
// SIG undefined FUN_145bfc922(void)

void FUN_145bfc922(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe0);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b1d9ac0;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[3] = &PTR_FUN_14b157970;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0x1001f;
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 145bfc9ce FUN_145bfc9ce body=165 status=ok
// SIG undefined FUN_145bfc9ce(void)

bool FUN_145bfc9ce(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfca82 FUN_145bfca82 body=943 status=ok
// SIG undefined FUN_145bfca82(void)

undefined8 * FUN_145bfca82(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc89a00;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"VertexColorReplace");
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"VertexColorIgnore");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"VertexColorOverride");
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_14020fad6(param_1 + 0x30,L"KeepSectionsSeparate");
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_14020fad6(param_1 + 0x32,L"LODGroup");
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_14020fad6(param_1 + 0x34,L"RecomputeNormals");
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_14020fad6(param_1 + 0x36,L"RecomputeTangents");
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_14020fad6(param_1 + 0x38,L"UseMikkTSpace");
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"ComputeWeightedNormals");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"UseHighPrecisionTangentBasis");
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14020fad6(param_1 + 0x3e,L"UseFullPrecisionUVs");
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14020fad6(param_1 + 0x40,L"UseBackwardsCompatibleF16TruncUVs");
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_14020fad6(param_1 + 0x42,L"RemoveDegenerates");
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  puVar6 = (undefined8 *)FUN_145a9bbfa();
  param_1[0x57] = 0;
  iVar3 = *(int *)(puVar6 + 1);
  pvVar4 = (void *)*puVar6;
  *(int *)(param_1 + 0x58) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x57,iVar3,0);
    memcpy((void *)param_1[0x57],pvVar4,(longlong)iVar3 * 2);
  }
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_145bfce32();
  pvVar4 = DAT_14cc0ff78;
  local_50 = (void *)0x0;
  lVar7 = (longlong)DAT_14cc0ff80;
  local_48 = DAT_14cc0ff80;
  if (lVar7 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,DAT_14cc0ff80,0);
    memcpy(local_50,pvVar4,lVar7 * 2);
  }
  FUN_1410835a0(param_1 + 0x44,param_1 + 5,&local_50);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_145bfceaa();
  pvVar4 = DAT_14cc0ff90;
  local_50 = (void *)0x0;
  lVar7 = (longlong)DAT_14cc0ff98;
  local_48 = DAT_14cc0ff98;
  if (lVar7 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,DAT_14cc0ff98,0);
    memcpy(local_50,pvVar4,lVar7 * 2);
  }
  local_60 = param_1[5];
  local_58 = (longlong *)param_1[6];
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x48,&local_60,&local_50);
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfce32 FUN_145bfce32 body=120 status=ok
// SIG undefined FUN_145bfce32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bfce32(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0ff88) {
    FUN_144b3d300(&DAT_14cc0ff88);
    if (DAT_14cc0ff88 == -1) {
      DAT_14cc0ff78 = 0;
      _DAT_14cc0ff80 = 0;
      FUN_14020fad6(&DAT_14cc0ff78,L"Lod_Dependencies");
      atexit((_func_5014 *)&LAB_1444ddb16);
      _Init_thread_footer(&DAT_14cc0ff88);
      return;
    }
  }
  return;
}



// FUNCTION 145bfceaa FUN_145bfceaa body=120 status=ok
// SIG undefined FUN_145bfceaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bfceaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0ffa0) {
    FUN_144b3d300(&DAT_14cc0ffa0);
    if (DAT_14cc0ffa0 == -1) {
      DAT_14cc0ff90 = 0;
      _DAT_14cc0ff98 = 0;
      FUN_14020fad6(&DAT_14cc0ff90,L"__SlotMaterialDependency__");
      atexit((_func_5014 *)&LAB_1444ddb27);
      _Init_thread_footer(&DAT_14cc0ffa0);
      return;
    }
  }
  return;
}



// FUNCTION 145bfcf22 FUN_145bfcf22 body=176 status=ok
// SIG undefined FUN_145bfcf22(void)

bool FUN_145bfcf22(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfcfd4 FUN_145bfcfd4 body=101 status=ok
// SIG undefined FUN_145bfcfd4(void)

void FUN_145bfcfd4(longlong *param_1,float param_2)

{
  FUN_144a62f0c(param_1,param_1[7],2);
  if ((*(byte *)((longlong)param_1 + 0x91) & 1) == 0) {
    return;
  }
  *(int *)((longlong)param_1 + 0x11c) = (int)param_1[0x20];
  *(int *)(param_1 + 0x24) = (int)param_2;
                    /* WARNING: Could not recover jumptable at 0x000145bfd036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b8))(param_1,0);
  return;
}



// FUNCTION 145bfd03a FUN_145bfd03a body=196 status=ok
// SIG undefined FUN_145bfd03a(void)

undefined8
FUN_145bfd03a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4d9490;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4d9420;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_145bfd100(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfd100 FUN_145bfd100 body=216 status=ok
// SIG undefined FUN_145bfd100(void)

undefined8 * FUN_145bfd100(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145bfd1ea FUN_145bfd1ea body=116 status=ok
// SIG undefined FUN_145bfd1ea(void)

void FUN_145bfd1ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a392cf0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfd25e(param_1 + 2);
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 145bfd25e FUN_145bfd25e body=53 status=ok
// SIG undefined FUN_145bfd25e(void)

void FUN_145bfd25e(longlong *param_1)

{
  FUN_145bfd294();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bfd294 FUN_145bfd294 body=88 status=ok
// SIG undefined FUN_145bfd294(void)

void FUN_145bfd294(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145bfd2ec FUN_145bfd2ec body=40 status=ok
// SIG undefined FUN_145bfd2ec(void)

undefined8 FUN_145bfd2ec(undefined8 param_1,int param_2)

{
  FUN_145bfd314();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfd314 FUN_145bfd314 body=139 status=ok
// SIG undefined FUN_145bfd314(void)

void FUN_145bfd314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b0510;
  FUN_1447a1747(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  param_1[0x43] = &PTR_FUN_14a46be50;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  param_1[0x43] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x44);
  FUN_145bfd3a0(param_1 + 0x1f);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145bfd3a0 FUN_145bfd3a0 body=78 status=ok
// SIG undefined FUN_145bfd3a0(void)

void FUN_145bfd3a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4abbf0;
  FUN_141177934(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 145bfd3ee FUN_145bfd3ee body=9 status=ok
// SIG undefined FUN_145bfd3ee(void)

void FUN_145bfd3ee(longlong param_1)

{
  FUN_145bfd3f8(param_1 + 0x10);
  return;
}



// FUNCTION 145bfd3f8 FUN_145bfd3f8 body=141 status=ok
// SIG undefined FUN_145bfd3f8(void)

void FUN_145bfd3f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f157f0;
  if (param_1[0x50] != 0) {
    FUN_14480f766(&DAT_14c8672b0);
  }
  if (*(char *)((longlong)param_1 + 0x2fc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
  }
  if (*(char *)(param_1 + 0x5e) == '\x01') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
  if (*(char *)(param_1 + 0x53) == '\x01') {
    *(undefined1 *)(param_1 + 0x53) = 0;
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 145bfd486 FUN_145bfd486 body=40 status=ok
// SIG undefined FUN_145bfd486(void)

undefined8 FUN_145bfd486(undefined8 param_1,int param_2)

{
  FUN_145bfd4ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfd4ae FUN_145bfd4ae body=175 status=ok
// SIG undefined FUN_145bfd4ae(void)

void FUN_145bfd4ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b531e80;
  param_1[5] = &PTR_FUN_14b532370;
  param_1[0x2d] = &PTR_FUN_14b5323b0;
  plVar3 = (longlong *)param_1[0x8e];
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
  FUN_144760e21(param_1[0x89],*(undefined4 *)(param_1 + 0x8a));
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x86],*(undefined4 *)(param_1 + 0x87));
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_1414dee26(param_1);
  return;
}



// FUNCTION 145bfd55e FUN_145bfd55e body=24 status=ok
// SIG undefined FUN_145bfd55e(void)

void FUN_145bfd55e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145bfd572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145bfd576 FUN_145bfd576 body=38 status=ok
// SIG undefined FUN_145bfd576(void)

undefined8 FUN_145bfd576(undefined8 param_1,int param_2)

{
  FUN_145bfd59c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfd59c FUN_145bfd59c body=147 status=ok
// SIG undefined FUN_145bfd59c(void)

void FUN_145bfd59c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac89960;
  param_1[4] = &PTR_FUN_14ac89980;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (param_1[0x19f] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfd630(param_1 + 9);
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bfd62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145bfd630 FUN_145bfd630 body=62 status=ok
// SIG undefined FUN_145bfd630(void)

void FUN_145bfd630(longlong param_1)

{
  FUN_1414def68(param_1,0);
  if (*(longlong *)(param_1 + 0xc18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bfd66e FUN_145bfd66e body=127 status=ok
// SIG undefined FUN_145bfd66e(void)

void FUN_145bfd66e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0x40, 0x40 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x30,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0xc0c)) {
    return;
  }
  *(int *)(param_1 + 0xc0c) = (int)uVar2;
  FUN_1457dfee6(param_1,*(undefined4 *)(param_1 + 0xc08),uVar2,0x30);
  return;
}



// FUNCTION 145bfd6ee FUN_145bfd6ee body=85 status=ok
// SIG undefined FUN_145bfd6ee(void)

void FUN_145bfd6ee(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1414df18a();
  FUN_140a82ca8(param_1 + -0x31f0,&DAT_14cbc1d98,uVar1,1);
  uVar1 = FUN_1414df18a(param_1);
  FUN_145bfd744(param_1 + -0x3028,&DAT_14cbc1d98,uVar1,1);
  return;
}



// FUNCTION 145bfd744 FUN_145bfd744 body=214 status=ok
// SIG undefined FUN_145bfd744(void)

void FUN_145bfd744(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x350);
  if ((char)param_3 == '\0') {
    FUN_1400bc8c2((char *)(param_1 + 0x350));
  }
  else {
    FUN_1400bc96c();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x68);
    if ((cVar2 != '\0') && (*(longlong **)(param_1 + 0x70) != (longlong *)0x0)) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))();
      FUN_145bfd81a(uVar3,param_2,param_3,param_4);
    }
  }
  if (((*(char *)(param_1 + 0x350) == '\x01') && ((char)param_4 != '\0')) &&
     (cVar1 == '\0' && *(char *)(param_1 + 0x378) == '\0')) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_147f61d1c(param_1 + 0x78,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    FUN_140bf70b8(param_1);
    return;
  }
  return;
}



// FUNCTION 145bfd81a FUN_145bfd81a body=145 status=ok
// SIG undefined FUN_145bfd81a(void)

void FUN_145bfd81a(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  if (param_3 == '\0') {
    FUN_1400bc8c2((char *)(param_1 + 0xf8));
  }
  else {
    FUN_1400bc96c();
  }
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0xf8) != '\0')) {
    if (param_4 == '\0') {
      FUN_143893c14(param_1,0x3f800000);
      return;
    }
    FUN_1457030d6(param_1);
    uVar2 = FUN_14479d2ce(param_1 + 0x18);
    lVar3 = FUN_140363c42(uVar2);
    if (lVar3 != 0) {
      FUN_14035cf70(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 145bfd8ac FUN_145bfd8ac body=26 status=ok
// SIG undefined FUN_145bfd8ac(void)

void FUN_145bfd8ac(undefined8 param_1)

{
  FUN_145bfd8c6();
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 145bfd8c6 FUN_145bfd8c6 body=295 status=ok
// SIG undefined FUN_145bfd8c6(void)

void FUN_145bfd8c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  plVar4 = *(longlong **)(param_1 + 0x300);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x300) = 0;
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
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    FUN_1448d5e3c(&local_30,param_1 + 0x208);
    puVar5 = *(undefined8 **)(local_30 + 0x160);
    AcquireSRWLockExclusive((PSRWLOCK)(puVar5 + 4));
    *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (0 < *(int *)(puVar5 + 1)) {
      iVar3 = *(int *)((longlong)puVar5 + 0xc);
      FUN_145be4312(*puVar5);
      *(undefined4 *)(puVar5 + 1) = 0;
      if ((iVar3 < 0) && (*(int *)((longlong)puVar5 + 0xc) != 0)) {
        FUN_148efb772(puVar5);
      }
      *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + 4));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfd9ee FUN_145bfd9ee body=255 status=ok
// SIG undefined FUN_145bfd9ee(void)

void FUN_145bfd9ee(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)(param_1 + 0xcc8);
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = local_38;
  iVar1 = FUN_141249bb4(plVar5,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
  if (iVar1 != -1) {
    lVar2 = *plVar5 + (longlong)iVar1 * 0x20;
    if ((lVar2 != 0) && (*plVar5 + (longlong)iVar1 * 0x20 != -8)) {
      if ((longlong)*(int *)(lVar2 + 0x10) != 0) {
        lVar4 = *(longlong *)(lVar2 + 8);
        lVar2 = (longlong)*(int *)(lVar2 + 0x10) << 3;
        do {
          plVar3 = (longlong *)FUN_14479d2ce(lVar4);
          if ((plVar3 != (longlong *)0x0) && ((*(byte *)((longlong)plVar3 + 0x31) & 0x10) != 0)) {
            (**(code **)(*plVar3 + 0x2b8))(plVar3,0);
          }
          lVar4 = lVar4 + 8;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
      }
      local_40 = 0;
      FUN_14485c47a(&local_40,param_2);
      FUN_145bfdb0e(plVar5,local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bfdaee FUN_145bfdaee body=32 status=ok
// SIG undefined FUN_145bfdaee(void)

void FUN_145bfdaee(undefined8 param_1,undefined4 param_2)

{
  FUN_140ceface();
  FUN_1414df1a6(param_1,param_2);
  return;
}



// FUNCTION 145bfdb0e FUN_145bfdb0e body=266 status=ok
// SIG undefined FUN_145bfdb0e(void)

undefined8 FUN_145bfdb0e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar5 != -1) {
      lVar4 = *param_1;
      lVar5 = lVar5 * 0x20;
      local_48 = *(undefined8 *)(lVar4 + lVar5);
      local_50 = param_2;
      cVar2 = FUN_141249c6a();
      if (cVar2 == '\0') {
        lVar5 = lVar4 + lVar5;
        do {
          lVar4 = lVar5;
          lVar5 = (longlong)*(int *)(lVar4 + 0x18);
          if (lVar5 == -1) goto LAB_145bfdba4;
          lVar1 = *param_1;
          lVar5 = lVar5 * 0x20;
          local_48 = *(undefined8 *)(lVar1 + lVar5);
          local_50 = param_2;
          cVar2 = FUN_141249c6a(&local_48,&local_50);
          lVar5 = lVar1 + lVar5;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x18);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_145bfdc1a(param_1,*puVar6);
      uVar3 = 1;
    }
  }
LAB_145bfdba4:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfdc1a FUN_145bfdc1a body=89 status=ok
// SIG undefined FUN_145bfdc1a(void)

void FUN_145bfdc1a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145bfdc74();
  return;
}



// FUNCTION 145bfdc74 FUN_145bfdc74 body=52 status=ok
// SIG undefined FUN_145bfdc74(void)

void FUN_145bfdc74(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145bfdca8(param_1,param_2);
  return;
}



// FUNCTION 145bfdca8 FUN_145bfdca8 body=114 status=ok
// SIG undefined FUN_145bfdca8(void)

void FUN_145bfdca8(longlong *param_1,int param_2)

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



// FUNCTION 145bfdd1a FUN_145bfdd1a body=184 status=ok
// SIG undefined FUN_145bfdd1a(void)

undefined4 * FUN_145bfdd1a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 4) == '\x01') {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      uVar4 = 1;
    }
    else {
      if (*(char *)(param_1 + 4) != '\x01') goto LAB_145bfdd3f;
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
  }
LAB_145bfdd3f:
  FUN_145bfddd2(param_1 + 6,param_2 + 6);
  FUN_145bfde22(param_1 + 10,param_2 + 10);
  if (param_2 != param_1) {
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  FUN_1410e5bda(param_1 + 0x12,param_2 + 0x12);
  FUN_1410e5bda(param_1 + 0x16,param_2 + 0x16);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x6a) = *(undefined1 *)((longlong)param_2 + 0x6a);
  return param_1;
}



// FUNCTION 145bfddd2 FUN_145bfddd2 body=80 status=ok
// SIG undefined FUN_145bfddd2(void)

longlong * FUN_145bfddd2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140cb51fa(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 145bfde22 FUN_145bfde22 body=80 status=ok
// SIG undefined FUN_145bfde22(void)

longlong * FUN_145bfde22(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140cb51d2(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 145bfde72 FUN_145bfde72 body=48 status=ok
// SIG undefined FUN_145bfde72(void)

void FUN_145bfde72(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x148) + 0x30))();
  LOCK();
  *(undefined1 *)(param_1 + 0x140) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000145bfde9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x10))();
  return;
}



// FUNCTION 145bfded4 FUN_145bfded4 body=75 status=ok
// SIG undefined FUN_145bfded4(void)

undefined8 * FUN_145bfded4(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_14a1839b0;
  param_1[0x12] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 145bfdf1f FUN_145bfdf1f body=177 status=ok
// SIG undefined FUN_145bfdf1f(void)

void FUN_145bfdf1f(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145bfdfd2();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca06120,param_4);
  local_78 = &DAT_14ca06120;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_145bfe0d6(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfdfd2 FUN_145bfdfd2 body=258 status=ok
// SIG undefined FUN_145bfdfd2(void)

void FUN_145bfdfd2(void)

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
              0x110) < DAT_14ca061a0) {
    FUN_144b3d300(&DAT_14ca061a0);
    if (DAT_14ca061a0 == -1) {
      FUN_145bfe262(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1f8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06120,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd33ff);
      _Init_thread_footer(&DAT_14ca061a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfe0d6 FUN_145bfe0d6 body=395 status=ok
// SIG undefined FUN_145bfe0d6(void)

void FUN_145bfe0d6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca06168;
  if (DAT_14ca06168 != 0) {
    LOCK();
    *(int *)(DAT_14ca06168 + 8) = *(int *)(DAT_14ca06168 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca06120;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a288be0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfe262 FUN_145bfe262 body=226 status=ok
// SIG undefined FUN_145bfe262(void)

longlong * FUN_145bfe262(longlong *param_1)

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
  pcVar13 = FUN_1462e92ec;
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



// FUNCTION 145bfe34a FUN_145bfe34a body=132 status=ok
// SIG undefined FUN_145bfe34a(void)

undefined1 * FUN_145bfe34a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWAtlasBlock4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145bfe346;
}



// FUNCTION 145bfe3ce FUN_145bfe3ce body=138 status=ok
// SIG undefined FUN_145bfe3ce(void)

code * FUN_145bfe3ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWAtlasBlock2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145bfe34a;
}



// FUNCTION 145bfe45e FUN_145bfe45e body=81 status=ok
// SIG undefined FUN_145bfe45e(void)

void FUN_145bfe45e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3ead90;
  puVar1[5] = &PTR_FUN_14a3eb210;
  puVar1[6] = &PTR_LAB_14a3eb250;
  *(byte *)((longlong)puVar1 + 0x4a) = *(byte *)((longlong)puVar1 + 0x4a) | 2;
  FUN_140cbebe8(puVar1 + 8,1);
  *(undefined1 *)(puVar1 + 9) = 4;
  return;
}



// FUNCTION 145bfe4b0 FUN_145bfe4b0 body=9 status=ok
// SIG undefined FUN_145bfe4b0(void)

void FUN_145bfe4b0(longlong param_1)

{
  FUN_145bfe4ba(param_1 + 0x10);
  return;
}



// FUNCTION 145bfe4ba FUN_145bfe4ba body=77 status=ok
// SIG undefined FUN_145bfe4ba(void)

void FUN_145bfe4ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f153b0;
  if (param_1[0x51] != 0) {
    FUN_14480f766(&DAT_14c8672b0);
  }
  *param_1 = &PTR_FUN_149f14520;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 145bfe512 FUN_145bfe512 body=161 status=ok
// SIG undefined FUN_145bfe512(void)

undefined8 * FUN_145bfe512(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14ab98ca0;
  param_1[6] = 0x424800003fc80000;
  param_1[7] = 0x4234000041f00000;
  param_1[8] = 0x41a0000042c80000;
  param_1[9] = 0x4120000042480000;
  param_1[10] = 0x3c23d70a3f800000;
  param_1[0xb] = 0x3f0000003f7f069e;
  param_1[0xc] = 0x3a83126f40000000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x42c8000047435000;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 1;
  param_1[0x10] = 0x4248000042480000;
  param_1[0x11] = 0x7f7fffff42480000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x43fa000041200000;
  *(undefined4 *)(param_1 + 0x15) = 0x42c80000;
  return param_1;
}



// FUNCTION 145bfe5b4 FUN_145bfe5b4 body=37 status=ok
// SIG undefined FUN_145bfe5b4(void)

void FUN_145bfe5b4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_145bfe5da(param_2);
  return;
}



// FUNCTION 145bfe5da FUN_145bfe5da body=125 status=ok
// SIG undefined FUN_145bfe5da(void)

undefined8 * FUN_145bfe5da(undefined8 *param_1)

{
  FUN_145bfe658();
  *param_1 = &PTR_FUN_14ac87f30;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x25) = 4;
  *(undefined4 *)(param_1 + 0x22) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x26) = 3;
  *(char *)(param_1 + 0x27) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 145bfe658 FUN_145bfe658 body=182 status=ok
// SIG undefined FUN_145bfe658(void)

undefined8 * FUN_145bfe658(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac88f40;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)((longlong)param_1 + 0xc1) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  FUN_140ef4e54(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 145bfe70e FUN_145bfe70e body=75 status=ok
// SIG undefined FUN_145bfe70e(void)

undefined8 * FUN_145bfe70e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adcd0a0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfe75a(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfe75a FUN_145bfe75a body=55 status=ok
// SIG undefined FUN_145bfe75a(void)

void FUN_145bfe75a(longlong *param_1)

{
  FUN_145bfe792(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bfe792 FUN_145bfe792 body=385 status=ok
// SIG undefined FUN_145bfe792(void)

void FUN_145bfe792(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_14816d212(*local_70 + (longlong)iStack_54 * 0x120 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e8b234(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bfe920 FUN_145bfe920 body=31 status=ok
// SIG undefined FUN_145bfe920(void)

void FUN_145bfe920(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x68,0x10);
  FUN_1414df45c(uVar1);
  return;
}



// FUNCTION 145bfe94a FUN_145bfe94a body=75 status=ok
// SIG undefined FUN_145bfe94a(void)

undefined8 * FUN_145bfe94a(undefined8 *param_1)

{
  FUN_140c80e02();
  *param_1 = &PTR_FUN_14afdce50;
  param_1[0x75] = &PTR_FUN_14afdd490;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_145aca5fe(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0xbd) = 1;
  return param_1;
}



// FUNCTION 145bfe9a0 FUN_145bfe9a0 body=75 status=ok
// SIG undefined FUN_145bfe9a0(void)

undefined8 * FUN_145bfe9a0(undefined8 *param_1)

{
  FUN_140efeab8();
  *param_1 = &PTR_FUN_14afdd4c0;
  param_1[0x75] = &PTR_FUN_14afddb00;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_145aca5fe(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0xbd) = 1;
  return param_1;
}



// FUNCTION 145bfe9ec FUN_145bfe9ec body=131 status=ok
// SIG undefined FUN_145bfe9ec(void)

undefined8 FUN_145bfe9ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      lVar3 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(lVar3 + -0x18) = *puVar1;
      *(undefined4 *)(lVar3 + -0x14) = uVar4;
      *(undefined4 *)(lVar3 + -0x10) = uVar5;
      *(undefined4 *)(lVar3 + -0xc) = uVar6;
      FUN_145bfea70();
      lVar3 = param_2 + lVar7;
      lVar2 = param_3 + lVar7;
      FUN_1459ff440(lVar3 + 0x30,lVar2 + 0x30);
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined1 *)(lVar3 + 0x48) = *(undefined1 *)(lVar2 + 0x48);
      lVar7 = lVar7 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145bfea70 FUN_145bfea70 body=84 status=ok
// SIG undefined FUN_145bfea70(void)

longlong * FUN_145bfea70(longlong *param_1,longlong *param_2)

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



// FUNCTION 145bfeac4 FUN_145bfeac4 body=37 status=ok
// SIG undefined FUN_145bfeac4(void)

void FUN_145bfeac4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_145bfeaea(param_2);
  return;
}



// FUNCTION 145bfeaea FUN_145bfeaea body=135 status=ok
// SIG undefined FUN_145bfeaea(void)

void FUN_145bfeaea(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b3e4b20;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x10;
  param_1[6] = 0;
  param_1[7] = 0x41a0000042c80000;
  param_1[8] = 0x3fc000003f400000;
  param_1[9] = 0x3fc000003fa00000;
  param_1[10] = 0x41f000003f8ccccd;
  param_1[0xb] = 0x3e8000003f800000;
  param_1[0xc] = 0x424800003f666666;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 145bfeb7e FUN_145bfeb7e body=31 status=ok
// SIG undefined FUN_145bfeb7e(void)

undefined8 FUN_145bfeb7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfebaa FUN_145bfebaa body=31 status=ok
// SIG undefined FUN_145bfebaa(void)

undefined8 FUN_145bfebaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfebca FUN_145bfebca body=103 status=ok
// SIG undefined FUN_145bfebca(void)

ulonglong FUN_145bfebca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145bfec14:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145bfec14;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145bfec37 FUN_145bfec37 body=81 status=ok
// SIG undefined FUN_145bfec37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bfec37(void)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(&DAT_14cb97dc4);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(&DAT_14cb97dc4);
    if (DAT_14cb97dd0 != 0) {
      FUN_14480f766(lVar2 + 0x120);
    }
    _DAT_14cb97dc4 = 0;
    DAT_14cb97dd0 = 0;
  }
  return;
}



// FUNCTION 145bfec94 FUN_145bfec94 body=75 status=ok
// SIG undefined FUN_145bfec94(void)

undefined8 * FUN_145bfec94(undefined8 *param_1)

{
  FUN_145bcb802();
  *param_1 = &PTR_FUN_14b56cc50;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 145bfecea FUN_145bfecea body=75 status=ok
// SIG undefined FUN_145bfecea(void)

undefined8 * FUN_145bfecea(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b75b2f0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 145bfed36 FUN_145bfed36 body=40 status=ok
// SIG undefined FUN_145bfed36(void)

undefined8 FUN_145bfed36(undefined8 param_1,int param_2)

{
  FUN_145bfed5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfed5e FUN_145bfed5e body=70 status=ok
// SIG undefined FUN_145bfed5e(void)

void FUN_145bfed5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b38d480;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfeda4(param_1 + 0x72);
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 145bfeda4 FUN_145bfeda4 body=53 status=ok
// SIG undefined FUN_145bfeda4(void)

void FUN_145bfeda4(longlong *param_1)

{
  FUN_145bfedda();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bfedda FUN_145bfedda body=353 status=ok
// SIG undefined FUN_145bfedda(void)

void FUN_145bfedda(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      FUN_148847fd6(*(undefined8 *)(lVar2 + 0x28 + lVar3 * 0x38));
      if (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bfef3c FUN_145bfef3c body=367 status=ok
// SIG undefined FUN_145bfef3c(void)

void FUN_145bfef3c(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(char *)((longlong)param_1 + 0x149) != '\x01') {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0x90))();
  if (cVar2 == '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 9);
    if (lVar5 != 0) {
      lVar6 = FUN_144a6c4d8();
      if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
          (plVar7 = (longlong *)FUN_140937900(lVar5), plVar7 == param_1)) &&
         (lVar6 = param_1[0xf], (longlong)(int)lVar6 != 0)) {
        uVar1 = *(undefined8 *)(lVar5 + 0x1c8);
        lVar9 = param_1[0xe];
        lVar3 = 0;
        do {
          plVar7 = *(longlong **)(lVar9 + lVar3);
          if (plVar7 != (longlong *)0x0) {
            lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
            lVar8 = FUN_1412e09a6();
            if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              (**(code **)(*plVar7 + 0x80))(plVar7,lVar5,uVar1,0);
            }
          }
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)lVar6 * 8 != lVar3);
      }
    }
  }
  else {
    lVar5 = param_1[0xf];
    if ((longlong)(int)lVar5 != 0) {
      lVar6 = param_1[0xe];
      lVar9 = 0;
      do {
        plVar7 = *(longlong **)(lVar6 + lVar9);
        if (plVar7 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar7 + 8))(plVar7);
          lVar4 = FUN_1412e09a6();
          if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            FUN_145bff0ac(plVar7);
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar9);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x149) = 0;
  FUN_1405683c2(param_1);
  return;
}



// FUNCTION 145bff0ac FUN_145bff0ac body=150 status=ok
// SIG undefined FUN_145bff0ac(void)

void FUN_145bff0ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 == (longlong *)0x0) {
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145bff0fe;
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
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x90))(plVar4,param_1,*(longlong *)(param_1 + 0x48) + 0x48);
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
LAB_145bff0fe:
    plVar3 = *(longlong **)(param_1 + 0x70);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bff13e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bff142 FUN_145bff142 body=1427 status=ok
// SIG undefined FUN_145bff142(void)

void FUN_145bff142(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  int local_f0;
  undefined4 uStack_ec;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined4 local_b6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68;
  char local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  (**(code **)(*param_1 + 0x90))();
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = DAT_14c8464e0;
  uStack_a8 = DAT_14c8464e8;
  local_a0 = DAT_14c8464f0;
  local_98 = 0;
  local_96 = 0;
  local_88 = (undefined4)DAT_14c8464f8;
  uStack_84 = DAT_14c8464f8._4_4_;
  uStack_80 = (undefined4)DAT_14c846500;
  uStack_7c = DAT_14c846500._4_4_;
  local_78 = DAT_14c846508;
  local_90 = 0;
  local_70 = 0x18;
  local_68 = 5;
  local_60 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_b7 = 1;
  local_b6 = 0;
  local_57 = 1;
  FUN_145bff6d8(param_1,&local_f8,0);
  iVar9 = local_f0 + -1;
  if (local_f0 == 0) {
    iVar9 = 0;
  }
  FUN_1446f82e2(&local_100,iVar9,local_f8,1);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  param_1[0x88] = local_100;
  uVar3 = DAT_14cb94ca0;
  uVar1 = FUN_141115664();
  lVar2 = FUN_140c48046(param_1 + 0x10,uVar1,uVar3,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1411157a2();
    lVar4 = FUN_140c47e50(lVar2,uVar3,&DAT_14cb94ca8);
    if (lVar4 != 0) {
      FUN_14054d68c(lVar4 + 0x80,param_1 + 0x3a);
      *(undefined1 *)(lVar4 + 0x331) = 1;
    }
    uVar3 = FUN_140a48832();
    lVar5 = FUN_140c483dc(lVar2,uVar3,&DAT_14cb94cb0,0);
    if (lVar5 != 0) {
      local_f8 = 0;
      uVar3 = FUN_140c48226();
      lVar6 = FUN_140c47e50(lVar5,uVar3,&local_f8);
      if (lVar6 != 0) {
        FUN_144955a78(lVar6 + 0x98,&local_c0);
        *(undefined4 *)(lVar6 + 0x19c) = 0;
        local_118 = 0;
        if (lVar4 == 0) {
          local_108 = 0;
          local_110 = 0;
        }
        else {
          FUN_14111569e(lVar4,&local_f8);
          local_108 = CONCAT44(uStack_ec,local_f0);
          local_110 = local_f8;
        }
        FUN_141115702(&local_f8);
        FUN_1403719a4(lVar6 + 0x1e8,&local_f8);
        FUN_144a2da94(&local_f8);
        *(undefined1 *)(lVar6 + 0x1a3) = 1;
      }
      uVar3 = FUN_140c4800c();
      lVar4 = FUN_140c47e50(lVar5,uVar3,&DAT_14cb94cc8);
      if (lVar4 != 0) {
        *(char *)(lVar4 + 0x1c) = (char)param_1[0x89];
        FUN_144983130(lVar4 + 0x80,param_1 + 0x33);
        if (*(char *)(lVar4 + 0xb8) != '\x04') {
          *(undefined1 *)(lVar4 + 0xb8) = 4;
          FUN_1403a3fe6(lVar4);
        }
        FUN_1414df4f8(lVar4);
      }
      uVar3 = FUN_140ffa79a();
      lVar4 = FUN_140c47e50(lVar5,uVar3,&DAT_14cb94cd0);
      if (lVar4 != 0) {
        if ((char)param_1[0x89] == '\x01') {
          uVar8 = *(undefined1 *)((longlong)param_1 + 0x449);
        }
        else {
          uVar8 = 0;
        }
        *(undefined1 *)(lVar4 + 0x1c) = uVar8;
        *(undefined1 *)(lVar4 + 0x78) = 0;
        *(undefined1 *)(lVar4 + 0x7b) = 0;
        *(undefined1 *)(lVar4 + 0x72) = 1;
      }
    }
    uVar3 = FUN_141115664();
    lVar2 = FUN_140c483dc(lVar2,uVar3,&DAT_14cb94cb8,0);
    if (lVar2 != 0) {
      uVar3 = FUN_140c4800c();
      lVar4 = FUN_140c47e50(lVar2,uVar3,&DAT_14cb94cc8);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0x44a);
        FUN_144983130(lVar4 + 0x80,param_1 + 0x33);
        if (*(char *)(lVar4 + 0xb8) != '\x04') {
          *(undefined1 *)(lVar4 + 0xb8) = 4;
          FUN_1403a3fe6(lVar4);
        }
        FUN_1414df4f8(lVar4);
      }
      uVar3 = FUN_140ffa7d4();
      plVar7 = (longlong *)FUN_140c47e50(lVar2,uVar3,&DAT_14cb94cd8);
      if (plVar7 != (longlong *)0x0) {
        *(char *)((longlong)plVar7 + 0x1c) = (char)param_1[0x91];
        FUN_144983130(plVar7 + 0x58,param_1 + 0x8a);
        *(undefined1 *)(plVar7 + 0x5f) = 1;
        (**(code **)(*plVar7 + 0x90))(plVar7);
      }
      uVar3 = FUN_140a48832();
      lVar4 = FUN_140c483dc(lVar2,uVar3,&DAT_14cb94cc0,0);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0x489);
        local_f8 = 0;
        uVar3 = FUN_140c48260();
        plVar7 = (longlong *)FUN_140c47e50(lVar4,uVar3,&local_f8);
        if (plVar7 != (longlong *)0x0) {
          lVar5 = param_1[0x92];
          if (DAT_14c950c29 == '\x01') {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = param_1[0x92];
            }
          }
          plVar7[0x10] = lVar5;
          plVar7[0x11] = param_1[0x93];
          *(int *)(plVar7 + 0x12) = (int)param_1[0x94];
          FUN_144983130(plVar7 + 0x13,param_1 + 0x9c);
          FUN_144983130(plVar7 + 0x1a,param_1 + 0xa3);
          *(undefined4 *)(plVar7 + 0x21) = 3;
          (**(code **)(*plVar7 + 0x90))(plVar7);
        }
        local_f8 = 0;
        uVar3 = FUN_140ffa7d4();
        plVar7 = (longlong *)FUN_140c47e50(lVar4,uVar3,&local_f8);
        if (plVar7 != (longlong *)0x0) {
          *(undefined1 *)(plVar7 + 0x37) = 1;
          FUN_144983130(plVar7 + 0x30,param_1 + 0x95);
          (**(code **)(*plVar7 + 0x90))(plVar7);
          (**(code **)(*plVar7 + 0x90))(plVar7);
        }
      }
      uVar3 = FUN_140a48832();
      FUN_140c483dc(lVar2,uVar3,&DAT_14cb94ce0,0);
    }
  }
  FUN_144a2da94(&local_90);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bff6d8 FUN_145bff6d8 body=540 status=ok
// SIG undefined FUN_145bff6d8(void)

undefined8 FUN_145bff6d8(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_288 [40];
  longlong local_260;
  int local_258;
  undefined8 local_250;
  undefined2 *local_248;
  undefined2 *local_240;
  ulonglong *local_238;
  char local_230;
  undefined2 local_228 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_248 = local_228;
  local_230 = '\0';
  local_238 = &local_28;
  local_240 = local_248;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) goto LAB_145bff744;
    if (*(longlong *)(lVar1 + 8) == 0) {
      if (param_3 != '\0') {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
          puVar2 = (undefined8 *)(lVar1 + 0x90);
        }
        else {
          local_250 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18);
          puVar2 = &local_250;
        }
        FUN_1400021e4(puVar2,&local_260);
        iVar3 = local_258 + -1;
        if (local_258 == 0) {
          iVar3 = 0;
        }
        FUN_1449668a2(&local_248,local_260,iVar3);
        if (local_260 != 0) {
          FUN_1400020a8();
        }
        if (local_238 <= local_240 + 1) {
          FUN_140213274(&local_248,1);
        }
        *local_240 = 0x3a;
        local_240 = local_240 + 1;
      }
      goto LAB_145bff744;
    }
    FUN_145bff6d8(*(longlong *)(lVar1 + 8),&local_260);
    iVar3 = local_258 + -1;
    if (local_258 == 0) {
      iVar3 = 0;
    }
  }
  else {
    FUN_145bff6d8(*(longlong *)(param_1 + 0x20),&local_260,0);
    iVar3 = local_258 + -1;
    if (local_258 == 0) {
      iVar3 = 0;
    }
  }
  FUN_1449668a2(&local_248,local_260,iVar3);
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  if (local_238 <= local_240 + 1) {
    FUN_140213274(&local_248,1);
  }
  *local_240 = 0x2e;
  local_240 = local_240 + 1;
LAB_145bff744:
  FUN_1400021e4(param_1 + 0x10,&local_260);
  iVar3 = local_258 + -1;
  if (local_258 == 0) {
    iVar3 = 0;
  }
  FUN_1449668a2(&local_248,local_260,iVar3);
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  *local_240 = 0;
  FUN_140056680(param_2,local_248);
  if (local_230 == '\x01') {
    FUN_1400020a8(local_248);
  }
  if ((local_28 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145bff8f6 FUN_145bff8f6 body=341 status=ok
// SIG undefined FUN_145bff8f6(void)

undefined8 *
FUN_145bff8f6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar3 = *(byte *)(param_4 + 0x20);
  uVar9 = (ulonglong)bVar3;
  FUN_145bffa4c(param_1,&local_30);
  if (local_30 == 0) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  else {
    plVar4 = *(longlong **)(local_30 + 0x18 + uVar9 * 0x28);
    if (plVar4 == (longlong *)0x0) {
LAB_145bff94b:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      FUN_145bffaf8(param_2,*(undefined1 *)(local_30 + uVar9 * 0x28 + 8));
    }
    else {
      puVar8 = (undefined8 *)(local_30 + uVar9 * 0x28 + 0x10);
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) goto LAB_145bff94b;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar10 = iVar7 == iVar6;
        if (bVar10) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar10);
      local_48 = *puVar8;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar5 = (ulonglong)bVar3 * 0x28;
      plStack_40 = plVar4;
      FUN_145bffaf8(param_2,CONCAT71((int7)((ulonglong)puVar8 >> 8),
                                     *(undefined1 *)(local_30 + 8 + lVar5)),&local_48,
                    local_30 + lVar5 + 0x20);
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145bffa4c FUN_145bffa4c body=171 status=ok
// SIG undefined FUN_145bffa4c(void)

undefined8 * FUN_145bffa4c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      uVar7 = FUN_14044370c();
      cVar6 = (**(code **)(*plVar5 + 8))(plVar5,uVar7);
      if (cVar6 != '\0') {
        uVar7 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar7;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar7;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145bffaf8 FUN_145bffaf8 body=128 status=ok
// SIG undefined FUN_145bffaf8(void)

undefined8 *
FUN_145bffaf8(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1414df504(param_1 + 4,param_4);
  *(undefined1 *)(param_1 + 6) = param_2;
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 145bffb78 FUN_145bffb78 body=165 status=ok
// SIG undefined FUN_145bffb78(void)

bool FUN_145bffb78(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bffc1e FUN_145bffc1e body=57 status=ok
// SIG undefined FUN_145bffc1e(void)

void FUN_145bffc1e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_1414df638();
  uVar1 = FUN_140b64372(param_1,param_2);
  FUN_145bffc58(param_1 + 0x1d8,param_2,uVar1);
  return;
}



// FUNCTION 145bffc58 FUN_145bffc58 body=173 status=ok
// SIG undefined FUN_145bffc58(void)

void FUN_145bffc58(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145bffcef;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145bffcef:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145bffd06 FUN_145bffd06 body=179 status=ok
// SIG undefined FUN_145bffd06(void)

void FUN_145bffd06(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145bffdba(&local_30,local_20);
  if (*param_3 != local_30) {
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bffdba FUN_145bffdba body=14 status=ok
// SIG undefined FUN_145bffdba(void)

undefined8 * FUN_145bffdba(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 145bffdc8 FUN_145bffdc8 body=39 status=ok
// SIG undefined FUN_145bffdc8(void)

void FUN_145bffdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_145bffdf0(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 145bffdf0 FUN_145bffdf0 body=349 status=ok
// SIG undefined FUN_145bffdf0(void)

ulonglong FUN_145bffdf0(float *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  float fVar2;
  wchar_t wVar3;
  wint_t wVar4;
  int iVar5;
  wint_t *pwVar6;
  wint_t *pwVar7;
  wchar_t *pwVar8;
  ulonglong unaff_RBX;
  undefined7 uVar9;
  double dVar10;
  
  pwVar8 = (wchar_t *)*param_2;
  if (pwVar8 == (wchar_t *)0x0) {
    unaff_RBX = 0;
    goto LAB_145bffeac;
  }
  wVar3 = *pwVar8;
  if ((ushort)wVar3 < 0x5b) {
    unaff_RBX = 0;
    if ((wVar3 == L'\0') || (wVar3 == L'(')) goto LAB_145bffeac;
    if ((wVar3 == L'+') && (pwVar8[1] == L'-')) {
      *param_1 = 0.0;
      dVar10 = _wtof((wchar_t *)*param_2);
      param_1[1] = (float)dVar10;
      unaff_RBX = 1;
      goto LAB_145bffeac;
    }
  }
  else if (wVar3 == L'[') {
    *param_2 = (longlong)(pwVar8 + 1);
    dVar10 = _wtof(pwVar8 + 1);
    *param_1 = (float)dVar10;
    param_1[1] = 0.0;
    pwVar7 = (wint_t *)*param_2;
    do {
      uVar9 = (undefined7)(unaff_RBX >> 8);
      unaff_RBX = CONCAT71(uVar9,1);
      if (*pwVar7 == 0) break;
      pwVar6 = pwVar7 + 1;
      *param_2 = (longlong)pwVar6;
      wVar4 = *pwVar7;
      if (wVar4 == 0x2c) goto LAB_145bffe6c;
      pwVar7 = pwVar6;
    } while (wVar4 != 0x5d);
    goto LAB_145bffeac;
  }
  dVar10 = _wtof(pwVar8);
  *param_1 = (float)dVar10;
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  if (*(short *)*param_2 != 0) {
    pwVar8 = (short *)*param_2 + 1;
    do {
      *param_2 = (longlong)pwVar8;
      pwVar1 = pwVar8 + -1;
      wVar3 = *pwVar8;
      pwVar8 = pwVar8 + 1;
      if (wVar3 == L'-' && *pwVar1 == L'+') {
        *param_2 = (longlong)pwVar8;
        dVar10 = _wtof(pwVar8);
        param_1[1] = (float)dVar10;
        break;
      }
    } while (wVar3 != L'\0');
  }
LAB_145bffeac:
  return unaff_RBX & 0xffffffff;
LAB_145bffe6c:
  wVar4 = *pwVar6;
  if ((wVar4 == 0) || (wVar4 == 0x5d)) goto LAB_145bffeac;
  iVar5 = iswdigit(wVar4);
  if (iVar5 != 0) {
    fVar2 = *param_1;
    dVar10 = _wtof((wchar_t *)*param_2);
    unaff_RBX = CONCAT71(uVar9,1);
    FUN_140acda08(param_1,fVar2,(float)dVar10,1);
    goto LAB_145bffeac;
  }
  pwVar6 = (wint_t *)(*param_2 + 2);
  *param_2 = (longlong)pwVar6;
  goto LAB_145bffe6c;
}



// FUNCTION 145bfff4e FUN_145bfff4e body=24 status=ok
// SIG undefined FUN_145bfff4e(void)

void FUN_145bfff4e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145bfff62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145bfff66 FUN_145bfff66 body=38 status=ok
// SIG undefined FUN_145bfff66(void)

undefined8 FUN_145bfff66(undefined8 param_1,int param_2)

{
  FUN_145bfff8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfff8c FUN_145bfff8c body=52 status=ok
// SIG undefined FUN_145bfff8c(void)

void FUN_145bfff8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba4b4f0;
  FUN_145c00014();
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfffc0(param_1);
  return;
}



// FUNCTION 145bfffc0 FUN_145bfffc0 body=83 status=ok
// SIG undefined FUN_145bfffc0(void)

void FUN_145bfffc0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ba4b570;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c00014 FUN_145c00014 body=148 status=ok
// SIG undefined FUN_145c00014(void)

ulonglong FUN_145c00014(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  uVar4 = (ulonglong)*(int *)(param_1 + 0x48);
  if ((longlong)uVar4 < 1) {
LAB_145c0002b:
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_148fc3ca8(plVar1);
    }
  }
  else {
    if (*(int *)(*(longlong *)*plVar1 + 0x18) != 1) {
      uVar5 = 0;
LAB_145c00064:
      if (uVar4 - 1 != uVar5) goto LAB_145c00091;
      unaff_RBX = 0;
      do {
        puVar2 = *(undefined8 **)(*plVar1 + unaff_RBX * 8);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
          uVar4 = (ulonglong)*(uint *)(param_1 + 0x48);
        }
        unaff_RBX = unaff_RBX + 1;
      } while (unaff_RBX < (int)uVar4);
      goto LAB_145c0002b;
    }
    uVar4 = 0;
  }
LAB_145c0003a:
  return uVar4 & 0xffffffff;
LAB_145c00091:
  lVar3 = uVar5 + 1;
  uVar5 = uVar5 + 1;
  if (*(int *)(((longlong *)*plVar1)[lVar3] + 0x18) == 1) goto code_r0x000145c000a0;
  goto LAB_145c00064;
code_r0x000145c000a0:
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar4 <= uVar5);
  goto LAB_145c0003a;
}



// FUNCTION 145c000a8 FUN_145c000a8 body=62 status=ok
// SIG undefined FUN_145c000a8(void)

void FUN_145c000a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145c000e6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145c000e6 FUN_145c000e6 body=89 status=ok
// SIG undefined FUN_145c000e6(void)

ulonglong FUN_145c000e6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145c00140 FUN_145c00140 body=103 status=ok
// SIG undefined FUN_145c00140(void)

void FUN_145c00140(longlong param_1,char param_2)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(*(longlong *)(param_1 + 0x10) + 0x78);
  AcquireSRWLockExclusive(SRWLock);
  *(char *)(*(longlong *)(param_1 + 0x10) + 0xad) = param_2;
  if (param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    FUN_1414dfaf8(*(undefined8 *)(lVar1 + 0x68),*(undefined4 *)(lVar1 + 0x70));
    *(undefined4 *)(lVar1 + 0x70) = 0;
    if (*(int *)(lVar1 + 0x74) != 0) {
      FUN_145c001a8(lVar1 + 0x68,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c001a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 145c001a8 FUN_145c001a8 body=113 status=ok
// SIG undefined FUN_145c001a8(void)

void FUN_145c001a8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 145c0021a FUN_145c0021a body=40 status=ok
// SIG undefined FUN_145c0021a(void)

undefined8 FUN_145c0021a(undefined8 param_1,int param_2)

{
  FUN_145c00242();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c00242 FUN_145c00242 body=566 status=ok
// SIG undefined FUN_145c00242(void)

void FUN_145c00242(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b78b710;
  param_1[6] = &PTR_FUN_14b78b9d0;
  FUN_1449db362(param_1 + 0x5a);
  FUN_144760e21(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] == 0) goto LAB_145c002e6;
  while( true ) {
    FUN_1400020a8();
LAB_145c002e6:
    if ((undefined8 *)param_1[0x4f] == (undefined8 *)0x0) break;
    param_1[0x4f] = *(undefined8 *)param_1[0x4f];
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c00478(param_1 + 0x42);
  while ((undefined8 *)param_1[0x41] != (undefined8 *)0x0) {
    param_1[0x41] = *(undefined8 *)param_1[0x41];
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c004ae(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_145c004e4(param_1 + 0x2a);
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0051a(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145c00550(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c00586(param_1 + 7);
  FUN_140af926c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c00478 FUN_145c00478 body=53 status=ok
// SIG undefined FUN_145c00478(void)

void FUN_145c00478(longlong *param_1)

{
  FUN_145c006c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c004ae FUN_145c004ae body=53 status=ok
// SIG undefined FUN_145c004ae(void)

void FUN_145c004ae(longlong *param_1)

{
  FUN_145c0081c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c004e4 FUN_145c004e4 body=53 status=ok
// SIG undefined FUN_145c004e4(void)

void FUN_145c004e4(longlong *param_1)

{
  FUN_145c0097a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0051a FUN_145c0051a body=53 status=ok
// SIG undefined FUN_145c0051a(void)

void FUN_145c0051a(longlong *param_1)

{
  FUN_145c005bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c00550 FUN_145c00550 body=53 status=ok
// SIG undefined FUN_145c00550(void)

void FUN_145c00550(longlong *param_1)

{
  FUN_145c00614();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c00586 FUN_145c00586 body=53 status=ok
// SIG undefined FUN_145c00586(void)

void FUN_145c00586(longlong *param_1)

{
  FUN_145c0066c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c005bc FUN_145c005bc body=88 status=ok
// SIG undefined FUN_145c005bc(void)

void FUN_145c005bc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c00614 FUN_145c00614 body=88 status=ok
// SIG undefined FUN_145c00614(void)

void FUN_145c00614(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c0066c FUN_145c0066c body=88 status=ok
// SIG undefined FUN_145c0066c(void)

void FUN_145c0066c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c006c4 FUN_145c006c4 body=342 status=ok
// SIG undefined FUN_145c006c4(void)

void FUN_145c006c4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *local_70 + (longlong)iStack_54 * 0xa0;
      FUN_1411b822c(lVar2 + 0x38);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14152de66(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c0081c FUN_145c0081c body=348 status=ok
// SIG undefined FUN_145c0081c(void)

void FUN_145c0081c(longlong *param_1)

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
      FUN_14088c1ba(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c0097a FUN_145c0097a body=364 status=ok
// SIG undefined FUN_145c0097a(void)

void FUN_145c0097a(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1411b7a9c(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c00ae8 FUN_145c00ae8 body=40 status=ok
// SIG undefined FUN_145c00ae8(void)

undefined8 FUN_145c00ae8(undefined8 param_1,int param_2)

{
  FUN_145c00b10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c00b10 FUN_145c00b10 body=106 status=ok
// SIG undefined FUN_145c00b10(void)

void FUN_145c00b10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a411280;
  param_1[5] = &PTR_FUN_14a411860;
  param_1[6] = &PTR_LAB_14a4118a0;
  FUN_145c00bb0(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_145c00b7a(param_1 + 0x56);
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145c00b7a FUN_145c00b7a body=53 status=ok
// SIG undefined FUN_145c00b7a(void)

void FUN_145c00b7a(longlong *param_1)

{
  FUN_145c00f8e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c00bb0 FUN_145c00bb0 body=160 status=ok
// SIG undefined FUN_145c00bb0(void)

void FUN_145c00bb0(longlong *param_1)

{
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145c00c7c(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c00cb2(param_1 + 2);
  FUN_145c00c50(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c00c50 FUN_145c00c50 body=43 status=ok
// SIG undefined FUN_145c00c50(void)

void FUN_145c00c50(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1474b0e7c(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 145c00c7c FUN_145c00c7c body=53 status=ok
// SIG undefined FUN_145c00c7c(void)

void FUN_145c00c7c(longlong *param_1)

{
  FUN_145c00ce8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c00cb2 FUN_145c00cb2 body=53 status=ok
// SIG undefined FUN_145c00cb2(void)

void FUN_145c00cb2(longlong *param_1)

{
  FUN_145c00e36();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c00ce8 FUN_145c00ce8 body=333 status=ok
// SIG undefined FUN_145c00ce8(void)

void FUN_145c00ce8(longlong *param_1)

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
      FUN_1474b39fc((longlong)iStack_4c * 0x80 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
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



// FUNCTION 145c00e36 FUN_145c00e36 body=343 status=ok
// SIG undefined FUN_145c00e36(void)

void FUN_145c00e36(longlong *param_1)

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
      FUN_1474b39fc((longlong)iStack_4c * 0x88 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144a544ac(param_1,0);
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



// FUNCTION 145c00f8e FUN_145c00f8e body=369 status=ok
// SIG undefined FUN_145c00f8e(void)

void FUN_145c00f8e(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      FUN_1474b8c8a(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c01100 FUN_145c01100 body=673 status=ok
// SIG undefined FUN_145c01100(void)

void FUN_145c01100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined1 local_78 [40];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14082167c();
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar9 = FUN_141193194(param_1,param_2,(undefined8 *)(param_1 + 0x78));
    local_98 = 2;
    FUN_1408234aa(uVar9,local_78,param_2,&DAT_14cb86eb8);
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(byte *)(lVar8 + 0xc80) & 1) == 0) {
      plVar7 = (longlong *)FUN_145c013a2();
    }
    else {
      puVar3 = (undefined1 *)(lVar8 + 0xc80);
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar9 = *(undefined4 *)(lVar8 + 0xc7c);
      *puVar3 = 0;
      *(undefined4 *)(lVar8 + 0xc7c) = 0xffffffff;
      plVar7 = (longlong *)FUN_145c013a2();
      *(undefined4 *)(lVar8 + 0xc7c) = uVar9;
      *puVar3 = 1;
    }
    *(undefined1 *)(plVar7 + 5) = *(undefined1 *)(param_1 + 0x90);
    FUN_140d02432(plVar7 + 6,param_1 + 0x98);
    *(undefined2 *)(plVar7 + 0x10) = *(undefined2 *)(param_1 + 0xe8);
    iVar5 = (int)plVar7[4];
    *(uint *)(plVar7 + 4) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar7 + 0x24) < iVar5 + 1U) {
      FUN_140823334(plVar7 + 3,iVar5);
    }
    puVar4 = (undefined8 *)(plVar7[3] + (longlong)iVar5 * 0x28);
    *puVar4 = DAT_14cbc6c88;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    local_88 = CONCAT31(local_88._1_3_,1);
    local_7c = 1;
    uStack_84 = (undefined4)DAT_14cb7c588;
    uStack_80 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    FUN_140821fec(puVar4,local_78,&local_88,0);
    uStack_80 = *(undefined4 *)(param_1 + 0x80);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    local_88 = (undefined4)uVar6;
    uStack_84 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar8 = FUN_140823ef2(param_1,param_2,&local_88);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    iVar5 = *(int *)(lVar8 + 0x50);
    *(uint *)(lVar8 + 0x50) = iVar5 + 1U;
    if (*(uint *)(lVar8 + 0x54) < iVar5 + 1U) {
      FUN_140822376((longlong *)(lVar8 + 0x48),iVar5);
    }
    lVar8 = *(longlong *)(lVar8 + 0x48);
    *(longlong **)(lVar8 + (longlong)iVar5 * 0x10) = plVar7 + 2;
    *(longlong **)(lVar8 + 8 + (longlong)iVar5 * 0x10) = plVar7;
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
    FUN_14082207e(&local_88,local_78,0);
    FUN_140822770(param_2 + 0x2c0,&local_88,1);
    FUN_1447cd778(CONCAT44(uStack_84,local_88),uStack_80);
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c013a2 FUN_145c013a2 body=104 status=ok
// SIG undefined FUN_145c013a2(void)

void FUN_145c013a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b97e040;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[2] = &PTR_FUN_14b5c7340;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0xf00000d0;
  *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
  return;
}



// FUNCTION 145c0140a FUN_145c0140a body=146 status=ok
// SIG undefined FUN_145c0140a(void)

code * FUN_145c0140a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c0149c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionTileParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenReflectionTileParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e000000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f66a0;
  return FUN_1462dd43c;
}



// FUNCTION 145c0149c FUN_145c0149c body=258 status=ok
// SIG undefined FUN_145c0149c(void)

void FUN_145c0149c(void)

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
              0x110) < DAT_14c9f6720) {
    FUN_144b3d300(&DAT_14c9f6720);
    if (DAT_14c9f6720 == -1) {
      FUN_145c015a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenReflectionTileParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x5a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f66a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58723);
      _Init_thread_footer(&DAT_14c9f6720);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c015a0 FUN_145c015a0 body=226 status=ok
// SIG undefined FUN_145c015a0(void)

longlong * FUN_145c015a0(longlong *param_1)

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
  pcVar13 = FUN_1462dd4ce;
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



// FUNCTION 145c01684 FUN_145c01684 body=132 status=ok
// SIG undefined FUN_145c01684(void)

undefined1 * FUN_145c01684(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionClearTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471f58d0;
}



// FUNCTION 145c01708 FUN_145c01708 body=136 status=ok
// SIG undefined FUN_145c01708(void)

code * FUN_145c01708(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionResolveTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c01684;
}



// FUNCTION 145c01790 FUN_145c01790 body=138 status=ok
// SIG undefined FUN_145c01790(void)

code * FUN_145c01790(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionTracingTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c01708;
}



// FUNCTION 145c0181a FUN_145c0181a body=40 status=ok
// SIG undefined FUN_145c0181a(void)

undefined8 FUN_145c0181a(undefined8 param_1,int param_2)

{
  FUN_145c01842();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c01842 FUN_145c01842 body=133 status=ok
// SIG undefined FUN_145c01842(void)

void FUN_145c01842(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3bac90;
  param_1[5] = &PTR_FUN_14a3bb790;
  param_1[6] = &PTR_FUN_14a3bb7d0;
  param_1[0x55] = &PTR_FUN_14a3bb820;
  param_1[0x56] = &PTR_FUN_14a3bb8a0;
  param_1[0x57] = &PTR_FUN_14a3bb8b0;
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e248(param_1);
  return;
}



// FUNCTION 145c018d2 FUN_145c018d2 body=120 status=ok
// SIG undefined FUN_145c018d2(void)

undefined8 * FUN_145c018d2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5e5ba0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_145c0194a(param_1 + 10);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_144a5dc74(param_1 + 0x1b);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 145c0194a FUN_145c0194a body=42 status=ok
// SIG undefined FUN_145c0194a(void)

void FUN_145c0194a(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xc0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



// FUNCTION 145c01974 FUN_145c01974 body=40 status=ok
// SIG undefined FUN_145c01974(void)

undefined8 FUN_145c01974(undefined8 param_1,int param_2)

{
  FUN_145c0199c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0199c FUN_145c0199c body=70 status=ok
// SIG undefined FUN_145c0199c(void)

void FUN_145c0199c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7d72f0;
  param_1[6] = &PTR_FUN_14a7d7590;
  FUN_145c019e2(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c019e2 FUN_145c019e2 body=63 status=ok
// SIG undefined FUN_145c019e2(void)

void FUN_145c019e2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c01a2c FUN_145c01a2c body=161 status=ok
// SIG undefined FUN_145c01a2c(void)

undefined8 * FUN_145c01a2c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b31b140;
  *(undefined4 *)(param_1 + 0x16) = 0x4fc71eb5;
  param_1[0x17] = "landing";
  FUN_1400b22c2(local_28,"Movement.Landing");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_38,"Effects.Landing");
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c01ace FUN_145c01ace body=167 status=ok
// SIG undefined FUN_145c01ace(void)

bool FUN_145c01ace(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c01b7c FUN_145c01b7c body=68 status=ok
// SIG undefined FUN_145c01b7c(void)

void FUN_145c01b7c(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x2f8);
  memset(_Dst,0,0x2f8);
  FUN_145c01bc0(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145c01bc0 FUN_145c01bc0 body=195 status=ok
// SIG undefined FUN_145c01bc0(void)

undefined8 * FUN_145c01bc0(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b6ee0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14124e07a(param_1 + 0x18);
  FUN_14124e07a(param_1 + 0x28);
  FUN_1414dfb24(param_1 + 0x38);
  FUN_1413f03d2(param_1 + 0x43);
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  return param_1;
}



// FUNCTION 145c01c84 FUN_145c01c84 body=38 status=ok
// SIG undefined FUN_145c01c84(void)

undefined8 FUN_145c01c84(undefined8 param_1,int param_2)

{
  FUN_145c01caa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c01caa FUN_145c01caa body=135 status=ok
// SIG undefined FUN_145c01caa(void)

void FUN_145c01caa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9cba50;
  FUN_1447a1747(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145c01d3c FUN_145c01d3c body=147 status=ok
// SIG undefined FUN_145c01d3c(void)

undefined8 * FUN_145c01d3c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ba7c900;
  FUN_1414dfb78(&local_20);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_20,uVar1,uVar1);
  (**(code **)(*plVar2 + 0x588))(plVar2,0);
  FUN_14092e51e(param_1,plVar2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c01dd0 FUN_145c01dd0 body=40 status=ok
// SIG undefined FUN_145c01dd0(void)

undefined8 FUN_145c01dd0(undefined8 param_1,int param_2)

{
  FUN_145c01df8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c01df8 FUN_145c01df8 body=148 status=ok
// SIG undefined FUN_145c01df8(void)

void FUN_145c01df8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb684c0;
  FUN_145c01e8c();
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c01e8c FUN_145c01e8c body=130 status=ok
// SIG undefined FUN_145c01e8c(void)

void FUN_145c01e8c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_145c01f0e(param_1 + 0x3d0);
  if (lVar4 != 0) {
    lVar4 = FUN_145c01f0e(param_1 + 0x3d0);
    plVar2 = *(longlong **)(lVar4 + 0x360);
    plVar3 = *(longlong **)(lVar4 + 0x368);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar2 + 0x18))();
      FUN_140457ffc(uVar5,param_1);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000145c01f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145c01f0e FUN_145c01f0e body=201 status=ok
// SIG undefined FUN_145c01f0e(void)

longlong FUN_145c01f0e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1401242c6();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 145c01fe2 FUN_145c01fe2 body=98 status=ok
// SIG undefined FUN_145c01fe2(void)

undefined8 * FUN_145c01fe2(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_145ae736a();
  *param_1 = &PTR_FUN_14a4d5650;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = FUN_145920a42();
  lVar2 = FUN_14009d2a0();
  FUN_145c02044(param_1 + 0xd,param_1,*(undefined2 *)(lVar2 + 0x72),uVar1);
  return param_1;
}



// FUNCTION 145c02044 FUN_145c02044 body=150 status=ok
// SIG undefined FUN_145c02044(void)

void FUN_145c02044(longlong *param_1,longlong param_2,undefined2 param_3,longlong param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = param_3;
  if ((param_4 != 0) && ((*(uint *)(param_2 + 8) & 0x10) != 0)) {
    local_18 = *(longlong *)(param_2 + 0x10);
    if (local_18 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c();
    }
    local_20 = param_4;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_4);
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c020dc FUN_145c020dc body=197 status=ok
// SIG undefined FUN_145c020dc(void)

void FUN_145c020dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c02140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c021a2 FUN_145c021a2 body=24 status=ok
// SIG undefined FUN_145c021a2(void)

void FUN_145c021a2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c021b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c021ba FUN_145c021ba body=43 status=ok
// SIG undefined FUN_145c021ba(void)

undefined8 FUN_145c021ba(undefined8 param_1,int param_2)

{
  FUN_145c021e6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 145c021e6 FUN_145c021e6 body=141 status=ok
// SIG undefined FUN_145c021e6(void)

void FUN_145c021e6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab3c150;
  param_1[2] = &PTR_LAB_14ab3c1b0;
  FUN_145c02274(param_1 + 2);
  plVar3 = (longlong *)param_1[0xd];
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
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a8720c(param_1);
  return;
}



// FUNCTION 145c02274 FUN_145c02274 body=106 status=ok
// SIG undefined FUN_145c02274(void)

void FUN_145c02274(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  
  cVar4 = (**(code **)*param_1)();
  if (cVar4 != '\0') {
    uVar5 = FUN_144a82cde();
    FUN_145aa67e2(uVar5,param_1 + -2);
    param_1[10] = 0;
    plVar3 = (longlong *)param_1[0xb];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xb] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c022da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145c022f2 FUN_145c022f2 body=249 status=ok
// SIG undefined FUN_145c022f2(void)

undefined8 * FUN_145c022f2(undefined8 *param_1)

{
  FUN_14108ad62();
  *param_1 = &PTR_FUN_14ad31bb0;
  param_1[5] = &PTR_FUN_14ad31e70;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x12] = 0x3fdcccccc0000000;
  param_1[0x14] = 0x3fdcccccc0000000;
  param_1[0x16] = 0x3fdcccccc0000000;
  param_1[0x18] = 0x3fdcccccc0000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1a] = 0x3fa99999a0000000;
  param_1[0x1c] = 0x3fa99999a0000000;
  param_1[0x1e] = 0x3fa99999a0000000;
  param_1[0x20] = 0x3fa99999a0000000;
  param_1[8] = 0x3fe0000000000000;
  param_1[10] = 0x3fe0000000000000;
  *(undefined4 *)(param_1 + 0xc) = 0x41200000;
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3ba3d70a;
  return param_1;
}



// FUNCTION 145c023ec FUN_145c023ec body=40 status=ok
// SIG undefined FUN_145c023ec(void)

undefined8 FUN_145c023ec(undefined8 param_1,int param_2)

{
  FUN_145c02414();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c02414 FUN_145c02414 body=177 status=ok
// SIG undefined FUN_145c02414(void)

void FUN_145c02414(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aecb470;
  param_1[5] = &PTR_FUN_14aecb750;
  param_1[7] = &PTR_FUN_14aecb770;
  param_1[8] = &PTR_FUN_14aecb7b0;
  if (param_1[0x4e] != 0) {
    plVar1 = param_1 + 0x52;
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x50];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1c] != 0) {
    plVar1 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c024d2 FUN_145c024d2 body=31 status=ok
// SIG undefined FUN_145c024d2(void)

undefined8 FUN_145c024d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c024f2 FUN_145c024f2 body=103 status=ok
// SIG undefined FUN_145c024f2(void)

ulonglong FUN_145c024f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145c0253c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c0253c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c0255a FUN_145c0255a body=92 status=ok
// SIG undefined FUN_145c0255a(void)

void FUN_145c0255a(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1458b3d9a();
  lVar1 = FUN_14479d2ce(param_1 + 0xe);
  if (lVar1 != 0) {
    lVar1 = FUN_145c025b6(lVar1);
    if (lVar1 != 0) {
      FUN_14485c47a(param_1 + 0x2d,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000145c025ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 145c025b6 FUN_145c025b6 body=102 status=ok
// SIG undefined FUN_145c025b6(void)

void FUN_145c025b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458ad644();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0261e FUN_145c0261e body=52 status=ok
// SIG undefined FUN_145c0261e(void)

void FUN_145c0261e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x388);
  memset(_Dst,0,0x388);
  FUN_145c02652(_Dst);
  return;
}



// FUNCTION 145c02652 FUN_145c02652 body=208 status=ok
// SIG undefined FUN_145c02652(void)

undefined8 * FUN_145c02652(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *param_1 = &PTR_FUN_14b9c9f80;
  param_1[0x56] = 0;
  param_1[0x57] = 0x100000000;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0x100000000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)((longlong)param_1 + 0x345) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  return param_1;
}



// FUNCTION 145c02728 FUN_145c02728 body=404 status=ok
// SIG undefined FUN_145c02728(void)

void FUN_145c02728(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = FUN_144a52528();
  lVar7 = FUN_1401e3324(uVar6,DAT_14cc2cf08);
  if (lVar7 == 0) {
    lVar7 = FUN_144a52528();
    FUN_145c0291c(&local_68,param_1);
    FUN_145a0ed9c(lVar7 + 0x310,&local_70,&local_68);
    FUN_1401cb1ee(&local_68);
    *(undefined8 *)(param_1 + 8) = local_70;
  }
  else {
    FUN_1414dfba2(&local_68);
    if (local_60 != (longlong *)0x0) {
      iVar5 = (int)local_60[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_60[1];
        bVar9 = iVar5 == iVar4;
        if (bVar9) {
          *(int *)(local_60 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar8 = local_60;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_68 != 0) {
          local_80 = (undefined8 *)0x0;
          local_78 = 0;
          FUN_1446efa72(&local_80,0,2,0x10);
          puVar3 = local_80;
          local_78 = 2;
          *local_80 = &PTR_LAB_14b4ff180;
          uVar6 = FUN_144a3f946();
          puVar3[2] = uVar6;
          *puVar3 = &PTR_FUN_14b4ff110;
          puVar3[3] = FUN_14466742c;
          uVar6 = 0x15;
          if (DAT_14cc2cef8 == '\0') {
            uVar6 = 0;
          }
          FUN_145c028be(local_68,uVar6,&local_80);
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c028be FUN_145c028be body=92 status=ok
// SIG undefined FUN_145c028be(void)

void FUN_145c028be(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 *local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_29;
  local_29 = param_2;
  local_20 = param_3;
  FUN_145c03296(param_1 + 0x78,local_14);
  FUN_1449db362(param_3);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0291c FUN_145c0291c body=164 status=ok
// SIG undefined FUN_145c0291c(void)

LPCRITICAL_SECTION FUN_145c0291c(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e41ba0;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14bead710;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(code **)&p_Var1->EntryCount = FUN_140d0bace;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145c029c0 FUN_145c029c0 body=150 status=ok
// SIG undefined FUN_145c029c0(void)

void FUN_145c029c0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return;
}



// FUNCTION 145c02a56 FUN_145c02a56 body=1319 status=ok
// SIG undefined FUN_145c02a56(void)

void FUN_145c02a56(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8 [2];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined1 local_61;
  undefined8 *local_60;
  undefined8 **local_58;
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_c0 = param_1;
  FUN_1446efa72(&local_78,0,2,0x10);
  puVar3 = local_78;
  local_70 = 2;
  *local_78 = &PTR_LAB_14b4ff180;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b4ff110;
  puVar3[3] = FUN_143f57a80;
  local_4c[0] = 1;
  param_1 = param_1 + 0x78;
  local_60 = (undefined8 *)local_4c;
  local_58 = &local_78;
  FUN_145c03296(param_1,local_b8,&local_60);
  FUN_1449db362(&local_78);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar3 = local_88;
  local_80 = 2;
  *local_88 = &PTR_LAB_14b4ff180;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b4ff110;
  puVar3[3] = FUN_143f57f46;
  local_4c[0] = 2;
  local_60 = (undefined8 *)local_4c;
  local_58 = &local_88;
  FUN_145c03296(param_1,local_b8,&local_60);
  FUN_1449db362(&local_88);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  puVar3 = local_98;
  local_90 = 2;
  *local_98 = &PTR_LAB_14b4ff180;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b4ff110;
  puVar3[3] = FUN_143f58577;
  local_4c[0] = 3;
  local_60 = (undefined8 *)local_4c;
  local_58 = &local_98;
  FUN_145c03296(param_1,local_b8,&local_60);
  FUN_1449db362(&local_98);
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  puVar3 = local_a8;
  local_a0 = 2;
  *local_a8 = &PTR_LAB_14b4ff180;
  uVar4 = FUN_144a3f946();
  lVar2 = local_c0;
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b4ff110;
  puVar3[3] = FUN_143f5893f;
  local_4c[0] = 4;
  local_60 = (undefined8 *)local_4c;
  local_58 = &local_a8;
  FUN_145c03296(param_1,local_b8,&local_60);
  FUN_1449db362(&local_a8);
  FUN_1400b22c2(local_b8,"SparkPatchEntry");
  local_61 = 1;
  lVar1 = lVar2 + 200;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c,&local_60);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b8,"SparkLevelPatchEntry");
  local_61 = 2;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b8,"SparkLevelAddedToWorldEntry");
  local_61 = 8;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b8,"SparkStreamedPackageEntry");
  local_61 = 3;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b8,"SparkSaveGameEntry");
  local_61 = 4;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b8,"SparkPostLoadedEntry");
  local_61 = 5;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b8,"SparkCharacterLoadedEntry");
  local_61 = 6;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b8,"SparkEarlyLevelPatchEntry");
  local_61 = 7;
  local_60 = (undefined8 *)&local_61;
  local_58 = (undefined8 **)local_b8;
  FUN_145c02f7e(lVar1,local_4c);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_145c03618(&local_60,lVar2);
  FUN_145c036d4(&local_60,lVar2);
  uVar4 = FUN_1457baddc();
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 **)((ulonglong)local_58 & 0xffffffff00000000);
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar3 = local_60;
  local_58 = (undefined8 **)CONCAT44(local_58._4_4_,3);
  *local_60 = &PTR_LAB_14a1621d0;
  uVar5 = FUN_144a3f946();
  puVar3[2] = uVar5;
  *puVar3 = &PTR_FUN_14b4ff2d0;
  puVar3[3] = lVar2;
  puVar3[4] = FUN_143f58e32;
  FUN_145c03790(uVar4,local_b8,&local_60);
  FUN_1449db362(&local_60);
  if ((local_4c._4_8_ ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c02f7e FUN_145c02f7e body=281 status=ok
// SIG undefined FUN_145c02f7e(void)

undefined4 * FUN_145c02f7e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c031a6(param_1,local_48);
  FUN_145c03098(param_3,local_40);
  local_40[0x18] = 0xff;
  local_40[0x19] = 0xff;
  local_40[0x1a] = 0xff;
  local_40[0x1b] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  cVar3 = FUN_145c03102(param_1,bVar1,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x1c) = uVar5;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1414e005e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c03098 FUN_145c03098 body=105 status=ok
// SIG undefined FUN_145c03098(void)

undefined1 * FUN_145c03098(undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined1 *)*param_1;
  *(undefined8 *)(param_2 + 8) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 8,iVar1,0);
    memcpy(*(void **)(param_2 + 8),_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 145c03102 FUN_145c03102 body=163 status=ok
// SIG undefined FUN_145c03102(void)

undefined8 FUN_145c03102(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148abd0f2(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c031a6 FUN_145c031a6 body=239 status=ok
// SIG undefined FUN_145c031a6(void)

int * FUN_145c031a6(longlong *param_1,int *param_2)

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



// FUNCTION 145c03296 FUN_145c03296 body=293 status=ok
// SIG undefined FUN_145c03296(void)

undefined4 * FUN_145c03296(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c03532(param_1,local_48);
  uVar2 = param_3[1];
  *local_40 = *(byte *)*param_3;
  pbVar3 = local_40;
  pbVar3[8] = 0;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  pbVar3[0xc] = 0;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  pbVar3[0x10] = 0;
  pbVar3[0x11] = 0;
  pbVar3[0x12] = 0;
  pbVar3[0x13] = 0;
  FUN_145c033bc(local_40 + 8,uVar2);
  pbVar3[0x18] = 0xff;
  pbVar3[0x19] = 0xff;
  pbVar3[0x1a] = 0xff;
  pbVar3[0x1b] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  cVar5 = FUN_145c03498(param_1,bVar1,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x1c) = uVar7;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar7) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar7) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1414dfeb6(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c033bc FUN_145c033bc body=124 status=ok
// SIG undefined FUN_145c033bc(void)

void FUN_145c033bc(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 145c0343a FUN_145c0343a body=93 status=ok
// SIG undefined FUN_145c0343a(void)

void FUN_145c0343a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ff180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ff110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 145c03498 FUN_145c03498 body=154 status=ok
// SIG undefined FUN_145c03498(void)

undefined8 FUN_145c03498(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1449db362(puVar1 + 2);
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148abd080(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 145c03532 FUN_145c03532 body=230 status=ok
// SIG undefined FUN_145c03532(void)

int * FUN_145c03532(longlong *param_1,int *param_2)

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



// FUNCTION 145c03618 FUN_145c03618 body=186 status=ok
// SIG undefined FUN_145c03618(void)

undefined8 FUN_145c03618(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_38 = &PTR_LAB_14a1ca6c0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4ff1f0;
  puVar1[3] = param_2;
  puVar1[4] = FUN_144a428f8;
  FUN_1411df00c(&DAT_14cb10a78,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c036d4 FUN_145c036d4 body=186 status=ok
// SIG undefined FUN_145c036d4(void)

undefined8 FUN_145c036d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_38 = &PTR_LAB_14a1e1a40;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4ff260;
  puVar1[3] = param_2;
  puVar1[4] = FUN_145de27d8;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c03790 FUN_145c03790 body=327 status=ok
// SIG undefined FUN_145c03790(void)

undefined8 FUN_145c03790(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  local_48 = 0;
  local_40 = 0;
  FUN_145c038d8(&local_48,param_3);
  FUN_145c03956(param_1 + 9,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = 0xe9;
    lVar2 = 0;
    do {
      if (*(char *)(*param_1 + lVar3) != '\0') {
        lVar2 = *param_1 - lVar2;
        if (lVar2 != 0) {
          FUN_140bee914(local_58,lVar2 + 0x18);
          FUN_144a882a8(&local_48,local_58,&DAT_149e065c6);
          plVar1 = (longlong *)*param_3;
          if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
            (**(code **)(*plVar1 + 0x60))(plVar1,param_1,&local_48);
          }
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar2 = lVar2 + -0xf0;
      lVar3 = lVar3 + 0xf0;
    } while ((longlong)(int)param_1[1] * -0xf0 - lVar2 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c038d8 FUN_145c038d8 body=124 status=ok
// SIG undefined FUN_145c038d8(void)

void FUN_145c038d8(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 145c03956 FUN_145c03956 body=216 status=ok
// SIG undefined FUN_145c03956(void)

undefined8 * FUN_145c03956(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c03a30 FUN_145c03a30 body=181 status=ok
// SIG undefined FUN_145c03a30(void)

void FUN_145c03a30(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((*(char *)(param_1 + 0x2f1) == '\x01') && (*(longlong *)(param_1 + 0x2f8) == 0)) {
    bVar1 = FUN_1414e0206(param_1);
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
  }
  if ((bVar1 == 0) && ((*(uint *)(param_1 + 0x2d4) & 1) != 0)) {
    cVar2 = FUN_1414e025e(param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_140041326(param_1);
      if (cVar2 != '\0') {
        lVar3 = FUN_145c03ae6(param_1);
        *(longlong *)(param_1 + 0x4c8) = lVar3;
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(param_1 + 0xb0);
          if (lVar4 == 0) {
            lVar4 = FUN_1448abda6(param_1);
            lVar3 = *(longlong *)(param_1 + 0x4c8);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(lVar4 + 0x218) + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x000145c03ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(longlong **)(lVar4 + 0x218),lVar3,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145c03ae6 FUN_145c03ae6 body=74 status=ok
// SIG undefined FUN_145c03ae6(void)

undefined8 FUN_145c03ae6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x350) == 0) && (cVar1 = FUN_1414e0206(param_1), cVar1 == '\0')) {
    return 0;
  }
  uVar2 = FUN_14001cc68(0x160,0x10);
  FUN_1414e02f6(uVar2,param_1);
  return uVar2;
}



// FUNCTION 145c03b30 FUN_145c03b30 body=137 status=ok
// SIG undefined FUN_145c03b30(void)

void FUN_145c03b30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_145c03bba();
  param_1[0xce] = 0;
  plVar3 = (longlong *)param_1[0xcf];
  if (plVar3 != (longlong *)0x0) {
    param_1[0xcf] = 0;
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
  lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_140e94dc2(lVar4);
    if (lVar4 != 0) {
      FUN_140457ffc(lVar4 + 0x30,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145c03bba FUN_145c03bba body=80 status=ok
// SIG undefined FUN_145c03bba(void)

void FUN_145c03bba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x650) = 0;
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x658) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c03c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c03c0a FUN_145c03c0a body=9 status=ok
// SIG undefined FUN_145c03c0a(void)

void FUN_145c03c0a(longlong param_1)

{
  FUN_145c03c14(param_1 + 0x10);
  return;
}



// FUNCTION 145c03c14 FUN_145c03c14 body=71 status=ok
// SIG undefined FUN_145c03c14(void)

void FUN_145c03c14(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  FUN_145c03caa(param_1 + 0x118);
  FUN_145c03d38(param_1 + 0x50);
  FUN_145c03c5c(param_1);
  return;
}



// FUNCTION 145c03c5c FUN_145c03c5c body=78 status=ok
// SIG undefined FUN_145c03c5c(void)

void FUN_145c03c5c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a184e50;
  FUN_14125202e();
  FUN_145c04020(param_1);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c03ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c03caa FUN_145c03caa body=53 status=ok
// SIG undefined FUN_145c03caa(void)

void FUN_145c03caa(longlong *param_1)

{
  FUN_145c03ce0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


