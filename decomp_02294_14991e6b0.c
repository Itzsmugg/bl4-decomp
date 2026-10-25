// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14991e6b0 FUN_14991e6b0 body=39 status=ok
// SIG undefined FUN_14991e6b0(void)

void FUN_14991e6b0(undefined8 param_1,longlong param_2)

{
  FUN_144e70f40(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x78),
                *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991e6e0 FUN_14991e6e0 body=39 status=ok
// SIG undefined FUN_14991e6e0(void)

void FUN_14991e6e0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991e810 FUN_14991e810 body=29 status=ok
// SIG undefined FUN_14991e810(void)

void FUN_14991e810(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x28),0x150);
  return;
}



// FUNCTION 14991e830 FUN_14991e830 body=199 status=ok
// SIG undefined FUN_14991e830(void)

void FUN_14991e830(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (*(char *)(*(longlong *)(lVar1 + 8) + 300) == '\0') {
    uVar5 = 0;
    lVar2 = FUN_144e71140(*(longlong *)(lVar1 + 8) + 0x100);
    if (lVar2 != 0) {
      do {
        plVar3 = (longlong *)FUN_144e71150(*(longlong *)(lVar1 + 8) + 0x100);
        if (*plVar3 != 0) {
          plVar3 = (longlong *)FUN_144e71150(*(longlong *)(lVar1 + 8) + 0x100);
          _aligned_free(*(void **)(*plVar3 + 8));
          plVar3 = (longlong *)FUN_144e71150(*(longlong *)(lVar1 + 8) + 0x100);
          *(undefined8 *)(*plVar3 + 8) = 0;
        }
        uVar5 = uVar5 + 1;
        uVar4 = FUN_144e71140(*(longlong *)(lVar1 + 8) + 0x100);
      } while (uVar5 < uVar4);
    }
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_144e71770();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991e910 FUN_14991e910 body=29 status=ok
// SIG undefined FUN_14991e910(void)

void FUN_14991e910(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x60),0x150);
  return;
}



// FUNCTION 14991e930 FUN_14991e930 body=220 status=ok
// SIG undefined FUN_14991e930(void)

void FUN_14991e930(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  if ((*(longlong *)(lVar1 + 8) != 0) && (*(char *)(*(longlong *)(lVar1 + 8) + 300) == '\0')) {
    uVar5 = 0;
    lVar2 = FUN_144e71140(*(longlong *)(lVar1 + 8) + 0x100);
    if (lVar2 != 0) {
      do {
        plVar3 = (longlong *)FUN_144e71150(*(longlong *)(lVar1 + 8) + 0x100);
        if (*plVar3 != 0) {
          plVar3 = (longlong *)FUN_144e71150(*(longlong *)(lVar1 + 8) + 0x100);
          _aligned_free(*(void **)(*plVar3 + 8));
          plVar3 = (longlong *)FUN_144e71150(*(longlong *)(lVar1 + 8) + 0x100);
          *(undefined8 *)(*plVar3 + 8) = 0;
        }
        uVar5 = uVar5 + 1;
        uVar4 = FUN_144e71140(*(longlong *)(lVar1 + 8) + 0x100);
      } while (uVar5 < uVar4);
    }
  }
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    FUN_144b6cc90();
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_144e71770();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991ea10 FUN_14991ea10 body=78 status=ok
// SIG undefined FUN_14991ea10(void)

undefined8 FUN_14991ea10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x90);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x30) == '\0') {
    FUN_144b6ebb0(lVar2 + 0x38,"unrecognized exception",0x16);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x30) = 1;
  }
  return 0;
}



// FUNCTION 14991ea60 FUN_14991ea60 body=107 status=ok
// SIG undefined FUN_14991ea60(void)

undefined8 FUN_14991ea60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x90);
  if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x30) == '\0') {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x50) + 8))();
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    FUN_144b6ebb0(*(longlong *)(lVar1 + 0x18) + 0x38,lVar2);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x30) = 1;
  }
  return 0;
}



// FUNCTION 14991ead0 FUN_14991ead0 body=75 status=ok
// SIG undefined FUN_14991ead0(void)

undefined8 FUN_14991ead0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x30) == '\0') {
    FUN_144b6ebb0(lVar2 + 0x38,"unrecognized exception",0x16);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x30) = 1;
  }
  return 0;
}



// FUNCTION 14991eb20 FUN_14991eb20 body=96 status=ok
// SIG undefined FUN_14991eb20(void)

undefined8 FUN_14991eb20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x30) == '\0') {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x78) + 8))();
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    FUN_144b6ebb0(*(longlong *)(lVar1 + 0x18) + 0x38,lVar2);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x30) = 1;
  }
  return 0;
}



// FUNCTION 14991eb90 FUN_14991eb90 body=32 status=ok
// SIG undefined FUN_14991eb90(void)

void FUN_14991eb90(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x90),0x68);
  return;
}



// FUNCTION 14991ebc0 FUN_14991ebc0 body=32 status=ok
// SIG undefined FUN_14991ebc0(void)

void FUN_14991ebc0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x80),0x30);
  return;
}



// FUNCTION 14991ebe0 FUN_14991ebe0 body=32 status=ok
// SIG undefined FUN_14991ebe0(void)

void FUN_14991ebe0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x80),0x30);
  return;
}



// FUNCTION 14991ec00 FUN_14991ec00 body=77 status=ok
// SIG undefined FUN_14991ec00(void)

void FUN_14991ec00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (*(char *)(lVar1 + 0x30) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 8))();
    FUN_144e70330(lVar1 + 0x38);
    *(undefined1 *)(lVar1 + 0x30) = 1;
  }
  *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
  FUN_144e70f30();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991ec50 FUN_14991ec50 body=65 status=ok
// SIG undefined FUN_14991ec50(void)

void FUN_14991ec50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x80);
  FUN_144e70330(lVar1 + 0x38);
  *(undefined1 *)(lVar1 + 0x30) = 1;
  *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
  FUN_144e70f30();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991ed00 FUN_14991ed00 body=143 status=ok
// SIG undefined FUN_14991ed00(void)

void FUN_14991ed00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1470a639e(param_2 + 0x60,1);
  plVar1 = *(longlong **)(param_2 + 0x58);
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  uVar3 = FUN_144e6eee0(*(undefined8 *)(param_2 + 0x48));
  uVar4 = FUN_141302cc4(param_2 + 0x70,"Error reading pixel data from image file \"");
  uVar3 = FUN_141302cc4(uVar4,uVar3);
  uVar3 = FUN_141302cc4(uVar3,&DAT_149971db8);
  FUN_141302cc4(uVar3,uVar2);
  FUN_144e40cb0(plVar1);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991edf0 FUN_14991edf0 body=39 status=ok
// SIG undefined FUN_14991edf0(void)

void FUN_14991edf0(undefined8 param_1,longlong param_2)

{
  FUN_144e75790(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x78),
                *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991ee20 FUN_14991ee20 body=39 status=ok
// SIG undefined FUN_14991ee20(void)

void FUN_14991ee20(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991ef00 FUN_14991ef00 body=29 status=ok
// SIG undefined FUN_14991ef00(void)

void FUN_14991ef00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x60),0x168);
  return;
}



// FUNCTION 14991ef20 FUN_14991ef20 body=195 status=ok
// SIG undefined FUN_14991ef20(void)

