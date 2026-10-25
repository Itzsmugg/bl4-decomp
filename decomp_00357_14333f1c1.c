// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14333f1c1 FUN_14333f1c1 body=69 status=ok
// SIG undefined FUN_14333f1c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333f1c1(void)

{
  _DAT_14cabab70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333f203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabab78,1);
  return;
}



// FUNCTION 14333f206 FUN_14333f206 body=202 status=ok
// SIG undefined FUN_14333f206(void)

void FUN_14333f206(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x800000014a565e9a;
  local_14 = 0x18;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14635fdec(&local_28);
  local_38 = 0;
  FUN_141471170(&DAT_14cabab60,L"au.nrt.RenderFrameSize",&DAT_14c7610d8,
                L"Selects the number of frames to render in a single callback .\nn: Number of frames to render."
               );
  atexit(FUN_14333f17c);
  local_38 = 0;
  FUN_141471170(&DAT_14cabab70,L"au.nrt.RenderEveryTick",&DAT_14c7610dc,
                L"When set to 1, calls the RenderAudio call every tick.\nn: Number of frames to render."
               );
  atexit(FUN_14333f1c1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333f2e5 FUN_14333f2e5 body=460 status=ok
// SIG undefined FUN_14333f2e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333f2e5(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cabab90 = 0x3fe69fbe80000000;
  uRam000000014cabab98 = 0x3fe69fbe80000000;
  _DAT_14cababa0 = 0x3fe69fbe80000000;
  uRam000000014cababa8 = 0x3fe69fbe80000000;
  _DAT_14cababb0 = 0;
  uRam000000014cababb8 = 0;
  _DAT_14cababc0 = 0;
  uRam000000014cababc8 = 0;
  DAT_14cabab80 = (void *)0x0;
  _DAT_14cabab88 = 9;
  FUN_14635ffce(&DAT_14cabab80,9,0);
  memcpy(DAT_14cabab80,&DAT_14a566370,0x90);
  atexit((_func_5014 *)&LAB_14333f2d4);
  local_28 = 0x800000014a566424;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14635ff0c(&local_28);
  _DAT_14cababf8 = 0x3f5db3d7;
  _DAT_14cababfc = 0x3f5db3d7;
  _DAT_14cabac00 = 0x3f5db3d7;
  _DAT_14cabac04 = 0x3f5db3d7;
  _DAT_14cabac08 = 0x3f4a62c2;
  _DAT_14cabac0c = 0x3ff7def6;
  _DAT_14cabac10 = 0x3f1cc471;
  _DAT_14cabac14 = 0x3f1cc471;
  _DAT_14cabac18 = 0x3ff7def6;
  _DAT_14cabac1c = 0x3f4a62c2;
  _DAT_14cabac20 = 0x3f3d5087;
  _DAT_14cabac24 = 0x4005dd98;
  _DAT_14cabac28 = 0x3f0f1bbd;
  _DAT_14cabac2c = 0x3eca62c2;
  _DAT_14cabac30 = 0x3eca62c2;
  _DAT_14cabac34 = 0x3f0f1bbd;
  _DAT_14cabac38 = 0x4005dd98;
  _DAT_14cabac3c = 0x3f3d5087;
  _DAT_14cabac40 = 0x3f33997d;
  _DAT_14cabac44 = 0x400dfc65;
  _DAT_14cabac48 = 0x3e85dd98;
  _DAT_14cabac4c = 0x4023f383;
  _DAT_14cabac50 = 0x3ef7def6;
  _DAT_14cabac54 = 0x3ef7def6;
  _DAT_14cabac58 = 0x4023f383;
  _DAT_14cabac5c = 0x3e85dd98;
  _DAT_14cabac60 = 0x400dfc65;
  _DAT_14cabac64 = 0x3f33997d;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333f4b4 FUN_14333f4b4 body=147 status=ok
// SIG undefined FUN_14333f4b4(void)

void FUN_14333f4b4(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0x800000014a5665a8;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1463600bc(&local_28);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/AudioLinkEngine",&PTR_FUN_14a566bb0,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333f548 FUN_14333f548 body=55 status=ok
// SIG undefined FUN_14333f548(void)

void FUN_14333f548(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabad08 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabad08 = FUN_14171c317(FUN_1463604b1,uVar1,L"ERequiredSubmixes");
  }
  return;
}



// FUNCTION 14333f57f FUN_14333f57f body=55 status=ok
// SIG undefined FUN_14333f57f(void)

void FUN_14333f57f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabad20 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabad20 = FUN_14171c317(FUN_1463604e0,uVar1,L"ESourceManagerRenderThreadPhase");
  }
  return;
}



// FUNCTION 14333f5b6 FUN_14333f5b6 body=611 status=ok
// SIG undefined FUN_14333f5b6(void)

void FUN_14333f5b6(longlong param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    if (iVar6 != 1) goto LAB_14333f604;
    DVar1 = FUN_140ad26c0();
    DVar2 = GetCurrentThreadId();
    if (DVar1 != DVar2) goto LAB_14333f604;
  }
  plVar3 = (longlong *)FUN_145b54fcc();
  lVar10 = plVar3[0x22];
  if (lVar10 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar10 = plVar3[0x22];
    if (lVar10 == 0) goto LAB_14333f604;
  }
  local_60 = 0;
  iVar6 = *(int *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_58 = iVar6;
  if (iVar6 == 0) {
    local_54 = 0;
    uVar5 = 0;
  }
  else {
    FUN_1477cbd92(&local_60,iVar6);
    FUN_1477cbdeb(local_60,uVar7,iVar6);
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
  }
  iVar6 = *(int *)(param_1 + 0x3c);
  FUN_145caaaad(uVar7,uVar5);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_1477cbe34(param_1 + 0x30);
  }
  if ((longlong)*(int *)(lVar10 + 0x1c0) != 0) {
    lVar8 = *(longlong *)(lVar10 + 0x1b8);
    lVar10 = (longlong)*(int *)(lVar10 + 0x1c0) << 5;
    do {
      lVar9 = FUN_140081d40(lVar8,0);
      if (lVar9 != 0) {
        lVar4 = FUN_141155828();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_1477b3126(param_1,(ulonglong)*(uint *)(lVar9 + 0xc) | 0xffffffff00000000,
                        *(byte *)(lVar9 + 0x30) + 1,0);
          local_68 = 0;
          FUN_1401924dc(lVar9);
          local_68 = lVar9;
          FUN_1477cbe64(param_1 + 0x30,&local_68);
          local_50 = &local_68;
          FUN_1477cbf6e(&local_60);
          if ((local_68 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
        }
      }
      lVar8 = lVar8 + 0x20;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  lVar10 = local_60;
  lVar8 = (longlong)local_58;
  iVar6 = 0;
  if (lVar8 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar10 + lVar9) != 0) {
        FUN_1477b3340(param_1,(ulonglong)*(uint *)(*(longlong *)(lVar10 + lVar9) + 0xc) |
                              0xffffffff00000000);
      }
      lVar9 = lVar9 + 8;
      iVar6 = local_58;
    } while (lVar8 * 8 != lVar9);
  }
  FUN_145caaaad(local_60,iVar6);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_14333f604:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14333f81f FUN_14333f81f body=55 status=ok
// SIG undefined FUN_14333f81f(void)

void FUN_14333f81f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabad38 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabad38 = FUN_14171c317(FUN_14636050f,uVar1,L"EAudioDeviceChangedRole");
  }
  return;
}



// FUNCTION 14333f856 FUN_14333f856 body=55 status=ok
// SIG undefined FUN_14333f856(void)

void FUN_14333f856(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabad50 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabad50 = FUN_14171c317(FUN_14636053e,uVar1,L"EAudioDeviceChangedState");
  }
  return;
}



// FUNCTION 14333f88d FUN_14333f88d body=55 status=ok
// SIG undefined FUN_14333f88d(void)

void FUN_14333f88d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabada0 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabada0 = FUN_14171c317(FUN_14636059c,uVar1,L"EMusicalNoteName");
  }
  return;
}



// FUNCTION 14333f8c4 FUN_14333f8c4 body=55 status=ok
// SIG undefined FUN_14333f8c4(void)

void FUN_14333f8c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabadb8 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabadb8 = FUN_14171c317(FUN_1463605cb,uVar1,L"EAudioMixerStreamDataFormatType");
  }
  return;
}



// FUNCTION 14333f8fb FUN_14333f8fb body=55 status=ok
// SIG undefined FUN_14333f8fb(void)

void FUN_14333f8fb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabadd0 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabadd0 = FUN_14171c317(FUN_1463605fa,uVar1,L"EAudioMixerChannelType");
  }
  return;
}



// FUNCTION 14333f932 FUN_14333f932 body=55 status=ok
// SIG undefined FUN_14333f932(void)

void FUN_14333f932(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabade8 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabade8 = FUN_14171c317(FUN_146360629,uVar1,L"ESwapAudioOutputDeviceResultState");
  }
  return;
}



// FUNCTION 14333f96a FUN_14333f96a body=232 status=ok
// SIG undefined FUN_14333f96a(void)

void FUN_14333f96a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar3 = FUN_147972568();
    if (lVar3 != 0) {
      local_28 = (float)*(int *)(lVar3 + 0x74);
      local_38[0] = *(undefined4 *)(lVar3 + 0x90);
      local_30 = 0;
      local_24 = *(undefined4 *)(param_2 + 0xc);
      FUN_1477b89fa(&local_48,local_38,param_2);
      LOCK();
      *(undefined4 *)(local_48 + 0x5c) = 1;
      UNLOCK();
      local_58 = local_48;
      local_50 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_1477b8afc(lVar3,&local_58);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333fa54 FUN_14333fa54 body=289 status=ok
// SIG undefined FUN_14333fa54(void)

void FUN_14333fa54(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    plVar7 = (longlong *)FUN_147972568();
    if (plVar7 != (longlong *)0x0) {
      local_48 = 0;
      uStack_40 = 0;
      uVar2 = *(undefined4 *)(param_2 + 0xc);
      cVar5 = (**(code **)(*plVar7 + 0x128))(plVar7,uVar2);
      if (cVar5 == '\0') {
        FUN_1477b919e(&local_48,param_2 + 0x28);
      }
      uVar4 = uStack_40;
      lVar8 = (longlong)(int)uStack_40;
      uVar6 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar6);
      if (uStack_40._4_4_ < uVar6) {
        FUN_1477ccaf6(&local_48,uVar4 & 0xffffffff);
      }
      lVar1 = local_48 + lVar8 * 0x10;
      lVar3 = *param_3;
      *(longlong *)(local_48 + lVar8 * 0x10) = lVar3;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfffffffe | *(uint *)(param_3 + 1) & 1;
      (**(code **)(*plVar7 + 0x120))(plVar7,uVar2,&local_48,*(byte *)(param_2 + 0x38) & 1);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333fb76 FUN_14333fb76 body=2443 status=ok
// SIG undefined FUN_14333fb76(void)

void FUN_14333fb76(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *_Src;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_60;
  longlong local_58 [6];
  
  local_58[5] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar1,local_58 + 4);
            goto LAB_14333fd2a;
          }
        }
        plVar8 = (longlong *)(lVar1 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_58 + 4) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_58 + 4,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_58 + 4,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_58 + 4,lVar1,1);
      }
      else {
        (*pcVar2)(plVar7,local_58 + 4,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_14333fd2a:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_58 + 4);
      goto LAB_14333fd2a;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_58 + 4);
      goto LAB_14333fd2a;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar3,param_2,local_58 + 4);
      goto LAB_14333fd2a;
    }
    local_58[4] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  plVar7 = (longlong *)(param_2 + 0x38);
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar1,local_58 + 2);
            goto LAB_14333fe9f;
          }
        }
        plVar9 = (longlong *)(lVar1 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar9 != local_58 + 2) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_58 + 2,plVar9,(int)plVar8[6]);
          }
          else {
            memcpy(local_58 + 2,plVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar8[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,local_58 + 2,lVar1,1);
      }
      else {
        (*pcVar2)(plVar8,local_58 + 2,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *plVar7 = puVar4[1];
    }
LAB_14333fe9f:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_58 + 2);
      goto LAB_14333fe9f;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_58 + 2);
      goto LAB_14333fe9f;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar3,param_2,local_58 + 2);
      goto LAB_14333fe9f;
    }
    local_58[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    plVar8 = (longlong *)0x0;
  }
  plVar9 = local_58 + 2;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *plVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar1,local_58);
            goto LAB_143340076;
          }
        }
        _Src = (longlong *)(lVar1 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != local_58) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_58,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(local_58,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar8[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,local_58,lVar1,1);
      }
      else {
        (*pcVar2)(plVar8,local_58,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,local_58);
    }
  }
LAB_143340076:
  plVar8 = local_58;
  if ((longlong *)*plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar7;
  }
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar1,&local_60);
            goto LAB_14334023c;
          }
        }
        puVar10 = (undefined8 *)(lVar1 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar10 != &local_60) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_60,puVar10,(int)plVar7[6]);
          }
          else {
            memcpy(&local_60,puVar10,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_60,lVar1,1);
      }
      else {
        (*pcVar2)(plVar7,&local_60,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_60);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_60);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_60);
    }
  }
LAB_14334023c:
  uVar3 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar7 = (longlong *)FUN_147972568(local_58[4]);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x1d0))(plVar7,uVar3,plVar9,plVar8);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[5] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143340502 FUN_143340502 body=137 status=ok
// SIG undefined FUN_143340502(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_143340502(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  if (param_2 != 0) {
    plVar2 = (longlong *)FUN_147972568();
    if (plVar2 != (longlong *)0x0) {
      local_38[0] = 0;
      local_38[1] = 0;
      cVar1 = (**(code **)(*plVar2 + 0x128))(plVar2,*(undefined4 *)(param_2 + 0xc),local_38);
      plVar2 = (longlong *)(param_2 + 0x30);
      if (cVar1 != '\0') {
        plVar2 = local_38 + 1;
      }
      uVar3 = (undefined4)*plVar2;
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334058c FUN_14334058c body=2443 status=ok
// SIG undefined FUN_14334058c(void)

void FUN_14334058c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *_Src;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_60;
  longlong local_58 [6];
  
  local_58[5] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar1,local_58 + 4);
            goto LAB_143340740;
          }
        }
        plVar8 = (longlong *)(lVar1 + *(int *)((longlong)plVar7 + 0x44));
        if (plVar8 != local_58 + 4) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,local_58 + 4,plVar8,(int)plVar7[6]);
          }
          else {
            memcpy(local_58 + 4,plVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_58 + 4,lVar1,1);
      }
      else {
        (*pcVar2)(plVar7,local_58 + 4,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_143340740:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_58 + 4);
      goto LAB_143340740;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_58 + 4);
      goto LAB_143340740;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar3,param_2,local_58 + 4);
      goto LAB_143340740;
    }
    local_58[4] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  plVar7 = (longlong *)(param_2 + 0x38);
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar1,local_58 + 2);
            goto LAB_1433408b5;
          }
        }
        plVar9 = (longlong *)(lVar1 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar9 != local_58 + 2) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_58 + 2,plVar9,(int)plVar8[6]);
          }
          else {
            memcpy(local_58 + 2,plVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar8[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,local_58 + 2,lVar1,1);
      }
      else {
        (*pcVar2)(plVar8,local_58 + 2,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *plVar7 = puVar4[1];
    }
LAB_1433408b5:
    pbVar6 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_58 + 2);
      goto LAB_1433408b5;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_58 + 2);
      goto LAB_1433408b5;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar3,param_2,local_58 + 2);
      goto LAB_1433408b5;
    }
    local_58[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    plVar8 = (longlong *)0x0;
  }
  plVar9 = local_58 + 2;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *plVar7 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar1,local_58);
            goto LAB_143340a8c;
          }
        }
        _Src = (longlong *)(lVar1 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != local_58) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_58,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(local_58,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar8[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,local_58,lVar1,1);
      }
      else {
        (*pcVar2)(plVar8,local_58,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,local_58);
    }
  }
LAB_143340a8c:
  plVar8 = local_58;
  if ((longlong *)*plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar7;
  }
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar7 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar7 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar7);
          if (cVar5 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar1,&local_60);
            goto LAB_143340c52;
          }
        }
        puVar10 = (undefined8 *)(lVar1 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar10 != &local_60) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_60,puVar10,(int)plVar7[6]);
          }
          else {
            memcpy(&local_60,puVar10,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar7[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_60,lVar1,1);
      }
      else {
        (*pcVar2)(plVar7,&local_60,lVar1);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_60);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_60);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_60);
    }
  }
LAB_143340c52:
  uVar3 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar7 = (longlong *)FUN_147972568(local_58[4]);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x1d8))(plVar7,uVar3,plVar9,plVar8);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[5] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143340f18 FUN_143340f18 body=68 status=ok
// SIG undefined FUN_143340f18(void)

undefined8 FUN_143340f18(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_147972568();
    if (lVar2 != 0) {
      uVar1 = *(uint *)(param_2 + 0xc);
      uVar3 = FUN_1477b91ee(lVar2);
      uVar3 = FUN_1477b348a(uVar3,(ulonglong)uVar1 | 0xffffffff00000000);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143340f5c FUN_143340f5c body=1393 status=ok
// SIG undefined FUN_143340f5c(void)

void FUN_143340f5c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar7);
          if (cVar6 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar2,&local_28);
            goto LAB_143341129;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_28,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_28,lVar2,1);
      }
      else {
        (*pcVar3)(plVar7,&local_28,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_28);
    }
  }
LAB_143341129:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar7);
          if (cVar6 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar2,&local_30);
            goto LAB_1433412dd;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_30,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar7,&local_30,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_30);
    }
  }
LAB_1433412dd:
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar7 = (longlong *)FUN_147972568(local_28);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x240))(plVar7,uVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433414ce FUN_1433414ce body=228 status=ok
// SIG undefined FUN_1433414ce(void)

void FUN_1433414ce(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    lVar3 = FUN_140083894();
    plVar2 = *(longlong **)(lVar3 + 0x38);
    local_40 = *param_2;
    uStack_3c = param_2[1];
    uStack_38 = param_2[2];
    uStack_34 = param_2[3];
    local_58 = 0;
    local_48 = &PTR_LAB_14a570370;
    local_68[0] = FUN_1433516c4;
    local_30 = param_1;
    FUN_1436fb532(param_1,local_78);
    local_80 = 0;
    local_88 = 0xff;
    (**(code **)(*plVar2 + 0xa8))(plVar2,local_78,1,local_68);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433415b4 FUN_1433415b4 body=390 status=ok
// SIG undefined FUN_1433415b4(void)

void FUN_1433415b4(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98;
  longlong *local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0 && param_2 != 0) {
    cVar4 = FUN_146269f19();
    if (cVar4 == '\0') {
      local_68 = 0;
      local_58 = &PTR_LAB_14a5703b0;
      local_78 = &LAB_14335181e;
      local_50 = param_1;
      local_48 = param_2;
      local_40 = param_3;
      FUN_1415826cc();
    }
    else {
      lVar6 = FUN_147972568(param_1);
      if ((lVar6 != 0) && (FUN_1433438ce(lVar6,&local_98,param_2), local_90 != (longlong *)0x0)) {
        iVar5 = (int)local_90[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_90[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(local_90 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar8 = local_90;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_98 != 0) {
            uVar7 = FUN_1477b91ee(lVar6);
            local_80 = *(undefined4 *)(param_3 + 0xc);
            uStack_7c = 0xffffffff;
            local_a8 = *(byte *)(param_3 + 0x30) + 1;
            FUN_1477b3574(uVar7,&local_98,CONCAT44(0xffffffff,local_80),
                          *(undefined4 *)(lVar6 + 0x7c));
            FUN_1477d5e4e(local_98,&local_80,&local_98);
            FUN_145be9032(&local_98);
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
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334173c FUN_14334173c body=1395 status=ok
// SIG undefined FUN_14334173c(void)

void FUN_14334173c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_143341909;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
LAB_143341909:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_143341abd;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_143341abd:
  lVar5 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0) {
    lVar8 = FUN_147972568(local_28);
    if (lVar8 != 0) {
      FUN_1477bce18(lVar8,*(undefined4 *)(lVar5 + 0xc));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143341cb0 FUN_143341cb0 body=255 status=ok
// SIG undefined FUN_143341cb0(void)

void FUN_143341cb0(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_147972568();
    if (plVar3 != (longlong *)0x0) {
      local_48 = 0;
      uStack_40 = 0;
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      cVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,uVar1);
      if (cVar2 == '\0') {
        FUN_1477b919e(&local_48,param_2 + 0x28);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < (int)uStack_40)) {
        if (~param_3 + (int)uStack_40 != 0) {
          memmove((void *)(local_48 + (ulonglong)param_3 * 0x10),
                  (void *)((ulonglong)param_3 * 0x10 + local_48 + 0x10),
                  (longlong)(int)(~param_3 + (int)uStack_40) << 4);
        }
        uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + -1);
        FUN_1477ccb7c(&local_48);
        (**(code **)(*plVar3 + 0x120))(plVar3,uVar1,&local_48,*(byte *)(param_2 + 0x38) & 1);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143341db0 FUN_143341db0 body=1393 status=ok
// SIG undefined FUN_143341db0(void)

void FUN_143341db0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar7);
          if (cVar6 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar2,&local_28);
            goto LAB_143341f7d;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_28,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_28,lVar2,1);
      }
      else {
        (*pcVar3)(plVar7,&local_28,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_28);
    }
  }
LAB_143341f7d:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar7);
          if (cVar6 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar2,&local_30);
            goto LAB_143342131;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_30,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar7,&local_30,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_30);
    }
  }
LAB_143342131:
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar7 = (longlong *)FUN_147972568(local_28);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x248))(plVar7,uVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143342322 FUN_143342322 body=228 status=ok
// SIG undefined FUN_143342322(void)

void FUN_143342322(undefined8 param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_147972568();
    if (plVar3 != (longlong *)0x0) {
      local_48 = 0;
      uStack_40 = 0;
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      cVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,uVar1);
      if (cVar2 == '\0') {
        FUN_1477b919e(&local_48,param_2 + 0x28);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < (int)uStack_40)) {
        uVar4 = *(uint *)(local_48 + 8 + (ulonglong)param_3 * 0x10) & 0xfffffffe;
        *(uint *)(local_48 + 8 + (ulonglong)param_3 * 0x10) = uVar4 | param_4 & 0xff;
        (**(code **)(*plVar3 + 0x120))
                  (plVar3,uVar1,&local_48,
                   CONCAT31((int3)(uVar4 >> 8),*(undefined1 *)(param_2 + 0x38)) & 0xffffff01);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143342408 FUN_143342408 body=166 status=ok
// SIG undefined FUN_143342408(void)

void FUN_143342408(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,byte param_5,
                  float param_6,byte param_7)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_147972568();
  if (plVar1 != (longlong *)0x0) {
    if (10.0 <= param_6) {
      param_6 = 10.0;
    }
    if (param_6 <= 0.001) {
      param_6 = 0.001;
    }
    local_28 = param_3 & 0xff |
               (ulonglong)param_5 << 8 |
               (ulonglong)param_7 << 0x10 | CONCAT44(param_6,param_4 << 0x18);
    (**(code **)(*plVar1 + 0x1c0))(plVar1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433424b0 FUN_1433424b0 body=81 status=ok
// SIG undefined FUN_1433424b0(void)

void FUN_1433424b0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_147972568();
    if (lVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar2 = *(uint *)(param_2 + 0xc);
      uVar4 = FUN_1477b91ee(lVar3);
      FUN_1477b3126(uVar4,(ulonglong)uVar2 | 0xffffffff00000000,bVar1 + 1,0);
      return;
    }
  }
  return;
}



// FUNCTION 143342502 FUN_143342502 body=2061 status=ok
// SIG undefined FUN_143342502(void)

void FUN_143342502(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_38 = 0;
  uStack_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar8);
          if (cVar7 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar2,&uStack_38);
            goto LAB_1433426d4;
          }
        }
        puVar9 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar9 != &uStack_38) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&uStack_38,puVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&uStack_38,puVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar8[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,&uStack_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar8,&uStack_38,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar4;
      uStack_34 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&uStack_38);
    }
  }
LAB_1433426d4:
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar8);
          if (cVar7 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar2,&local_3c);
            goto LAB_143342887;
          }
        }
        puVar9 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar9 != &local_3c) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_3c,puVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&local_3c,puVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar8[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,&local_3c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar8,&local_3c,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (undefined4)uVar4;
      uStack_38 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_3c);
    }
  }
LAB_143342887:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar8);
          if (cVar7 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar2,&local_48);
            goto LAB_143342a3b;
          }
        }
        puVar10 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_48,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar8[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar8,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar8,&local_48,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_48);
    }
  }
LAB_143342a3b:
  uVar6 = local_3c;
  uVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar8 = (longlong *)FUN_147972568(CONCAT44(uStack_34,uStack_38));
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x138))(plVar8,uVar4,uVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143342d10 FUN_143342d10 body=1393 status=ok
// SIG undefined FUN_143342d10(void)

void FUN_143342d10(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar7);
          if (cVar6 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar2,&local_28);
            goto LAB_143342edd;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_28,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_28,lVar2,1);
      }
      else {
        (*pcVar3)(plVar7,&local_28,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_28);
    }
  }
LAB_143342edd:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar7);
          if (cVar6 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar2,&local_30);
            goto LAB_143343091;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_30,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar7,&local_30,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_30);
    }
  }
LAB_143343091:
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar7 = (longlong *)FUN_147972568(local_28);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x1c8))(plVar7,uVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143343282 FUN_143343282 body=66 status=ok
// SIG undefined FUN_143343282(void)

void FUN_143343282(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_147972568();
    if (lVar2 != 0) {
      uVar1 = *(uint *)(param_2 + 0xc);
      uVar3 = FUN_1477b91ee(lVar2);
      FUN_1477b3340(uVar3,(ulonglong)uVar1 | 0xffffffff00000000);
      return;
    }
  }
  return;
}



// FUNCTION 1433432c4 FUN_1433432c4 body=694 status=ok
// SIG undefined FUN_1433432c4(void)

undefined8
FUN_1433432c4(undefined8 param_1,char param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  void *_Dst;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_108 [32];
  code **local_e8;
  longlong local_d8 [5];
  float local_b0;
  float local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = (longlong *)FUN_147972568();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x140))(plVar3,param_5,&local_b0,&local_ac);
    if ((int)plVar3[1] != 0) {
      _Dst = (void *)FUN_14001cc68(0xa0);
      memset(_Dst,0,0xa0);
      *(undefined4 *)((longlong)_Dst + 0x90) = 0;
      *(undefined4 *)((longlong)_Dst + 0x94) = 0x2000;
      *(undefined8 *)((longlong)_Dst + 0x98) = 0;
      if (DAT_14cabaf98 != _Dst) {
        DAT_14cabaf98 = _Dst;
        FUN_145970f84(&DAT_14cabaf98);
      }
      local_8c = (int)local_ac;
      local_90 = (int)local_b0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_98 = *(uint *)(plVar3 + 1);
      lVar1 = *plVar3;
      local_a8 = 0;
      uStack_a0 = 0;
      local_94 = (int)local_98 / local_90;
      local_88 = (float)local_94 / (float)(int)local_ac;
      FUN_14703e832(&local_a8,local_98);
      iVar2 = (int)uStack_a0;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + local_98);
      if ((uint)(uStack_a0._4_4_ - iVar2) < local_98) {
        FUN_1405b572a(&local_a8);
      }
      if (0 < (int)local_98) {
        lVar4 = 0;
        do {
          fVar6 = *(float *)(lVar1 + lVar4 * 4);
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
          if (fVar6 <= -1.0) {
            fVar6 = -1.0;
          }
          *(short *)(local_a8 + lVar4 * 2) = (short)(int)(fVar6 * 32767.0);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)local_98);
      }
      FUN_147034d54(local_d8,&local_a8);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_147034d54(DAT_14cabaf98,local_d8);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      if (param_2 == '\x01') {
        local_e8 = local_78;
        local_68 = 0;
        local_58 = &PTR_LAB_14a570350;
        local_50 = param_5;
        local_78[0] = FUN_1433515e4;
        FUN_14369f278((longlong)DAT_14cabaf98 + 0x28,DAT_14cabaf98,param_3,param_4);
      }
      else if (param_2 == '\0') {
        uVar5 = FUN_14369f462((longlong)DAT_14cabaf98 + 0x28,DAT_14cabaf98,param_3,param_4);
        if (DAT_14cabaf98 != (void *)0x0) {
          DAT_14cabaf98 = (void *)0x0;
          FUN_145970f84(&DAT_14cabaf98);
        }
        goto LAB_143343322;
      }
    }
  }
  uVar5 = 0;
LAB_143343322:
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334357c FUN_14334357c body=315 status=ok
// SIG undefined FUN_14334357c(void)

void FUN_14334357c(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0 && param_2 != 0) {
    cVar4 = FUN_146269f19();
    if (cVar4 == '\0') {
      local_58 = 0;
      local_48 = &PTR_LAB_14a5703d0;
      local_68 = &LAB_143351866;
      local_40 = param_1;
      local_38 = param_2;
      local_30 = param_3;
      FUN_1415826cc();
    }
    else {
      lVar6 = FUN_147972568(param_1);
      if ((lVar6 != 0) && (FUN_1433438ce(lVar6,&local_78,param_2), local_70 != (longlong *)0x0)) {
        iVar5 = (int)local_70[1];
        do {
          if (iVar5 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_70[1];
          bVar8 = iVar5 == iVar3;
          if (bVar8) {
            *(int *)(local_70 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar7 = local_70;
        } while (!bVar8);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
        if (plVar7 != (longlong *)0x0) {
          if (CONCAT44(uStack_74,local_78) != 0) {
            local_78 = *(undefined4 *)(param_3 + 0xc);
            uStack_74 = 0xffffffff;
            FUN_1477d5f8e();
          }
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433436e0 FUN_1433436e0 body=492 status=ok
// SIG undefined FUN_1433436e0(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000143343852 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_1433436e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  code *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1433438ce(param_1,&local_98,param_2);
  if (local_90 != (longlong *)0x0) {
    iVar6 = (int)local_90[1];
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_90[1];
      bVar10 = iVar6 == iVar3;
      if (bVar10) {
        *(int *)(local_90 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
      plVar7 = local_90;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_98 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_98 + 0x458);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_a0 = *param_3;
        lVar2 = param_3[1];
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        local_88 = (code *)0x0;
        puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
        *puVar4 = &PTR_FUN_14a570600;
        plVar8 = puVar4 + 1;
        *plVar8 = param_1;
        puVar4[2] = local_98;
        puVar4[3] = plVar7;
        puVar4[4] = local_a0;
        puVar4[5] = lVar2;
        if (plVar8 == (longlong *)0x0) {
          pcVar9 = (code *)0x0;
        }
        else {
          pcVar9 = FUN_14335231e;
          local_88 = FUN_14335231e;
        }
        puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar5 = 0;
        puVar5[2] = pcVar9;
        puVar5[4] = puVar4;
        local_78 = 0;
        *(undefined4 *)(puVar5 + 8) = local_58;
        *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_54;
        *(undefined4 *)(puVar5 + 9) = uStack_50;
        *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_4c;
        *(undefined4 *)(puVar5 + 6) = local_68;
        *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_64;
        *(undefined4 *)(puVar5 + 7) = uStack_60;
        *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_5c;
        if (plVar8 != (longlong *)0x0) {
          local_88 = (code *)0x0;
        }
        if (puVar5 != (undefined8 *)0x0) {
          puVar4 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar5;
          *puVar4 = puVar5;
          if (local_88 != (code *)0x0) {
            (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
          }
        }
        iVar6 = iVar6 + 1;
      }
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_143343877;
    }
  }
  iVar6 = 0;
LAB_143343877:
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433438ce FUN_1433438ce body=320 status=ok
// SIG undefined FUN_1433438ce(void)

longlong * FUN_1433438ce(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)0x0;
  lVar4 = 0;
  do {
    if (*(longlong *)(*(longlong *)(param_1 + 0xb38) + lVar4) == param_3) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb48) + lVar4 * 2);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xb48) + 8 + lVar4 * 2);
      if (plVar5 == (longlong *)0x0) {
        if (lVar3 != 0) {
          *param_2 = lVar3;
          param_2[1] = 0;
          goto LAB_14334397d;
        }
        plVar5 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (lVar3 != 0) {
          *param_2 = lVar3;
          param_2[1] = (longlong)plVar5;
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          goto LAB_143343941;
        }
      }
      break;
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x20);
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1477b9de4(param_1 + 0xce0,&local_30,*(undefined4 *)(param_3 + 0xc));
    *param_2 = local_30;
    param_2[1] = (longlong)local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
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
    }
  }
  if (plVar5 != (longlong *)0x0) {
LAB_143343941:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_14334397d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143343a12 FUN_143343a12 body=155 status=ok
// SIG undefined FUN_143343a12(void)

ulonglong FUN_143343a12(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  uint local_34;
  uint local_2c;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
    uVar5 = 0;
    goto LAB_143343a8f;
  }
  local_20 = 0;
  uStack_18 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x3e0) + 0x68);
  if ((lVar3 == 0) || (iVar1 = *(int *)(*(longlong *)(param_2 + 0x3e0) + 0x60), iVar1 == 0)) {
LAB_143343a7a:
    uVar5 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 8))(plVar2,lVar3,iVar1,local_38);
    if (cVar4 == '\0') goto LAB_143343a7a;
    *(int *)(param_1 + 0x48) = (int)((ulonglong)local_2c / ((ulonglong)local_34 * 2));
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
LAB_143343a8f:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143343ac2 FUN_143343ac2 body=682 status=ok
// SIG undefined FUN_143343ac2(void)

undefined8 * FUN_143343ac2(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  int iStack_5c;
  float fStack_58;
  undefined1 uStack_54;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == (longlong *)0x0) || (*(int *)((longlong)param_2 + 0x36c) == 0)) {
LAB_143343ba6:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    do {
      FUN_14375bb7a(DAT_14cb0d2b0);
      cVar2 = *(char *)((longlong)param_2 + 0x181);
      cVar1 = cVar2;
      if (param_3 != '\0') {
        cVar1 = '\x02';
      }
      if (cVar2 == '\x05') {
        cVar1 = cVar2;
      }
      if (cVar2 == '\0') {
        cVar1 = cVar2;
      }
      if (cVar2 == '\x03') {
        cVar1 = cVar2;
      }
      if (cVar1 != '\0') {
        if (cVar1 == '\x05') {
          if ((*(byte *)(param_2[0x7c] + 0xe4) & 0x40) != 0) goto LAB_143343ba6;
          puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
          puVar3[1] = 0;
          puVar3[2] = 0;
          *(undefined8 *)((longlong)puVar3 + 0x11) = 0;
          *(undefined8 *)((longlong)puVar3 + 0x19) = 0;
          puVar3[5] = param_1;
          *puVar3 = &PTR_FUN_14a56cd70;
          puVar3[6] = 0;
          puVar3[7] = 0;
          *(undefined4 *)(puVar3 + 8) = 3;
          fVar6 = (float)FUN_147d3f71a(param_2);
          *(int *)((longlong)puVar3 + 0x44) = (int)fVar6;
          *(undefined4 *)(puVar3 + 9) = 0;
          *(undefined2 *)((longlong)puVar3 + 0x4c) = 0x10;
          puVar3[10] = 0;
          *(undefined4 *)(puVar3 + 0xb) = 0;
          *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
          *(undefined1 *)(puVar3 + 0xc) = 0;
          *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x36c);
          fStack_58 = 0.0;
          uStack_54 = 0;
          local_68 = 0;
          uStack_60 = 0;
          iStack_5c = 0;
          local_50 = 0;
          uStack_48 = 0;
          plVar4 = (longlong *)FUN_1412feae2();
          plVar4 = (longlong *)
                   (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(param_2[0x7c] + 0x8c));
          if (plVar4 == (longlong *)0x0) {
            puVar3[7] = 0;
LAB_143343d13:
            cVar2 = (**(code **)(*param_2 + 0x3f8))(param_2);
            if (cVar2 == '\0') {
              *(undefined1 *)((longlong)param_2 + 0x181) = 1;
              *(undefined4 *)((longlong)param_2 + 0x36c) = 0;
              *(undefined4 *)(param_2[0x7c] + 0x60) = 0;
              lVar5 = param_2[0x7c];
              if (*(longlong *)(lVar5 + 0x68) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 *)(lVar5 + 0x68) = 0;
              *(undefined8 *)(lVar5 + 0x70) = 0;
            }
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
            puVar3 = (undefined8 *)0x0;
          }
          else {
            lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
            puVar3[7] = lVar5;
            if (lVar5 == 0) goto LAB_143343d13;
            cVar2 = FUN_14795d85e(lVar5,param_2,&local_68);
            if (cVar2 == '\0') {
              if (puVar3[7] != 0) {
                *(byte *)(param_2[0x7c] + 0xe4) = *(byte *)(param_2[0x7c] + 0xe4) | 0x40;
              }
              goto LAB_143343d13;
            }
            *(undefined4 *)(param_2 + 0x6e) = uStack_60;
            *(byte *)((longlong)param_2 + 0x34d) = *(byte *)((longlong)param_2 + 0x34d) & 0xf3 | 8;
            *(undefined4 *)((longlong)param_2 + 0x36c) = local_68._4_4_;
            if (iStack_5c != 0) {
              *(int *)((longlong)param_2 + 0x3b4) = iStack_5c;
            }
            if ((fStack_58 != 0.0) || (NAN(fStack_58))) {
              *(float *)(param_2 + 0x20) = fStack_58;
            }
          }
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
          }
          if (cVar1 == '\x03') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
          }
        }
        break;
      }
      local_78 = 0;
      (**(code **)(*param_1 + 0x60))(param_1,param_2,1,0);
    } while (*(int *)((longlong)param_2 + 0x36c) != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 143343da1 FUN_143343da1 body=49 status=ok
// SIG undefined FUN_143343da1(void)

void FUN_143343da1(void)

{
  FUN_1411d370f(DAT_14cabafa0,DAT_14cabafa8);
  if (DAT_14cabafa0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143343dd2 FUN_143343dd2 body=49 status=ok
// SIG undefined FUN_143343dd2(void)

void FUN_143343dd2(void)

{
  FUN_1411d370f(DAT_14cabafb0,DAT_14cabafb8);
  if (DAT_14cabafb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143343e04 FUN_143343e04 body=254 status=ok
// SIG undefined FUN_143343e04(void)

void FUN_143343e04(char param_1,int param_2,uint param_3,byte param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  if (param_2 - 9U < 0xfffffff8 || param_3 - 9 < 0xfffffff8) {
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 0x40;
    if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar1) < 0x40) {
      FUN_145ca0cd4(param_5);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_5),0,0x100);
    return;
  }
  if (param_1 == '\x01' && param_2 == 6) {
    iVar1 = *(int *)((longlong)param_5 + 0xc);
    iVar2 = *(int *)(DAT_14cabafb0 + -8 + (ulonglong)param_3 * 0x10);
    _Src = *(void **)(DAT_14cabafb0 + -0x10 + (ulonglong)param_3 * 0x10);
  }
  else {
    lVar3 = (ulonglong)((param_2 + param_3 * 8 + (uint)param_4 * 0x40) - 9) * 0x10;
    iVar1 = *(int *)((longlong)param_5 + 0xc);
    iVar2 = *(int *)(DAT_14cabafa0 + 8 + lVar3);
    _Src = *(void **)(DAT_14cabafa0 + lVar3);
  }
  *(int *)(param_5 + 1) = iVar2;
  if (iVar2 == 0 && iVar1 == 0) {
    *(undefined4 *)((longlong)param_5 + 0xc) = 0;
  }
  else {
    FUN_1470345a0(param_5,iVar2);
    if (iVar2 != 0) {
      memcpy((void *)*param_5,_Src,(longlong)iVar2 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 143343f02 FUN_143343f02 body=1901 status=ok
// SIG undefined FUN_143343f02(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143343f02(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  undefined8 *puVar30;
  bool bVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  ulonglong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_1477b9c02();
  lVar9 = (ulonglong)(param_2 == 2) * 4;
  if ((*(byte *)(param_1 + 0x5a8) & 1) == 0) {
    uVar32 = 0xbf800000;
  }
  else {
    uVar32 = 0;
  }
  uVar2 = *(undefined4 *)(&DAT_14a566cd0 + lVar9);
  uVar3 = *(undefined4 *)(&DAT_14a566cd8 + lVar9);
  *(undefined4 *)(param_1 + 0xb70) = 0;
  *(undefined4 *)(param_1 + 0xb74) = uVar2;
  *(undefined8 *)(param_1 + 0xb78) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xb80) = 1;
  *(undefined4 *)(param_1 + 0xb84) = uVar3;
  *(undefined8 *)(param_1 + 0xb88) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xb90) = 2;
  *(undefined4 *)(param_1 + 0xb94) = uVar32;
  *(undefined8 *)(param_1 + 0xb98) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xba0) = 3;
  *(undefined8 *)(param_1 + 0xba4) = 0xbf800000;
  *(undefined8 *)(param_1 + 0xbac) = 0x43f800000;
  *(undefined8 *)(param_1 + 0xbb4) = 0x43520000;
  *(undefined8 *)(param_1 + 0xbbc) = 0x53f800000;
  *(undefined8 *)(param_1 + 0xbc4) = 0x43160000;
  *(undefined8 *)(param_1 + 0xbcc) = 0x63f800000;
  *(undefined8 *)(param_1 + 0xbd4) = 0x41700000;
  *(undefined8 *)(param_1 + 0xbdc) = 0x73f800000;
  *(undefined8 *)(param_1 + 0xbe4) = 0x43ac8000;
  *(undefined8 *)(param_1 + 0xbec) = 0x83f800000;
  *(undefined8 *)(param_1 + 0xbf4) = 0x43340000;
  *(undefined8 *)(param_1 + 0xbfc) = 0x93f800000;
  *(undefined8 *)(param_1 + 0xc04) = 0x437a0000;
  *(undefined8 *)(param_1 + 0xc0c) = 0xa3f800000;
  *(undefined8 *)(param_1 + 0xc14) = 0x42dc0000;
  *(undefined4 *)(param_1 + 0xc1c) = 0x3f800000;
  if (param_2 != 2) {
    local_378 = local_378 & 0xffffffff00000000;
    uVar20 = 0;
    do {
      if ((uVar20 != 2) || ((*(byte *)(param_1 + 0x5a8) & 1) != 0)) {
        uVar10 = FUN_14704214e(uVar20 & 0xffffffff);
        local_388 = &DAT_14c872ce8;
        bVar7 = FUN_1414d73b6(DAT_14c872ce0,L"AudioChannelAzimuthMap",uVar10,&local_378);
        if (((uint)local_378 < 0x168 & bVar7) == 1) {
          fVar33 = (float)(int)(uint)local_378;
          uVar13 = 0;
          pfVar11 = (float *)(param_1 + 0xb74);
          do {
            if ((*pfVar11 == fVar33) && (!NAN(*pfVar11) && !NAN(fVar33))) {
              if (uVar20 != uVar13) {
                FUN_14704214e();
              }
              goto LAB_1433445d5;
            }
            uVar13 = uVar13 + 1;
            pfVar11 = pfVar11 + 4;
          } while (uVar13 != 0xb);
          *(float *)(param_1 + 0xb74 + uVar20 * 0x10) = fVar33;
        }
      }
LAB_1433445d5:
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0xb);
  }
  puVar12 = (ulonglong *)(param_1 + 0xc20);
  *(undefined4 *)(param_1 + 0xc28) = 0;
  if (*(int *)(param_1 + 0xc2c) < 0) {
    FUN_1477cce96(puVar12);
  }
  iVar23 = *(int *)(param_1 + 0xcd0);
  if ((longlong)iVar23 != 0) {
    lVar9 = *(longlong *)(param_1 + 0xcc8);
    lVar29 = 0;
    do {
      lVar16 = (longlong)*(int *)(lVar9 + lVar29);
      if ((lVar16 != 3) && (lVar16 = lVar16 * 0x10, 0.0 <= *(float *)(param_1 + 0xb74 + lVar16))) {
        iVar26 = *(int *)(param_1 + 0xc28);
        uVar8 = iVar26 + 1;
        *(uint *)(param_1 + 0xc28) = uVar8;
        if (*(uint *)(param_1 + 0xc2c) < uVar8) {
          FUN_1477ccef6(puVar12);
        }
        puVar17 = (undefined4 *)(lVar16 + param_1 + 0xb70);
        uVar32 = puVar17[1];
        uVar2 = puVar17[2];
        uVar3 = puVar17[3];
        puVar1 = (undefined4 *)(*puVar12 + (longlong)iVar26 * 0x10);
        *puVar1 = *puVar17;
        puVar1[1] = uVar32;
        puVar1[2] = uVar2;
        puVar1[3] = uVar3;
      }
      lVar29 = lVar29 + 4;
    } while ((longlong)iVar23 * 4 != lVar29);
  }
  iVar23 = *(int *)(param_1 + 0xc28);
  if (1 < (longlong)iVar23) {
    uVar20 = *puVar12;
    memset(local_368,0,0x2f0);
    local_370 = (longlong)iVar23 * 0x10 + uVar20 + -0x10;
    local_378 = uVar20;
    fVar33 = logf((float)iVar23);
    local_368[0] = (int)(longlong)(fVar33 + fVar33);
    puVar12 = &local_378;
    do {
      puVar14 = (undefined8 *)*puVar12;
      puVar18 = (undefined8 *)puVar12[1];
      iVar23 = (int)puVar12[2];
      iVar26 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar14) >> 4);
      uVar8 = iVar26 + 1;
      puVar19 = puVar14;
      puVar15 = puVar14;
      puVar21 = puVar18;
      if (iVar23 != 0) {
LAB_1433441d8:
        if (8 < (int)uVar8) {
          uVar10 = puVar15[(ulonglong)(uVar8 >> 1) * 2];
          uVar4 = (puVar15 + (ulonglong)(uVar8 >> 1) * 2)[1];
          uVar5 = puVar15[1];
          puVar15[(ulonglong)(uVar8 >> 1) * 2] = *puVar15;
          (puVar15 + (ulonglong)(uVar8 >> 1) * 2)[1] = uVar5;
          *puVar15 = uVar10;
          puVar15[1] = uVar4;
          puVar27 = puVar21 + 2;
          puVar14 = puVar15;
          do {
            puVar6 = puVar14 + 2;
            puVar22 = puVar14 + 2;
            do {
              puVar14 = puVar22;
              puVar30 = puVar6;
              if (puVar21 < puVar14) break;
              puVar6 = puVar30 + 2;
              puVar22 = puVar14 + 2;
            } while (*(float *)((longlong)puVar14 + 4) < *(float *)((longlong)puVar15 + 4) ||
                     *(float *)((longlong)puVar14 + 4) == *(float *)((longlong)puVar15 + 4));
            puVar6 = puVar27 + -4;
            do {
              puVar22 = puVar27;
              puVar28 = puVar6;
              puVar27 = puVar22 + -2;
              if (puVar27 <= puVar15) break;
              puVar6 = puVar28 + -2;
            } while (*(float *)((longlong)puVar15 + 4) < *(float *)((longlong)puVar22 + -0xc) ||
                     *(float *)((longlong)puVar15 + 4) == *(float *)((longlong)puVar22 + -0xc));
            if (puVar27 < puVar14) goto LAB_14334428b;
            uVar10 = *puVar14;
            uVar4 = puVar14[1];
            uVar5 = puVar22[-1];
            *puVar14 = *puVar27;
            puVar14[1] = uVar5;
            *puVar27 = uVar10;
            puVar22[-1] = uVar4;
          } while( true );
        }
        for (; puVar14 = puVar15, puVar18 = puVar15, puVar15 < puVar21; puVar21 = puVar21 + -2) {
          while (puVar19 = puVar14, puVar14 = puVar18 + 2, puVar14 <= puVar21) {
            pfVar11 = (float *)((longlong)puVar18 + 0x14);
            puVar18 = puVar14;
            if (*pfVar11 < *(float *)((longlong)puVar19 + 4) ||
                *pfVar11 == *(float *)((longlong)puVar19 + 4)) {
              puVar14 = puVar19;
            }
          }
          local_78 = *puVar19;
          uStack_70 = puVar19[1];
          uVar4 = local_78;
          uVar5 = uStack_70;
          uVar10 = puVar21[1];
          *puVar19 = *puVar21;
          puVar19[1] = uVar10;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          *(undefined4 *)puVar21 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar21 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_70._4_4_;
          local_78 = uVar4;
          uStack_70 = uVar5;
        }
        goto LAB_143344563;
      }
LAB_143344335:
      if (uVar8 != 0) {
        iVar23 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
        iVar26 = iVar23;
joined_r0x00014334435c:
        do {
          iVar25 = iVar23 * 2 + 1;
          if (iVar25 < (int)uVar8) {
            iVar24 = iVar23 * 2 + 2;
            if ((iVar24 < (int)uVar8) &&
               (fVar33 = *(float *)((longlong)puVar14 + (longlong)iVar25 * 0x10 + 4),
               pfVar11 = (float *)((longlong)puVar14 + (longlong)iVar24 * 0x10 + 4),
               fVar33 < *pfVar11 || fVar33 == *pfVar11)) {
              iVar25 = iVar24;
            }
            fVar33 = *(float *)((longlong)puVar14 + (longlong)iVar25 * 0x10 + 4);
            pfVar11 = (float *)((longlong)puVar14 + (longlong)iVar23 * 0x10 + 4);
            if (*pfVar11 <= fVar33 && fVar33 != *pfVar11) {
              puVar21 = puVar14 + (longlong)iVar23 * 2;
              puVar18 = puVar14 + (longlong)iVar25 * 2;
              local_78 = *puVar21;
              uStack_70 = puVar21[1];
              uVar4 = local_78;
              uVar5 = uStack_70;
              uVar10 = puVar18[1];
              *puVar21 = *puVar18;
              puVar21[1] = uVar10;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)puVar18 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar18 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_70._4_4_;
              iVar23 = iVar25;
              local_78 = uVar4;
              uStack_70 = uVar5;
              goto joined_r0x00014334435c;
            }
          }
          bVar31 = iVar26 != 0;
          iVar23 = iVar26 + -1;
          iVar26 = iVar23;
        } while (bVar31);
        if (1 < (int)uVar8) {
          uVar20 = (ulonglong)uVar8 - 1;
          local_78 = *puVar14;
          uStack_70 = puVar14[1];
          uVar4 = local_78;
          uVar5 = uStack_70;
          uVar10 = (puVar14 + uVar20 * 2)[1];
          *puVar14 = puVar14[uVar20 * 2];
          puVar14[1] = uVar10;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar21 = puVar14 + uVar20 * 2;
          *(undefined4 *)puVar21 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar21 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_70._4_4_;
          local_78 = uVar4;
          uStack_70 = uVar5;
          if (uVar8 != 2) {
            do {
              iVar23 = 0;
              iVar25 = 1;
              iVar26 = 0;
              do {
                iVar23 = iVar23 + 2;
                iVar24 = iVar25;
                if (((longlong)iVar23 < (longlong)uVar20) &&
                   (fVar33 = *(float *)((longlong)puVar14 + (longlong)iVar25 * 0x10 + 4),
                   pfVar11 = (float *)((longlong)puVar14 + (longlong)iVar23 * 0x10 + 4),
                   fVar33 < *pfVar11 || fVar33 == *pfVar11)) {
                  iVar24 = iVar23;
                }
                fVar33 = *(float *)((longlong)puVar14 + (longlong)iVar24 * 0x10 + 4);
                pfVar11 = (float *)((longlong)puVar14 + (longlong)iVar26 * 0x10 + 4);
                if (fVar33 < *pfVar11 || fVar33 == *pfVar11) break;
                puVar21 = puVar14 + (longlong)iVar26 * 2;
                puVar18 = puVar14 + (longlong)iVar24 * 2;
                uVar10 = *puVar21;
                uVar4 = puVar21[1];
                uVar5 = puVar18[1];
                *puVar21 = *puVar18;
                puVar21[1] = uVar5;
                *puVar18 = uVar10;
                puVar18[1] = uVar4;
                iVar23 = iVar24 * 2;
                iVar25 = iVar24 * 2 + 1;
                iVar26 = iVar24;
              } while ((longlong)iVar25 < (longlong)uVar20);
              uVar13 = uVar20 - 1;
              local_78 = *puVar14;
              uStack_70 = puVar14[1];
              uVar4 = local_78;
              uVar5 = uStack_70;
              uVar10 = (puVar14 + uVar13 * 2)[1];
              *puVar14 = puVar14[uVar13 * 2];
              puVar14[1] = uVar10;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar21 = puVar14 + uVar13 * 2;
              *(undefined4 *)puVar21 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar21 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_70._4_4_;
              bVar31 = 2 < uVar20;
              uVar20 = uVar13;
              local_78 = uVar4;
              uStack_70 = uVar5;
            } while (bVar31);
          }
        }
      }
LAB_143344563:
      puVar12 = puVar12 + -3;
    } while (&local_378 <= puVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14334428b:
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  uVar4 = local_78;
  uVar5 = uStack_70;
  uVar10 = puVar22[-1];
  *puVar15 = *puVar27;
  puVar15[1] = uVar10;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)puVar27 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar22 + -0xc) = local_78._4_4_;
  *(undefined4 *)(puVar22 + -1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar22 + -4) = uStack_70._4_4_;
  iVar23 = iVar23 + -1;
  puVar22 = puVar22 + -4;
  local_78 = uVar4;
  uStack_70 = uVar5;
  if ((longlong)puVar28 - (longlong)puVar19 < (longlong)puVar18 - (longlong)puVar30) {
    if (puVar14 < puVar21) {
      *puVar12 = (ulonglong)puVar14;
      puVar12[1] = (ulonglong)puVar21;
      *(int *)(puVar12 + 2) = iVar23;
      puVar12 = puVar12 + 3;
    }
    puVar14 = puVar15;
    puVar18 = puVar28;
    if (puVar27 <= puVar15 + 2) goto LAB_143344563;
  }
  else {
    if (puVar15 + 2 < puVar27) {
      *puVar12 = (ulonglong)puVar15;
      puVar12[1] = (ulonglong)puVar22;
      *(int *)(puVar12 + 2) = iVar23;
      puVar12 = puVar12 + 3;
    }
    puVar15 = puVar30;
    puVar22 = puVar21;
    puVar18 = puVar21;
    if (puVar21 <= puVar14) goto LAB_143344563;
  }
  iVar26 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar15) >> 4);
  uVar8 = iVar26 + 1;
  puVar19 = puVar15;
  puVar15 = puVar14;
  puVar21 = puVar22;
  if (iVar23 == 0) goto LAB_143344335;
  goto LAB_1433441d8;
}



// FUNCTION 143344670 FUN_143344670 body=69 status=ok
// SIG undefined FUN_143344670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143344670(void)

{
  _DAT_14cabafc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433446b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabafc8,1);
  return;
}



// FUNCTION 1433446b5 FUN_1433446b5 body=69 status=ok
// SIG undefined FUN_1433446b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433446b5(void)

{
  _DAT_14cabafd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433446f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabafd8,1);
  return;
}



// FUNCTION 1433446fa FUN_1433446fa body=69 status=ok
// SIG undefined FUN_1433446fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433446fa(void)

{
  _DAT_14cabafe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334473c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabaff0,1);
  return;
}



// FUNCTION 14334473f FUN_14334473f body=69 status=ok
// SIG undefined FUN_14334473f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334473f(void)

{
  _DAT_14cabb000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143344781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb008,1);
  return;
}



// FUNCTION 143344784 FUN_143344784 body=69 status=ok
// SIG undefined FUN_143344784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143344784(void)

{
  _DAT_14cabb018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433447c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb020,1);
  return;
}



// FUNCTION 1433447c9 FUN_1433447c9 body=69 status=ok
// SIG undefined FUN_1433447c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433447c9(void)

{
  _DAT_14cabb028 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334480b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb030,1);
  return;
}



// FUNCTION 14334480e FUN_14334480e body=69 status=ok
// SIG undefined FUN_14334480e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334480e(void)

{
  _DAT_14cabb040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143344850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb048,1);
  return;
}



// FUNCTION 143344853 FUN_143344853 body=69 status=ok
// SIG undefined FUN_143344853(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143344853(void)

{
  _DAT_14cabb050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143344895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb058,1);
  return;
}



// FUNCTION 143344898 FUN_143344898 body=69 status=ok
// SIG undefined FUN_143344898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143344898(void)

{
  _DAT_14cabb060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433448da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb068,1);
  return;
}



// FUNCTION 1433448dd FUN_1433448dd body=69 status=ok
// SIG undefined FUN_1433448dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433448dd(void)

{
  _DAT_14cabb070 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334491f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb078,1);
  return;
}



// FUNCTION 143344922 FUN_143344922 body=644 status=ok
// SIG undefined FUN_143344922(void)

void FUN_143344922(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_3;
  if (param_1 != 0) {
    FUN_140056680(&local_58,
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)(int)(param_2 * 3)));
    puVar18 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar18 = *(undefined2 **)(param_1 + 0x10);
    }
    local_70 = *(undefined4 *)(param_1 + 0x20);
    puVar15 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar15 = local_58;
    }
    local_78 = param_1;
    FUN_140047918(local_60,L"%sName=%s,Instance=0x%p,Id=%u",puVar15,puVar18);
    iVar4 = *(int *)(param_1 + 0x60);
    local_68 = (ulonglong)param_2;
    if (iVar4 == 0) {
      uVar13 = 1;
      uVar19 = 0;
      iVar12 = 0;
      iVar6 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x48);
      }
      uVar14 = *puVar8;
      if (uVar14 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        uVar19 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar19;
        }
        iVar12 = 0;
        do {
          if (uVar13 == uVar19) goto LAB_143344a42;
          iVar12 = iVar12 + 0x20;
          uVar14 = puVar8[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar19 = 0;
        iVar12 = 0;
      }
      uVar13 = (ulonglong)(-uVar14 & uVar14);
      uVar3 = uVar13 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 != iVar4) {
      local_68 = (ulonglong)(param_2 + 1);
      uVar14 = 0xffffffff;
      do {
        lVar16 = *(longlong *)(param_1 + 0x38);
        plVar5 = *(longlong **)(lVar16 + 0x10 + (longlong)iVar6 * 0x38);
        if (plVar5 != (longlong *)0x0) {
          iVar7 = (int)plVar5[1];
          do {
            if (iVar7 == 0) goto LAB_143344aee;
            LOCK();
            iVar9 = (int)plVar5[1];
            bVar20 = iVar7 == iVar9;
            if (bVar20) {
              *(int *)(plVar5 + 1) = iVar7 + 1;
              iVar9 = iVar7;
            }
            iVar7 = iVar9;
            UNLOCK();
          } while (!bVar20);
          lVar16 = *(longlong *)(lVar16 + (longlong)iVar6 * 0x38 + 8);
          if (lVar16 != 0) {
            FUN_143344922(lVar16,local_68,local_60);
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
        }
LAB_143344aee:
        uVar14 = uVar14 & ~(uint)uVar13;
        puVar8 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x48);
        }
        iVar7 = *(int *)(param_1 + 0x60);
        iVar6 = (int)uVar19;
        lVar16 = (longlong)iVar6;
        uVar11 = puVar8[lVar16] & uVar14;
        if (uVar11 == 0) {
          iVar9 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar9 = iVar7 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar17 = 0;
            do {
              uVar11 = puVar8[lVar16 + lVar17 + 1];
              if (uVar11 != 0) {
                uVar19 = (ulonglong)(iVar6 + (int)lVar17 + 1);
                uVar14 = 0xffffffff;
                goto LAB_143344b61;
              }
              iVar12 = iVar12 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar10 - lVar16 != lVar17);
            uVar14 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar19 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar7;
        }
        else {
LAB_143344b61:
          uVar13 = (ulonglong)(-uVar11 & uVar11);
          uVar3 = uVar13 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar6 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar6) {
            iVar6 = iVar7;
          }
        }
      } while (iVar6 != iVar4);
    }
LAB_143344a42:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143344ba7 FUN_143344ba7 body=1151 status=ok
// SIG undefined FUN_143344ba7(void)

void FUN_143344ba7(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_108 [32];
  longlong local_e8;
  wchar_t *local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  longlong local_a0;
  undefined2 *local_98;
  longlong local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 != 0) {
    local_b8 = param_2;
    local_b0 = param_4;
    FUN_140056680(&local_58,
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)((int)param_4 * 3)));
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    lVar7 = FUN_14105a990();
    local_c0 = param_1;
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
       (iVar10 = *(int *)(param_1 + 0x100), (longlong)iVar10 != 0)) {
      lVar7 = *(longlong *)(param_1 + 0xf8);
      lVar15 = 0;
      do {
        lVar5 = *(longlong *)(lVar7 + lVar15);
        if (lVar5 == 0) {
          FUN_140056680(&local_88,&DAT_149e01fe8);
        }
        else {
          local_78 = *(undefined2 **)(lVar5 + 0x18);
          FUN_1400021e4(&local_78,&local_88);
        }
        puVar11 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar11 = local_88;
        }
        FUN_140002266(&local_78,L"[%s]",puVar11);
        iVar6 = local_70 + -1;
        if (local_70 == 0) {
          iVar6 = 0;
        }
        FUN_1400020e8(&local_68,local_78,iVar6);
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar10 * 8 != lVar15);
    }
    lVar7 = local_c0;
    puVar11 = local_68;
    if ((int)uStack_60 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    lVar15 = *local_b8;
    uVar9 = 0;
    if (lVar15 != 0) {
      uVar9 = *(undefined4 *)(lVar15 + 0x20);
    }
    local_88 = *(undefined2 **)(local_c0 + 0x18);
    FUN_1400021e4(&local_88,&local_78);
    puVar14 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar14 = local_78;
    }
    puVar13 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar13 = local_58;
    }
    local_d0 = param_6;
    local_e0 = (wchar_t *)CONCAT44(local_e0._4_4_,uVar9);
    local_e8 = lVar15;
    local_d8 = puVar11;
    FUN_140047918(param_5,L"%sName=%s,Instance=0x%p,Id=%u,Fx=%s,[%s]",puVar13,puVar14);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)*(int *)(lVar7 + 0x38) != 0) {
      puVar12 = *(undefined8 **)(local_c0 + 0x30);
      puVar3 = puVar12 + *(int *)(lVar7 + 0x38);
      iVar10 = (int)local_b0;
      do {
        FUN_1433438ce(param_3,&local_78,*puVar12);
        local_98 = (undefined2 *)0x0;
        local_90 = CONCAT44(uStack_6c,local_70);
        if (local_90 != 0) {
          iVar6 = *(int *)(local_90 + 8);
          do {
            if (iVar6 == 0) {
              local_90 = 0;
              break;
            }
            LOCK();
            iVar4 = *(int *)(local_90 + 8);
            bVar16 = iVar6 == iVar4;
            if (bVar16) {
              *(int *)(local_90 + 8) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar16);
          LOCK();
          piVar2 = (int *)((longlong)CONCAT44(uStack_6c,local_70) + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x10))();
          }
          if (local_90 != 0) {
            local_98 = local_78;
          }
        }
        local_e0 = L"Static";
        local_e8 = param_5;
        FUN_143344ba7(*puVar12,&local_98,param_3,iVar10 + 1);
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar3);
    }
    plVar8 = (longlong *)
             FUN_1477c8dc2(local_c0 + 0x40,*(undefined4 *)(param_3 + 0x90),param_3 + 0x90);
    if ((longlong)(int)plVar8[1] != 0) {
      puVar12 = (undefined8 *)*plVar8;
      puVar3 = puVar12 + (int)plVar8[1];
      iVar10 = (int)local_b0;
      do {
        FUN_1433438ce(param_3,&local_78,*puVar12);
        local_a8 = (undefined2 *)0x0;
        local_a0 = CONCAT44(uStack_6c,local_70);
        if (local_a0 != 0) {
          iVar6 = *(int *)(local_a0 + 8);
          do {
            if (iVar6 == 0) {
              local_a0 = 0;
              break;
            }
            LOCK();
            iVar4 = *(int *)(local_a0 + 8);
            bVar16 = iVar6 == iVar4;
            if (bVar16) {
              *(int *)(local_a0 + 8) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar16);
          LOCK();
          piVar2 = (int *)((longlong)CONCAT44(uStack_6c,local_70) + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x10))();
          }
          if (local_a0 != 0) {
            local_a8 = local_78;
          }
        }
        local_e0 = L"Dynamic";
        local_e8 = param_5;
        FUN_143344ba7(*puVar12,&local_a8,param_3,iVar10 + 1);
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar3);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    param_2 = local_b8;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
      param_2 = local_b8;
    }
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143345028 FUN_143345028 body=162 status=ok
// SIG undefined FUN_143345028(void)

void FUN_143345028(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0xb28);
  FUN_140ee6e38(plVar1,(int)param_2[1]);
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar8 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xb30);
      *(uint *)(param_1 + 0xb30) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xb34) < iVar2 + 1U) {
        FUN_144a2c682(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)(lVar3 + lVar8);
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x60 + *plVar1);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar8 = lVar8 + 0x110;
    } while ((longlong)(int)lVar4 * 0x110 - lVar8 != 0);
  }
  FUN_1477bae88(*(undefined8 *)(param_1 + 0xe10),plVar1);
  return;
}



// FUNCTION 143345120 FUN_143345120 body=6172 status=ok
// SIG undefined FUN_143345120(void)

ulonglong FUN_143345120(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_1a8 [32];
  int local_188;
  char local_171;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158 [2];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 local_f0;
  LARGE_INTEGER local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  LARGE_INTEGER local_98;
  int local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((longlong *)param_1[0x16d] != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x16d] + 0x38))(), cVar3 != '\0')) {
    plVar7 = (longlong *)FUN_145b54fcc();
    lVar15 = plVar7[0x22];
    if (lVar15 == 0) {
      (**(code **)(*plVar7 + 1000))(plVar7);
      lVar15 = plVar7[0x22];
    }
    *(undefined1 *)((longlong)param_1 + 0xc34) = *(undefined1 *)(lVar15 + 0x191);
    *(undefined1 *)((longlong)param_1 + 0xc35) = *(undefined1 *)(lVar15 + 400);
    lVar15 = 0;
    if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
      lVar15 = DAT_14cace0c0;
    }
    *(bool *)(param_1 + 0x14d) = *(longlong **)(lVar15 + 0x98) == param_1;
    (**(code **)(*(longlong *)(param_1[0x16d] + 0x10) + 8))(param_1[0x16d] + 0x10);
    uVar4 = (**(code **)(*(longlong *)param_1[0x16d] + 0xd8))
                      ((longlong *)param_1[0x16d],*(undefined4 *)((longlong)param_1 + 0x7c));
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
    *(int *)(param_1 + 0x188) = (int)param_1[0x10];
    *(undefined4 *)((longlong)param_1 + 0xc3c) = uVar4;
    *(undefined4 *)(param_1 + 0x187) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18a) = *(undefined4 *)((longlong)param_1 + 0x74);
    param_1[0x189] = (longlong)(param_1 + 0x14c);
    plVar7 = param_1 + 0x187;
    *(int *)(param_1 + 0x18b) = (int)param_1[0xe] + (int)param_1[0x28];
    (**(code **)(*(longlong *)param_1[0x16d] + 0xf8))((longlong *)param_1[0x16d],&local_98);
    if (local_90 < 2) {
      cVar3 = FUN_147d5d7c4();
      if (cVar3 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c8338a0) &&
           (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
          FUN_1456d85e6(&DAT_14c8337f0);
          atexit((_func_5014 *)&LAB_142748837);
          _Init_thread_footer(&DAT_14c8338a0);
        }
        FUN_145af9b74(&local_e8);
        iVar13 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_e8.QuadPart);
        if (0 < iVar13) {
          plVar9 = (longlong *)FUN_147364b50();
          (**(code **)(*plVar9 + 0x70))(plVar9,&local_e8);
          if ((char *)local_98.QuadPart != (char *)0x0) {
            FUN_1400020a8();
          }
          local_98.s = local_e8.s;
          local_90 = (int)uStack_e0;
          local_8c = uStack_e0._4_4_;
        }
      }
      if (1 < local_90) goto LAB_1433452f2;
    }
    else {
LAB_1433452f2:
      local_88 = 0.0;
      (**(code **)(*(longlong *)param_1[0x16d] + 0x60))((longlong *)param_1[0x16d],&local_88);
      if (local_88 != 0.0) {
        fVar11 = 0.0;
LAB_143345335:
        local_d8 = (longlong *)0x0;
        uStack_d0 = 0;
        local_e8.QuadPart = 0;
        uStack_e0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_147042096(&local_e8);
        (**(code **)(*(longlong *)param_1[0x16d] + 0x68))((longlong *)param_1[0x16d],fVar11);
        if ((int)uStack_e0 != local_90) {
          if ((int)uStack_e0 + local_90 == 1) goto LAB_14334546a;
          goto LAB_1433453e6;
        }
        if (1 < (int)uStack_e0) {
          lVar15 = 0;
          do {
            uVar14 = *(ushort *)(local_e8.QuadPart + lVar15);
            uVar10 = (ulonglong)uVar14;
            uVar17 = *(ushort *)(local_98.QuadPart + lVar15);
            if (uVar14 == uVar17) {
              if (uVar14 == 0) break;
            }
            else {
              if (0x7f < (uVar17 | uVar14)) goto LAB_1433453ce;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar16 = (ulonglong)uVar17;
              uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar16]) goto LAB_1433453ce;
            }
            lVar15 = lVar15 + 2;
          } while( true );
        }
        goto LAB_14334546a;
      }
    }
LAB_143345484:
    cVar3 = (**(code **)(*(longlong *)param_1[0x16d] + 0x90))((longlong *)param_1[0x16d],plVar7);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)param_1[0x16d] + 0xc0))((longlong *)param_1[0x16d],&local_e8);
      FUN_1477bb642(param_1 + 0x193,&local_e8);
      FUN_147041ad4(&local_e8);
      FUN_143343f02(param_1,(int)param_1[0x197]);
      iVar13 = (int)param_1[0xe] + (int)param_1[0x28];
      param_1[0xb4] = 0;
      param_1[0x18c] =
           (longlong)
           ((double)*(uint *)((longlong)param_1 + 0xc3c) / (double)*(uint *)(param_1 + 0x18a));
      param_1[0x18d] = 0;
      plVar7 = param_1 + 0x19;
      *(int *)(param_1 + 0x19) = iVar13;
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((longlong)param_1 + 0x74);
      *(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xc3c);
      param_1[0x1b] = (longlong)param_1;
      FUN_14797463c(&local_f0);
      FUN_14795f026(param_1,local_f0);
      if ((longlong *)param_1[0x20] != (longlong *)0x0) {
        local_f8 = param_1[0x1b];
        local_108 = (undefined4)*plVar7;
        uStack_104 = *(undefined4 *)((longlong)param_1 + 0xcc);
        uStack_100 = (undefined4)param_1[0x1a];
        uStack_fc = *(undefined4 *)((longlong)param_1 + 0xd4);
        (**(code **)(*(longlong *)param_1[0x20] + 8))();
      }
      if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
        local_118 = param_1[0x1b];
        local_128 = (undefined4)*plVar7;
        uStack_124 = *(undefined4 *)((longlong)param_1 + 0xcc);
        uStack_120 = (undefined4)param_1[0x1a];
        uStack_11c = *(undefined4 *)((longlong)param_1 + 0xd4);
        (**(code **)(*(longlong *)param_1[0x1e] + 8))();
      }
      if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        local_138 = param_1[0x1b];
        local_148 = (undefined4)*plVar7;
        uStack_144 = *(undefined4 *)((longlong)param_1 + 0xcc);
        uStack_140 = (undefined4)param_1[0x1a];
        uStack_13c = *(undefined4 *)((longlong)param_1 + 0xd4);
        (**(code **)(*(longlong *)param_1[0x1c] + 8))();
      }
      lVar15 = param_1[0x1c2];
      if (((*(byte *)(lVar15 + 0x230) & 1) == 0) &&
         (lVar19 = *(longlong *)(lVar15 + 0x30), lVar19 != 0)) {
        *(int *)(lVar15 + 0x21c) = iVar13;
        iVar18 = *(int *)(lVar19 + 0x7c);
        *(int *)(lVar15 + 0x220) = iVar18;
        *(int *)(lVar15 + 0x224) = iVar18 * *(int *)(lVar19 + 0xcb8);
        local_e8.QuadPart = 0;
        local_171 = cVar3;
        FUN_1477c547a(lVar15 + 0x70,&local_e8,iVar13);
        iVar13 = *(int *)(lVar15 + 0x134);
        FUN_1477d0c00(*(undefined8 *)(lVar15 + 0x128),*(undefined4 *)(lVar15 + 0x130));
        *(undefined4 *)(lVar15 + 0x130) = 0;
        if ((iVar13 < 0) && (*(int *)(lVar15 + 0x134) != 0)) {
          FUN_1477d0df8(lVar15 + 0x128);
        }
        if (0 < *(int *)(lVar15 + 0x21c)) {
          iVar13 = 0;
          do {
            lVar19 = *(longlong *)(lVar15 + 0x30);
            uVar4 = *(undefined4 *)(lVar19 + 0xcb8);
            iVar18 = *(int *)(lVar15 + 0x130);
            *(uint *)(lVar15 + 0x130) = iVar18 + 1U;
            if (*(uint *)(lVar15 + 0x134) < iVar18 + 1U) {
              FUN_1477d0e28(lVar15 + 0x128,iVar18);
              lVar19 = *(longlong *)(lVar15 + 0x30);
            }
            local_188 = *(int *)(lVar15 + 0x220);
            FUN_1477d2760((longlong)iVar18 * 0x330 + *(longlong *)(lVar15 + 0x128),lVar19,2,uVar4);
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(lVar15 + 0x21c));
        }
        local_168 = (longlong *)(lVar15 + 0x118);
        FUN_1477c54ec();
        uVar20 = *(uint *)(lVar15 + 0x21c);
        if (0 < (int)uVar20) {
          lVar21 = 0x378;
          lVar19 = 0;
          do {
            lVar2 = *local_168;
            *(undefined8 *)(lVar2 + -0x378 + lVar21) = 0;
            plVar7 = *(longlong **)(lVar2 + -0x370 + lVar21);
            if (plVar7 != (longlong *)0x0) {
              *(undefined8 *)(lVar2 + -0x370 + lVar21) = 0;
              LOCK();
              plVar9 = plVar7 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            *(undefined8 *)(lVar2 + -0x254 + lVar21) = 0xbf800000bf800000;
            puVar8 = (undefined8 *)(lVar2 + -0x24c + lVar21);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8 = (undefined8 *)(lVar2 + -0x23c + lVar21);
            *puVar8 = 0xbf800000bf800000;
            puVar8[1] = 0x41a00000469c4000;
            puVar8 = (undefined8 *)(lVar2 + -0x368 + lVar21);
            *puVar8 = 0;
            puVar8[1] = 0;
            plVar7 = *(longlong **)(lVar2 + -0x358 + lVar21);
            if (plVar7 != (longlong *)0x0) {
              *(undefined8 *)(lVar2 + -0x358 + lVar21) = 0;
              LOCK();
              plVar9 = plVar7 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            *(undefined4 *)(lVar2 + -0x350 + lVar21) = 0;
            puVar8 = (undefined8 *)(lVar2 + -0x2c0 + lVar21);
            *puVar8 = 0;
            puVar8[1] = 0;
            *(undefined8 *)(lVar2 + -0x2b0 + lVar21) = 0;
            iVar13 = *(int *)(lVar2 + -0x29c + lVar21);
            FUN_1477c99d7(*(undefined8 *)(lVar2 + -0x2a8 + lVar21),
                          *(undefined4 *)(lVar2 + -0x2a0 + lVar21));
            *(undefined4 *)(lVar2 + -0x2a0 + lVar21) = 0;
            if ((iVar13 < 0) && (*(int *)(lVar2 + -0x29c + lVar21) != 0)) {
              FUN_1477d13d4(lVar2 + lVar21 + -0x2a8);
            }
            *(undefined4 *)(lVar2 + -0x298 + lVar21) = 0xffffffff;
            *(undefined8 *)(lVar2 + -0x290 + lVar21) = 0xffffffffffffffff;
            if (*(int *)(lVar2 + -0x27c + lVar21) < 0) {
              *(undefined4 *)(lVar2 + lVar21 + -0x280) = 0;
              FUN_14480809c(lVar2 + lVar21 + -0x288,0);
            }
            else {
              *(undefined4 *)(lVar2 + -0x280 + lVar21) = 0;
            }
            local_170 = lVar19;
            if (*(int *)(lVar2 + -0x26c + lVar21) < 0) {
              *(undefined4 *)(lVar2 + lVar21 + -0x270) = 0;
              FUN_14480809c(lVar2 + lVar21 + -0x278,0);
            }
            else {
              *(undefined4 *)(lVar2 + -0x270 + lVar21) = 0;
            }
            lVar19 = lVar2 + lVar21;
            *(undefined4 *)(lVar19 + -0x1a8) = 0xffffffff;
            local_78 = 1;
            local_74 = 0x40a00000;
            local_88 = (float)*(int *)(*(longlong *)(lVar15 + 0x30) + 0x74);
            local_160 = lVar2 + lVar21;
            uStack_84 = 0x41200000;
            uStack_80 = 0x42c80000;
            uStack_7c = 2;
            FUN_147034930(&local_e8,&local_88);
            *(DWORD *)(lVar19 + -0x38) = local_e8.s.LowPart;
            *(LONG *)(lVar19 + -0x34) = local_e8.s.HighPart;
            *(int *)(lVar19 + -0x30) = (int)uStack_e0;
            *(undefined4 *)(lVar19 + -0x2c) = uStack_e0._4_4_;
            *(longlong **)(lVar19 + -0x28) = local_d8;
            *(undefined8 *)(lVar19 + -0x20) = uStack_d0;
            *(undefined4 *)(lVar19 + -0x18) = local_c8;
            *(undefined4 *)(lVar19 + -0x14) = uStack_c4;
            *(undefined4 *)(lVar19 + -0x10) = uStack_c0;
            *(undefined4 *)(lVar19 + -0xc) = uStack_bc;
            *(undefined4 *)(lVar19 + -8) = 0;
            *(undefined1 *)(lVar19 + -0x180) = 0;
            uVar4 = *(undefined4 *)(*(longlong *)(lVar15 + 0x30) + 0x90);
            local_e8.QuadPart = 0x149f63791;
            uStack_e0._0_5_ = 6;
            uVar5 = FUN_14001a6c0(&local_e8,1);
            local_188._0_1_ = 1;
            FUN_147d351ca(local_160,uVar4,uVar5,0);
            local_e8.QuadPart = 0x149e4ea78;
            uStack_e0._0_5_ = 5;
            uVar5 = FUN_14001a6c0(&local_e8,1);
            local_188._0_1_ = 0;
            FUN_147d351ca(lVar19 + 0x10,uVar4,uVar5);
            local_e8.QuadPart = 0x14a56e062;
            uStack_e0._0_5_ = 0x12;
            uVar5 = FUN_14001a6c0(&local_e8,1);
            local_188._0_1_ = 0;
            FUN_147d351ca(lVar2 + lVar21 + 0x30,uVar4,uVar5);
            lVar2 = lVar2 + lVar21;
            local_e8.QuadPart = 0x14a56e075;
            uStack_e0 = CONCAT35(uStack_e0._5_3_,0x12);
            uVar5 = FUN_14001a6c0(&local_e8,1);
            local_188 = (uint)local_188._1_3_ << 8;
            FUN_147d351ca(lVar2 + 0x20,uVar4,uVar5);
            *(undefined8 *)(lVar2 + 0x40) = 0;
            *(undefined8 *)(lVar2 + 0x48) = 0x41a00000469c4000;
            *(undefined1 *)(lVar2 + 0x1a8) = 0;
            *(byte *)(lVar2 + 0x1a9) = *(byte *)(lVar2 + 0x1a9) & 8;
            *(byte *)(lVar2 + 0x1aa) = *(byte *)(lVar2 + 0x1aa) & 0x90;
            *(undefined8 *)(lVar2 + 0x1ac) = 0;
            *(undefined4 *)(lVar2 + 0x1b4) = 0;
            lVar19 = local_170 + 1;
            uVar20 = *(uint *)(lVar15 + 0x21c);
            lVar21 = lVar21 + 0x540;
          } while (lVar19 < (int)uVar20);
        }
        iVar13 = *(int *)(lVar15 + 0x1d0);
        *(uint *)(lVar15 + 0x1d0) = iVar13 + uVar20;
        if ((uint)(*(int *)(lVar15 + 0x1d4) - iVar13) < uVar20) {
          FUN_1401c3474(lVar15 + 0x1c8);
        }
        memset((void *)((longlong)iVar13 + *(longlong *)(lVar15 + 0x1c8)),0,(longlong)(int)uVar20);
        uVar20 = *(uint *)(lVar15 + 0x21c);
        iVar13 = *(int *)(lVar15 + 0x1e0);
        *(uint *)(lVar15 + 0x1e0) = iVar13 + uVar20;
        if ((uint)(*(int *)(lVar15 + 0x1e4) - iVar13) < uVar20) {
          FUN_1401c3474(lVar15 + 0x1d8);
        }
        memset((void *)((longlong)iVar13 + *(longlong *)(lVar15 + 0x1d8)),0,(longlong)(int)uVar20);
        uVar20 = *(uint *)(lVar15 + 0x21c);
        iVar13 = *(int *)(lVar15 + 0x1f0);
        *(uint *)(lVar15 + 0x1f0) = iVar13 + uVar20;
        if ((uint)(*(int *)(lVar15 + 500) - iVar13) < uVar20) {
          FUN_1401c3474(lVar15 + 0x1e8);
        }
        memset((void *)((longlong)iVar13 + *(longlong *)(lVar15 + 0x1e8)),0,(longlong)(int)uVar20);
        uVar20 = *(uint *)(lVar15 + 0x21c);
        iVar13 = *(int *)(lVar15 + 0x200);
        *(uint *)(lVar15 + 0x200) = iVar13 + uVar20;
        if ((uint)(*(int *)(lVar15 + 0x204) - iVar13) < uVar20) {
          FUN_1401c3474(lVar15 + 0x1f8);
        }
        memset((void *)((longlong)iVar13 + *(longlong *)(lVar15 + 0x1f8)),0,(longlong)(int)uVar20);
        FUN_14005ea14(lVar15 + 0x208,*(undefined4 *)(lVar15 + 0x21c));
        iVar13 = *(int *)(lVar15 + 0x21c);
        if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar13);
        }
        plVar7 = (longlong *)(lVar15 + 0x1b8);
        *(undefined4 *)(lVar15 + 0x1c0) = 0;
        if (*(int *)(lVar15 + 0x1c4) < iVar13) {
          FUN_14481578e(plVar7,iVar13);
          iVar13 = *(int *)(lVar15 + 0x21c);
        }
        if (0 < iVar13) {
          uVar20 = iVar13 + 1;
          do {
            iVar13 = *(int *)(lVar15 + 0x210);
            *(uint *)(lVar15 + 0x210) = iVar13 + 1U;
            if (*(uint *)(lVar15 + 0x214) < iVar13 + 1U) {
              FUN_14475e4ac(lVar15 + 0x208,iVar13);
            }
            *(undefined4 *)(*(longlong *)(lVar15 + 0x208) + (longlong)iVar13 * 4) = 0x3f800000;
            iVar13 = *(int *)(lVar15 + 0x1c0);
            *(uint *)(lVar15 + 0x1c0) = iVar13 + 1U;
            if (*(uint *)(lVar15 + 0x1c4) < iVar13 + 1U) {
              FUN_1446f48e2(plVar7,iVar13);
            }
            *(uint *)(*plVar7 + (longlong)iVar13 * 4) = uVar20 - 2;
            uVar20 = uVar20 - 1;
          } while (1 < uVar20);
          if (0 < *(int *)(lVar15 + 0x21c)) {
            lVar19 = 0x330;
            lVar21 = 0;
            do {
              lVar2 = *(longlong *)(lVar15 + 0x118);
              FUN_14702dc6a(lVar2 + lVar19 + -0x300,*(int *)(lVar15 + 0x220) << 3);
              FUN_14702dc6a(lVar2 + lVar19 + -0x2e0,*(int *)(lVar15 + 0x220) << 3);
              FUN_14702dc6a(lVar2 + lVar19 + -0x2d0,*(int *)(lVar15 + 0x220) << 3);
              FUN_14702dc6a(lVar2 + lVar19,*(int *)(lVar15 + 0x220) * 2);
              lVar21 = lVar21 + 1;
              lVar19 = lVar19 + 0x540;
            } while (lVar21 < *(int *)(lVar15 + 0x21c));
          }
        }
        local_170 = lVar15 + 0x198;
        *(undefined4 *)(lVar15 + 0x1a0) = 0;
        if (*(int *)(lVar15 + 0x1a4) < 0) {
          FUN_1477d0ce2(local_170);
        }
        if (0 < *(int *)(lVar15 + 0x228)) {
          iVar13 = *(int *)(lVar15 + 0x21c);
          iVar6 = iVar13 / *(int *)(lVar15 + 0x228);
          iVar18 = 1;
          if (1 < iVar6) {
            iVar18 = iVar6;
          }
          if (0 < iVar13) {
            iVar6 = 0;
            do {
              iVar12 = iVar13;
              if (iVar6 + iVar18 < iVar13) {
                iVar12 = iVar6 + iVar18;
              }
              puVar8 = (undefined8 *)FUN_14001cc68(0x60,0x10);
              puVar8[1] = 0;
              *puVar8 = &PTR_FUN_149e06640;
              *(undefined4 *)(puVar8 + 2) = 0;
              puVar8[3] = 0;
              puVar8[4] = 0;
              *(undefined2 *)(puVar8 + 5) = 3;
              puVar8[6] = 0xffffffffffffffff;
              puVar8[7] = 0;
              *puVar8 = &PTR_FUN_14a570c10;
              puVar8[9] = lVar15;
              *(int *)(puVar8 + 10) = iVar6;
              *(int *)((longlong)puVar8 + 0x54) = iVar12;
              *(undefined1 *)(puVar8 + 0xb) = 0;
              iVar13 = *(int *)(lVar15 + 0x1a0);
              *(uint *)(lVar15 + 0x1a0) = iVar13 + 1U;
              if (*(uint *)(lVar15 + 0x1a4) < iVar13 + 1U) {
                FUN_1477d1486(local_170,iVar13);
              }
              *(undefined8 **)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar13 * 8) = puVar8;
              iVar13 = *(int *)(lVar15 + 0x21c);
              iVar6 = iVar12;
            } while (iVar12 < iVar13);
          }
        }
        *(undefined4 *)(lVar15 + 0x228) = *(undefined4 *)(lVar15 + 0x1a0);
        *(byte *)(lVar15 + 0x230) = *(byte *)(lVar15 + 0x230) & 0xfd;
        FUN_14795f152(*(undefined8 *)(lVar15 + 0x30),&local_e8);
        FUN_1477c552e(lVar15 + 0x38,&local_e8);
        plVar7 = local_d8;
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_d8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        cVar3 = local_171;
        if (*(longlong *)(lVar15 + 0x40) != 0) {
          *(byte *)(lVar15 + 0x230) = *(byte *)(lVar15 + 0x230) | 2;
        }
        lVar19 = *(longlong *)(*(longlong *)(lVar15 + 0x30) + 0xe0);
        lVar21 = *(longlong *)(*(longlong *)(lVar15 + 0x30) + 0xe8);
        if (lVar21 != 0) {
          LOCK();
          *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
          UNLOCK();
        }
        plVar7 = *(longlong **)(lVar15 + 0x60);
        *(longlong *)(lVar15 + 0x58) = lVar19;
        *(longlong *)(lVar15 + 0x60) = lVar21;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar7 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          lVar19 = *(longlong *)(lVar15 + 0x58);
        }
        if (lVar19 != 0) {
          *(byte *)(lVar15 + 0x230) = *(byte *)(lVar15 + 0x230) | 4;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cabb590) &&
           (FUN_144b3d300(&DAT_14cabb590), DAT_14cabb590 == -1)) {
          local_e8.QuadPart = 0;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          FUN_1446efa72(&local_e8,0,2,0x10);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,2);
          *(undefined ***)local_e8 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar21 = DAT_14c758608 + 1;
          lVar19 = DAT_14c758608 + 1;
          if (lVar21 == 0) {
            LOCK();
            UNLOCK();
            lVar21 = DAT_14c758608 + 2;
            lVar19 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar19;
          *(longlong *)(local_e8.QuadPart + 0x10) = lVar21;
          *(undefined ***)local_e8 = &PTR_FUN_14a570c50;
          *(longlong *)(local_e8.QuadPart + 0x18) = lVar15;
          local_188 = 0;
          FUN_14152bcb8(&DAT_14cabb580,L"au.AudioThreadCommand.SpamCommandQueue",&DAT_149dfb77a,
                        &local_e8);
          if ((int)uStack_e0 == 0) {
LAB_1433464cf:
            if ((char *)local_e8.QuadPart != (char *)0x0) {
              FUN_1400020a8();
            }
          }
          else if ((char *)local_e8.QuadPart != (char *)0x0) {
            (*(code *)**(undefined8 **)local_e8)(local_e8.QuadPart,0);
            FUN_1446efa72(&local_e8,0,0,0x10);
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            goto LAB_1433464cf;
          }
          atexit(FUN_14334e04f);
          _Init_thread_footer(&DAT_14cabb590);
          cVar3 = local_171;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cabb5a8) &&
           (FUN_144b3d300(&DAT_14cabb5a8), DAT_14cabb5a8 == -1)) {
          local_e8.QuadPart = 0;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          FUN_1446efa72(&local_e8,0,2,0x10);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,2);
          *(undefined ***)local_e8 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar21 = DAT_14c758608 + 1;
          lVar19 = DAT_14c758608 + 1;
          if (lVar21 == 0) {
            LOCK();
            UNLOCK();
            lVar21 = DAT_14c758608 + 2;
            lVar19 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar19;
          *(longlong *)(local_e8.QuadPart + 0x10) = lVar21;
          *(undefined ***)local_e8 = &PTR_FUN_14a570d00;
          *(longlong *)(local_e8.QuadPart + 0x18) = lVar15;
          local_188 = 0;
          FUN_14152bcb8(&DAT_14cabb598,L"au.AudioThreadCommand.ChokeCommandQueue",&DAT_149dfb77a,
                        &local_e8);
          if ((int)uStack_e0 == 0) {
LAB_1433465f2:
            if ((char *)local_e8.QuadPart != (char *)0x0) {
              FUN_1400020a8();
            }
          }
          else if ((char *)local_e8.QuadPart != (char *)0x0) {
            (*(code *)**(undefined8 **)local_e8)(local_e8.QuadPart,0);
            FUN_1446efa72(&local_e8,0,0,0x10);
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            goto LAB_1433465f2;
          }
          atexit(FUN_14334e094);
          _Init_thread_footer(&DAT_14cabb5a8);
          cVar3 = local_171;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cabb5c0) &&
           (FUN_144b3d300(&DAT_14cabb5c0), DAT_14cabb5c0 == -1)) {
          local_e8.QuadPart = 0;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          FUN_1446efa72(&local_e8,0,2,0x10);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,2);
          *(undefined ***)local_e8 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar21 = DAT_14c758608 + 1;
          lVar19 = DAT_14c758608 + 1;
          if (lVar21 == 0) {
            LOCK();
            UNLOCK();
            lVar21 = DAT_14c758608 + 2;
            lVar19 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar19;
          *(longlong *)(local_e8.QuadPart + 0x10) = lVar21;
          *(undefined ***)local_e8 = &PTR_FUN_14a570d90;
          *(longlong *)(local_e8.QuadPart + 0x18) = lVar15;
          local_188 = 0;
          FUN_14152bcb8(&DAT_14cabb5b0,L"au.AudioThreadCommand.ChokeMPSCCommandQueue",&DAT_149dfb77a
                        ,&local_e8);
          if ((int)uStack_e0 == 0) {
LAB_143346715:
            if ((char *)local_e8.QuadPart != (char *)0x0) {
              FUN_1400020a8();
            }
          }
          else if ((char *)local_e8.QuadPart != (char *)0x0) {
            (*(code *)**(undefined8 **)local_e8)(local_e8.QuadPart,0);
            FUN_1446efa72(&local_e8,0,0,0x10);
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            goto LAB_143346715;
          }
          atexit(FUN_14334e0d9);
          _Init_thread_footer(&DAT_14cabb5c0);
          cVar3 = local_171;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cabb5d8) &&
           (FUN_144b3d300(&DAT_14cabb5d8), DAT_14cabb5d8 == -1)) {
          local_e8.QuadPart = 0;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          FUN_1446efa72(&local_e8,0,2,0x10);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,2);
          *(undefined ***)local_e8 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar21 = DAT_14c758608 + 1;
          lVar19 = DAT_14c758608 + 1;
          if (lVar21 == 0) {
            LOCK();
            UNLOCK();
            lVar21 = DAT_14c758608 + 2;
            lVar19 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar19;
          *(longlong *)(local_e8.QuadPart + 0x10) = lVar21;
          *(undefined ***)local_e8 = &PTR_FUN_14a570e30;
          *(longlong *)(local_e8.QuadPart + 0x18) = lVar15;
          local_188 = 0;
          FUN_14152bcb8(&DAT_14cabb5c8,L"au.AudioSourceManager.HangDiagnostics",&DAT_149dfb77a,
                        &local_e8);
          if ((int)uStack_e0 == 0) {
LAB_143346838:
            if ((char *)local_e8.QuadPart != (char *)0x0) {
              FUN_1400020a8();
            }
          }
          else if ((char *)local_e8.QuadPart != (char *)0x0) {
            (*(code *)**(undefined8 **)local_e8)(local_e8.QuadPart,0);
            FUN_1446efa72(&local_e8,0,0,0x10);
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            goto LAB_143346838;
          }
          atexit(FUN_14334e11e);
          _Init_thread_footer(&DAT_14cabb5d8);
          cVar3 = local_171;
        }
        *(byte *)(lVar15 + 0x230) = *(byte *)(lVar15 + 0x230) | 1;
        LOCK();
        *(undefined4 *)(lVar15 + 0x234) = 0;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x70))(param_1);
      LOCK();
      *(undefined4 *)(param_1[0x16d] + 0x1a8) = 1;
      UNLOCK();
      QueryPerformanceCounter(&local_e8);
      param_1[399] = (longlong)((double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0);
      param_1[400] = 0;
      param_1[0x191] = 0;
      FUN_1477c4ca2((int)param_1[0x12]);
      local_88 = 0.0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      FUN_146b17e4e(0,0);
      uStack_80 = 0;
      FUN_147087202(&local_88,5);
      uVar20 = uStack_80;
      lVar15 = (longlong)(int)uStack_80;
      uStack_80 = uStack_80 + 1;
      if (uStack_7c < uStack_80) {
        FUN_146b17dba(&local_88,uVar20);
      }
      lVar19 = CONCAT44(uStack_84,local_88);
      FUN_140056680(&local_e8,L"SampleRate");
      FUN_146b172be(lVar15 * 0x30 + lVar19,&local_e8,param_1 + 0xf);
      uVar20 = uStack_80;
      lVar15 = (longlong)(int)uStack_80;
      uStack_80 = uStack_80 + 1;
      if (uStack_7c < uStack_80) {
        FUN_146b17dba(&local_88,uVar20);
      }
      lVar19 = CONCAT44(uStack_84,local_88);
      FUN_140056680(&local_e8,L"BufferSize");
      FUN_146b172be(lVar15 * 0x30 + lVar19,&local_e8,(longlong)param_1 + 0x7c);
      uVar20 = uStack_80;
      lVar15 = (longlong)(int)uStack_80;
      uStack_80 = uStack_80 + 1;
      if (uStack_7c < uStack_80) {
        FUN_146b17dba(&local_88,uVar20);
      }
      lVar19 = CONCAT44(uStack_84,local_88);
      FUN_140056680(&local_e8,L"NumBuffers");
      FUN_146b172be(lVar15 * 0x30 + lVar19,&local_e8,param_1 + 0x10);
      uVar20 = uStack_80;
      lVar15 = (longlong)(int)uStack_80;
      uStack_80 = uStack_80 + 1;
      if (uStack_7c < uStack_80) {
        FUN_146b17dba(&local_88,uVar20);
      }
      lVar19 = CONCAT44(uStack_84,local_88);
      FUN_140056680(&local_e8,L"NumSources");
      FUN_146b172be(lVar15 * 0x30 + lVar19,&local_e8,(longlong)param_1 + 0x84);
      uVar20 = uStack_80;
      lVar15 = (longlong)(int)uStack_80;
      uStack_80 = uStack_80 + 1;
      if (uStack_7c < uStack_80) {
        FUN_146b17dba(&local_88,uVar20);
      }
      lVar19 = CONCAT44(uStack_84,local_88);
      FUN_140056680(&local_e8,L"NumOutputChannels");
      FUN_146b172be(lVar15 * 0x30 + lVar19,&local_e8,param_1 + 0x197);
      FUN_140056680(local_158,L"ProjectSettings");
      plVar7 = DAT_14cad8288;
      if (DAT_14cad8288 != (longlong *)0x0) {
        FUN_140ba7826(&local_e8,L"Audio.Usage.",local_158);
        (**(code **)(*plVar7 + 0xf0))(plVar7,&local_e8,&local_88);
        if ((char *)local_e8.QuadPart != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_158[0] != 0) {
        FUN_1400020a8();
      }
      FUN_146b17e4e(CONCAT44(uStack_84,local_88),uStack_80);
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1400020a8();
      }
      uVar20 = (**(code **)(*(longlong *)param_1[0x16d] + 0xa0))();
      plVar7 = (longlong *)(ulonglong)uVar20;
    }
    if ((char *)local_98.QuadPart != (char *)0x0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') goto LAB_143345199;
  }
  plVar7 = (longlong *)0x0;
LAB_143345199:
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar7 & 0xffffff01;
LAB_1433453ce:
  if (uVar14 != uVar17) {
LAB_1433453e6:
    if ((int)uStack_d0 == local_90) {
      if (1 < local_90) {
        lVar15 = 0;
        do {
          uVar14 = *(ushort *)((longlong)local_d8 + lVar15);
          uVar10 = (ulonglong)uVar14;
          uVar17 = *(ushort *)(local_98.QuadPart + lVar15);
          if (uVar14 == uVar17) {
            if (uVar14 == 0) break;
          }
          else {
            if (0x7f < (uVar17 | uVar14)) goto LAB_143345441;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar16 = (ulonglong)uVar17;
            uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar16]) goto LAB_143345441;
          }
          lVar15 = lVar15 + 2;
        } while( true );
      }
    }
    else if ((int)uStack_d0 + local_90 != 1) goto LAB_143345451;
  }
  goto LAB_14334546a;
LAB_143345441:
  if (uVar14 != uVar17) {
LAB_143345451:
    FUN_147041ad4(&local_e8);
    fVar11 = (float)((int)fVar11 + 1);
    if ((uint)local_88 <= (uint)fVar11) goto LAB_143345484;
    goto LAB_143345335;
  }
LAB_14334546a:
  *(float *)(param_1 + 0x187) = fVar11;
  *(undefined1 *)((longlong)param_1 + 0xc54) = 1;
  FUN_147041ad4(&local_e8);
  goto LAB_143345484;
}



// FUNCTION 14334693e FUN_14334693e body=639 status=ok
// SIG undefined FUN_14334693e(void)

ulonglong FUN_14334693e(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong extraout_RAX;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [36];
  uint local_b4;
  LARGE_INTEGER local_b0;
  code *local_a8;
  longlong *local_98 [2];
  longlong local_88 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  LARGE_INTEGER local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar9 = FUN_14118da1c();
      bVar7 = FUN_14054d46e(uVar9,L"nothreading");
      DAT_14c83f0f8 = bVar7 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xb0);
      if (*(uint *)(param_1 + 0xb0) == (uint)(*(int *)(param_1 + 0xb0) == 0)) {
        LOCK();
        uVar12 = *(uint *)(param_1 + 0x234);
        *(uint *)(param_1 + 0x234) = 1;
        uVar8 = (ulonglong)uVar12;
        UNLOCK();
      }
      goto LAB_143346a30;
    }
  }
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))(*(longlong **)(param_1 + 0xb8),0,0);
  if ((char)uVar8 != '\0') {
    uVar12 = (uint)(*(int *)(param_1 + 0xb0) == 0);
    if (DAT_14cabb510 != 0) {
      uVar8 = (ulonglong)(*(int *)(param_1 + 0xb0) != 0);
      iVar3 = *(int *)(param_1 + 0x90 + uVar8 * 0x18);
      if (iVar3 != 0) {
        plVar2 = (longlong *)(param_1 + 0x88 + uVar8 * 0x18);
        if (0 < iVar3) {
          lVar14 = 0x20;
          lVar13 = 0;
          local_b4 = uVar12;
          do {
            lVar4 = *plVar2;
            local_a8 = *(code **)(lVar4 + -0x20 + lVar14);
            local_98[0] = (longlong *)0x0;
            if (local_a8 != (code *)0x0) {
              puVar5 = *(undefined8 **)(lVar4 + -0x10 + lVar14);
              puVar10 = (undefined8 *)(lVar14 + lVar4);
              if (puVar5 != (undefined8 *)0x0) {
                puVar10 = puVar5;
              }
              (**(code **)*puVar10)(puVar10,local_98);
            }
            local_58 = *(LARGE_INTEGER *)(lVar4 + 0x30 + lVar14);
            puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar14);
            local_68 = *puVar1;
            uStack_64 = puVar1[1];
            uStack_60 = puVar1[2];
            uStack_5c = puVar1[3];
            QueryPerformanceCounter(&local_b0);
            pcVar6 = local_a8;
            local_58 = local_b0;
            plVar11 = local_98[0];
            if (local_98[0] == (longlong *)0x0) {
              plVar11 = local_88;
            }
            uVar9 = (**(code **)(*plVar11 + 8))();
            (*pcVar6)(uVar9);
            local_58 = (LARGE_INTEGER)0x0;
            LOCK();
            *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + -1;
            UNLOCK();
            if (local_a8 != (code *)0x0) {
              plVar11 = local_98[0];
              if (local_98[0] == (longlong *)0x0) {
                plVar11 = local_88;
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            lVar13 = lVar13 + 1;
            lVar14 = lVar14 + 0x60;
            uVar12 = local_b4;
          } while (lVar13 < (int)plVar2[1]);
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
        FUN_1477d08f9(*plVar2);
        *(undefined4 *)(plVar2 + 1) = 0;
        if ((iVar3 < 0) && (*(int *)((longlong)plVar2 + 0xc) != 0)) {
          FUN_1477d0c72(plVar2,0);
        }
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
    LOCK();
    *(uint *)(param_1 + 0xb0) = uVar12;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
    uVar8 = extraout_RAX;
  }
LAB_143346a30:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 143346bc4 FUN_143346bc4 body=887 status=ok
// SIG undefined FUN_143346bc4(void)

void FUN_143346bc4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  int local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  code *local_b8 [2];
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14334693e(param_1[0x1c2]);
  (**(code **)(*(longlong *)param_1[0x16d] + 0x110))();
  cVar7 = (**(code **)(*(longlong *)param_1[0x16d] + 0x40))();
  if (cVar7 != '\0') {
    (**(code **)(*(longlong *)param_1[0x16d] + 0xc0))((longlong *)param_1[0x16d],&local_100);
    FUN_1477bb642(param_1 + 0x193,&local_100);
    FUN_147041ad4(&local_100);
    FUN_143343f02(param_1,(int)param_1[0x197]);
    FUN_1477bbad8(param_1[0x1c2],(int)param_1[0x197]);
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0xe1c) = 0xffffffff;
    UNLOCK();
    if (*(int *)((longlong)param_1 + 0xe1c) == -1) {
      DVar8 = GetCurrentThreadId();
      LOCK();
      *(DWORD *)((longlong)param_1 + 0xe1c) = DVar8;
      UNLOCK();
    }
    GetCurrentThreadId();
    (**(code **)(*param_1 + 0x58))(param_1,1);
    plVar10 = (longlong *)FUN_1477c967c(DAT_14cb0d2b0);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x2b8))(plVar10,param_1 + 0x195);
    }
    (**(code **)(*(longlong *)param_1[0x16d] + 0x48))();
  }
  if ((*(byte *)((longlong)param_1 + 0x599) & 4) != 0) {
    lVar5 = param_1[0x1b5];
    if ((longlong)(int)lVar5 != 0) {
      lVar4 = param_1[0x1b4];
      lVar13 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar13) != 0) {
          FUN_1433438ce(param_1,&local_100);
          plVar10 = (longlong *)CONCAT44(uStack_f4,local_f8);
          if (local_100 == 0) {
LAB_143346ce6:
            if (plVar10 != (longlong *)0x0) {
LAB_143346ceb:
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))();
              }
            }
          }
          else if (plVar10 != (longlong *)0x0) {
            if (0 < (int)plVar10[1]) {
              LOCK();
              *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
              UNLOCK();
              local_a8 = 0;
              local_98 = &PTR_LAB_14a570520;
              local_88 = local_100;
              local_b8[0] = FUN_143351e7a;
              local_90 = param_1;
              FUN_1434130f2(local_b8);
              plVar10 = (longlong *)CONCAT44(uStack_f4,local_f8);
              goto LAB_143346ce6;
            }
            goto LAB_143346ceb;
          }
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar13);
    }
    fVar3 = *(float *)(param_1 + 0x2e);
    if (1e-08 < ABS(*(float *)(param_1 + 0x18e) - fVar3)) {
      *(float *)(param_1 + 0x18e) = fVar3;
      FUN_1477bb890(&local_100);
      uVar11 = (ulonglong)local_f0;
      if ((-1 < (int)local_f0) && ((int)local_f0 < local_f8)) {
        do {
          if (((*(byte *)(*(longlong *)(local_100 + (uVar11 & 0xffffffff) * 8) + 0xf0) & 1) != 0) &&
             (FUN_1433438ce(param_1,&local_110), local_108 != (longlong *)0x0)) {
            iVar9 = (int)local_108[1];
            do {
              if (iVar9 == 0) {
                plVar10 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar6 = (int)local_108[1];
              bVar14 = iVar9 == iVar6;
              if (bVar14) {
                *(int *)(local_108 + 1) = iVar9 + 1;
                iVar6 = iVar9;
              }
              iVar9 = iVar6;
              UNLOCK();
              plVar10 = local_108;
            } while (!bVar14);
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_108 + 0x10))();
            }
            if (plVar10 != (longlong *)0x0) {
              if (local_110 != 0) {
                FUN_1477d67ee(local_110,ABS(fVar3) <= 1e-08);
              }
              LOCK();
              plVar2 = plVar10 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          uVar11 = (longlong)(int)local_f0;
          do {
            uVar12 = uVar11;
            uVar11 = uVar12 + 1;
            local_f0 = (uint)uVar11;
            if ((longlong)local_f8 <= (longlong)uVar11) break;
          } while (*(longlong *)(local_100 + uVar11 * 8) == 0);
        } while ((-2 < (longlong)uVar12) && ((int)local_f0 < local_f8));
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143346f3c FUN_143346f3c body=1129 status=ok
// SIG undefined FUN_143346f3c(void)

undefined8 FUN_143346f3c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  DWORD DVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
  UNLOCK();
  lVar3 = param_1 + -0xa60;
  if (*(int *)(param_1 + 0x3bc) == -1) {
    DVar8 = GetCurrentThreadId();
    LOCK();
    *(DWORD *)(param_1 + 0x3bc) = DVar8;
    UNLOCK();
  }
  GetCurrentThreadId();
  QueryPerformanceCounter(&local_50);
  *(double *)(param_1 + 0x228) =
       ((double)local_50.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x218);
  local_54 = *(undefined4 *)(*(longlong *)(param_1 + 0x3b0) + 0x220);
  FUN_147961a42(lVar3);
  FUN_1477bbfe8(lVar3);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*(longlong *)(param_1 + 0x3b0) + 0x220);
  FUN_14335ef82(param_1 + 0x20);
  lVar11 = *(longlong *)(param_1 + 0x3b0);
  LOCK();
  *(undefined1 *)(lVar11 + 0x240) = 0;
  UNLOCK();
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar10 = FUN_14118da1c();
      bVar7 = FUN_14054d46e(uVar10,L"nothreading");
      DAT_14c83f0f8 = bVar7 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 0) {
      if (*(int *)(lVar11 + 0x234) == 0) goto LAB_14334706c;
      LOCK();
      *(undefined4 *)(lVar11 + 0x234) = 0;
      UNLOCK();
    }
  }
  FUN_1433473a6(lVar11);
LAB_14334706c:
  LOCK();
  *(undefined1 *)(lVar11 + 0x240) = 3;
  UNLOCK();
  lVar12 = *(longlong *)(lVar11 + 0x30);
  if (((*(byte *)(lVar12 + 0x598) & 0x20) != 0) &&
     (plVar4 = *(longlong **)(lVar12 + 0x110), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(lVar12 + 0xc60));
  }
  FUN_1477bc494(lVar11,0);
  FUN_1477c813e(lVar11,0);
  FUN_1477c7f14(lVar11);
  FUN_1477c813e(lVar11,1);
  FUN_1477c8028(lVar11);
  bVar7 = *(byte *)(lVar11 + 0x230);
  if ((bVar7 & 2) != 0) {
    LOCK();
    *(undefined1 *)(lVar11 + 0x240) = 9;
    UNLOCK();
    (**(code **)(**(longlong **)(lVar11 + 0x40) + 0x60))();
    bVar7 = *(byte *)(lVar11 + 0x230);
  }
  if ((bVar7 & 4) != 0) {
    LOCK();
    *(undefined1 *)(lVar11 + 0x240) = 10;
    UNLOCK();
    (**(code **)(**(longlong **)(lVar11 + 0x58) + 0x28))();
  }
  LOCK();
  *(undefined1 *)(lVar11 + 0x240) = 0xb;
  UNLOCK();
  if (0 < *(int *)(lVar11 + 0x21c)) {
    lVar12 = 0x521;
    uVar13 = 0;
    do {
      lVar5 = *(longlong *)(lVar11 + 0x118);
      if (SBORROW1('\0',*(byte *)(lVar5 + lVar12) & 0xc0)) {
        *(byte *)(lVar5 + lVar12) = *(byte *)(lVar5 + lVar12) | 0x40;
        (**(code **)(**(longlong **)(lVar5 + -0x511 + lVar12) + 0x18))();
        plVar4 = *(longlong **)(lVar5 + -0x11 + lVar12);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,uVar13 & 0xffffffff);
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x540;
    } while ((longlong)uVar13 < (longlong)*(int *)(lVar11 + 0x21c));
  }
  LOCK();
  *(undefined1 *)(lVar11 + 0x240) = 0xc;
  UNLOCK();
  plVar4 = (longlong *)(*(longlong **)(param_1 + 0xe8))[1];
  if (plVar4 != (longlong *)0x0) {
    lVar11 = **(longlong **)(param_1 + 0xe8);
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    iVar9 = (int)plVar4[1];
    do {
      if (iVar9 == 0) goto LAB_143347192;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar14 = iVar9 == iVar6;
      if (bVar14) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar14);
    if (lVar11 != 0) {
      FUN_14335aae6(lVar11,param_2);
    }
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
LAB_143347192:
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  if ((DAT_14cabaff8 != 0) && (iVar9 = *(int *)(param_1 + 0x300), (longlong)iVar9 != 0)) {
    lVar11 = *(longlong *)(param_1 + 0x2f8);
    lVar12 = 0;
    do {
      FUN_14335aae6(*(undefined8 *)(lVar11 + lVar12),param_2);
      lVar12 = lVar12 + 0x10;
    } while ((longlong)iVar9 * 0x10 != lVar12);
  }
  iVar9 = *(int *)(param_1 + 0x310);
  if ((longlong)iVar9 != 0) {
    lVar11 = 0;
    do {
      FUN_1477d7bd4();
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar9 * 0x10 != lVar11);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  FUN_1477bc09c(*(undefined8 *)(param_1 + 0x3b0));
  if (0 < DAT_14cabb010 || *(char *)(param_1 + 1000) != '\0') {
    if (DAT_14cabb010 < 2) {
      FUN_1477bc13c();
    }
    else {
      FUN_1477bc35a(lVar3,param_2);
    }
  }
  *(double *)(param_1 + -0x4c0) = *(double *)(param_1 + 0x200) + *(double *)(param_1 + -0x4c0);
  QueryPerformanceCounter(&local_50);
  *(double *)(param_1 + 0x208) = (double)local_50.QuadPart * DAT_14c83f420 + 16777216.0;
  FUN_147961a7c(lVar3,&local_54);
  FUN_1477c4e78(*(undefined4 *)(param_1 + -0x9d0));
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1433473a6 FUN_1433473a6 body=1533 status=ok
// SIG undefined FUN_1433473a6(void)

void FUN_1433473a6(DWORD *param_1)

{
  PSRWLOCK pRVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  code *pcVar7;
  longlong lVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  char cVar22;
  byte bVar23;
  DWORD DVar24;
  uint uVar25;
  undefined8 uVar26;
  int iVar27;
  DWORD *pDVar28;
  DWORD *pDVar29;
  longlong *plVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auStack_178 [44];
  DWORD local_14c;
  DWORD *local_148;
  longlong local_140;
  longlong local_138;
  undefined8 uStack_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER LStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char local_c8;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER LStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  DWORD local_78;
  DWORD DStack_74;
  DWORD DStack_70;
  DWORD DStack_6c;
  undefined8 local_68;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  DVar24 = GetCurrentThreadId();
  *param_1 = DVar24;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar26 = FUN_14118da1c();
      bVar23 = FUN_14054d46e(uVar26,L"nothreading");
      DAT_14c83f0f8 = bVar23 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 1) goto LAB_14334740d;
  }
  else {
LAB_14334740d:
    cVar22 = (**(code **)(**(longlong **)(param_1 + 0x2e) + 0x20))
                       (*(longlong **)(param_1 + 0x2e),0,0);
    if (cVar22 != '\0') goto LAB_143347423;
  }
  LOCK();
  *(undefined1 *)(param_1 + 0x90) = 1;
  UNLOCK();
  FUN_1477c85fa(param_1 + 0x3e,&local_b8);
  if (local_58 == '\x01') {
    pRVar1 = (PSRWLOCK)(param_1 + 0x92);
    do {
      AcquireSRWLockExclusive(pRVar1);
      local_128 = *(LARGE_INTEGER *)(param_1 + 0x94);
      LStack_120 = *(LARGE_INTEGER *)(param_1 + 0x96);
      plVar30 = *(longlong **)(param_1 + 0x98);
      uVar26 = *(undefined8 *)(param_1 + 0x9a);
      lVar33 = *(longlong *)(param_1 + 0x9c);
      uVar11 = *(undefined8 *)(param_1 + 0x9e);
      uVar12 = *(undefined8 *)(param_1 + 0xa0);
      uVar13 = *(undefined8 *)(param_1 + 0xa2);
      *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_84,local_88);
      *(ulonglong *)(param_1 + 0xa2) = CONCAT44(uStack_7c,uStack_80);
      *(ulonglong *)(param_1 + 0x9c) = CONCAT44(uStack_94,local_98);
      *(ulonglong *)(param_1 + 0x9e) = CONCAT44(uStack_8c,uStack_90);
      *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_a4,local_a8);
      *(ulonglong *)(param_1 + 0x9a) = CONCAT44(uStack_9c,uStack_a0);
      *(LARGE_INTEGER *)(param_1 + 0x94) = local_b8;
      *(LARGE_INTEGER *)(param_1 + 0x96) = LStack_b0;
      local_118._0_4_ = SUB84(plVar30,0);
      local_118._4_4_ = (undefined4)((ulonglong)plVar30 >> 0x20);
      uStack_110._0_4_ = (undefined4)uVar26;
      uStack_110._4_4_ = (undefined4)((ulonglong)uVar26 >> 0x20);
      local_108._0_4_ = (undefined4)lVar33;
      local_108._4_4_ = (undefined4)((ulonglong)lVar33 >> 0x20);
      uStack_100._0_4_ = (undefined4)uVar11;
      uStack_100._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      local_f8._0_4_ = (undefined4)uVar12;
      local_f8._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
      uStack_f0._0_4_ = (undefined4)uVar13;
      uStack_f0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_88 = (undefined4)local_f8;
      uStack_84 = local_f8._4_4_;
      uStack_80 = (undefined4)uStack_f0;
      uStack_7c = uStack_f0._4_4_;
      local_98 = (undefined4)local_108;
      uStack_94 = local_108._4_4_;
      uStack_90 = (undefined4)uStack_100;
      uStack_8c = uStack_100._4_4_;
      local_a8 = (undefined4)local_118;
      uStack_a4 = local_118._4_4_;
      uStack_a0 = (undefined4)uStack_110;
      uStack_9c = uStack_110._4_4_;
      *(undefined8 *)(param_1 + 0xa8) = local_68;
      param_1[0xa4] = local_78;
      param_1[0xa5] = DStack_74;
      param_1[0xa6] = DStack_70;
      param_1[0xa7] = DStack_6c;
      local_118 = plVar30;
      uStack_110 = uVar26;
      local_108 = lVar33;
      uStack_100 = uVar11;
      local_f8 = uVar12;
      uStack_f0 = uVar13;
      local_b8 = local_128;
      LStack_b0 = LStack_120;
      ReleaseSRWLockExclusive(pRVar1);
      AcquireSRWLockShared(pRVar1);
      QueryPerformanceCounter(&local_128);
      *(LARGE_INTEGER *)(param_1 + 0xa8) = local_128;
      pcVar7 = *(code **)(param_1 + 0x94);
      pDVar28 = *(DWORD **)(param_1 + 0x98);
      if (*(DWORD **)(param_1 + 0x98) == (DWORD *)0x0) {
        pDVar28 = param_1 + 0x9c;
      }
      uVar26 = (**(code **)(*(longlong *)pDVar28 + 8))();
      (*pcVar7)(uVar26);
      param_1[0xa8] = 0;
      param_1[0xa9] = 0;
      ReleaseSRWLockShared(pRVar1);
      FUN_1477c85fa(param_1 + 0x3e,&local_128);
      FUN_1477c867a(&local_b8,&local_128);
      if ((local_c8 == '\x01') && (local_128.QuadPart != 0)) {
        plVar30 = local_118;
        if (local_118 == (longlong *)0x0) {
          plVar30 = &local_108;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
    } while (local_58 != '\0');
  }
  DVar24 = param_1[0x2c];
  pDVar28 = param_1 + (longlong)(int)DVar24 * 6 + 0x22;
  DVar6 = param_1[(longlong)(int)DVar24 * 6 + 0x24];
  local_138 = 0;
  uStack_130 = 0;
  LOCK();
  *(undefined1 *)(param_1 + 0x90) = 2;
  UNLOCK();
  local_14c = DVar24;
  if (0 < (longlong)(int)DVar6) {
    pRVar1 = (PSRWLOCK)(param_1 + 0x92);
    pDVar2 = param_1 + 0x94;
    pDVar3 = param_1 + 0xa4;
    local_148 = param_1 + 0x9c;
    lVar33 = (longlong)(int)DVar6 * 0x60;
    lVar34 = 0;
    local_140 = lVar33;
    do {
      AcquireSRWLockExclusive(pRVar1);
      lVar8 = *(longlong *)pDVar28;
      local_128.QuadPart = *(LONGLONG *)pDVar2;
      LStack_120 = *(LARGE_INTEGER *)(param_1 + 0x96);
      plVar30 = *(longlong **)(param_1 + 0x98);
      uVar26 = *(undefined8 *)(param_1 + 0x9a);
      lVar32 = *(longlong *)(param_1 + 0x9c);
      uVar11 = *(undefined8 *)(param_1 + 0x9e);
      uVar12 = *(undefined8 *)(param_1 + 0xa0);
      uVar13 = *(undefined8 *)(param_1 + 0xa2);
      lVar14 = *(longlong *)(lVar8 + lVar34);
      lVar15 = ((longlong *)(lVar8 + lVar34))[1];
      puVar4 = (undefined8 *)(lVar8 + 0x10 + lVar34);
      uVar16 = *puVar4;
      uVar17 = puVar4[1];
      puVar4 = (undefined8 *)(lVar8 + 0x20 + lVar34);
      uVar18 = *puVar4;
      uVar19 = puVar4[1];
      puVar4 = (undefined8 *)(lVar8 + 0x30 + lVar34);
      uVar20 = puVar4[1];
      *(undefined8 *)(param_1 + 0xa0) = *puVar4;
      *(undefined8 *)(param_1 + 0xa2) = uVar20;
      *(undefined8 *)(param_1 + 0x9c) = uVar18;
      *(undefined8 *)(param_1 + 0x9e) = uVar19;
      *(undefined8 *)(param_1 + 0x98) = uVar16;
      *(undefined8 *)(param_1 + 0x9a) = uVar17;
      *(longlong *)pDVar2 = lVar14;
      *(longlong *)(param_1 + 0x96) = lVar15;
      local_118._0_4_ = SUB84(plVar30,0);
      local_118._4_4_ = (undefined4)((ulonglong)plVar30 >> 0x20);
      uStack_110._0_4_ = (undefined4)uVar26;
      uStack_110._4_4_ = (undefined4)((ulonglong)uVar26 >> 0x20);
      local_108._0_4_ = (undefined4)lVar32;
      local_108._4_4_ = (undefined4)((ulonglong)lVar32 >> 0x20);
      uStack_100._0_4_ = (undefined4)uVar11;
      uStack_100._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      local_f8._0_4_ = (undefined4)uVar12;
      local_f8._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
      uStack_f0._0_4_ = (undefined4)uVar13;
      uStack_f0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      puVar5 = (undefined4 *)(lVar8 + 0x30 + lVar34);
      *puVar5 = (undefined4)local_f8;
      puVar5[1] = local_f8._4_4_;
      puVar5[2] = (undefined4)uStack_f0;
      puVar5[3] = uStack_f0._4_4_;
      puVar5 = (undefined4 *)(lVar8 + 0x20 + lVar34);
      *puVar5 = (undefined4)local_108;
      puVar5[1] = local_108._4_4_;
      puVar5[2] = (undefined4)uStack_100;
      puVar5[3] = uStack_100._4_4_;
      puVar5 = (undefined4 *)(lVar8 + 0x10 + lVar34);
      *puVar5 = (undefined4)local_118;
      puVar5[1] = local_118._4_4_;
      puVar5[2] = (undefined4)uStack_110;
      puVar5[3] = uStack_110._4_4_;
      ((LARGE_INTEGER *)(lVar8 + lVar34))->QuadPart = (LONGLONG)local_128;
      ((LARGE_INTEGER *)(lVar8 + lVar34))[1] = LStack_120;
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar8 + 0x50 + lVar34);
      pDVar29 = (DWORD *)(lVar8 + 0x40 + lVar34);
      DVar6 = pDVar29[1];
      DVar9 = pDVar29[2];
      DVar10 = pDVar29[3];
      *pDVar3 = *pDVar29;
      param_1[0xa5] = DVar6;
      param_1[0xa6] = DVar9;
      param_1[0xa7] = DVar10;
      local_118 = plVar30;
      uStack_110 = uVar26;
      local_108 = lVar32;
      uStack_100 = uVar11;
      local_f8 = uVar12;
      uStack_f0 = uVar13;
      ReleaseSRWLockExclusive(pRVar1);
      AcquireSRWLockShared(pRVar1);
      uVar21 = uStack_130;
      if ((char)*pDVar3 == '\x01') {
        *(char *)pDVar3 = '\0';
        lVar33 = (longlong)(int)uStack_130;
        uVar25 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar25);
        if (uStack_130._4_4_ < uVar25) {
          FUN_1477d2540(&local_138,uVar21 & 0xffffffff);
        }
        lVar32 = local_138;
        lVar33 = lVar33 * 0x60;
        lVar8 = *(longlong *)pDVar2;
        *(longlong *)(local_138 + lVar33) = lVar8;
        *(undefined8 *)(local_138 + 0x10 + lVar33) = 0;
        if (lVar8 != 0) {
          pDVar29 = *(DWORD **)(param_1 + 0x98);
          if (*(DWORD **)(param_1 + 0x98) == (DWORD *)0x0) {
            pDVar29 = local_148;
          }
          (*(code *)**(undefined8 **)pDVar29)(pDVar29,local_138 + lVar33 + 0x10);
        }
        lVar32 = lVar32 + lVar33;
        *(undefined8 *)(lVar32 + 0x50) = *(undefined8 *)(param_1 + 0xa8);
        DVar6 = param_1[0xa5];
        DVar9 = param_1[0xa6];
        DVar10 = param_1[0xa7];
        *(DWORD *)(lVar32 + 0x40) = *pDVar3;
        *(DWORD *)(lVar32 + 0x44) = DVar6;
        *(DWORD *)(lVar32 + 0x48) = DVar9;
        *(DWORD *)(lVar32 + 0x4c) = DVar10;
        lVar33 = local_140;
      }
      else {
        QueryPerformanceCounter(&local_128);
        *(LARGE_INTEGER *)(param_1 + 0xa8) = local_128;
        pcVar7 = *(code **)(param_1 + 0x94);
        pDVar29 = *(DWORD **)(param_1 + 0x98);
        if (*(DWORD **)(param_1 + 0x98) == (DWORD *)0x0) {
          pDVar29 = local_148;
        }
        uVar26 = (**(code **)(*(longlong *)pDVar29 + 8))();
        (*pcVar7)(uVar26);
        param_1[0xa8] = 0;
        param_1[0xa9] = 0;
      }
      ReleaseSRWLockShared(pRVar1);
      LOCK();
      param_1[0x8b] = param_1[0x8b] - 1;
      UNLOCK();
      lVar34 = lVar34 + 0x60;
    } while (lVar33 != lVar34);
  }
  QueryPerformanceCounter(&local_128);
  LOCK();
  *(LARGE_INTEGER *)(param_1 + 0x8e) = local_128;
  UNLOCK();
  FUN_1477c86c6(pDVar28);
  iVar27 = 10000;
  if (DAT_14c761104 < 10000) {
    iVar27 = DAT_14c761104;
  }
  iVar31 = 0;
  if (0 < iVar27) {
    iVar31 = iVar27;
  }
  if ((int)param_1[(longlong)(int)DVar24 * 6 + 0x25] < iVar31) {
    FUN_1477d0c72(pDVar28);
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar26 = FUN_14118da1c();
      bVar23 = FUN_14054d46e(uVar26,L"nothreading");
      DAT_14c83f0f8 = bVar23 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 0) goto LAB_1433478a1;
    LOCK();
    param_1[0x2c] = (uint)(local_14c == 0);
    UNLOCK();
  }
  else {
LAB_1433478a1:
    (**(code **)(**(longlong **)(param_1 + 0x2e) + 0x10))();
  }
  FUN_1477d08f9(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_58 == '\x01') && (local_b8.QuadPart != 0)) {
    plVar30 = (longlong *)CONCAT44(uStack_a4,local_a8);
    if ((longlong *)CONCAT44(uStack_a4,local_a8) == (longlong *)0x0) {
      plVar30 = (longlong *)&local_98;
    }
    (**(code **)(*plVar30 + 0x10))();
  }
LAB_143347423:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433479a4 FUN_1433479a4 body=1675 status=ok
// SIG undefined FUN_1433479a4(void)

void FUN_1433479a4(longlong param_1,ulonglong param_2,undefined8 *param_3,byte param_4,
                  longlong *param_5)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  byte local_89;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar19 = (longlong *)(param_1 + 0xb38);
  iVar14 = *(int *)(param_1 + 0xb40);
  local_88 = param_3;
  if ((longlong)iVar14 < 4) {
    *(undefined4 *)(param_1 + 0xb40) = 4;
    if ((uint)(*(int *)(param_1 + 0xb44) - iVar14) < 4U - iVar14) {
      FUN_1477cdd0c(plVar19);
    }
    memset((void *)((longlong)iVar14 * 8 + *plVar19),0,(ulonglong)(4U - iVar14) << 3);
  }
  plVar11 = (longlong *)(param_1 + 0xb48);
  iVar14 = *(int *)(param_1 + 0xb50);
  local_89 = param_4;
  if ((longlong)iVar14 < 4) {
    *(undefined4 *)(param_1 + 0xb50) = 4;
    if ((uint)(*(int *)(param_1 + 0xb54) - iVar14) < 4U - iVar14) {
      FUN_1477cdd92(plVar11);
    }
    memset((void *)((longlong)iVar14 * 0x10 + *plVar11),0,(ulonglong)(4U - iVar14) << 4);
  }
  param_2 = param_2 & 0xff;
  lVar12 = *(longlong *)(*plVar19 + param_2 * 8);
  iVar14 = (int)param_2;
  if (lVar12 != 0) {
    if (*param_5 == 0) goto LAB_143347b57;
    FUN_140ba791a(param_5,&local_58);
    local_68 = 0;
    uStack_60 = 0;
    FUN_1401031ac(lVar12,0);
    if (local_50 == (int)uStack_60) {
      bVar20 = true;
      if (1 < local_50) {
        lVar16 = 0;
        while( true ) {
          uVar2 = *(ushort *)(local_58 + lVar16);
          uVar8 = (uint)uVar2;
          uVar3 = *(ushort *)(local_68 + lVar16);
          uVar17 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143347af8;
            }
            iVar9 = uVar8 - uVar17;
            goto LAB_143347b33;
          }
          if (uVar2 == 0) break;
LAB_143347af8:
          lVar16 = lVar16 + 2;
        }
        iVar9 = 0;
LAB_143347b33:
        bVar20 = iVar9 == 0;
      }
    }
    else {
      bVar20 = (int)uStack_60 + local_50 == 1;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (bVar20) goto LAB_143347b57;
    uVar8 = *(uint *)(lVar12 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    FUN_14482b126(lVar12,0x40000000);
    lVar12 = *(longlong *)(*plVar11 + (ulonglong)(uint)(iVar14 << 4));
    plVar15 = *(longlong **)(*plVar11 + 8 + (ulonglong)(uint)(iVar14 << 4));
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    if (lVar12 != 0) {
      lVar12 = *(longlong *)(*plVar11 + (ulonglong)(uint)(iVar14 << 4));
      plVar4 = *(longlong **)(lVar12 + 0x30);
      if (plVar4 != (longlong *)0x0) {
        lVar12 = *(longlong *)(lVar12 + 0x28);
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar9 = (int)plVar4[1];
        do {
          plVar18 = (longlong *)0x0;
          if (iVar9 == 0) break;
          LOCK();
          iVar7 = (int)plVar4[1];
          bVar20 = iVar9 == iVar7;
          if (bVar20) {
            *(int *)(plVar4 + 1) = iVar9 + 1;
            iVar7 = iVar9;
          }
          iVar9 = iVar7;
          UNLOCK();
          plVar18 = plVar4;
        } while (!bVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        if (plVar18 != (longlong *)0x0) {
          if (lVar12 != 0) {
            local_78 = *(undefined8 *)(*plVar11 + (ulonglong)(uint)(iVar14 << 4));
            local_70 = *(longlong *)(*plVar11 + 8 + (ulonglong)(uint)(iVar14 << 4));
            if (local_70 != 0) {
              LOCK();
              *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
              UNLOCK();
            }
            FUN_1477d5d24(lVar12,&local_78);
          }
          LOCK();
          plVar4 = plVar18 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
      }
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar15 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  lVar12 = FUN_140081d40(param_5,0);
  puVar6 = local_88;
  if (lVar12 == 0) {
LAB_143347cff:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cabb108) && (FUN_144b3d300(&DAT_14cabb108), DAT_14cabb108 == -1)) {
      FUN_140056680(&DAT_14cabb0f8,L"/Engine/EngineSounds/Submixes");
      atexit((_func_5014 *)&LAB_143348030);
      _Init_thread_footer(&DAT_14cabb108);
    }
    local_98 = &DAT_149dfb77a;
    if (*(int *)(puVar6 + 1) != 0) {
      local_98 = (undefined2 *)*puVar6;
    }
    puVar13 = &DAT_149dfb77a;
    if (DAT_14cabb100 != 0) {
      puVar13 = DAT_14cabb0f8;
    }
    FUN_140002266(&local_68,L"%s/%s.%s",puVar13);
    local_58 = local_68;
    local_50 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      local_50 = 0;
    }
    FUN_14475bf92(param_5);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    lVar12 = FUN_140081d40(param_5,0);
    if (lVar12 != 0) {
      lVar16 = FUN_14105a990();
      if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) goto LAB_143347e17;
    }
    bVar5 = local_89;
    if (*(int *)(puVar6 + 1) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)*puVar6;
    }
    FUN_1446f470e(&local_80,puVar13,1);
    uVar10 = FUN_14105a990();
    lVar12 = FUN_1477bc50b(uVar10,local_80);
    *(byte *)(lVar12 + 0xf0) = *(byte *)(lVar12 + 0xf0) & 0xfe | bVar5;
  }
  else {
    lVar16 = FUN_14105a990();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8
         ) != lVar16 + 0x30)) goto LAB_143347cff;
  }
LAB_143347e17:
  uVar8 = *(uint *)(lVar12 + 0xc);
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  else {
    lVar16 = 0;
  }
  FUN_1447f71cc(lVar16,0x40000000);
  plVar15 = (longlong *)0x0;
  lVar16 = 0;
  do {
    if (*(longlong *)(*plVar19 + lVar16) == lVar12) {
      plVar19 = *(longlong **)(*plVar11 + lVar16 * 2);
      plVar15 = *(longlong **)(*plVar11 + 8 + lVar16 * 2);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      if (plVar19 != (longlong *)0x0) goto LAB_143347f4a;
      break;
    }
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x20);
  plVar11 = (longlong *)FUN_14001cc68(0x5d0,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a570540;
  plVar19 = plVar11 + 2;
  FUN_1477d49de(plVar19,param_1);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (plVar11 == plVar15) {
    if (plVar15 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      LOCK();
      plVar18 = plVar11 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      plVar4 = plVar15;
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar9 = *piVar1;
        UNLOCK();
        plVar15 = plVar11;
joined_r0x000143347efa:
        if (iVar9 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
    }
  }
  else {
    plVar4 = plVar11;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar15 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar9 = *piVar1;
        UNLOCK();
        goto joined_r0x000143347efa;
      }
    }
  }
  plVar15 = plVar4;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar11 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_143347f4a:
  FUN_1477b9f14(param_1 + 0xce0,*(undefined4 *)(lVar12 + 0xc));
  *(longlong *)(*(longlong *)(param_1 + 0xb38) + param_2 * 8) = lVar12;
  plVar11 = (longlong *)((ulonglong)(uint)(iVar14 << 4) + *(longlong *)(param_1 + 0xb48));
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)plVar11[1];
  *plVar11 = (longlong)plVar19;
  plVar11[1] = (longlong)plVar15;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1477d51a8(plVar19,lVar12,0);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar15 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
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
LAB_143347b57:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143348042 FUN_143348042 body=2397 status=ok
// SIG undefined FUN_143348042(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000143348738 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143348042(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  code *pcVar21;
  bool bVar22;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_fc;
  code *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  code *local_d8;
  longlong *local_d0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  longlong *local_a0;
  code *local_88;
  int local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar5 != 2)) {
    if (iVar5 != 1) goto LAB_1433480a2;
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    if (DVar6 != DVar7) goto LAB_1433480a2;
  }
  *(undefined1 *)((longlong)param_1 + 0xe49) = 1;
  plVar10 = (longlong *)FUN_145b54fcc();
  lVar16 = plVar10[0x22];
  if (lVar16 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar16 = plVar10[0x22];
  }
  FUN_140056680(&local_88,L"MasterSubmixDefault");
  local_108 = lVar16 + 0xd8;
  FUN_1433479a4(param_1,0,&local_88,0);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar16 + 0xf8) != 0) {
    FUN_140056680(&local_88,L"BaseDefault");
    local_108 = lVar16 + 0xf8;
    FUN_1433479a4(param_1,1,&local_88,0);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(&local_88,L"MasterReverbSubmixDefault");
  local_108 = lVar16 + 0x118;
  FUN_1433479a4(param_1,2,&local_88);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14c7610e0 == 0) {
    FUN_140056680(&local_88,L"MasterEQSubmixDefault");
    local_108 = lVar16 + 0x138;
    FUN_1433479a4(param_1,3,&local_88);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((*(byte *)(param_1 + 0xb3) & 8) != 0) && ((longlong *)param_1[0x1e] != (longlong *)0x0)) {
    lVar16 = (**(code **)(*(longlong *)param_1[0x1e] + 0x38))();
    uVar8 = *(uint *)(lVar16 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar8 & 0xffff) * 0x18) + DAT_14c9647c8[uVar8 >> 0x10];
    }
    else {
      lVar17 = 0;
    }
    FUN_1447f71cc(lVar17,0x40000000);
    FUN_1477bc5c4(param_1,lVar16);
    FUN_1433438ce(param_1,&local_88,lVar16);
    local_d8 = (code *)0x0;
    local_d0 = (longlong *)CONCAT44(uStack_7c,local_80);
    if (local_d0 != (longlong *)0x0) {
      iVar5 = (int)local_d0[1];
      do {
        if (iVar5 == 0) {
          local_d0 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar14 = (int)local_d0[1];
        bVar22 = iVar5 == iVar14;
        if (bVar22) {
          *(int *)(local_d0 + 1) = iVar5 + 1;
          iVar14 = iVar5;
        }
        iVar5 = iVar14;
        UNLOCK();
      } while (!bVar22);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_7c,local_80) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_7c,local_80) + 0x10))();
      }
      if (local_d0 != (longlong *)0x0) {
        local_d8 = local_88;
      }
    }
    FUN_1477bc7c4(param_1,lVar16,&local_d8);
    (**(code **)(*(longlong *)param_1[0x1e] + 0x30))((longlong *)param_1[0x1e],&local_e8);
    if ((local_e8 != 0) && (*(int *)(local_e8 + 0x50) != 0)) {
      uVar8 = *(uint *)(local_e8 + 0x4c);
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar10 = (longlong *)((ulonglong)((uVar8 & 0xffff) * 0x18) + DAT_14c9647c8[uVar8 >> 0x10]);
        if ((((plVar10 != (longlong *)0x0) && ((int)plVar10[2] == *(int *)(local_e8 + 0x50))) &&
            ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
           (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
          plVar13 = param_1;
          uVar19 = FUN_1433438ce(param_1,&local_88,lVar16);
          plVar10 = (longlong *)CONCAT44(uStack_7c,local_80);
          if (plVar10 == (longlong *)0x0) {
LAB_14334858f:
            if (lVar16 == 0) {
              local_fc = (undefined4)CONCAT71((int7)(uVar19 >> 8),1);
              uVar19 = 0;
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(lVar16 + 0xc);
              if ((int)uVar8 < DAT_14c9647dc) {
                lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) + DAT_14c9647c8[uVar8 >> 0x10];
                plVar13 = DAT_14c9647c8;
              }
              else {
                lVar16 = 0;
              }
              uVar19 = (ulonglong)*(uint *)(lVar16 + 0x10);
              if (*(uint *)(lVar16 + 0x10) == 0) {
                local_fc = 1;
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                uVar15 = DAT_14c964868 + 1;
                bVar22 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar22) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                uVar9 = *(uint *)(lVar16 + 0x10);
                bVar22 = uVar9 == 0;
                if (bVar22) {
                  *(uint *)(lVar16 + 0x10) = uVar15;
                  uVar9 = 0;
                }
                UNLOCK();
                if (bVar22) {
                  uVar9 = uVar15;
                }
                uVar19 = (ulonglong)uVar9;
              }
              else {
                local_fc = (undefined4)CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
              }
            }
            plVar10 = (longlong *)0x0;
            pcVar21 = (code *)0x0;
          }
          else {
            uVar19 = (ulonglong)*(uint *)(plVar10 + 1);
            do {
              uVar8 = (uint)uVar19;
              if (uVar8 == 0) {
                plVar10 = (longlong *)0x0;
                break;
              }
              LOCK();
              uVar15 = *(uint *)(plVar10 + 1);
              if (uVar8 == uVar15) {
                *(uint *)(plVar10 + 1) = uVar8 + 1;
              }
              else {
                uVar19 = (ulonglong)uVar15;
              }
              UNLOCK();
            } while (uVar8 != uVar15);
            plVar13 = (longlong *)CONCAT44(uStack_7c,local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              uVar19 = (**(code **)(*plVar13 + 0x10))();
            }
            if (plVar10 == (longlong *)0x0) goto LAB_14334858f;
            if (lVar16 == 0) {
              uVar8 = 0;
              uVar19 = 0;
            }
            else {
              uVar8 = *(uint *)(lVar16 + 0xc);
              if ((int)uVar8 < DAT_14c9647dc) {
                lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) + DAT_14c9647c8[uVar8 >> 0x10];
              }
              else {
                lVar16 = 0;
              }
              uVar19 = (ulonglong)*(uint *)(lVar16 + 0x10);
              if (*(uint *)(lVar16 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                uVar15 = DAT_14c964868 + 1;
                bVar22 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar22) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                uVar9 = *(uint *)(lVar16 + 0x10);
                bVar22 = uVar9 == 0;
                if (bVar22) {
                  *(uint *)(lVar16 + 0x10) = uVar15;
                  uVar9 = 0;
                }
                UNLOCK();
                if (bVar22) {
                  uVar9 = uVar15;
                }
                uVar19 = (ulonglong)uVar9;
              }
            }
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            local_fc = 0;
            pcVar21 = local_88;
          }
          plVar13 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
          }
          local_88 = (code *)0x0;
          puVar11 = (undefined8 *)FUN_14001cc68(0x30,8);
          uVar3 = local_fc;
          *puVar11 = &PTR_FUN_14a570560;
          plVar20 = puVar11 + 1;
          *plVar20 = (longlong)pcVar21;
          puVar11[2] = plVar10;
          puVar11[3] = (ulonglong)uVar8 | uVar19 << 0x20;
          puVar11[4] = local_e8;
          puVar11[5] = plVar13;
          if (plVar20 == (longlong *)0x0) {
            pcVar21 = (code *)0x0;
          }
          else {
            pcVar21 = FUN_143351f28;
            local_88 = FUN_143351f28;
          }
          puVar12 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar12 = 0;
          puVar12[2] = pcVar21;
          puVar12[4] = puVar11;
          local_78 = 0;
          *(undefined4 *)(puVar12 + 8) = local_58;
          *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_54;
          *(undefined4 *)(puVar12 + 9) = uStack_50;
          *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_4c;
          *(undefined4 *)(puVar12 + 6) = local_68;
          *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_64;
          *(undefined4 *)(puVar12 + 7) = uStack_60;
          *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_5c;
          if (plVar20 != (longlong *)0x0) {
            local_88 = (code *)0x0;
          }
          if (puVar12 != (undefined8 *)0x0) {
            puVar11 = (undefined8 *)param_1[0x1c4];
            param_1[0x1c4] = (longlong)puVar12;
            *puVar11 = puVar12;
            if (local_88 != (code *)0x0) {
              (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
            }
          }
          if ((char)uVar3 == '\0') {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
            LOCK();
            plVar13 = plVar10 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
      }
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_e0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
  }
  FUN_1477ba7b8(&local_88);
  uVar19 = local_78 & 0xffffffff;
  if ((-1 < (int)local_78) && ((int)local_78 < local_80)) {
    do {
      plVar10 = *(longlong **)(local_88 + (uVar19 & 0xffffffff) * 8);
      lVar16 = 0;
      do {
        if (*(longlong **)(param_1[0x167] + lVar16 * 8) == plVar10) goto LAB_1433487fb;
        lVar16 = lVar16 + 1;
      } while (lVar16 != 4);
      cVar4 = (**(code **)(*plVar10 + 0x2b8))(plVar10,1);
      if (cVar4 == '\0') {
        FUN_1477bc5c4(param_1,plVar10);
        FUN_1433438ce(param_1,&local_d8,plVar10);
        local_f8 = (code *)0x0;
        local_f0 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          iVar5 = (int)local_d0[1];
          do {
            if (iVar5 == 0) {
              local_f0 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar14 = (int)local_d0[1];
            bVar22 = iVar5 == iVar14;
            if (bVar22) {
              *(int *)(local_d0 + 1) = iVar5 + 1;
              iVar14 = iVar5;
            }
            iVar5 = iVar14;
            UNLOCK();
          } while (!bVar22);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
          if (local_f0 != (longlong *)0x0) {
            local_f8 = local_d8;
          }
        }
        FUN_1477bc7c4(param_1,plVar10,&local_f8);
      }
LAB_1433487fb:
      uVar19 = (longlong)(int)local_78;
      do {
        uVar18 = uVar19;
        uVar19 = uVar18 + 1;
        local_78 = CONCAT44(local_78._4_4_,(int)uVar19);
        if ((longlong)local_80 <= (longlong)uVar19) break;
      } while (*(longlong *)(local_88 + uVar19 * 8) == 0);
    } while ((-2 < (longlong)uVar18) && ((int)uVar19 < local_80));
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0xe49) = 0;
LAB_1433480a2:
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    local_b8 = 0;
    local_a8 = &PTR_LAB_14a570580;
    local_c8 = &LAB_14335212a;
    local_a0 = param_1;
    FUN_1415826cc();
  }
  else {
    lVar17 = -4;
    lVar16 = 0;
    iVar5 = DAT_14c7610e0;
    do {
      if (iVar5 != 0 && lVar17 == -1) break;
      lVar2 = ((longlong *)param_1[0x167])[lVar17 + 4];
      if ((lVar2 != 0) && (lVar2 != *(longlong *)param_1[0x167])) {
        FUN_1477bca92(param_1,lVar2,param_1[0x169] + lVar16);
        iVar5 = DAT_14c7610e0;
      }
      lVar16 = lVar16 + 0x10;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0);
    FUN_1477bccac(&local_88);
    uVar19 = local_78 & 0xffffffff;
    pcVar21 = local_88;
    if ((int)local_78 < local_80 && -1 < (int)local_78) {
      iVar5 = local_80;
      do {
        lVar16 = *(longlong *)(pcVar21 + (uVar19 & 0xffffffff) * 8);
        iVar14 = (int)uVar19;
        if (lVar16 != 0) {
          lVar17 = 0;
          do {
            if (*(longlong *)(param_1[0x167] + lVar17 * 8) == lVar16) goto LAB_143348216;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 4);
          FUN_1477b9de4(param_1 + 0x19c,&local_d8,*(undefined4 *)(lVar16 + 0xc));
          if (local_d8 != (code *)0x0) {
            FUN_1477bca92(param_1,lVar16,&local_d8);
          }
          plVar10 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_d0 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          pcVar21 = local_88;
          iVar5 = local_80;
          iVar14 = (int)local_78;
        }
LAB_143348216:
        uVar19 = (longlong)iVar14;
        do {
          uVar18 = uVar19;
          uVar19 = uVar18 + 1;
          local_78 = CONCAT44(local_78._4_4_,(int)uVar19);
          if ((longlong)iVar5 <= (longlong)uVar19) break;
        } while (*(longlong *)(pcVar21 + uVar19 * 8) == 0);
      } while ((-2 < (longlong)uVar18) && ((int)uVar19 < iVar5));
    }
    if (pcVar21 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433489a0 FUN_1433489a0 body=87 status=ok
// SIG undefined FUN_1433489a0(void)

undefined4 * FUN_1433489a0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 48000;
  param_2[1] = 0x400;
  param_2[2] = 2;
  param_2[3] = 0;
  param_2[4] = 0;
  plVar1 = *(longlong **)(param_1 + 0xb68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
    plVar1 = (longlong *)FUN_145b54fcc();
    if (plVar1[0x22] == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
    }
  }
  return param_2;
}



// FUNCTION 1433489f8 FUN_1433489f8 body=100 status=ok
// SIG undefined FUN_1433489f8(void)

void FUN_1433489f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000143348a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143348a5c FUN_143348a5c body=85 status=ok
// SIG undefined FUN_143348a5c(void)

void FUN_143348a5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1477cc8d1(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000143348aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143348ab2 FUN_143348ab2 body=129 status=ok
// SIG undefined FUN_143348ab2(void)

void FUN_143348ab2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x10);
  return;
}



// FUNCTION 143348b34 FUN_143348b34 body=159 status=ok
// SIG undefined FUN_143348b34(void)

void FUN_143348b34(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143348bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143348bd4 FUN_143348bd4 body=132 status=ok
// SIG undefined FUN_143348bd4(void)

void FUN_143348bd4(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x22c) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))
                      (*(longlong **)(param_1 + 0xb8),DAT_14c7610fc,0);
    if (cVar1 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
    }
    FUN_14334693e(param_1);
    if (param_2 != '\0') {
      FUN_1433473a6(param_1);
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))
                      (*(longlong **)(param_1 + 0xb8),1000,0);
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143348c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143348c58 FUN_143348c58 body=676 status=ok
// SIG undefined FUN_143348c58(void)

void FUN_143348c58(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  longlong local_48;
  char local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 == 0) || (*(char *)((longlong)param_1 + 0xe49) != '\0')) goto LAB_143348c88;
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a570900;
    local_78 = &LAB_1433536ea;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = (char)param_3;
    FUN_1415826cc();
    goto LAB_143348c88;
  }
  bVar9 = true;
  if (*(longlong *)param_1[0x167] != param_2) {
    lVar7 = 1;
    do {
      if (lVar7 == 4) {
        lVar7 = FUN_1459e9f38();
        if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
           (FUN_147d3e9a8(param_2,&local_98,(int)param_1[0x12]), local_98 == 0)) goto LAB_143348eeb;
        FUN_1433438ce(param_1,&local_88);
        if (local_80 == (longlong *)0x0) goto LAB_143348ea2;
        iVar5 = (int)local_80[1];
        goto LAB_143348e78;
      }
      plVar6 = (longlong *)param_1[0x167] + lVar7;
      lVar7 = lVar7 + 1;
    } while (*plVar6 != param_2);
  }
  goto LAB_143348cea;
  while( true ) {
    LOCK();
    iVar3 = (int)local_80[1];
    bVar9 = iVar5 == iVar3;
    if (bVar9) {
      *(int *)(local_80 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar6 = local_80;
    if (bVar9) break;
LAB_143348e78:
    if (iVar5 == 0) {
      plVar6 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_80 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_80 + 0x10))();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_143348ea2:
    bVar9 = true;
    plVar6 = (longlong *)0x0;
LAB_143348ea8:
    (**(code **)(*param_1 + 0x78))(param_1,local_98,param_3);
    if (!bVar9) goto LAB_143348ecc;
  }
  else {
    if (local_88 == 0) {
      bVar9 = false;
      goto LAB_143348ea8;
    }
LAB_143348ecc:
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_143348eeb:
  FUN_1477bc5c4(param_1,param_2);
  bVar9 = false;
LAB_143348cea:
  FUN_1433438ce(param_1,&local_98,param_2);
  local_88 = 0;
  local_80 = local_90;
  if (local_90 == (longlong *)0x0) {
LAB_143348d8e:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)local_90[1];
    do {
      if (iVar5 == 0) {
        local_80 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_90[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(local_90 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    if (local_80 == (longlong *)0x0) goto LAB_143348d8e;
    local_88 = local_98;
    plVar6 = local_80;
  }
  if ((char)param_3 != '\0') {
    local_a8 = local_88;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_a0 = plVar6;
    FUN_1477bc7c4(param_1,param_2,&local_a8,1);
  }
  if (!bVar9) {
    FUN_1477bca92(param_1,param_2,&local_88);
  }
  plVar6 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_143348c88:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143348efe FUN_143348efe body=321 status=ok
// SIG undefined FUN_143348efe(void)

void FUN_143348efe(longlong param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (*(char *)(param_1 + 0xe49) == '\0')) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xb38) + lVar4 * 8) == param_2) goto LAB_143348f29;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    cVar2 = FUN_146269f19();
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar5;
      }
    }
    local_48 = CONCAT44(iVar3,uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14a570920;
    local_78 = &DAT_143353736;
    local_50 = param_1;
    local_40 = param_3;
    FUN_1415826cc();
  }
LAB_143348f29:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334905a FUN_14334905a body=137 status=ok
// SIG undefined FUN_14334905a(void)

undefined8 * FUN_14334905a(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0xb40)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb38) + lVar2 * 8);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) == param_3)) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0xb38) + lVar2) == lVar1) {
            lVar1 = *(longlong *)(param_1 + 0xb48);
            *param_2 = *(undefined8 *)(lVar1 + lVar2 * 2);
            lVar2 = *(longlong *)(lVar1 + 8 + lVar2 * 2);
            param_2[1] = lVar2;
            if (lVar2 == 0) {
              return param_2;
            }
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
            return param_2;
          }
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x20);
        *param_2 = 0;
        param_2[1] = 0;
        return param_2;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0xb40) != lVar2);
  }
  FUN_1477b9de4(param_1 + 0xce0,param_2);
  return param_2;
}



// FUNCTION 1433490e4 FUN_1433490e4 body=407 status=ok
// SIG undefined FUN_1433490e4(void)

void FUN_1433490e4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar6 = FUN_146269f19();
  if (cVar6 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a570940;
    local_78 = &LAB_1433537d4;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1415826cc();
    goto LAB_14334914b;
  }
  FUN_1433438ce(param_1,&local_88,param_2);
  if (local_80 == (longlong *)0x0) {
LAB_1433491bc:
    bVar9 = true;
    plVar8 = (longlong *)0x0;
LAB_1433491c0:
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_1433491d0:
      FUN_1477d8464(0,param_3);
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_1433491d0;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      FUN_1477d8464(uVar4,param_3);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (bVar9) goto LAB_14334914b;
  }
  else {
    iVar7 = (int)local_80[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_80[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(local_80 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
      plVar8 = local_80;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1433491bc;
    if (local_88 == 0) {
      bVar9 = false;
      goto LAB_1433491c0;
    }
    FUN_1477d8464(local_88,param_3);
  }
  LOCK();
  plVar3 = plVar8 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14334914b:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143349298 FUN_143349298 body=415 status=ok
// SIG undefined FUN_143349298(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143349298(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar7 = FUN_146269f19();
  if (cVar7 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a570960;
    local_68 = &LAB_143353824;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
    goto LAB_143349423;
  }
  FUN_1433438ce(param_1,&local_78,param_2);
  if (local_70 == (longlong *)0x0) {
LAB_143349366:
    bVar10 = true;
    plVar9 = (longlong *)0x0;
LAB_14334936a:
    plVar4 = (longlong *)(*(longlong **)(param_1 + 0xb48))[1];
    if (plVar4 == (longlong *)0x0) {
LAB_1433493c1:
      if (_DAT_00000450 != 0) {
        DAT_0000045c = DAT_0000045c & 0xfe;
      }
    }
    else {
      lVar5 = **(longlong **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_1433493c1;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      if (*(int *)(lVar5 + 0x450) != 0) {
        pbVar3 = (byte *)(lVar5 + 0x45c);
        *pbVar3 = *pbVar3 & 0xfe;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (bVar10) goto LAB_143349423;
  }
  else {
    iVar8 = (int)local_70[1];
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_70[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(local_70 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
      plVar9 = local_70;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_143349366;
    if (local_78 == 0) {
      bVar10 = false;
      goto LAB_14334936a;
    }
    if (*(int *)(local_78 + 0x450) != 0) {
      *(byte *)(local_78 + 0x45c) = *(byte *)(local_78 + 0x45c) & 0xfe;
    }
  }
  LOCK();
  plVar4 = plVar9 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_143349423:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334944c FUN_14334944c body=415 status=ok
// SIG undefined FUN_14334944c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334944c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar7 = FUN_146269f19();
  if (cVar7 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a570980;
    local_68 = &LAB_143353870;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
    goto LAB_1433495d7;
  }
  FUN_1433438ce(param_1,&local_78,param_2);
  if (local_70 == (longlong *)0x0) {
LAB_14334951a:
    bVar10 = true;
    plVar9 = (longlong *)0x0;
LAB_14334951e:
    plVar4 = (longlong *)(*(longlong **)(param_1 + 0xb48))[1];
    if (plVar4 == (longlong *)0x0) {
LAB_143349575:
      if (_DAT_00000450 != 0) {
        DAT_0000045c = DAT_0000045c | 1;
      }
    }
    else {
      lVar5 = **(longlong **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_143349575;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      if (*(int *)(lVar5 + 0x450) != 0) {
        pbVar3 = (byte *)(lVar5 + 0x45c);
        *pbVar3 = *pbVar3 | 1;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (bVar10) goto LAB_1433495d7;
  }
  else {
    iVar8 = (int)local_70[1];
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_70[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(local_70 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
      plVar9 = local_70;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14334951a;
    if (local_78 == 0) {
      bVar10 = false;
      goto LAB_14334951e;
    }
    if (*(int *)(local_78 + 0x450) != 0) {
      *(byte *)(local_78 + 0x45c) = *(byte *)(local_78 + 0x45c) | 1;
    }
  }
  LOCK();
  plVar4 = plVar9 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_1433495d7:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143349600 FUN_143349600 body=493 status=ok
// SIG undefined FUN_143349600(void)

void FUN_143349600(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_2;
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a5709a0;
    local_78 = &LAB_1433538bc;
    local_50 = param_1;
    local_48 = param_2;
    FUN_1415826cc();
    goto LAB_143349662;
  }
  FUN_1433438ce(param_1,&local_90,param_2);
  if (local_88 == (longlong *)0x0) {
LAB_1433496d5:
    bVar10 = true;
    plVar8 = (longlong *)0x0;
LAB_1433496da:
    uVar7 = **(undefined8 **)(param_1 + 0xb48);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar6 = (int)plVar3[1];
      do {
        plVar9 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar9 = plVar3;
      } while (!bVar11);
    }
    if (plVar9 == (longlong *)0x0) {
      uVar7 = 0;
    }
    FUN_1477d87ec(uVar7,*(undefined4 *)(local_80 + 0x110),*(undefined4 *)(local_80 + 0x114));
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    FUN_1477ce8ec(param_1 + 0xda0,&local_80);
    if (bVar10) goto LAB_143349662;
  }
  else {
    iVar6 = (int)local_88[1];
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_88[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(local_88 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar8 = local_88;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1433496d5;
    if (local_90 == 0) {
      bVar10 = false;
      goto LAB_1433496da;
    }
    FUN_1477d87ec(local_90,*(undefined4 *)(local_80 + 0x110),*(undefined4 *)(local_80 + 0x114));
    FUN_1477ce8ec(param_1 + 0xda0,&local_80);
  }
  LOCK();
  plVar3 = plVar8 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
  }
LAB_143349662:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143349806 FUN_143349806 body=441 status=ok
// SIG undefined FUN_143349806(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143349806(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_2;
  cVar6 = FUN_146269f19();
  if (cVar6 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a5709c0;
    local_68 = &LAB_143353908;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
    goto LAB_143349866;
  }
  FUN_1433438ce(param_1,&local_80,param_2);
  if (local_78 == (longlong *)0x0) {
LAB_1433498d7:
    bVar9 = true;
    plVar8 = (longlong *)0x0;
LAB_1433498dc:
    plVar3 = (longlong *)(*(longlong **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_1433498ec:
      LOCK();
      _DAT_00000470 = 0;
      UNLOCK();
    }
    else {
      lVar4 = **(longlong **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_1433498ec;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(undefined4 *)(lVar4 + 0x470) = 0;
      UNLOCK();
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    FUN_1477bf5e2(param_1 + 0xda0,&local_70);
    if (bVar9) goto LAB_143349866;
  }
  else {
    iVar7 = (int)local_78[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_78[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(local_78 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
      plVar8 = local_78;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1433498d7;
    bVar9 = false;
    if (local_80 == 0) goto LAB_1433498dc;
    LOCK();
    *(undefined4 *)(local_80 + 0x470) = 0;
    UNLOCK();
    FUN_1477bf5e2(param_1 + 0xda0,&local_70);
  }
  LOCK();
  plVar3 = plVar8 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
LAB_143349866:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433499d6 FUN_1433499d6 body=451 status=ok
// SIG undefined FUN_1433499d6(void)

void FUN_1433499d6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar7 = FUN_146269f19();
  if (cVar7 == '\0') {
    uVar4 = *param_3;
    uVar5 = param_3[1];
    local_88[0] = (undefined1 *)0x0;
    local_78 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_78 = &PTR_LAB_14a5709e0;
    local_78[1] = param_1;
    local_78[2] = param_2;
    local_78[3] = uVar4;
    local_78[4] = uVar5;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88[0] = &LAB_143353954;
    }
    FUN_1415826cc(local_88);
    goto LAB_143349a64;
  }
  FUN_1433438ce(param_1,&local_98,param_2);
  if (local_90 == (longlong *)0x0) {
LAB_143349ad8:
    bVar10 = true;
    plVar9 = (longlong *)0x0;
LAB_143349add:
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_143349aed:
      FUN_1477d88b6(0,param_3);
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar8 = (int)plVar3[1];
      do {
        if (iVar8 == 0) goto LAB_143349aed;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      FUN_1477d88b6(uVar4,param_3);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (bVar10) goto LAB_143349a64;
  }
  else {
    iVar8 = (int)local_90[1];
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_90[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(local_90 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
      plVar9 = local_90;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_143349ad8;
    if (local_98 == 0) {
      bVar10 = false;
      goto LAB_143349add;
    }
    FUN_1477d88b6(local_98,param_3);
  }
  LOCK();
  plVar3 = plVar9 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
  }
LAB_143349a64:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143349bba FUN_143349bba body=451 status=ok
// SIG undefined FUN_143349bba(void)

void FUN_143349bba(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar7 = FUN_146269f19();
  if (cVar7 == '\0') {
    uVar4 = *param_3;
    uVar5 = param_3[1];
    local_88[0] = (undefined1 *)0x0;
    local_78 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_78 = &PTR_LAB_14a570a00;
    local_78[1] = param_1;
    local_78[2] = param_2;
    local_78[3] = uVar4;
    local_78[4] = uVar5;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88[0] = &LAB_1433539b6;
    }
    FUN_1415826cc(local_88);
    goto LAB_143349c48;
  }
  FUN_1433438ce(param_1,&local_98,param_2);
  if (local_90 == (longlong *)0x0) {
LAB_143349cbc:
    bVar10 = true;
    plVar9 = (longlong *)0x0;
LAB_143349cc1:
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_143349cd1:
      FUN_1477d8920(0,param_3);
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar8 = (int)plVar3[1];
      do {
        if (iVar8 == 0) goto LAB_143349cd1;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      FUN_1477d8920(uVar4,param_3);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (bVar10) goto LAB_143349c48;
  }
  else {
    iVar8 = (int)local_90[1];
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_90[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(local_90 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
      plVar9 = local_90;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_143349cbc;
    if (local_98 == 0) {
      bVar10 = false;
      goto LAB_143349cc1;
    }
    FUN_1477d8920(local_98,param_3);
  }
  LOCK();
  plVar3 = plVar9 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
  }
LAB_143349c48:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143349d9e FUN_143349d9e body=465 status=ok
// SIG undefined FUN_143349d9e(void)

void FUN_143349d9e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_2;
  cVar6 = FUN_146269f19();
  if (cVar6 == '\0') {
    local_40 = *param_3;
    local_68 = 0;
    local_58 = &PTR_LAB_14a570a20;
    local_78 = &LAB_143353a18;
    local_50 = param_1;
    local_48 = param_2;
    FUN_1415826cc();
    goto LAB_143349e0a;
  }
  FUN_1433438ce(param_1,&local_90,param_2);
  if (local_88 == (longlong *)0x0) {
LAB_143349e7d:
    bVar9 = true;
    plVar8 = (longlong *)0x0;
LAB_143349e82:
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_143349e92:
      FUN_1477d8c62(0,param_3);
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_143349e92;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      FUN_1477d8c62(uVar4,param_3);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    FUN_1477ce8ec(param_1 + 0xda0,&local_80);
    if (bVar9) goto LAB_143349e0a;
  }
  else {
    iVar7 = (int)local_88[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_88[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(local_88 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
      plVar8 = local_88;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_143349e7d;
    if (local_90 == 0) {
      bVar9 = false;
      goto LAB_143349e82;
    }
    FUN_1477d8c62(local_90,param_3);
    FUN_1477ce8ec(param_1 + 0xda0,&local_80);
  }
  LOCK();
  plVar3 = plVar8 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
  }
LAB_143349e0a:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143349f88 FUN_143349f88 body=436 status=ok
// SIG undefined FUN_143349f88(void)

void FUN_143349f88(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_2;
  cVar6 = FUN_146269f19();
  if (cVar6 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a570a40;
    local_68 = &LAB_143353a68;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
    goto LAB_143349fe8;
  }
  FUN_1433438ce(param_1,&local_80,param_2);
  if (local_78 == (longlong *)0x0) {
LAB_14334a059:
    bVar9 = true;
    plVar8 = (longlong *)0x0;
LAB_14334a05e:
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_14334a06e:
      FUN_1477d90c6(0);
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_14334a06e;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      FUN_1477d90c6(uVar4);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    FUN_1477bf5e2(param_1 + 0xda0,&local_70);
    if (bVar9) goto LAB_143349fe8;
  }
  else {
    iVar7 = (int)local_78[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_78[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(local_78 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
      plVar8 = local_78;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_14334a059;
    if (local_80 == 0) {
      bVar9 = false;
      goto LAB_14334a05e;
    }
    FUN_1477d90c6();
    FUN_1477bf5e2(param_1 + 0xda0,&local_70);
  }
  LOCK();
  plVar3 = plVar8 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
LAB_143349fe8:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334a152 FUN_14334a152 body=791 status=ok
// SIG undefined FUN_14334a152(void)

void FUN_14334a152(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_c0 = (void *)0x0;
    local_b8 = *(int *)(param_3 + 1);
    lVar8 = (longlong)local_b8;
    pvVar2 = (void *)*param_3;
    local_d0 = param_1;
    uStack_c8 = param_2;
    if (lVar8 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1477c9730(&local_c0,local_b8,0);
      memcpy(local_c0,pvVar2,lVar8 << 4);
    }
    local_a0 = *(undefined4 *)(param_3 + 4);
    local_b0 = *(undefined4 *)(param_3 + 2);
    uStack_ac = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_a8 = *(undefined4 *)(param_3 + 3);
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_98 = *param_4;
    local_90 = param_4[1];
    local_88[0] = (undefined1 *)0x0;
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,8);
    pvVar2 = local_c0;
    *puVar7 = &PTR_LAB_14a570a60;
    *(undefined4 *)(puVar7 + 1) = (undefined4)local_d0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_d0._4_4_;
    *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_c8._4_4_;
    puVar7[3] = 0;
    lVar8 = (longlong)local_b8;
    *(int *)(puVar7 + 4) = local_b8;
    local_78 = puVar7;
    if (lVar8 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
    }
    else {
      FUN_1477c9730(puVar7 + 3,local_b8,0);
      memcpy((void *)puVar7[3],pvVar2,lVar8 << 4);
    }
    *(undefined4 *)(puVar7 + 7) = local_a0;
    *(undefined4 *)(puVar7 + 5) = local_b0;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_ac;
    *(undefined4 *)(puVar7 + 6) = uStack_a8;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_a4;
    puVar7[8] = local_98;
    puVar7[9] = local_90;
    if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88[0] = &LAB_143353ab4;
    }
    FUN_1415826cc(local_88);
    if (local_c0 != (void *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14334a3ef;
  }
  FUN_1433438ce(param_1,&local_d0,param_2);
  if (uStack_c8 == (longlong *)0x0) {
LAB_14334a2ef:
    bVar12 = true;
    plVar11 = (longlong *)0x0;
LAB_14334a2f4:
    lVar8 = **(longlong **)(param_1 + 0xb48);
    plVar3 = (longlong *)(*(longlong **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar6 = (int)plVar3[1];
      do {
        plVar9 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar13 = iVar6 == iVar4;
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar9 = plVar3;
      } while (!bVar13);
    }
    plVar10 = (longlong *)0x0;
    if (plVar9 == plVar11) {
      plVar10 = plVar9;
    }
    if (!bVar12 && plVar9 != plVar11) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x00014334a371:
        if (iVar6 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    else if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar11 = plVar9;
        goto joined_r0x00014334a371;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (lVar8 != 0 && plVar9 != (longlong *)0x0) goto LAB_14334a473;
    if (plVar9 == (longlong *)0x0) goto LAB_14334a3ef;
  }
  else {
    iVar6 = (int)uStack_c8[1];
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)uStack_c8[1];
      bVar12 = iVar6 == iVar4;
      if (bVar12) {
        *(int *)(uStack_c8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar9 = uStack_c8;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)uStack_c8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*uStack_c8 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14334a2ef;
    lVar8 = local_d0;
    if (local_d0 == 0) {
      bVar12 = false;
      plVar11 = plVar9;
      goto LAB_14334a2f4;
    }
LAB_14334a473:
    FUN_1477d898c(lVar8,param_3,param_4);
  }
  LOCK();
  plVar11 = plVar9 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
    }
  }
LAB_14334a3ef:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334a486 FUN_14334a486 body=520 status=ok
// SIG undefined FUN_14334a486(void)

void FUN_14334a486(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined1 *local_98 [2];
  undefined8 *local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar7 = FUN_146269f19();
  if (cVar7 == '\0') {
    uVar4 = *param_3;
    uVar5 = param_3[1];
    local_98[0] = (undefined1 *)0x0;
    local_88 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_88 = &PTR_LAB_14a570a80;
    local_88[1] = param_1;
    local_88[2] = param_2;
    local_88[3] = uVar4;
    local_88[4] = uVar5;
    if (local_88 + 1 != (longlong *)0x0) {
      local_98[0] = &LAB_143353b36;
    }
    FUN_1415826cc(local_98);
    goto LAB_14334a66e;
  }
  FUN_1433438ce(param_1,&local_a8,param_2);
  if (local_a0 == (longlong *)0x0) {
LAB_14334a575:
    bVar12 = true;
    plVar9 = (longlong *)0x0;
LAB_14334a579:
    lVar2 = **(longlong **)(param_1 + 0xb48);
    plVar3 = (longlong *)(*(longlong **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar8 = (int)plVar3[1];
      do {
        plVar10 = (longlong *)0x0;
        if (iVar8 == 0) break;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar13 = iVar8 == iVar6;
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
        plVar10 = plVar3;
      } while (!bVar13);
    }
    plVar11 = (longlong *)0x0;
    if (plVar10 == plVar9) {
      plVar11 = plVar10;
    }
    if (!bVar12 && plVar10 != plVar9) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x00014334a5f3:
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    else if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar9 = plVar10;
        goto joined_r0x00014334a5f3;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    plVar9 = plVar10;
    local_a8 = lVar2;
    if (lVar2 != 0 && plVar10 != (longlong *)0x0) goto LAB_14334a6a1;
    if (plVar10 == (longlong *)0x0) goto LAB_14334a66e;
  }
  else {
    iVar8 = (int)local_a0[1];
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_a0[1];
      bVar12 = iVar8 == iVar6;
      if (bVar12) {
        *(int *)(local_a0 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
      plVar9 = local_a0;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14334a575;
    if (local_a8 == 0) {
      bVar12 = false;
      goto LAB_14334a579;
    }
LAB_14334a6a1:
    FUN_1477d8b2c(local_a8,param_3);
  }
  LOCK();
  plVar3 = plVar9 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
  }
LAB_14334a66e:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334a6b2 FUN_14334a6b2 body=320 status=ok
// SIG undefined FUN_14334a6b2(void)

void FUN_14334a6b2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_68 = &PTR_LAB_14a570aa0;
  local_68[1] = param_1;
  local_68[2] = param_2;
  *(bool *)(local_68 + 3) = param_3 == 0;
  *(ulonglong *)((longlong)local_68 + 0x1c) = (ulonglong)uVar5 | uVar3 << 0x20;
  if (local_68 + 1 != (undefined8 *)0x0) {
    local_78[0] = FUN_143353b98;
  }
  FUN_1415826cc(local_78);
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334a7f4 FUN_14334a7f4 body=741 status=ok
// SIG undefined FUN_14334a7f4(void)

void FUN_14334a7f4(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = *(uint *)(param_3 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar6 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar6 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar9;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar6 = uVar9;
      }
      uVar8 = (ulonglong)uVar6;
    }
  }
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x18))();
  local_98 = (void *)0x0;
  local_90 = *(int *)(puVar7 + 1);
  lVar11 = (longlong)local_90;
  pvVar3 = (void *)*puVar7;
  if (lVar11 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar3,lVar11 * 2);
  }
  pvVar3 = local_98;
  local_c0 = *param_2;
  local_b8 = (longlong *)param_2[1];
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  local_b0 = (void *)0x0;
  lVar11 = (longlong)local_90;
  local_a8 = local_90;
  local_c8 = param_1;
  if (lVar11 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_90,0);
    memcpy(local_b0,pvVar3,lVar11 * 2);
  }
  local_a0 = (ulonglong)uVar10 | uVar8 << 0x20;
  local_88[0] = (code *)0x0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x38,8);
  pvVar3 = local_b0;
  *puVar7 = &PTR_LAB_14a570ac0;
  puVar7[1] = local_c8;
  puVar7[2] = local_c0;
  puVar7[3] = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  puVar7[4] = 0;
  lVar11 = (longlong)local_a8;
  *(int *)(puVar7 + 5) = local_a8;
  local_78 = puVar7;
  if (lVar11 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar7 + 4,local_a8,0);
    memcpy((void *)puVar7[4],pvVar3,lVar11 * 2);
  }
  puVar7[6] = local_a0;
  if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_143353f5c;
  }
  FUN_1415826cc(local_88);
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334aada FUN_14334aada body=320 status=ok
// SIG undefined FUN_14334aada(void)

void FUN_14334aada(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_68 = &PTR_LAB_14a570ae0;
  local_68[1] = param_1;
  local_68[2] = param_2;
  *(bool *)(local_68 + 3) = param_3 == 0;
  *(ulonglong *)((longlong)local_68 + 0x1c) = (ulonglong)uVar5 | uVar3 << 0x20;
  if (local_68 + 1 != (undefined8 *)0x0) {
    local_78[0] = FUN_1433542e6;
  }
  FUN_1415826cc(local_78);
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334ac1c FUN_14334ac1c body=622 status=ok
// SIG undefined FUN_14334ac1c(void)

void FUN_14334ac1c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  uint uStack_b8;
  int iStack_b4;
  longlong *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    uVar10 = 0;
    iVar7 = 0;
  }
  else {
    uVar10 = *(uint *)(param_3 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar7 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar7 = iVar9;
      }
    }
  }
  plVar3 = (longlong *)*param_2;
  local_c8 = param_2;
  puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3);
  local_98 = (void *)0x0;
  local_90 = *(int *)(puVar8 + 1);
  lVar11 = (longlong)local_90;
  pvVar4 = (void *)*puVar8;
  if (lVar11 == 0) {
    local_8c = 0;
    iVar9 = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar4,lVar11 * 2);
    iVar9 = local_90;
  }
  pvVar4 = local_98;
  local_a8 = (void *)0x0;
  local_a0 = CONCAT44(local_a0._4_4_,iVar9);
  local_c0 = param_1;
  local_b0 = plVar3;
  uStack_b8 = uVar10;
  iStack_b4 = iVar7;
  if (iVar9 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_1446dd670(&local_a8,iVar9,0);
    memcpy(local_a8,pvVar4,(longlong)iVar9 * 2);
  }
  puVar8 = local_c8;
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar4 = local_a8;
  *local_78 = &PTR_LAB_14a570b00;
  local_78[3] = local_b0;
  local_a8 = (void *)0x0;
  uVar5 = (undefined4)local_a0;
  uVar6 = local_a0._4_4_;
  local_a0 = 0;
  *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
  *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
  *(uint *)(local_78 + 2) = uStack_b8;
  *(int *)((longlong)local_78 + 0x14) = iStack_b4;
  local_78[4] = pvVar4;
  *(undefined4 *)(local_78 + 5) = uVar5;
  *(undefined4 *)((longlong)local_78 + 0x2c) = uVar6;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_1433544f2;
  }
  FUN_1415826cc(local_88);
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)puVar8[1];
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
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334ae8c FUN_14334ae8c body=395 status=ok
// SIG undefined FUN_14334ae8c(void)

void FUN_14334ae8c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xb48);
  plVar4 = *(longlong **)(lVar3 + 0x28);
  if (plVar4 == (longlong *)0x0) goto LAB_14334af22;
  lVar3 = *(longlong *)(lVar3 + 0x20);
  LOCK();
  *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
  UNLOCK();
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) goto LAB_14334aef9;
    LOCK();
    iVar5 = (int)plVar4[1];
    bVar9 = iVar7 == iVar5;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar9);
  if (lVar3 != 0) {
    FUN_1477d819a(lVar3,&local_38,0);
    if (local_38 == (longlong *)0x0) {
LAB_14334afa5:
      if (*(longlong **)(param_1 + 0x2b8) != local_38) {
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        plVar8 = *(longlong **)(param_1 + 0x2c0);
        *(longlong **)(param_1 + 0x2b8) = local_38;
        *(longlong **)(param_1 + 0x2c0) = local_30;
        if (plVar8 != (longlong *)0x0) goto LAB_14334afd6;
      }
    }
    else {
      (**(code **)(*param_2 + 0x10))(param_2);
      cVar6 = (**(code **)(*local_38 + 0x18))(local_38);
      if ((cVar6 == '\0') ||
         (cVar6 = (**(code **)(*local_38 + 0x10))(local_38,param_2), cVar6 == '\0'))
      goto LAB_14334afa5;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      plVar8 = *(longlong **)(param_1 + 0x2c0);
      if (plVar8 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x2c0) = 0;
LAB_14334afd6:
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  LOCK();
  plVar8 = plVar4 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14334aef9:
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_14334af22:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334b02c FUN_14334b02c body=395 status=ok
// SIG undefined FUN_14334b02c(void)

void FUN_14334b02c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xb48);
  plVar4 = *(longlong **)(lVar3 + 0x38);
  if (plVar4 == (longlong *)0x0) goto LAB_14334b0c2;
  lVar3 = *(longlong *)(lVar3 + 0x30);
  LOCK();
  *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
  UNLOCK();
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) goto LAB_14334b099;
    LOCK();
    iVar5 = (int)plVar4[1];
    bVar9 = iVar7 == iVar5;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar9);
  if (lVar3 != 0) {
    FUN_1477d819a(lVar3,&local_38,0);
    if (local_38 == (longlong *)0x0) {
LAB_14334b145:
      if (*(longlong **)(param_1 + 0x2c8) != local_38) {
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        plVar8 = *(longlong **)(param_1 + 0x2d0);
        *(longlong **)(param_1 + 0x2c8) = local_38;
        *(longlong **)(param_1 + 0x2d0) = local_30;
        if (plVar8 != (longlong *)0x0) goto LAB_14334b176;
      }
    }
    else {
      (**(code **)(*param_2 + 0x10))(param_2);
      cVar6 = (**(code **)(*local_38 + 0x20))(local_38);
      if ((cVar6 == '\0') ||
         (cVar6 = (**(code **)(*local_38 + 0x10))(local_38,param_2), cVar6 == '\0'))
      goto LAB_14334b145;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      plVar8 = *(longlong **)(param_1 + 0x2d0);
      if (plVar8 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x2d0) = 0;
LAB_14334b176:
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  LOCK();
  plVar8 = plVar4 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14334b099:
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_14334b0c2:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334b1cb FUN_14334b1cb body=69 status=ok
// SIG undefined FUN_14334b1cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334b1cb(void)

{
  _DAT_14cabb180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334b20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb188,1);
  return;
}



// FUNCTION 14334b210 FUN_14334b210 body=69 status=ok
// SIG undefined FUN_14334b210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334b210(void)

{
  _DAT_14cabb198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334b252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb1a0,1);
  return;
}



// FUNCTION 14334b256 FUN_14334b256 body=178 status=ok
// SIG undefined FUN_14334b256(void)

void FUN_14334b256(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)*param_1 != 0) {
    puVar1 = (undefined4 *)(**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
    FUN_1477bfaed(param_1[2],param_2,*puVar1);
    FUN_1477bff06(param_2 + 8,local_70,puVar1 + 2);
    FUN_1477c0152(param_2 + 8,local_70);
    local_28 = 0;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_70);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334b30a FUN_14334b30a body=434 status=ok
// SIG undefined FUN_14334b30a(void)

void FUN_14334b30a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x30) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x18))();
    puVar4 = *(undefined8 **)(lVar3 + 0x30);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    *(undefined8 *)(lVar3 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    plVar5 = *(longlong **)(param_1 + 0xd0);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
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
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xe0);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x9c));
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x2a8) = 1;
    UNLOCK();
    FUN_1477c61b6(**(undefined8 **)(param_1 + 0xc0),
                  *(undefined4 *)((longlong)*(undefined8 **)(param_1 + 0xc0) + 0x9c));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  plVar5 = *(longlong **)(param_1 + 0xb8);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
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
  LOCK();
  *(undefined4 *)(param_1 + 0x230) = 0;
  UNLOCK();
  *(undefined4 *)(param_1 + 0x7c) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar4 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar4 + 8) & 0xfffffffe) == 2) {
      (**(code **)*puVar4)(puVar4,1);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x110));
  if (*(int *)(param_1 + 0x10c) < 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_1470345fa(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0x220) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014334b44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x110));
  return;
}



// FUNCTION 14334b4bc FUN_14334b4bc body=4238 status=ok
// SIG undefined FUN_14334b4bc(void)

/* WARNING: Removing unreachable block (ram,0x00014334bf03) */
/* WARNING: Removing unreachable block (ram,0x00014334bf09) */

undefined8 FUN_14334b4bc(longlong *param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  void *_Src;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_498 [32];
  longlong local_478;
  longlong *local_470;
  longlong *local_468;
  longlong *local_460;
  longlong *local_458;
  uint uStack_450;
  int iStack_44c;
  float fStack_448;
  uint uStack_444;
  undefined1 auStack_440 [328];
  longlong local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  uint local_2d8;
  uint local_2d4;
  undefined1 local_2d0 [32];
  undefined4 local_2b0;
  int local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  longlong local_2a0;
  uint local_298;
  uint local_294;
  int local_290;
  longlong local_288;
  int local_280;
  undefined4 local_27c;
  float local_278;
  float local_274;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_240 [352];
  undefined1 local_e0 [88];
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  byte local_57;
  char local_56;
  byte local_55;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  undefined1 local_4f;
  undefined1 local_4d;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_498;
  uVar14 = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf9;
  iVar9 = *(int *)(*(longlong *)param_1[2] + 0x36c);
  *(int *)((longlong)param_1 + 0x84) = iVar9;
  if (param_2 == 0) goto LAB_14334b60d;
  plVar3 = *(longlong **)param_1[2];
  if ((longlong)*(int *)((longlong)plVar3 + 0x36c) != 0) {
    bVar24 = *(char *)((longlong)plVar3 + 0x181) != '\x03';
    uVar17 = (ulonglong)(0 < iVar9 && bVar24);
    uVar18 = 0xffffffff;
    if (0 < iVar9 && bVar24) {
      uVar17 = (longlong)*(int *)((longlong)plVar3 + 0x36c) * 2;
      uVar18 = (undefined4)((ulonglong)(longlong)*(int *)((longlong)plVar3 + 0x3b4) / uVar17);
      uVar17 = (ulonglong)(longlong)*(int *)((longlong)plVar3 + 0x3b4) % uVar17;
    }
    plVar16 = (longlong *)param_1[0x1c];
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16,uVar17);
      }
    }
    *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
    param_1[0x23] = 0xbf800000;
    if ((int)param_1[0x4c] != *(int *)((longlong)param_1 + 0x28c)) {
      FUN_1477cf628(param_1 + 0x4b);
      FUN_1477cf76c(param_1 + 0x4b);
    }
    uVar19 = (*(uint *)((longlong)param_1 + 0x2ac) & 0xfffffff7) +
             (*(byte *)((longlong)plVar3 + 0x34d) & 2) * 4;
    *(uint *)((longlong)param_1 + 0x2ac) = uVar19;
    *(uint *)((longlong)param_1 + 0x2ac) =
         (uVar19 & 0xffffffef) + (*(byte *)(param_1[1] + 0x592) & 8) * 2;
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x47) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x234) = 0;
    UNLOCK();
    *(undefined1 *)(param_1 + 0x1e) = 0;
    lVar13 = param_1[0x15];
    if (0 < *(int *)(lVar13 + 0xc)) {
      lVar11 = param_1[0x14];
      lVar22 = **(longlong **)(lVar11 + 0xdb8);
      if (lVar22 == 0) {
        lVar10 = FUN_14001cc68(0xa8,0x10);
        FUN_1477d41aa(lVar10);
      }
      else {
        lVar10 = *(longlong *)(lVar22 + 8);
        lVar5 = *(longlong *)(lVar11 + 0xdb8);
        *(longlong *)(lVar11 + 0xdb8) = lVar22;
        *(undefined8 *)(lVar22 + 8) = 0;
        if (lVar5 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1477d41f8(lVar10,lVar11);
      param_1[0x18] = lVar10;
      if (lVar10 != 0) {
        FUN_1477c0eca(&local_2f8);
        local_2e8 = param_1 + 0x13;
        local_280 = *(int *)((longlong)plVar3 + 0x36c);
        local_288 = param_1[0x18];
        local_27c = uVar18;
        local_56 = FUN_1477c0fb4(param_1);
        FUN_14795f152(param_1[0x14],&local_458);
        local_55 = auStack_440[4] & 1;
        plVar16 = (longlong *)CONCAT44(uStack_444,fStack_448);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar16 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        lVar11 = param_1[2];
        if ((*(byte *)(lVar11 + 0xce) & 8) == 0) {
          local_4f = false;
        }
        else {
          local_4f = *(int *)((longlong)plVar3 + 0x36c) == 4;
        }
        lVar22 = *(longlong *)(lVar11 + 0x60);
        FUN_1477c0a04(&local_458,lVar11,plVar3,lVar22);
        FUN_1477c1054(local_240,&local_458);
        FUN_145821914(&local_458);
        lVar11 = param_1[2];
        if (*(longlong *)(lVar11 + 0x68) != 0) {
          FUN_1477c10dc(local_e0);
          lVar11 = param_1[2];
        }
        plVar16 = local_80;
        if (lVar22 != 0) {
          local_68 = *(undefined8 *)(*(longlong *)(lVar11 + 0x60) + 0x38);
          local_60 = *(undefined8 *)(*(longlong *)(lVar11 + 0x60) + 0x30);
        }
        local_278 = (float)*(int *)(lVar11 + 0xa8);
        local_274 = (float)*(int *)(lVar11 + 0xac);
        local_2a4 = 0;
        local_88 = *(undefined8 *)(lVar11 + 0x70);
        plVar15 = *(longlong **)(lVar11 + 0x78);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar23 = local_80 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            puVar4 = (undefined8 *)*local_80;
            local_80 = plVar15;
            (*(code *)*puVar4)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar15 = local_80;
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              plVar15 = local_80;
            }
          }
        }
        local_80 = plVar15;
        lVar11 = param_1[2];
        local_4d = *(undefined1 *)(lVar11 + 0x80);
        local_478 = lVar13;
        if ((*(char *)(lVar11 + 0x81) == '\x01') &&
           (plVar16 = *(longlong **)(param_1[0x14] + 0xe40), plVar16 != (longlong *)0x0)) {
          local_458 = (longlong *)0x0;
          uStack_450 = 0xffffffff;
          iStack_44c = 0xffffffff;
          fStack_448 = -NAN;
          uStack_444 = 0xffffffff;
          auStack_440._0_16_ = (undefined1  [16])0x0;
          plVar15 = *(longlong **)(lVar11 + 0x88);
          if (plVar15 == (longlong *)0x0) {
            (**(code **)(*plVar16 + 0x10))(plVar16,&local_470);
            plVar15 = local_470;
            if ((local_470 == (longlong *)0x0) || (lVar11 = FUN_14594a054(), lVar11 == 0)) {
              plVar23 = (longlong *)0x0;
            }
            else {
              lVar13 = local_478;
              if (((int)plVar15[7] < *(int *)(lVar11 + 0x38)) ||
                 (plVar23 = local_470,
                 *(longlong *)(plVar15[6] + (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)
                 ) {
                plVar23 = (longlong *)0x0;
              }
            }
            plVar15 = (longlong *)plVar23[0x22];
            if (plVar15 == (longlong *)0x0) {
              (**(code **)(*plVar23 + 1000))(plVar23);
              plVar15 = (longlong *)plVar23[0x22];
            }
          }
          pauVar12 = (undefined1 (*) [16])(**(code **)(*plVar15 + 0x2a8))();
          auVar7 = *pauVar12;
          if (*(longlong *)(*pauVar12 + 8) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(*pauVar12 + 8) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          uVar14 = auStack_440._8_8_;
          if ((longlong *)auStack_440._8_8_ != (longlong *)0x0) {
            LOCK();
            plVar15 = (longlong *)(auStack_440._8_8_ + 8);
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              puVar4 = *(undefined8 **)auStack_440._8_8_;
              auStack_440._0_16_ = auVar7;
              (*(code *)*puVar4)(uVar14);
              LOCK();
              piVar1 = (int *)(uVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              auVar7 = auStack_440._0_16_;
              if (*piVar1 == 0) {
                (**(code **)(*(longlong *)uVar14 + 0x10))(uVar14);
                auVar7 = auStack_440._0_16_;
              }
            }
          }
          auStack_440._0_16_ = auVar7;
          FUN_14795c698(param_1[2],&local_470);
          plVar15 = local_470;
          if ((int)local_468 == 0) {
            plVar15 = (longlong *)&DAT_149dfb77a;
          }
          FUN_1446f470e(&local_460,plVar15,1);
          local_458 = local_460;
          if (local_470 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uStack_450 = *(uint *)(lVar13 + 0xc);
          fStack_448 = *(float *)(param_1[0x14] + 0x7c);
          iStack_44c = (int)(float)*(int *)(param_1[0x14] + 0x74);
          uStack_444 = *(uint *)((longlong)param_1 + 0x7c);
          (**(code **)(*plVar16 + 0x40))(plVar16,&local_470);
          plVar16 = local_468;
          if ((longlong **)(param_1 + 0x19) != &local_470) {
            param_1[0x19] = (longlong)local_470;
            local_470 = (longlong *)0x0;
            plVar15 = (longlong *)param_1[0x1a];
            if (local_468 != plVar15) {
              local_468 = (longlong *)0x0;
              param_1[0x1a] = (longlong)plVar16;
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar16 = plVar15 + 1;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)*plVar16 == 0) {
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
          }
          plVar16 = local_468;
          if (local_468 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_468 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_468)(local_468);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          plVar15 = local_70;
          local_78 = param_1[0x19];
          plVar16 = (longlong *)param_1[0x1a];
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_70 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              puVar4 = (undefined8 *)*local_70;
              local_70 = plVar16;
              (*(code *)*puVar4)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar16 = local_70;
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                plVar16 = local_70;
              }
            }
          }
          local_70 = plVar16;
          uVar14 = auStack_440._8_8_;
          if ((longlong *)auStack_440._8_8_ != (longlong *)0x0) {
            LOCK();
            plVar16 = (longlong *)(auStack_440._8_8_ + 8);
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (*(code *)**(undefined8 **)auStack_440._8_8_)(auStack_440._8_8_);
              LOCK();
              piVar1 = (int *)(uVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*(longlong *)uVar14 + 0x10))(uVar14);
              }
            }
          }
          lVar11 = param_1[2];
        }
        local_50 = *(byte *)((longlong)param_1 + 0x2ac) >> 3 & 1;
        local_290 = 2;
        if (*(longlong *)(lVar11 + 0x48) != 0) {
          local_290 = FUN_147d349f2();
        }
        if (local_280 <= local_290) {
          lVar13 = *(longlong *)(param_1[2] + 0x48);
          if (lVar13 != 0) {
            local_2a4 = *(undefined4 *)(lVar13 + 0xc);
            lVar13 = *(longlong *)(param_1[2] + 0x48);
            if (0 < *(int *)(lVar13 + 0x30)) {
              lVar11 = 8;
              lVar22 = 0;
              do {
                uVar19 = local_298;
                lVar13 = *(longlong *)(lVar13 + 0x28);
                lVar10 = (longlong)(int)local_298;
                local_298 = local_298 + 1;
                if (local_294 < local_298) {
                  FUN_1477ccaf6(&local_2a0,uVar19);
                }
                lVar21 = local_2a0;
                lVar5 = *(longlong *)(lVar13 + -8 + lVar11);
                *(longlong *)(local_2a0 + lVar10 * 0x10) = lVar5;
                if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
                  FUN_1456cec3c();
                }
                lVar21 = lVar21 + lVar10 * 0x10;
                *(uint *)(lVar21 + 8) =
                     *(uint *)(lVar21 + 8) & 0xfffffffe | *(uint *)(lVar13 + lVar11) & 1;
                local_57 = *(byte *)(*(longlong *)(param_1[2] + 0x48) + 0x38) & 1;
                lVar22 = lVar22 + 1;
                lVar13 = *(longlong *)(param_1[2] + 0x48);
                lVar11 = lVar11 + 0x10;
              } while (lVar22 < *(int *)(lVar13 + 0x30));
            }
          }
          if (local_57 == 1) {
            LOCK();
            *(undefined4 *)(param_1 + 0x47) = 0;
            UNLOCK();
          }
          if ((*(byte *)((longlong)plVar3 + 0x34c) & 4) != 0) {
            lVar13 = plVar3[0x7f];
            if (lVar13 == 0) {
              local_2b0 = *(undefined4 *)((longlong)plVar3 + 0xc);
              local_2ac = *(int *)((longlong)plVar3 + 0x36c);
            }
            else {
              local_2b0 = *(undefined4 *)(lVar13 + 0xc);
              local_2ac = *(byte *)(lVar13 + 0x30) + 1;
            }
            cVar8 = (**(code **)(*plVar3 + 0x300))(plVar3);
            if (cVar8 == '\0') {
              local_2a8 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
            }
          }
        }
        lVar13 = param_1[2];
        local_53 = *(byte *)(lVar13 + 0xcc) & 1;
        local_52 = *(byte *)(lVar13 + 0xcc) >> 1 & 1;
        local_51 = *(byte *)(lVar13 + 0xcc) >> 2 & 1;
        local_4c = *(undefined4 *)(lVar13 + 0x178);
        *(uint *)((longlong)param_1 + 0xf4) = *(uint *)(lVar13 + 0xcc) & 1;
        iVar9 = *(int *)((longlong)param_1 + 0x254);
        FUN_1477cf42a(param_1[0x49],(int)param_1[0x4a]);
        *(undefined4 *)(param_1 + 0x4a) = 0;
        if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0x254) != 0)) {
          FUN_1477cf892(param_1 + 0x49);
        }
        FUN_1477c116a(param_1,local_2d0,local_53);
        if ((local_56 == '\x01') && (local_55 != 0)) {
          FUN_1433438ce(param_1[0x14],&local_458,*(undefined8 *)(param_1[2] + 0x10));
          plVar16 = (longlong *)CONCAT44(iStack_44c,uStack_450);
          if (plVar16 != (longlong *)0x0) {
            iVar9 = (int)plVar16[1];
            do {
              if (iVar9 == 0) goto LAB_14334bdf3;
              LOCK();
              iVar6 = (int)plVar16[1];
              bVar24 = iVar9 == iVar6;
              if (bVar24) {
                *(int *)(plVar16 + 1) = iVar9 + 1;
                iVar6 = iVar9;
              }
              iVar9 = iVar6;
              UNLOCK();
            } while (!bVar24);
            if (local_458 != (longlong *)0x0) {
              *(undefined1 *)(param_1 + 0x1e) = 1;
            }
            LOCK();
            plVar15 = plVar16 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
LAB_14334bdf3:
            plVar16 = (longlong *)CONCAT44(iStack_44c,uStack_450);
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) goto LAB_14334c006;
              lVar13 = *plVar16;
LAB_14334c003:
              (**(code **)(lVar13 + 0x10))(plVar16);
            }
          }
        }
        else {
          if (*(longlong *)(param_1[2] + 0x10) == 0) {
            puVar4 = *(undefined8 **)(param_1[0x14] + 0xb48);
            local_458 = (longlong *)puVar4[2];
            if (local_458 == (longlong *)0x0) {
              local_458 = (longlong *)*puVar4;
              plVar16 = (longlong *)puVar4[1];
            }
            else {
              plVar16 = (longlong *)puVar4[3];
            }
            uVar19 = auStack_440._4_4_;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
              UNLOCK();
              uStack_444 = (uint)uStack_444._1_3_ << 8;
              goto LAB_14334beea;
            }
            uStack_444 = (uint)uStack_444._1_3_ << 8;
LAB_14334bead:
            uStack_450 = 0;
            iStack_44c = 0;
            bVar24 = true;
            plVar16 = (longlong *)0x0;
          }
          else {
            FUN_1433438ce(param_1[0x14],&local_458);
            plVar16 = (longlong *)CONCAT44(iStack_44c,uStack_450);
            uVar19 = auStack_440._4_4_;
            uStack_444 = uStack_444 & 0xffffff00;
            if (plVar16 == (longlong *)0x0) goto LAB_14334bead;
LAB_14334beea:
            LOCK();
            *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
            UNLOCK();
            uStack_450 = (uint)plVar16;
            iStack_44c = (int)((ulonglong)plVar16 >> 0x20);
            bVar24 = false;
          }
          fStack_448 = (float)(int)(char)local_52;
          auStack_440._0_16_ = ZEXT416(uVar19) << 0x20;
          uStack_444 = CONCAT31(uStack_444._1_3_,1);
          uVar14 = FUN_1477bee40(&local_458);
          uVar19 = local_2d8;
          auStack_440._8_8_ = uVar14;
          lVar13 = (longlong)(int)local_2d8;
          local_2d8 = local_2d8 + 1;
          if (local_2d4 < local_2d8) {
            FUN_1477cf8c2(&local_2e0,uVar19);
          }
          plVar15 = local_2e0 + lVar13 * 5;
          *plVar15 = (longlong)local_458;
          lVar13 = CONCAT44(iStack_44c,uStack_450);
          plVar15[1] = lVar13;
          if (lVar13 == 0) {
            plVar15[4] = auStack_440._8_8_;
            plVar15[2] = CONCAT44(uStack_444,fStack_448);
            plVar15[3] = auStack_440._0_8_;
            *(uint *)(param_1 + 0x1f) = (uint)local_52;
          }
          else {
            LOCK();
            *(int *)(lVar13 + 0xc) = *(int *)(lVar13 + 0xc) + 1;
            UNLOCK();
            plVar23 = (longlong *)CONCAT44(iStack_44c,uStack_450);
            plVar15[4] = auStack_440._8_8_;
            plVar15[2] = CONCAT44(uStack_444,fStack_448);
            plVar15[3] = auStack_440._0_8_;
            *(uint *)(param_1 + 0x1f) = (uint)local_52;
            if (plVar23 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))();
              }
            }
          }
          if (!bVar24) {
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar13 = *plVar16;
              goto LAB_14334c003;
            }
          }
        }
LAB_14334c006:
        lVar13 = (longlong)*(int *)(param_1[2] + 0x20);
        if (lVar13 != 0) {
          lVar11 = *(longlong *)(param_1[2] + 0x18);
          lVar22 = 0;
          do {
            if (*(longlong *)(lVar11 + 8 + lVar22) != 0) {
              auStack_440._8_8_ = 0;
              FUN_1433438ce(param_1[0x14],&local_470);
              auVar7 = auStack_440._0_16_;
              plVar15 = local_468;
              plVar16 = local_470;
              local_458 = local_470;
              uStack_450 = (uint)local_468;
              iStack_44c = (int)((ulonglong)local_468 >> 0x20);
              auStack_440._1_3_ = 0;
              auStack_440[0] = *(char *)(lVar11 + 0xb0 + lVar22) == '\x01';
              auStack_440._4_12_ = auVar7._4_12_;
              fStack_448 = 0.0;
              if ((*(byte *)(param_1[2] + 0xcc) & 4) != 0) {
                fStack_448 = *(float *)(lVar11 + 0x10 + lVar22);
              }
              uStack_444 = uStack_444 & 0xffffff00;
              uVar14 = FUN_1477bee40(&local_458);
              uVar19 = local_2d8;
              auStack_440._8_8_ = uVar14;
              lVar10 = (longlong)(int)local_2d8;
              local_2d8 = local_2d8 + 1;
              if (local_2d4 < local_2d8) {
                FUN_1477cf8c2(&local_2e0,uVar19);
              }
              plVar23 = local_2e0 + lVar10 * 5;
              *plVar23 = (longlong)plVar16;
              plVar23[1] = (longlong)plVar15;
              if (plVar15 == (longlong *)0x0) {
                plVar23[4] = auStack_440._8_8_;
                plVar23[2] = CONCAT44(uStack_444,fStack_448);
                plVar23[3] = auStack_440._0_8_;
              }
              else {
                LOCK();
                *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
                UNLOCK();
                plVar16 = (longlong *)CONCAT44(iStack_44c,uStack_450);
                plVar23[4] = auStack_440._8_8_;
                plVar23[2] = CONCAT44(uStack_444,fStack_448);
                plVar23[3] = auStack_440._0_8_;
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar16 + 0x10))();
                  }
                }
              }
            }
            lVar22 = lVar22 + 0xb8;
          } while (lVar13 * 0xb8 - lVar22 != 0);
        }
        lVar13 = (longlong)(int)local_2d8;
        if (lVar13 != 0) {
          plVar16 = local_2e0;
          do {
            plVar15 = (longlong *)plVar16[1];
            if (plVar15 != (longlong *)0x0) {
              iVar9 = (int)plVar15[1];
              do {
                if (iVar9 == 0) goto LAB_14334c264;
                LOCK();
                iVar6 = (int)plVar15[1];
                bVar24 = iVar9 == iVar6;
                if (bVar24) {
                  *(int *)(plVar15 + 1) = iVar9 + 1;
                  iVar6 = iVar9;
                }
                iVar9 = iVar6;
                UNLOCK();
              } while (!bVar24);
              if (*plVar16 != 0) {
                AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x22));
                *(undefined4 *)(param_1 + 0x21) = 0;
                if (*(int *)((longlong)param_1 + 0x10c) < 0) {
                  FUN_1470345fa(param_1 + 0x20,0);
                }
                ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x22));
              }
              LOCK();
              plVar23 = plVar15 + 1;
              *(int *)plVar23 = (int)*plVar23 + -1;
              UNLOCK();
              if ((int)*plVar23 == 0) {
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
LAB_14334c264:
            plVar16 = plVar16 + 5;
          } while (plVar16 != local_2e0 + lVar13 * 5);
        }
        cVar8 = FUN_1477c0fb4();
        uVar19 = 0;
        if (((cVar8 == '\0') && (uVar19 = 0, DAT_14c7612fc != 0)) &&
           ((*(byte *)(param_1[2] + 0xcd) & 2) != 0)) {
          uVar19 = (uint)(*(int *)(local_478 + 0xc) < 3) * 2;
        }
        *(uint *)((longlong)param_1 + 0x2ac) =
             *(uint *)((longlong)param_1 + 0x2ac) & 0xfffffffd | uVar19;
        local_58 = (undefined1)(uVar19 >> 1);
        cVar8 = FUN_1477c1292();
        if (cVar8 == '\0') {
          local_260 = 0;
        }
        else {
          local_260 = *(undefined8 *)(param_1[2] + 0xd8);
        }
        if (*(int *)((longlong)param_1 + 0x84) - 1U < 2) {
          bVar2 = *(byte *)(param_1[1] + 0x598);
          if ((bVar2 & 4) == 0) {
            local_258 = 0;
          }
          else {
            local_258 = *(undefined8 *)(param_1[2] + 0xe0);
          }
          if ((bVar2 & 8) == 0) {
            uStack_250 = 0;
          }
          else {
            uStack_250 = *(undefined8 *)(param_1[2] + 0xe8);
          }
          if ((bVar2 & 0x10) == 0) goto LAB_14334c2e6;
          local_248 = *(undefined8 *)(param_1[2] + 0xf0);
        }
        else {
          local_258 = 0;
          uStack_250 = 0;
LAB_14334c2e6:
          local_248 = 0;
        }
        lVar13 = param_1[0x15];
        fVar25 = (float)FUN_147d3f71a(plVar3);
        *(int *)(lVar13 + 0x44) = (int)fVar25;
        lVar13 = param_1[0x15];
        if (*(uint *)(lVar13 + 0x40) < 2) {
          uVar18 = *(undefined4 *)(lVar13 + 0x58);
          lVar11 = param_1[0x16];
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar13 + 0x50);
          *(undefined4 *)(lVar11 + 0x18) = uVar18;
          *(undefined8 *)(lVar11 + 0x1c) = 0;
          *(undefined4 *)(lVar11 + 0x24) = 0;
        }
        else if (((*(uint *)(lVar13 + 0x40) & 0xfffffffe) == 2) &&
                (_Src = (void *)plVar3[0x75], _Src != (void *)0x0)) {
          uVar19 = (int)plVar3[0x76] * *(int *)((longlong)plVar3 + 0x36c);
          uVar20 = uVar19 * 4;
          local_458 = (longlong *)0x0;
          iStack_44c = 0;
          uStack_450 = uVar20;
          if ((uVar19 & 0x3fffffff) != 0) {
            FUN_1447403be(&local_458,0);
            _Src = (void *)plVar3[0x75];
          }
          memcpy(local_458,_Src,(ulonglong)uVar20);
          lVar13 = param_1[0x16];
          if ((longlong **)(lVar13 + 0xa0) == &local_458) {
            if (local_458 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar13 + 0xa0) != 0) {
              FUN_1400020a8();
            }
            *(longlong **)(lVar13 + 0xa0) = local_458;
            local_458 = (longlong *)0x0;
            *(uint *)(lVar13 + 0xa8) = uStack_450;
            *(int *)(lVar13 + 0xac) = iStack_44c;
          }
        }
        plVar3 = local_2f0;
        uVar14 = *(undefined8 *)(param_1[0x15] + 0x38);
        *(undefined8 *)(param_1[0x15] + 0x38) = 0;
        local_2f8 = param_1[0x16];
        if (*(longlong *)(local_2f8 + 0x78) == 0) {
          *(undefined8 *)(local_2f8 + 0x78) = uVar14;
          local_2f8 = param_1[0x16];
        }
        plVar16 = (longlong *)param_1[0x17];
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
        }
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_2f0 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            puVar4 = (undefined8 *)*local_2f0;
            local_2f0 = plVar16;
            (*(code *)*puVar4)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar16 = local_2f0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              plVar16 = local_2f0;
            }
          }
        }
        local_2f0 = plVar16;
        param_1[0x16] = 0;
        plVar3 = (longlong *)param_1[0x17];
        if (plVar3 != (longlong *)0x0) {
          param_1[0x17] = 0;
          LOCK();
          plVar16 = plVar3 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
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
        cVar8 = FUN_1477d4288(param_1[0x18],&local_2f8);
        if (cVar8 != '\0') {
          plVar3 = *(longlong **)(param_1[1] + 0xe0);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))
                      (plVar3,*(undefined4 *)(param_1[0x18] + 0x9c),&local_68,local_248);
          }
          *(undefined1 *)(param_1 + 0x44) = 2;
          (**(code **)(*param_1 + 0x28))(param_1);
          FUN_1477c1334(&local_2f8);
          uVar14 = 1;
          goto LAB_14334b60d;
        }
        *(undefined1 *)(param_1 + 0x44) = 0;
        FUN_1477c1334(&local_2f8);
      }
    }
  }
  FUN_14334b30a(param_1);
  uVar14 = 0;
LAB_14334b60d:
  if ((local_48 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 14334c54c FUN_14334c54c body=947 status=ok
// SIG undefined FUN_14334c54c(void)

void FUN_14334c54c(longlong *param_1,longlong param_2,undefined1 *param_3,uint param_4,int param_5,
                  char param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined **local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  longlong local_70 [3];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = *(undefined4 *)(param_3 + 0x18);
  uVar8 = local_100;
  if (param_6 == '\0') {
    uVar8 = 0;
  }
  lVar2 = *param_1;
  if (param_2 != 0) {
    lVar4 = (ulonglong)param_4 * 0x10;
    iVar1 = *(int *)(param_2 + 8 + lVar4);
    lVar7 = (longlong)iVar1;
    *(uint *)(param_2 + 8 + lVar4) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0xc + lVar4) < iVar1 + 1U) {
      FUN_1477c9a0e((longlong *)(param_2 + lVar4),iVar1);
    }
    lVar4 = *(longlong *)(param_2 + lVar4);
    *(int *)(lVar4 + lVar7 * 0xc) = param_5;
    *(undefined4 *)(lVar4 + 4 + lVar7 * 0xc) = uVar8;
    *(undefined4 *)(lVar4 + 8 + lVar7 * 0xc) = param_7;
    local_100 = *(undefined4 *)(param_3 + 0x18);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0x80;
  uStack_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_e0 = (undefined **)&DAT_14a176f00;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_58 = 1;
  iStack_fc = param_5;
  uStack_f8._0_2_ = CONCAT11((char)param_4,*param_3);
  uStack_f4 = *(undefined4 *)(param_3 + 0x1c);
  local_f0 = *(undefined4 *)(param_3 + 0x20);
  local_ec = *(undefined4 *)(param_3 + 0x24);
  local_e8 = *(undefined4 *)(param_3 + 0x28);
  local_78 = *(undefined4 *)(param_3 + 0x98);
  local_74 = *(undefined2 *)(param_3 + 0x9c);
  FUN_14093c00e(local_70,param_3 + 0xa0);
  lVar4 = *(longlong *)(param_3 + 0xb0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_3 + 0xb0);
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0x248);
  iVar1 = *(int *)(lVar2 + 0x250);
  lVar5 = (longlong)iVar1;
  local_70[2] = lVar4;
  if (lVar5 != 0) {
    lVar4 = lVar7 + 0x90;
    lVar6 = lVar5 * 0xb0;
    do {
      if (*(int *)(lVar4 + -0x8c) == iStack_fc) {
        *(undefined4 *)(lVar4 + -0x84) = uStack_f4;
        *(undefined4 *)(lVar4 + -0x80) = local_f0;
        *(undefined4 *)(lVar4 + -0x7c) = local_ec;
        *(undefined4 *)(lVar4 + -0x78) = local_e8;
        *(undefined4 *)(lVar4 + -0x90) = local_100;
        *(int *)(lVar4 + -0x8c) = iStack_fc;
        *(undefined4 *)(lVar4 + -0x88) = uStack_f8;
        *(undefined4 *)(lVar4 + -0x84) = uStack_f4;
        *(undefined4 *)(lVar4 + -8) = local_78;
        *(undefined2 *)(lVar4 + -4) = local_74;
        FUN_14093c00e(lVar4,local_70);
        lVar7 = local_70[2];
        if (DAT_14c950c29 == '\x01') {
          if (local_70[2] == 0) {
            lVar7 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar7 = local_70[2];
          }
        }
        *(longlong *)(lVar4 + 0x10) = lVar7;
        *(undefined1 *)(lVar4 + 0x18) = 0;
        goto LAB_14334c786;
      }
      lVar4 = lVar4 + 0xb0;
      lVar6 = lVar6 + -0xb0;
    } while (lVar6 != 0);
  }
  *(uint *)(lVar2 + 0x250) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x254) < iVar1 + 1U) {
    FUN_1477c9b04((longlong *)(lVar2 + 0x248),iVar1);
    lVar7 = *(longlong *)(lVar2 + 0x248);
  }
  FUN_1477c9aa2(lVar5 * 0xb0 + lVar7,&local_100);
LAB_14334c786:
  *(byte *)(lVar2 + 0x2ac) = *(byte *)(lVar2 + 0x2ac) | 0x20;
  local_e0 = (undefined **)&DAT_14a176f00;
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  local_e0 = &PTR_FUN_14a177080;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  uVar3 = uStack_d0 >> 0x20;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_14472eb64(&local_d8,0);
  }
  uStack_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    FUN_1446efbd8(local_c8,0);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334c900 FUN_14334c900 body=491 status=ok
// SIG undefined FUN_14334c900(void)

void FUN_14334c900(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if ((((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
      ((*(byte *)(param_1 + 0x90) & 8) == 0)) && (*(char *)(param_1 + 0x220) != '\0')) {
    if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    lVar5 = *(longlong *)(param_1 + 8);
    if ((*(longlong *)(lVar5 + 0xe0) != 0) && ((*(byte *)((longlong)plVar2 + 0xcc) & 8) != 0)) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x9c);
      lVar3 = plVar2[0xc];
      iVar4 = *(int *)(lVar3 + 0x950);
      if (iVar4 == -1) {
        iVar4 = -1;
        if (*(longlong *)(lVar3 + 0x58) != 0) {
          iVar4 = FUN_147962b80(*(longlong *)(lVar3 + 0x58),lVar3 + 0x230);
          lVar5 = *(longlong *)(param_1 + 8);
        }
      }
      local_88[0] = 0;
      local_88[1] = 0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0x3ff00000;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_44 = 0x3ff00000;
      uStack_40 = 0;
      uStack_3c = 0x3ff00000;
      local_38 = 0x3ff0000000000000;
      uStack_30 = 0;
      FUN_14795bf48(lVar5,iVar4,local_88);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xe0);
      (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,local_88,*(undefined8 *)(param_1 + 0x10));
    }
    if (((*(byte *)(param_1 + 0x2ac) & 2) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 200), plVar2 != (longlong *)0x0)) {
      puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60) + 0x230);
      puVar7 = local_88;
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    FUN_1477c1432(param_1);
    FUN_1477c14d4(param_1);
    FUN_1477c157c(param_1);
    FUN_1477c167a(param_1);
    FUN_1477c174a(param_1);
    FUN_1477c1e6e(param_1);
    FUN_1477c21de(param_1);
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa4) =
           *(undefined4 *)
            (*(longlong *)(*plVar2 + 0x208) + (longlong)*(int *)((longlong)plVar2 + 0x9c) * 4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334cb00 FUN_14334cb00 body=890 status=ok
// SIG undefined FUN_14334cb00(void)

ulonglong FUN_14334cb00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 unaff_RBX;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_c8 [2];
  ulonglong local_c0;
  ulonglong local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ushort local_90;
  byte local_8e;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_2 != (longlong *)0x0) && ((int)param_2[0x1f] != 1)) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    *(byte *)(param_1 + 0x2ac) = *(byte *)(param_1 + 0x2ac) & 0xfe;
    fVar3 = *(float *)(param_2 + 0x19);
    lVar9 = FUN_143343ac2(*(undefined8 *)(param_1 + 8),*param_2,
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0.0 < fVar3) & 0xffffffff);
    *(longlong *)(param_1 + 0xa8) = lVar9;
    if (lVar9 != 0) {
      plVar5 = (longlong *)*param_2;
      *(longlong **)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_1 + 0x24) = 0x469c4000;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x7f7fffff;
      *(undefined4 *)(param_1 + 0x30) = 0x7f7fffff;
      LOCK();
      *(undefined4 *)(param_1 + 0x234) = 0;
      UNLOCK();
      fVar15 = *(float *)(plVar5 + 0x20);
      if (0.0 < fVar15) {
        if ((*(byte *)((longlong)plVar5 + 0x34c) & 4) == 0) {
          fVar14 = (float)FUN_147d3f71a(plVar5);
          fVar15 = fVar15 * fVar14;
LAB_14334cc3f:
          iVar8 = (int)fVar15;
          *(int *)(param_1 + 0x7c) = iVar8;
        }
        else {
          cVar7 = (**(code **)(*plVar5 + 0x300))(plVar5);
          if (cVar7 == '\0') {
            fVar15 = (float)*(int *)(*(longlong *)(param_1 + 8) + 0x74) * *(float *)(plVar5 + 0x20);
            goto LAB_14334cc3f;
          }
          iVar8 = *(int *)(param_1 + 0x7c);
        }
        iVar11 = (int)((float)iVar8 * (*(float *)(param_2 + 0x19) / *(float *)(plVar5 + 0x20)));
        if (iVar11 < iVar8) {
          iVar8 = iVar11;
        }
        iVar11 = 0;
        if (0 < iVar8) {
          iVar11 = iVar8;
        }
        *(int *)(param_1 + 0x80) = iVar11;
      }
      local_88 = 0;
      uStack_80 = 0;
      lVar9 = *(longlong *)(param_1 + 0x10);
      lVar6 = *(longlong *)(lVar9 + 0x60);
      if (lVar6 == 0) {
        iVar8 = -0x61c88647;
        uVar12 = 0;
        local_8e = 0;
      }
      else {
        uVar12 = *(ulonglong *)(lVar6 + 0x30);
        iVar8 = *(int *)(lVar6 + 0x54);
        bVar4 = *(byte *)(lVar6 + 0x19a);
        if (*(longlong **)(lVar6 + 0x188) != (longlong *)0x0) {
          uVar10 = (**(code **)(**(longlong **)(lVar6 + 0x188) + 0x30))();
          FUN_1477c2298(&local_88,uVar10);
          (**(code **)(*plVar5 + 0x340))(plVar5,&local_88,0);
          lVar9 = *(longlong *)(param_1 + 0x10);
        }
        local_8e = bVar4 >> 3 & 1;
        iVar8 = iVar8 + -0x61c88647;
      }
      local_c8[0] = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90);
      uVar13 = (int)uVar12 + (int)(uVar12 / 0xffffffff);
      local_b8 = (ulonglong)
                 ((uVar13 >> 2) + uVar13 * 0x40 + iVar8 + *(int *)(lVar9 + 0x180) ^ uVar13);
      local_b0 = (int)(float)*(int *)(*(longlong *)(param_1 + 8) + 0x74);
      local_ac = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x7c);
      local_a8 = *(undefined8 *)(param_1 + 0xa8);
      local_98 = *(undefined4 *)((longlong)param_2 + 0xc4);
      local_90 = (ushort)(0.0 < fVar3);
      local_94 = (undefined4)param_2[0x19];
      local_c0 = uVar12;
      local_a0 = plVar5;
      FUN_14334ce7c(&local_d8,local_c8,&local_88);
      plVar1 = local_d0;
      *(undefined8 *)(param_1 + 0xb0) = local_d8;
      local_d8 = 0;
      plVar5 = *(longlong **)(param_1 + 0xb8);
      if (local_d0 == plVar5) {
LAB_14334cdfa:
        plVar5 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
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
      else {
        local_d0 = (longlong *)0x0;
        *(longlong **)(param_1 + 0xb8) = plVar1;
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
          goto LAB_14334cdfa;
        }
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        FUN_14334b30a(param_1);
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc4) = 0;
        if (lVar6 != 0) {
          *(byte *)(lVar6 + 0x198) = *(byte *)(lVar6 + 0x198) & 0xf7;
        }
      }
      uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(longlong *)(param_1 + 0xb0) != 0);
      FUN_145aa5488(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14334cb8d;
    }
    FUN_14334b30a(param_1);
  }
  uVar12 = 0;
LAB_14334cb8d:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14334ce7c FUN_14334ce7c body=146 status=ok
// SIG undefined FUN_14334ce7c(void)

undefined8 * FUN_14334ce7c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_2 + 0x28) == 0) ||
     ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x3e0) + 0xe4) & 0x40) == 0)) {
    uVar1 = FUN_14001cc68(0x120,0x10);
    FUN_1477c3974(uVar1,param_2,param_3);
    *param_1 = uVar1;
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar2[1] = &DAT_100000001;
    *puVar2 = &PTR_LAB_14a570bd0;
    puVar2[2] = uVar1;
    param_1[1] = puVar2;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 14334cf0e FUN_14334cf0e body=304 status=ok
// SIG undefined FUN_14334cf0e(void)

ulonglong FUN_14334cf0e(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x40))();
    if (cVar6 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xf0));
      lVar3 = *(longlong *)(lVar2 + 0x70);
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0xf0);
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      if (lVar3 != 0) {
        uVar7 = FUN_1477c22f8(*(undefined8 *)(param_1 + 0xb0));
        return uVar7;
      }
      plVar4 = *(longlong **)(param_1 + 0x10);
      uVar7 = CONCAT71((int7)((ulonglong)lpCriticalSection >> 8),1);
      if (plVar4 != (longlong *)0x0) {
        plVar5 = (longlong *)*plVar4;
        if (((*(byte *)((longlong)plVar5 + 0x34c) & 4) == 0) && (plVar5 != (longlong *)0x0)) {
          plVar8 = *(longlong **)(param_1 + 0xa8);
          if (((*(uint *)(plVar8 + 8) & 0xfffffffe) == 2) &&
             (((fVar1 = *(float *)(plVar4 + 0x19), (*(byte *)((longlong)plVar5 + 0x34c) & 1) != 0 ||
               (0.0 < fVar1)) || (plVar5[0x75] == 0)))) {
            if ((fVar1 != 0.0) || (NAN(fVar1))) {
              cVar6 = (**(code **)(*plVar5 + 0x3f8))(plVar5);
              plVar8 = *(longlong **)(param_1 + 0xa8);
              if (cVar6 != '\0') {
                (**(code **)(*plVar8 + 0x28))
                          (plVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 200));
                plVar8 = *(longlong **)(param_1 + 0xa8);
              }
            }
            uVar7 = 0;
            FUN_1477c233a(*(undefined8 *)(param_1 + 0xb0),plVar8[7],0,0);
          }
        }
      }
      goto LAB_14334d021;
    }
  }
  uVar7 = 0;
LAB_14334d021:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14334d03e FUN_14334d03e body=173 status=ok
// SIG undefined FUN_14334d03e(void)

void FUN_14334d03e(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1[2] != 0) {
    if (((*(byte *)(param_1 + 0x12) & 8) != 0) &&
       ((*(int *)((longlong)param_1 + 0x22c) != 0 || (*(int *)((longlong)param_1 + 0x234) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014334d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))(param_1);
      return;
    }
    if (*(int *)((longlong)param_1 + 0x22c) == 0) {
      puVar1 = (undefined8 *)param_1[0x18];
      if ((puVar1 != (undefined8 *)0x0) && ((char)param_1[0x44] == '\x02')) {
        *(ushort *)(puVar1 + 0x14) = (ushort)*(undefined4 *)(puVar1 + 0x14) & 0xfff8 | 5;
        FUN_1477c65be(*puVar1,*(undefined4 *)((longlong)puVar1 + 0x9c));
      }
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
      UNLOCK();
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf7;
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0x46) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x234) = 0;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14334d0ec FUN_14334d0ec body=215 status=ok
// SIG undefined FUN_14334d0ec(void)

void FUN_14334d0ec(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x44] == '\0') {
    return;
  }
  if ((param_1[0x18] != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) {
    lVar1 = *(longlong *)param_1[2];
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_14334d13f;
    if ((((*(byte *)(lVar1 + 0x34c) & 3) != 1) && (*(int *)((longlong)param_1 + 0x234) == 0)) &&
       ((*(int *)((longlong)param_1 + 0x8c) == 0 ||
        ((*(byte *)((longlong)param_1 + 0x2ac) & 0x10) != 0)))) {
      if (*(int *)((longlong)param_1 + 0x22c) != 0) {
        return;
      }
      *(uint *)(param_1[2] + 0xcc) = *(uint *)(param_1[2] + 0xcc) | 0x100000;
      uVar3 = DAT_14c7610f4;
      puVar2 = (undefined8 *)param_1[0x18];
      *(ushort *)(puVar2 + 0x14) = *(ushort *)(puVar2 + 0x14) & 0xfffd;
      FUN_1477c66e8(*puVar2,*(undefined4 *)((longlong)puVar2 + 0x9c),uVar3);
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x22c) = 1;
      UNLOCK();
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf7;
      return;
    }
  }
LAB_14334d13f:
                    /* WARNING: Could not recover jumptable at 0x00014334d14b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 14334d1c4 FUN_14334d1c4 body=125 status=ok
// SIG undefined FUN_14334d1c4(void)

void FUN_14334d1c4(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x220) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x22c) = 0;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0x8c) != 0)) {
      puVar1 = *(undefined8 **)(param_1 + 0xc0);
      *(ushort *)(puVar1 + 0x14) = *(ushort *)(puVar1 + 0x14) & 0xfff8;
      LOCK();
      *(undefined4 *)(puVar1 + 0xe) = 1;
      UNLOCK();
      FUN_1477c6658(*puVar1,*(undefined4 *)((longlong)puVar1 + 0x9c));
    }
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xf7;
    LOCK();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    UNLOCK();
    FUN_14334b30a(param_1);
  }
  FUN_1433fc204(param_1);
  return;
}



// FUNCTION 14334d242 FUN_14334d242 body=418 status=ok
// SIG undefined FUN_14334d242(void)

undefined8 FUN_14334d242(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar4 = FUN_1477c0fb4();
  plVar2 = *(longlong **)(param_1 + 0xc0);
  if (plVar2 != (longlong *)0x0) {
    if ((longlong)*(int *)((longlong)plVar2 + 0x9c) == -1) {
      bVar7 = 1;
    }
    else {
      bVar7 = *(byte *)(*(longlong *)(*plVar2 + 0x1f8) + (longlong)*(int *)((longlong)plVar2 + 0x9c)
                       );
    }
    bVar4 = bVar4 & bVar7;
  }
  if (bVar4 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (((DAT_14c7612fc == 0) || ((*(byte *)(lVar3 + 0xcd) & 2) == 0)) ||
       ((ABS(*(float *)(lVar3 + 0x154) - *(float *)(param_1 + 0x118)) <= 0.01 &&
        (*(char *)(*(longlong *)(*plVar2 + 0x1d8) + (longlong)*(int *)((longlong)plVar2 + 0x9c)) !=
         '\x01')))) {
      if (*(int *)(param_2 + 8) == 0) {
        uVar6 = *(uint *)(param_1 + 0x2ac);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x2ac);
        if (((uVar6 & 0x40) == 0) != (DAT_14c7612fc != 0)) {
          return 0;
        }
      }
      FUN_143343e04((uVar6 & 8) >> 3,1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0xcb8),
                    *(uint *)(lVar3 + 0xcc) >> 0x10 & 1,param_2);
    }
    else {
      *(float *)(param_1 + 0x118) = *(float *)(lVar3 + 0x154);
      *(undefined4 *)(param_2 + 8) = 0;
      if (*(int *)(param_2 + 0xc) < 0) {
        FUN_1470345fa(param_2,0);
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0xcb8);
      FUN_1477beeb0(*(longlong *)(param_1 + 0xa0),iVar1,*(longlong *)(param_1 + 0x10),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x154),
                    CONCAT44(uVar8,*(undefined4 *)(param_1 + 0x20c)),0,1.0 / (float)iVar1,param_2);
    }
    return 1;
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0xd0) != 1) &&
     ((*(uint *)(param_1 + 0x2ac) & 1) == 0)) {
    *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) | 1;
  }
  uVar5 = FUN_1477c3212(param_1,param_2);
  return uVar5;
}



// FUNCTION 14334d3e4 FUN_14334d3e4 body=155 status=ok
// SIG undefined FUN_14334d3e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d3e4(void)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cabb1c8 = 0;
  _DAT_14cabb1d0 = 0;
  _DAT_14cabb1a8 = 0;
  uRam000000014cabb1b0 = 0;
  _DAT_14cabb1d4 = 0xffffffff00000080;
  _DAT_14cabb1dc = 0;
  DAT_14cabb1e8 = 0;
  _DAT_14cabb1f0 = 0;
  local_18 = &local_24;
  local_24 = 0x3f800000;
  local_20 = &local_28;
  local_28 = 0;
  FUN_1477c9b98(&DAT_14cabb1a8,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334d480 FUN_14334d480 body=47 status=ok
// SIG undefined FUN_14334d480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d480(void)

{
  _DAT_14cabb1f0 = 0;
  if (DAT_14cabb1e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ca03a(&DAT_14cabb1a8);
  return;
}



// FUNCTION 14334d4b0 FUN_14334d4b0 body=158 status=ok
// SIG undefined FUN_14334d4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d4b0(void)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cabb220 = 0;
  _DAT_14cabb228 = 0;
  _DAT_14cabb200 = 0;
  uRam000000014cabb208 = 0;
  _DAT_14cabb22c = 0xffffffff00000080;
  _DAT_14cabb234 = 0;
  DAT_14cabb240 = 0;
  _DAT_14cabb248 = 0;
  local_18 = &local_24;
  local_24 = 0x3f800000;
  local_20 = &local_28;
  local_28 = 1;
  FUN_1477c9b98(&DAT_14cabb200,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334d54f FUN_14334d54f body=47 status=ok
// SIG undefined FUN_14334d54f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d54f(void)

{
  _DAT_14cabb248 = 0;
  if (DAT_14cabb240 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ca03a(&DAT_14cabb200);
  return;
}



// FUNCTION 14334d57e FUN_14334d57e body=212 status=ok
// SIG undefined FUN_14334d57e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d57e(void)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cabb278 = 0;
  _DAT_14cabb280 = 0;
  _DAT_14cabb258 = 0;
  uRam000000014cabb260 = 0;
  _DAT_14cabb284 = 0xffffffff00000080;
  _DAT_14cabb28c = 0;
  DAT_14cabb298 = 0;
  _DAT_14cabb2a0 = 0;
  local_4c = 0x3f800000;
  local_50 = 0;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb258,local_34,&local_48);
  local_4c = 0x3f800000;
  local_50 = 9;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb258,local_34,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334d653 FUN_14334d653 body=47 status=ok
// SIG undefined FUN_14334d653(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d653(void)

{
  _DAT_14cabb2a0 = 0;
  if (DAT_14cabb298 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ca03a(&DAT_14cabb258);
  return;
}



// FUNCTION 14334d682 FUN_14334d682 body=216 status=ok
// SIG undefined FUN_14334d682(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d682(void)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cabb2d0 = 0;
  _DAT_14cabb2d8 = 0;
  _DAT_14cabb2b0 = 0;
  uRam000000014cabb2b8 = 0;
  _DAT_14cabb2dc = 0xffffffff00000080;
  _DAT_14cabb2e4 = 0;
  DAT_14cabb2f0 = 0;
  _DAT_14cabb2f8 = 0;
  local_4c = 0x3f800000;
  local_50 = 1;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb2b0,local_34,&local_48);
  local_4c = 0x3f800000;
  local_50 = 10;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb2b0,local_34,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334d75b FUN_14334d75b body=47 status=ok
// SIG undefined FUN_14334d75b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d75b(void)

{
  _DAT_14cabb2f8 = 0;
  if (DAT_14cabb2f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ca03a(&DAT_14cabb2b0);
  return;
}



// FUNCTION 14334d78a FUN_14334d78a body=212 status=ok
// SIG undefined FUN_14334d78a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d78a(void)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cabb328 = 0;
  _DAT_14cabb330 = 0;
  _DAT_14cabb308 = 0;
  uRam000000014cabb310 = 0;
  _DAT_14cabb334 = 0xffffffff00000080;
  _DAT_14cabb33c = 0;
  DAT_14cabb348 = 0;
  _DAT_14cabb350 = 0;
  local_4c = 0x3f800000;
  local_50 = 0;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb308,local_34,&local_48);
  local_4c = 0x3f800000;
  local_50 = 4;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb308,local_34,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334d85f FUN_14334d85f body=47 status=ok
// SIG undefined FUN_14334d85f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d85f(void)

{
  _DAT_14cabb350 = 0;
  if (DAT_14cabb348 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ca03a(&DAT_14cabb308);
  return;
}



// FUNCTION 14334d88e FUN_14334d88e body=216 status=ok
// SIG undefined FUN_14334d88e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d88e(void)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cabb380 = 0;
  _DAT_14cabb388 = 0;
  _DAT_14cabb360 = 0;
  uRam000000014cabb368 = 0;
  _DAT_14cabb38c = 0xffffffff00000080;
  _DAT_14cabb394 = 0;
  DAT_14cabb3a0 = 0;
  _DAT_14cabb3a8 = 0;
  local_4c = 0x3f800000;
  local_50 = 1;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb360,local_34,&local_48);
  local_4c = 0x3f800000;
  local_50 = 5;
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_1477c9b98(&DAT_14cabb360,local_34,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334d967 FUN_14334d967 body=47 status=ok
// SIG undefined FUN_14334d967(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334d967(void)

{
  _DAT_14cabb3a8 = 0;
  if (DAT_14cabb3a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1477ca03a(&DAT_14cabb360);
  return;
}



// FUNCTION 14334d996 FUN_14334d996 body=458 status=ok
// SIG undefined FUN_14334d996(void)

void FUN_14334d996(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_58 [36];
  uint local_34;
  undefined1 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))();
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
    if (iVar2 == 0) {
      local_34 = 0;
      local_30 = 0;
      local_2c = 0x3f800000;
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                (*(longlong **)(param_1 + 0x70),&local_34);
      FUN_147030226(*(undefined8 *)
                     (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x50) * 0x10),
                    local_34,1);
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_30);
      *(undefined4 *)(param_1 + 0xc0) = local_2c;
    }
    else if (iVar2 == 2) {
      local_34 = local_34 & 0xffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                (*(longlong **)(param_1 + 0x70),&local_34);
      uVar6 = CONCAT71((int7)((ulonglong)&local_34 >> 8),(undefined1)local_34);
    }
    else {
      uVar6 = 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_1477c4590(param_1,uVar6 & 0xffffffff);
  }
  if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
    lVar4 = FUN_147973140(DAT_14cace0c0,*(undefined4 *)(param_1 + 0x90));
    if (lVar4 != 0) {
      uVar5 = FUN_1477b91ee(lVar4);
      FUN_1477b39d4(uVar5,*(undefined8 *)(param_1 + 0x98));
    }
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    iVar2 = *(int *)(param_1 + 0x50) + 1;
    if (1 < *(int *)(param_1 + 0x50)) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x50) = iVar2;
    bVar7 = (*(uint *)(param_1 + 0x118) & 4) != 0;
    if (bVar7) {
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffb;
    }
    uVar3 = FUN_1477c233a(param_1,*(undefined8 *)(param_1 + 0x78),iVar2,bVar7);
    if ((*(longlong *)(param_1 + 0x70) == 0) && ((*(byte *)(param_1 + 0x119) & 1) == 0)) {
      FUN_1477c4590(param_1,uVar3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334db61 FUN_14334db61 body=69 status=ok
// SIG undefined FUN_14334db61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334db61(void)

{
  _DAT_14cabb3b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb3c0,1);
  return;
}



// FUNCTION 14334dba6 FUN_14334dba6 body=69 status=ok
// SIG undefined FUN_14334dba6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dba6(void)

{
  _DAT_14cabb3d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb3d8,1);
  return;
}



// FUNCTION 14334dbeb FUN_14334dbeb body=41 status=ok
// SIG undefined FUN_14334dbeb(void)

void FUN_14334dbeb(void)

{
  DAT_14cabb430 = 0;
  if (DAT_14cabb428 != 0) {
    FUN_1400020a8();
  }
  FUN_146172e00();
  return;
}



// FUNCTION 14334dc22 FUN_14334dc22 body=69 status=ok
// SIG undefined FUN_14334dc22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dc22(void)

{
  _DAT_14cabb460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb468,1);
  return;
}



// FUNCTION 14334dc67 FUN_14334dc67 body=69 status=ok
// SIG undefined FUN_14334dc67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dc67(void)

{
  _DAT_14cabb470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb478,1);
  return;
}



// FUNCTION 14334dcac FUN_14334dcac body=69 status=ok
// SIG undefined FUN_14334dcac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dcac(void)

{
  _DAT_14cabb488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dcee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb490,1);
  return;
}



// FUNCTION 14334dcf1 FUN_14334dcf1 body=69 status=ok
// SIG undefined FUN_14334dcf1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dcf1(void)

{
  _DAT_14cabb4a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dd33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb4a8,1);
  return;
}



// FUNCTION 14334dd36 FUN_14334dd36 body=69 status=ok
// SIG undefined FUN_14334dd36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dd36(void)

{
  _DAT_14cabb4b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb4c0,1);
  return;
}



// FUNCTION 14334dd7b FUN_14334dd7b body=69 status=ok
// SIG undefined FUN_14334dd7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dd7b(void)

{
  _DAT_14cabb4d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334ddbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb4d8,1);
  return;
}



// FUNCTION 14334ddc0 FUN_14334ddc0 body=69 status=ok
// SIG undefined FUN_14334ddc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334ddc0(void)

{
  _DAT_14cabb4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334de02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb4f0,1);
  return;
}



// FUNCTION 14334de05 FUN_14334de05 body=69 status=ok
// SIG undefined FUN_14334de05(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334de05(void)

{
  _DAT_14cabb500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334de47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb508,1);
  return;
}



// FUNCTION 14334de4a FUN_14334de4a body=69 status=ok
// SIG undefined FUN_14334de4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334de4a(void)

{
  _DAT_14cabb518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334de8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb520,1);
  return;
}



// FUNCTION 14334de8f FUN_14334de8f body=69 status=ok
// SIG undefined FUN_14334de8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334de8f(void)

{
  _DAT_14cabb528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334ded1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb530,1);
  return;
}



// FUNCTION 14334ded4 FUN_14334ded4 body=69 status=ok
// SIG undefined FUN_14334ded4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334ded4(void)

{
  _DAT_14cabb538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334df16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb540,1);
  return;
}



// FUNCTION 14334df19 FUN_14334df19 body=69 status=ok
// SIG undefined FUN_14334df19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334df19(void)

{
  _DAT_14cabb548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334df5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb550,1);
  return;
}



// FUNCTION 14334df5e FUN_14334df5e body=69 status=ok
// SIG undefined FUN_14334df5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334df5e(void)

{
  _DAT_14cabb558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb560,1);
  return;
}



// FUNCTION 14334dfa3 FUN_14334dfa3 body=69 status=ok
// SIG undefined FUN_14334dfa3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334dfa3(void)

{
  _DAT_14cabb570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334dfe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb578,1);
  return;
}



// FUNCTION 14334dfe8 FUN_14334dfe8 body=103 status=ok
// SIG undefined FUN_14334dfe8(void)

void FUN_14334dfe8(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14334e04f FUN_14334e04f body=69 status=ok
// SIG undefined FUN_14334e04f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334e04f(void)

{
  _DAT_14cabb580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334e091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb588,1);
  return;
}



// FUNCTION 14334e094 FUN_14334e094 body=69 status=ok
// SIG undefined FUN_14334e094(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334e094(void)

{
  _DAT_14cabb598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334e0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb5a0,1);
  return;
}



// FUNCTION 14334e0d9 FUN_14334e0d9 body=69 status=ok
// SIG undefined FUN_14334e0d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334e0d9(void)

{
  _DAT_14cabb5b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334e11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb5b8,1);
  return;
}



// FUNCTION 14334e11e FUN_14334e11e body=69 status=ok
// SIG undefined FUN_14334e11e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334e11e(void)

{
  _DAT_14cabb5c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014334e160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb5d0,1);
  return;
}



// FUNCTION 14334e164 FUN_14334e164 body=463 status=ok
// SIG undefined FUN_14334e164(void)

void FUN_14334e164(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  undefined1 auStack_d8 [40];
  LARGE_INTEGER local_b0;
  longlong local_a8;
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *param_2;
  local_98 = (longlong *)param_2[2];
  param_2[2] = 0;
  local_88 = (undefined4)param_2[4];
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_80 = (undefined4)param_2[5];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_78 = (undefined4)param_2[6];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_70 = (undefined4)param_2[7];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_a8 != 0) {
    *param_2 = 0;
  }
  local_68 = CONCAT31(local_68._1_3_,param_4);
  local_58 = 0;
  uStack_60 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  uVar7 = (ulonglong)(*(int *)(param_1 + 0xb0) == 0);
  lVar1 = param_1 + uVar7 * 0x18;
  uVar3 = *(uint *)(lVar1 + 0x94);
  iVar4 = *(int *)(lVar1 + 0x90);
  *(uint *)(lVar1 + 0x90) = iVar4 + 1U;
  if (uVar3 < iVar4 + 1U) {
    FUN_1477d2540((longlong *)(lVar1 + 0x88),iVar4);
  }
  lVar2 = param_1 + uVar7 * 0x18;
  piVar10 = (int *)(lVar2 + 0x80);
  lVar6 = *(longlong *)(lVar1 + 0x88);
  lVar8 = (longlong)iVar4 * 0x60;
  lVar1 = lVar6 + lVar8;
  *(longlong *)(lVar6 + lVar8) = local_a8;
  *(undefined8 *)(lVar6 + 0x10 + lVar8) = 0;
  if (local_a8 != 0) {
    plVar9 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_88;
    }
    (**(code **)*plVar9)(plVar9,lVar6 + lVar8 + 0x10);
  }
  *(undefined8 *)(lVar1 + 0x50) = local_58;
  *(undefined4 *)(lVar1 + 0x40) = local_68;
  *(undefined4 *)(lVar1 + 0x44) = uStack_64;
  *(undefined4 *)(lVar1 + 0x48) = (undefined4)uStack_60;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_60._4_4_;
  LOCK();
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  UNLOCK();
  uVar5 = *(uint *)(lVar2 + 0x94);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  if (uVar3 != uVar5) {
    uVar7 = (longlong)(int)uVar5 * 0x60;
    if (DAT_14c761110 < uVar7) {
      QueryPerformanceCounter(&local_b0);
      DAT_14c761110 = DAT_14c761110 << 1;
      FUN_143350046(param_1);
    }
    if ((ulonglong)((longlong)DAT_14c761100 << 0x14) <= uVar7) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
  }
  if (local_a8 != 0) {
    plVar9 = (longlong *)&local_88;
    if (local_98 != (longlong *)0x0) {
      plVar9 = local_98;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334e334 FUN_14334e334 body=226 status=ok
// SIG undefined FUN_14334e334(void)

void FUN_14334e334(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1477cb5a3(*(undefined8 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x308));
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x2f8);
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
  plVar3 = *(longlong **)(param_1 + 0x2e8);
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
  plVar3 = *(longlong **)(param_1 + 0x2d8);
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
  plVar3 = *(longlong **)(param_1 + 0x2c8);
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
  FUN_1477c1334(param_1 + 0x10);
  return;
}



// FUNCTION 14334e416 FUN_14334e416 body=189 status=ok
// SIG undefined FUN_14334e416(void)

void FUN_14334e416(longlong param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  DWORD DVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == *(DWORD *)(lVar3 + 0xe1c)) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      lVar6 = (longlong)param_2 * 0x540;
      bVar2 = *(byte *)(lVar3 + 0x520 + lVar6);
      *(byte *)(lVar3 + 0x520 + lVar6) = bVar2 & 99;
      if ((bVar2 & 0x20) != 0) {
        FUN_1433b41b0(lVar3 + lVar6 + 0x4e0);
        pbVar1 = (byte *)(lVar3 + lVar6 + 0x520);
        *pbVar1 = *pbVar1 & 0xdf;
      }
      lVar3 = *(longlong *)(param_1 + 0x118);
      pbVar1 = (byte *)(lVar3 + 0x521 + lVar6);
      *pbVar1 = *pbVar1 | 0x40;
      plVar4 = *(longlong **)(lVar3 + 0x10 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      plVar4 = *(longlong **)(lVar3 + lVar6 + 0x510);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014334e4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14334e4d4 FUN_14334e4d4 body=176 status=ok
// SIG undefined FUN_14334e4d4(void)

void FUN_14334e4d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x00014334e578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14334e584 FUN_14334e584 body=2563 status=ok
// SIG undefined FUN_14334e584(void)

void FUN_14334e584(longlong param_1,char param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  void *pvVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined7 uVar21;
  ulonglong uVar20;
  int iVar22;
  size_t sVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auStack_138 [32];
  longlong *local_118;
  char local_105;
  uint local_104;
  longlong *local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8 [3];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_105 = param_2;
  if (param_3 < (int)(uint)param_4) {
    uVar17 = (ulonglong)param_4 & 0xffffffff;
    local_e0 = param_1 + 0x170;
    lVar24 = (longlong)param_3;
    local_104 = (uint)param_4;
    local_f8 = param_1;
    do {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x118) + 0x521 + lVar24 * 0x540);
      if (((bVar3 & 2) != 0) &&
         (lVar14 = *(longlong *)(param_1 + 0x118) + lVar24 * 0x540,
         (*(byte *)(lVar14 + 0x520) & 0x38) == 8)) {
        if ((bVar3 & 0x40) == 0) {
          iVar15 = *(int *)(lVar14 + 0xe0);
          if ((iVar15 == -1) != (bool)local_105) {
            iVar22 = *(int *)(param_1 + 0x220);
            iVar8 = *(int *)(lVar14 + 0x524);
            local_100 = (longlong *)(lVar14 + 0x50);
            iVar7 = *(int *)(lVar14 + 0x5c);
            iVar25 = 0;
            if (iVar7 < 0) {
              *(undefined4 *)(lVar14 + 0x58) = 0;
              FUN_1470345fa(local_100);
              iVar25 = *(int *)(lVar14 + 0x58);
              iVar7 = *(int *)(lVar14 + 0x5c);
            }
            lVar16 = (longlong)iVar8 * (longlong)iVar22;
            uVar10 = (uint)lVar16;
            *(uint *)(lVar14 + 0x58) = iVar25 + uVar10;
            if ((uint)(iVar7 - iVar25) < uVar10) {
              FUN_145ca0cd4(local_100);
            }
            sVar23 = lVar16 * 4;
            iVar8 = 0;
            memset((void *)((longlong)iVar25 * 4 + *(longlong *)(lVar14 + 0x50)),0,sVar23);
            iVar22 = *(int *)(lVar14 + 0x6c);
            if (iVar22 < 0) {
              *(undefined4 *)(lVar14 + 0x68) = 0;
              FUN_1470345fa(lVar14 + 0x60);
              iVar8 = *(int *)(lVar14 + 0x68);
              iVar22 = *(int *)(lVar14 + 0x6c);
            }
            *(uint *)(lVar14 + 0x68) = uVar10 + iVar8;
            if ((uint)(iVar22 - iVar8) < uVar10) {
              FUN_145ca0cd4(lVar14 + 0x60);
            }
            iVar7 = 0;
            memset((void *)((longlong)iVar8 * 4 + *(longlong *)(lVar14 + 0x60)),0,sVar23);
            iVar22 = *(int *)(lVar14 + 0x3c);
            if (iVar22 < 0) {
              *(undefined4 *)(lVar14 + 0x38) = 0;
              FUN_1470345fa(lVar14 + 0x30);
              iVar7 = *(int *)(lVar14 + 0x38);
              iVar22 = *(int *)(lVar14 + 0x3c);
            }
            *(uint *)(lVar14 + 0x38) = uVar10 + iVar7;
            if ((uint)(iVar22 - iVar7) < uVar10) {
              FUN_145ca0cd4(lVar14 + 0x30);
            }
            memset((void *)((longlong)iVar7 * 4 + *(longlong *)(lVar14 + 0x30)),0,sVar23);
            if ((*(int *)(lVar14 + 0x70) != 0) && ((*(byte *)(lVar14 + 0x520) & 0x40) == 0)) {
              FUN_147034b3a(lVar14 + 0x78);
              uVar12 = *(int *)(lVar14 + 0x524) * *(int *)(lVar14 + 0x70);
              pvVar5 = *(void **)(lVar14 + 0x78);
              uVar10 = *(uint *)(lVar14 + 0x90);
              uVar4 = *(uint *)(lVar14 + 0x88);
              uVar13 = (*(int *)(lVar14 + 0x8c) + uVar4 + ~*(uint *)(lVar14 + 0x90)) % uVar4;
              if ((int)uVar13 <= (int)uVar12) {
                uVar12 = uVar13;
              }
              uVar13 = uVar4 - uVar10;
              if ((int)uVar12 < (int)(uVar4 - uVar10)) {
                uVar13 = uVar12;
              }
              memset((void *)((ulonglong)uVar10 * 4 + (longlong)pvVar5),0,(longlong)(int)uVar13 * 4)
              ;
              memset(pvVar5,0,(longlong)(int)(uVar12 - uVar13) << 2);
              LOCK();
              *(int *)(lVar14 + 0x90) =
                   (int)((ulonglong)(uVar12 + uVar10) % (ulonglong)*(uint *)(lVar14 + 0x88));
              UNLOCK();
              *(byte *)(lVar14 + 0x520) = *(byte *)(lVar14 + 0x520) | 0x40;
            }
            param_1 = local_f8;
            if (iVar15 == -1) {
              local_e8 = *local_100;
              uVar17 = (ulonglong)local_104;
              if (((*(byte *)(*(longlong *)(local_f8 + 0x30) + 0x598) & 0x20) == 0) ||
                 (*(longlong *)(*(longlong *)(local_f8 + 0x30) + 0x110) == 0)) {
                fVar29 = *(float *)(lVar14 + 0x118);
LAB_14334e912:
                fVar26 = 1.0;
              }
              else {
                FUN_147d3536e(lVar14 + 0x388,*(undefined4 *)(lVar14 + 0x3bc),0);
                fVar29 = *(float *)(lVar14 + 0x118);
                fVar26 = *(float *)(*(longlong *)(lVar14 + 0x388) + 4);
                if ((fVar26 == 0.0) && (!NAN(fVar26))) goto LAB_14334e912;
                fVar26 = (float)exp2f(fVar26 / 12.0);
              }
              fVar27 = fVar26 * fVar29;
              if (DAT_14c76110c <= fVar26 * fVar29) {
                fVar27 = DAT_14c76110c;
              }
              if (fVar27 <= 0.0625) {
                fVar27 = 0.0625;
              }
              iVar15 = *(int *)(param_1 + 0x220);
              *(float *)(lVar14 + 0x118) = fVar27;
              if ((iVar15 == 0) || (*(char *)(lVar14 + 0x120) != '\0')) {
                *(undefined1 *)(lVar14 + 0x120) = 0;
                *(float *)(lVar14 + 0x110) = fVar27;
                fVar26 = 0.0;
              }
              else {
                fVar26 = (fVar27 - *(float *)(lVar14 + 0x110)) / (float)iVar15;
                fVar27 = *(float *)(lVar14 + 0x110);
              }
              *(float *)(lVar14 + 0x114) = fVar27;
              *(float *)(lVar14 + 0x11c) = fVar26;
              fVar26 = *(float *)(lVar14 + 0xb8);
              if (0 < *(int *)(param_1 + 0x220)) {
                local_100 = (longlong *)(lVar14 + 0x78);
                iVar15 = 0;
                iVar22 = 0;
                do {
                  bVar3 = *(byte *)(lVar14 + 0x521);
                  if ((char)bVar3 < '\0') break;
                  *(byte *)(lVar14 + 0x521) = bVar3 | 1;
                  if (1.0 <= fVar26) {
                    auVar28 = roundps(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26),1);
                    iVar8 = (int)auVar28._0_4_;
                    *(int *)(lVar14 + 0xbc) = *(int *)(lVar14 + 0xbc) + iVar8;
                    *(longlong *)(lVar14 + 0xc0) = *(longlong *)(lVar14 + 0xc0) + (longlong)iVar8;
                    fVar26 = fVar26 - auVar28._0_4_;
LAB_14334eba6:
                    FUN_1477c780e(param_1);
                  }
                  else if ((bVar3 & 1) == 0) goto LAB_14334eba6;
                  if (*(int *)(lVar14 + 0x70) == 0) {
                    if (0 < *(int *)(lVar14 + 0x524)) {
                      lVar16 = 0;
                      do {
                        fVar27 = *(float *)(*(longlong *)(lVar14 + 0x98) + lVar16 * 4);
                        *(float *)(local_e8 + (longlong)iVar22 * 4 + lVar16 * 4) =
                             (*(float *)(*(longlong *)(lVar14 + 0xa8) + lVar16 * 4) - fVar27) *
                             fVar26 + fVar27;
                        lVar16 = lVar16 + 1;
                      } while (lVar16 < *(int *)(lVar14 + 0x524));
                      iVar22 = iVar22 + (int)lVar16;
                    }
                  }
                  else if (0 < *(int *)(lVar14 + 0x524)) {
                    lVar16 = local_e8 + (longlong)iVar22 * 4;
                    lVar9 = 0;
                    local_f0 = iVar22;
                    local_ec = iVar15;
                    do {
                      fVar27 = *(float *)(*(longlong *)(lVar14 + 0x98) + lVar9 * 4);
                      local_d8[0] = CONCAT44(local_d8[0]._4_4_,
                                             (*(float *)(*(longlong *)(lVar14 + 0xa8) + lVar9 * 4) -
                                             fVar27) * fVar26 + fVar27);
                      pvVar5 = *(void **)(lVar14 + 0x78);
                      uVar10 = *(uint *)(lVar14 + 0x90);
                      uVar4 = *(uint *)(lVar14 + 0x88);
                      uVar12 = (*(int *)(lVar14 + 0x8c) + uVar4 + ~*(uint *)(lVar14 + 0x90)) % uVar4
                      ;
                      if (0 < (int)uVar12) {
                        uVar12 = 1;
                      }
                      uVar13 = uVar4 - uVar10;
                      if ((int)uVar12 < (int)(uVar4 - uVar10)) {
                        uVar13 = uVar12;
                      }
                      memcpy((void *)((ulonglong)uVar10 * 4 + (longlong)pvVar5),local_d8,
                             (longlong)(int)uVar13 * 4);
                      memcpy(pvVar5,(void *)((longlong)local_d8 + (longlong)(int)uVar13 * 4),
                             (longlong)(int)(uVar12 - uVar13) << 2);
                      LOCK();
                      *(uint *)(lVar14 + 0x90) = (uVar12 + uVar10) % *(uint *)(lVar14 + 0x88);
                      UNLOCK();
                      FUN_14703303a(local_100,lVar16,1);
                      lVar9 = lVar9 + 1;
                      lVar16 = lVar16 + 4;
                    } while (lVar9 < *(int *)(lVar14 + 0x524));
                    iVar22 = local_f0 + (int)lVar9;
                    uVar17 = (ulonglong)local_104;
                    param_1 = local_f8;
                    iVar15 = local_ec;
                  }
                  fVar27 = *(float *)(lVar14 + 0x11c) + *(float *)(lVar14 + 0x110);
                  *(float *)(lVar14 + 0x110) = fVar27;
                  fVar26 = fVar26 + fVar27;
                  iVar15 = iVar15 + 1;
                } while (iVar15 < *(int *)(param_1 + 0x220));
              }
              *(float *)(lVar14 + 0xb8) = fVar26;
              *(undefined4 *)(lVar14 + 0x11c) = 0;
              fVar26 = *(float *)(lVar14 + 0x118);
              *(float *)(lVar14 + 0x110) = fVar26;
              iVar15 = *(int *)(param_1 + 0x220);
              *(float *)(lVar14 + 0x118) = fVar29;
              if ((iVar15 == 0) || (*(char *)(lVar14 + 0x120) != '\0')) {
                *(undefined1 *)(lVar14 + 0x120) = 0;
                *(float *)(lVar14 + 0x114) = fVar29;
                *(float *)(lVar14 + 0x110) = fVar29;
                *(undefined4 *)(lVar14 + 0x11c) = 0;
              }
              else {
                *(float *)(lVar14 + 0x11c) = (fVar29 - fVar26) / (float)iVar15;
                *(float *)(lVar14 + 0x114) = fVar26;
              }
            }
            else {
              uVar17 = (ulonglong)local_104;
              if (*(int *)(local_f8 + 0x140) != *(int *)(local_f8 + 0x16c)) {
                uVar10 = *(uint *)(lVar14 + 0xe0);
                lVar16 = *(longlong *)(local_f8 + 0x178);
                if (*(longlong *)(local_f8 + 0x178) == 0) {
                  lVar16 = local_e0;
                }
                iVar15 = *(int *)(lVar16 + (ulonglong)
                                           (*(int *)(local_f8 + 0x180) - 1U &
                                           (uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b8 ^ uVar10)) *
                                           4);
                if (iVar15 != -1) {
                  lVar16 = *(longlong *)(local_f8 + 0x138);
                  do {
                    lVar18 = (longlong)iVar15 * 0x20;
                    lVar9 = lVar16 + lVar18;
                    if ((*(uint *)(lVar16 + lVar18) == uVar10) &&
                       (*(int *)(lVar16 + 4 + lVar18) == -1)) {
                      if (lVar9 != 0) {
                        lVar16 = *(longlong *)(lVar9 + 8);
                        plVar6 = *(longlong **)(lVar9 + 0x10);
                        if (plVar6 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                          UNLOCK();
                        }
                        if (lVar16 != 0) {
                          lVar19 = (longlong)*(int *)(local_f8 + 0x220);
                          lVar18 = *(longlong *)(lVar14 + 0xc0);
                          uVar11 = *(ulonglong *)(lVar14 + 0xe8);
                          uVar21 = (undefined7)((ulonglong)param_4 >> 8);
                          param_4 = (longlong *)CONCAT71(uVar21,uVar11 == 0xffffffffffffffff);
                          lVar9 = lVar18 + lVar19;
                          if ((longlong)uVar11 <= lVar9 && uVar11 != 0xffffffffffffffff) {
                            *(byte *)(lVar14 + 0x521) = *(byte *)(lVar14 + 0x521) | 0x80;
                            uVar10 = (int)uVar11 - (int)lVar18;
                            uVar11 = (ulonglong)uVar10;
                            lVar19 = (longlong)(int)uVar10;
                            lVar9 = lVar18 + lVar19;
                          }
                          *(longlong *)(lVar14 + 0xc0) = lVar9;
                          iVar15 = *(int *)(lVar16 + 0x54);
                          if (iVar15 == *(int *)(lVar14 + 0x524)) {
                            memcpy((void *)*local_100,
                                   *(void **)(lVar16 + 0x30 +
                                             (longlong)*(int *)(lVar16 + 0x50) * 0x10),
                                   lVar19 * iVar15 * 4);
                          }
                          else {
                            local_d8[0] = 0;
                            local_d8[1] = 0;
                            uVar20 = CONCAT71(uVar21,*(undefined1 *)(lVar14 + 0x520)) &
                                     0xffffffffffffff02;
                            uVar11 = CONCAT71((int7)(uVar11 >> 8),*(undefined1 *)(lVar14 + 0x522)) &
                                     0xffffffffffffff08;
                            local_118 = local_d8;
                            FUN_143343e04(CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 3),
                                          (longlong)iVar15,*(undefined4 *)(lVar14 + 0x524),
                                          CONCAT71((int7)(uVar20 >> 8),(byte)uVar20 >> 1));
                            local_118 = (longlong *)local_d8[0];
                            param_4 = local_100;
                            FUN_14702f465(*(undefined4 *)(lVar16 + 0x54),
                                          *(undefined4 *)(lVar14 + 0x524),
                                          lVar16 + (longlong)*(int *)(lVar16 + 0x50) * 0x10 + 0x30,
                                          local_100);
                            if (local_d8[0] != 0) {
                              FUN_1400020a8();
                            }
                          }
                        }
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
                              (**(code **)(*plVar6 + 0x10))(plVar6);
                            }
                          }
                        }
                      }
                      break;
                    }
                    iVar15 = *(int *)(lVar9 + 0x18);
                  } while (iVar15 != -1);
                }
              }
            }
          }
        }
        else {
          iVar15 = *(int *)(param_1 + 0x220);
          iVar22 = *(int *)(lVar14 + 0x524);
          iVar8 = *(int *)(lVar14 + 0x5c);
          iVar7 = 0;
          if (iVar8 < 0) {
            *(undefined4 *)(lVar14 + 0x58) = 0;
            FUN_1470345fa(lVar14 + 0x50);
            iVar7 = *(int *)(lVar14 + 0x58);
            iVar8 = *(int *)(lVar14 + 0x5c);
          }
          lVar16 = (longlong)iVar22 * (longlong)iVar15;
          uVar10 = (uint)lVar16;
          *(uint *)(lVar14 + 0x58) = iVar7 + uVar10;
          if ((uint)(iVar8 - iVar7) < uVar10) {
            FUN_145ca0cd4(lVar14 + 0x50);
          }
          sVar23 = lVar16 * 4;
          iVar22 = 0;
          memset((void *)((longlong)iVar7 * 4 + *(longlong *)(lVar14 + 0x50)),0,sVar23);
          plVar6 = (longlong *)(lVar14 + 0x30);
          iVar15 = *(int *)(lVar14 + 0x3c);
          if (iVar15 < 0) {
            *(undefined4 *)(lVar14 + 0x38) = 0;
            FUN_1470345fa(plVar6);
            iVar22 = *(int *)(lVar14 + 0x38);
            iVar15 = *(int *)(lVar14 + 0x3c);
          }
          *(uint *)(lVar14 + 0x38) = uVar10 + iVar22;
          if ((uint)(iVar15 - iVar22) < uVar10) {
            FUN_145ca0cd4(plVar6);
          }
          memset((void *)((longlong)iVar22 * 4 + *plVar6),0,sVar23);
          uVar17 = (ulonglong)local_104;
          param_1 = local_f8;
        }
      }
      lVar24 = lVar24 + 1;
    } while ((int)lVar24 != (int)uVar17);
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14334ef88 FUN_14334ef88 body=4107 status=ok
// SIG undefined FUN_14334ef88(void)

void FUN_14334ef88(longlong param_1,char param_2,int param_3,int param_4)

{
  int *piVar1;
  size_t _Size;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  bool bVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  void *pvVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1d8 [39];
  char local_1b1;
  longlong *local_1b0;
  void *local_1a8;
  longlong local_1a0;
  int local_194;
  void *local_190;
  undefined8 local_188;
  longlong local_180;
  LPCRITICAL_SECTION local_178;
  undefined8 local_170;
  void *local_168;
  int local_160;
  void *local_158;
  uint local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_3 < param_4) {
    local_178 = (LPCRITICAL_SECTION)(param_1 + 8);
    lVar15 = (longlong)param_3;
    local_1b1 = param_2;
    local_1a0 = param_1;
    do {
      bVar7 = *(byte *)(*(longlong *)(param_1 + 0x118) + 0x521 + lVar15 * 0x540);
      if ((bVar7 & 2) != 0) {
        lVar23 = *(longlong *)(param_1 + 0x118) + lVar15 * 0x540;
        bVar6 = *(byte *)(lVar23 + 0x520);
        if (((bVar6 & 0x38) == 8) &&
           ((((bVar7 & 0x40) == 0 || (*(char *)(lVar23 + 0x1f8) == '\0')) &&
            ((*(int *)(lVar23 + 0xe0) == -1) != (bool)param_2)))) {
          if (0 < *(int *)(lVar23 + 0xf8)) {
            *(undefined4 *)(lVar23 + 0x48) = 0;
            if (*(int *)(lVar23 + 0x4c) < 0) {
              FUN_1470345fa(lVar23 + 0x40,0);
            }
            iVar21 = *(int *)(lVar23 + 0x58);
            if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar21);
            }
            if (*(int *)(lVar23 + 0x4c) < iVar21) {
              FUN_1470345fa(lVar23 + 0x40);
              iVar21 = *(int *)(lVar23 + 0x58);
            }
            memcpy(*(void **)(lVar23 + 0x40),*(void **)(lVar23 + 0x50),(longlong)iVar21 << 2);
            bVar6 = *(byte *)(lVar23 + 0x520);
          }
          local_1a8 = *(void **)(lVar23 + 0x50);
          iVar21 = *(int *)(lVar23 + 0x58);
          if ((char)bVar6 < '\0') {
            iVar20 = *(int *)(lVar23 + 0x138) - *(int *)(lVar23 + 0x134);
            if (*(int *)(param_1 + 0x220) <= iVar20) {
              iVar20 = *(int *)(param_1 + 0x220);
            }
            iVar10 = *(int *)(lVar23 + 0x134) + iVar20;
            *(int *)(lVar23 + 0x134) = iVar10;
            fVar24 = (float)iVar10 * *(float *)(lVar23 + 300) + *(float *)(lVar23 + 0x130);
            fVar24 = (float)(-(uint)(0.0001 < ABS(fVar24)) & (uint)fVar24);
            *(float *)(lVar23 + 0x128) = fVar24;
            uVar13 = *(int *)(lVar23 + 0x524) * iVar20;
            fVar25 = *(float *)(lVar23 + 0x124);
            if (((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x598) & 0x20) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x110) != 0)) {
              fVar26 = *(float *)(*(longlong *)(lVar23 + 0x378) + 4);
              cVar8 = *(char *)(*(longlong *)(lVar23 + 0x378) + 10);
              FUN_147d3536e(lVar23 + 0x378,*(undefined4 *)(lVar23 + 0x3b8),0);
              fVar2 = *(float *)(*(longlong *)(lVar23 + 0x378) + 4);
              if (cVar8 == '\0') {
                fVar26 = fVar2;
              }
              fVar25 = fVar25 * fVar26;
              fVar24 = fVar24 * fVar2;
              param_2 = local_1b1;
            }
            local_158 = local_1a8;
            local_150 = uVar13;
            FUN_142af1d12(&local_158,fVar25,fVar24);
            if (((iVar20 < *(int *)(param_1 + 0x220)) &&
                (uVar9 = iVar21 - uVar13, uVar9 != 0 && (int)uVar13 <= iVar21)) &&
               ((-1 < (int)uVar13 && (0 < (int)uVar9)))) {
              memset((void *)((longlong)local_1a8 + (ulonglong)uVar13 * 4),0,(ulonglong)uVar9 << 2);
            }
          }
          else {
            fVar25 = *(float *)(lVar23 + 0x124);
            fVar24 = *(float *)(lVar23 + 0x128);
            if (((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x598) & 0x20) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x110) != 0)) {
              fVar26 = *(float *)(*(longlong *)(lVar23 + 0x378) + 4);
              cVar8 = *(char *)(*(longlong *)(lVar23 + 0x378) + 10);
              FUN_147d3536e(lVar23 + 0x378,*(undefined4 *)(lVar23 + 0x3b8),0);
              fVar2 = *(float *)(*(longlong *)(lVar23 + 0x378) + 4);
              if (cVar8 == '\0') {
                fVar26 = fVar2;
              }
              fVar25 = fVar25 * fVar26;
              fVar24 = fVar24 * fVar2;
            }
            local_168 = local_1a8;
            local_160 = iVar21;
            FUN_142af1d12(&local_168,fVar25,fVar24);
          }
          local_180 = (longlong)iVar21;
          *(undefined4 *)(lVar23 + 0x124) = *(undefined4 *)(lVar23 + 0x128);
          local_194 = iVar21;
          if ((DAT_14cabb4c8 == 0) && (0 < *(int *)(lVar23 + 0x1e0))) {
            *(undefined4 *)(lVar23 + 0x200) = *(undefined4 *)(lVar23 + 0x128);
            fVar25 = *(float *)(*(longlong *)(lVar23 + 0x388) + 4);
            fVar24 = 1.0;
            if ((fVar25 != 0.0) || (NAN(fVar25))) {
              fVar24 = (float)exp2f(fVar25 / 12.0);
            }
            local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,param_4);
            *(float *)(lVar23 + 0x204) = fVar24 * *(float *)(lVar23 + 0x110);
            *(undefined8 *)(lVar23 + 0x208) = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x5a0)
            ;
            if (0 < *(int *)(lVar23 + 0x52c)) {
              *(float *)(lVar23 + 0x210) =
                   (float)*(longlong *)(lVar23 + 0xc0) / (float)*(int *)(lVar23 + 0x52c);
            }
            memcpy((void *)(lVar23 + 0x220),(void *)(lVar23 + 0x3d0),0xf8);
            pvVar18 = *(void **)(lVar23 + 0x60);
            *(undefined8 *)(lVar23 + 800) = *(undefined8 *)(lVar23 + 0x50);
            *(int *)(lVar23 + 0x328) = iVar21;
            EnterCriticalSection(local_178);
            iVar21 = *(int *)(lVar23 + 0x1e0);
            if ((longlong)iVar21 != 0) {
              lVar3 = *(longlong *)(lVar23 + 0x1d8);
              _Size = local_180 * 4;
              lVar16 = 0;
              do {
                if (*(int *)(*(longlong *)(lVar3 + lVar16) + 0x5c) != 0) {
                  FUN_147d340d6(*(undefined8 *)(lVar3 + lVar16));
                }
                if (*(int *)(*(longlong *)(lVar3 + lVar16) + 0x5c) != 0) {
                  (**(code **)(**(longlong **)(lVar3 + lVar16) + 0x10))
                            (*(longlong **)(lVar3 + lVar16),lVar23 + 0x200,pvVar18);
                  memcpy(*(void **)(lVar23 + 800),pvVar18,_Size);
                }
                lVar16 = lVar16 + 0x10;
              } while ((longlong)iVar21 * 0x10 != lVar16);
            }
            LeaveCriticalSection(local_178);
            param_1 = local_1a0;
            param_4 = (int)local_1b0;
            param_2 = local_1b1;
          }
          cVar8 = *(char *)(lVar23 + 0x1f8);
          bVar7 = 1;
          if (DAT_14cabb4b0 == 0) {
            fVar25 = (float)FUN_1421c4450(local_1a8);
            iVar21 = *(int *)(lVar23 + 0x35c);
            if (iVar21 == 0) {
              fVar25 = fVar25 * fVar25 * *(float *)(lVar23 + 0x36c) +
                       *(float *)(lVar23 + 0x368) * *(float *)(lVar23 + 0x360);
              *(float *)(lVar23 + 0x360) = fVar25;
            }
            else if (iVar21 == 1) {
              fVar25 = fVar25 * fVar25 * *(float *)(lVar23 + 0x36c) +
                       *(float *)(lVar23 + 0x368) * *(float *)(lVar23 + 0x360);
              *(float *)(lVar23 + 0x360) = fVar25;
              if (fVar25 < 0.0) {
                fVar25 = sqrtf(fVar25);
              }
              else {
                fVar25 = SQRT(fVar25);
              }
            }
            else if (iVar21 == 2) {
              fVar25 = ABS(fVar25);
            }
            fVar24 = *(float *)(lVar23 + 0x358) - fVar25;
            fVar25 = fVar24 * *(float *)(lVar23 + 0x344 + (ulonglong)(0.0 < fVar24) * 8) + fVar25;
            *(float *)(lVar23 + 0x358) = fVar25;
            if (1.0 <= fVar25) {
              fVar25 = 1.0;
            }
            if (fVar25 <= 0.0) {
              fVar25 = 0.0;
            }
            *(float *)(lVar23 + 0x370) = fVar25;
            bVar7 = fVar25 < 1.58489e-05 | *(byte *)(lVar23 + 0x1f8);
          }
          *(byte *)(lVar23 + 0x1f8) = bVar7;
          if ((cVar8 == '\0') && (bVar7 != 0)) {
            (**(code **)(**(longlong **)(lVar23 + 0x10) + 0x20))();
          }
          if (((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x598) & 0x20) == 0) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x110) == 0)) {
            bVar7 = 0;
LAB_14334f5a5:
            if ((~bVar7 & (*(byte *)(lVar23 + 0x522) & 6) == 0) == 0) {
              iVar21 = *(int *)(lVar23 + 0x524) * *(int *)(local_1a0 + 0x220);
              if ((*(byte *)(lVar23 + 0x522) & 6) == 0) goto LAB_14334fd21;
              if (bVar7 != 0) goto LAB_14334fd6f;
              goto LAB_14334f5ed;
            }
          }
          else {
            bVar7 = *(byte *)(lVar23 + 0x522);
            if ((bVar7 & 0x40) == 0) {
              cVar8 = FUN_147d35236(lVar23 + 0x398);
              if (cVar8 == '\0') {
                bVar7 = FUN_147d35236(lVar23 + 0x3a8);
                goto LAB_14334f5a5;
              }
              bVar7 = *(byte *)(lVar23 + 0x522);
            }
            iVar21 = *(int *)(lVar23 + 0x524) * *(int *)(local_1a0 + 0x220);
            if ((bVar7 & 6) == 0) {
LAB_14334fd21:
              FUN_147d3536e(lVar23 + 0x398,*(undefined4 *)(lVar23 + 0x3c0),0);
              FUN_14703555e(lVar23 + 0x150,*(undefined4 *)(*(longlong *)(lVar23 + 0x398) + 4),
                            *(undefined4 *)(local_1a0 + 0x220));
              fVar25 = *(float *)(lVar23 + 0x3c4);
            }
            else {
LAB_14334fd6f:
              fVar25 = *(float *)(lVar23 + 0x3c0);
              if (*(float *)(lVar23 + 0x144) <= *(float *)(lVar23 + 0x3c0)) {
                fVar25 = *(float *)(lVar23 + 0x144);
              }
              FUN_147d3536e(lVar23 + 0x398,fVar25,0);
              FUN_14703555e(lVar23 + 0x150,*(undefined4 *)(*(longlong *)(lVar23 + 0x398) + 4),
                            *(undefined4 *)(local_1a0 + 0x220));
              fVar25 = *(float *)(lVar23 + 0x3c4);
              if (*(float *)(lVar23 + 0x3c4) <= *(float *)(lVar23 + 0x148)) {
                fVar25 = *(float *)(lVar23 + 0x148);
              }
            }
            FUN_147d3536e(lVar23 + 0x3a8,fVar25,0);
            FUN_147035908(lVar23 + 400,*(undefined4 *)(*(longlong *)(lVar23 + 0x3a8) + 4));
LAB_14334f5ed:
            if (DAT_14cabb480 == 0) {
              fVar25 = *(float *)(lVar23 + 0x150);
              bVar12 = 20000.0 <= fVar25;
              if (DAT_14cabb498 == 0) {
                fVar24 = *(float *)(lVar23 + 400);
                pvVar18 = *(void **)(lVar23 + 0x30);
                if (fVar25 < 20000.0) {
                  FUN_147035602(lVar23 + 0x150,local_1a8,pvVar18,iVar21);
                  pvVar11 = pvVar18;
                  if (fVar24 <= 20.0001) {
                    bVar12 = false;
                    goto LAB_14334f600;
                  }
                }
                else {
                  pvVar11 = local_1a8;
                  if (fVar24 <= 20.0001) goto LAB_14334f96d;
                }
                FUN_1470359de(lVar23 + 400,pvVar11,pvVar18,iVar21);
                bVar7 = 0;
              }
              else {
                pvVar18 = *(void **)(lVar23 + 0x30);
                bVar7 = 1;
                if (20000.0 <= fVar25) {
LAB_14334f96d:
                  bVar7 = 1;
                  bVar12 = true;
                }
                else {
                  FUN_147035602(lVar23 + 0x150,local_1a8,pvVar18,iVar21);
                  bVar12 = false;
                }
              }
            }
            else {
              pvVar18 = *(void **)(lVar23 + 0x30);
              bVar12 = true;
LAB_14334f600:
              bVar7 = 1;
            }
            *(undefined4 *)(lVar23 + 0x158) = 0;
            *(undefined4 *)(lVar23 + 0x154) = *(undefined4 *)(lVar23 + 0x15c);
            *(undefined4 *)(lVar23 + 0x198) = 0;
            *(undefined4 *)(lVar23 + 0x194) = *(undefined4 *)(lVar23 + 0x19c);
            param_2 = local_1b1;
            if ((bool)(bVar12 & bVar7)) {
              memcpy(pvVar18,local_1a8,local_180 * 4);
              param_2 = local_1b1;
            }
          }
          param_1 = local_1a0;
          if (((*(byte *)(lVar23 + 0x522) & 6) != 0) || ((*(byte *)(local_1a0 + 0x54) & 1) != 0)) {
            if (DAT_14cabb4e0 == 0) {
              local_148 = *(undefined8 *)(lVar23 + 0x30);
              local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar23 + 0x38));
              FUN_142af1d12(&local_148,*(undefined4 *)(lVar23 + 0x13c),
                            *(undefined4 *)(lVar23 + 0x140));
              *(undefined4 *)(lVar23 + 0x13c) = *(undefined4 *)(lVar23 + 0x140);
            }
            plVar22 = (longlong *)(lVar23 + 0x50);
            puVar19 = (undefined8 *)(lVar15 * 0x330 + *(longlong *)(param_1 + 0x128));
            if (DAT_14cabb4f8 == 0) {
              uVar14 = (undefined4)lVar15;
              if (*(longlong **)(lVar23 + 0x510) != (longlong *)0x0) {
                local_138 = (void *)CONCAT44(local_138._4_4_,uVar14);
                local_148 = *(undefined8 *)(lVar23 + 0x50);
                local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar23 + 0x58));
                (**(code **)(**(longlong **)(lVar23 + 0x510) + 0x10))();
              }
              if (*(longlong **)(lVar23 + 0x500) != (longlong *)0x0) {
                local_148 = *(undefined8 *)(lVar23 + 0x50);
                local_140 = CONCAT44(*(undefined4 *)(lVar23 + 0x58),uVar14);
                local_138 = (void *)CONCAT44((int)(float)*(int *)(*(longlong *)(param_1 + 0x30) +
                                                                 0x74),
                                             *(undefined4 *)(lVar23 + 0x524));
                (**(code **)(**(longlong **)(lVar23 + 0x500) + 8))();
                if (*(char *)(lVar23 + 0x522) < '\0') {
                  memset(*(void **)(lVar23 + 0x50),0,(longlong)*(int *)(lVar23 + 0x58) << 2);
                  memset(*(void **)(lVar23 + 0x30),0,(longlong)*(int *)(lVar23 + 0x38) << 2);
                }
              }
              local_1a8 = (void *)(lVar23 + 0x30);
              pvVar18 = *(void **)(lVar23 + 0x30);
              if ((*(byte *)(lVar23 + 0x521) & 0x20) == 0) {
                pvVar11 = local_1a8;
                plVar17 = (longlong *)(lVar23 + 0x330);
                if ((*(byte *)(lVar23 + 0x521) & 0x10) != 0) {
                  bVar12 = false;
                  local_190 = pvVar18;
                  uVar5 = *puVar19;
                  goto LAB_14334f985;
                }
              }
              else {
                local_108 = lVar23 + 0x3d0;
                local_148 = CONCAT44(local_148._4_4_,uVar14);
                local_130 = *(undefined4 *)(lVar23 + 0x524);
                local_140 = *(undefined8 *)(lVar23 + 0x538);
                local_1b0 = (longlong *)(lVar23 + 0x330);
                iVar21 = *(int *)(lVar23 + 0x33c);
                iVar20 = 0;
                *(undefined4 *)(lVar23 + 0x338) = 0;
                local_190 = pvVar18;
                local_138 = local_1a8;
                if (iVar21 < 0) {
                  FUN_1470345fa(local_1b0);
                  iVar20 = *(int *)(lVar23 + 0x338);
                  iVar21 = *(int *)(lVar23 + 0x33c);
                }
                uVar13 = *(uint *)(lVar23 + 0x38);
                *(uint *)(lVar23 + 0x338) = uVar13 + iVar20;
                if ((uint)(iVar21 - iVar20) < uVar13) {
                  FUN_145ca0cd4(local_1b0);
                }
                plVar4 = local_1b0;
                memset((void *)((longlong)iVar20 * 4 + *local_1b0),0,(longlong)(int)uVar13 << 2);
                param_1 = local_1a0;
                plVar17 = *(longlong **)(*(longlong *)(local_1a0 + 0x30) + 0xf0);
                (**(code **)(*plVar17 + 0x48))(plVar17,&local_148,plVar4);
                if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x592) < '\0') {
                  pvVar11 = local_1a8;
                  plVar17 = local_1b0;
                  param_2 = local_1b1;
                  if ((*(byte *)(lVar23 + 0x521) & 0x10) != 0) {
                    bVar12 = false;
                    uVar5 = *puVar19;
LAB_14334f985:
                    local_188 = uVar5;
                    local_170 = *(undefined8 *)(lVar23 + 0x330);
                    local_108 = lVar23 + 0x3d0;
                    local_148 = CONCAT44(local_148._4_4_,uVar14);
                    local_130 = *(undefined4 *)(lVar23 + 0x524);
                    local_140 = *(undefined8 *)(lVar23 + 0x538);
                    iVar21 = *(int *)(lVar23 + 0x33c);
                    iVar20 = 0;
                    local_1b0 = plVar22;
                    local_138 = local_1a8;
                    if (iVar21 < 0) {
                      *(undefined4 *)(lVar23 + 0x338) = 0;
                      FUN_1470345fa(plVar17);
                      iVar20 = *(int *)(lVar23 + 0x338);
                      iVar21 = *(int *)(lVar23 + 0x33c);
                    }
                    uVar13 = *(uint *)(lVar23 + 0x38);
                    *(uint *)(lVar23 + 0x338) = uVar13 + iVar20;
                    if ((uint)(iVar21 - iVar20) < uVar13) {
                      FUN_145ca0cd4(plVar17);
                    }
                    memset((void *)((longlong)iVar20 * 4 + *plVar17),0,(longlong)(int)uVar13 << 2);
                    plVar22 = *(longlong **)(*(longlong *)(local_1a0 + 0x30) + 0x100);
                    (**(code **)(*plVar22 + 0x28))(plVar22,&local_148,plVar17);
                    if (bVar12) {
                      FUN_1421c5730(local_188,local_170,local_190,local_194);
                      pvVar11 = local_1a8;
                      param_1 = local_1a0;
                      plVar22 = local_1b0;
                      param_2 = local_1b1;
                    }
                    else {
                      memcpy(local_190,(void *)*plVar17,local_180 << 2);
                      pvVar11 = local_1a8;
                      param_1 = local_1a0;
                      plVar22 = local_1b0;
                      param_2 = local_1b1;
                    }
                  }
                }
                else {
                  FUN_1477d402a(puVar19);
                  pvVar11 = local_1a8;
                  param_2 = local_1b1;
                  bVar12 = true;
                  plVar17 = local_1b0;
                  uVar5 = *puVar19;
                  if ((*(byte *)(lVar23 + 0x521) & 0x10) != 0) goto LAB_14334f985;
                  FUN_1421c4bc0(*puVar19,local_190,local_194);
                  plVar17 = local_1b0;
                  param_1 = local_1a0;
                }
              }
              if ((*(byte *)(lVar23 + 0x521) & 4) == 0) {
                *(undefined4 *)(lVar23 + 0x528) = *(undefined4 *)(lVar23 + 0x524);
                puVar19[3] = pvVar11;
                goto LAB_14334faa2;
              }
              local_130 = *(undefined4 *)(lVar23 + 0x524);
              local_148 = CONCAT44(local_148._4_4_,uVar14);
              local_108 = lVar23 + 0x3d0;
              local_140 = *(undefined8 *)(lVar23 + 0x538);
              local_138 = pvVar11;
              if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
                iVar21 = *(int *)(lVar23 + 0x33c);
                iVar20 = 0;
                *(undefined4 *)(lVar23 + 0x338) = 0;
                local_1b0 = plVar22;
                if (iVar21 < 0) {
                  FUN_1470345fa(plVar17);
                  iVar20 = *(int *)(lVar23 + 0x338);
                  iVar21 = *(int *)(lVar23 + 0x33c);
                }
                iVar10 = *(int *)(param_1 + 0x220);
                uVar13 = iVar10 * 2;
                *(uint *)(lVar23 + 0x338) = uVar13 + iVar20;
                if ((uint)(iVar21 - iVar20) < uVar13) {
                  FUN_145ca0cd4(plVar17);
                }
                memset((void *)((longlong)iVar20 * 4 + *plVar17),0,(longlong)iVar10 << 3);
                pvVar11 = local_1a8;
                plVar22 = local_1b0;
              }
              (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                        (*(longlong **)(param_1 + 0x40),&local_148);
              if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
                *(undefined4 *)(lVar23 + 0x528) = 2;
                puVar19[3] = plVar17;
              }
              else {
                *(undefined4 *)(lVar23 + 0x528) = *(undefined4 *)(lVar23 + 0x524);
                puVar19[3] = pvVar11;
              }
              bVar7 = *(byte *)(lVar23 + 0x522);
              param_2 = local_1b1;
            }
            else {
              *(undefined4 *)(lVar23 + 0x528) = *(undefined4 *)(lVar23 + 0x524);
              puVar19[3] = lVar23 + 0x30;
LAB_14334faa2:
              bVar7 = *(byte *)(lVar23 + 0x522);
            }
            if ((bVar7 & 0x20) != 0) {
              puVar19[2] = plVar22;
            }
          }
          if ((*(char *)(lVar23 + 0x521) < '\0') && (*(char *)(lVar23 + 0x1f8) == '\x01')) {
            if (*(int *)(lVar23 + 0xa4) < 0) {
              *(undefined4 *)(lVar23 + 0xa0) = 0;
              FUN_14482f6fa(lVar23 + 0x98,0);
            }
            else {
              *(undefined4 *)(lVar23 + 0xa0) = 0;
            }
            if (*(int *)(lVar23 + 0xb4) < 0) {
              *(undefined4 *)(lVar23 + 0xb0) = 0;
              FUN_14482f6fa(lVar23 + 0xa8,0);
            }
            else {
              *(undefined4 *)(lVar23 + 0xb0) = 0;
            }
            *(undefined8 *)(lVar23 + 0x18) = 0;
            plVar22 = *(longlong **)(lVar23 + 0x20);
            if (plVar22 != (longlong *)0x0) {
              *(undefined8 *)(lVar23 + 0x20) = 0;
              LOCK();
              plVar17 = plVar22 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
            }
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 != param_4);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14334ff96 FUN_14334ff96 body=176 status=ok
// SIG undefined FUN_14334ff96(void)

void FUN_14334ff96(longlong param_1,char param_2,int param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = param_4 - param_3;
  if (iVar3 != 0 && param_3 <= param_4) {
    lVar4 = (longlong)param_3 * 0x330;
    lVar5 = (longlong)param_3 * 0x540 + 0x3d0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x118);
      bVar1 = *(byte *)(lVar2 + 0x151 + lVar5);
      if (((((bVar1 & 2) != 0) && ((*(byte *)(lVar2 + 0x150 + lVar5) & 8) != 0)) &&
          (((bVar1 & 0x40) == 0 || (*(char *)(lVar2 + -0x1d8 + lVar5) == '\0')))) &&
         (((*(int *)(lVar2 + -0x2f0 + lVar5) == -1) != (bool)param_2 &&
          ((*(byte *)(lVar2 + 0x152 + lVar5) & 6) != 0)))) {
        FUN_1477d315e(*(longlong *)(param_1 + 0x128) + lVar4,lVar2 + lVar5);
      }
      lVar4 = lVar4 + 0x330;
      lVar5 = lVar5 + 0x540;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 143350046 FUN_143350046 body=490 status=ok
// SIG undefined FUN_143350046(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143350046(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_10078 [32];
  undefined4 uStack_10058;
  undefined2 uStack_10054;
  undefined2 uStack_10052;
  undefined4 uStack_10050;
  char cStack_1004c;
  undefined1 uStack_1004b;
  undefined2 uStack_1004a;
  longlong lStack_10048;
  undefined8 uStack_10040;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_10078;
  if (((char)param_1[0x90] == '\x01') || ((char)param_1[0x90] == '\x02')) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x92));
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x92));
  }
  lStack_10048 = 0;
  uStack_10040 = 0;
  iVar2 = param_1[0x48];
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x46);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar6) != 0) {
        uStack_10050 = 0;
        cStack_1004c = '\0';
        uStack_1004b = 0;
        uStack_10058 = 0;
        uStack_10054 = 0;
        uStack_10052 = 0;
        FUN_1477c474a();
        if (cStack_1004c == '\x01') {
          lVar7 = (longlong)(int)uStack_10040;
          uVar4 = (int)uStack_10040 + 1;
          uStack_10040 = CONCAT44(uStack_10040._4_4_,uVar4);
          if (uStack_10040._4_4_ < uVar4) {
            FUN_1477d26da(&lStack_10048);
          }
          puVar1 = (undefined4 *)(lStack_10048 + lVar7 * 0x10);
          *puVar1 = uStack_10058;
          puVar1[1] = CONCAT22(uStack_10052,uStack_10054);
          puVar1[2] = uStack_10050;
          puVar1[3] = CONCAT22(uStack_1004a,CONCAT11(uStack_1004b,cStack_1004c));
        }
      }
      lVar6 = lVar6 + 0x540;
    } while ((longlong)iVar2 * 0x540 - lVar6 != 0);
  }
  iVar2 = param_1[0x6c];
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x6a);
    lVar6 = 0;
    do {
      uStack_10050 = 0;
      cStack_1004c = '\0';
      uStack_1004b = 0;
      uStack_10058 = 0;
      uStack_10054 = 0;
      uStack_10052 = 0;
      if ((*(longlong *)(lVar3 + lVar6) != 0) && (FUN_1477c474a(), cStack_1004c == '\x01')) {
        lVar7 = (longlong)(int)uStack_10040;
        uVar4 = (int)uStack_10040 + 1;
        uStack_10040 = CONCAT44(uStack_10040._4_4_,uVar4);
        if (uStack_10040._4_4_ < uVar4) {
          FUN_1477d26da(&lStack_10048);
        }
        puVar1 = (undefined4 *)(lStack_10048 + lVar7 * 0x10);
        *puVar1 = uStack_10058;
        puVar1[1] = CONCAT22(uStack_10052,uStack_10054);
        puVar1[2] = uStack_10050;
        puVar1[3] = CONCAT22(uStack_1004a,CONCAT11(uStack_1004b,cStack_1004c));
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
  }
  if (lStack_10048 != 0) {
    FUN_1400020a8();
  }
  iVar2 = *param_1;
  if (iVar2 != -1) {
    memset(&lStack_10048,0,0x10000);
    FUN_1468309aa(&lStack_10048,0x10000,0,iVar2);
  }
  if ((uVar5 ^ (ulonglong)auStack_10078) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143350234 FUN_143350234 body=48 status=ok
// SIG undefined FUN_143350234(void)

longlong FUN_143350234(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1477c0dce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143350280 FUN_143350280 body=65 status=ok
// SIG undefined FUN_143350280(void)

void FUN_143350280(longlong *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str;
  
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    iVar2 = 4;
    if (4 < iVar1) {
      iVar2 = iVar1;
    }
    DAT_14c7610f4 = iVar2 + 3U & 0xfffffffc;
  }
  return;
}



// FUNCTION 1433502c2 FUN_1433502c2 body=86 status=ok
// SIG undefined FUN_1433502c2(void)

ulonglong FUN_1433502c2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_1477ca36e();
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (lVar1 == 0) goto LAB_1433502e9;
    if (*(int *)(lVar1 + 0x10) == 0) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                  (*(longlong **)(lVar1 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
      goto LAB_1433502e9;
    }
  }
  uVar3 = 0;
LAB_1433502e9:
  return uVar3 & 0xffffffff;
}



// FUNCTION 143350318 FUN_143350318 body=74 status=ok
// SIG undefined FUN_143350318(void)

ulonglong FUN_143350318(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x10) == 0) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                  (*(longlong **)(lVar1 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 143350362 FUN_143350362 body=97 status=ok
// SIG undefined FUN_143350362(void)

void FUN_143350362(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  plVar1 = *(longlong **)(lVar3 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,lVar3);
    if (cVar2 != '\0') {
      LOCK();
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      UNLOCK();
      if (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x10))();
      }
      *(undefined8 *)(lVar3 + 0x20) = 0;
      return;
    }
    lVar3 = *(longlong *)(param_1 + 8);
  }
  FUN_140187fa0(lVar3,1,0);
  return;
}



// FUNCTION 1433503c4 FUN_1433503c4 body=736 status=ok
// SIG undefined FUN_1433503c4(void)

undefined4 FUN_1433503c4(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  uint *local_68;
  void *local_58;
  ulonglong uStack_50;
  uint local_3c;
  ulonglong local_38;
  
  uVar4 = MXCSR;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)CONCAT44(local_58._4_4_,MXCSR);
  MXCSR = MXCSR | 0x8000;
  iVar7 = *(int *)((longlong)param_1 + 0x7c);
  local_3c = MXCSR;
  if (iVar7 == 2) {
    iVar7 = *(int *)((longlong)param_1 + 0x24);
    iVar3 = iVar7 * 2;
    uVar9 = *(int *)((longlong)param_1 + 0x2c) * iVar3;
    local_58 = (void *)0x0;
    uStack_50 = (ulonglong)uVar9;
    if (uVar9 != 0) {
      FUN_1447403be(&local_58);
    }
    memset(local_58,0,(longlong)(int)uVar9);
    if (*(char *)((longlong)param_1 + 0x31) == '\x01') {
      uVar9 = *(int *)(param_1 + 5) * iVar3;
      plVar1 = (longlong *)param_1[3];
      local_3c = uVar9;
      if (*(int *)(param_1 + 4) == 3) {
        local_68 = &local_3c;
        (**(code **)(*plVar1 + 0x78))(plVar1,local_58,*(undefined1 *)(param_1 + 6),uVar9);
        local_68 = &local_3c;
        (**(code **)(*(longlong *)param_1[3] + 0x78))
                  ((longlong *)param_1[3],local_58,*(undefined1 *)(param_1 + 6),uVar9);
      }
      else {
        (**(code **)(*plVar1 + 0x10))(plVar1,local_58,*(undefined1 *)(param_1 + 6),uVar9);
        (**(code **)(*(longlong *)param_1[3] + 0x10))
                  ((longlong *)param_1[3],local_58,*(undefined1 *)(param_1 + 6),uVar9);
      }
    }
    local_3c = iVar3 * *(int *)((longlong)param_1 + 0x2c);
    plVar1 = (longlong *)param_1[3];
    if (*(int *)(param_1 + 4) == 3) {
      local_68 = &local_3c;
      uVar5 = (**(code **)(*plVar1 + 0x78))(plVar1,local_58,*(undefined1 *)(param_1 + 6),local_3c);
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,local_58,*(undefined1 *)(param_1 + 6),local_3c);
    }
    *(undefined1 *)(param_1 + 7) = uVar5;
    iVar7 = iVar7 * *(int *)((longlong)param_1 + 0x2c);
    uVar8 = param_1[2];
LAB_1433505e5:
    FUN_1421c5070(local_58,uVar8,iVar7);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (iVar7 == 1) {
    (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_1[1]);
  }
  else if (iVar7 == 0) {
    if (param_1[9] == 0) {
      lVar2 = param_1[8];
      if (lVar2 != 0) {
        LOCK();
        bVar10 = *(char *)(lVar2 + 0x34f) == '\0';
        if (bVar10) {
          *(char *)(lVar2 + 0x34f) = '\x01';
        }
        UNLOCK();
        if (!bVar10) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar2 + 0x340);
        LOCK();
        bVar10 = *(char *)(lVar2 + 0x34f) == '\x01';
        if (bVar10) {
          *(char *)(lVar2 + 0x34f) = '\0';
        }
        UNLOCK();
        if (!bVar10) {
          FUN_14008cdb0(lVar2 + 0x34f);
        }
        if (0 < iVar7) {
          iVar7 = (**(code **)(*(longlong *)param_1[8] + 0x3d8))();
          if (iVar7 != 1) {
            iVar7 = *(int *)(param_1 + 0xc);
            local_58 = (void *)0x0;
            uVar9 = *(int *)((longlong)param_1 + 100) * iVar7 * 2;
            uStack_50 = (ulonglong)uVar9;
            if (uVar9 != 0) {
              FUN_1447403be(&local_58,0);
              iVar7 = *(int *)(param_1 + 0xc);
            }
            iVar7 = (**(code **)(*(longlong *)param_1[8] + 0x3d0))
                              ((longlong *)param_1[8],local_58,iVar7);
            iVar7 = iVar7 >> 1;
            *(int *)(param_1 + 0xe) = iVar7;
            uVar8 = param_1[0xb];
            goto LAB_1433505e5;
          }
          iVar7 = (**(code **)(*(longlong *)param_1[8] + 0x3d0))
                            ((longlong *)param_1[8],param_1[0xb],*(undefined4 *)(param_1 + 0xc));
          *(int *)(param_1 + 0xe) = iVar7 >> 2;
          goto LAB_1433505f9;
        }
      }
      memset((void *)param_1[0xb],0,(longlong)*(int *)(param_1 + 0xc) << 2);
      uVar6 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xe) = uVar6;
      goto LAB_143350604;
    }
    uVar6 = FUN_1436fafb4(param_1[9],param_1[0xb],*(undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 0xe) = uVar6;
    uVar5 = (**(code **)(*(longlong *)param_1[9] + 0x28))();
    *(undefined1 *)((longlong)param_1 + 0x74) = uVar5;
    uVar6 = (**(code **)(*(longlong *)param_1[9] + 0x30))();
    *(undefined4 *)(param_1 + 0xf) = uVar6;
  }
LAB_1433505f9:
  LOCK();
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 1;
  UNLOCK();
LAB_143350604:
  local_58 = (void *)CONCAT44(local_58._4_4_,uVar4);
  MXCSR = uVar4;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1433506a6 FUN_1433506a6 body=158 status=ok
// SIG undefined FUN_1433506a6(void)

void FUN_1433506a6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e06640;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 3;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a570110;
  uVar1 = param_2[1];
  param_1[9] = *param_2;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x73) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  param_1[0x18] = 0x13f800000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 143350744 FUN_143350744 body=187 status=ok
// SIG undefined FUN_143350744(void)

void FUN_143350744(longlong *param_1)

{
  wchar_t *_Str;
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar2 = _wtof(_Str);
    fVar1 = (float)dVar2 * 0.5;
    uVar3 = 0x3f800000;
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      uVar3 = exp2f(fVar1 / 12.0);
    }
    fVar1 = (float)dVar2 * -0.5;
    if ((fVar1 != 0.0) || (DAT_14c76110c = 0x3f800000, NAN(fVar1))) {
      DAT_14c76110c = uVar3;
      DAT_14c76110c = exp2f(fVar1 / 12.0);
    }
  }
  return;
}



// FUNCTION 143350800 FUN_143350800 body=52 status=ok
// SIG undefined FUN_143350800(void)

void FUN_143350800(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_147d679b2(*param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_1477c6298(lVar1,param_1[1],*(undefined4 *)(param_1 + 2),
                *(undefined1 *)((longlong)param_1 + 0x14));
  return;
}



// FUNCTION 14335084a FUN_14335084a body=29 status=ok
// SIG undefined FUN_14335084a(void)

undefined8 FUN_14335084a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433508b2 FUN_1433508b2 body=29 status=ok
// SIG undefined FUN_1433508b2(void)

undefined8 FUN_1433508b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433508d0 FUN_1433508d0 body=44 status=ok
// SIG undefined FUN_1433508d0(void)

void FUN_1433508d0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_147d679b2(*param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_1477c63b6(lVar1,param_1[1]);
  return;
}



// FUNCTION 143350912 FUN_143350912 body=29 status=ok
// SIG undefined FUN_143350912(void)

undefined8 FUN_143350912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335096a FUN_14335096a body=29 status=ok
// SIG undefined FUN_14335096a(void)

undefined8 FUN_14335096a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143350988 FUN_143350988 body=445 status=ok
// SIG undefined FUN_143350988(void)

void FUN_143350988(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  undefined4 local_4c;
  void *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((puVar3 = (ulonglong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar3 == (ulonglong *)0x0 || ((uint)puVar3[2] != param_1[1])))) ||
     ((puVar3[1] & 0x10200000) != 0)) goto LAB_1433509e6;
  uVar5 = 0;
  uVar6 = (ulonglong)(byte)((char)param_1[2] + 1);
  if (2 < param_1[2]) {
    uVar6 = uVar5;
  }
  if ((puVar3[1] & 0x10200000) == 0) {
    uVar5 = *puVar3;
  }
  local_48 = (void *)0x0;
  local_40 = param_1[6];
  lVar7 = (longlong)(int)local_40;
  pvVar2 = *(void **)(param_1 + 4);
  if (lVar7 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar2,lVar7 * 2);
  }
  FUN_1477b3cbb(uVar5 + 0x38,uVar6,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
LAB_143350b42:
    lVar7 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_143350b42;
      lVar7 = *plVar4;
    }
  }
  local_58 = (void *)0x0;
  local_50 = param_1[6];
  lVar8 = (longlong)(int)local_50;
  pvVar2 = *(void **)(param_1 + 4);
  if (lVar8 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar8 * 2);
  }
  FUN_1477cc046(lVar7 + 0x48,uVar6,&local_58);
LAB_1433509e6:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143350b50 FUN_143350b50 body=29 status=ok
// SIG undefined FUN_143350b50(void)

void FUN_143350b50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143350b6e FUN_143350b6e body=57 status=ok
// SIG undefined FUN_143350b6e(void)

undefined8 * FUN_143350b6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570290;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143350ba8 FUN_143350ba8 body=445 status=ok
// SIG undefined FUN_143350ba8(void)

void FUN_143350ba8(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  undefined4 local_4c;
  void *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((puVar3 = (ulonglong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar3 == (ulonglong *)0x0 || ((uint)puVar3[2] != param_1[1])))) ||
     ((puVar3[1] & 0x10200000) != 0)) goto LAB_143350c06;
  uVar5 = 0;
  uVar6 = (ulonglong)(byte)((char)param_1[2] + 1);
  if (2 < param_1[2]) {
    uVar6 = uVar5;
  }
  if ((puVar3[1] & 0x10200000) == 0) {
    uVar5 = *puVar3;
  }
  local_48 = (void *)0x0;
  local_40 = param_1[6];
  lVar7 = (longlong)(int)local_40;
  pvVar2 = *(void **)(param_1 + 4);
  if (lVar7 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar2,lVar7 * 2);
  }
  FUN_1477b3cbb(uVar5 + 0x60,uVar6,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
LAB_143350d62:
    lVar7 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_143350d62;
      lVar7 = *plVar4;
    }
  }
  local_58 = (void *)0x0;
  local_50 = param_1[6];
  lVar8 = (longlong)(int)local_50;
  pvVar2 = *(void **)(param_1 + 4);
  if (lVar8 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar8 * 2);
  }
  FUN_1477cc046(lVar7 + 0x70,uVar6,&local_58);
LAB_143350c06:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143350d70 FUN_143350d70 body=29 status=ok
// SIG undefined FUN_143350d70(void)

void FUN_143350d70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143350d8e FUN_143350d8e body=57 status=ok
// SIG undefined FUN_143350d8e(void)

undefined8 * FUN_143350d8e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5702b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143350dc8 FUN_143350dc8 body=427 status=ok
// SIG undefined FUN_143350dc8(void)

void FUN_143350dc8(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  undefined4 local_44;
  void *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar3 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar3 == (longlong *)0x0 || (*(uint *)(plVar3 + 2) != param_1[1])))) ||
     ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_143350e23;
  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar3;
  }
  else {
    lVar5 = 0;
  }
  local_40 = (void *)0x0;
  local_38 = param_1[4];
  lVar4 = (longlong)(int)local_38;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar4 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar4 * 2);
  }
  FUN_1477b3d8e(lVar5 + 0x88,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
LAB_143350f69:
    lVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_143350f69;
      lVar5 = *plVar3;
    }
  }
  local_50 = (void *)0x0;
  local_48 = param_1[4];
  lVar4 = (longlong)(int)local_48;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar2,lVar4 * 2);
  }
  FUN_1477cc232(lVar5 + 0x98,&local_50);
LAB_143350e23:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143350f8a FUN_143350f8a body=57 status=ok
// SIG undefined FUN_143350f8a(void)

undefined8 * FUN_143350f8a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5702d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143350fc4 FUN_143350fc4 body=427 status=ok
// SIG undefined FUN_143350fc4(void)

void FUN_143350fc4(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  undefined4 local_44;
  void *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar3 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar3 == (longlong *)0x0 || (*(uint *)(plVar3 + 2) != param_1[1])))) ||
     ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_14335101f;
  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar3;
  }
  else {
    lVar5 = 0;
  }
  local_40 = (void *)0x0;
  local_38 = param_1[4];
  lVar4 = (longlong)(int)local_38;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar4 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar4 * 2);
  }
  FUN_1477b3d8e(lVar5 + 0xb0,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
LAB_143351165:
    lVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_143351165;
      lVar5 = *plVar3;
    }
  }
  local_50 = (void *)0x0;
  local_48 = param_1[4];
  lVar4 = (longlong)(int)local_48;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar2,lVar4 * 2);
  }
  FUN_1477cc232(lVar5 + 0xc0,&local_50);
LAB_14335101f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143351186 FUN_143351186 body=57 status=ok
// SIG undefined FUN_143351186(void)

undefined8 * FUN_143351186(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5702f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433511c0 FUN_1433511c0 body=453 status=ok
// SIG undefined FUN_1433511c0(void)

void FUN_1433511c0(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  undefined4 local_4c;
  void *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar3 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar3 == (longlong *)0x0 || (*(uint *)(plVar3 + 2) != param_1[1])))) ||
     ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_14335121e;
  cVar4 = (char)param_1[6] + '\x01';
  lVar5 = 0;
  if (3 < param_1[6]) {
    cVar4 = '\0';
  }
  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar3;
  }
  local_48 = (void *)0x0;
  local_40 = param_1[4];
  lVar6 = (longlong)(int)local_40;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar6 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar2,lVar6 * 2);
  }
  FUN_1477b3d25(lVar5 + 0xd8,&local_48,cVar4);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
LAB_143351382:
    lVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_143351382;
      lVar5 = *plVar3;
    }
  }
  local_58 = (void *)0x0;
  local_50 = param_1[4];
  lVar6 = (longlong)(int)local_50;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar6 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar6 * 2);
  }
  FUN_1477cc40a(lVar5 + 0xe8,&local_58,cVar4);
LAB_14335121e:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143351390 FUN_143351390 body=29 status=ok
// SIG undefined FUN_143351390(void)

void FUN_143351390(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433513ae FUN_1433513ae body=57 status=ok
// SIG undefined FUN_1433513ae(void)

undefined8 * FUN_1433513ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570310;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433513e8 FUN_1433513e8 body=427 status=ok
// SIG undefined FUN_1433513e8(void)

void FUN_1433513e8(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  undefined4 local_44;
  void *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar3 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar3 == (longlong *)0x0 || (*(uint *)(plVar3 + 2) != param_1[1])))) ||
     ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_143351443;
  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar3;
  }
  else {
    lVar5 = 0;
  }
  local_40 = (void *)0x0;
  local_38 = param_1[4];
  lVar4 = (longlong)(int)local_38;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar4 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar4 * 2);
  }
  FUN_1477b3d8e(lVar5 + 0x100,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
LAB_143351589:
    lVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_143351589;
      lVar5 = *plVar3;
    }
  }
  local_50 = (void *)0x0;
  local_48 = param_1[4];
  lVar4 = (longlong)(int)local_48;
  pvVar2 = *(void **)(param_1 + 2);
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar2,lVar4 * 2);
  }
  FUN_1477cc232(lVar5 + 0x110,&local_50);
LAB_143351443:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433515aa FUN_1433515aa body=57 status=ok
// SIG undefined FUN_1433515aa(void)

undefined8 * FUN_1433515aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570330;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433515e4 FUN_1433515e4 body=134 status=ok
// SIG undefined FUN_1433515e4(void)

void FUN_1433515e4(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x238))) {
    local_20 = 0;
    FUN_1447cd2ec(lVar1 + 0x230);
  }
  if (DAT_14cabaf98 == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  DAT_14cabaf98 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1433516a6 FUN_1433516a6 body=29 status=ok
// SIG undefined FUN_1433516a6(void)

undefined8 FUN_1433516a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433516c4 FUN_1433516c4 body=160 status=ok
// SIG undefined FUN_1433516c4(void)

void FUN_1433516c4(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined1 *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_68 = &PTR_LAB_14a570390;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar2;
  *(undefined1 *)(local_68 + 4) = uVar1;
  if (local_68 + 1 != (undefined8 *)0x0) {
    local_78[0] = &LAB_1433517c6;
  }
  FUN_1407461b0(1,local_78);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433517a8 FUN_1433517a8 body=29 status=ok
// SIG undefined FUN_1433517a8(void)

undefined8 FUN_1433517a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433517e2 FUN_1433517e2 body=29 status=ok
// SIG undefined FUN_1433517e2(void)

void FUN_1433517e2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143351800 FUN_143351800 body=29 status=ok
// SIG undefined FUN_143351800(void)

undefined8 FUN_143351800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351848 FUN_143351848 body=29 status=ok
// SIG undefined FUN_143351848(void)

undefined8 FUN_143351848(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351890 FUN_143351890 body=29 status=ok
// SIG undefined FUN_143351890(void)

undefined8 FUN_143351890(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433518d4 FUN_1433518d4 body=29 status=ok
// SIG undefined FUN_1433518d4(void)

undefined8 FUN_1433518d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433518f2 FUN_1433518f2 body=134 status=ok
// SIG undefined FUN_1433518f2(void)

void FUN_1433518f2(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_1477b46e1(param_1,param_1 + 4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143351982 FUN_143351982 body=29 status=ok
// SIG undefined FUN_143351982(void)

void FUN_143351982(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433519a0 FUN_1433519a0 body=69 status=ok
// SIG undefined FUN_1433519a0(void)

undefined8 * FUN_1433519a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570410;
  FUN_1477cc5f9(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351a0c FUN_143351a0c body=29 status=ok
// SIG undefined FUN_143351a0c(void)

undefined8 FUN_143351a0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351a2a FUN_143351a2a body=134 status=ok
// SIG undefined FUN_143351a2a(void)

void FUN_143351a2a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_1477b47cd(param_1,param_1 + 4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143351aba FUN_143351aba body=29 status=ok
// SIG undefined FUN_143351aba(void)

void FUN_143351aba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143351ad8 FUN_143351ad8 body=57 status=ok
// SIG undefined FUN_143351ad8(void)

undefined8 * FUN_143351ad8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570450;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351b30 FUN_143351b30 body=29 status=ok
// SIG undefined FUN_143351b30(void)

void FUN_143351b30(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143351b4e FUN_143351b4e body=57 status=ok
// SIG undefined FUN_143351b4e(void)

undefined8 * FUN_143351b4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570470;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351b88 FUN_143351b88 body=134 status=ok
// SIG undefined FUN_143351b88(void)

void FUN_143351b88(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_1477b484f(param_1,param_1 + 4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143351c18 FUN_143351c18 body=29 status=ok
// SIG undefined FUN_143351c18(void)

void FUN_143351c18(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143351c36 FUN_143351c36 body=71 status=ok
// SIG undefined FUN_143351c36(void)

undefined8 * FUN_143351c36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570490;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351c7e FUN_143351c7e body=29 status=ok
// SIG undefined FUN_143351c7e(void)

undefined8 FUN_143351c7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143351cb0 FUN_143351cb0 body=85 status=ok
// SIG undefined FUN_143351cb0(void)

void FUN_143351cb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5704b0;
  return;
}



// FUNCTION 143351d06 FUN_143351d06 body=85 status=ok
// SIG undefined FUN_143351d06(void)

void FUN_143351d06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5704b0;
  return;
}



// FUNCTION 143351d5c FUN_143351d5c body=118 status=ok
// SIG undefined FUN_143351d5c(void)

void FUN_143351d5c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e30fe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5704b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143351dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143351e20 FUN_143351e20 body=90 status=ok
// SIG undefined FUN_143351e20(void)

undefined8 FUN_143351e20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if ((param_3 != 0) &&
     ((lVar1 = *(longlong *)(param_3 + 0x1d8), lVar1 != 0 ||
      ((((DAT_14cb0d2b0 != 0 && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) &&
        (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x98), lVar1 != 0)))))) {
    FUN_1477ba1cc(lVar1,param_4,param_2);
  }
  return 1;
}



// FUNCTION 143351e7a FUN_143351e7a body=87 status=ok
// SIG undefined FUN_143351e7a(void)

void FUN_143351e7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
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
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1477d9192();
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
                    /* WARNING: Could not recover jumptable at 0x000143351ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143351ee8 FUN_143351ee8 body=64 status=ok
// SIG undefined FUN_143351ee8(void)

undefined8 * FUN_143351ee8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a570520;
  plVar2 = (longlong *)param_1[3];
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



// FUNCTION 143351f28 FUN_143351f28 body=244 status=ok
// SIG undefined FUN_143351f28(void)

void FUN_143351f28(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    iVar6 = *(int *)(puVar4 + 1);
    do {
      if (iVar6 == 0) goto LAB_143351fe3;
      LOCK();
      iVar2 = *(int *)(puVar4 + 1);
      bVar8 = iVar6 == iVar2;
      if (bVar8) {
        *(int *)(puVar4 + 1) = iVar6 + 1;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      UNLOCK();
    } while (!bVar8);
    lVar5 = *param_1;
    if ((((lVar5 != 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) &&
        (uVar3 = *(uint *)(param_1 + 2), -1 < (int)uVar3)) &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 != 0)) &&
        ((*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x14) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
      local_28 = param_1[3];
      local_20 = param_1[4];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_1477d6702(lVar5,0,&local_28);
    }
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_143351fe3:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14335202e FUN_14335202e body=112 status=ok
// SIG undefined FUN_14335202e(void)

undefined8 * FUN_14335202e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a570560;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}



// FUNCTION 1433520a4 FUN_1433520a4 body=29 status=ok
// SIG undefined FUN_1433520a4(void)

void FUN_1433520a4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433520c2 FUN_1433520c2 body=104 status=ok
// SIG undefined FUN_1433520c2(void)

undefined8 * FUN_1433520c2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a570560;
  plVar3 = (longlong *)param_1[5];
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
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335214a FUN_14335214a body=29 status=ok
// SIG undefined FUN_14335214a(void)

undefined8 FUN_14335214a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352168 FUN_143352168 body=99 status=ok
// SIG undefined FUN_143352168(void)

void FUN_143352168(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1[1];
  uVar1 = **(undefined8 **)(*param_1 + 0xb48);
  local_10 = param_1[2];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1477d6160(uVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143352204 FUN_143352204 body=12 status=ok
// SIG undefined FUN_143352204(void)

void FUN_143352204(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014335220d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143352210 FUN_143352210 body=83 status=ok
// SIG undefined FUN_143352210(void)

undefined8 * FUN_143352210(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5705a0;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335229a FUN_14335229a body=12 status=ok
// SIG undefined FUN_14335229a(void)

void FUN_14335229a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433522a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433522a6 FUN_1433522a6 body=29 status=ok
// SIG undefined FUN_1433522a6(void)

undefined8 FUN_1433522a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433522f4 FUN_1433522f4 body=12 status=ok
// SIG undefined FUN_1433522f4(void)

void FUN_1433522f4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433522fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143352300 FUN_143352300 body=29 status=ok
// SIG undefined FUN_143352300(void)

undefined8 FUN_143352300(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335231e FUN_14335231e body=90 status=ok
// SIG undefined FUN_14335231e(void)

void FUN_14335231e(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1477d6160(uVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335237a FUN_14335237a body=112 status=ok
// SIG undefined FUN_14335237a(void)

undefined8 * FUN_14335237a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a570600;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}



// FUNCTION 1433523f0 FUN_1433523f0 body=29 status=ok
// SIG undefined FUN_1433523f0(void)

void FUN_1433523f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14335240e FUN_14335240e body=121 status=ok
// SIG undefined FUN_14335240e(void)

undefined8 * FUN_14335240e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a570600;
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433524cc FUN_1433524cc body=12 status=ok
// SIG undefined FUN_1433524cc(void)

void FUN_1433524cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433524d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433524d8 FUN_1433524d8 body=83 status=ok
// SIG undefined FUN_1433524d8(void)

undefined8 * FUN_1433524d8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a570620;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352570 FUN_143352570 body=12 status=ok
// SIG undefined FUN_143352570(void)

void FUN_143352570(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143352579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14335257c FUN_14335257c body=83 status=ok
// SIG undefined FUN_14335257c(void)

undefined8 * FUN_14335257c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a570640;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433525d0 FUN_1433525d0 body=92 status=ok
// SIG undefined FUN_1433525d0(void)

void FUN_1433525d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_1;
  local_18 = param_1[3];
  local_10 = param_1[4];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1477d6702(uVar1,*(undefined4 *)(param_1 + 2),&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335262e FUN_14335262e body=110 status=ok
// SIG undefined FUN_14335262e(void)

undefined8 * FUN_14335262e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a570660;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}



// FUNCTION 1433526a2 FUN_1433526a2 body=29 status=ok
// SIG undefined FUN_1433526a2(void)

void FUN_1433526a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433526c0 FUN_1433526c0 body=121 status=ok
// SIG undefined FUN_1433526c0(void)

undefined8 * FUN_1433526c0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a570660;
  plVar3 = (longlong *)param_1[5];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352772 FUN_143352772 body=12 status=ok
// SIG undefined FUN_143352772(void)

void FUN_143352772(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014335277b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14335277e FUN_14335277e body=83 status=ok
// SIG undefined FUN_14335277e(void)

undefined8 * FUN_14335277e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a570680;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433527e6 FUN_1433527e6 body=169 status=ok
// SIG undefined FUN_1433527e6(void)

undefined8 * FUN_1433527e6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a5706a0;
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar4[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar4 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
  }
  else {
    FUN_1477cde40(puVar4 + 3,iVar1,0);
    FUN_1477cdea2(puVar4[3],uVar3,iVar1);
  }
  *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(param_1 + 0x28);
  return puVar4 + 1;
}



// FUNCTION 143352896 FUN_143352896 body=29 status=ok
// SIG undefined FUN_143352896(void)

void FUN_143352896(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433528b4 FUN_1433528b4 body=109 status=ok
// SIG undefined FUN_1433528b4(void)

undefined8 * FUN_1433528b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5706a0;
  FUN_1477cc8d1(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335296c FUN_14335296c body=12 status=ok
// SIG undefined FUN_14335296c(void)

void FUN_14335296c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143352975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143352978 FUN_143352978 body=83 status=ok
// SIG undefined FUN_143352978(void)

undefined8 * FUN_143352978(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5706c0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433529cc FUN_1433529cc body=83 status=ok
// SIG undefined FUN_1433529cc(void)

void FUN_1433529cc(undefined4 *param_1)

{
  longlong lVar1;
  
  if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
    lVar1 = FUN_147973140(DAT_14cace0c0,*param_1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xe10) != 0)) {
      FUN_1477c8308(*(longlong *)(lVar1 + 0xe10),param_1[1],param_1 + 2,*(undefined1 *)(param_1 + 6)
                   );
      return;
    }
  }
  return;
}



// FUNCTION 143352a2a FUN_143352a2a body=29 status=ok
// SIG undefined FUN_143352a2a(void)

void FUN_143352a2a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143352a48 FUN_143352a48 body=57 status=ok
// SIG undefined FUN_143352a48(void)

undefined8 * FUN_143352a48(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5706e0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352a82 FUN_143352a82 body=51 status=ok
// SIG undefined FUN_143352a82(void)

void FUN_143352a82(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x158))
            ((longlong *)*param_1,param_1[1],*(undefined4 *)(param_1 + 2),
             *(undefined4 *)((longlong)param_1 + 0x14),*(undefined4 *)(param_1 + 3));
  return;
}



// FUNCTION 143352ac0 FUN_143352ac0 body=29 status=ok
// SIG undefined FUN_143352ac0(void)

void FUN_143352ac0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143352ade FUN_143352ade body=29 status=ok
// SIG undefined FUN_143352ade(void)

undefined8 FUN_143352ade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352b50 FUN_143352b50 body=93 status=ok
// SIG undefined FUN_143352b50(void)

undefined8 * FUN_143352b50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a570720;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar2 + 1;
}



// FUNCTION 143352bb4 FUN_143352bb4 body=29 status=ok
// SIG undefined FUN_143352bb4(void)

void FUN_143352bb4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143352bd2 FUN_143352bd2 body=83 status=ok
// SIG undefined FUN_143352bd2(void)

undefined8 * FUN_143352bd2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a570720;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352c58 FUN_143352c58 body=29 status=ok
// SIG undefined FUN_143352c58(void)

undefined8 FUN_143352c58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352cd0 FUN_143352cd0 body=12 status=ok
// SIG undefined FUN_143352cd0(void)

void FUN_143352cd0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143352cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143352cdc FUN_143352cdc body=83 status=ok
// SIG undefined FUN_143352cdc(void)

undefined8 * FUN_143352cdc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a570760;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352d62 FUN_143352d62 body=29 status=ok
// SIG undefined FUN_143352d62(void)

undefined8 FUN_143352d62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352dda FUN_143352dda body=12 status=ok
// SIG undefined FUN_143352dda(void)

void FUN_143352dda(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143352de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143352de6 FUN_143352de6 body=83 status=ok
// SIG undefined FUN_143352de6(void)

undefined8 * FUN_143352de6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5707a0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352e6c FUN_143352e6c body=29 status=ok
// SIG undefined FUN_143352e6c(void)

undefined8 FUN_143352e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352ee4 FUN_143352ee4 body=12 status=ok
// SIG undefined FUN_143352ee4(void)

void FUN_143352ee4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143352eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143352ef0 FUN_143352ef0 body=83 status=ok
// SIG undefined FUN_143352ef0(void)

undefined8 * FUN_143352ef0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5707e0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