void FUN_14991ef20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (*(char *)(*(longlong *)(lVar1 + 8) + 0x150) == '\0') {
    uVar5 = 0;
    lVar2 = FUN_144e75990(*(longlong *)(lVar1 + 8) + 0x130);
    if (lVar2 != 0) {
      do {
        plVar3 = (longlong *)FUN_144e759a0(*(longlong *)(lVar1 + 8) + 0x130);
        if (*plVar3 != 0) {
          plVar3 = (longlong *)FUN_144e759a0(*(longlong *)(lVar1 + 8) + 0x130);
          thunk_FUN_1400020a8(*(undefined8 *)(*plVar3 + 8));
        }
        uVar5 = uVar5 + 1;
        uVar4 = FUN_144e75990(*(longlong *)(lVar1 + 8) + 0x130);
      } while (uVar5 < uVar4);
    }
  }
  if (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x158) != 0) {
    FUN_144b6cc90();
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_144e75d80();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f000 FUN_14991f000 body=29 status=ok
// SIG undefined FUN_14991f000(void)

void FUN_14991f000(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x40),0x168);
  return;
}



// FUNCTION 14991f020 FUN_14991f020 body=169 status=ok
// SIG undefined FUN_14991f020(void)

void FUN_14991f020(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(lVar1 + 8) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 0x150) == '\0') {
      uVar5 = 0;
      lVar2 = FUN_144e75990(*(longlong *)(lVar1 + 8) + 0x130);
      if (lVar2 != 0) {
        do {
          plVar3 = (longlong *)FUN_144e759a0(*(longlong *)(lVar1 + 8) + 0x130);
          if (*plVar3 != 0) {
            plVar3 = (longlong *)FUN_144e759a0(*(longlong *)(lVar1 + 8) + 0x130);
            thunk_FUN_1400020a8(*(undefined8 *)(*plVar3 + 8));
          }
          uVar5 = uVar5 + 1;
          uVar4 = FUN_144e75990(*(longlong *)(lVar1 + 8) + 0x130);
        } while (uVar5 < uVar4);
      }
    }
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_144e75d80();
    }
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f0e0 FUN_14991f0e0 body=146 status=ok
// SIG undefined FUN_14991f0e0(void)

void FUN_14991f0e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1470a639e(param_2 + 0x50,1);
  plVar1 = *(longlong **)(param_2 + 0x40);
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  uVar3 = FUN_144e73de0(*(undefined8 *)(param_2 + 0x160));
  uVar4 = FUN_141302cc4(param_2 + 0x60,"Error calling dataWindowForLevel() on image file \"");
  uVar3 = FUN_141302cc4(uVar4,uVar3);
  uVar3 = FUN_141302cc4(uVar3,&DAT_149971db8);
  FUN_141302cc4(uVar3,uVar2);
  FUN_144e40cb0(plVar1);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f190 FUN_14991f190 body=143 status=ok
// SIG undefined FUN_14991f190(void)

void FUN_14991f190(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1470a639e(param_2 + 0x60,1);
  plVar1 = *(longlong **)(param_2 + 0x58);
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  uVar3 = FUN_144e73de0(*(undefined8 *)(param_2 + 0x50));
  uVar4 = FUN_141302cc4(param_2 + 0x70,"Error calling dataWindowForTile() on image file \"");
  uVar3 = FUN_141302cc4(uVar4,uVar3);
  uVar3 = FUN_141302cc4(uVar3,&DAT_149971db8);
  FUN_141302cc4(uVar3,uVar2);
  FUN_144e40cb0(plVar1);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f290 FUN_14991f290 body=78 status=ok
// SIG undefined FUN_14991f290(void)

undefined8 FUN_14991f290(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb0);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x34) == '\0') {
    FUN_144b6ebb0(lVar2 + 0x38,"unrecognized exception",0x16);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x34) = 1;
  }
  return 0;
}



// FUNCTION 14991f2e0 FUN_14991f2e0 body=32 status=ok
// SIG undefined FUN_14991f2e0(void)

void FUN_14991f2e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0xe0),0x68);
  return;
}



// FUNCTION 14991f320 FUN_14991f320 body=146 status=ok
// SIG undefined FUN_14991f320(void)

void FUN_14991f320(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1470a639e(param_2 + 0x30,1);
  plVar1 = *(longlong **)(param_2 + 0x20);
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  uVar3 = FUN_144e73de0(*(undefined8 *)(param_2 + 0x140));
  uVar4 = FUN_141302cc4(param_2 + 0x40,"Error calling levelWidth() on image file \"");
  uVar3 = FUN_141302cc4(uVar4,uVar3);
  uVar3 = FUN_141302cc4(uVar3,&DAT_149971db8);
  FUN_141302cc4(uVar3,uVar2);
  FUN_144e40cb0(plVar1);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f3c0 FUN_14991f3c0 body=29 status=ok
// SIG undefined FUN_14991f3c0(void)

void FUN_14991f3c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x60),0x20);
  return;
}



// FUNCTION 14991f3e0 FUN_14991f3e0 body=31 status=ok
// SIG undefined FUN_14991f3e0(void)

void FUN_14991f3e0(void)

{
  FUN_144e75780();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f480 FUN_14991f480 body=146 status=ok
// SIG undefined FUN_14991f480(void)

void FUN_14991f480(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1470a639e(param_2 + 0x70,1);
  plVar1 = *(longlong **)(param_2 + 0x68);
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  uVar3 = FUN_144e73de0(*(undefined8 *)(param_2 + 0x58));
  uVar4 = FUN_141302cc4(param_2 + 0x80,"Error reading pixel data from image file \"");
  uVar3 = FUN_141302cc4(uVar4,uVar3);
  uVar3 = FUN_141302cc4(uVar3,&DAT_149971db8);
  FUN_141302cc4(uVar3,uVar2);
  FUN_144e40cb0(plVar1);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f580 FUN_14991f580 body=39 status=ok
// SIG undefined FUN_14991f580(void)

void FUN_14991f580(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x78),
             *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f5b0 FUN_14991f5b0 body=57 status=ok
// SIG undefined FUN_14991f5b0(void)

void FUN_14991f5b0(undefined8 param_1,longlong param_2)

{
  FUN_1486115df(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0x60));
  FUN_148611608(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x28),
                *(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f5f0 FUN_14991f5f0 body=60 status=ok
// SIG undefined FUN_14991f5f0(void)

void FUN_14991f5f0(undefined8 param_1,longlong param_2)

{
  FUN_144e79ee0(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),
                *(undefined8 *)(param_2 + 0x70));
  deallocate(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),
             *(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f630 FUN_14991f630 body=29 status=ok
// SIG undefined FUN_14991f630(void)

void FUN_14991f630(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x40),0xc0);
  return;
}



// FUNCTION 14991f730 FUN_14991f730 body=32 status=ok
// SIG undefined FUN_14991f730(void)

void FUN_14991f730(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x128),0x40);
  return;
}



// FUNCTION 14991f780 FUN_14991f780 body=48 status=ok
// SIG undefined FUN_14991f780(void)

void FUN_14991f780(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e7a530(*(undefined8 *)(param_2 + 0x50));
  FUN_144e7e1c0(*(undefined8 *)(param_2 + 0x50),uVar1,*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f7c0 FUN_14991f7c0 body=39 status=ok
// SIG undefined FUN_14991f7c0(void)

void FUN_14991f7c0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x78),
             *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f7f0 FUN_14991f7f0 body=39 status=ok
// SIG undefined FUN_14991f7f0(void)

void FUN_14991f7f0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f990 FUN_14991f990 body=29 status=ok
// SIG undefined FUN_14991f990(void)

void FUN_14991f990(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x38),0x1e8);
  return;
}



// FUNCTION 14991f9b0 FUN_14991f9b0 body=45 status=ok
// SIG undefined FUN_14991f9b0(void)

void FUN_14991f9b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x30) + 8) != 0) {
    FUN_144e7c6a0();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991f9f0 FUN_14991f9f0 body=29 status=ok
// SIG undefined FUN_14991f9f0(void)

void FUN_14991f9f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x50),0x1e8);
  return;
}



// FUNCTION 14991fa10 FUN_14991fa10 body=96 status=ok
// SIG undefined FUN_14991fa10(void)

void FUN_14991fa10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(lVar1 + 8) != 0) {
    if ((*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1d8) != 0) &&
       (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1d8) != 0)) {
      FUN_144b6cc90();
    }
    if ((*(longlong *)(lVar1 + 8) != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_144e7c6a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991faa0 FUN_14991faa0 body=84 status=ok
// SIG undefined FUN_14991faa0(void)

undefined8 FUN_14991faa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xa8);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x38) == '\0') {
    FUN_144b6ebb0(lVar2 + 0x40,"unrecognized exception",0x16);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x38) = 1;
  }
  return 0;
}



// FUNCTION 14991fb00 FUN_14991fb00 body=110 status=ok
// SIG undefined FUN_14991fb00(void)

undefined8 FUN_14991fb00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x38) == '\0') {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 8))();
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    FUN_144b6ebb0(*(longlong *)(lVar1 + 0x18) + 0x40,lVar2);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x38) = 1;
  }
  return 0;
}



// FUNCTION 14991fb80 FUN_14991fb80 body=29 status=ok
// SIG undefined FUN_14991fb80(void)

void FUN_14991fb80(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x20),0x80);
  return;
}



// FUNCTION 14991fbe0 FUN_14991fbe0 body=22 status=ok
// SIG undefined FUN_14991fbe0(void)

void FUN_14991fbe0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991fc00 FUN_14991fc00 body=29 status=ok
// SIG undefined FUN_14991fc00(void)

void FUN_14991fc00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x78),0x28);
  return;
}



// FUNCTION 14991fc20 FUN_14991fc20 body=74 status=ok
// SIG undefined FUN_14991fc20(void)

void FUN_14991fc20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 8))();
    FUN_144e70330(lVar1 + 0x40);
    *(undefined1 *)(lVar1 + 0x38) = 1;
  }
  *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
  FUN_144e7be20();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991fc70 FUN_14991fc70 body=62 status=ok
// SIG undefined FUN_14991fc70(void)

void FUN_14991fc70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  FUN_144e70330(lVar1 + 0x40);
  *(undefined1 *)(lVar1 + 0x38) = 1;
  *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
  FUN_144e7be20();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991fd00 FUN_14991fd00 body=192 status=ok
// SIG undefined FUN_14991fd00(void)

void FUN_14991fd00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1470a639e(param_2 + 0x70,1);
  plVar1 = *(longlong **)(param_2 + 0x60);
  uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
  lVar2 = *(longlong *)(param_2 + 0x50);
  uVar4 = FUN_144e7a750(lVar2);
  uVar5 = FUN_141302cc4(param_2 + 0x80,"Error reading sample count data from image file \"");
  uVar4 = FUN_141302cc4(uVar5,uVar4);
  uVar4 = FUN_141302cc4(uVar4,&DAT_149971db8);
  FUN_141302cc4(uVar4,uVar3);
  FUN_144e40cb0(plVar1,param_2 + 0x70);
  FUN_144b664f0(param_2 + 0x70);
  (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x1d8) + 0x50) + 0x28))();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991fe00 FUN_14991fe00 body=143 status=ok
// SIG undefined FUN_14991fe00(void)

void FUN_14991fe00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1470a639e(param_2 + 0x50,1);
  plVar1 = *(longlong **)(param_2 + 0x48);
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  uVar3 = FUN_144e7a750(*(undefined8 *)(param_2 + 0x38));
  uVar4 = FUN_141302cc4(param_2 + 0x60,"Error reading pixel data from image file \"");
  uVar3 = FUN_141302cc4(uVar4,uVar3);
  uVar3 = FUN_141302cc4(uVar3,&DAT_149971db8);
  FUN_141302cc4(uVar3,uVar2);
  FUN_144e40cb0(plVar1);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991fee0 FUN_14991fee0 body=29 status=ok
// SIG undefined FUN_14991fee0(void)

undefined8 FUN_14991fee0(void)

{
  return 0;
}



// FUNCTION 14991ff50 FUN_14991ff50 body=39 status=ok
// SIG undefined FUN_14991ff50(void)

void FUN_14991ff50(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x78),
             *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991ff80 FUN_14991ff80 body=60 status=ok
// SIG undefined FUN_14991ff80(void)

void FUN_14991ff80(undefined8 param_1,longlong param_2)

{
  FUN_144e807f0(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),
                *(undefined8 *)(param_2 + 0x70));
  FUN_144e7fc80(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),
                *(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991ffc0 FUN_14991ffc0 body=29 status=ok
// SIG undefined FUN_14991ffc0(void)

void FUN_14991ffc0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x70),0x28);
  return;
}



// FUNCTION 149920000 FUN_149920000 body=32 status=ok
// SIG undefined FUN_149920000(void)

void FUN_149920000(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x88),0xf8);
  return;
}



// FUNCTION 149920020 FUN_149920020 body=29 status=ok
// SIG undefined FUN_149920020(void)

void FUN_149920020(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x18);
  return;
}



// FUNCTION 149920140 FUN_149920140 body=38 status=ok
// SIG undefined FUN_149920140(void)

void FUN_149920140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_144b65b20(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



// FUNCTION 1499201b0 FUN_1499201b0 body=60 status=ok
// SIG undefined FUN_1499201b0(void)

void FUN_1499201b0(undefined8 param_1,longlong param_2)

{
  FUN_144e83630(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),
                *(undefined8 *)(param_2 + 0x70));
  deallocate(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),
             *(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 1499201f0 FUN_1499201f0 body=60 status=ok
// SIG undefined FUN_1499201f0(void)

void FUN_1499201f0(undefined8 param_1,longlong param_2)

{
  FUN_144e6eac0(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),
                *(undefined8 *)(param_2 + 0x70));
  deallocate(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),
             *(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 149920250 FUN_149920250 body=29 status=ok
// SIG undefined FUN_149920250(void)

undefined8 FUN_149920250(void)

{
  return 0;
}



// FUNCTION 149920270 FUN_149920270 body=20 status=ok
// SIG undefined FUN_149920270(void)

undefined8 FUN_149920270(void)

{
  return 0xffffffff;
}



// FUNCTION 149920290 FUN_149920290 body=41 status=ok
// SIG undefined FUN_149920290(void)

void FUN_149920290(undefined8 param_1,longlong param_2)

{
  FUN_145135530(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30),
                "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacter.cpp"
                ,0xbb);
  return;
}



// FUNCTION 1499204e0 Unwind@1499204e0 body=29 status=ok
// SIG undefined Unwind@1499204e0(void)

void Unwind_1499204e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 1499204fd Unwind@1499204fd body=12 status=ok
// SIG undefined Unwind@1499204fd(void)

void Unwind_1499204fd(undefined8 param_1,longlong param_2)

{
  FUN_144d73180(param_2 + 0x48);
  return;
}



// FUNCTION 149920510 Unwind@149920510 body=29 status=ok
// SIG undefined Unwind@149920510(void)

void Unwind_149920510(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x18);
  return;
}



// FUNCTION 149920530 Unwind@149920530 body=12 status=ok
// SIG undefined Unwind@149920530(void)

void Unwind_149920530(undefined8 param_1,longlong param_2)

{
  FUN_145169710(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14992053c Unwind@14992053c body=29 status=ok
// SIG undefined Unwind@14992053c(void)

void Unwind_14992053c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x70);
  return;
}



// FUNCTION 149920560 Unwind@149920560 body=12 status=ok
// SIG undefined Unwind@149920560(void)

void Unwind_149920560(undefined8 param_1,longlong param_2)

{
  FUN_145169740(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14992056c Unwind@14992056c body=29 status=ok
// SIG undefined Unwind@14992056c(void)

void Unwind_14992056c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x98);
  return;
}



// FUNCTION 149920590 Unwind@149920590 body=12 status=ok
// SIG undefined Unwind@149920590(void)

void Unwind_149920590(undefined8 param_1,longlong param_2)

{
  FUN_1451696e0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14992059c Unwind@14992059c body=29 status=ok
// SIG undefined Unwind@14992059c(void)

void Unwind_14992059c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x68);
  return;
}



// FUNCTION 1499205c0 Unwind@1499205c0 body=12 status=ok
// SIG undefined Unwind@1499205c0(void)

void Unwind_1499205c0(undefined8 param_1,longlong param_2)

{
  FUN_144d73970(param_2 + 0x50);
  return;
}



// FUNCTION 1499205cc Unwind@1499205cc body=12 status=ok
// SIG undefined Unwind@1499205cc(void)

void Unwind_1499205cc(undefined8 param_1,longlong param_2)

{
  FUN_145169710(param_2 + 0x48);
  return;
}



// FUNCTION 1499205e0 Unwind@1499205e0 body=12 status=ok
// SIG undefined Unwind@1499205e0(void)

void Unwind_1499205e0(undefined8 param_1,longlong param_2)

{
  FUN_144d73970(param_2 + 0x50);
  return;
}



// FUNCTION 1499205ec Unwind@1499205ec body=12 status=ok
// SIG undefined Unwind@1499205ec(void)

void Unwind_1499205ec(undefined8 param_1,longlong param_2)

{
  FUN_145169740(param_2 + 0x48);
  return;
}



// FUNCTION 149920600 Unwind@149920600 body=12 status=ok
// SIG undefined Unwind@149920600(void)

void Unwind_149920600(undefined8 param_1,longlong param_2)

{
  FUN_144d73970(param_2 + 0x50);
  return;
}



// FUNCTION 14992060c Unwind@14992060c body=12 status=ok
// SIG undefined Unwind@14992060c(void)

void Unwind_14992060c(undefined8 param_1,longlong param_2)

{
  FUN_1451696e0(param_2 + 0x48);
  return;
}



// FUNCTION 149920620 Unwind@149920620 body=12 status=ok
// SIG undefined Unwind@149920620(void)

void Unwind_149920620(undefined8 param_1,longlong param_2)

{
  FUN_144d73970(param_2 + 0x68);
  return;
}



// FUNCTION 14992062c Unwind@14992062c body=12 status=ok
// SIG undefined Unwind@14992062c(void)

void Unwind_14992062c(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x28);
  return;
}



// FUNCTION 149920640 Unwind@149920640 body=12 status=ok
// SIG undefined Unwind@149920640(void)

void Unwind_149920640(undefined8 param_1,longlong param_2)

{
  FUN_145169f20(param_2 + 0x58);
  return;
}



// FUNCTION 14992064c Unwind@14992064c body=12 status=ok
// SIG undefined Unwind@14992064c(void)

void Unwind_14992064c(undefined8 param_1,longlong param_2)

{
  FUN_144d73970(param_2 + 0x50);
  return;
}



// FUNCTION 149920660 Unwind@149920660 body=12 status=ok
// SIG undefined Unwind@149920660(void)

void Unwind_149920660(undefined8 param_1,longlong param_2)

{
  FUN_144d73ac0(param_2 + 0x40);
  return;
}



// FUNCTION 149920670 Unwind@149920670 body=29 status=ok
// SIG undefined Unwind@149920670(void)

void Unwind_149920670(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14992068d Unwind@14992068d body=12 status=ok
// SIG undefined Unwind@14992068d(void)

void Unwind_14992068d(undefined8 param_1,longlong param_2)

{
  FUN_144d73150(param_2 + 0x48);
  return;
}



// FUNCTION 1499206a0 Unwind@1499206a0 body=29 status=ok
// SIG undefined Unwind@1499206a0(void)

void Unwind_1499206a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 1499206bd Unwind@1499206bd body=12 status=ok
// SIG undefined Unwind@1499206bd(void)

void Unwind_1499206bd(undefined8 param_1,longlong param_2)

{
  FUN_14516a4b0(param_2 + 0x48);
  return;
}



// FUNCTION 1499206d0 Unwind@1499206d0 body=12 status=ok
// SIG undefined Unwind@1499206d0(void)

void Unwind_1499206d0(undefined8 param_1,longlong param_2)

{
  FUN_14516a800(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1499206dc Unwind@1499206dc body=29 status=ok
// SIG undefined Unwind@1499206dc(void)

void Unwind_1499206dc(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x88);
  return;
}



// FUNCTION 149920700 Unwind@149920700 body=12 status=ok
// SIG undefined Unwind@149920700(void)

void Unwind_149920700(undefined8 param_1,longlong param_2)

{
  FUN_144d73a60(param_2 + 0x50);
  return;
}



// FUNCTION 14992070c Unwind@14992070c body=12 status=ok
// SIG undefined Unwind@14992070c(void)

void Unwind_14992070c(undefined8 param_1,longlong param_2)

{
  FUN_14516a4b0(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 149920718 Unwind@149920718 body=12 status=ok
// SIG undefined Unwind@149920718(void)

void Unwind_149920718(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149920724 Unwind@149920724 body=12 status=ok
// SIG undefined Unwind@149920724(void)

void Unwind_149920724(undefined8 param_1,longlong param_2)

{
  FUN_144d73150(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 149920730 Unwind@149920730 body=12 status=ok
// SIG undefined Unwind@149920730(void)

void Unwind_149920730(undefined8 param_1,longlong param_2)

{
  FUN_14516a800(param_2 + 0x48);
  return;
}



// FUNCTION 149920740 Unwind@149920740 body=12 status=ok
// SIG undefined Unwind@149920740(void)

void Unwind_149920740(undefined8 param_1,longlong param_2)

{
  FUN_144d73a90(param_2 + 0x40);
  return;
}



// FUNCTION 149920750 Unwind@149920750 body=12 status=ok
// SIG undefined Unwind@149920750(void)

void Unwind_149920750(undefined8 param_1,longlong param_2)

{
  FUN_14516b050(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920760 Unwind@149920760 body=29 status=ok
// SIG undefined Unwind@149920760(void)

void Unwind_149920760(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14992077d Unwind@14992077d body=12 status=ok
// SIG undefined Unwind@14992077d(void)

void Unwind_14992077d(undefined8 param_1,longlong param_2)

{
  FUN_14516b050(param_2 + 0x48);
  return;
}



// FUNCTION 149920790 Unwind@149920790 body=29 status=ok
// SIG undefined Unwind@149920790(void)

void Unwind_149920790(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 1499207ad Unwind@1499207ad body=12 status=ok
// SIG undefined Unwind@1499207ad(void)

void Unwind_1499207ad(undefined8 param_1,longlong param_2)

{
  FUN_14516b170(param_2 + 0x48);
  return;
}



// FUNCTION 1499207c0 Unwind@1499207c0 body=12 status=ok
// SIG undefined Unwind@1499207c0(void)

void Unwind_1499207c0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a00(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1499207d0 Unwind@1499207d0 body=12 status=ok
// SIG undefined Unwind@1499207d0(void)

void Unwind_1499207d0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a00(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1499207e0 Unwind@1499207e0 body=12 status=ok
// SIG undefined Unwind@1499207e0(void)

void Unwind_1499207e0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499207f0 Unwind@1499207f0 body=12 status=ok
// SIG undefined Unwind@1499207f0(void)

void Unwind_1499207f0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149920800 Unwind@149920800 body=12 status=ok
// SIG undefined Unwind@149920800(void)

void Unwind_149920800(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149920810 Unwind@149920810 body=12 status=ok
// SIG undefined Unwind@149920810(void)

void Unwind_149920810(undefined8 param_1,longlong param_2)

{
  FUN_14516d940(*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 14992081c Unwind@14992081c body=12 status=ok
// SIG undefined Unwind@14992081c(void)

void Unwind_14992081c(undefined8 param_1,longlong param_2)

{
  FUN_14516a4b0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 149920830 Unwind@149920830 body=12 status=ok
// SIG undefined Unwind@149920830(void)

void Unwind_149920830(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149920840 Unwind@149920840 body=12 status=ok
// SIG undefined Unwind@149920840(void)

void Unwind_149920840(undefined8 param_1,longlong param_2)

{
  FUN_14516d840(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149920850 Unwind@149920850 body=12 status=ok
// SIG undefined Unwind@149920850(void)

void Unwind_149920850(undefined8 param_1,longlong param_2)

{
  FUN_14516d840(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149920860 Unwind@149920860 body=12 status=ok
// SIG undefined Unwind@149920860(void)

void Unwind_149920860(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149920870 Unwind@149920870 body=12 status=ok
// SIG undefined Unwind@149920870(void)

void Unwind_149920870(undefined8 param_1,longlong param_2)

{
  FUN_14516a4b0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149920880 Unwind@149920880 body=12 status=ok
// SIG undefined Unwind@149920880(void)

void Unwind_149920880(undefined8 param_1,longlong param_2)

{
  FUN_144d78100(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 149920890 Unwind@149920890 body=12 status=ok
// SIG undefined Unwind@149920890(void)

void Unwind_149920890(undefined8 param_1,longlong param_2)

{
  FUN_144d78100(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1499208a0 Unwind@1499208a0 body=12 status=ok
// SIG undefined Unwind@1499208a0(void)

void Unwind_1499208a0(undefined8 param_1,longlong param_2)

{
  FUN_14516a4b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1499208b0 Unwind@1499208b0 body=12 status=ok
// SIG undefined Unwind@1499208b0(void)

void Unwind_1499208b0(undefined8 param_1,longlong param_2)

{
  FUN_14516d8a0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1499208c0 Unwind@1499208c0 body=29 status=ok
// SIG undefined Unwind@1499208c0(void)

void Unwind_1499208c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 1499208dd Unwind@1499208dd body=12 status=ok
// SIG undefined Unwind@1499208dd(void)

void Unwind_1499208dd(undefined8 param_1,longlong param_2)

{
  FUN_14516d8d0(param_2 + 0x48);
  return;
}



// FUNCTION 1499208f0 Unwind@1499208f0 body=29 status=ok
// SIG undefined Unwind@1499208f0(void)

void Unwind_1499208f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14992090d Unwind@14992090d body=12 status=ok
// SIG undefined Unwind@14992090d(void)

void Unwind_14992090d(undefined8 param_1,longlong param_2)

{
  FUN_14516d870(param_2 + 0x48);
  return;
}



// FUNCTION 149920920 Unwind@149920920 body=12 status=ok
// SIG undefined Unwind@149920920(void)

void Unwind_149920920(undefined8 param_1,longlong param_2)

{
  FUN_14516d8a0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14992092c Unwind@14992092c body=29 status=ok
// SIG undefined Unwind@14992092c(void)

void Unwind_14992092c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x58);
  return;
}



// FUNCTION 149920950 Unwind@149920950 body=12 status=ok
// SIG undefined Unwind@149920950(void)

void Unwind_149920950(undefined8 param_1,longlong param_2)

{
  FUN_14516d840(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14992095c Unwind@14992095c body=29 status=ok
// SIG undefined Unwind@14992095c(void)

void Unwind_14992095c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x58);
  return;
}



// FUNCTION 149920980 Unwind@149920980 body=12 status=ok
// SIG undefined Unwind@149920980(void)

void Unwind_149920980(undefined8 param_1,longlong param_2)

{
  FUN_14516d940(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14992098c Unwind@14992098c body=29 status=ok
// SIG undefined Unwind@14992098c(void)

void Unwind_14992098c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x78);
  return;
}



// FUNCTION 1499209b0 Unwind@1499209b0 body=12 status=ok
// SIG undefined Unwind@1499209b0(void)

void Unwind_1499209b0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499209c0 Unwind@1499209c0 body=12 status=ok
// SIG undefined Unwind@1499209c0(void)

void Unwind_1499209c0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a30(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1499209d0 Unwind@1499209d0 body=12 status=ok
// SIG undefined Unwind@1499209d0(void)

void Unwind_1499209d0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a30(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1499209e0 Unwind@1499209e0 body=12 status=ok
// SIG undefined Unwind@1499209e0(void)

void Unwind_1499209e0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a00(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1499209f0 Unwind@1499209f0 body=12 status=ok
// SIG undefined Unwind@1499209f0(void)

void Unwind_1499209f0(undefined8 param_1,longlong param_2)

{
  FUN_144d75330(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149920a00 Unwind@149920a00 body=12 status=ok
// SIG undefined Unwind@149920a00(void)

void Unwind_149920a00(undefined8 param_1,longlong param_2)

{
  FUN_144d75420(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149920a10 Unwind@149920a10 body=12 status=ok
// SIG undefined Unwind@149920a10(void)

void Unwind_149920a10(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920a20 Unwind@149920a20 body=12 status=ok
// SIG undefined Unwind@149920a20(void)

void Unwind_149920a20(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920a30 Unwind@149920a30 body=28 status=ok
// SIG undefined Unwind@149920a30(void)

void Unwind_149920a30(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 149920a50 Unwind@149920a50 body=28 status=ok
// SIG undefined Unwind@149920a50(void)

void Unwind_149920a50(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 149920a70 Unwind@149920a70 body=28 status=ok
// SIG undefined Unwind@149920a70(void)

void Unwind_149920a70(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920a8c Unwind@149920a8c body=28 status=ok
// SIG undefined Unwind@149920a8c(void)

void Unwind_149920a8c(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920ab0 Unwind@149920ab0 body=12 status=ok
// SIG undefined Unwind@149920ab0(void)

void Unwind_149920ab0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x28);
  return;
}



// FUNCTION 149920ac0 Unwind@149920ac0 body=12 status=ok
// SIG undefined Unwind@149920ac0(void)

void Unwind_149920ac0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149920acc Unwind@149920acc body=12 status=ok
// SIG undefined Unwind@149920acc(void)

void Unwind_149920acc(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x48);
  return;
}



// FUNCTION 149920ad8 Unwind@149920ad8 body=12 status=ok
// SIG undefined Unwind@149920ad8(void)

void Unwind_149920ad8(undefined8 param_1,longlong param_2)

{
  FUN_14516f2d0(param_2 + 0x60);
  return;
}



// FUNCTION 149920ae4 Unwind@149920ae4 body=34 status=ok
// SIG undefined Unwind@149920ae4(void)

void Unwind_149920ae4(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 149920b10 Unwind@149920b10 body=12 status=ok
// SIG undefined Unwind@149920b10(void)

void Unwind_149920b10(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x38);
  return;
}



// FUNCTION 149920b1c Unwind@149920b1c body=12 status=ok
// SIG undefined Unwind@149920b1c(void)

void Unwind_149920b1c(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x20);
  return;
}



// FUNCTION 149920b28 Unwind@149920b28 body=12 status=ok
// SIG undefined Unwind@149920b28(void)

void Unwind_149920b28(undefined8 param_1,longlong param_2)

{
  FUN_14516f2d0(param_2 + 0x50);
  return;
}



// FUNCTION 149920b40 Unwind@149920b40 body=12 status=ok
// SIG undefined Unwind@149920b40(void)

void Unwind_149920b40(undefined8 param_1,longlong param_2)

{
  FUN_14516fed0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920b4c Unwind@149920b4c body=29 status=ok
// SIG undefined Unwind@149920b4c(void)

void Unwind_149920b4c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x78);
  return;
}



// FUNCTION 149920b70 Unwind@149920b70 body=12 status=ok
// SIG undefined Unwind@149920b70(void)

void Unwind_149920b70(undefined8 param_1,longlong param_2)

{
  FUN_14516ff00(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920b7c Unwind@149920b7c body=29 status=ok
// SIG undefined Unwind@149920b7c(void)

void Unwind_149920b7c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x70);
  return;
}



// FUNCTION 149920ba0 Unwind@149920ba0 body=12 status=ok
// SIG undefined Unwind@149920ba0(void)

void Unwind_149920ba0(undefined8 param_1,longlong param_2)

{
  FUN_14516ff30(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920bac Unwind@149920bac body=29 status=ok
// SIG undefined Unwind@149920bac(void)

void Unwind_149920bac(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x58);
  return;
}



// FUNCTION 149920bd0 Unwind@149920bd0 body=12 status=ok
// SIG undefined Unwind@149920bd0(void)

void Unwind_149920bd0(undefined8 param_1,longlong param_2)

{
  FUN_14516ff60(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920bdc Unwind@149920bdc body=29 status=ok
// SIG undefined Unwind@149920bdc(void)

void Unwind_149920bdc(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0xa0);
  return;
}



// FUNCTION 149920c00 Unwind@149920c00 body=12 status=ok
// SIG undefined Unwind@149920c00(void)

void Unwind_149920c00(undefined8 param_1,longlong param_2)

{
  FUN_14516ff90(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920c0c Unwind@149920c0c body=29 status=ok
// SIG undefined Unwind@149920c0c(void)

void Unwind_149920c0c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x60);
  return;
}



// FUNCTION 149920c30 Unwind@149920c30 body=12 status=ok
// SIG undefined Unwind@149920c30(void)

void Unwind_149920c30(undefined8 param_1,longlong param_2)

{
  FUN_14516ffc0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920c3c Unwind@149920c3c body=29 status=ok
// SIG undefined Unwind@149920c3c(void)

void Unwind_149920c3c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x60);
  return;
}



// FUNCTION 149920c60 Unwind@149920c60 body=12 status=ok
// SIG undefined Unwind@149920c60(void)

void Unwind_149920c60(undefined8 param_1,longlong param_2)

{
  FUN_14516fff0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920c6c Unwind@149920c6c body=29 status=ok
// SIG undefined Unwind@149920c6c(void)

void Unwind_149920c6c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x58);
  return;
}



// FUNCTION 149920c90 Unwind@149920c90 body=12 status=ok
// SIG undefined Unwind@149920c90(void)

void Unwind_149920c90(undefined8 param_1,longlong param_2)

{
  FUN_145170020(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920c9c Unwind@149920c9c body=29 status=ok
// SIG undefined Unwind@149920c9c(void)

void Unwind_149920c9c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x68);
  return;
}



// FUNCTION 149920cc0 Unwind@149920cc0 body=12 status=ok
// SIG undefined Unwind@149920cc0(void)

void Unwind_149920cc0(undefined8 param_1,longlong param_2)

{
  FUN_145170050(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920ccc Unwind@149920ccc body=29 status=ok
// SIG undefined Unwind@149920ccc(void)

void Unwind_149920ccc(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x70);
  return;
}



// FUNCTION 149920cf0 Unwind@149920cf0 body=12 status=ok
// SIG undefined Unwind@149920cf0(void)

void Unwind_149920cf0(undefined8 param_1,longlong param_2)

{
  FUN_145170080(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920cfc Unwind@149920cfc body=29 status=ok
// SIG undefined Unwind@149920cfc(void)

void Unwind_149920cfc(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x60);
  return;
}



// FUNCTION 149920d20 Unwind@149920d20 body=12 status=ok
// SIG undefined Unwind@149920d20(void)

void Unwind_149920d20(undefined8 param_1,longlong param_2)

{
  FUN_1451700b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920d2c Unwind@149920d2c body=29 status=ok
// SIG undefined Unwind@149920d2c(void)

void Unwind_149920d2c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x70);
  return;
}



// FUNCTION 149920d50 Unwind@149920d50 body=12 status=ok
// SIG undefined Unwind@149920d50(void)

void Unwind_149920d50(undefined8 param_1,longlong param_2)

{
  FUN_1451700e0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920d5c Unwind@149920d5c body=29 status=ok
// SIG undefined Unwind@149920d5c(void)

void Unwind_149920d5c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x70);
  return;
}



// FUNCTION 149920d80 Unwind@149920d80 body=12 status=ok
// SIG undefined Unwind@149920d80(void)

void Unwind_149920d80(undefined8 param_1,longlong param_2)

{
  FUN_145170110(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920d8c Unwind@149920d8c body=29 status=ok
// SIG undefined Unwind@149920d8c(void)

void Unwind_149920d8c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x80);
  return;
}



// FUNCTION 149920db0 Unwind@149920db0 body=12 status=ok
// SIG undefined Unwind@149920db0(void)

void Unwind_149920db0(undefined8 param_1,longlong param_2)

{
  FUN_145170140(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920dbc Unwind@149920dbc body=29 status=ok
// SIG undefined Unwind@149920dbc(void)

void Unwind_149920dbc(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),200);
  return;
}



// FUNCTION 149920de0 Unwind@149920de0 body=12 status=ok
// SIG undefined Unwind@149920de0(void)

void Unwind_149920de0(undefined8 param_1,longlong param_2)

{
  FUN_145170170(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149920dec Unwind@149920dec body=29 status=ok
// SIG undefined Unwind@149920dec(void)

void Unwind_149920dec(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0xa8);
  return;
}



// FUNCTION 149920e10 Unwind@149920e10 body=12 status=ok
// SIG undefined Unwind@149920e10(void)

void Unwind_149920e10(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920e1c Unwind@149920e1c body=12 status=ok
// SIG undefined Unwind@149920e1c(void)

void Unwind_149920e1c(undefined8 param_1,longlong param_2)

{
  FUN_14516fed0(param_2 + 0x48);
  return;
}



// FUNCTION 149920e30 Unwind@149920e30 body=12 status=ok
// SIG undefined Unwind@149920e30(void)

void Unwind_149920e30(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920e3c Unwind@149920e3c body=12 status=ok
// SIG undefined Unwind@149920e3c(void)

void Unwind_149920e3c(undefined8 param_1,longlong param_2)

{
  FUN_14516ff00(param_2 + 0x48);
  return;
}



// FUNCTION 149920e50 Unwind@149920e50 body=12 status=ok
// SIG undefined Unwind@149920e50(void)

void Unwind_149920e50(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920e5c Unwind@149920e5c body=12 status=ok
// SIG undefined Unwind@149920e5c(void)

void Unwind_149920e5c(undefined8 param_1,longlong param_2)

{
  FUN_14516ff30(param_2 + 0x48);
  return;
}



// FUNCTION 149920e70 Unwind@149920e70 body=12 status=ok
// SIG undefined Unwind@149920e70(void)

void Unwind_149920e70(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920e7c Unwind@149920e7c body=12 status=ok
// SIG undefined Unwind@149920e7c(void)

void Unwind_149920e7c(undefined8 param_1,longlong param_2)

{
  FUN_14516ff60(param_2 + 0x48);
  return;
}



// FUNCTION 149920e90 Unwind@149920e90 body=12 status=ok
// SIG undefined Unwind@149920e90(void)

void Unwind_149920e90(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920e9c Unwind@149920e9c body=12 status=ok
// SIG undefined Unwind@149920e9c(void)

void Unwind_149920e9c(undefined8 param_1,longlong param_2)

{
  FUN_14516ff90(param_2 + 0x48);
  return;
}



// FUNCTION 149920eb0 Unwind@149920eb0 body=12 status=ok
// SIG undefined Unwind@149920eb0(void)

void Unwind_149920eb0(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920ebc Unwind@149920ebc body=12 status=ok
// SIG undefined Unwind@149920ebc(void)

void Unwind_149920ebc(undefined8 param_1,longlong param_2)

{
  FUN_14516ffc0(param_2 + 0x48);
  return;
}



// FUNCTION 149920ed0 Unwind@149920ed0 body=12 status=ok
// SIG undefined Unwind@149920ed0(void)

void Unwind_149920ed0(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920edc Unwind@149920edc body=12 status=ok
// SIG undefined Unwind@149920edc(void)

void Unwind_149920edc(undefined8 param_1,longlong param_2)

{
  FUN_14516fff0(param_2 + 0x48);
  return;
}



// FUNCTION 149920ef0 Unwind@149920ef0 body=12 status=ok
// SIG undefined Unwind@149920ef0(void)

void Unwind_149920ef0(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920efc Unwind@149920efc body=12 status=ok
// SIG undefined Unwind@149920efc(void)

void Unwind_149920efc(undefined8 param_1,longlong param_2)

{
  FUN_145170020(param_2 + 0x48);
  return;
}



// FUNCTION 149920f10 Unwind@149920f10 body=12 status=ok
// SIG undefined Unwind@149920f10(void)

void Unwind_149920f10(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920f1c Unwind@149920f1c body=12 status=ok
// SIG undefined Unwind@149920f1c(void)

void Unwind_149920f1c(undefined8 param_1,longlong param_2)

{
  FUN_145170050(param_2 + 0x48);
  return;
}



// FUNCTION 149920f30 Unwind@149920f30 body=12 status=ok
// SIG undefined Unwind@149920f30(void)

void Unwind_149920f30(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920f3c Unwind@149920f3c body=12 status=ok
// SIG undefined Unwind@149920f3c(void)

void Unwind_149920f3c(undefined8 param_1,longlong param_2)

{
  FUN_145170080(param_2 + 0x48);
  return;
}



// FUNCTION 149920f50 Unwind@149920f50 body=12 status=ok
// SIG undefined Unwind@149920f50(void)

void Unwind_149920f50(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920f5c Unwind@149920f5c body=12 status=ok
// SIG undefined Unwind@149920f5c(void)

void Unwind_149920f5c(undefined8 param_1,longlong param_2)

{
  FUN_1451700b0(param_2 + 0x48);
  return;
}



// FUNCTION 149920f70 Unwind@149920f70 body=12 status=ok
// SIG undefined Unwind@149920f70(void)

void Unwind_149920f70(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920f7c Unwind@149920f7c body=12 status=ok
// SIG undefined Unwind@149920f7c(void)

void Unwind_149920f7c(undefined8 param_1,longlong param_2)

{
  FUN_1451700e0(param_2 + 0x48);
  return;
}



// FUNCTION 149920f90 Unwind@149920f90 body=12 status=ok
// SIG undefined Unwind@149920f90(void)

void Unwind_149920f90(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920f9c Unwind@149920f9c body=12 status=ok
// SIG undefined Unwind@149920f9c(void)

void Unwind_149920f9c(undefined8 param_1,longlong param_2)

{
  FUN_145170110(param_2 + 0x48);
  return;
}



// FUNCTION 149920fb0 Unwind@149920fb0 body=12 status=ok
// SIG undefined Unwind@149920fb0(void)

void Unwind_149920fb0(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920fbc Unwind@149920fbc body=12 status=ok
// SIG undefined Unwind@149920fbc(void)

void Unwind_149920fbc(undefined8 param_1,longlong param_2)

{
  FUN_145170140(param_2 + 0x48);
  return;
}



// FUNCTION 149920fd0 Unwind@149920fd0 body=12 status=ok
// SIG undefined Unwind@149920fd0(void)

void Unwind_149920fd0(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x50);
  return;
}



// FUNCTION 149920fdc Unwind@149920fdc body=12 status=ok
// SIG undefined Unwind@149920fdc(void)

void Unwind_149920fdc(undefined8 param_1,longlong param_2)

{
  FUN_145170170(param_2 + 0x48);
  return;
}



// FUNCTION 149920ff0 Unwind@149920ff0 body=12 status=ok
// SIG undefined Unwind@149920ff0(void)

void Unwind_149920ff0(undefined8 param_1,longlong param_2)

{
  FUN_144d7aac0(param_2 + 0x40);
  return;
}



// FUNCTION 149920ffc Unwind@149920ffc body=12 status=ok
// SIG undefined Unwind@149920ffc(void)

void Unwind_149920ffc(undefined8 param_1,longlong param_2)

{
  FUN_144d78100(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 149921008 Unwind@149921008 body=12 status=ok
// SIG undefined Unwind@149921008(void)

void Unwind_149921008(undefined8 param_1,longlong param_2)

{
  FUN_144d73150(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 149921020 Unwind@149921020 body=12 status=ok
// SIG undefined Unwind@149921020(void)

void Unwind_149921020(undefined8 param_1,longlong param_2)

{
  FUN_144d7ac30(param_2 + 0x50);
  return;
}



// FUNCTION 149921030 Unwind@149921030 body=12 status=ok
// SIG undefined Unwind@149921030(void)

void Unwind_149921030(undefined8 param_1,longlong param_2)

{
  FUN_144d7ac30(param_2 + 0x50);
  return;
}



// FUNCTION 149921040 Unwind@149921040 body=12 status=ok
// SIG undefined Unwind@149921040(void)

void Unwind_149921040(undefined8 param_1,longlong param_2)

{
  FUN_144d7ac30(param_2 + 0x30);
  return;
}



// FUNCTION 14992104c Unwind@14992104c body=12 status=ok
// SIG undefined Unwind@14992104c(void)

void Unwind_14992104c(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x40);
  return;
}



// FUNCTION 149921060 Unwind@149921060 body=12 status=ok
// SIG undefined Unwind@149921060(void)

void Unwind_149921060(undefined8 param_1,longlong param_2)

{
  FUN_144d7ac30(param_2 + 0x20);
  return;
}



// FUNCTION 149921070 Unwind@149921070 body=12 status=ok
// SIG undefined Unwind@149921070(void)

void Unwind_149921070(undefined8 param_1,longlong param_2)

{
  FUN_144d7ac30(param_2 + 0x30);
  return;
}



// FUNCTION 149921080 Unwind@149921080 body=29 status=ok
// SIG undefined Unwind@149921080(void)

void Unwind_149921080(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14992109d Unwind@14992109d body=12 status=ok
// SIG undefined Unwind@14992109d(void)

void Unwind_14992109d(undefined8 param_1,longlong param_2)

{
  FUN_145172580(param_2 + 0x48);
  return;
}



// FUNCTION 1499210b0 Unwind@1499210b0 body=12 status=ok
// SIG undefined Unwind@1499210b0(void)

void Unwind_1499210b0(undefined8 param_1,longlong param_2)

{
  FUN_144d7aba0(param_2 + 0x20);
  return;
}



// FUNCTION 1499210bc Unwind@1499210bc body=12 status=ok
// SIG undefined Unwind@1499210bc(void)

void Unwind_1499210bc(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499210d0 Unwind@1499210d0 body=12 status=ok
// SIG undefined Unwind@1499210d0(void)

void Unwind_1499210d0(undefined8 param_1,longlong param_2)

{
  FUN_144d7ac60(param_2 + 0x30);
  return;
}



// FUNCTION 1499210e0 Unwind@1499210e0 body=12 status=ok
// SIG undefined Unwind@1499210e0(void)

void Unwind_1499210e0(undefined8 param_1,longlong param_2)

{
  FUN_144d7abd0(param_2 + 0x50);
  return;
}



// FUNCTION 1499210ec Unwind@1499210ec body=12 status=ok
// SIG undefined Unwind@1499210ec(void)

void Unwind_1499210ec(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x28);
  return;
}



// FUNCTION 149921100 Unwind@149921100 body=12 status=ok
// SIG undefined Unwind@149921100(void)

void Unwind_149921100(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1451730c0(param_2 + 0x28);
  return;
}



// FUNCTION 14992110c Unwind@14992110c body=12 status=ok
// SIG undefined Unwind@14992110c(void)

void Unwind_14992110c(undefined8 param_1,longlong param_2)

{
  FUN_144d7ab30(param_2 + 0x50);
  return;
}



// FUNCTION 149921120 Unwind@149921120 body=12 status=ok
// SIG undefined Unwind@149921120(void)

void Unwind_149921120(undefined8 param_1,longlong param_2)

{
  FUN_144d78180(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149921130 Unwind@149921130 body=12 status=ok
// SIG undefined Unwind@149921130(void)

void Unwind_149921130(undefined8 param_1,longlong param_2)

{
  FUN_144d78180(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149921140 Unwind@149921140 body=29 status=ok
// SIG undefined Unwind@149921140(void)

void Unwind_149921140(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14992115d Unwind@14992115d body=12 status=ok
// SIG undefined Unwind@14992115d(void)

void Unwind_14992115d(undefined8 param_1,longlong param_2)

{
  FUN_145173de0(param_2 + 0x48);
  return;
}



// FUNCTION 149921170 Unwind@149921170 body=12 status=ok
// SIG undefined Unwind@149921170(void)

void Unwind_149921170(undefined8 param_1,longlong param_2)

{
  FUN_145175120(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149921180 Unwind@149921180 body=12 status=ok
// SIG undefined Unwind@149921180(void)

void Unwind_149921180(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149921190 Unwind@149921190 body=12 status=ok
// SIG undefined Unwind@149921190(void)

void Unwind_149921190(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499211a0 Unwind@1499211a0 body=12 status=ok
// SIG undefined Unwind@1499211a0(void)

void Unwind_1499211a0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499211b0 Unwind@1499211b0 body=12 status=ok
// SIG undefined Unwind@1499211b0(void)

void Unwind_1499211b0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499211c0 Unwind@1499211c0 body=12 status=ok
// SIG undefined Unwind@1499211c0(void)

void Unwind_1499211c0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499211d0 Unwind@1499211d0 body=12 status=ok
// SIG undefined Unwind@1499211d0(void)

void Unwind_1499211d0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499211e0 Unwind@1499211e0 body=12 status=ok
// SIG undefined Unwind@1499211e0(void)

void Unwind_1499211e0(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499211f0 Unwind@1499211f0 body=12 status=ok
// SIG undefined Unwind@1499211f0(void)

void Unwind_1499211f0(undefined8 param_1,longlong param_2)

{
  FUN_145175120(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149921200 Unwind@149921200 body=12 status=ok
// SIG undefined Unwind@149921200(void)

void Unwind_149921200(undefined8 param_1,longlong param_2)

{
  FUN_144d783c0(param_2 + 0x48);
  return;
}



// FUNCTION 149921210 Unwind@149921210 body=12 status=ok
// SIG undefined Unwind@149921210(void)

void Unwind_149921210(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149921220 Unwind@149921220 body=12 status=ok
// SIG undefined Unwind@149921220(void)

void Unwind_149921220(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149921230 Unwind@149921230 body=12 status=ok
// SIG undefined Unwind@149921230(void)

void Unwind_149921230(undefined8 param_1,longlong param_2)

{
  FUN_144d781b0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 149921240 Unwind@149921240 body=12 status=ok
// SIG undefined Unwind@149921240(void)

void Unwind_149921240(undefined8 param_1,longlong param_2)

{
  FUN_144d781b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 149921250 Unwind@149921250 body=12 status=ok
// SIG undefined Unwind@149921250(void)

void Unwind_149921250(undefined8 param_1,longlong param_2)

{
  FUN_144d7c5a0(param_2 + 0x48);
  return;
}



// FUNCTION 149921260 Unwind@149921260 body=12 status=ok
// SIG undefined Unwind@149921260(void)

void Unwind_149921260(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149921270 Unwind@149921270 body=12 status=ok
// SIG undefined Unwind@149921270(void)

void Unwind_149921270(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149921280 Unwind@149921280 body=12 status=ok
// SIG undefined Unwind@149921280(void)

void Unwind_149921280(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 149921290 Unwind@149921290 body=12 status=ok
// SIG undefined Unwind@149921290(void)

void Unwind_149921290(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 1499212a0 Unwind@1499212a0 body=29 status=ok
// SIG undefined Unwind@1499212a0(void)

void Unwind_1499212a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 1499212bd Unwind@1499212bd body=12 status=ok
// SIG undefined Unwind@1499212bd(void)

void Unwind_1499212bd(undefined8 param_1,longlong param_2)

{
  FUN_145176220(param_2 + 0x48);
  return;
}



// FUNCTION 1499212d0 Unwind@1499212d0 body=29 status=ok
// SIG undefined Unwind@1499212d0(void)

void Unwind_1499212d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x20);
  return;
}


