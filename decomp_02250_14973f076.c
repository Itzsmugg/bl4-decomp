// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14973f076 FUN_14973f076 body=275 status=ok
// SIG undefined FUN_14973f076(void)

void FUN_14973f076(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_6c = fVar1;
    if (fVar1 <= *pfVar4) {
      local_6c = *pfVar4;
    }
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_68);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973f18a FUN_14973f18a body=327 status=ok
// SIG undefined FUN_14973f18a(void)

void FUN_14973f18a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a4) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    fVar4 = *pfVar3;
    lVar1 = param_1 + 0x19c;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = lVar1;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,lVar1);
    if (*pfVar3 <= fVar4) {
      fVar4 = *pfVar3;
    }
    local_68 = param_1 + 0x1a0;
    local_60 = 0xffffffff;
    local_58 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,lVar1);
    local_6c = fVar4;
    if (*pfVar3 <= fVar4) {
      local_6c = *pfVar3;
    }
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a4;
    lVar1 = FUN_146fb78aa(param_1,&local_68);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973f2d2 FUN_14973f2d2 body=327 status=ok
// SIG undefined FUN_14973f2d2(void)

void FUN_14973f2d2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a4) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    fVar4 = *pfVar3;
    lVar1 = param_1 + 0x19c;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = lVar1;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,lVar1);
    if (fVar4 <= *pfVar3) {
      fVar4 = *pfVar3;
    }
    local_68 = param_1 + 0x1a0;
    local_60 = 0xffffffff;
    local_58 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,lVar1);
    local_6c = fVar4;
    if (fVar4 <= *pfVar3) {
      local_6c = *pfVar3;
    }
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a4;
    lVar1 = FUN_146fb78aa(param_1,&local_68);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973f41a FUN_14973f41a body=255 status=ok
// SIG undefined FUN_14973f41a(void)

void FUN_14973f41a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  uint uVar4;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    uVar4 = -(uint)(0.0 < *pfVar3);
    local_5c = uVar4 & 0x3f800000 | ~uVar4 & -(uint)(*pfVar3 < 0.0) & 0xbf800000;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973f51a FUN_14973f51a body=341 status=ok
// SIG undefined FUN_14973f51a(void)

void FUN_14973f51a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_a8 [44];
  float local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a4) {
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_78);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar5 = *pfVar4;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_78);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    fVar1 = *pfVar4;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a0;
    uVar3 = FUN_146fb4872(param_1,&local_78);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x1a0);
    if (*pfVar4 <= fVar5) {
      fVar5 = *pfVar4;
    }
    local_7c = fVar5;
    if (fVar5 <= fVar1) {
      local_7c = fVar1;
    }
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a4;
    lVar2 = FUN_146fb78aa(param_1,&local_78);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_7c,param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973f670 FUN_14973f670 body=535 status=ok
// SIG undefined FUN_14973f670(void)

void FUN_14973f670(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_c8 [44];
  float local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1ac) {
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x198);
    fVar7 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x19c;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x19c);
    fVar1 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1a0;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a0);
    fVar2 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1a4;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a4);
    fVar3 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1a8;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a8);
    if ((fVar1 < fVar2) && (fVar3 < *pfVar6)) {
      if (fVar2 <= fVar7) {
        fVar7 = fVar2;
      }
      if (fVar7 <= fVar1) {
        fVar7 = fVar1;
      }
      fVar7 = (*pfVar6 - fVar3) * ((fVar7 - fVar1) / (fVar2 - fVar1)) + fVar3;
    }
    local_90 = 0xffffffff;
    local_88 = 0;
    local_9c = fVar7;
    local_98 = param_1 + 0x1ac;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496fe392(lVar4,&local_9c,param_2);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973f888 FUN_14973f888 body=526 status=ok
// SIG undefined FUN_14973f888(void)

void FUN_14973f888(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_c8 [44];
  float local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1ac) {
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x198);
    fVar7 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x19c;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x19c);
    fVar1 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1a0;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a0);
    fVar2 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1a4;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a4);
    fVar3 = *pfVar6;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1a8;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a8);
    if ((fVar1 < fVar2) && (fVar3 < *pfVar6)) {
      fVar7 = (*pfVar6 - fVar3) * ((fVar7 - fVar1) / (fVar2 - fVar1)) + fVar3;
    }
    local_90 = 0xffffffff;
    local_88 = 0;
    local_9c = fVar7;
    local_98 = param_1 + 0x1ac;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496fe392(lVar4,&local_9c,param_2);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973fa98 FUN_14973fa98 body=284 status=ok
// SIG undefined FUN_14973fa98(void)

void FUN_14973fa98(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float _X;
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    _X = *pfVar3;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x19c);
    local_6c = powf(_X,*pfVar3);
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1,&local_68);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973fbb6 FUN_14973fbb6 body=326 status=ok
// SIG undefined FUN_14973fbb6(void)

void FUN_14973fbb6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float _X;
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_a8 [44];
  float local_7c;
  float *local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pfVar1 = (float *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pfVar1 == (float *)(param_1 + 0x1a0)) {
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = (float *)(param_1 + 0x198);
    uVar2 = FUN_146fb4872(param_1,&local_78);
    pfVar1 = (float *)FUN_14972a54c(uVar2,param_2,(float *)(param_1 + 0x198));
    _X = *pfVar1;
    pfVar1 = (float *)(param_1 + 0x19c);
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = pfVar1;
    uVar2 = FUN_146fb4872(param_1,&local_78);
    FUN_14972a54c(uVar2,param_2,pfVar1);
    local_7c = 0.0;
    if (0.0 < _X) {
      fVar4 = logf(*pfVar1);
      local_7c = logf(_X);
      local_7c = fVar4 / local_7c;
    }
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = (float *)(param_1 + 0x1a0);
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fe392(lVar3,&local_7c,param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973fcfe FUN_14973fcfe body=223 status=ok
// SIG undefined FUN_14973fcfe(void)

void FUN_14973fcfe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = logf(*(float *)(param_1 + 0x198));
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973fdde FUN_14973fdde body=365 status=ok
// SIG undefined FUN_14973fdde(void)

void FUN_14973fdde(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  uint uVar6;
  undefined1 auStack_b8 [44];
  uint local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == param_1 + 0x1a4) {
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x198;
    uVar4 = FUN_146fb4872(param_1,&local_88);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x198);
    fVar1 = *pfVar5;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x19c;
    uVar4 = FUN_146fb4872(param_1,&local_88);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x19c);
    fVar2 = *pfVar5;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1a0;
    uVar4 = FUN_146fb4872(param_1,&local_88);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1a0);
    uVar6 = -(uint)(fVar1 < fVar2);
    local_8c = ~uVar6 & (uint)fVar1 | (uint)((fVar2 - fVar1) * *pfVar5 + fVar1) & uVar6;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1a4;
    lVar3 = FUN_146fb78aa(param_1,&local_88);
    if (lVar3 != 0) {
      FUN_1496fe392(lVar3,&local_8c,param_2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ff4c FUN_14973ff4c body=493 status=ok
// SIG undefined FUN_14973ff4c(void)

void FUN_14973ff4c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auStack_b8 [44];
  float local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == param_1 + 0x1a4) {
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x198;
    uVar4 = FUN_146fb4872(param_1,&local_88);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x198);
    fVar6 = *pfVar5;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x19c;
    uVar4 = FUN_146fb4872(param_1,&local_88);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x19c);
    fVar1 = *pfVar5;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1a0;
    uVar4 = FUN_146fb4872(param_1,&local_88);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1a0);
    fVar2 = *pfVar5;
    local_8c = fVar6;
    if ((fVar1 < fVar2) && ((fVar2 - fVar1 != 0.0 || (local_8c = fVar2, NAN(fVar2 - fVar1))))) {
      if (fVar1 <= fVar6) {
        local_8c = fVar6;
        if (fVar2 < fVar6) {
          fVar6 = (float)FUN_1447c7e44(fVar6 - fVar2);
          local_8c = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar2 |
                            (uint)(fVar1 + fVar6) & -(uint)(fVar6 != 0.0));
        }
      }
      else {
        local_8c = fVar6;
        fVar6 = (float)FUN_1447c7e44(fVar1 - fVar6);
        local_8c = (float)((uint)(fVar2 - fVar6) & -(uint)(fVar6 != 0.0) |
                          ~-(uint)(fVar6 != 0.0) & (uint)fVar1);
      }
    }
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1a4;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fe392(lVar3,&local_8c,param_2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14974013a FUN_14974013a body=219 status=ok
// SIG undefined FUN_14974013a(void)

void FUN_14974013a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = expf(*pfVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149740216 FUN_149740216 body=219 status=ok
// SIG undefined FUN_149740216(void)

void FUN_149740216(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = sinf(*pfVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497402f2 FUN_1497402f2 body=276 status=ok
// SIG undefined FUN_1497402f2(void)

void FUN_1497402f2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_68 [36];
  float local_44;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x19c) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_44 = 0.0;
    if (ABS(fVar1) <= 1.0) {
      fVar5 = fVar1;
      if (1.0 <= fVar1) {
        fVar5 = 1.0;
      }
      local_44 = asinf((float)(~-(uint)(fVar1 < -1.0) & (uint)fVar5 |
                              -(uint)(fVar1 < -1.0) & 0xbf800000));
    }
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x19c;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_1496fe392(lVar2,&local_44,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149740408 FUN_149740408 body=219 status=ok
// SIG undefined FUN_149740408(void)

void FUN_149740408(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = cosf(*pfVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497404e4 FUN_1497404e4 body=276 status=ok
// SIG undefined FUN_1497404e4(void)

void FUN_1497404e4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_68 [36];
  float local_44;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x19c) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_44 = 0.0;
    if (ABS(fVar1) <= 1.0) {
      fVar5 = fVar1;
      if (1.0 <= fVar1) {
        fVar5 = 1.0;
      }
      local_44 = acosf((float)(~-(uint)(fVar1 < -1.0) & (uint)fVar5 |
                              -(uint)(fVar1 < -1.0) & 0xbf800000));
    }
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x19c;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_1496fe392(lVar2,&local_44,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497405fa FUN_1497405fa body=219 status=ok
// SIG undefined FUN_1497405fa(void)

void FUN_1497405fa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = tanf(*pfVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497406d6 FUN_1497406d6 body=219 status=ok
// SIG undefined FUN_1497406d6(void)

void FUN_1497406d6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = atanf(*pfVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497407b2 FUN_1497407b2 body=283 status=ok
// SIG undefined FUN_1497407b2(void)

void FUN_1497407b2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    uVar1 = *puVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_6c = FUN_144a7ed88(uVar1,*puVar4);
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_68);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497408ce FUN_1497408ce body=394 status=ok
// SIG undefined FUN_1497408ce(void)

void FUN_1497408ce(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_a8 [44];
  float local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1a4) {
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_78);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x198);
    fVar1 = *pfVar6;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x19c;
    uVar5 = FUN_146fb4872(param_1,&local_78);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x19c);
    fVar2 = *pfVar6;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a0;
    uVar5 = FUN_146fb4872(param_1,&local_78);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a0);
    fVar3 = *pfVar6;
    fVar7 = fVar2;
    if (fVar2 <= fVar3) {
      fVar7 = fVar3;
      fVar3 = fVar2;
    }
    local_7c = (fVar1 - fVar3) / (fVar7 - fVar3);
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a4;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496fe392(lVar4,&local_7c,param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149740a5a FUN_149740a5a body=349 status=ok
// SIG undefined FUN_149740a5a(void)

void FUN_149740a5a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  double *pdVar6;
  float *pfVar7;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1b8) {
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_88);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x198);
    dVar1 = *pdVar6;
    dVar2 = pdVar6[1];
    dVar3 = pdVar6[2];
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1b0;
    uVar5 = FUN_146fb4872(param_1,&local_88);
    pfVar7 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1b0);
    local_a0 = (double)*pfVar7;
    local_90 = dVar3 * local_a0;
    local_98 = dVar2 * local_a0;
    local_a0 = dVar1 * local_a0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1b8;
    lVar4 = FUN_146fb78aa(param_1,&local_88);
    if (lVar4 != 0) {
      FUN_149728d4a(lVar4,&local_a0,param_2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149740bb8 FUN_149740bb8 body=341 status=ok
// SIG undefined FUN_149740bb8(void)

void FUN_149740bb8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined1 auStack_b8 [44];
  float local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1c8) {
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_88);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x198);
    dVar1 = *pdVar6;
    dVar2 = pdVar6[1];
    dVar3 = pdVar6[2];
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1b0;
    uVar5 = FUN_146fb4872(param_1,&local_88);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x1b0);
    local_8c = (float)(dVar3 * pdVar6[2] + dVar1 * *pdVar6 + dVar2 * pdVar6[1]);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1c8;
    lVar4 = FUN_146fb78aa(param_1,&local_88);
    if (lVar4 != 0) {
      FUN_1497286c4(lVar4,&local_8c,param_2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149740d0e FUN_149740d0e body=390 status=ok
// SIG undefined FUN_149740d0e(void)

void FUN_149740d0e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1c8) {
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x198);
    dVar1 = *pdVar6;
    dVar2 = pdVar6[1];
    dVar3 = pdVar6[2];
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1b0;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x1b0);
    local_a0 = dVar1 * pdVar6[1] - *pdVar6 * dVar2;
    local_a8 = dVar3 * *pdVar6 - pdVar6[2] * dVar1;
    local_b0 = dVar2 * pdVar6[2] - pdVar6[1] * dVar3;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1c8;
    lVar4 = FUN_146fb78aa(param_1,&local_98);
    if (lVar4 != 0) {
      FUN_149728d4a(lVar4,&local_b0,param_2);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149740e96 FUN_149740e96 body=457 status=ok
// SIG undefined FUN_149740e96(void)

void FUN_149740e96(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  undefined8 uVar5;
  double *pdVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  float *local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pfVar4 = (float *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pfVar4 == (float *)(param_1 + 0x1b8)) {
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = (float *)(param_1 + 0x198);
    uVar5 = FUN_146fb4872(param_1,&local_88);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,(float *)(param_1 + 0x198));
    dVar1 = *pdVar6;
    dVar2 = pdVar6[1];
    dVar3 = pdVar6[2];
    pfVar4 = (float *)(param_1 + 0x1b0);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = pfVar4;
    uVar5 = FUN_146fb4872(param_1,&local_88);
    FUN_14972a54c(uVar5,param_2,pfVar4);
    dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if ((dVar8 != 1.0) || (local_a8 = dVar1, dStack_a0 = dVar2, local_98 = dVar3, NAN(dVar8))) {
      if ((double)*pfVar4 <= dVar8) {
        local_a8 = 1.0 / SQRT(dVar8);
        local_98 = dVar3 * local_a8;
        dStack_a0 = dVar2 * local_a8;
        local_a8 = dVar1 * local_a8;
      }
      else {
        local_98 = DAT_14c8464f0;
        local_a8 = DAT_14c8464e0;
        dStack_a0 = DAT_14c8464e8;
      }
    }
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = (float *)(param_1 + 0x1b8);
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_149728d4a(lVar7,&local_a8,param_2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149741060 FUN_149741060 body=252 status=ok
// SIG undefined FUN_149741060(void)

void FUN_149741060(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pdVar3 = (double *)FUN_14979981c(uVar2,param_2,param_1 + 0x198);
    local_5c = (float)SQRT(pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1b0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974115e FUN_14974115e body=374 status=ok
// SIG undefined FUN_14974115e(void)

void FUN_14974115e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined1 auStack_c8 [44];
  float local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1c8) {
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x198);
    dVar1 = *pdVar6;
    dVar2 = pdVar6[1];
    dVar3 = pdVar6[2];
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1b0;
    uVar5 = FUN_146fb4872(param_1,&local_98);
    pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x1b0);
    local_9c = (float)SQRT((pdVar6[2] - dVar3) * (pdVar6[2] - dVar3) +
                           (*pdVar6 - dVar1) * (*pdVar6 - dVar1) +
                           (pdVar6[1] - dVar2) * (pdVar6[1] - dVar2));
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1c8;
    lVar4 = FUN_146fb78aa(param_1,&local_98);
    if (lVar4 != 0) {
      FUN_1497286c4(lVar4,&local_9c,param_2);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497412d6 FUN_1497412d6 body=230 status=ok
// SIG undefined FUN_1497412d6(void)

void FUN_1497412d6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_59 = ABS(*pfVar3) <= 1e-08;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497a5324(lVar1,&local_59,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497413be FUN_1497413be body=305 status=ok
// SIG undefined FUN_1497413be(void)

void FUN_1497413be(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    if (*(char *)(param_1 + 0x198) == '\x01') {
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = param_1 + 0x19c;
      uVar3 = FUN_146fb4872(param_1,&local_58);
      pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
      local_5c = (float)((int)*pfVar4 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
    }
    else {
      uVar1 = rand();
      local_5c = (float)(uVar1 & 0x7fff) / 32767.0;
    }
    local_48 = 0;
    local_50 = 0xffffffff;
    local_58 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_58);
    if (lVar2 != 0) {
      FUN_1497ad59e(lVar2,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497414f0 FUN_1497414f0 body=476 status=ok
// SIG undefined FUN_1497414f0(void)

void FUN_1497414f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined1 auStack_a8 [44];
  float local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1a8) {
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a0;
    uVar5 = FUN_146fb4872(param_1,&local_78);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a0);
    fVar1 = *pfVar6;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a4;
    uVar5 = FUN_146fb4872(param_1,&local_78);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a4);
    fVar2 = *pfVar6;
    if (*(char *)(param_1 + 0x198) == '\x01') {
      local_70 = 0xffffffff;
      local_68 = 0;
      local_78 = param_1 + 0x19c;
      uVar5 = FUN_146fb4872(param_1,&local_78);
      pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x19c);
      local_7c = ((float)((int)*pfVar6 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
                 (fVar2 - fVar1);
    }
    else {
      uVar3 = rand();
      local_7c = ((float)(uVar3 & 0x7fff) / 32767.0) * (fVar2 - fVar1);
    }
    local_7c = local_7c + fVar1;
    local_68 = 0;
    local_70 = 0xffffffff;
    local_78 = param_1 + 0x1a8;
    lVar4 = FUN_146fb78aa(param_1,&local_78);
    if (lVar4 != 0) {
      FUN_1497ad59e(lVar4,&local_7c,param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497416ce FUN_1497416ce body=269 status=ok
// SIG undefined FUN_1497416ce(void)

void FUN_1497416ce(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  int local_60;
  int local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    if (*(char *)(param_1 + 0x198) == '\x01') {
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = param_1 + 0x19c;
      uVar2 = FUN_146fb4872(param_1,&local_58);
      pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x19c);
      local_60 = (int)*pfVar3;
      local_5c = local_60;
      FUN_1477ee866(&local_60,local_78);
    }
    else {
      FUN_1416b9e2e(local_78);
    }
    local_48 = 0;
    local_50 = 0xffffffff;
    local_58 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_149728fe0(lVar1,local_78,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497417dc FUN_1497417dc body=1755 status=ok
// SIG undefined FUN_1497417dc(void)

void FUN_1497417dc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  double *pdVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_178 [32];
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar1 = (double)(param_1 + 0x1c0);
  dVar3 = (double)(**(code **)(*param_3 + 0x20))(param_3);
  if (dVar3 != dVar1) goto LAB_14974186e;
  dStack_e0._0_4_ = 0xffffffff;
  local_d8 = 0.0;
  local_e8 = (double)(param_1 + 0x1a0);
  uVar4 = FUN_146fb4872(param_1,&local_e8);
  pdVar5 = (double *)FUN_14979981c(uVar4,param_2,param_1 + 0x1a0);
  local_138 = *pdVar5;
  dStack_130 = pdVar5[1];
  local_128 = pdVar5[2];
  dStack_e0._0_4_ = 0xffffffff;
  local_d8 = 0.0;
  local_e8 = (double)(param_1 + 0x1b8);
  uVar4 = FUN_146fb4872(param_1,&local_e8);
  pfVar6 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1b8);
  fVar10 = *pfVar6;
  if (*(char *)(param_1 + 0x198) == '\x01') {
    dStack_e0 = (double)CONCAT44(dStack_e0._4_4_,0xffffffff);
    local_d8 = 0.0;
    local_e8 = (double)(param_1 + 0x19c);
    uVar4 = FUN_146fb4872(param_1);
    pfVar6 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x19c);
    if (fVar10 <= 0.0) {
      dVar3 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
      if ((dVar3 != 1.0) || (NAN(dVar3))) {
        dStack_118 = dStack_130;
        local_110 = local_128;
        local_120 = local_138;
        if (9.99999993922529e-09 <= dVar3) goto LAB_149741e07;
        local_148 = DAT_14c8464f0;
        local_158 = DAT_14c8464e0;
        dStack_150 = DAT_14c8464e8;
      }
      else {
        local_148 = local_128;
        local_158 = local_138;
        dStack_150 = dStack_130;
      }
    }
    else {
      fVar2 = *pfVar6;
      fVar8 = (float)((int)fVar2 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0;
      fVar9 = fVar8 + fVar8 + -1.0;
      fVar8 = fVar9;
      if (1.0 <= fVar9) {
        fVar8 = 1.0;
      }
      fVar8 = acosf((float)(-(uint)(fVar9 < -1.0) & 0xbf800000 |
                           ~-(uint)(fVar9 < -1.0) & (uint)fVar8));
      fVar10 = (float)FUN_1447c7e44(fVar8,fVar10);
      FUN_144a79a9c(&local_138,&local_e8);
      dVar14 = local_e8 * 0.01745329238474369;
      dVar15 = dStack_e0 * 0.01745329238474369;
      dVar3 = local_d8 * 0.01745329238474369;
      dVar11 = sin(dVar14);
      dVar12 = sin(dVar15);
      dVar13 = sin(dVar3);
      sin(0.0);
      dVar14 = cos(dVar14);
      dVar15 = cos(dVar15);
      dVar3 = cos(dVar3);
      cos(0.0);
      local_e8 = dVar14 * dVar15;
      dStack_e0 = dVar12 * dVar14;
      local_108 = dVar11 * dVar13 * dVar15 - dVar12 * dVar3;
      dStack_100 = dVar11 * dVar13 * dVar12 + dVar15 * dVar3;
      local_f8 = -dVar13 * dVar14;
      dVar3 = dVar11 * dVar11 + local_e8 * local_e8 + dStack_e0 * dStack_e0;
      if ((dVar3 != 1.0) || (local_d8 = dVar11, NAN(dVar3))) {
        if (9.99999993922529e-09 <= dVar3) {
          dVar3 = 1.0 / SQRT(dVar3);
          local_d8 = dVar11 * dVar3;
          dStack_e0 = dStack_e0 * dVar3;
          local_e8 = local_e8 * dVar3;
        }
        else {
          local_d8 = DAT_14c8464f0;
          local_e8 = DAT_14c8464e0;
          dStack_e0 = DAT_14c8464e8;
        }
      }
      dVar3 = local_f8 * local_f8 + local_108 * local_108 + dStack_100 * dStack_100;
      if ((dVar3 != 1.0) || (NAN(dVar3))) {
        if (9.99999993922529e-09 <= dVar3) {
          dVar3 = 1.0 / SQRT(dVar3);
          local_f8 = local_f8 * dVar3;
          dStack_100 = dStack_100 * dVar3;
          local_108 = local_108 * dVar3;
        }
        else {
          local_f8 = DAT_14c8464f0;
          local_108 = DAT_14c8464e0;
          dStack_100 = DAT_14c8464e8;
        }
      }
      FUN_140ccff96(&local_138,&local_158,
                    SUB84((double)((fVar10 * 180.0) / 3.1415927) * 0.017453292519943295,0),
                    &local_108);
      FUN_140ccff96(&local_158,&local_120,
                    SUB84((double)((((float)((int)fVar2 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000)
                                    + -1.0) * 6.2831855 * 180.0) / 3.1415927) * 0.017453292519943295
                          ,0),&local_e8);
      dVar3 = local_110 * local_110 + local_120 * local_120 + dStack_118 * dStack_118;
      if (((dVar3 != 1.0) ||
          (local_158 = local_120, dStack_150 = dStack_118, local_148 = local_110, NAN(dVar3))) &&
         (local_158 = DAT_14c8464e0, dStack_150 = DAT_14c8464e8, local_148 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar3)) {
LAB_149741e07:
        local_158 = 1.0 / SQRT(dVar3);
        local_148 = local_110 * local_158;
        dStack_150 = dStack_118 * local_158;
        local_158 = local_120 * local_158;
      }
    }
    dStack_e0 = (double)CONCAT44(dStack_e0._4_4_,0xffffffff);
    local_d8 = 0.0;
    local_e8 = dVar1;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 == 0) goto LAB_14974186e;
    pdVar5 = &local_158;
  }
  else {
    FUN_140c84580(&local_108,&local_138,fVar10);
    dStack_e0 = (double)CONCAT44(dStack_e0._4_4_,0xffffffff);
    local_d8 = 0.0;
    local_e8 = dVar1;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 == 0) goto LAB_14974186e;
    pdVar5 = &local_108;
  }
  FUN_149728fe0(lVar7,pdVar5,param_2);
LAB_14974186e:
  if ((local_d0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149741eb8 FUN_149741eb8 body=221 status=ok
// SIG undefined FUN_149741eb8(void)

void FUN_149741eb8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = *pfVar3 * 57.295776;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497ad59e(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149741f96 FUN_149741f96 body=221 status=ok
// SIG undefined FUN_149741f96(void)

void FUN_149741f96(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = *pfVar3 * 0.017453292;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497ad59e(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149742074 FUN_149742074 body=809 status=ok
// SIG undefined FUN_149742074(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_149742074(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1 + 0x19c;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != lVar2) goto switchD_1497420df_default;
  switch(*(undefined1 *)(param_1 + 0x198)) {
  case 0:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 1:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    goto joined_r0x0001497421be;
  case 2:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
joined_r0x0001497421be:
    if (lVar2 == 0) goto switchD_1497420df_default;
    goto LAB_149742391;
  case 3:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 4:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 5:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 6:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 7:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 8:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 9:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  case 10:
    local_3c = 0x402df854;
    goto LAB_149742322;
  case 0xb:
    local_3c = 0x3f13c468;
    goto LAB_149742322;
  case 0xc:
    local_3c = 0x3fcf1bbd;
LAB_149742322:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_1497ad59e(lVar2,&local_3c,param_2);
    }
    goto switchD_1497420df_default;
  case 0xd:
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = lVar2;
    lVar2 = FUN_146fb78aa(param_1);
    break;
  default:
    goto switchD_1497420df_default;
  }
  if (lVar2 != 0) {
LAB_149742391:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
switchD_1497420df_default:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497423b4 FUN_1497423b4 body=221 status=ok
// SIG undefined FUN_1497423b4(void)

void FUN_1497423b4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = 1.0 - *pfVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149742492 FUN_149742492 body=363 status=ok
// SIG undefined FUN_149742492(void)

undefined8 * FUN_149742492(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be3ae70;
  local_60 = param_1 + 0x33;
  local_88 = param_1 + 0x37;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497425fe FUN_1497425fe body=1581 status=ok
// SIG undefined FUN_1497425fe(void)

void FUN_1497425fe(longlong param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  float *pfVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_340;
  wchar_t *local_338;
  int local_330;
  wchar_t *local_328;
  int local_320;
  wchar_t *local_318;
  int local_310;
  wchar_t *local_308;
  int local_300;
  undefined2 *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  float local_2e4;
  double local_2e0 [2];
  byte local_2d0;
  undefined2 *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_2e4 = 0.0;
  local_2f8 = (undefined2 *)0x0;
  local_2f0 = *(int *)(param_1 + 0x1b0);
  lVar6 = (longlong)local_2f0;
  _Src = *(void **)(param_1 + 0x1a8);
  if (lVar6 == 0) {
    local_2ec = 0;
  }
  else {
    FUN_1446dd670(&local_2f8,local_2f0,0);
    memcpy(local_2f8,_Src,lVar6 * 2);
  }
  FUN_140ded208(&local_2f8,&local_2c8);
  if (local_2f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_2f8 = local_2c8;
  local_2f0 = local_2c0;
  local_2ec = local_2bc;
  if (1 < local_2c0) {
    FUN_1400b22c2(&local_308,&DAT_14be3af80);
    pwVar5 = local_308;
    if (local_300 == 0) {
      pwVar5 = L"";
    }
    if (pwVar5 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar5);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar5,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x198);
        uVar3 = FUN_146fb4872(param_1);
        pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,(undefined2 *)(param_1 + 0x198));
        FUN_1406112c4(&local_2c8,(double)*pfVar4,1);
        puVar7 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar7 = local_2c8;
        }
        pwVar5 = L"";
        if (local_300 != 0) {
          pwVar5 = local_308;
        }
        FUN_1448097c4(&local_2f8,pwVar5,puVar7,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1400b22c2(&local_318,&DAT_14be3af84);
    pwVar5 = local_318;
    if (local_310 == 0) {
      pwVar5 = L"";
    }
    if (pwVar5 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar5);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar5,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x19c);
        uVar3 = FUN_146fb4872(param_1);
        pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,(undefined2 *)(param_1 + 0x19c));
        FUN_1406112c4(&local_2c8,(double)*pfVar4,1);
        puVar7 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar7 = local_2c8;
        }
        pwVar5 = L"";
        if (local_310 != 0) {
          pwVar5 = local_318;
        }
        FUN_1448097c4(&local_2f8,pwVar5,puVar7,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1400b22c2(&local_328,&DAT_14be3af88);
    pwVar5 = local_328;
    if (local_320 == 0) {
      pwVar5 = L"";
    }
    if (pwVar5 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar5);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar5,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x1a0);
        uVar3 = FUN_146fb4872(param_1);
        pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,(undefined2 *)(param_1 + 0x1a0));
        FUN_1406112c4(&local_2c8,(double)*pfVar4,1);
        puVar7 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar7 = local_2c8;
        }
        pwVar5 = L"";
        if (local_320 != 0) {
          pwVar5 = local_328;
        }
        FUN_1448097c4(&local_2f8,pwVar5,puVar7,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1400b22c2(&local_338,&DAT_14be3af8c);
    pwVar5 = local_338;
    if (local_330 == 0) {
      pwVar5 = L"";
    }
    if (pwVar5 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar5);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar5,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x1a4);
        uVar3 = FUN_146fb4872(param_1);
        pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,(undefined2 *)(param_1 + 0x1a4));
        FUN_1406112c4(&local_2c8,(double)*pfVar4,1);
        puVar7 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar7 = local_2c8;
        }
        pwVar5 = L"";
        if (local_330 != 0) {
          pwVar5 = local_338;
        }
        FUN_1448097c4(&local_2f8,pwVar5,puVar7,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1467ebd14(&local_2c8);
    puVar7 = local_2f8;
    if (local_2f0 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_1467ecfa6(&local_2c8,local_2e0,puVar7,0);
    if ((&DAT_149f209a8)[local_2d0] == '\x01') {
      local_2e4 = (float)local_2e0[0];
      if (3.4028235e+38 <= local_2e4) {
        local_2e4 = 3.4028235e+38;
      }
      if (local_2e4 <= -3.4028235e+38) {
        local_2e4 = -3.4028235e+38;
      }
    }
    (*(code *)(&PTR_FUN_149f209b0)[local_2d0])(local_2e0);
    FUN_146b0746c(&local_2c8);
    if (local_338 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_328 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_318 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_308 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  local_2c8 = (undefined2 *)(param_1 + 0x1b8);
  local_2c0 = 0xffffffff;
  local_2b8 = 0;
  lVar6 = FUN_146fb78aa(param_1);
  if (lVar6 != 0) {
    FUN_1496fe392(lVar6,&local_2e4,param_2);
  }
  if (local_2f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149742c2c FUN_149742c2c body=458 status=ok
// SIG undefined FUN_149742c2c(void)

undefined8 * FUN_149742c2c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be3af90;
  local_60 = param_1 + 0x33;
  local_a0 = param_1 + 0x36;
  local_98 = param_1 + 0x39;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = local_98;
  local_70 = 0xffffffff;
  local_68 = 0;
  FUN_146fd05d2(param_1,&local_78,&local_60);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149742df8 FUN_149742df8 body=1519 status=ok
// SIG undefined FUN_149742df8(void)

void FUN_149742df8(longlong param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_340;
  wchar_t *local_338;
  int local_330;
  wchar_t *local_328;
  int local_320;
  wchar_t *local_318;
  int local_310;
  wchar_t *local_308;
  int local_300;
  undefined2 *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  double local_2e8;
  double local_2e0 [2];
  byte local_2d0;
  undefined2 *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_2e8 = 0.0;
  local_2f8 = (undefined2 *)0x0;
  local_2f0 = *(int *)(param_1 + 0x1c0);
  lVar5 = (longlong)local_2f0;
  _Src = *(void **)(param_1 + 0x1b8);
  if (lVar5 == 0) {
    local_2ec = 0;
  }
  else {
    FUN_1446dd670(&local_2f8,local_2f0,0);
    memcpy(local_2f8,_Src,lVar5 * 2);
  }
  FUN_140ded208(&local_2f8,&local_2c8);
  if (local_2f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_2f8 = local_2c8;
  local_2f0 = local_2c0;
  local_2ec = local_2bc;
  if (1 < local_2c0) {
    FUN_1400b22c2(&local_308,&DAT_14be3af80);
    pwVar4 = local_308;
    if (local_300 == 0) {
      pwVar4 = L"";
    }
    if (pwVar4 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar4);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar4,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x198);
        uVar3 = FUN_146fb4872(param_1);
        uVar3 = FUN_146fd063c(uVar3,param_2,(undefined2 *)(param_1 + 0x198));
        FUN_1406112c4(&local_2c8,uVar3,1);
        puVar6 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar6 = local_2c8;
        }
        pwVar4 = L"";
        if (local_300 != 0) {
          pwVar4 = local_308;
        }
        FUN_1448097c4(&local_2f8,pwVar4,puVar6,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1400b22c2(&local_318,&DAT_14be3af84);
    pwVar4 = local_318;
    if (local_310 == 0) {
      pwVar4 = L"";
    }
    if (pwVar4 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar4);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar4,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x1a0);
        uVar3 = FUN_146fb4872(param_1);
        uVar3 = FUN_146fd063c(uVar3,param_2,(undefined2 *)(param_1 + 0x1a0));
        FUN_1406112c4(&local_2c8,uVar3,1);
        puVar6 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar6 = local_2c8;
        }
        pwVar4 = L"";
        if (local_310 != 0) {
          pwVar4 = local_318;
        }
        FUN_1448097c4(&local_2f8,pwVar4,puVar6,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1400b22c2(&local_328,&DAT_14be3af88);
    pwVar4 = local_328;
    if (local_320 == 0) {
      pwVar4 = L"";
    }
    if (pwVar4 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar4);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar4,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x1a8);
        uVar3 = FUN_146fb4872(param_1);
        uVar3 = FUN_146fd063c(uVar3,param_2,(undefined2 *)(param_1 + 0x1a8));
        FUN_1406112c4(&local_2c8,uVar3,1);
        puVar6 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar6 = local_2c8;
        }
        pwVar4 = L"";
        if (local_320 != 0) {
          pwVar4 = local_328;
        }
        FUN_1448097c4(&local_2f8,pwVar4,puVar6,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1400b22c2(&local_338,&DAT_14be3af8c);
    pwVar4 = local_338;
    if (local_330 == 0) {
      pwVar4 = L"";
    }
    if (pwVar4 != (wchar_t *)0x0) {
      sVar2 = wcslen(pwVar4);
      local_340 = 0xffffffff;
      local_348 = 0;
      iVar1 = FUN_1447ee042(&local_2f8,pwVar4,sVar2 & 0xffffffff,1);
      if (iVar1 != -1) {
        local_2c0 = -1;
        local_2b8 = 0;
        local_2c8 = (undefined2 *)(param_1 + 0x1b0);
        uVar3 = FUN_146fb4872(param_1);
        uVar3 = FUN_146fd063c(uVar3,param_2,(undefined2 *)(param_1 + 0x1b0));
        FUN_1406112c4(&local_2c8,uVar3,1);
        puVar6 = &DAT_149dfb77a;
        if (local_2c0 != 0) {
          puVar6 = local_2c8;
        }
        pwVar4 = L"";
        if (local_330 != 0) {
          pwVar4 = local_338;
        }
        FUN_1448097c4(&local_2f8,pwVar4,puVar6,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1467ebd14(&local_2c8);
    puVar6 = local_2f8;
    if (local_2f0 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1467ecfa6(&local_2c8,local_2e0,puVar6,0);
    if ((&DAT_149f209a8)[local_2d0] == '\x01') {
      if (1.79769313486232e+308 <= local_2e0[0]) {
        local_2e0[0] = 1.79769313486232e+308;
      }
      local_2e8 = local_2e0[0];
      if (local_2e0[0] <= -1.79769313486232e+308) {
        local_2e8 = -1.79769313486232e+308;
      }
    }
    (*(code *)(&PTR_FUN_149f209b0)[local_2d0])(local_2e0);
    FUN_146b0746c(&local_2c8);
    if (local_338 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_328 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_318 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_308 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146fb6644(param_1,param_2,&local_2e8,param_1 + 0x1c8);
  if (local_2f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497433f8 FUN_1497433f8 body=712 status=ok
// SIG undefined FUN_1497433f8(void)

void FUN_1497433f8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  ulonglong local_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = param_1 + 0x1a8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != lVar5) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1b0) goto LAB_149743450;
  }
  uStack_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x198;
  uVar3 = FUN_146fb4872(param_1);
  plVar4 = (longlong *)FUN_149728954(uVar3,param_2,param_1 + 0x198);
  if ((int)plVar4[1] < 1) {
    local_90 = FUN_1484b7d1a(DAT_14c951640);
    if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_90);
    }
    uStack_80 = 0xffffffff;
    local_78 = 0;
    local_88 = lVar5;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_1497ae88a(lVar5,&local_90,param_2);
    }
    local_88 = param_1 + 0x1b0;
    local_90 = local_90 & 0xffffffff00000000;
    uStack_80 = 0xffffffff;
    local_78 = 0;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 == 0) goto LAB_149743450;
    puVar6 = &local_90;
  }
  else {
    local_a0 = param_2;
    local_a8 = FUN_1484b7d1a(DAT_14c951640);
    local_90 = local_a8;
    if ((local_a8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_a8);
    }
    FUN_1484b81a6(local_a8);
    lVar2 = plVar4[1];
    if ((longlong)(int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(local_a8 + 0x98);
      lVar1 = *plVar4;
      lVar7 = 0;
      do {
        local_78 = *(undefined8 *)(lVar1 + 0x10 + lVar7);
        plVar4 = (longlong *)(lVar1 + lVar7);
        local_88 = *plVar4;
        uStack_80 = (undefined4)plVar4[1];
        uStack_7c = *(undefined4 *)((longlong)plVar4 + 0xc);
        local_68 = DAT_14c846338;
        local_70 = DAT_14c846330;
        local_5c = DAT_14c846338;
        local_64 = DAT_14c846330;
        local_58 = DAT_14c84635c;
        local_50 = 0;
        local_4e = 0;
        FUN_146c02208(uVar3,&local_88);
        lVar7 = lVar7 + 0x18;
      } while ((longlong)(int)lVar2 * 0x18 != lVar7);
    }
    uStack_80 = 0xffffffff;
    local_78 = 0;
    local_88 = lVar5;
    lVar5 = FUN_146fb78aa(param_1);
    param_2 = local_a0;
    if (lVar5 != 0) {
      FUN_14979ab44(lVar5,&local_90,local_a0);
    }
    local_94 = FUN_1484b5146(local_a8);
    uStack_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1b0;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 == 0) goto LAB_149743450;
    puVar6 = (ulonglong *)&local_94;
  }
  FUN_149700500(lVar5,puVar6,param_2);
LAB_149743450:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497436c2 FUN_1497436c2 body=510 status=ok
// SIG undefined FUN_1497436c2(void)

void FUN_1497436c2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_f8 [44];
  undefined4 local_cc;
  longlong local_c8 [5];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != param_1 + 0x1d0) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1d8) goto LAB_14974371a;
  }
  lVar2 = FUN_1484b7d1a(DAT_14c951640);
  local_68 = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  FUN_1484b81a6(lVar2);
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  local_98 = 0;
  local_c8[4] = param_1 + 0x198;
  uVar3 = FUN_146fb4872(param_1,local_c8 + 4);
  puVar4 = (undefined8 *)FUN_14979f15e(uVar3,param_2,param_1 + 0x198);
  local_c8[4] = *puVar4;
  uStack_a0 = puVar4[1];
  local_98 = puVar4[2];
  uStack_90 = *(undefined4 *)(puVar4 + 3);
  uStack_8c = *(undefined4 *)((longlong)puVar4 + 0x1c);
  local_88 = *(undefined4 *)(puVar4 + 4);
  uStack_84 = *(undefined4 *)((longlong)puVar4 + 0x24);
  uStack_80 = *(undefined4 *)(puVar4 + 5);
  uStack_7c = *(undefined4 *)((longlong)puVar4 + 0x2c);
  local_78 = puVar4[6];
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_14970d48c(local_c8 + 4,local_c8 + 2,local_c8);
  FUN_14970d69a(uVar1,local_c8 + 2,local_c8);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x1d0;
  lVar5 = FUN_146fb78aa(param_1);
  if (lVar5 != 0) {
    FUN_14979ab44(lVar5,&local_68,param_2);
  }
  local_cc = FUN_1484b5146(lVar2);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x1d8;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_149700500(lVar2,&local_cc,param_2);
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
LAB_14974371a:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497438c2 FUN_1497438c2 body=285 status=ok
// SIG undefined FUN_1497438c2(void)

void FUN_1497438c2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != param_1 + 0x1a0) goto LAB_1497438f5;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_1 + 0x198;
  uVar2 = FUN_146fb4872(param_1);
  plVar3 = (longlong *)FUN_14979af18(uVar2,param_2,param_1 + 0x198);
  lVar1 = *plVar3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
LAB_149743965:
    (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xc0))(*(longlong **)(lVar1 + 0x98),local_50);
  }
  else {
    if (lVar1 != 0) goto LAB_149743965;
    FUN_1400b22c2(local_50,&DAT_149e02088);
  }
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_1 + 0x1a0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_14979b374(lVar1,local_50,param_2);
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
LAB_1497438f5:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497439e0 FUN_1497439e0 body=720 status=ok
// SIG undefined FUN_1497439e0(void)

void FUN_1497439e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_948 [32];
  longlong *local_928;
  undefined8 local_920;
  undefined1 local_918;
  undefined1 local_910;
  undefined1 local_908;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined8 local_8d8;
  undefined1 local_8d0;
  longlong local_8c8;
  undefined8 uStack_8c0;
  undefined **local_8b8;
  longlong *local_8b0;
  longlong local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  longlong local_890 [22];
  longlong local_7e0;
  undefined4 local_7d8;
  undefined8 local_7d0;
  longlong local_320;
  undefined4 local_318;
  undefined8 local_310;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_948;
  lVar4 = param_1 + 0x1a0;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != lVar4) goto LAB_149743a28;
  local_7d8 = 0xffffffff;
  local_7d0 = 0;
  local_7e0 = param_1 + 0x198;
  uVar2 = FUN_146fb4872(param_1,&local_7e0);
  plVar3 = (longlong *)FUN_14979af18(uVar2,param_2,param_1 + 0x198);
  lVar1 = *plVar3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
LAB_149743ab3:
    lVar1 = *(longlong *)(lVar1 + 0x98);
    if (0 < *(int *)(lVar1 + 0x50)) {
      FUN_1458c1dca(&local_320);
      local_8b8 = &PTR_FUN_149fa9f00;
      local_8b0 = &local_320;
      FUN_146f9f256(&local_8b8,0);
      local_8d8 = 0x100000001010100;
      local_8d0 = 0;
      local_8c8 = 0;
      uStack_8c0 = 0;
      FUN_146face1a(&local_8d8,lVar1,&local_320,1);
      local_8e8 = 0x3f800000;
      uStack_8e4 = 0x3f800000;
      uStack_8e0 = 0x3f800000;
      uStack_8dc = 0x3f800000;
      FUN_140b1d240(&local_7e0);
      FUN_140056680(local_890,L"TEST");
      local_908 = 0;
      local_910 = 1;
      local_918 = 1;
      local_920 = 0;
      local_928 = &local_7e0;
      FUN_1474ad8ae(&local_320,local_890,0,&DAT_14c846480);
      if (local_890[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1414db454(local_890);
      local_8f8 = 0;
      uStack_8f0 = 0;
      local_8a8 = 0;
      uStack_8a0 = 0;
      FUN_14062fde4(&local_7e0,local_890,&local_8a8);
      if (local_8a8 != 0) {
        FUN_1400020a8();
      }
      uStack_8a0 = CONCAT44(uStack_8a0._4_4_,0xffffffff);
      local_898 = 0;
      local_8a8 = lVar4;
      lVar4 = FUN_146fb78aa(param_1);
      if (lVar4 != 0) {
        FUN_1496fd2a8(lVar4,local_890,param_2);
      }
      FUN_14054b30a(local_890);
      FUN_140f35722(&local_7e0);
      if (local_8c8 != 0) {
        FUN_1400020a8();
      }
      FUN_145838e00(&local_320);
      goto LAB_149743a28;
    }
  }
  else if (lVar1 != 0) goto LAB_149743ab3;
  FUN_1414db454(&local_7e0);
  local_318 = 0xffffffff;
  local_310 = 0;
  local_320 = lVar4;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_1496fd2a8(lVar4,&local_7e0,param_2);
  }
  FUN_14054b30a(&local_7e0);
LAB_149743a28:
  if ((local_60 ^ (ulonglong)auStack_948) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149743cb6 FUN_149743cb6 body=1585 status=ok
// SIG undefined FUN_149743cb6(void)

void FUN_149743cb6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_748 [32];
  undefined8 *local_728;
  undefined1 local_720;
  longlong local_718;
  undefined8 local_710;
  longlong local_708;
  longlong local_700;
  undefined4 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6d8;
  undefined8 local_6a8 [2];
  undefined8 local_698;
  longlong local_668 [4];
  undefined8 local_648;
  undefined4 local_640;
  undefined8 local_63c;
  undefined4 local_634;
  undefined8 local_628;
  undefined4 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined8 local_5ec;
  undefined4 local_5e4;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined2 local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined8 local_594;
  undefined4 local_58c;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_550;
  undefined4 local_548;
  undefined8 local_544;
  undefined4 local_53c;
  undefined8 local_530;
  undefined4 local_528;
  undefined2 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4ec;
  undefined4 local_4e4;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_49c;
  undefined4 local_494;
  undefined8 local_488;
  undefined4 local_480;
  undefined1 local_478;
  undefined1 local_477;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_444;
  undefined4 local_43c;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined2 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_398;
  undefined8 local_368 [2];
  undefined8 local_358;
  longlong local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 local_290;
  undefined2 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_137;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_748;
  lVar5 = param_1 + 0x1a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != lVar5) goto LAB_149743cfe;
  uStack_320 = CONCAT44(uStack_320._4_4_,0xffffffff);
  local_318 = 0;
  local_328 = param_1 + 0x198;
  uVar2 = FUN_146fb4872(param_1);
  plVar3 = (longlong *)FUN_14979af18(uVar2,param_2,param_1 + 0x198);
  lVar1 = *plVar3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
LAB_149743d8a:
    uStack_320 = CONCAT44(uStack_320._4_4_,0xffffffff);
    local_318 = 0;
    local_328 = param_1 + 0x1a0;
    uVar2 = FUN_146fb4872(param_1);
    plVar3 = (longlong *)FUN_14979af18(uVar2,param_2,param_1 + 0x1a0);
    lVar4 = *plVar3;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    else if (lVar4 == 0) goto LAB_149744270;
    lVar1 = *(longlong *)(lVar1 + 0x98);
    if ((0 < *(int *)(lVar1 + 0x50)) || (0 < *(int *)(*(longlong *)(lVar4 + 0x98) + 0x50))) {
      local_718 = *(longlong *)(lVar4 + 0x98);
      lVar4 = FUN_1484b7d1a(DAT_14c951640);
      local_708 = lVar4;
      if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      FUN_1484b81a6(lVar4);
      local_710 = *(undefined8 *)(lVar4 + 0x98);
      local_308 = 0;
      local_300 = 0;
      local_328 = 0;
      uStack_320 = 0;
      local_2fc = 0xffffffff00000080;
      local_2f4 = 0;
      local_2e8 = 0;
      local_2e0 = 0;
      local_2b8 = 0;
      local_2b0 = 0;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2ac = 0xffffffff00000080;
      local_2a4 = 0;
      local_298 = 0;
      local_290 = 0;
      local_288 = 0x101;
      local_260 = 0;
      local_258 = 0;
      local_280 = 0;
      uStack_278 = 0;
      local_254 = 0xffffffff00000080;
      local_24c = 0;
      local_240 = 0;
      local_238 = 0;
      local_210 = 0;
      local_208 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_204 = 0xffffffff00000080;
      local_1fc = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0x101;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1ac = 0xffffffff00000080;
      local_1a4 = 0;
      local_198 = 0;
      local_190 = 0;
      local_168 = 0;
      local_160 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_15c = 0xffffffff00000080;
      local_154 = 0;
      local_148 = 0;
      local_140 = 0;
      local_137 = 1;
      local_138 = 1;
      local_110 = 0;
      local_108 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_104 = 0xffffffff00000080;
      local_fc = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_b4 = 0xffffffff00000080;
      local_ac = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0x101;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_728 = local_368;
      local_368[0] = 0;
      local_358 = 0;
      local_3a8 = 0;
      local_398 = 0;
      local_720 = 0;
      FUN_146bcbbdc(&local_710,lVar1);
      local_648 = 0;
      local_640 = 0;
      local_668[0] = 0;
      local_668[1] = 0;
      local_63c = 0xffffffff00000080;
      local_634 = 0;
      local_628 = 0;
      local_620 = 0;
      local_5f8 = 0;
      local_5f0 = 0;
      local_618 = 0;
      uStack_610 = 0;
      local_5ec = 0xffffffff00000080;
      local_5e4 = 0;
      local_5d8 = 0;
      local_5d0 = 0;
      local_5c8 = 0x101;
      local_5a0 = 0;
      local_598 = 0;
      local_5c0 = 0;
      uStack_5b8 = 0;
      local_594 = 0xffffffff00000080;
      local_58c = 0;
      local_580 = 0;
      local_578 = 0;
      local_550 = 0;
      local_548 = 0;
      local_570 = 0;
      uStack_568 = 0;
      local_544 = 0xffffffff00000080;
      local_53c = 0;
      local_530 = 0;
      local_528 = 0;
      local_520 = 0x101;
      local_4f8 = 0;
      local_4f0 = 0;
      local_518 = 0;
      uStack_510 = 0;
      local_4ec = 0xffffffff00000080;
      local_4e4 = 0;
      local_4d8 = 0;
      local_4d0 = 0;
      local_4a8 = 0;
      local_4a0 = 0;
      local_4c8 = 0;
      uStack_4c0 = 0;
      local_49c = 0xffffffff00000080;
      local_494 = 0;
      local_488 = 0;
      local_480 = 0;
      local_477 = 1;
      local_478 = 1;
      local_450 = 0;
      local_448 = 0;
      local_470 = 0;
      uStack_468 = 0;
      local_444 = 0xffffffff00000080;
      local_43c = 0;
      local_430 = 0;
      local_428 = 0;
      local_400 = 0;
      local_3f8 = 0;
      local_420 = 0;
      uStack_418 = 0;
      local_3f4 = 0xffffffff00000080;
      local_3ec = 0;
      local_3e0 = 0;
      local_3d8 = 0;
      local_3d0 = 0x101;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_728 = local_6a8;
      local_6a8[0] = 0;
      local_698 = 0;
      local_6e8 = 0;
      local_6d8 = 0;
      local_720 = 0;
      FUN_146bcbbdc(&local_710,local_718);
      local_6f8 = 0xffffffff;
      local_6f0 = 0;
      local_700 = lVar5;
      lVar5 = FUN_146fb78aa(param_1);
      if (lVar5 != 0) {
        FUN_14979ab44(lVar5,&local_708,param_2);
      }
      FUN_146bfdcfe(local_668);
      FUN_146bfdcfe(&local_328);
      goto LAB_149743cfe;
    }
  }
  else if (lVar1 != 0) goto LAB_149743d8a;
LAB_149744270:
  local_668[0] = FUN_1484b7d1a(DAT_14c951640);
  if ((local_668[0] != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_668[0]);
  }
  uStack_320 = CONCAT44(uStack_320._4_4_,0xffffffff);
  local_318 = 0;
  local_328 = lVar5;
  lVar5 = FUN_146fb78aa(param_1);
  if (lVar5 != 0) {
    FUN_1497ae88a(lVar5,local_668,param_2);
  }
LAB_149743cfe:
  if ((local_60 ^ (ulonglong)auStack_748) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497442e8 FUN_1497442e8 body=1198 status=ok
// SIG undefined FUN_1497442e8(void)

void FUN_1497442e8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined **ppuVar1;
  longlong lVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_308 [40];
  longlong local_2e0;
  undefined **local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  int local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined2 local_1df;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined2 local_1b8;
  undefined1 local_1b6;
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_308;
  ppuVar1 = (undefined **)(param_1 + 0x1b0);
  ppuVar4 = (undefined **)(**(code **)(*param_3 + 0x20))(param_3);
  if (ppuVar4 != ppuVar1) goto LAB_149744325;
  local_2b8 = CONCAT44(local_2b8._4_4_,0xffffffff);
  local_2b0 = 0;
  local_2c0 = (undefined **)(param_1 + 0x1a0);
  uVar5 = FUN_146fb4872(param_1);
  plVar6 = (longlong *)FUN_14979af18(uVar5,param_2,(undefined **)(param_1 + 0x1a0));
  lVar8 = *plVar6;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
LAB_1497443a3:
    local_2b8 = CONCAT44(local_2b8._4_4_,0xffffffff);
    local_2b0 = 0;
    local_2c0 = (undefined **)(param_1 + 0x1a8);
    uVar5 = FUN_146fb4872(param_1);
    plVar6 = (longlong *)FUN_14979af18(uVar5,param_2,(undefined **)(param_1 + 0x1a8));
    lVar2 = *plVar6;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_14974471c;
    lVar8 = *(longlong *)(lVar8 + 0x98);
    if ((0 < *(int *)(lVar8 + 0x50)) &&
       (lVar2 = *(longlong *)(lVar2 + 0x98), 0 < *(int *)(lVar2 + 0x50))) {
      lVar7 = FUN_1484b7d1a(DAT_14c951640);
      local_2e0 = lVar7;
      if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar7);
      }
      FUN_1484b81a6(lVar7);
      local_1a0 = *(undefined8 *)(lVar7 + 0x98);
      local_208 = 1;
      if (*(char *)(param_1 + 0x198) != '\x02') {
        local_208 = (uint)(*(char *)(param_1 + 0x198) != '\0') * 2;
      }
      local_2c0 = &PTR_FUN_149f64a58;
      local_270 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      uStack_268 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      local_260 = DAT_14c846520;
      local_288 = DAT_14c8464e0;
      uStack_280 = DAT_14c8464e8;
      local_278 = DAT_14c8464f0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_298 = 0;
      local_290 = 0x3ff0000000000000;
      local_220 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      uStack_218 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      local_210 = DAT_14c846520;
      local_228 = DAT_14c8464f0;
      local_238 = DAT_14c8464e0;
      uStack_230 = DAT_14c8464e8;
      local_248 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_240 = 0x3ff0000000000000;
      local_200 = 0x3eb0c6f7a0000000;
      local_1f8 = 1;
      local_1f0 = 0x3ff8000000000000;
      local_1e8 = 0x3fe0000000000000;
      local_1e0 = 1;
      local_1d8 = 0;
      local_1c8 = 0x3fb999999999999a;
      local_1c0 = 0x3fe0000000000000;
      local_1b8 = 0x101;
      local_1b6 = 1;
      local_1b4 = 0x358637bd;
      local_1b0 = 1;
      local_1ac = 0x3c23d70a;
      local_188 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_180 = 0x3ff0000000000000;
      local_168 = DAT_14c8464f0;
      local_178 = DAT_14c8464e0;
      uStack_170 = DAT_14c8464e8;
      local_150 = DAT_14c846520;
      local_160 = (undefined4)DAT_14c846510;
      uStack_15c = DAT_14c846510._4_4_;
      uStack_158 = (undefined4)DAT_14c846518;
      uStack_154 = DAT_14c846518._4_4_;
      local_118 = 0;
      local_110 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_10c = 0xffffffff00000080;
      local_104 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_b4 = 0xffffffff00000080;
      local_ac = 0;
      local_a0 = 0;
      local_98 = 0;
      local_70 = 0;
      local_68 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_64 = 0xffffffff00000080;
      local_5c = 0;
      local_50 = 0;
      local_48 = 0;
      local_3f = 1;
      local_40 = 1;
      local_1d0 = 1;
      local_1a8 = 0;
      local_1df = 0x100;
      local_2b8 = lVar8;
      local_2b0 = lVar2;
      cVar3 = FUN_146c6fae2();
      if (cVar3 != '\0') {
        local_2d0 = 0xffffffff;
        local_2c8 = 0;
        local_2d8 = ppuVar1;
        lVar8 = FUN_146fb78aa(param_1);
        if (lVar8 != 0) {
          FUN_14979ab44(lVar8,&local_2e0,param_2);
        }
        FUN_146ec7826(&local_2c0);
        goto LAB_149744325;
      }
      FUN_146ec7826(&local_2c0);
    }
  }
  else if (lVar8 != 0) goto LAB_1497443a3;
LAB_14974471c:
  local_2d8 = (undefined **)FUN_1484b7d1a(DAT_14c951640);
  if ((local_2d8 != (undefined **)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_2d8);
  }
  local_2b8 = CONCAT44(local_2b8._4_4_,0xffffffff);
  local_2b0 = 0;
  local_2c0 = ppuVar1;
  lVar8 = FUN_146fb78aa(param_1);
  if (lVar8 != 0) {
    FUN_1497ae88a(lVar8,&local_2d8,param_2);
  }
LAB_149744325:
  if ((local_38 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149744798 FUN_149744798 body=1690 status=ok
// SIG undefined FUN_149744798(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_149744798(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double *pdVar16;
  undefined1 auStack_668 [32];
  undefined8 *local_648;
  undefined1 local_640;
  undefined8 local_630;
  longlong local_628;
  double *local_620;
  longlong local_618;
  undefined8 local_610;
  undefined8 *local_608 [2];
  undefined8 local_5f8;
  undefined1 local_5f0 [16];
  undefined4 local_5e0;
  undefined8 local_5d8;
  longlong local_5d0 [3];
  undefined8 local_5b8;
  undefined8 local_588 [2];
  undefined8 local_578;
  undefined8 local_548;
  undefined8 uStack_540;
  double local_538;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_51c;
  undefined4 local_514;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4cc;
  undefined4 local_4c4;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined2 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_474;
  undefined4 local_46c;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_424;
  undefined4 local_41c;
  undefined8 local_410;
  undefined4 local_408;
  undefined2 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  undefined8 local_368;
  undefined4 local_360;
  undefined2 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  longlong local_280 [2];
  longlong local_270;
  undefined8 local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined1 local_240 [16];
  undefined4 local_230;
  char local_70;
  int local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_668;
  lVar8 = param_1 + 0x1b8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 != lVar8) goto LAB_1497447e0;
  uStack_540 = (double)CONCAT44(uStack_540._4_4_,0xffffffff);
  local_538 = 0.0;
  local_548 = (double)(param_1 + 0x1a8);
  uVar5 = FUN_146fb4872(param_1);
  plVar6 = (longlong *)FUN_14979af18(uVar5,param_2,param_1 + 0x1a8);
  lVar4 = *plVar6;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
LAB_14974486c:
    lVar4 = *(longlong *)(lVar4 + 0x98);
    uStack_540 = (double)CONCAT44(uStack_540._4_4_,0xffffffff);
    local_538 = 0.0;
    local_548 = (double)(param_1 + 0x198);
    uVar5 = FUN_146fb4872(param_1);
    puVar7 = (undefined8 *)FUN_149728954(uVar5,param_2,param_1 + 0x198);
    if ((0 < *(int *)(puVar7 + 1)) && (0 < *(int *)(lVar4 + 0x50))) {
      local_630 = param_2;
      local_628 = lVar8;
      lVar8 = FUN_1484b7d1a(DAT_14c951640);
      local_5d0[0] = lVar8;
      if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar8);
      }
      FUN_1484b81a6(lVar8);
      local_5d8 = *(undefined8 *)(lVar8 + 0x98);
      if ((longlong)*(int *)(puVar7 + 1) != 0) {
        pdVar16 = (double *)*puVar7;
        local_620 = pdVar16 + (longlong)*(int *)(puVar7 + 1) * 3;
        local_618 = lVar4;
        do {
          FUN_146bff712(local_280,local_618);
          local_610 = local_260;
          FUN_146c40b54(local_608,local_258);
          local_5f8 = local_248;
          FUN_146c40bf2(local_5f0,local_240);
          local_5e0 = local_230;
          uVar14 = (int)local_610 * 0x200 + local_610._4_4_;
          uVar13 = 0;
          if ((uVar14 != 0) && (uVar13 = 0, 0xfffd < (ushort)(*(short *)*local_608[0] - 1U))) {
            uVar11 = 1;
            uVar12 = 1;
            if (1 < (int)uVar14) {
              uVar11 = uVar14;
            }
            do {
              uVar13 = uVar11;
              if (uVar11 == uVar12) break;
              uVar10 = uVar12 >> 9;
              uVar15 = uVar12 & 0x1ff;
              uVar13 = uVar12;
              uVar12 = uVar12 + 1;
            } while (0xfffd < (ushort)(*(short *)(local_608[0][uVar10] + (ulonglong)uVar15 * 2) - 1U
                                      ));
          }
LAB_149744b0a:
          if (uVar13 != uVar14) {
            lVar8 = *(longlong *)(local_270 + (ulonglong)(uVar13 >> 9) * 8);
            uVar9 = (ulonglong)(uVar13 & 0x1ff);
            dVar2 = (double)*(float *)(param_1 + 0x1b0);
            local_538 = *(double *)(lVar8 + 0x10 + uVar9 * 0x18) * dVar2 + pdVar16[2];
            uStack_540 = *(double *)(lVar8 + 8 + uVar9 * 0x18) * dVar2 + pdVar16[1];
            local_548 = dVar2 * *(double *)(lVar8 + uVar9 * 0x18) + *pdVar16;
            cVar3 = FUN_146bfed03(&local_548);
            if (cVar3 != '\0') {
              lVar8 = *(longlong *)(local_270 + (ulonglong)(uVar13 >> 9) * 8);
              *(double *)(lVar8 + 0x10 + uVar9 * 0x18) = local_538;
              puVar1 = (undefined4 *)(lVar8 + uVar9 * 0x18);
              *puVar1 = (undefined4)local_548;
              puVar1[1] = local_548._4_4_;
              puVar1[2] = (undefined4)uStack_540;
              puVar1[3] = uStack_540._4_4_;
              if (local_70 == '\x01') {
                LOCK();
                local_6c = local_6c + 1;
                UNLOCK();
              }
            }
            uVar11 = uVar13 + 1;
            if ((int)(uVar13 + 1) < (int)uVar14) {
              uVar11 = uVar14;
            }
            uVar12 = uVar13;
            do {
              uVar13 = uVar11;
              if (uVar11 - 1 == uVar12) break;
              uVar13 = uVar12 + 1;
              uVar12 = uVar13;
            } while (0xfffd < (ushort)(*(short *)(local_608[0][uVar13 >> 9] +
                                                 (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
            goto LAB_149744b0a;
          }
          local_528 = 0;
          local_520 = 0;
          local_548 = 0.0;
          uStack_540 = 0.0;
          local_51c = 0xffffffff00000080;
          local_514 = 0;
          local_508 = 0;
          local_500 = 0;
          local_4d8 = 0;
          local_4d0 = 0;
          local_4f8 = 0;
          uStack_4f0 = 0;
          local_4cc = 0xffffffff00000080;
          local_4c4 = 0;
          local_4b8 = 0;
          local_4b0 = 0;
          local_4a8 = 0x101;
          local_480 = 0;
          local_478 = 0;
          local_4a0 = 0;
          uStack_498 = 0;
          local_474 = 0xffffffff00000080;
          local_46c = 0;
          local_460 = 0;
          local_458 = 0;
          local_430 = 0;
          local_428 = 0;
          local_450 = 0;
          uStack_448 = 0;
          local_424 = 0xffffffff00000080;
          local_41c = 0;
          local_410 = 0;
          local_408 = 0;
          local_400 = 0x101;
          local_3d8 = 0;
          local_3d0 = 0;
          local_3f8 = 0;
          uStack_3f0 = 0;
          local_3cc = 0xffffffff00000080;
          local_3c4 = 0;
          local_3b8 = 0;
          local_3b0 = 0;
          local_388 = 0;
          local_380 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          local_37c = 0xffffffff00000080;
          local_374 = 0;
          local_368 = 0;
          local_360 = 0;
          local_358 = 0x101;
          local_330 = 0;
          local_328 = 0;
          local_350 = 0;
          uStack_348 = 0;
          local_324 = 0xffffffff00000080;
          local_31c = 0;
          local_310 = 0;
          local_308 = 0;
          local_2e0 = 0;
          local_2d8 = 0;
          local_300 = 0;
          uStack_2f8 = 0;
          local_2d4 = 0xffffffff00000080;
          local_2cc = 0;
          local_2c0 = 0;
          local_2b8 = 0;
          local_2b0 = 0x101;
          local_298 = 0;
          uStack_290 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_588[0] = 0;
          local_578 = 0;
          local_5d0[1] = 0;
          local_5b8 = 0;
          local_648 = local_588;
          local_640 = 0;
          FUN_146bcbbdc(&local_5d8,local_280,&local_548,local_5d0 + 1);
          FUN_146bfdcfe(&local_548);
          FUN_14117c64e(&local_610);
          FUN_141082778(local_280);
          pdVar16 = pdVar16 + 3;
        } while (pdVar16 != local_620);
      }
      local_548 = (double)local_628;
      uStack_540 = (double)CONCAT44(uStack_540._4_4_,0xffffffff);
      local_538 = 0.0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_14979ab44(lVar8,local_5d0,local_630);
      }
      goto LAB_1497447e0;
    }
  }
  else if (lVar4 != 0) goto LAB_14974486c;
  local_280[0] = FUN_1484b7d1a(DAT_14c951640);
  if ((local_280[0] != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_280[0]);
  }
  uStack_540 = (double)CONCAT44(uStack_540._4_4_,0xffffffff);
  local_538 = 0.0;
  local_548 = (double)lVar8;
  lVar8 = FUN_146fb78aa(param_1);
  if (lVar8 != 0) {
    FUN_1497ae88a(lVar8,local_280,param_2);
  }
LAB_1497447e0:
  if ((local_60 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149744e34 FUN_149744e34 body=532 status=ok
// SIG undefined FUN_149744e34(void)

void FUN_149744e34(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1 + 0x1a0;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar2) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1);
    plVar4 = (longlong *)FUN_14979af18(uVar3,param_2,param_1 + 0x198);
    lVar1 = *plVar4;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
LAB_14974502a:
      local_44 = 0;
      goto LAB_149744f1e;
    }
    local_44 = *(undefined4 *)(*(longlong *)(lVar1 + 0x98) + 0x50);
  }
  else {
    lVar2 = param_1 + 0x1a4;
    lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar1 == lVar2) {
      local_38 = 0xffffffff;
      local_30 = 0;
      local_40 = param_1 + 0x198;
      uVar3 = FUN_146fb4872(param_1);
      plVar4 = (longlong *)FUN_14979af18(uVar3,param_2,param_1 + 0x198);
      lVar1 = *plVar4;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) goto LAB_14974502a;
      local_44 = *(undefined4 *)(*(longlong *)(lVar1 + 0x98) + 0x200);
    }
    else {
      lVar2 = param_1 + 0x1a8;
      lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar1 != lVar2) goto LAB_149744e9c;
      local_38 = 0xffffffff;
      local_30 = 0;
      local_40 = param_1 + 0x198;
      uVar3 = FUN_146fb4872(param_1);
      plVar4 = (longlong *)FUN_14979af18(uVar3,param_2,param_1 + 0x198);
      lVar1 = *plVar4;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) goto LAB_14974502a;
      local_44 = *(undefined4 *)(*(longlong *)(lVar1 + 0x98) + 0x170);
    }
  }
LAB_149744f1e:
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = lVar2;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_149700500(lVar2,&local_44,param_2);
  }
LAB_149744e9c:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497450ca FUN_1497450ca body=406 status=ok
// SIG undefined FUN_1497450ca(void)

void FUN_1497450ca(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = param_1 + 0x1a0;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar5 == lVar6) {
    lVar5 = *(longlong *)(param_1 + 0x198);
    if (lVar5 == 0) {
      FUN_1414db454(&local_e0);
      local_f0 = 0xffffffff;
      local_e8 = 0;
      local_f8 = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_1496fd2a8(lVar6,&local_e0,param_2);
      }
      FUN_14054b30a(&local_e0);
    }
    else {
      lVar3 = *(longlong *)(lVar5 + 0x218);
      plVar4 = *(longlong **)(lVar5 + 0x220);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 == 0) {
        FUN_1414db454(&local_e0);
        local_f0 = 0xffffffff;
        local_e8 = 0;
        local_f8 = lVar6;
        lVar6 = FUN_146fb78aa(param_1);
        if (lVar6 != 0) {
          FUN_1496fd2a8(lVar6,&local_e0,param_2);
        }
        FUN_14054b30a(&local_e0);
      }
      else {
        local_d8 = 0xffffffff;
        local_d0 = 0;
        local_e0 = lVar6;
        lVar6 = FUN_146fb78aa(param_1);
        if (lVar6 != 0) {
          FUN_14972d97e(lVar6,lVar3,param_2);
        }
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
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149745262 FUN_149745262 body=627 status=ok
// SIG undefined FUN_149745262(void)

void FUN_149745262(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar4) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar4;
    uVar2 = FUN_146fb4872(param_1);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar4);
    FUN_146ecd042(&local_f8,uVar2);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x248;
    uVar2 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar2,param_2,param_1 + 0x248);
    uVar2 = DAT_14c996af0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    FUN_1446ddc76(&local_140,&DAT_149e4dd30,1);
    lVar1 = FUN_1497454d6(&local_f8,local_140,uVar2);
    if (lVar1 != 0) {
      FUN_140bee9ec(&local_128,lVar1 + 0x10);
    }
    FUN_146ecdb24(&local_f8,uVar3);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar4;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496fd2a8(lVar4,&local_f8,param_2);
    }
    uVar2 = DAT_14c996af0;
    FUN_1446ddc76(&local_148,&DAT_149e4dd30,1);
    lVar4 = FUN_1497455e8(uVar3,local_148,uVar2);
    if (lVar4 != 0) {
      FUN_140bee9ec(&local_138,lVar4 + 0x10);
    }
    local_110 = param_1 + 0x2f8;
    local_108 = 0xffffffff;
    local_100 = 0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497b34f8(lVar4,&local_128,param_2);
    }
    local_110 = param_1 + 0x308;
    local_108 = 0xffffffff;
    local_100 = 0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497b34f8(lVar4,&local_138,param_2);
    }
    FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    FUN_14054b30a(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497454d6 FUN_1497454d6 body=274 status=ok
// SIG undefined FUN_1497454d6(void)

longlong FUN_1497454d6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 != -0x10 && lVar1 != 0) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497455e8 FUN_1497455e8 body=249 status=ok
// SIG undefined FUN_1497455e8(void)

undefined8 FUN_1497455e8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 1497456e2 FUN_1497456e2 body=238 status=ok
// SIG undefined FUN_1497456e2(void)

void FUN_1497456e2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [56];
  longlong local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x248) {
    local_1a8 = 0xffffffff;
    local_1a0 = 0;
    local_1b0 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1);
    uVar2 = FUN_1496fcf74(uVar2,param_2,param_1 + 0x198);
    FUN_146e99c1c(&local_1b0,uVar2);
    FUN_146e9a09c(&local_1b0,local_1e8);
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x248;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_1497b37ba(lVar1,local_1e8,param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497457d2 FUN_1497457d2 body=303 status=ok
// SIG undefined FUN_1497457d2(void)

void FUN_1497457d2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a8) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1);
    plVar4 = (longlong *)FUN_1497b386c(uVar3,param_2,param_1 + 0x198);
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_144a12820(local_68,(int)plVar4[1],1);
    if (0 < (int)plVar4[1]) {
      lVar5 = 0;
      lVar2 = 0;
      do {
        dVar1 = (double)FUN_149745902(param_1,*plVar4 + lVar5);
        *(float *)(local_68[0] + lVar2 * 4) = (float)dVar1;
        lVar2 = lVar2 + 1;
        lVar5 = lVar5 + 0x38;
      } while (lVar2 < (int)plVar4[1]);
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1a8;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_14972a684(lVar2,local_68,param_2);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149745902 FUN_149745902 body=115 status=ok
// SIG undefined FUN_149745902(void)

double FUN_149745902(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_2[3] - *param_2;
  if (*(byte *)(param_1 + 0x1b8) - 1 < 5) {
    dVar3 = param_2[5] - param_2[2];
    dVar1 = param_2[4] - param_2[1];
    switch((uint)*(byte *)(param_1 + 0x1b8)) {
    case 1:
      return dVar1;
    case 2:
      return dVar3;
    case 3:
      if (dVar1 <= dVar2) {
        dVar2 = dVar1;
      }
      if (dVar3 <= dVar2) {
        dVar2 = dVar3;
      }
      break;
    case 4:
      if (dVar2 <= dVar1) {
        dVar2 = dVar1;
      }
      if (dVar2 <= dVar3) {
        dVar2 = dVar3;
      }
      break;
    case 5:
      return SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
    }
  }
  return dVar2;
}



// FUNCTION 149745976 FUN_149745976 body=702 status=ok
// SIG undefined FUN_149745976(void)

void FUN_149745976(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_80 = 0xffffffff;
  local_78 = 0.0;
  local_88 = (double)(param_1 + 0x198);
  uVar1 = FUN_146fb4872(param_1,&local_88);
  pdVar2 = (double *)FUN_14979f15e(uVar1,param_2,param_1 + 0x198);
  local_88 = *pdVar2;
  uStack_80 = *(undefined4 *)(pdVar2 + 1);
  uStack_7c = *(undefined4 *)((longlong)pdVar2 + 0xc);
  local_78 = pdVar2[2];
  dStack_70 = pdVar2[3];
  local_68 = pdVar2[4];
  dStack_60 = pdVar2[5];
  local_58 = pdVar2[6];
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == param_1 + 0x1d0) {
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = param_1 + 0x1d0;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 == 0) goto LAB_149745a78;
    pdVar2 = &local_88;
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 != param_1 + 0x1e8) {
      lVar3 = param_1 + 0x200;
      lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar4 == lVar3) {
        local_90 = local_78 + dStack_60;
        local_98 = (double)CONCAT44(uStack_7c,uStack_80) + local_68;
        local_a0 = local_88 + dStack_70;
      }
      else {
        lVar3 = param_1 + 0x218;
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        if (lVar4 != lVar3) {
          lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
          if (lVar3 == param_1 + 0x230) {
            local_a0 = (double)CONCAT44(local_a0._4_4_,
                                        (float)((dStack_60 - local_78) *
                                               (local_68 - (double)CONCAT44(uStack_7c,uStack_80)) *
                                               (dStack_70 - local_88)));
            local_40 = 0xffffffff;
            local_38 = 0;
            local_48 = param_1 + 0x230;
            lVar3 = FUN_146fb78aa(param_1);
            if (lVar3 != 0) {
              FUN_1497ad59e(lVar3,&local_a0,param_2);
            }
          }
          goto LAB_149745a78;
        }
        local_90 = dStack_60 - local_78;
        local_98 = local_68 - (double)CONCAT44(uStack_7c,uStack_80);
        local_a0 = dStack_70 - local_88;
      }
      local_90 = local_90 * 0.5;
      local_98 = local_98 * 0.5;
      local_a0 = local_a0 * 0.5;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = lVar3;
      lVar3 = FUN_146fb78aa(param_1);
      if (lVar3 != 0) {
        FUN_149728fe0(lVar3,&local_a0,param_2);
      }
      goto LAB_149745a78;
    }
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = param_1 + 0x1e8;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 == 0) goto LAB_149745a78;
    pdVar2 = &dStack_70;
  }
  FUN_1497b3c56(lVar3,pdVar2,param_2);
LAB_149745a78:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149745c36 FUN_149745c36 body=311 status=ok
// SIG undefined FUN_149745c36(void)

void FUN_149745c36(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [44];
  float local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x198;
  uVar4 = FUN_146fb4872();
  pdVar5 = (double *)FUN_14979981c(uVar4,param_2,param_1 + 0x198);
  dVar1 = *pdVar5;
  dVar2 = pdVar5[1];
  dVar3 = pdVar5[2];
  lVar7 = param_1 + 0x1b0;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar6 == lVar7) {
    local_7c = (float)dVar1;
  }
  else {
    lVar7 = param_1 + 0x1b4;
    lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar6 == lVar7) {
      local_7c = (float)dVar2;
    }
    else {
      lVar7 = param_1 + 0x1b8;
      lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar6 != lVar7) goto LAB_149745ced;
      local_7c = (float)dVar3;
    }
  }
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = lVar7;
  lVar7 = FUN_146fb78aa(param_1);
  if (lVar7 != 0) {
    FUN_1497ad59e(lVar7,&local_7c,param_2);
  }
LAB_149745ced:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149745d6e FUN_149745d6e body=291 status=ok
// SIG undefined FUN_149745d6e(void)

void FUN_149745d6e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b8) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1a8;
    uVar2 = FUN_146fb4872(param_1,&local_60);
    uVar2 = FUN_146fda3fc(uVar2,param_2,param_1 + 0x1a8);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_60);
    uVar3 = FUN_146fda3fc(uVar3,param_2,param_1 + 0x198);
    FUN_140474144(local_70,uVar3,uVar2);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1b8;
    lVar1 = FUN_146fb78aa(param_1,&local_60);
    if (lVar1 != 0) {
      FUN_14979b374(lVar1,local_70,param_2);
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149745e92 FUN_149745e92 body=229 status=ok
// SIG undefined FUN_149745e92(void)

void FUN_149745e92(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a8) {
    local_48 = 0xffffffff;
    iVar4 = 0;
    local_40 = 0;
    local_50 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1);
    puVar3 = (undefined8 *)FUN_146fda3fc(uVar2,param_2,param_1 + 0x198);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
      iVar4 = *(int *)(puVar3 + 1) + -1;
    }
    local_54 = FUN_144a49b4a(iVar4,puVar5);
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1a8;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_149700500(lVar1,&local_54,param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149745f78 FUN_149745f78 body=223 status=ok
// SIG undefined FUN_149745f78(void)

void FUN_149745f78(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    uVar2 = FUN_14979981c(uVar2,param_2,param_1 + 0x198);
    local_5c = FUN_1448eb174(uVar2,0x18,0);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1b0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_149700500(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746058 FUN_149746058 body=698 status=ok
// SIG undefined FUN_149746058(void)

void FUN_149746058(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_3d8 [40];
  undefined8 local_3b0;
  longlong local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  longlong local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b0 [240];
  longlong local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  longlong *local_180;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar6 == param_1 + 0x268) {
    local_1b8 = 0xffffffff;
    local_1b0 = 0;
    local_1c0 = param_1 + 0x198;
    uVar7 = FUN_146fb4872(param_1,&local_1c0);
    uVar7 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
    lVar6 = param_1 + 0x248;
    local_1b8 = 0xffffffff;
    local_1b0 = 0;
    local_1c0 = lVar6;
    uVar8 = FUN_146fb4872(param_1,&local_1c0);
    local_3b0 = param_2;
    local_3a8 = FUN_14972af6e(uVar8,param_2,lVar6);
    FUN_146e99c1c(&local_1c0,uVar7);
    FUN_146ea80f4(local_2b0,uVar7);
    local_2c8 = 0;
    uStack_2c0 = 0;
    iVar5 = (**(code **)(*local_180 + 0x60))(local_180);
    if (0 < iVar5) {
      lVar11 = 0;
      uVar10 = 0;
      do {
        lVar9 = local_180[2];
        local_2d8 = *(undefined8 *)(lVar9 + 0x30 + lVar11);
        puVar2 = (undefined4 *)(lVar9 + lVar11);
        local_308 = *puVar2;
        uStack_304 = puVar2[1];
        uStack_300 = puVar2[2];
        uStack_2fc = puVar2[3];
        puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar11);
        local_2f8 = *puVar2;
        uStack_2f4 = puVar2[1];
        uStack_2f0 = puVar2[2];
        uStack_2ec = puVar2[3];
        puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar11);
        local_2e8 = *puVar2;
        uStack_2e4 = puVar2[1];
        uStack_2e0 = puVar2[2];
        uStack_2dc = puVar2[3];
        FUN_146ea829a(local_2b0,&local_368,uVar10 & 0xffffffff);
        FUN_144a1c3a2(&local_308,&local_3a0,&local_368);
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = lVar6;
        lVar9 = FUN_146fb4872(param_1,&local_60);
        uVar4 = uStack_2c0;
        if (*(longlong *)(lVar9 + 0x48) == 0) {
LAB_149746243:
          iVar5 = (int)uStack_2c0;
          uVar1 = (int)uStack_2c0 + 1;
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar1);
          if (uStack_2c0._4_4_ < uVar1) {
            FUN_140555802(&local_2c8,uVar4 & 0xffffffff);
          }
          lVar9 = (longlong)iVar5 * 0x38;
          *(undefined8 *)(local_2c8 + 0x30 + lVar9) = local_370;
          puVar3 = (undefined8 *)(local_2c8 + 0x20 + lVar9);
          *puVar3 = local_380;
          puVar3[1] = uStack_378;
          puVar3 = (undefined8 *)(local_2c8 + 0x10 + lVar9);
          *puVar3 = local_390;
          puVar3[1] = uStack_388;
          puVar2 = (undefined4 *)(local_2c8 + lVar9);
          *puVar2 = local_3a0;
          puVar2[1] = uStack_39c;
          puVar2[2] = uStack_398;
          puVar2[3] = uStack_394;
        }
        else {
          lVar9 = *(longlong *)(local_3a8 + 0x10);
          if (*(longlong *)(local_3a8 + 0x10) == 0) {
            lVar9 = local_3a8;
          }
          if ((*(uint *)(lVar9 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) & 1) != 0)
          goto LAB_149746243;
        }
        uVar10 = uVar10 + 1;
        iVar5 = (**(code **)(*local_180 + 0x60))(local_180);
        lVar11 = lVar11 + 0x38;
      } while ((longlong)uVar10 < (longlong)iVar5);
    }
    local_360 = 0xffffffff;
    local_358 = 0;
    local_368 = param_1 + 0x268;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1497b3ee4(lVar6,&local_2c8,local_3b0);
    }
    if (local_2c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746314 FUN_149746314 body=237 status=ok
// SIG undefined FUN_149746314(void)

void FUN_149746314(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [44];
  undefined4 local_fc;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x248) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1);
    uVar2 = FUN_1496fcf74(uVar2,param_2,param_1 + 0x198);
    FUN_1406bf76c(&local_f8,uVar2);
    local_fc = FUN_14172d9e4(&local_f8);
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x248;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_149700500(lVar1,&local_fc,param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746402 FUN_149746402 body=895 status=ok
// SIG undefined FUN_149746402(void)

void FUN_149746402(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_398 [32];
  double local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double local_338;
  double dStack_330;
  double local_328;
  longlong local_318;
  undefined8 uStack_310;
  undefined1 local_308 [240];
  longlong local_218;
  int local_210;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_398;
  dVar9 = (double)(**(code **)(*param_3 + 0x20))(param_3);
  if (dVar9 == (double)(param_1 + 0x268)) {
    local_200 = 0xffffffff;
    local_1f8 = 0;
    local_208 = param_1 + 0x198;
    uVar10 = FUN_146fb4872(param_1,&local_208);
    uVar10 = FUN_1496fcf74(uVar10,param_2,param_1 + 0x198);
    lVar14 = param_1 + 0x248;
    local_200 = 0xffffffff;
    local_1f8 = 0;
    local_208 = lVar14;
    uVar11 = FUN_146fb4872(param_1,&local_208);
    lVar12 = FUN_14972af6e(uVar11,param_2,lVar14);
    FUN_146e99c1c(&local_208,uVar10);
    FUN_146e99f90(&local_208,&local_218);
    FUN_146ea80f4(local_308,uVar10);
    local_318 = 0;
    uStack_310 = 0;
    if (0 < local_210) {
      lVar15 = 0x10;
      uVar16 = 0;
      do {
        pdVar2 = (double *)(local_218 + -0x10 + lVar15);
        dVar4 = *pdVar2;
        dVar5 = pdVar2[1];
        dVar9 = *(double *)(local_218 + lVar15);
        FUN_146ea829a(local_308,&local_378,uVar16 & 0xffffffff);
        dVar4 = dVar4 * local_338;
        dVar5 = dVar5 * dStack_330;
        dVar9 = dVar9 * local_328;
        dVar6 = (double)CONCAT44(uStack_36c,uStack_370);
        dVar17 = dVar5 * local_378 - dVar4 * dVar6;
        dVar18 = dVar9 * dVar6 - dVar5 * local_368;
        dVar19 = dVar4 * local_368 - local_378 * dVar9;
        dVar18 = dVar18 + dVar18;
        dVar19 = dVar19 + dVar19;
        dVar17 = dVar17 + dVar17;
        dVar4 = (dVar17 * dVar6 - dVar19 * local_368) + dStack_360 * dVar18 + dVar4 + local_358;
        dVar5 = (local_368 * dVar18 - local_378 * dVar17) + dStack_360 * dVar19 + dVar5 + dStack_350
        ;
        dVar9 = dVar17 * dStack_360 + dVar9 + (dVar19 * local_378 - dVar18 * dVar6) + local_348;
        local_a0 = 0xffffffff;
        local_98 = 0;
        local_a8 = lVar14;
        lVar13 = FUN_146fb4872(param_1,&local_a8);
        uVar8 = uStack_310;
        if (*(longlong *)(lVar13 + 0x48) == 0) {
LAB_1497466bd:
          iVar7 = (int)uStack_310;
          uVar1 = (int)uStack_310 + 1;
          uStack_310 = CONCAT44(uStack_310._4_4_,uVar1);
          if (uStack_310._4_4_ < uVar1) {
            FUN_1403e3958(&local_318,uVar8 & 0xffffffff);
          }
          auVar3._8_4_ = SUB84(dVar5,0);
          auVar3._0_8_ = dVar4;
          auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(local_318 + (longlong)iVar7 * 0x18) = auVar3;
          *(double *)(local_318 + 0x10 + (longlong)iVar7 * 0x18) = dVar9;
        }
        else {
          lVar13 = *(longlong *)(lVar12 + 0x10);
          if (*(longlong *)(lVar12 + 0x10) == 0) {
            lVar13 = lVar12;
          }
          if ((*(uint *)(lVar13 + (uVar16 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar16 & 0x1f) & 1) != 0)
          goto LAB_1497466bd;
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x18;
      } while ((longlong)uVar16 < (longlong)local_210);
    }
    uStack_370 = 0xffffffff;
    local_368 = 0.0;
    local_378 = (double)(param_1 + 0x268);
    lVar14 = FUN_146fb78aa(param_1);
    if (lVar14 != 0) {
      FUN_14972a942(lVar14,&local_318,param_2);
    }
    if (local_318 != 0) {
      FUN_1400020a8();
    }
    if (local_218 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746782 FUN_149746782 body=367 status=ok
// SIG undefined FUN_149746782(void)

void FUN_149746782(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined4 local_290;
  longlong local_288;
  longlong local_280;
  undefined1 local_278;
  longlong local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined1 local_178 [104];
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar3 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar3) {
    local_260 = 0xffffffff;
    local_258 = 0;
    local_268 = lVar3;
    uVar2 = FUN_146fb4872(param_1);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar3);
    FUN_146ecd042(local_f8,uVar2);
    local_278 = *(undefined1 *)(param_1 + 0x2d0);
    local_280 = param_1 + 0x2b8;
    local_288 = param_1 + 0x2a0;
    local_290 = *(undefined4 *)(param_1 + 0x298);
    local_298 = param_1 + 0x280;
    FUN_146ea927e(local_178,param_1 + 0x248,*(undefined1 *)(param_1 + 0x260),param_1 + 0x268);
    FUN_146ea7fa0(&local_268,local_f8);
    FUN_146ea8572(&local_268,local_178);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fd2a8(lVar3,local_f8,param_2);
    }
    FUN_14054b30a(local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497468f2 FUN_1497468f2 body=402 status=ok
// SIG undefined FUN_1497468f2(void)

void FUN_1497468f2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_5f8 [32];
  longlong local_5d8;
  undefined4 local_5d0;
  undefined8 local_5c8;
  longlong local_210 [2];
  undefined1 local_200 [240];
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  lVar4 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar4) {
    local_5d0 = 0xffffffff;
    local_5c8 = 0;
    local_5d8 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ecd042(local_f8,uVar3);
    FUN_146ea7fa0(local_200,local_f8);
    FUN_146ea825e(local_200,local_210);
    FUN_146e9b1a8(&local_5d8,local_f8);
    uVar1 = FUN_1401f66f6(local_f8,DAT_14c9974a8);
    if (0 < (int)uVar1) {
      lVar2 = 0;
      uVar5 = 0;
      do {
        FUN_146e9c2bc(&local_5d8,uVar5 & 0xffffffff,local_210[0] + lVar2);
        FUN_146ea9328(local_200,uVar5 & 0xffffffff);
        uVar5 = uVar5 + 1;
        lVar2 = lVar2 + 0x60;
      } while (uVar1 != uVar5);
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar4;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496fd2a8(lVar4,local_f8,param_2);
    }
    if (local_210[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14054b30a(local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_5f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746a86 FUN_149746a86 body=597 status=ok
// SIG undefined FUN_149746a86(void)

void FUN_149746a86(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar5 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar5) {
    uStack_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar5;
    uVar2 = FUN_146fb4872(param_1);
    plVar3 = (longlong *)FUN_14979af18(uVar2,param_2,lVar5);
    lVar1 = *plVar3;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      local_e8 = FUN_1484b7d1a(DAT_14c951640);
      if ((local_e8 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_e8);
      }
      uStack_90 = 0xffffffff;
      local_88 = 0;
      local_98 = lVar5;
      lVar5 = FUN_146fb78aa(param_1);
      if (lVar5 != 0) {
        FUN_1497ae88a(lVar5,&local_e8,param_2);
      }
      goto LAB_149746ac1;
    }
    lVar4 = FUN_1484b7d1a(DAT_14c951640);
    local_38 = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    FUN_1484b8544(lVar4,*(undefined8 *)(lVar1 + 0x98));
    local_f8 = *(undefined1 *)(param_1 + 0x228);
    local_100 = param_1 + 0x210;
    local_108 = param_1 + 0x1f8;
    local_110 = *(undefined4 *)(param_1 + 0x1f0);
    local_118 = param_1 + 0x1d8;
    FUN_146ea927e(&local_98,param_1 + 0x1a0,*(undefined1 *)(param_1 + 0x1b8),param_1 + 0x1c0);
    uStack_e0 = uStack_90;
    uStack_dc = uStack_8c;
    local_e8 = local_98;
    local_d8 = local_88;
    uStack_d0 = uStack_80;
    local_c8 = local_78;
    uStack_c4 = uStack_74;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    local_b8 = local_68;
    local_b0 = local_58;
    uStack_ac = uStack_54;
    uStack_a8 = uStack_50;
    uStack_a4 = uStack_4c;
    local_a0 = local_48;
    FUN_146c3cd49(*(undefined8 *)(lVar4 + 0x98),&local_e8,1);
    _uStack_e0 = CONCAT44(uStack_dc,0xffffffff);
    local_d8 = 0;
    local_e8 = lVar5;
    lVar5 = FUN_146fb78aa(param_1,&local_e8);
    if (lVar5 != 0) {
      FUN_14979ab44(lVar5,&local_38,param_2);
    }
  }
LAB_149746ac1:
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746cdc FUN_149746cdc body=336 status=ok
// SIG undefined FUN_149746cdc(void)

void FUN_149746cdc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == param_1 + 0x1a4) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x19c;
    uVar4 = FUN_146fb4872(param_1,&local_60);
    piVar5 = (int *)FUN_146fca67a(uVar4,param_2,param_1 + 0x19c);
    iVar1 = *piVar5;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1a0;
    uVar4 = FUN_146fb4872(param_1,&local_60);
    piVar5 = (int *)FUN_146fca67a(uVar4,param_2,param_1 + 0x1a0);
    local_61 = false;
    if (*(byte *)(param_1 + 0x198) < 5) {
      iVar2 = *piVar5;
      switch(*(byte *)(param_1 + 0x198)) {
      case 0:
        local_61 = iVar1 == iVar2;
        break;
      case 1:
        local_61 = iVar1 < iVar2;
        break;
      case 2:
        local_61 = iVar1 <= iVar2;
        break;
      case 3:
        local_61 = iVar2 < iVar1;
        break;
      case 4:
        local_61 = iVar2 <= iVar1;
      }
    }
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1a4;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a5324(lVar3,&local_61,param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746e2e FUN_149746e2e body=349 status=ok
// SIG undefined FUN_149746e2e(void)

void FUN_149746e2e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  bool bVar6;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 != param_1 + 0x1a4) goto LAB_149746e6b;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x19c;
  uVar4 = FUN_146fb4872(param_1,&local_68);
  pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x19c);
  fVar1 = *pfVar5;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x1a0;
  uVar4 = FUN_146fb4872(param_1,&local_68);
  pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1a0);
  local_69 = false;
  if (4 < *(byte *)(param_1 + 0x198)) goto LAB_149746f4a;
  fVar2 = *pfVar5;
  switch(*(byte *)(param_1 + 0x198)) {
  case 0:
    local_69 = -(fVar1 == fVar2) & 1;
    goto LAB_149746f4a;
  case 1:
    bVar6 = fVar2 < fVar1;
    break;
  case 2:
    bVar6 = fVar2 < fVar1;
    goto LAB_149746f38;
  case 3:
    bVar6 = fVar1 < fVar2;
    break;
  case 4:
    bVar6 = fVar1 < fVar2;
LAB_149746f38:
    local_69 = !bVar6;
    goto LAB_149746f4a;
  }
  local_69 = !bVar6 && fVar1 != fVar2;
LAB_149746f4a:
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x1a4;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_1497a5324(lVar3,&local_69,param_2);
  }
LAB_149746e6b:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149746f8c FUN_149746f8c body=396 status=ok
// SIG undefined FUN_149746f8c(void)

void FUN_149746f8c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1 + 0x1b0;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar5) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x1a8;
    uVar2 = FUN_146fb4872(param_1);
    pcVar3 = (char *)FUN_146fca358(uVar2,param_2,param_1 + 0x1a8);
    if (*pcVar3 == '\x01') {
      lVar1 = param_1 + 0x198;
    }
    else {
      lVar1 = param_1 + 0x1a0;
    }
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = lVar1;
    uVar2 = FUN_146fb4872(param_1);
    plVar4 = (longlong *)FUN_14979af18(uVar2,param_2,lVar1);
    local_48 = *plVar4;
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (local_48 == 0) {
      local_48 = FUN_1484b7d1a(DAT_14c951640);
      if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_48);
      }
      local_38 = 0xffffffff;
      local_30 = 0;
      local_40 = lVar5;
      lVar5 = FUN_146fb78aa(param_1);
      if (lVar5 != 0) {
        FUN_1497ae88a(lVar5,&local_48,param_2);
      }
      goto LAB_149746fbf;
    }
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = lVar5;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_14979ab44(lVar5,&local_48,param_2);
    }
  }
LAB_149746fbf:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974711a FUN_14974711a body=309 status=ok
// SIG undefined FUN_14974711a(void)

void FUN_14974711a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x300) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x2f8;
    uVar2 = FUN_146fb4872(param_1);
    pcVar3 = (char *)FUN_146fca358(uVar2,param_2,param_1 + 0x2f8);
    if (*pcVar3 == '\x01') {
      lVar1 = param_1 + 0x198;
    }
    else {
      lVar1 = param_1 + 0x248;
    }
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar1;
    lVar4 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = lVar1;
      uVar2 = FUN_146fb4872(param_1,&local_58);
      FUN_1496fcf74(uVar2,param_2,lVar1);
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = param_1 + 0x300;
      lVar1 = FUN_146fb78aa(param_1,&local_58);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974726c FUN_14974726c body=903 status=ok
// SIG undefined FUN_14974726c(void)

void FUN_14974726c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined8 *local_88;
  int local_80;
  longlong local_78 [3];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar14 = (longlong *)(param_1 + 0x248);
  plVar5 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if (plVar5 == plVar14) {
    local_58 = -1;
    local_50 = 0;
    local_60 = (longlong *)(param_1 + 0x198);
    uVar6 = FUN_146fb4872(param_1);
    lVar7 = FUN_1496fcf74(uVar6,param_2,(longlong *)(param_1 + 0x198));
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_1407c8b48(local_78,L"\n----------------------------------------\n");
    FUN_142a0992c(lVar7,&local_60);
    if ((longlong)local_58 != 0) {
      plVar5 = local_60 + local_58;
      lVar13 = lVar7 + 0x90;
      plVar15 = local_60;
      local_d0 = plVar14;
      local_c8 = param_1;
      local_c0 = param_2;
      local_b8 = lVar13;
      local_b0 = plVar5;
      do {
        if (*(int *)(lVar7 + 0x60) != *(int *)(lVar7 + 0x8c)) {
          lVar1 = *plVar15;
          uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar9 = (uint)lVar1 & 0xffff;
          lVar8 = *(longlong *)(lVar7 + 0x98);
          if (*(longlong *)(lVar7 + 0x98) == 0) {
            lVar8 = lVar13;
          }
          iVar10 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(lVar7 + 0xa0) - 1U &
                                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9)
                                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar10 != -1) {
LAB_1497473fe:
            if (*(longlong *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar10 * 0x14) != lVar1)
            goto code_r0x00014974740b;
            uVar4 = FUN_1401f66f6(lVar7);
            FUN_1400021e4(plVar15,&local_88);
            puVar11 = (undefined8 *)&DAT_149dfb77a;
            if (local_80 != 0) {
              puVar11 = local_88;
            }
            FUN_1407c8b48(local_78,L"Group: %s  Number of Elements: %d\n",puVar11,uVar4);
            if (local_88 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1407c8b48(local_78,L"Attributes:\n");
            FUN_146ecd932(lVar7,&local_88,*plVar15);
            if ((longlong)local_80 != 0) {
              lVar13 = (longlong)local_80 << 3;
              puVar11 = local_88;
              do {
                cVar3 = FUN_140498cd4(lVar7,*puVar11,*plVar15);
                if (cVar3 != '\0') {
                  uVar4 = FUN_146ecd838(lVar7,*puVar11,*plVar15);
                  FUN_14460a6dd(&local_a8,uVar4);
                  FUN_1400021e4(&local_a8,&local_98);
                  puVar16 = &DAT_149dfb77a;
                  if (local_90 != 0) {
                    puVar16 = local_98;
                  }
                  FUN_1400021e4(puVar11,&local_a8);
                  puVar12 = &DAT_149dfb77a;
                  if (local_a0 != 0) {
                    puVar12 = local_a8;
                  }
                  FUN_1407c8b48(local_78,L"\t%s\t[%s]\n",puVar12,puVar16);
                  if (local_a8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_98 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                puVar11 = puVar11 + 1;
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
            }
            if (local_88 != (undefined8 *)0x0) {
              FUN_1400020a8(local_88);
            }
            FUN_1407c8b48(local_78,L"\n--------------------\n");
            plVar5 = local_b0;
            lVar13 = local_b8;
          }
        }
LAB_14974739c:
        plVar15 = plVar15 + 1;
        param_2 = local_c0;
        plVar14 = local_d0;
        param_1 = local_c8;
      } while (plVar15 != plVar5);
    }
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8(local_60);
    }
    FUN_1407c8b48(local_78,L"----------------------------------------\n");
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar14;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14979b374(lVar7,local_78,param_2);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014974740b:
  iVar10 = *(int *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar10 * 0x14 + 0xc);
  if (iVar10 == -1) goto LAB_14974739c;
  goto LAB_1497473fe;
}



// FUNCTION 1497475f4 FUN_1497475f4 body=810 status=ok
// SIG undefined FUN_1497475f4(void)

void FUN_1497475f4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 local_168 [24];
  undefined1 local_150 [56];
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar6 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar6) {
    local_150[0] = 1;
    local_f8 = param_1 + 0x268;
    local_f0 = 0xffffffff;
    local_e8 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_f8);
    local_170 = (undefined1 *)FUN_146fca358(uVar2,param_2,local_150);
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = param_1 + 0x26c;
    uVar2 = FUN_146fb4872(param_1,&local_f8);
    puVar3 = (undefined4 *)FUN_1497b419a(uVar2,param_2,param_1 + 0x26c);
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = param_1 + 0x274;
    uVar2 = FUN_146fb4872(param_1,&local_f8);
    puVar4 = (undefined4 *)FUN_1497b419a(uVar2,param_2,param_1 + 0x274);
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = param_1 + 0x27c;
    uVar2 = FUN_146fb4872(param_1,&local_f8);
    local_178 = (undefined1 *)FUN_146fca358(uVar2,param_2,param_1 + 0x27c);
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar6;
    uVar2 = FUN_146fb4872(param_1,&local_f8);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar6);
    FUN_146ecd042(&local_f8,uVar2);
    FUN_1449bd3ca(local_150,&local_f8);
    FUN_140569e80(local_150);
    FUN_146ea7504(local_168);
    FUN_146ea7512(local_168,*puVar3,puVar3[1]);
    FUN_146ea756e(local_168,*puVar4,puVar4[1]);
    FUN_146ea75de(local_168,*local_170);
    FUN_146ea762a(local_168,*local_178);
    lVar1 = param_1 + 0x248;
    uStack_110 = 0xffffffff;
    local_108 = 0;
    local_118 = lVar1;
    lVar5 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar5 + 0x48) == 0) {
      FUN_146ea76be(local_150,local_168);
    }
    else {
      _uStack_110 = CONCAT44(uStack_10c,0xffffffff);
      local_108 = 0;
      local_118 = lVar1;
      uVar2 = FUN_146fb4872(param_1,&local_118);
      uVar2 = FUN_14972af6e(uVar2,param_2,lVar1);
      local_118 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_146fd5878(uVar2,&local_118);
      FUN_146ea7678(local_150,&local_118,local_168);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    _uStack_110 = CONCAT44(uStack_10c,0xffffffff);
    local_108 = 0;
    local_118 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496fd2a8(lVar6,&local_f8,param_2);
    }
    FUN_14054b30a(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149747920 FUN_149747920 body=612 status=ok
// SIG undefined FUN_149747920(void)

void FUN_149747920(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  longlong local_f8 [3];
  undefined4 local_e0;
  undefined8 local_d8;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = param_1 + 0x1a0;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar4) {
    local_e0 = 0xffffffff;
    local_d8 = 0;
    local_f8[2] = lVar4;
    uVar3 = FUN_146fb4872(param_1,local_f8 + 2);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    local_e0 = 0xffffffff;
    local_d8 = 0;
    local_f8[2] = lVar4;
    lVar2 = FUN_146fb4872(param_1,local_f8 + 2);
    if (*(longlong *)(lVar2 + 0x48) == 0) {
      local_e0 = 0xffffffff;
      local_d8 = 0;
      local_f8[2] = lVar4;
      lVar4 = FUN_146fb78aa(param_1);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
      }
    }
    else {
      local_e0 = 0xffffffff;
      local_d8 = 0;
      local_f8[2] = param_1 + 0x250;
      uVar5 = FUN_146fb4872(param_1);
      uVar5 = FUN_14972af6e(uVar5,param_2,param_1 + 0x250);
      local_50 = 0;
      uStack_48 = 0;
      FUN_144a69486(local_60,uVar5);
      puVar6 = (undefined8 *)FUN_146eab21e(uVar3);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_140757a08(local_f8 + 2,puVar6);
        cVar1 = FUN_146e99ad8(local_f8 + 2);
        if (cVar1 == '\0') {
          FUN_146e99ae2(local_f8 + 2);
        }
        cVar1 = *(char *)(param_1 + 0x198);
        local_f8[0] = 0;
        local_f8[1] = 0;
        FUN_146fd5878(local_60,local_f8);
        FUN_146e99bb2(local_f8 + 2,local_f8,CONCAT71(0xffffff,cVar1 == '\0'));
        if (*(char *)(param_1 + 0x199) == '\x01') {
          FUN_142ac2d42(local_60);
          FUN_146fd5878(local_60,local_f8);
          FUN_146e99bb2(local_f8 + 2,local_f8,CONCAT71(0xffffff,cVar1 != '\0'));
        }
        local_70 = 0xffffffff;
        local_68 = 0;
        local_78 = lVar4;
        lVar4 = FUN_146fb78aa(param_1);
        if (lVar4 != 0) {
          FUN_14972d97e(lVar4,puVar6,param_2);
        }
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
        (**(code **)*puVar6)(puVar6,1);
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149747ba4 FUN_149747ba4 body=544 status=ok
// SIG undefined FUN_149747ba4(void)

void FUN_149747ba4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = param_1 + 0x1a8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar6) {
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
    local_98 = 0;
    local_a8 = lVar6;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar6);
    puVar4 = (undefined8 *)FUN_146eab21e(uVar3);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_146ec9216(puVar4 + 0x2c,&local_70);
      local_70 = (uint)*(byte *)(param_1 + 0x198);
      local_64 = *(undefined1 *)(param_1 + 0x1a4);
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x19c;
      uVar3 = FUN_146fb4872(param_1,&local_a8);
      puVar5 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
      local_6c = *puVar5;
      local_62 = *(undefined1 *)(param_1 + 0x1a5);
      local_63 = *(undefined1 *)(param_1 + 0x1a6);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
      local_98 = 0;
      local_a8 = param_1 + 0x1a0;
      uVar3 = FUN_146fb4872(param_1,&local_a8);
      puVar5 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x1a0);
      local_68 = *puVar5;
      FUN_146ec943a(puVar4 + 0x2c);
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_80 = 0;
      uStack_78 = 0;
      plVar7 = (longlong *)0x0;
      if (*(char *)(param_1 + 0x1a7) == '\0') {
        cVar1 = FUN_146ec6b5e(puVar4,&local_a8,1);
        plVar7 = (longlong *)0x0;
        if (cVar1 != '\0') {
          plVar7 = &local_a8;
        }
      }
      FUN_146eca9da(local_b0,puVar4);
      FUN_146ecb53c(local_b0);
      FUN_146ecaa68(local_b0,plVar7);
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_14972d97e(lVar6,puVar4,param_2);
      }
      FUN_146ebe7b8(&local_a8);
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149747dc6 FUN_149747dc6 body=322 status=ok
// SIG undefined FUN_149747dc6(void)

void FUN_149747dc6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_228 [40];
  longlong local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar3 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar3) {
    local_1f8 = 0xffffffff;
    local_1f0 = 0;
    local_200 = lVar3;
    uVar2 = FUN_146fb4872(param_1,&local_200);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar3);
    FUN_146ecd042(local_f8,uVar2);
    local_1f8 = 0xffffffff;
    local_1f0 = 0;
    local_200 = param_1 + 0x250;
    uVar2 = FUN_146fb4872(param_1,&local_200);
    uVar2 = FUN_14979f482(uVar2,param_2,param_1 + 0x250);
    FUN_146ea7fa0(&local_200,local_f8);
    FUN_146ea82c2(&local_200,uVar2);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fd2a8(lVar3,local_f8,param_2);
    }
    FUN_14054b30a(local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149747f0a FUN_149747f0a body=1835 status=ok
// SIG undefined FUN_149747f0a(void)

void FUN_149747f0a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong local_90;
  int local_88;
  int local_5c;
  undefined1 local_58 [8];
  undefined1 *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = param_1 + 0x198;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar5 != lVar9) goto LAB_149747f46;
  local_e0 = 0xffffffff;
  uVar12 = 0;
  local_d8 = 0;
  local_e8 = lVar9;
  uVar6 = FUN_146fb4872(param_1);
  uVar6 = FUN_1496fcf74(uVar6,param_2,lVar9);
  FUN_146ecd042(&local_e8,uVar6);
  uStack_140 = CONCAT44(uStack_140._4_4_,0xffffffff);
  local_138 = 0;
  local_148 = param_1 + 0x274U;
  uVar6 = FUN_146fb4872(param_1);
  puVar7 = (undefined4 *)FUN_146fca67a(uVar6,param_2,param_1 + 0x274U);
  uVar1 = *puVar7;
  local_150 = 0;
  uVar8 = 0;
  switch(*(undefined1 *)(param_1 + 0x248)) {
  case 0:
    uVar8 = DAT_14c9974a8;
    break;
  case 1:
    uVar8 = DAT_14c996af0;
    break;
  case 2:
    uVar8 = DAT_14c996ae8;
    break;
  case 3:
    uVar8 = DAT_14c996ae0;
    break;
  case 4:
    uVar8 = DAT_14c996a80;
    break;
  case 5:
    uVar8 = DAT_14c996a68;
    break;
  case 6:
    if (*(int *)(param_1 + 600) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x250);
    }
    FUN_1446f470e(&local_148,puVar10,1);
    local_150 = local_148;
    goto LAB_14974804b;
  default:
    goto switchD_149748003_default;
  }
  uVar12 = uVar8 & 0xffffffff00000000;
switchD_149748003_default:
  local_150 = uVar8 & 0xffffffff | uVar12;
LAB_14974804b:
  iVar4 = FUN_140180c78(&local_150);
  if ((iVar4 == 0) || (iVar4 = *(int *)(param_1 + 0x268), 0x7ffffffe < iVar4 - 2U))
  goto switchD_14974814f_default;
  if (local_88 != local_5c) {
    uVar3 = (uint)(local_150 >> 0x10);
    uVar14 = (uint)local_150 & 0xffff;
    if (local_50 == (undefined1 *)0x0) {
      local_50 = local_58;
    }
    for (iVar2 = *(int *)(local_50 +
                         (ulonglong)
                         (local_48 - 1U &
                         (int)(local_150 >> 0x20) + ((uint)local_150 << 0x10 | uVar14) +
                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4); iVar2 != -1;
        iVar2 = *(int *)(local_90 + (longlong)iVar2 * 0x14 + 0xc)) {
      if (*(ulonglong *)(local_90 + (longlong)iVar2 * 0x14) == local_150) goto LAB_14974810b;
    }
  }
  FUN_140b203e2(&local_e8);
  FUN_1409bcbd8(&local_e8,uVar1,local_150);
  iVar4 = *(int *)(param_1 + 0x268);
LAB_14974810b:
  if (iVar4 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = *(undefined2 **)(param_1 + 0x260);
  }
  FUN_1446f470e(&local_158,puVar10,1);
  uVar3 = local_148._4_4_;
  switch(*(undefined1 *)(param_1 + 0x270)) {
  case 0:
    local_148 = (ulonglong)local_148._1_7_ << 8;
    FUN_14460aae2(&local_e8,local_158,local_150);
    break;
  case 1:
    local_148 = (ulonglong)uVar3 << 0x20;
    FUN_14460ab4c(&local_e8,local_158,local_150);
    break;
  case 2:
    local_148 = (ulonglong)uVar3 << 0x20;
    FUN_14460abbc(&local_e8,local_158,local_150);
    break;
  case 3:
    local_148 = 0;
    FUN_14460ad2c(&local_e8,local_158,local_150);
    break;
  case 4:
    local_148 = (ulonglong)local_148._1_7_ << 8;
    FUN_14460ad96(&local_e8,local_158,local_150);
    break;
  case 5:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460ae06(&local_e8,local_158,local_150,&local_148);
    goto LAB_1497485de;
  case 6:
    local_148 = 0;
    FUN_14460ae70(&local_e8,local_158,local_150);
    break;
  case 7:
    local_148 = 0;
    uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
    FUN_14460aeda(&local_e8,local_158,local_150);
    break;
  case 8:
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    FUN_14460af44(&local_e8,local_158,local_150);
    break;
  case 9:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460afb4(&local_e8,local_158,local_150);
    break;
  case 10:
    local_148 = 0;
    uStack_140 = 0x3f80000000000000;
    FUN_14460b124(&local_e8,local_158,local_150);
    break;
  case 0xb:
    puVar11 = &DAT_14c846480;
    puVar13 = &local_148;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    FUN_14460b18e(&local_e8,local_158,local_150);
    break;
  case 0xc:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b1f8(&local_e8,local_158,local_150);
    break;
  case 0xd:
    local_128 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    uStack_118 = uStack_118 & 0xffffff00;
    FUN_14460b262(&local_e8,local_158,local_150);
    break;
  case 0xe:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b2cc(&local_e8,local_158,local_150);
    break;
  case 0xf:
    local_128 = 0;
    uStack_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    uStack_11c = 0x80;
    uStack_118 = 0xffffffff;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_14460b336(&local_e8,local_158,local_150,&local_148);
    local_100 = 0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_148);
    break;
  case 0x10:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b3a0(&local_e8,local_158,local_150,&local_148);
    goto LAB_1497485de;
  case 0x11:
    uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
    local_148 = 0;
    FUN_14460b40a(&local_e8,local_158,local_150);
    break;
  case 0x12:
    local_148 = 0;
    FUN_14460b474(&local_e8,local_158,local_150);
    break;
  case 0x13:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b4de(&local_e8,local_158,local_150);
    break;
  case 0x14:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b548(&local_e8,local_158,local_150,&local_148);
    goto LAB_1497485de;
  case 0x15:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b5b2(&local_e8,local_158,local_150,&local_148);
    goto LAB_1497485de;
  case 0x16:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b61c(&local_e8,local_158,local_150,&local_148);
    goto LAB_1497485de;
  case 0x17:
    local_148 = 0;
    uStack_140 = 0;
    FUN_14460b686(&local_e8,local_158,local_150,&local_148);
LAB_1497485de:
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
switchD_14974814f_default:
  uStack_140 = CONCAT44(uStack_140._4_4_,0xffffffff);
  local_138 = 0;
  local_148 = lVar9;
  lVar9 = FUN_146fb78aa(param_1);
  if (lVar9 != 0) {
    FUN_1496fd2a8(lVar9,&local_e8,param_2);
  }
  FUN_14054b30a(&local_e8);
LAB_149747f46:
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149748636 FUN_149748636 body=531 status=ok
// SIG undefined FUN_149748636(void)

void FUN_149748636(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 != param_1 + 0x260) goto LAB_14974866b;
  local_40 = 0xffffffff;
  uVar9 = 0;
  local_38 = 0;
  local_48 = param_1 + 0x198;
  uVar4 = FUN_146fb4872(param_1);
  lVar3 = FUN_1496fcf74(uVar4,param_2,param_1 + 0x198);
  local_4c = 0;
  local_58 = 0;
  uVar5 = 0;
  switch(*(undefined1 *)(param_1 + 0x248)) {
  case 0:
    uVar5 = DAT_14c9974a8;
    break;
  case 1:
    uVar5 = DAT_14c996af0;
    break;
  case 2:
    uVar5 = DAT_14c996ae8;
    break;
  case 3:
    uVar5 = DAT_14c996ae0;
    break;
  case 4:
    uVar5 = DAT_14c996a80;
    break;
  case 5:
    uVar5 = DAT_14c996a68;
    break;
  case 6:
    if (*(int *)(param_1 + 600) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(param_1 + 0x250);
    }
    FUN_1446f470e(&local_58,puVar8,1);
    goto LAB_14974873e;
  default:
    goto switchD_1497486f1_default;
  }
  uVar9 = uVar5 & 0xffffffff00000000;
switchD_1497486f1_default:
  local_58 = uVar5 & 0xffffffff | uVar9;
LAB_14974873e:
  iVar2 = FUN_140180c78(&local_58);
  if ((iVar2 != 0) && (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c))) {
    uVar1 = (uint)(local_58 >> 0x10);
    uVar7 = (uint)local_58 & 0xffff;
    lVar6 = lVar3 + 0x90;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x98);
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar3 + 0xa0) - 1U &
                             (int)(local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar2 * 0x14) == local_58) {
          local_4c = FUN_1401f66f6(lVar3);
          break;
        }
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar2 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x260;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_1497006ec(lVar3,&local_4c,param_2);
  }
LAB_14974866b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14974884a FUN_14974884a body=4150 status=ok
// SIG undefined FUN_14974884a(void)

void FUN_14974884a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118 [2];
  longlong local_108;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  int local_d0;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  ulonglong local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar13 = param_1 + 0x290;
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((((lVar7 != lVar13) &&
       (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != param_1 + 0x2a0)) &&
      (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != param_1 + 0x2b0)) &&
     (((lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != param_1 + 0x2c0 &&
       (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != param_1 + 0x2d0)) &&
      ((lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != param_1 + 0x2e0 &&
       (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != param_1 + 0x2f0))))))
  goto LAB_14974891f;
  local_98 = 0xffffffff;
  uVar14 = 0;
  local_90 = 0;
  local_a0 = param_1 + 0x198;
  uVar8 = FUN_146fb4872(param_1);
  local_140 = FUN_1496fcf74(uVar8,param_2,param_1 + 0x198);
  local_80 = 0;
  uVar9 = 0;
  switch(*(undefined1 *)(param_1 + 0x268)) {
  case 0:
    uVar14 = DAT_14c9974a8;
    break;
  case 1:
    uVar14 = DAT_14c996af0;
    break;
  case 2:
    uVar14 = DAT_14c996ae8;
    break;
  case 3:
    uVar14 = DAT_14c996ae0;
    break;
  case 4:
    uVar14 = DAT_14c996a80;
    break;
  case 5:
    uVar14 = DAT_14c996a68;
    break;
  case 6:
    if (*(int *)(param_1 + 0x278) == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = *(undefined2 **)(param_1 + 0x270);
    }
    FUN_1446f470e(&local_80,puVar12,1);
    goto LAB_149748a09;
  default:
    goto switchD_1497489b8_default;
  }
  uVar9 = uVar14 & 0xffffffff00000000;
switchD_1497489b8_default:
  local_80 = uVar14 & 0xffffffff | uVar9;
LAB_149748a09:
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = lVar13;
  lVar7 = FUN_146fb78aa(param_1);
  if ((lVar7 != 0) && (FUN_1497b6d38(lVar7,&local_e8,param_2), local_e8 != 0)) {
    FUN_1400020a8();
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = param_1 + 0x2a0;
  lVar7 = FUN_146fb78aa(param_1);
  if (lVar7 != 0) {
    FUN_14972a684(lVar7,&local_e8,param_2);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = param_1 + 0x2b0;
  lVar7 = FUN_146fb78aa(param_1);
  if ((lVar7 != 0) && (FUN_1497b6fee(lVar7,&local_e8,param_2), local_e8 != 0)) {
    FUN_1400020a8();
  }
  local_120 = param_1 + 0x2c0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = local_120;
  lVar7 = FUN_146fb78aa(param_1);
  if (lVar7 != 0) {
    FUN_1496f8d2a(lVar7,&local_e8,param_2);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  local_128 = param_1 + 0x2d0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = local_128;
  lVar7 = FUN_146fb78aa(param_1);
  if (lVar7 == 0) {
    FUN_1447a1747(0,0);
  }
  else {
    FUN_1497b34f8(lVar7,&local_e8,param_2);
    lVar7 = local_e8;
    FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
    if (lVar7 != 0) {
      FUN_1400020a8(lVar7);
    }
  }
  local_130 = param_1 + 0x2e0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = local_130;
  lVar7 = FUN_146fb78aa(param_1);
  if ((lVar7 != 0) && (FUN_1497b72a4(lVar7,&local_e8,param_2), local_e8 != 0)) {
    FUN_1400020a8();
  }
  lVar7 = param_1 + 0x2f0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a0 = lVar7;
  lVar10 = FUN_146fb78aa(param_1);
  if (lVar10 != 0) {
    FUN_14972a942(lVar10,&local_e8,param_2);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_80,local_b0);
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_1 + 0x288);
  lVar10 = (longlong)local_b8;
  _Src = *(void **)(param_1 + 0x280);
  local_138 = lVar7;
  if (lVar10 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,_Src,lVar10 * 2);
  }
  FUN_1496f836a(&local_a0,&local_c0,local_b0);
  local_e8 = param_1 + 0x248;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
  local_d8 = 0;
  uVar8 = FUN_146fb4872(param_1);
  uVar8 = FUN_1496fdb42(uVar8,param_2,&local_a0);
  FUN_1496f87b2(&local_e8,uVar8);
  iVar4 = local_d0 + -1;
  if (local_d0 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(&local_78,iVar4,local_d8,1);
  local_f0 = local_78;
  iVar4 = (int)uStack_e0 + -1;
  if ((int)uStack_e0 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(&local_78,iVar4,local_e8,1);
  local_f8 = local_78;
  iVar4 = FUN_140180c78(&local_f0);
  if (((iVar4 != 0) && (iVar4 = FUN_140180c78(&local_f8), iVar4 != 0)) &&
     (*(int *)(local_140 + 0x60) != *(int *)(local_140 + 0x8c))) {
    uVar6 = (uint)((ulonglong)local_f0 >> 0x10);
    uVar11 = (uint)local_f0 & 0xffff;
    lVar7 = local_140 + 0x90;
    if (*(longlong *)(local_140 + 0x98) != 0) {
      lVar7 = *(longlong *)(local_140 + 0x98);
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(local_140 + 0xa0) - 1U &
                             (int)((ulonglong)local_f0 >> 0x20) + ((uint)local_f0 << 0x10 | uVar11)
                             + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(local_140 + 0x58) + (longlong)iVar4 * 0x14) == local_f0) {
          cVar3 = FUN_140498cd4(local_140,local_f8);
          if (cVar3 != '\0') {
            uVar5 = FUN_146ecd838(local_140,local_f8);
            FUN_14460a6dd(&local_78,uVar5);
            FUN_1400021e4(&local_78,&local_108);
            FUN_1400b22c2(&local_78,&DAT_149fcdef8);
            if (local_100 != local_70) {
              bVar15 = local_70 + local_100 == 1;
              goto LAB_149749011;
            }
            bVar15 = true;
            if (local_100 < 2) goto LAB_149749011;
            lVar7 = 0;
            goto LAB_149748fbc;
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)(local_140 + 0x58) + (longlong)iVar4 * 0x14 + 0xc);
      } while (iVar4 != -1);
    }
  }
  goto LAB_149748e20;
LAB_149748fbc:
  uVar1 = *(ushort *)(local_108 + lVar7);
  uVar6 = (uint)uVar1;
  uVar2 = *(ushort *)(local_78 + lVar7);
  uVar11 = (uint)uVar2;
  if (uVar1 != uVar2) {
    if ((uVar2 | uVar1) < 0x80) {
      uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149748fd4;
    }
    iVar4 = uVar6 - uVar11;
    goto LAB_1497494d5;
  }
  if (uVar1 == 0) goto LAB_1497494d3;
LAB_149748fd4:
  lVar7 = lVar7 + 2;
  goto LAB_149748fbc;
LAB_1497494d3:
  iVar4 = 0;
LAB_1497494d5:
  bVar15 = iVar4 == 0;
LAB_149749011:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (bVar15) {
    lVar7 = FUN_146d84808(local_140,local_f8,local_f0);
    if (lVar7 != 0) {
      FUN_146e9d93a(lVar7,local_118);
      local_70 = -1;
      local_68 = 0;
      local_78 = lVar13;
      lVar13 = FUN_146fb78aa(param_1);
      if (lVar13 != 0) {
        FUN_1497b6d38(lVar13,local_118,param_2);
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_1400b22c2(&local_78,"Float");
    if (local_100 == local_70) {
      bVar15 = true;
      if (1 < local_100) {
        lVar13 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_108 + lVar13);
          uVar6 = (uint)uVar1;
          uVar2 = *(ushort *)(local_78 + lVar13);
          uVar11 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974907e;
            }
            iVar4 = uVar6 - uVar11;
            goto LAB_1497494e2;
          }
          if (uVar1 == 0) break;
LAB_14974907e:
          lVar13 = lVar13 + 2;
        }
        iVar4 = 0;
LAB_1497494e2:
        bVar15 = iVar4 == 0;
      }
    }
    else {
      bVar15 = local_70 + local_100 == 1;
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (bVar15) {
      lVar13 = FUN_146d84416(local_140,local_f8,local_f0);
      if (lVar13 != 0) {
        local_70 = -1;
        local_68 = 0;
        local_78 = param_1 + 0x2a0;
        lVar7 = FUN_146fb78aa(param_1);
        if (lVar7 != 0) {
          FUN_1497b755a(lVar7,lVar13 + 0x10,param_2);
        }
      }
    }
    else {
      FUN_1400b22c2(&local_78,"Double");
      if (local_100 == local_70) {
        bVar15 = true;
        if (1 < local_100) {
          lVar13 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_108 + lVar13);
            uVar6 = (uint)uVar1;
            uVar2 = *(ushort *)(local_78 + lVar13);
            uVar11 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149749128;
              }
              iVar4 = uVar6 - uVar11;
              goto LAB_1497494ef;
            }
            if (uVar1 == 0) break;
LAB_149749128:
            lVar13 = lVar13 + 2;
          }
          iVar4 = 0;
LAB_1497494ef:
          bVar15 = iVar4 == 0;
        }
      }
      else {
        bVar15 = local_70 + local_100 == 1;
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (bVar15) {
        lVar13 = FUN_149749882(local_140,local_f8,local_f0);
        if (lVar13 != 0) {
          local_70 = -1;
          local_68 = 0;
          local_78 = param_1 + 0x2b0;
          lVar7 = FUN_146fb78aa(param_1);
          if (lVar7 != 0) {
            FUN_1497b760c(lVar7,lVar13 + 0x10,param_2);
          }
        }
      }
      else {
        FUN_1400b22c2(&local_78,"Int32");
        if (local_100 == local_70) {
          bVar15 = true;
          if (1 < local_100) {
            lVar13 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_108 + lVar13);
              uVar6 = (uint)uVar1;
              uVar2 = *(ushort *)(local_78 + lVar13);
              uVar11 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1497491d1;
                }
                iVar4 = uVar6 - uVar11;
                goto LAB_1497494fc;
              }
              if (uVar1 == 0) break;
LAB_1497491d1:
              lVar13 = lVar13 + 2;
            }
            iVar4 = 0;
LAB_1497494fc:
            bVar15 = iVar4 == 0;
          }
        }
        else {
          bVar15 = local_70 + local_100 == 1;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (bVar15) {
          lVar13 = FUN_146d84614(local_140,local_f8,local_f0);
          if (lVar13 != 0) {
            local_78 = local_120;
            local_70 = -1;
            local_68 = 0;
            lVar7 = FUN_146fb78aa(param_1);
            if (lVar7 != 0) {
              FUN_1497b7972(lVar7,lVar13 + 0x10,param_2);
            }
          }
        }
        else {
          FUN_1400b22c2(&local_78,"String");
          if (local_100 == local_70) {
            bVar15 = true;
            if (1 < local_100) {
              lVar13 = 0;
              while( true ) {
                uVar1 = *(ushort *)(local_108 + lVar13);
                uVar6 = (uint)uVar1;
                uVar2 = *(ushort *)(local_78 + lVar13);
                uVar11 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149749278;
                  }
                  iVar4 = uVar6 - uVar11;
                  goto LAB_149749508;
                }
                if (uVar1 == 0) break;
LAB_149749278:
                lVar13 = lVar13 + 2;
              }
              iVar4 = 0;
LAB_149749508:
              bVar15 = iVar4 == 0;
            }
          }
          else {
            bVar15 = local_70 + local_100 == 1;
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (bVar15) {
            lVar13 = FUN_1497455e8(local_140,local_f8,local_f0);
            if (lVar13 != 0) {
              local_78 = local_128;
              local_70 = -1;
              local_68 = 0;
              lVar7 = FUN_146fb78aa(param_1);
              if (lVar7 != 0) {
                FUN_1497b7a24(lVar7,lVar13 + 0x10,param_2);
              }
            }
          }
          else {
            FUN_1400b22c2(&local_78,"Vector");
            if (local_100 == local_70) {
              bVar15 = true;
              if (1 < local_100) {
                lVar13 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(local_108 + lVar13);
                  uVar6 = (uint)uVar1;
                  uVar2 = *(ushort *)(local_78 + lVar13);
                  uVar11 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974931f;
                    }
                    iVar4 = uVar6 - uVar11;
                    goto LAB_149749514;
                  }
                  if (uVar1 == 0) break;
LAB_14974931f:
                  lVar13 = lVar13 + 2;
                }
                iVar4 = 0;
LAB_149749514:
                bVar15 = iVar4 == 0;
              }
            }
            else {
              bVar15 = local_70 + local_100 == 1;
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if (bVar15) {
              lVar13 = FUN_146d84978(local_140,local_f8,local_f0);
              if (lVar13 != 0) {
                local_78 = local_130;
                local_70 = -1;
                local_68 = 0;
                lVar7 = FUN_146fb78aa(param_1);
                if (lVar7 != 0) {
                  FUN_1497b7d92(lVar7,lVar13 + 0x10,param_2);
                }
              }
            }
            else {
              FUN_1400b22c2(&local_78,"Vector3d");
              if (local_100 == local_70) {
                bVar15 = true;
                if (1 < local_100) {
                  lVar13 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)(local_108 + lVar13);
                    uVar6 = (uint)uVar1;
                    uVar2 = *(ushort *)(local_78 + lVar13);
                    uVar11 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1497493c6;
                      }
                      iVar4 = uVar6 - uVar11;
                      goto LAB_149749520;
                    }
                    if (uVar1 == 0) break;
LAB_1497493c6:
                    lVar13 = lVar13 + 2;
                  }
                  iVar4 = 0;
LAB_149749520:
                  bVar15 = iVar4 == 0;
                }
              }
              else {
                bVar15 = local_70 + local_100 == 1;
              }
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              if (bVar15) {
                lVar13 = FUN_14974997c(local_140,local_f8,local_f0);
                if (lVar13 != 0) {
                  local_78 = local_138;
                  local_70 = -1;
                  local_68 = 0;
                  lVar7 = FUN_146fb78aa(param_1);
                  if (lVar7 != 0) {
                    FUN_1497a4c94(lVar7,lVar13 + 0x10,param_2);
                  }
                }
              }
              else {
                FUN_1400b22c2(&local_78,"LinearColor");
                if (local_100 == local_70) {
                  bVar15 = true;
                  if (1 < local_100) {
                    lVar13 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)(local_108 + lVar13);
                      uVar6 = (uint)uVar1;
                      uVar2 = *(ushort *)(local_78 + lVar13);
                      uVar11 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_14974946d;
                        }
                        iVar4 = uVar6 - uVar11;
                        goto LAB_14974952c;
                      }
                      if (uVar1 == 0) break;
LAB_14974946d:
                      lVar13 = lVar13 + 2;
                    }
                    iVar4 = 0;
LAB_14974952c:
                    bVar15 = iVar4 == 0;
                  }
                }
                else {
                  bVar15 = local_70 + local_100 == 1;
                }
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                if ((bVar15) && (lVar13 = FUN_149749a76(local_140,local_f8,local_f0), lVar13 != 0))
                {
                  local_78 = param_1 + 0x300;
                  local_70 = -1;
                  local_68 = 0;
                  lVar7 = FUN_146fb78aa(param_1);
                  if (lVar7 != 0) {
                    FUN_1497b7e44(lVar7,lVar13 + 0x10,param_2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
LAB_149748e20:
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_14974891f:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149749882 FUN_149749882 body=249 status=ok
// SIG undefined FUN_149749882(void)

undefined8 FUN_149749882(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 14974997c FUN_14974997c body=249 status=ok
// SIG undefined FUN_14974997c(void)

undefined8 FUN_14974997c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 149749a76 FUN_149749a76 body=249 status=ok
// SIG undefined FUN_149749a76(void)

undefined8 FUN_149749a76(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 149749b70 FUN_149749b70 body=3138 status=ok
// SIG undefined FUN_149749b70(void)

void FUN_149749b70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  int local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  int local_170;
  longlong local_168;
  int local_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148 [16];
  longlong local_138 [2];
  longlong local_128;
  ulonglong local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong local_a0;
  int local_98;
  int local_6c;
  undefined1 local_68 [8];
  undefined1 *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar11 = param_1 + 0x198;
  lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar8 != lVar11) goto LAB_149749bb0;
  local_f0 = 0xffffffff;
  uVar19 = 0;
  local_e8 = 0;
  local_f8 = lVar11;
  uVar9 = FUN_146fb4872(param_1);
  uVar9 = FUN_1496fcf74(uVar9,param_2,lVar11);
  FUN_146ecd042(&local_f8,uVar9);
  local_118 = 0;
  uVar10 = 0;
  switch(*(undefined1 *)(param_1 + 0x268)) {
  case 0:
    uVar19 = DAT_14c9974a8;
    break;
  case 1:
    uVar19 = DAT_14c996af0;
    break;
  case 2:
    uVar19 = DAT_14c996ae8;
    break;
  case 3:
    uVar19 = DAT_14c996ae0;
    break;
  case 4:
    uVar19 = DAT_14c996a80;
    break;
  case 5:
    uVar19 = DAT_14c996a68;
    break;
  case 6:
    if (*(int *)(param_1 + 0x278) == 0) {
      puVar18 = &DAT_149dfb77a;
    }
    else {
      puVar18 = *(undefined2 **)(param_1 + 0x270);
    }
    FUN_1446f470e(&local_118,puVar18,1);
    goto LAB_149749c96;
  default:
    goto switchD_149749c45_default;
  }
  uVar10 = uVar19 & 0xffffffff00000000;
switchD_149749c45_default:
  local_118 = uVar19 & 0xffffffff | uVar10;
LAB_149749c96:
  FUN_1400021e4(&local_118,local_148);
  local_158 = (void *)0x0;
  local_150 = *(int *)(param_1 + 0x288);
  lVar8 = (longlong)local_150;
  _Src = *(void **)(param_1 + 0x280);
  if (lVar8 == 0) {
    local_14c = 0;
  }
  else {
    FUN_1446dd670(&local_158,local_150,0);
    memcpy(local_158,_Src,lVar8 * 2);
  }
  FUN_1496f836a(local_138,&local_158,local_148);
  local_178 = param_1 + 0x248;
  local_170 = -1;
  local_168 = 0;
  uVar9 = FUN_146fb4872(param_1);
  uVar9 = FUN_1496fdb42(uVar9,param_2,local_138);
  FUN_1496f87b2(&local_178,uVar9);
  iVar5 = local_160 + -1;
  if (local_160 == 0) {
    iVar5 = 0;
  }
  FUN_1446f82e2(&local_110,iVar5,local_168,1);
  local_180 = local_110;
  iVar5 = local_170 + -1;
  if (local_170 == 0) {
    iVar5 = 0;
  }
  FUN_1446f82e2(&local_110,iVar5,local_178,1);
  local_188 = local_110;
  iVar5 = FUN_140180c78(&local_180);
  if (((iVar5 != 0) && (iVar5 = FUN_140180c78(&local_188), iVar5 != 0)) && (local_98 != local_6c)) {
    uVar7 = (uint)((ulonglong)local_180 >> 0x10);
    uVar16 = (uint)local_180 & 0xffff;
    if (local_60 == (undefined1 *)0x0) {
      local_60 = local_68;
    }
    for (iVar5 = *(int *)(local_60 +
                         (ulonglong)
                         (local_58 - 1U &
                         (int)((ulonglong)local_180 >> 0x20) + ((uint)local_180 << 0x10 | uVar16) +
                         (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar16 >> 4)) * 4); iVar5 != -1;
        iVar5 = *(int *)(local_a0 + (longlong)iVar5 * 0x14 + 0xc)) {
      if (*(longlong *)(local_a0 + (longlong)iVar5 * 0x14) == local_180) {
        cVar4 = FUN_140498cd4(&local_f8,local_188);
        if (cVar4 != '\0') {
          uVar6 = FUN_146ecd838(&local_f8,local_188);
          FUN_14460a6dd(&local_110,uVar6);
          FUN_1400021e4(&local_110,&local_198);
          FUN_1400b22c2(&local_110,&DAT_149fcdef8);
          if (local_190 != local_108) {
            bVar20 = local_108 + local_190 == 1;
            goto LAB_14974a012;
          }
          bVar20 = true;
          if (local_190 < 2) goto LAB_14974a012;
          lVar8 = 0;
          goto LAB_149749fbd;
        }
        break;
      }
    }
  }
  goto LAB_149749e3a;
LAB_149749fbd:
  uVar1 = *(ushort *)(local_198 + lVar8);
  uVar7 = (uint)uVar1;
  uVar2 = *(ushort *)(local_110 + lVar8);
  uVar16 = (uint)uVar2;
  if (uVar1 != uVar2) {
    if ((uVar2 | uVar1) < 0x80) {
      uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149749fd5;
    }
    iVar5 = uVar7 - uVar16;
    goto LAB_14974a2bf;
  }
  if (uVar1 == 0) goto LAB_14974a2bd;
LAB_149749fd5:
  lVar8 = lVar8 + 2;
  goto LAB_149749fbd;
LAB_14974a2bd:
  iVar5 = 0;
LAB_14974a2bf:
  bVar20 = iVar5 == 0;
LAB_14974a012:
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  lVar3 = local_180;
  lVar8 = local_188;
  if (bVar20) {
    if (param_1 != 0) {
      lVar14 = param_1 + 0x290;
      local_108 = -1;
      local_100 = 0;
      local_110 = lVar14;
      lVar12 = FUN_146fb4872(param_1);
      if (*(longlong *)(lVar12 + 0x48) != 0) {
        local_108 = -1;
        local_100 = 0;
        local_110 = lVar14;
        uVar9 = FUN_146fb4872(param_1);
        plVar13 = (longlong *)FUN_14972987c(uVar9,param_2,lVar14);
        lVar14 = FUN_1401c090c(&local_f8,lVar8,lVar3);
        if (lVar14 != 0) {
          plVar15 = (longlong *)FUN_140b1fd10(&local_f8,lVar8,lVar3);
          lVar8 = plVar13[1];
          iVar5 = (**(code **)(*plVar15 + 0x60))(plVar15);
          if (((int)lVar8 == iVar5) && (iVar5 = (**(code **)(*plVar15 + 0x60))(plVar15), 0 < iVar5))
          {
            uVar19 = 0;
            do {
              uVar7 = 1 << ((byte)uVar19 & 0x1f);
              plVar17 = (longlong *)plVar15[4];
              if ((longlong *)plVar15[4] == (longlong *)0x0) {
                plVar17 = plVar15 + 2;
              }
              uVar10 = uVar19 >> 5 & 0x7ffffff;
              if (*(char *)(*plVar13 + uVar19) == '\x01') {
                uVar7 = uVar7 | *(uint *)((longlong)plVar17 + uVar10 * 4);
              }
              else {
                uVar7 = ~uVar7 & *(uint *)((longlong)plVar17 + uVar10 * 4);
              }
              *(uint *)((longlong)plVar17 + uVar10 * 4) = uVar7;
              uVar19 = uVar19 + 1;
              iVar5 = (**(code **)(*plVar15 + 0x60))(plVar15);
            } while ((longlong)uVar19 < (longlong)iVar5);
          }
        }
      }
    }
  }
  else {
    FUN_1400b22c2(&local_110,"Float");
    if (local_190 == local_108) {
      bVar20 = true;
      if (1 < local_190) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_198 + lVar8);
          uVar7 = (uint)uVar1;
          uVar2 = *(ushort *)(local_110 + lVar8);
          uVar16 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974a1a5;
            }
            iVar5 = uVar7 - uVar16;
            goto LAB_14974a3a5;
          }
          if (uVar1 == 0) break;
LAB_14974a1a5:
          lVar8 = lVar8 + 2;
        }
        iVar5 = 0;
LAB_14974a3a5:
        bVar20 = iVar5 == 0;
      }
    }
    else {
      bVar20 = local_108 + local_190 == 1;
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    if (bVar20) {
      local_1a0 = local_180;
      local_1a8 = local_188;
      FUN_14460b6f0(param_1,param_2,&local_f8,param_1 + 0x2a0);
    }
    else {
      FUN_1400b22c2(&local_110,"Double");
      if (local_190 == local_108) {
        bVar20 = true;
        if (1 < local_190) {
          lVar8 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_198 + lVar8);
            uVar7 = (uint)uVar1;
            uVar2 = *(ushort *)(local_110 + lVar8);
            uVar16 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974a291;
              }
              iVar5 = uVar7 - uVar16;
              goto LAB_14974a48b;
            }
            if (uVar1 == 0) break;
LAB_14974a291:
            lVar8 = lVar8 + 2;
          }
          iVar5 = 0;
LAB_14974a48b:
          bVar20 = iVar5 == 0;
        }
      }
      else {
        bVar20 = local_108 + local_190 == 1;
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (bVar20) {
        local_1a0 = local_180;
        local_1a8 = local_188;
        FUN_14460b90f(param_1,param_2,&local_f8,param_1 + 0x2b0);
      }
      else {
        FUN_1400b22c2(&local_110,"Int32");
        if (local_190 == local_108) {
          bVar20 = true;
          if (1 < local_190) {
            lVar8 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_198 + lVar8);
              uVar7 = (uint)uVar1;
              uVar2 = *(ushort *)(local_110 + lVar8);
              uVar16 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974a377;
                }
                iVar5 = uVar7 - uVar16;
                goto LAB_14974a571;
              }
              if (uVar1 == 0) break;
LAB_14974a377:
              lVar8 = lVar8 + 2;
            }
            iVar5 = 0;
LAB_14974a571:
            bVar20 = iVar5 == 0;
          }
        }
        else {
          bVar20 = local_108 + local_190 == 1;
        }
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        if (bVar20) {
          local_1a0 = local_180;
          local_1a8 = local_188;
          FUN_14460ba3c(param_1,param_2,&local_f8,param_1 + 0x2c0);
        }
        else {
          FUN_1400b22c2(&local_110,"String");
          if (local_190 == local_108) {
            bVar20 = true;
            if (1 < local_190) {
              lVar8 = 0;
              while( true ) {
                uVar1 = *(ushort *)(local_198 + lVar8);
                uVar7 = (uint)uVar1;
                uVar2 = *(ushort *)(local_110 + lVar8);
                uVar16 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974a45d;
                  }
                  iVar5 = uVar7 - uVar16;
                  goto LAB_14974a657;
                }
                if (uVar1 == 0) break;
LAB_14974a45d:
                lVar8 = lVar8 + 2;
              }
              iVar5 = 0;
LAB_14974a657:
              bVar20 = iVar5 == 0;
            }
          }
          else {
            bVar20 = local_108 + local_190 == 1;
          }
          if (local_110 != 0) {
            FUN_1400020a8();
          }
          if (bVar20) {
            local_1a0 = local_180;
            local_1a8 = local_188;
            FUN_14460bb65(param_1,param_2,&local_f8,param_1 + 0x2d0);
          }
          else {
            FUN_1400b22c2(&local_110,"Vector");
            if (local_190 == local_108) {
              bVar20 = true;
              if (1 < local_190) {
                lVar8 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(local_198 + lVar8);
                  uVar7 = (uint)uVar1;
                  uVar2 = *(ushort *)(local_110 + lVar8);
                  uVar16 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974a543;
                    }
                    iVar5 = uVar7 - uVar16;
                    goto LAB_14974a73a;
                  }
                  if (uVar1 == 0) break;
LAB_14974a543:
                  lVar8 = lVar8 + 2;
                }
                iVar5 = 0;
LAB_14974a73a:
                bVar20 = iVar5 == 0;
              }
            }
            else {
              bVar20 = local_108 + local_190 == 1;
            }
            if (local_110 != 0) {
              FUN_1400020a8();
            }
            if (bVar20) {
              local_1a0 = local_180;
              local_1a8 = local_188;
              FUN_14460bce3(param_1,param_2,&local_f8,param_1 + 0x2e0);
            }
            else {
              FUN_1400b22c2(&local_110,"Vector3d");
              if (local_190 == local_108) {
                bVar20 = true;
                if (1 < local_190) {
                  lVar8 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)(local_198 + lVar8);
                    uVar7 = (uint)uVar1;
                    uVar2 = *(ushort *)(local_110 + lVar8);
                    uVar16 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14974a629;
                      }
                      iVar5 = uVar7 - uVar16;
                      goto LAB_14974a79e;
                    }
                    if (uVar1 == 0) break;
LAB_14974a629:
                    lVar8 = lVar8 + 2;
                  }
                  iVar5 = 0;
LAB_14974a79e:
                  bVar20 = iVar5 == 0;
                }
              }
              else {
                bVar20 = local_108 + local_190 == 1;
              }
              if (local_110 != 0) {
                FUN_1400020a8();
              }
              if (bVar20) {
                local_1a0 = local_180;
                local_1a8 = local_188;
                FUN_14460be1d(param_1,param_2,&local_f8,param_1 + 0x2f0);
              }
              else {
                FUN_1400b22c2(&local_110,"LinearColor");
                if (local_190 == local_108) {
                  bVar20 = true;
                  if (1 < local_190) {
                    lVar8 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)(local_198 + lVar8);
                      uVar7 = (uint)uVar1;
                      uVar2 = *(ushort *)(local_110 + lVar8);
                      uVar16 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_14974a70f;
                        }
                        iVar5 = uVar7 - uVar16;
                        goto LAB_14974a7ab;
                      }
                      if (uVar1 == 0) break;
LAB_14974a70f:
                      lVar8 = lVar8 + 2;
                    }
                    iVar5 = 0;
LAB_14974a7ab:
                    bVar20 = iVar5 == 0;
                  }
                }
                else {
                  bVar20 = local_108 + local_190 == 1;
                }
                if (local_110 != 0) {
                  FUN_1400020a8();
                }
                if (bVar20) {
                  local_1a0 = local_180;
                  local_1a8 = local_188;
                  FUN_14460bf59(param_1,param_2,&local_f8,param_1 + 0x300);
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
LAB_149749e3a:
  local_108 = -1;
  local_100 = 0;
  local_110 = lVar11;
  lVar11 = FUN_146fb78aa(param_1);
  if (lVar11 != 0) {
    FUN_1496fd2a8(lVar11,&local_f8,param_2);
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(&local_f8);
LAB_149749bb0:
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974a7b4 FUN_14974a7b4 body=203 status=ok
// SIG undefined FUN_14974a7b4(void)

void FUN_14974a7b4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x198;
  uVar1 = FUN_146fb4872(param_1,&local_50);
  uVar1 = FUN_14972a204(uVar1,param_2,param_1 + 0x198);
  FUN_146fd58e4(uVar1,local_60);
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x1b8;
  lVar2 = FUN_146fb78aa(param_1,&local_50);
  if (lVar2 != 0) {
    FUN_1496f8d2a(lVar2,local_60,param_2);
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974a880 FUN_14974a880 body=2034 status=ok
// SIG undefined FUN_14974a880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14974a880(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double *pdVar25;
  undefined8 uVar26;
  double *pdVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_318 [32];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  dVar23 = (double)(**(code **)(*param_3 + 0x20))(param_3);
  if (dVar23 == (double)(param_1 + 0x260)) {
    local_178 = (double)(param_1 + 0x1a0);
    local_170._0_4_ = 0xffffffff;
    local_168 = 0.0;
    uVar24 = FUN_146fb4872(param_1,&local_178);
    pdVar25 = (double *)FUN_14979f482(uVar24,param_2,&DAT_14c846480);
    local_178 = (double)(param_1 + 0x200);
    local_170 = (double)CONCAT44(local_170._4_4_,0xffffffff);
    local_168 = 0.0;
    uVar26 = FUN_146fb4872(param_1,&local_178);
    uVar24 = param_2;
    pdVar27 = (double *)FUN_14979f482(uVar26,param_2,&DAT_14c846480);
    auVar44 = _DAT_149934d80;
    local_2d8 = ZEXT816(0);
    local_2c8 = 0.0;
    dStack_2c0 = 0.0;
    auVar34 = *(undefined1 (*) [16])(pdVar27 + 8);
    dVar23 = auVar34._0_8_;
    dVar9 = auVar34._8_8_;
    auVar4 = *(undefined1 (*) [16])(pdVar27 + 10);
    dVar6 = auVar4._0_8_;
    auVar35 = *(undefined1 (*) [16])(pdVar25 + 8);
    dVar7 = auVar35._0_8_;
    dVar10 = auVar35._8_8_;
    auVar5 = *(undefined1 (*) [16])(pdVar25 + 10);
    dVar8 = auVar5._0_8_;
    auVar34 = minpd(auVar35,auVar34);
    auVar39 = minpd(auVar5,auVar4);
    auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    iVar29 = movmskpd((int)uVar26,auVar35);
    auVar34._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
    uVar30 = movmskpd((int)uVar24,auVar34);
    if ((uVar30 & 0x3fffffff) == 0 && iVar29 == 0) {
      dVar15 = *pdVar25;
      dVar16 = pdVar25[1];
      dVar17 = pdVar25[2];
      dVar18 = pdVar25[3];
      dVar19 = *pdVar27;
      dVar20 = pdVar27[1];
      dVar21 = pdVar27[2];
      dVar22 = pdVar27[3];
      dVar33 = pdVar27[3];
      dVar38 = pdVar27[3];
      dVar1 = pdVar27[1];
      dVar2 = pdVar27[1];
      dVar3 = pdVar27[2];
      dVar40 = pdVar27[2];
      local_2f8 = dVar16 * dVar3 * -1.0 + dVar17 * dVar1 + dVar18 * *pdVar27 * 1.0 + dVar15 * dVar33
      ;
      dStack_2f0 = dVar15 * dVar40 * 1.0 +
                   dVar18 * dVar2 + dVar17 * *pdVar27 * -1.0 + dVar16 * dVar38;
      dVar11 = pdVar25[4] * dVar23;
      dVar43 = pdVar25[5] * dVar9;
      dVar12 = pdVar25[6] * dVar6;
      dVar13 = pdVar25[7] * auVar4._8_8_;
      dVar37 = dVar43 * dVar19 - dVar20 * dVar11;
      dVar41 = dVar12 * dVar20 - dVar21 * dVar43;
      dVar42 = dVar11 * dVar21 - dVar19 * dVar12;
      dVar14 = dVar13 * dVar22 - dVar22 * dVar13;
      dVar41 = dVar41 + dVar41;
      dVar42 = dVar42 + dVar42;
      dVar37 = dVar37 + dVar37;
      dVar14 = dVar14 + dVar14;
      dVar43 = (dVar41 * dVar21 - dVar37 * dVar19) + dVar38 * dVar42 + dVar43 + pdVar27[5];
      local_2c8 = (dVar42 * dVar19 - dVar20 * dVar41) + dVar33 * dVar37 + dVar12 + pdVar27[6];
      dStack_2c0 = (dVar14 * dVar22 - dVar14 * dVar22) + dVar38 * dVar14 + dVar13 + pdVar27[7];
      local_2e8._8_8_ =
           dVar17 * dVar40 * -1.0 + ((*pdVar27 * dVar15 * -1.0 + dVar18 * dVar38) - dVar16 * dVar2);
      local_2e8._0_8_ =
           dVar18 * dVar3 * 1.0 + ((*pdVar27 * dVar16 * 1.0 + dVar17 * dVar33) - dVar15 * dVar1);
      local_2d8._8_4_ = SUB84(dVar43,0);
      local_2d8._0_8_ = (dVar37 * dVar20 - dVar21 * dVar42) + dVar33 * dVar41 + dVar11 + pdVar27[4];
      local_2d8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    }
    else {
      dVar2 = *pdVar27;
      dVar3 = pdVar27[1];
      dVar40 = pdVar27[2];
      dVar37 = dVar3 + dVar3;
      dVar41 = dVar40 + dVar40;
      dVar38 = dVar2 * (dVar2 + dVar2);
      local_1a8 = (1.0 - (dVar38 + dVar3 * dVar37)) * dVar6;
      dVar33 = pdVar27[3];
      dVar42 = dVar41 * dVar33;
      dVar43 = (dVar2 + dVar2) * pdVar27[3];
      dVar33 = dVar37 * dVar33;
      local_1b8 = (dVar33 + *pdVar27 * dVar41) * dVar6;
      dVar38 = (DAT_149934d80._8_8_ - (dVar40 * dVar41 + dVar38)) * dVar9;
      dVar1 = (dVar37 * dVar2 + dVar42) * dVar23;
      local_1c8 = (dVar41 * dVar3 + dVar43) * dVar9;
      dStack_1b0 = (dVar41 * dVar3 - dVar43) * dVar6;
      local_1e8 = (*pdVar27 * dVar41 - dVar33) * dVar23;
      local_1f8._8_4_ = SUB84(dVar1,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar41 + dVar3 * dVar37)) * dVar23;
      local_1f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar38,0);
      local_1d8._0_8_ = (dVar37 * dVar2 - dVar42) * dVar9;
      local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = pdVar27[4];
      dStack_190 = pdVar27[5];
      local_188 = pdVar27[6];
      uStack_180 = 0x3ff0000000000000;
      dVar1 = *pdVar25;
      dVar2 = pdVar25[1];
      dVar3 = pdVar25[2];
      dVar40 = dVar2 + dVar2;
      dVar37 = dVar3 + dVar3;
      dVar38 = dVar1 * (dVar1 + dVar1);
      local_228 = (1.0 - (dVar38 + dVar2 * dVar40)) * dVar8;
      dVar33 = pdVar25[3];
      dVar41 = dVar37 * dVar33;
      dVar42 = (dVar1 + dVar1) * pdVar25[3];
      dVar33 = dVar40 * dVar33;
      local_238 = (dVar33 + *pdVar25 * dVar37) * dVar8;
      dStack_230 = (dVar37 * dVar2 - dVar42) * dVar8;
      local_278 = ((double)DAT_149934d80 - (dVar3 * dVar37 + dVar2 * dVar40)) * dVar7;
      dVar38 = (DAT_149934d80._8_8_ - (dVar3 * dVar37 + dVar38)) * dVar10;
      dStack_270 = (dVar40 * dVar1 + dVar41) * dVar7;
      local_248 = (dVar37 * dVar2 + dVar42) * dVar10;
      local_268 = (*pdVar25 * dVar37 - dVar33) * dVar7;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar38,0);
      local_258._0_8_ = (dVar40 * dVar1 - dVar41) * dVar10;
      local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = pdVar25[4];
      dStack_210 = pdVar25[5];
      local_208 = pdVar25[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar39._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
      auVar39._0_8_ = -(ulonglong)(0.0 <= dVar23 * dVar7);
      auVar34 = blendvpd(_DAT_149936790,auVar44,auVar39);
      uVar31 = -(ulonglong)(0.0 <= dVar6 * dVar8);
      dVar33 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
      dVar38 = auVar34._0_8_;
      local_168 = local_168 * dVar38;
      local_170 = local_170 * dVar38;
      local_178 = local_178 * dVar38;
      dVar38 = auVar34._8_8_;
      local_148 = local_148 * dVar38;
      local_150 = local_150 * dVar38;
      local_158 = dVar38 * local_158;
      local_128 = local_128 * dVar33;
      local_130 = local_130 * dVar33;
      local_138 = dVar33 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar33 = local_288 * local_288 + local_298 * local_298;
      dVar38 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar36._0_8_ = dVar33 + dVar38;
      auVar36._8_8_ = dVar33 + dVar38;
      auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
      auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
      auVar34 = sqrtpd(auVar36,auVar36);
      auVar34 = divpd(auVar44,auVar34);
      auVar44._0_8_ = auVar34._0_8_ * local_288;
      auVar44._8_8_ = auVar34._8_8_ * dStack_280;
      local_2f8 = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
      dStack_2f0 = (double)((ulonglong)(dStack_290 * auVar34._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar32);
      local_2d8._8_8_ = uStack_110;
      local_2d8._0_8_ = local_118;
      local_2c8 = local_108;
      dStack_2c0 = 0.0;
    }
    dVar33 = auVar5._8_8_ * auVar4._8_8_;
    local_2b8._8_4_ = SUB84(dVar10 * dVar9,0);
    local_2b8._0_8_ = dVar7 * dVar23;
    local_2b8._12_4_ = (int)((ulonglong)(dVar10 * dVar9) >> 0x20);
    local_2a8._8_4_ = SUB84(dVar33,0);
    local_2a8._0_8_ = dVar8 * dVar6;
    local_2a8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    local_170 = (double)CONCAT44(local_170._4_4_,0xffffffff);
    local_168 = 0.0;
    local_178 = (double)(param_1 + 0x260);
    lVar28 = FUN_146fb78aa(param_1);
    if (lVar28 != 0) {
      FUN_1497a53d6(lVar28,&local_2f8,param_2);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974b074 FUN_14974b074 body=828 status=ok
// SIG undefined FUN_14974b074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14974b074(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  double *pdVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  double *pdVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar7 == param_1 + 0x200) {
    local_128 = (double)(param_1 + 0x1a0);
    dStack_120 = (double)CONCAT44(dStack_120._4_4_,0xffffffff);
    local_118 = 0.0;
    uVar8 = FUN_146fb4872(param_1);
    uVar12 = param_2;
    pdVar9 = (double *)FUN_14979f482(uVar8,param_2,&DAT_14c846480);
    auVar1 = *(undefined1 (*) [16])(pdVar9 + 8);
    auVar2 = *(undefined1 (*) [16])(pdVar9 + 10);
    auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
    auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
    iVar10 = movmskpd((int)uVar8,auVar15);
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
    uVar11 = movmskpd((int)uVar12,auVar17);
    if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
      pdVar9 = (double *)&DAT_14c846480;
      pdVar13 = &local_128;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar13 = *pdVar9;
        pdVar9 = pdVar9 + 1;
        pdVar13 = pdVar13 + 1;
      }
    }
    else {
      auVar17 = divpd(_DAT_149934d80,auVar1);
      auVar15 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
      local_e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar17._0_8_);
      dStack_e0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar17._8_8_);
      local_d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar15._0_8_);
      local_128 = -*pdVar9;
      dStack_120 = -pdVar9[1];
      local_118 = pdVar9[2] * -1.0;
      dStack_110 = pdVar9[3] * 1.0;
      dVar3 = pdVar9[4] * local_e8;
      dVar4 = pdVar9[5] * dStack_e0;
      dVar14 = pdVar9[6] * local_d8;
      dVar5 = dVar4 * local_128 - dStack_120 * dVar3;
      dVar6 = dVar14 * dStack_120 - local_118 * dVar4;
      dVar16 = dVar3 * local_118 - local_128 * dVar14;
      dVar6 = dVar6 + dVar6;
      dVar16 = dVar16 + dVar16;
      dVar5 = dVar5 + dVar5;
      local_108 = 0.0 - ((dVar5 * dStack_120 - dVar16 * local_118) + dStack_110 * dVar6 + dVar3);
      dStack_100 = 0.0 - (dVar5 * *pdVar9 + local_118 * dVar6 + dStack_110 * dVar16 + dVar4);
      local_f8 = 0.0 - (dStack_110 * dVar5 + dVar14 + (dVar16 * local_128 - dVar6 * dStack_120));
      uStack_f0 = 0;
      uStack_d0 = 0;
    }
    local_c0 = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x200;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_149700970(lVar7,&local_128,param_2);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14974b3b2 FUN_14974b3b2 body=279 status=ok
// SIG undefined FUN_14974b3b2(void)

void FUN_14974b3b2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a4) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    uVar2 = FUN_146fb4872(param_1);
    pcVar3 = (char *)FUN_146fca358(uVar2,param_2,param_1 + 0x1a0);
    if (*pcVar3 == '\x01') {
      lVar1 = param_1 + 0x198;
    }
    else {
      lVar1 = param_1 + 0x19c;
    }
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar1;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar4 = (undefined4 *)FUN_14972a54c(uVar2,param_2,lVar1);
    local_5c = *puVar4;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a4;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974b4ca FUN_14974b4ca body=275 status=ok
// SIG undefined FUN_14974b4ca(void)

void FUN_14974b4ca(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a4) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    uVar2 = FUN_146fb4872(param_1);
    pcVar3 = (char *)FUN_146fca358(uVar2,param_2,param_1 + 0x1a0);
    if (*pcVar3 == '\x01') {
      lVar1 = param_1 + 0x198;
    }
    else {
      lVar1 = param_1 + 0x19c;
    }
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar1;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar4 = (undefined4 *)FUN_146fca67a(uVar2,param_2,lVar1);
    local_5c = *puVar4;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a4;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497a5272(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974b5f0 FUN_14974b5f0 body=486 status=ok
// SIG undefined FUN_14974b5f0(void)

void FUN_14974b5f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  float local_50;
  float local_4c;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pwVar2 = (wchar_t *)(**(code **)(*param_3 + 0x20))(param_3);
  if (((pwVar2 == (wchar_t *)(param_1 + 0x1b8)) ||
      (lVar3 = (**(code **)(*param_3 + 0x20))(param_3), lVar3 == param_1 + 0x1bc)) ||
     (lVar3 = (**(code **)(*param_3 + 0x20))(param_3), lVar3 == param_1 + 0x1b0)) {
    local_50 = (float)FUN_146fd5484(param_1,param_2);
    local_51 = 0;
    local_4c = local_50;
    FUN_1446ddc76(&local_48,"TEngineContext",1);
    cVar1 = (**(code **)(*param_2 + 8))(param_2,local_48);
    if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
      FUN_146fd558a(param_1,&local_48,param_2,param_2[0xb]);
      if ((1 < local_40) && (cVar1 = FUN_1405b43cc(&local_48), cVar1 != '\0')) {
        pwVar2 = local_48;
        if (local_40 == 0) {
          pwVar2 = L"";
        }
        dVar4 = _wtof(pwVar2);
        local_50 = (float)dVar4;
        local_51 = 1;
      }
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = (wchar_t *)(param_1 + 0x1b8);
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fe392(lVar3,&local_50,param_2);
    }
    local_48 = (wchar_t *)(param_1 + 0x1bc);
    local_40 = 0xffffffff;
    local_38 = 0;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497286c4(lVar3,&local_4c,param_2);
    }
    local_48 = (wchar_t *)(param_1 + 0x1b0);
    local_40 = -1;
    local_38 = 0;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_149799bdc(lVar3,&local_51,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14974b7d8 FUN_14974b7d8 body=476 status=ok
// SIG undefined FUN_14974b7d8(void)

void FUN_14974b7d8(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  int local_50;
  int local_4c;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pwVar2 = (wchar_t *)(**(code **)(*param_3 + 0x20))(param_3);
  if (((pwVar2 == (wchar_t *)(param_1 + 0x1b8)) ||
      (lVar3 = (**(code **)(*param_3 + 0x20))(param_3), lVar3 == param_1 + 0x1bc)) ||
     (lVar3 = (**(code **)(*param_3 + 0x20))(param_3), lVar3 == param_1 + 0x1b0)) {
    local_50 = FUN_146fd5392(param_1,param_2);
    local_51 = 0;
    local_4c = local_50;
    FUN_1446ddc76(&local_48,"TEngineContext",1);
    cVar1 = (**(code **)(*param_2 + 8))(param_2,local_48);
    if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
      FUN_146fd558a(param_1,&local_48,param_2,param_2[0xb]);
      if ((1 < local_40) && (cVar1 = FUN_1405b43cc(&local_48), cVar1 != '\0')) {
        pwVar2 = local_48;
        if (local_40 == 0) {
          pwVar2 = L"";
        }
        local_50 = _wtoi(pwVar2);
        local_51 = 1;
      }
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = (wchar_t *)(param_1 + 0x1b8);
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497006ec(lVar3,&local_50,param_2);
    }
    local_48 = (wchar_t *)(param_1 + 0x1bc);
    local_40 = 0xffffffff;
    local_38 = 0;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a5272(lVar3,&local_4c,param_2);
    }
    local_48 = (wchar_t *)(param_1 + 0x1b0);
    local_40 = -1;
    local_38 = 0;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_149799bdc(lVar3,&local_51,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14974b9b6 FUN_14974b9b6 body=476 status=ok
// SIG undefined FUN_14974b9b6(void)

void FUN_14974b9b6(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [45];
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  longlong local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != param_1 + 0x1b8) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1b9) {
      lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar2 != param_1 + 0x1b0) goto LAB_14974ba18;
    }
  }
  FUN_14974bb94(param_1,&local_48,param_2);
  local_4a = FUN_14460c08b(&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_4b = 0;
  local_49 = local_4a;
  FUN_1446ddc76(&local_48,"TEngineContext",1);
  cVar1 = (**(code **)(*param_2 + 8))(param_2,local_48);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    FUN_146fd558a(param_1,&local_48,param_2,param_2[0xb]);
    if (1 < local_40) {
      local_4a = FUN_14460c08b(&local_48);
      local_4b = 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x1b8;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_149799bdc(lVar2,&local_4a,param_2);
  }
  local_48 = param_1 + 0x1b9;
  local_40 = 0xffffffff;
  local_38 = 0;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_1497a5324(lVar2,&local_49,param_2);
  }
  local_48 = param_1 + 0x1b0;
  local_40 = -1;
  local_38 = 0;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_149799bdc(lVar2,&local_4b,param_2);
  }
LAB_14974ba18:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974bb94 FUN_14974bb94 body=181 status=ok
// SIG undefined FUN_14974bb94(void)

undefined8 * FUN_14974bb94(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_1 + 0x1a0;
  uVar2 = FUN_146fb4872();
  puVar3 = (undefined8 *)FUN_146fda3fc(uVar2,param_3,param_1 + 0x1a0);
  *param_2 = 0;
  iVar1 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14974bc4a FUN_14974bc4a body=582 status=ok
// SIG undefined FUN_14974bc4a(void)

void FUN_14974bc4a(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  void *local_70;
  uint local_68;
  undefined4 local_64;
  void *local_60;
  uint local_58;
  void *local_50;
  uint local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pvVar2 = (void *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pvVar2 != (void *)(param_1 + 0x1b8)) {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 != param_1 + 0x1c8) {
      lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar3 != param_1 + 0x1b0) goto LAB_14974bcae;
    }
  }
  FUN_14974bb94(param_1,&local_60,param_2);
  pvVar2 = local_60;
  local_70 = (void *)0x0;
  local_68 = local_58;
  if ((longlong)(int)local_58 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_58,0);
    memcpy(local_70,pvVar2,(longlong)(int)local_58 * 2);
  }
  local_71 = 0;
  FUN_1446ddc76(&local_50,"TEngineContext",1);
  cVar1 = (**(code **)(*param_2 + 8))(param_2,local_50);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    FUN_146fd558a(param_1,&local_50,param_2,param_2[0xb]);
    pvVar2 = local_50;
    if (1 < (int)local_48) {
      local_68 = local_48;
      FUN_1446dd670(&local_70,(ulonglong)local_48,local_64);
      memcpy(local_70,pvVar2,(ulonglong)local_48 * 2);
      local_71 = 1;
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = (void *)(param_1 + 0x1b8);
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_1496fde88(lVar3,&local_70,param_2);
  }
  local_50 = (void *)(param_1 + 0x1c8);
  local_48 = 0xffffffff;
  local_40 = 0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_1497a4be2(lVar3,&local_60,param_2);
  }
  local_50 = (void *)(param_1 + 0x1b0);
  local_48 = 0xffffffff;
  local_40 = 0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_149799bdc(lVar3,&local_71,param_2);
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14974bcae:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974be92 FUN_14974be92 body=216 status=ok
// SIG undefined FUN_14974be92(void)

void FUN_14974be92(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar3) {
    local_d8 = 0xffffffff;
    local_d0 = 0;
    local_e0 = lVar3;
    uVar2 = FUN_146fb4872(param_1);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar3);
    FUN_146ecd042(&local_e0,uVar2);
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fd2a8(lVar3,&local_e0,param_2);
    }
    FUN_14054b30a(&local_e0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974bf74 FUN_14974bf74 body=1038 status=ok
// SIG undefined FUN_14974bf74(void)

void FUN_14974bf74(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8 [5];
  ulonglong uStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar6 != param_1 + 0x1b0) {
    lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar6 != param_1 + 0x1c0) {
      lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar6 != param_1 + 0x1e0) goto LAB_14974bff1;
    }
  }
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x198;
  uVar7 = FUN_146fb4872(param_1);
  plVar8 = (longlong *)FUN_14979af18(uVar7,param_2,param_1 + 0x198);
  lVar6 = *plVar8;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  else if (lVar6 == 0) goto LAB_14974bff1;
  lVar6 = *(longlong *)(lVar6 + 0x98);
  if (0 < *(int *)(lVar6 + 0x50)) {
    local_b8[4] = 0;
    uStack_90 = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1ac;
    uVar7 = FUN_146fb4872(param_1,&local_88);
    puVar9 = (undefined4 *)FUN_146fca67a(uVar7,param_2,param_1 + 0x1ac);
    local_d0 = *puVar9;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1a8;
    uVar7 = FUN_146fb4872(param_1,&local_88);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x1a8);
    uVar2 = *puVar9;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1a4;
    uVar7 = FUN_146fb4872(param_1,&local_88);
    puVar9 = (undefined4 *)FUN_146fca67a(uVar7,param_2,param_1 + 0x1a4);
    uVar3 = *puVar9;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1a0;
    uVar7 = FUN_146fb4872(param_1,&local_88);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x1a0);
    local_e0 = local_b8;
    local_e8 = local_b8 + 2;
    local_f0 = local_b8 + 4;
    local_f8 = local_d0;
    FUN_14970cc7c(lVar6,*puVar9,uVar3,uVar2);
    iVar5 = (int)uStack_90;
    uVar10 = uStack_90 & 0xffffffff;
    local_c8 = 0;
    uStack_c0 = uStack_90 & 0xffffffff;
    if (uVar10 != 0) {
      FUN_1403e3958(&local_c8,0);
      if (0 < iVar5) {
        lVar6 = 0;
        do {
          puVar1 = (undefined4 *)(local_b8[4] + 0x20 + lVar6 * 4);
          uVar2 = puVar1[1];
          uVar3 = puVar1[2];
          uVar4 = puVar1[3];
          uVar7 = *(undefined8 *)(local_b8[4] + 0x30 + lVar6 * 4);
          puVar9 = (undefined4 *)(local_c8 + lVar6);
          *puVar9 = *puVar1;
          puVar9[1] = uVar2;
          puVar9[2] = uVar3;
          puVar9[3] = uVar4;
          *(undefined8 *)(local_c8 + 0x10 + lVar6) = uVar7;
          lVar6 = lVar6 + 0x18;
        } while (uVar10 * 0x18 != lVar6);
      }
    }
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x1b0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1497bb956(lVar6,&local_c8,param_2);
    }
    local_88 = param_1 + 0x1c0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_14972b2b6(lVar6,local_b8 + 2,param_2);
    }
    local_88 = param_1 + 0x1d0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1497bb956(lVar6,local_b8,param_2);
    }
    local_88 = param_1 + 0x1e0;
    local_cc = (undefined4)uStack_c0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,&local_cc,param_2);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_b8[4] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14974bff1:
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974c384 FUN_14974c384 body=1384 status=ok
// SIG undefined FUN_14974c384(void)

void FUN_14974c384(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined4 local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined1 local_101;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8 [7];
  ulonglong uStack_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar7 != param_1 + 0x1c0) {
    lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar7 != param_1 + 0x1d0) {
      lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar7 != param_1 + 0x1e0) {
        lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
        if (lVar7 != param_1 + 0x200) goto LAB_14974c42c;
      }
    }
  }
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = param_1 + 0x198;
  uVar8 = FUN_146fb4872(param_1);
  plVar9 = (longlong *)FUN_14979af18(uVar8,param_2,param_1 + 0x198);
  lVar7 = *plVar9;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  else if (lVar7 == 0) goto LAB_14974c42c;
  lVar7 = *(longlong *)(lVar7 + 0x98);
  if (0 < *(int *)(lVar7 + 0x50)) {
    local_e8[6] = 0;
    uStack_b0 = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x1b8;
    uVar8 = FUN_146fb4872(param_1,&local_a8);
    puVar10 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1b8);
    uVar2 = *puVar10;
    local_101 = *(undefined1 *)(param_1 + 0x1b4);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x1b0;
    uVar8 = FUN_146fb4872(param_1,&local_a8);
    puVar10 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1b0);
    uVar3 = *puVar10;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x1ac;
    uVar8 = FUN_146fb4872(param_1,&local_a8);
    puVar10 = (undefined4 *)FUN_146fca67a(uVar8,param_2,param_1 + 0x1ac);
    local_100 = *puVar10;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x1a8;
    uVar8 = FUN_146fb4872(param_1,&local_a8);
    puVar10 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1a8);
    uVar4 = *puVar10;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x1a4;
    uVar8 = FUN_146fb4872(param_1,&local_a8);
    puVar10 = (undefined4 *)FUN_146fca67a(uVar8,param_2,param_1 + 0x1a4);
    uVar5 = *puVar10;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x1a0;
    uVar8 = FUN_146fb4872(param_1,&local_a8);
    puVar10 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1a0);
    local_110 = local_e8;
    local_118 = local_e8 + 2;
    local_120 = local_e8 + 4;
    local_128 = local_e8 + 6;
    local_138 = local_101;
    local_148 = local_100;
    local_140 = uVar3;
    local_130 = uVar2;
    FUN_14970ce74(lVar7,*puVar10,uVar5,uVar4);
    iVar6 = (int)uStack_b0;
    uVar11 = uStack_b0 & 0xffffffff;
    local_f8 = 0;
    uStack_f0 = uStack_b0 & 0xffffffff;
    if (uVar11 != 0) {
      FUN_1403e3958(&local_f8,0);
      if (0 < iVar6) {
        lVar7 = 0;
        do {
          puVar1 = (undefined4 *)(local_e8[6] + 0x20 + lVar7 * 4);
          uVar2 = puVar1[1];
          uVar3 = puVar1[2];
          uVar4 = puVar1[3];
          uVar8 = *(undefined8 *)(local_e8[6] + 0x30 + lVar7 * 4);
          puVar10 = (undefined4 *)(local_f8 + lVar7);
          *puVar10 = *puVar1;
          puVar10[1] = uVar2;
          puVar10[2] = uVar3;
          puVar10[3] = uVar4;
          *(undefined8 *)(local_f8 + 0x10 + lVar7) = uVar8;
          lVar7 = lVar7 + 0x18;
        } while (uVar11 * 0x18 != lVar7);
      }
    }
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x1c0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1497bb956(lVar7,&local_f8,param_2);
    }
    local_a8 = param_1 + 0x1d0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14972ac00(lVar7,local_e8 + 4,param_2);
    }
    local_a8 = param_1 + 0x1e0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14972b2b6(lVar7,local_e8 + 2,param_2);
    }
    local_a8 = param_1 + 0x1f0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1497bb956(lVar7,local_e8,param_2);
    }
    local_a8 = param_1 + 0x200;
    local_fc = (undefined4)uStack_f0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_149700500(lVar7,&local_fc,param_2);
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[4] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[6] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14974c42c:
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974c8ee FUN_14974c8ee body=1640 status=ok
// SIG undefined FUN_14974c8ee(void)

void FUN_14974c8ee(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8 [7];
  ulonglong uStack_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar8 != param_1 + 0x1d0) {
    lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar8 != param_1 + 0x1e0) {
      lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar8 != param_1 + 0x1f0) {
        lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
        if (lVar8 != param_1 + 0x210) goto LAB_14974c9a3;
      }
    }
  }
  local_b0 = 0xffffffff;
  local_a8 = 0;
  local_b8 = param_1 + 0x198;
  uVar9 = FUN_146fb4872(param_1);
  plVar10 = (longlong *)FUN_14979af18(uVar9,param_2,param_1 + 0x198);
  lVar8 = *plVar10;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  else if (lVar8 == 0) goto LAB_14974c9a3;
  lVar8 = *(longlong *)(lVar8 + 0x98);
  if (0 < *(int *)(lVar8 + 0x50)) {
    lVar1 = param_1 + 0x1a0;
    local_b0 = 0xffffffff;
    local_a8 = 0;
    local_b8 = lVar1;
    lVar11 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar11 + 0x48) != 0) {
      local_f8[6] = 0;
      uStack_c0 = 0;
      local_f8[4] = 0;
      local_f8[5] = 0;
      local_f8[2] = 0;
      local_f8[3] = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_115 = *(undefined1 *)(param_1 + 0x1cc);
      local_116 = *(undefined1 *)(param_1 + 0x1cd);
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = param_1 + 0x1c8;
      uVar9 = FUN_146fb4872(param_1,&local_b8);
      puVar12 = (undefined4 *)FUN_14972a54c(uVar9,param_2,param_1 + 0x1c8);
      uVar3 = *puVar12;
      local_117 = *(undefined1 *)(param_1 + 0x1c4);
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = param_1 + 0x1c0;
      uVar9 = FUN_146fb4872(param_1,&local_b8);
      puVar12 = (undefined4 *)FUN_14972a54c(uVar9,param_2,param_1 + 0x1c0);
      uVar4 = *puVar12;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = param_1 + 0x1bc;
      uVar9 = FUN_146fb4872(param_1,&local_b8);
      puVar12 = (undefined4 *)FUN_146fca67a(uVar9,param_2,param_1 + 0x1bc);
      local_110 = *puVar12;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = param_1 + 0x1b8;
      uVar9 = FUN_146fb4872(param_1,&local_b8);
      puVar12 = (undefined4 *)FUN_14972a54c(uVar9,param_2,param_1 + 0x1b8);
      uVar5 = *puVar12;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = param_1 + 0x1b4;
      uVar9 = FUN_146fb4872(param_1,&local_b8);
      puVar12 = (undefined4 *)FUN_146fca67a(uVar9,param_2,param_1 + 0x1b4);
      local_114 = *puVar12;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = param_1 + 0x1b0;
      uVar9 = FUN_146fb4872(param_1,&local_b8);
      puVar12 = (undefined4 *)FUN_14972a54c(uVar9,param_2,param_1 + 0x1b0);
      uVar6 = *puVar12;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = lVar1;
      uVar9 = FUN_146fb4872(param_1,&local_b8);
      uVar9 = FUN_14972668e(uVar9,param_2,lVar1);
      local_128 = local_f8;
      local_130 = local_f8 + 2;
      local_138 = local_f8 + 4;
      local_140 = local_f8 + 6;
      local_148 = local_116;
      local_150 = local_115;
      local_160 = local_117;
      local_170 = local_110;
      local_178 = uVar5;
      local_168 = uVar4;
      local_158 = uVar3;
      FUN_14970d0fe(lVar8,uVar9,uVar6,local_114);
      iVar7 = (int)uStack_c0;
      uVar13 = uStack_c0 & 0xffffffff;
      local_108 = 0;
      uStack_100 = uStack_c0 & 0xffffffff;
      if (uVar13 != 0) {
        FUN_1403e3958(&local_108,0);
        if (0 < iVar7) {
          lVar8 = 0;
          do {
            puVar2 = (undefined4 *)(local_f8[6] + 0x20 + lVar8 * 4);
            uVar3 = puVar2[1];
            uVar4 = puVar2[2];
            uVar5 = puVar2[3];
            uVar9 = *(undefined8 *)(local_f8[6] + 0x30 + lVar8 * 4);
            puVar12 = (undefined4 *)(local_108 + lVar8);
            *puVar12 = *puVar2;
            puVar12[1] = uVar3;
            puVar12[2] = uVar4;
            puVar12[3] = uVar5;
            *(undefined8 *)(local_108 + 0x10 + lVar8) = uVar9;
            lVar8 = lVar8 + 0x18;
          } while (uVar13 * 0x18 != lVar8);
        }
      }
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = param_1 + 0x1d0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_1497bb956(lVar8,&local_108,param_2);
      }
      local_b8 = param_1 + 0x1e0;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_14972ac00(lVar8,local_f8 + 4,param_2);
      }
      local_b8 = param_1 + 0x1f0;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_14972b2b6(lVar8,local_f8 + 2,param_2);
      }
      local_b8 = param_1 + 0x200;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_1497bb956(lVar8,local_f8,param_2);
      }
      local_b8 = param_1 + 0x210;
      local_10c = (undefined4)uStack_100;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_149700500(lVar8,&local_10c,param_2);
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_f8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_f8[4] != 0) {
        FUN_1400020a8();
      }
      if (local_f8[6] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14974c9a3:
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974cfc8 FUN_14974cfc8 body=419 status=ok
// SIG undefined FUN_14974cfc8(void)

void FUN_14974cfc8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar4 = param_1 + 0x198;
  if (lVar2 == param_1 + 0x248) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ea9b2e(&local_2f0,uVar3);
    FUN_146eaac2a(&local_2f0,local_300);
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar1,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x248;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497a3594(lVar4,local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 == lVar4) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar4;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974d16c FUN_14974d16c body=227 status=ok
// SIG undefined FUN_14974d16c(void)

undefined8 FUN_14974d16c(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_14974d178;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_14974d178:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 14974d250 FUN_14974d250 body=419 status=ok
// SIG undefined FUN_14974d250(void)

void FUN_14974d250(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar4 = param_1 + 0x198;
  if (lVar2 == param_1 + 0x248) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ea9b2e(&local_2f0,uVar3);
    FUN_146eaac20(&local_2f0,local_300);
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar1,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x248;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497a3594(lVar4,local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 == lVar4) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar4;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974d3f4 FUN_14974d3f4 body=240 status=ok
// SIG undefined FUN_14974d3f4(void)

void FUN_14974d3f4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar3) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar3;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    uVar2 = FUN_14972af6e(uVar2,param_2,lVar3);
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a69486(&local_58,uVar2);
    FUN_142ac2d42(&local_58);
    local_68 = 0xffffffff;
    local_60 = 0;
    local_70 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a3594(lVar3,&local_58,param_2);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974d4e6 FUN_14974d4e6 body=572 status=ok
// SIG undefined FUN_14974d4e6(void)

void FUN_14974d4e6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  longlong local_328 [2];
  longlong local_318;
  undefined4 local_310;
  undefined8 local_308;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar7 = param_1 + 0x1a8;
  if (lVar3 == param_1 + 600) {
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = lVar7;
    uVar4 = FUN_146fb4872(param_1,&local_318);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar7);
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x19c;
    uVar5 = FUN_146fb4872(param_1,&local_318);
    puVar6 = (undefined4 *)FUN_14972a54c(uVar5,param_2,param_1 + 0x19c);
    uVar2 = *puVar6;
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x1a0;
    uVar5 = FUN_146fb4872(param_1,&local_318);
    puVar6 = (undefined4 *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a0);
    uVar1 = *puVar6;
    FUN_146ea9b2e(&local_318,uVar4);
    local_338 = uVar1;
    FUN_146eaac96(&local_318,local_328,*(undefined1 *)(param_1 + 0x198),uVar2);
    local_80 = 0;
    local_78 = 0x8000000000;
    uVar2 = FUN_1401f66f6(uVar4,DAT_14c9974a8);
    FUN_146fd579c(local_90,uVar2,0);
    FUN_146fd594e(local_90,local_328);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 600;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1497a3594(lVar7,local_90,param_2);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_328[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 == lVar7) {
      local_310 = 0xffffffff;
      local_308 = 0;
      local_318 = lVar7;
      FUN_14971c3b4(param_1,param_2,&local_318,lVar7);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974d724 FUN_14974d724 body=419 status=ok
// SIG undefined FUN_14974d724(void)

void FUN_14974d724(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar4 = param_1 + 0x198;
  if (lVar2 == param_1 + 0x248) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ea9b2e(&local_2f0,uVar3);
    FUN_146eaab9c(&local_2f0,local_300);
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar1,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x248;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497a3594(lVar4,local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 == lVar4) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar4;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974d8c8 FUN_14974d8c8 body=445 status=ok
// SIG undefined FUN_14974d8c8(void)

void FUN_14974d8c8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar3 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar1 = param_1 + 0x1b8;
  if (lVar2 == lVar3) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar1;
    uVar4 = FUN_146fb4872(param_1,&local_2f0);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar1);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    uVar5 = FUN_146fb4872(param_1,&local_2f0);
    uVar5 = FUN_14972af6e(uVar5,param_2,lVar3);
    local_58 = 0;
    uStack_50 = 0;
    FUN_144a69486(local_68,uVar5);
    FUN_146ea9b2e(&local_2f0,uVar4);
    FUN_146fd58e4(local_68,local_300);
    FUN_146eab3e0(&local_2f0,local_300);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a3594(lVar3,local_68,param_2);
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 == lVar1) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar1;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974da86 FUN_14974da86 body=446 status=ok
// SIG undefined FUN_14974da86(void)

void FUN_14974da86(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar6) {
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar6;
    uVar4 = FUN_146fb4872(param_1,&local_80);
    uVar4 = FUN_14972af6e(uVar4,param_2,lVar6);
    local_70 = 0;
    uStack_68 = 0;
    FUN_144a69486(&local_80,uVar4);
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1b8;
    uVar4 = FUN_146fb4872(param_1,&local_98);
    puVar5 = (undefined4 *)FUN_146fca67a(uVar4,param_2,param_1 + 0x1b8);
    uVar2 = *puVar5;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1c0;
    uVar4 = FUN_146fb4872(param_1,&local_98);
    puVar5 = (undefined4 *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1c0);
    uVar1 = *puVar5;
    FUN_146fd58e4(&local_80,local_a8);
    FUN_146eabd3e(local_a8,uVar2,*(undefined1 *)(param_1 + 0x1bc),uVar1);
    FUN_146fd594e(&local_80,local_a8);
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar6;
    lVar6 = FUN_146fb78aa(param_1,&local_98);
    if (lVar6 != 0) {
      FUN_1497a3594(lVar6,&local_80,param_2);
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974dc46 FUN_14974dc46 body=445 status=ok
// SIG undefined FUN_14974dc46(void)

void FUN_14974dc46(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar3 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar1 = param_1 + 0x1b8;
  if (lVar2 == lVar3) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar1;
    uVar4 = FUN_146fb4872(param_1,&local_2f0);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar1);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    uVar5 = FUN_146fb4872(param_1,&local_2f0);
    uVar5 = FUN_14972af6e(uVar5,param_2,lVar3);
    local_58 = 0;
    uStack_50 = 0;
    FUN_144a69486(local_68,uVar5);
    FUN_146ea9b2e(&local_2f0,uVar4);
    FUN_146fd58e4(local_68,local_300);
    FUN_146eab552(&local_2f0,local_300);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a3594(lVar3,local_68,param_2);
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 == lVar1) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar1;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974de04 FUN_14974de04 body=445 status=ok
// SIG undefined FUN_14974de04(void)

void FUN_14974de04(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar3 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar1 = param_1 + 0x1b8;
  if (lVar2 == lVar3) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar1;
    uVar4 = FUN_146fb4872(param_1,&local_2f0);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar1);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    uVar5 = FUN_146fb4872(param_1,&local_2f0);
    uVar5 = FUN_14972af6e(uVar5,param_2,lVar3);
    local_58 = 0;
    uStack_50 = 0;
    FUN_144a69486(local_68,uVar5);
    FUN_146ea9b2e(&local_2f0,uVar4);
    FUN_146fd58e4(local_68,local_300);
    FUN_146eab868(&local_2f0,local_300);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a3594(lVar3,local_68,param_2);
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 == lVar1) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar1;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974dfc2 FUN_14974dfc2 body=445 status=ok
// SIG undefined FUN_14974dfc2(void)

void FUN_14974dfc2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar3 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar1 = param_1 + 0x1b8;
  if (lVar2 == lVar3) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar1;
    uVar4 = FUN_146fb4872(param_1,&local_2f0);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar1);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    uVar5 = FUN_146fb4872(param_1,&local_2f0);
    uVar5 = FUN_14972af6e(uVar5,param_2,lVar3);
    local_58 = 0;
    uStack_50 = 0;
    FUN_144a69486(local_68,uVar5);
    FUN_146ea9b2e(&local_2f0,uVar4);
    FUN_146fd58e4(local_68,local_300);
    FUN_146eabb86(&local_2f0,local_300);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a3594(lVar3,local_68,param_2);
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 == lVar1) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar1;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974e180 FUN_14974e180 body=494 status=ok
// SIG undefined FUN_14974e180(void)

void FUN_14974e180(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar6 = param_1 + 0x198;
  if (lVar2 == param_1 + 0x250) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar6;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar6);
    FUN_146ea9b2e(&local_2f0,uVar3);
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x248;
    uVar4 = FUN_146fb4872(param_1,&local_68);
    puVar5 = (undefined4 *)FUN_146fca67a(uVar4,param_2,param_1 + 0x248);
    FUN_146eaa178(&local_2f0,local_300,*puVar5,*(undefined1 *)(param_1 + 0x24c));
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    FUN_146fd579c(&local_68,uVar1,0);
    FUN_146fd594e(&local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x250;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1497a3594(lVar6,&local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 == lVar6) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar6;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974e370 FUN_14974e370 body=452 status=ok
// SIG undefined FUN_14974e370(void)

void FUN_14974e370(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar3 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar1 = param_1 + 0x1b8;
  if (lVar2 == lVar3) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar1;
    uVar4 = FUN_146fb4872(param_1,&local_2f0);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar1);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    uVar5 = FUN_146fb4872(param_1,&local_2f0);
    uVar5 = FUN_14972af6e(uVar5,param_2,lVar3);
    local_58 = 0;
    uStack_50 = 0;
    FUN_144a69486(local_68,uVar5);
    FUN_146ea9b2e(&local_2f0,uVar4);
    FUN_146fd58e4(local_68,local_300);
    FUN_146eaafdc(&local_2f0,local_300,*(undefined1 *)(param_1 + 0x268));
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1497a3594(lVar3,local_68,param_2);
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 == lVar1) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar1;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974e536 FUN_14974e536 body=419 status=ok
// SIG undefined FUN_14974e536(void)

void FUN_14974e536(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar4 = param_1 + 0x198;
  if (lVar2 == param_1 + 0x248) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ea9b2e(&local_2f0,uVar3);
    FUN_146eaad94(&local_2f0,local_300);
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar1,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x248;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497a3594(lVar4,local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 == lVar4) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar4;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974e6da FUN_14974e6da body=419 status=ok
// SIG undefined FUN_14974e6da(void)

void FUN_14974e6da(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar4 = param_1 + 0x198;
  if (lVar2 == param_1 + 0x248) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ea9b2e(&local_2f0,uVar3);
    FUN_146eaad94(&local_2f0,local_300);
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar1,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x248;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497a3594(lVar4,local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 == lVar4) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar4;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974e87e FUN_14974e87e body=419 status=ok
// SIG undefined FUN_14974e87e(void)

void FUN_14974e87e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar4 = param_1 + 0x198;
  if (lVar2 == param_1 + 0x248) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ea9b2e(&local_2f0,uVar3);
    FUN_146eaaeb8(&local_2f0,local_300);
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar1,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x248;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497a3594(lVar4,local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 == lVar4) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar4;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974ea22 FUN_14974ea22 body=597 status=ok
// SIG undefined FUN_14974ea22(void)

void FUN_14974ea22(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined1 local_340;
  undefined1 local_338;
  longlong local_328 [2];
  longlong local_318;
  undefined4 local_310;
  undefined8 local_308;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar8 = param_1 + 0x198;
  if (lVar4 == param_1 + 600) {
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = lVar8;
    uVar5 = FUN_146fb4872(param_1,&local_318);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar8);
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x248;
    uVar6 = FUN_146fb4872(param_1,&local_318);
    puVar7 = (undefined4 *)FUN_14972a54c(uVar6,param_2,param_1 + 0x248);
    uVar3 = *puVar7;
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x24c;
    uVar6 = FUN_146fb4872(param_1,&local_318);
    puVar7 = (undefined4 *)FUN_14972a54c(uVar6,param_2,param_1 + 0x24c);
    uVar1 = *puVar7;
    cVar2 = *(char *)(param_1 + 0x250);
    FUN_146ea9b2e(&local_318,uVar5);
    local_348 = *(undefined1 *)(param_1 + 0x251);
    local_338 = *(undefined1 *)(param_1 + 0x252);
    local_340 = cVar2 == '\0';
    FUN_146eabf1e(&local_318,local_328,uVar3,uVar1);
    local_80 = 0;
    local_78 = 0x8000000000;
    uVar3 = FUN_1401f66f6(uVar5,DAT_14c9974a8);
    FUN_146fd579c(local_90,uVar3,0);
    FUN_146fd594e(local_90,local_328);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 600;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_1497a3594(lVar8,local_90,param_2);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_328[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar4 == lVar8) {
      local_310 = 0xffffffff;
      local_308 = 0;
      local_318 = lVar8;
      FUN_14971c3b4(param_1,param_2,&local_318,lVar8);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974ec78 FUN_14974ec78 body=587 status=ok
// SIG undefined FUN_14974ec78(void)

void FUN_14974ec78(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_358 [32];
  undefined1 local_338;
  undefined1 local_330;
  longlong local_328 [2];
  longlong local_318;
  undefined4 local_310;
  undefined8 local_308;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar8 = param_1 + 0x198;
  if (lVar4 == param_1 + 600) {
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = lVar8;
    uVar5 = FUN_146fb4872(param_1,&local_318);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar8);
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x248;
    uVar6 = FUN_146fb4872(param_1,&local_318);
    puVar7 = (undefined4 *)FUN_14972a54c(uVar6,param_2,param_1 + 0x248);
    uVar3 = *puVar7;
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x24c;
    uVar6 = FUN_146fb4872(param_1,&local_318);
    puVar7 = (undefined4 *)FUN_14972a54c(uVar6,param_2,param_1 + 0x24c);
    uVar1 = *puVar7;
    cVar2 = *(char *)(param_1 + 0x250);
    FUN_146ea9b2e(&local_318,uVar5);
    local_338 = *(undefined1 *)(param_1 + 0x251);
    local_330 = cVar2 == '\0';
    FUN_146eac0d2(&local_318,local_328,uVar3,uVar1);
    local_80 = 0;
    local_78 = 0x8000000000;
    uVar3 = FUN_1401f66f6(uVar5,DAT_14c9974a8);
    FUN_146fd579c(local_90,uVar3,0);
    FUN_146fd594e(local_90,local_328);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 600;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_1497a3594(lVar8,local_90,param_2);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_328[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar4 == lVar8) {
      local_310 = 0xffffffff;
      local_308 = 0;
      local_318 = lVar8;
      FUN_14971c3b4(param_1,param_2,&local_318,lVar8);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974eec4 FUN_14974eec4 body=667 status=ok
// SIG undefined FUN_14974eec4(void)

void FUN_14974eec4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_338 [32];
  undefined1 local_318;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar1 = param_1 + 0x198;
  if (lVar4 != param_1 + 0x2e8) {
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar4 == lVar1) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar1;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar1);
    }
    goto LAB_14974ef20;
  }
  local_2e8 = 0xffffffff;
  local_2e0 = 0;
  local_2f0 = lVar1;
  uVar5 = FUN_146fb4872(param_1,&local_2f0);
  uVar5 = FUN_1496fcf74(uVar5,param_2,lVar1);
  local_2e8 = 0xffffffff;
  local_2e0 = 0;
  local_2f0 = param_1 + 0x248;
  uVar6 = FUN_146fb4872(param_1,&local_2f0);
  uVar6 = FUN_14979f15e(uVar6,param_2,param_1 + 0x248);
  local_2e8 = 0xffffffff;
  local_2e0 = 0;
  local_2f0 = param_1 + 0x280;
  uVar7 = FUN_146fb4872(param_1,&local_2f0);
  uVar7 = FUN_14979f482(uVar7,param_2,param_1 + 0x280);
  FUN_146ea9b2e(&local_2f0,uVar5);
  local_308 = 0;
  uStack_300 = 0;
  cVar2 = *(char *)(param_1 + 0x2e0);
  if (cVar2 == '\x02') {
    FUN_146eac8e2(&local_2f0,&local_68,uVar6,uVar7);
LAB_14974f0a8:
    local_308 = local_68;
    uStack_300 = local_60;
  }
  else {
    if (cVar2 == '\x01') {
      FUN_146eacd74(&local_2f0,&local_68,uVar6,uVar7);
      goto LAB_14974f0a8;
    }
    if (cVar2 == '\0') {
      local_318 = *(undefined1 *)(param_1 + 0x2e1);
      FUN_146eac3fe(&local_2f0,&local_68,uVar6,uVar7);
      goto LAB_14974f0a8;
    }
  }
  lVar1 = local_308;
  local_58 = 0;
  local_50 = 0x8000000000;
  uVar3 = FUN_1401f66f6(uVar5,DAT_14c9974a8);
  FUN_146fd579c(&local_68,uVar3,0);
  FUN_146fd594e(&local_68,&local_308);
  local_78 = 0xffffffff;
  local_70 = 0;
  local_80 = param_1 + 0x2e8;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_1497a3594(lVar4,&local_68,param_2);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
LAB_14974ef20:
  if ((local_48 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974f160 FUN_14974f160 body=667 status=ok
// SIG undefined FUN_14974f160(void)

void FUN_14974f160(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_338 [32];
  undefined1 local_318;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar1 = param_1 + 0x198;
  if (lVar4 != param_1 + 0x2d8) {
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar4 == lVar1) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar1;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar1);
    }
    goto LAB_14974f1bc;
  }
  local_2e8 = 0xffffffff;
  local_2e0 = 0;
  local_2f0 = lVar1;
  uVar5 = FUN_146fb4872(param_1,&local_2f0);
  uVar5 = FUN_1496fcf74(uVar5,param_2,lVar1);
  local_2e8 = 0xffffffff;
  local_2e0 = 0;
  local_2f0 = param_1 + 0x248;
  uVar6 = FUN_146fb4872(param_1,&local_2f0);
  uVar6 = FUN_14979ee4a(uVar6,param_2,param_1 + 0x248);
  local_2e8 = 0xffffffff;
  local_2e0 = 0;
  local_2f0 = param_1 + 0x270;
  uVar7 = FUN_146fb4872(param_1,&local_2f0);
  uVar7 = FUN_14979f482(uVar7,param_2,param_1 + 0x270);
  FUN_146ea9b2e(&local_2f0,uVar5);
  local_308 = 0;
  uStack_300 = 0;
  cVar2 = *(char *)(param_1 + 0x2d0);
  if (cVar2 == '\x02') {
    FUN_146ead82e(&local_2f0,&local_68,uVar6,uVar7);
LAB_14974f344:
    local_308 = local_68;
    uStack_300 = local_60;
  }
  else {
    if (cVar2 == '\x01') {
      FUN_146eadc8c(&local_2f0,&local_68,uVar6,uVar7);
      goto LAB_14974f344;
    }
    if (cVar2 == '\0') {
      local_318 = *(undefined1 *)(param_1 + 0x2d1);
      FUN_146ead364(&local_2f0,&local_68,uVar6,uVar7);
      goto LAB_14974f344;
    }
  }
  lVar1 = local_308;
  local_58 = 0;
  local_50 = 0x8000000000;
  uVar3 = FUN_1401f66f6(uVar5,DAT_14c9974a8);
  FUN_146fd579c(&local_68,uVar3,0);
  FUN_146fd594e(&local_68,&local_308);
  local_78 = 0xffffffff;
  local_70 = 0;
  local_80 = param_1 + 0x2d8;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_1497a3594(lVar4,&local_68,param_2);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
LAB_14974f1bc:
  if ((local_48 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974f3fc FUN_14974f3fc body=789 status=ok
// SIG undefined FUN_14974f3fc(void)

void FUN_14974f3fc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_398 [32];
  undefined4 local_378;
  undefined4 local_370;
  undefined1 local_368;
  undefined1 local_360;
  undefined8 local_350;
  void *local_348;
  int local_340;
  undefined4 local_33c;
  void *local_338;
  int local_330;
  undefined4 local_32c;
  longlong local_328 [2];
  longlong local_318;
  undefined4 local_310;
  undefined8 local_308;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_398;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar10 = param_1 + 0x198;
  if (lVar6 == param_1 + 0x278) {
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = lVar10;
    uVar7 = FUN_146fb4872(param_1,&local_318);
    uVar7 = FUN_1496fcf74(uVar7,param_2,lVar10);
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x268;
    uVar8 = FUN_146fb4872(param_1,&local_318);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x268);
    uVar5 = *puVar9;
    local_310 = 0xffffffff;
    local_308 = 0;
    local_318 = param_1 + 0x26c;
    uVar8 = FUN_146fb4872(param_1,&local_318);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x26c);
    uVar1 = *puVar9;
    cVar2 = *(char *)(param_1 + 0x270);
    local_350 = uVar7;
    FUN_146ea9b2e(&local_318,uVar7);
    uVar3 = *(undefined1 *)(param_1 + 0x271);
    local_338 = (void *)0x0;
    local_330 = *(int *)(param_1 + 0x260);
    lVar10 = (longlong)local_330;
    pvVar4 = *(void **)(param_1 + 600);
    if (lVar10 == 0) {
      local_32c = 0;
    }
    else {
      FUN_1446dd670(&local_338,local_330,0);
      memcpy(local_338,pvVar4,lVar10 * 2);
    }
    local_348 = (void *)0x0;
    local_340 = *(int *)(param_1 + 0x250);
    lVar10 = (longlong)local_340;
    pvVar4 = *(void **)(param_1 + 0x248);
    if (lVar10 == 0) {
      local_33c = 0;
    }
    else {
      FUN_1446dd670(&local_348,local_340,0);
      memcpy(local_348,pvVar4,lVar10 * 2);
    }
    local_360 = cVar2 == '\0';
    local_378 = uVar5;
    local_370 = uVar1;
    local_368 = uVar3;
    FUN_146eae146(&local_318,local_328,&local_348,&local_338);
    local_80 = 0;
    local_78 = 0x8000000000;
    uVar5 = FUN_1401f66f6(local_350,DAT_14c9974a8);
    FUN_146fd579c(local_90,uVar5,0);
    FUN_146fd594e(local_90,local_328);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = param_1 + 0x278;
    lVar10 = FUN_146fb78aa(param_1);
    if (lVar10 != 0) {
      FUN_1497a3594(lVar10,local_90,param_2);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_328[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar6 == lVar10) {
      local_310 = 0xffffffff;
      local_308 = 0;
      local_318 = lVar10;
      FUN_14971c3b4(param_1,param_2,&local_318,lVar10);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974f712 FUN_14974f712 body=507 status=ok
// SIG undefined FUN_14974f712(void)

void FUN_14974f712(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  ulonglong uVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  float *local_80;
  longlong local_78;
  undefined8 uStack_70;
  float *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pfVar8 = (float *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pfVar8 == (float *)(param_1 + 0x1b8)) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_80 = (float *)(param_1 + 0x1b8);
    local_60 = (float *)(param_1 + 0x198);
    uVar9 = FUN_146fb4872(param_1,&local_60);
    plVar10 = (longlong *)FUN_14972668e(uVar9,param_2,(float *)(param_1 + 0x198));
    pfVar8 = (float *)(param_1 + 0x1a8);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = pfVar8;
    uVar9 = FUN_146fb4872(param_1,&local_60);
    FUN_14972a54c(uVar9,param_2,pfVar8);
    pfVar2 = (float *)(param_1 + 0x1ac);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = pfVar2;
    uVar9 = FUN_146fb4872(param_1,&local_60);
    local_88 = param_2;
    FUN_14972a54c(uVar9,param_2,pfVar2);
    cVar5 = *(char *)(param_1 + 0x1b0);
    local_78 = 0;
    uStack_70 = 0;
    iVar7 = (int)plVar10[1];
    if (0 < iVar7) {
      lVar11 = 0;
      do {
        uVar6 = uStack_70;
        fVar3 = *(float *)(*plVar10 + lVar11 * 4);
        fVar4 = *pfVar8;
        if (cVar5 == '\0') {
          if ((fVar3 <= fVar4) || (*pfVar2 <= fVar3)) goto LAB_14974f89f;
LAB_14974f857:
          iVar7 = (int)uStack_70;
          uVar1 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
          if (uStack_70._4_4_ < uVar1) {
            FUN_1446f48e2(&local_78,uVar6 & 0xffffffff);
          }
          *(int *)(local_78 + (longlong)iVar7 * 4) = (int)lVar11;
          iVar7 = (int)plVar10[1];
        }
        else {
          if ((fVar3 < fVar4) || (*pfVar2 <= fVar3 && fVar3 != *pfVar2)) goto LAB_14974f857;
LAB_14974f89f:
          if (*(char *)(param_1 + 0x1b1) == '\x01') {
            if ((fVar3 != fVar4) || (NAN(fVar3) || NAN(fVar4))) {
              if ((fVar3 != *pfVar2) || (NAN(fVar3) || NAN(*pfVar2))) goto LAB_14974f883;
            }
            goto LAB_14974f857;
          }
        }
LAB_14974f883:
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar7);
    }
    local_60 = local_80;
    local_58 = 0xffffffff;
    local_50 = 0;
    lVar11 = FUN_146fb78aa(param_1);
    if (lVar11 != 0) {
      FUN_1496f8d2a(lVar11,&local_78,local_88);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14974f90e FUN_14974f90e body=772 status=ok
// SIG undefined FUN_14974f90e(void)

void FUN_14974f90e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  undefined4 local_350;
  undefined1 local_348;
  undefined1 local_340;
  char local_331;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  void *local_320;
  int local_318;
  undefined4 local_314;
  void *local_310;
  int local_308;
  undefined4 local_304;
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar8 = param_1 + 0x198;
  if (lVar4 == param_1 + 0x278) {
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar8;
    uVar5 = FUN_146fb4872(param_1,&local_2f0);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar8);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = param_1 + 0x268;
    uVar6 = FUN_146fb4872(param_1,&local_2f0);
    puVar7 = (undefined4 *)FUN_146fca67a(uVar6,param_2,param_1 + 0x268);
    local_32c = *puVar7;
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = param_1 + 0x26c;
    uVar6 = FUN_146fb4872(param_1,&local_2f0);
    puVar7 = (undefined4 *)FUN_146fca67a(uVar6,param_2,param_1 + 0x26c);
    local_330 = *puVar7;
    local_331 = *(char *)(param_1 + 0x270);
    local_328 = uVar5;
    FUN_146ea9b2e(&local_2f0,uVar5);
    uVar1 = *(undefined1 *)(param_1 + 0x271);
    local_310 = (void *)0x0;
    local_308 = *(int *)(param_1 + 0x260);
    lVar8 = (longlong)local_308;
    pvVar2 = *(void **)(param_1 + 600);
    if (lVar8 == 0) {
      local_304 = 0;
    }
    else {
      FUN_1446dd670(&local_310,local_308,0);
      memcpy(local_310,pvVar2,lVar8 * 2);
    }
    local_320 = (void *)0x0;
    local_318 = *(int *)(param_1 + 0x250);
    lVar8 = (longlong)local_318;
    pvVar2 = *(void **)(param_1 + 0x248);
    if (lVar8 == 0) {
      local_314 = 0;
    }
    else {
      FUN_1446dd670(&local_320,local_318,0);
      memcpy(local_320,pvVar2,lVar8 * 2);
    }
    local_340 = local_331 == '\0';
    local_350 = local_330;
    local_358 = local_32c;
    local_348 = uVar1;
    FUN_146eae2e8(&local_2f0,local_300,&local_320,&local_310);
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar3 = FUN_1401f66f6(local_328,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar3,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x278;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_1497a3594(lVar8,local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar4 == lVar8) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar8;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14974fc14 FUN_14974fc14 body=2256 status=ok
// SIG undefined FUN_14974fc14(void)

void FUN_14974fc14(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_328 [40];
  longlong local_300 [2];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar6 = param_1 + 0x248;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar6) {
    lVar3 = param_1 + 0x288;
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    lVar5 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar5 + 0x48) == 0) {
      lVar3 = param_1 + 0x268;
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar3;
      lVar5 = FUN_146fb4872(param_1);
      if (*(longlong *)(lVar5 + 0x48) == 0) {
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = lVar6;
        FUN_1497504e6(param_1,param_2,&local_2f0,lVar6);
        goto LAB_14974fca5;
      }
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = param_1 + 0x198;
      uVar7 = FUN_146fb4872(param_1,&local_2f0);
      uVar8 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar3;
      uVar7 = FUN_146fb4872(param_1,&local_2f0);
      uVar7 = FUN_14979bc16(uVar7,param_2,lVar3);
      FUN_146ea9b2e(&local_2f0,uVar8);
      uVar1 = *(undefined1 *)(param_1 + 0x2a8);
      FUN_146fd58e4(uVar7,local_68);
      FUN_146eae550(&local_2f0,local_300,local_68,CONCAT71(0xffffff,uVar1));
    }
    else {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = param_1 + 0x198;
      uVar7 = FUN_146fb4872(param_1,&local_2f0);
      uVar8 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar3;
      uVar7 = FUN_146fb4872(param_1,&local_2f0);
      uVar7 = FUN_14972a204(uVar7,param_2,lVar3);
      FUN_146ea9b2e(&local_2f0,uVar8);
      uVar1 = *(undefined1 *)(param_1 + 0x2a8);
      FUN_146fd58e4(uVar7,local_68);
      FUN_146eae48c(&local_2f0,local_300,local_68,CONCAT71(0xffffff,uVar1));
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    local_50 = 0x8000000000;
    uVar2 = FUN_1401f66f6(uVar8,DAT_14c9974a8);
    FUN_146fd579c(local_68,uVar2,0);
    FUN_146fd594e(local_68,local_300);
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1497a3594(lVar6,local_68,param_2);
    }
  }
  else {
    lVar3 = param_1 + 0x268;
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar5 = param_1 + 0x288;
    if (lVar4 == lVar3) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar5;
      lVar4 = FUN_146fb4872(param_1);
      if (*(longlong *)(lVar4 + 0x48) == 0) {
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = lVar6;
        lVar5 = FUN_146fb4872(param_1);
        if (*(longlong *)(lVar5 + 0x48) == 0) {
          local_2e8 = 0xffffffff;
          local_2e0 = 0;
          local_2f0 = lVar3;
          FUN_1497505ae(param_1,param_2,&local_2f0,lVar3);
          goto LAB_14974fca5;
        }
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = param_1 + 0x198;
        uVar7 = FUN_146fb4872(param_1,&local_2f0);
        uVar7 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = lVar6;
        uVar8 = FUN_146fb4872(param_1,&local_2f0);
        uVar8 = FUN_14972af6e(uVar8,param_2,lVar6);
        FUN_146ea9b2e(&local_2f0,uVar7);
        FUN_146fd58e4(uVar8,local_68);
        FUN_146eae7c6(&local_2f0,local_300,local_68);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        local_58 = 0;
        local_50 = 0x8000000000;
        uVar2 = FUN_1401f66f6(uVar7,DAT_14c996ae8);
        FUN_146fd579c(local_68,uVar2,0);
      }
      else {
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = param_1 + 0x198;
        uVar7 = FUN_146fb4872(param_1,&local_2f0);
        uVar7 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = lVar5;
        uVar8 = FUN_146fb4872(param_1,&local_2f0);
        uVar8 = FUN_14972a204(uVar8,param_2,lVar5);
        FUN_146ea9b2e(&local_2f0,uVar7);
        uVar1 = *(undefined1 *)(param_1 + 0x2a8);
        FUN_146fd58e4(uVar8,local_68);
        FUN_146eae614(&local_2f0,local_300,local_68,CONCAT71(0xffffff,uVar1));
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        local_58 = 0;
        local_50 = 0x8000000000;
        uVar2 = FUN_1401f66f6(uVar7,DAT_14c996ae8);
        FUN_146fd579c(local_68,uVar2,0);
      }
      FUN_146fd594e(local_68,local_300);
      local_78 = 0xffffffff;
      local_70 = 0;
      local_80 = lVar3;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_149729c6c(lVar6,local_68,param_2);
      }
    }
    else {
      lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar4 != lVar5) {
        lVar6 = param_1 + 0x198;
        lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
        if (lVar3 == lVar6) {
          local_2e8 = 0xffffffff;
          local_2e0 = 0;
          local_2f0 = lVar6;
          FUN_14971c3b4(param_1,param_2,&local_2f0,lVar6);
        }
        goto LAB_14974fca5;
      }
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar3;
      lVar4 = FUN_146fb4872(param_1);
      if (*(longlong *)(lVar4 + 0x48) == 0) {
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = lVar6;
        lVar3 = FUN_146fb4872(param_1);
        if (*(longlong *)(lVar3 + 0x48) == 0) {
          local_2e8 = 0xffffffff;
          local_2e0 = 0;
          local_2f0 = lVar5;
          FUN_149750676(param_1,param_2,&local_2f0,lVar5);
          goto LAB_14974fca5;
        }
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = param_1 + 0x198;
        uVar7 = FUN_146fb4872(param_1,&local_2f0);
        uVar7 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = lVar6;
        uVar8 = FUN_146fb4872(param_1,&local_2f0);
        uVar8 = FUN_14972af6e(uVar8,param_2,lVar6);
        FUN_146ea9b2e(&local_2f0,uVar7);
        FUN_146fd58e4(uVar8,local_68);
        FUN_146eae934(&local_2f0,local_300,local_68);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        local_58 = 0;
        local_50 = 0x8000000000;
        uVar2 = FUN_1401f66f6(uVar7,DAT_14c996ae0);
        FUN_146fd579c(local_68,uVar2,0);
      }
      else {
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = param_1 + 0x198;
        uVar7 = FUN_146fb4872(param_1,&local_2f0);
        uVar7 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        local_2f0 = lVar3;
        uVar8 = FUN_146fb4872(param_1,&local_2f0);
        uVar8 = FUN_14979bc16(uVar8,param_2,lVar3);
        FUN_146ea9b2e(&local_2f0,uVar7);
        FUN_146fd58e4(uVar8,local_68);
        FUN_146eae8a2(&local_2f0,local_300,local_68);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        local_58 = 0;
        local_50 = 0x8000000000;
        uVar2 = FUN_1401f66f6(uVar7,DAT_14c996ae0);
        FUN_146fd579c(local_68,uVar2,0);
      }
      FUN_146fd594e(local_68,local_300);
      local_78 = 0xffffffff;
      local_70 = 0;
      local_80 = lVar5;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_149729f38(lVar6,local_68,param_2);
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
LAB_14974fca5:
  if ((local_48 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497504e6 FUN_1497504e6 body=176 status=ok
// SIG undefined FUN_1497504e6(void)

void FUN_1497504e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_146fb4872(param_1,param_3);
  local_40 = param_4;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    local_38 = 0xffffffff;
    local_30 = 0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  else {
    local_38 = 0xffffffff;
    local_30 = 0;
    FUN_146fb3a70(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497505ae FUN_1497505ae body=176 status=ok
// SIG undefined FUN_1497505ae(void)

void FUN_1497505ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_146fb4872(param_1,param_3);
  local_40 = param_4;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    local_38 = 0xffffffff;
    local_30 = 0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  else {
    local_38 = 0xffffffff;
    local_30 = 0;
    FUN_146fb3a70(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149750676 FUN_149750676 body=176 status=ok
// SIG undefined FUN_149750676(void)

void FUN_149750676(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_146fb4872(param_1,param_3);
  local_40 = param_4;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    local_38 = 0xffffffff;
    local_30 = 0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  else {
    local_38 = 0xffffffff;
    local_30 = 0;
    FUN_146fb3a70(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975073e FUN_14975073e body=240 status=ok
// SIG undefined FUN_14975073e(void)

void FUN_14975073e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar3) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar3;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    uVar2 = FUN_14979bc16(uVar2,param_2,lVar3);
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a69486(&local_58,uVar2);
    FUN_142ac2d42(&local_58);
    local_68 = 0xffffffff;
    local_60 = 0;
    local_70 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_149729c6c(lVar3,&local_58,param_2);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149750830 FUN_149750830 body=446 status=ok
// SIG undefined FUN_149750830(void)

void FUN_149750830(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar6) {
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar6;
    uVar4 = FUN_146fb4872(param_1,&local_80);
    uVar4 = FUN_14972a204(uVar4,param_2,lVar6);
    local_70 = 0;
    uStack_68 = 0;
    FUN_144a69486(&local_80,uVar4);
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1b8;
    uVar4 = FUN_146fb4872(param_1,&local_98);
    puVar5 = (undefined4 *)FUN_146fca67a(uVar4,param_2,param_1 + 0x1b8);
    uVar2 = *puVar5;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x1c0;
    uVar4 = FUN_146fb4872(param_1,&local_98);
    puVar5 = (undefined4 *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1c0);
    uVar1 = *puVar5;
    FUN_146fd58e4(&local_80,local_a8);
    FUN_146eabd3e(local_a8,uVar2,*(undefined1 *)(param_1 + 0x1bc),uVar1);
    FUN_146fd594e(&local_80,local_a8);
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar6;
    lVar6 = FUN_146fb78aa(param_1,&local_98);
    if (lVar6 != 0) {
      FUN_149729f38(lVar6,&local_80,param_2);
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497509f0 FUN_1497509f0 body=4172 status=ok
// SIG undefined FUN_1497509f0(void)

void FUN_1497509f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  float *pfVar2;
  void *_Src;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  sbyte sVar13;
  uint uVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ushort uVar19;
  int iVar20;
  uint uVar21;
  ushort uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  bool bVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  wchar_t *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  int local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar12 = param_1 + 0x298;
  lVar9 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((((lVar9 != lVar12) &&
       (lVar9 = (**(code **)(*param_3 + 0x20))(param_3), lVar9 != param_1 + 0x2b8)) &&
      (lVar9 = (**(code **)(*param_3 + 0x20))(param_3), lVar9 != param_1 + 0x2d8)) &&
     ((lVar9 = (**(code **)(*param_3 + 0x20))(param_3), lVar9 != param_1 + 0x2f8 &&
      (lVar9 = (**(code **)(*param_3 + 0x20))(param_3), lVar9 != param_1 + 0x318)))) {
    lVar12 = param_1 + 0x198;
    lVar9 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar9 == lVar12) {
      local_d8 = -1;
      local_d0 = 0;
      local_e0 = lVar12;
      FUN_14971c3b4(param_1,param_2,&local_e0,lVar12);
    }
    goto LAB_149750ab0;
  }
  local_d8 = 0xffffffff;
  iVar20 = 0;
  local_d0 = 0;
  local_e0 = param_1 + 0x198;
  uVar10 = FUN_146fb4872(param_1,&local_e0);
  lVar11 = FUN_1496fcf74(uVar10,param_2,param_1 + 0x198);
  lVar9 = param_1 + 0x248;
  local_d8 = -1;
  local_d0 = 0;
  local_e0 = lVar9;
  uVar10 = FUN_146fb4872(param_1,&local_e0);
  local_128 = param_2;
  uVar10 = FUN_1496fdb42(uVar10,param_2,lVar9);
  FUN_1496f87b2(&local_e0,uVar10);
  FUN_149751a3d(&local_e8,*(undefined1 *)(param_1 + 0x268));
  iVar8 = *(int *)(param_1 + 0x278) + -1;
  if (*(int *)(param_1 + 0x278) == 0) {
    iVar8 = iVar20;
  }
  FUN_1446f82e2(&local_88,iVar8,*(undefined8 *)(param_1 + 0x270),1);
  lVar25 = local_88;
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  local_78 = (longlong *)0x0;
  local_88 = lVar9;
  lVar9 = FUN_146fb4872(param_1,&local_88);
  if (*(longlong *)(lVar9 + 0x48) != 0) {
    iVar8 = local_c8 + -1;
    if (local_c8 == 0) {
      iVar8 = iVar20;
    }
    FUN_1446f82e2(&local_88,iVar8,local_d0,1);
    local_e8 = local_88;
    iVar8 = local_d8 + -1;
    if (local_d8 == 0) {
      iVar8 = iVar20;
    }
    FUN_1446f82e2(&local_88,iVar8,local_e0,1);
    lVar25 = local_88;
  }
  uVar10 = local_128;
  if (*(int *)(lVar11 + 0x60) != *(int *)(lVar11 + 0x8c)) {
    uVar7 = (uint)((ulonglong)local_e8 >> 0x10);
    uVar14 = (uint)local_e8 & 0xffff;
    lVar9 = lVar11 + 0x90;
    if (*(longlong *)(lVar11 + 0x98) != 0) {
      lVar9 = *(longlong *)(lVar11 + 0x98);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(lVar11 + 0xa0) - 1U &
                             (int)((ulonglong)local_e8 >> 0x20) + ((uint)local_e8 << 0x10 | uVar14)
                             + (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0x58) + (longlong)iVar8 * 0x14) == local_e8) {
          cVar3 = FUN_140498cd4(lVar11,lVar25);
          if (cVar3 != '\0') {
            uVar6 = FUN_1401f66f6(lVar11,local_e8);
            local_78 = (longlong *)0x0;
            uStack_70 = 0x8000000000;
            FUN_146fd579c(&local_88,uVar6,0);
            cVar3 = *(char *)(param_1 + 0x280);
            local_f8 = (wchar_t *)0x0;
            local_f0 = *(int *)(param_1 + 0x290);
            lVar9 = (longlong)local_f0;
            _Src = *(void **)(param_1 + 0x288);
            if (lVar9 == 0) {
              local_ec = 0;
            }
            else {
              FUN_1446dd670(&local_f8,local_f0,0);
              memcpy(local_f8,_Src,lVar9 * 2);
            }
            lVar9 = local_e8;
            uVar4 = FUN_146ecd838(lVar11,lVar25,local_e8);
            uVar7 = FUN_1401f66f6(lVar11,lVar9);
            uVar10 = local_128;
            uVar18 = (ulonglong)uVar7;
            switch(uVar4) {
            case 5:
              lVar9 = FUN_1401c0c0c(lVar11,lVar25,lVar9);
              cVar5 = FUN_1405b43cc(&local_f8);
              if (cVar5 == '\0') goto switchD_149750ffe_caseD_7;
              pwVar16 = local_f8;
              if (local_f0 == 0) {
                pwVar16 = L"";
              }
              iVar8 = _wtoi(pwVar16);
              if ((int)uVar7 < 1) goto switchD_149750ffe_caseD_7;
              fVar27 = (float)iVar8;
              uVar17 = 0;
              goto LAB_1497512dc;
            case 6:
              lVar9 = FUN_146ea170a(lVar11);
              cVar5 = FUN_1405b43cc(&local_f8);
              if (cVar5 != '\0') {
                pwVar16 = local_f8;
                if (local_f0 == 0) {
                  pwVar16 = L"";
                }
                dVar28 = _wtof(pwVar16);
                bVar26 = 0.0 < (float)dVar28;
                goto LAB_1497513c0;
              }
              FUN_1400b22c2(&local_a8);
              if (local_f0 != (int)uStack_a0) {
                bVar26 = true;
                if ((int)uStack_a0 + local_f0 == 1) goto LAB_149751469;
                goto LAB_14975198b;
              }
              bVar26 = true;
              if (local_f0 < 2) goto LAB_149751469;
              lVar11 = 0;
              goto LAB_149751263;
            default:
              goto switchD_149750ffe_caseD_7;
            case 8:
              lVar9 = FUN_1409bc4a4(lVar11,lVar25,lVar9);
              if ((int)uVar7 < 1) goto switchD_149750ffe_caseD_7;
              uVar17 = 0;
              goto LAB_149751059;
            case 9:
              lVar9 = FUN_140b35f8c(lVar11,lVar25,lVar9);
              cVar5 = FUN_1405b43cc(&local_f8);
              if (cVar5 == '\0') goto switchD_149750ffe_caseD_7;
              pwVar16 = local_f8;
              if (local_f0 == 0) {
                pwVar16 = L"";
              }
              dVar28 = _wtof(pwVar16);
              if ((int)uVar7 < 1) goto switchD_149750ffe_caseD_7;
              fVar27 = (float)dVar28;
              uVar17 = 0;
            }
            goto LAB_1497514aa;
          }
          break;
        }
        iVar8 = *(int *)(*(longlong *)(lVar11 + 0x58) + (longlong)iVar8 * 0x14 + 0xc);
      } while (iVar8 != -1);
    }
  }
  local_78 = (longlong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x8000000000;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  local_98 = (longlong *)0x0;
  local_a8 = lVar12;
  lVar12 = FUN_146fb78aa(param_1);
  if ((lVar12 != 0) && (FUN_1497c09a8(lVar12,&local_88,uVar10), local_78 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  local_a8 = param_1 + 0x2b8;
  local_78 = (longlong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x8000000000;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  local_98 = (longlong *)0x0;
  lVar12 = FUN_146fb78aa(param_1);
  if ((lVar12 != 0) && (FUN_1497c09a8(lVar12,&local_88,uVar10), local_78 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  local_a8 = param_1 + 0x2d8;
  local_78 = (longlong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x8000000000;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  local_98 = (longlong *)0x0;
  lVar12 = FUN_146fb78aa(param_1);
  if ((lVar12 != 0) && (FUN_1497c09a8(lVar12,&local_88,uVar10), local_78 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  local_a8 = param_1 + 0x2f8;
  local_78 = (longlong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x8000000000;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  local_98 = (longlong *)0x0;
  lVar12 = FUN_146fb78aa(param_1);
  if ((lVar12 != 0) && (FUN_1497c09a8(lVar12,&local_88,uVar10), local_78 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  local_a8 = param_1 + 0x318;
  local_78 = (longlong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x8000000000;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  local_98 = (longlong *)0x0;
  lVar12 = FUN_146fb78aa(param_1);
  if (lVar12 != 0) {
    FUN_1497c09a8(lVar12,&local_88,uVar10);
    goto LAB_14975195c;
  }
  goto LAB_149750e8d;
LAB_1497514aa:
  do {
    switch(cVar3) {
    case '\0':
      fVar29 = *(float *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4);
      if ((fVar29 == fVar27) && (!NAN(fVar29) && !NAN(fVar27))) {
LAB_149751510:
        plVar15 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar15 = &local_88;
        }
        puVar1 = (uint *)((longlong)plVar15 + (uVar17 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
      }
      break;
    case '\x01':
      fVar29 = *(float *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4);
      if ((fVar29 != fVar27) || (NAN(fVar29) || NAN(fVar27))) goto LAB_149751510;
      break;
    case '\x02':
      if (fVar27 < *(float *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4)) goto LAB_149751510;
      break;
    case '\x03':
      if (fVar27 <= *(float *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4)) goto LAB_149751510;
      break;
    case '\x04':
      pfVar2 = (float *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4);
      if (*pfVar2 <= fVar27 && fVar27 != *pfVar2) goto LAB_149751510;
      break;
    case '\x05':
      if (*(float *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4) <= fVar27) goto LAB_149751510;
    }
    uVar17 = uVar17 + 1;
  } while (uVar18 != uVar17);
  goto switchD_149750ffe_caseD_7;
LAB_149751059:
  do {
    if (cVar3 == '\x01') {
      iVar8 = *(int *)(*(longlong *)(lVar9 + 0x10) + 8 + uVar17 * 0x10);
      if (iVar8 == local_f0) {
        if (1 < iVar8) {
          lVar11 = 0;
          while( true ) {
            uVar22 = *(ushort *)
                      (*(longlong *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 0x10) + lVar11);
            uVar23 = (ulonglong)uVar22;
            uVar19 = *(ushort *)((longlong)local_f8 + lVar11);
            if (uVar22 != uVar19) break;
            if (uVar22 == 0) goto LAB_149751193;
LAB_149751132:
            lVar11 = lVar11 + 2;
          }
          if ((uVar19 | uVar22) < 0x80) {
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
            uVar24 = (ulonglong)uVar19;
            uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
            if ((&DAT_149e05da0)[uVar23] == (&DAT_149e05da0)[uVar24]) goto LAB_149751132;
          }
          if (uVar22 != uVar19) goto LAB_149751168;
        }
      }
      else if (local_f0 + iVar8 != 1) goto LAB_149751168;
    }
    else if (cVar3 == '\0') {
      iVar8 = *(int *)(*(longlong *)(lVar9 + 0x10) + 8 + uVar17 * 0x10);
      if (iVar8 == local_f0) {
        if (1 < iVar8) {
          lVar11 = 0;
          while( true ) {
            uVar22 = *(ushort *)
                      (*(longlong *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 0x10) + lVar11);
            uVar23 = (ulonglong)uVar22;
            uVar19 = *(ushort *)((longlong)local_f8 + lVar11);
            if (uVar22 != uVar19) break;
            if (uVar22 == 0) goto LAB_149751168;
LAB_1497510b7:
            lVar11 = lVar11 + 2;
          }
          if ((uVar19 | uVar22) < 0x80) {
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
            uVar24 = (ulonglong)uVar19;
            uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
            if ((&DAT_149e05da0)[uVar23] == (&DAT_149e05da0)[uVar24]) goto LAB_1497510b7;
          }
          if (uVar22 != uVar19) goto LAB_149751193;
        }
      }
      else if (local_f0 + iVar8 != 1) goto LAB_149751193;
LAB_149751168:
      plVar15 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar15 = &local_88;
      }
      puVar1 = (uint *)((longlong)plVar15 + (uVar17 >> 5 & 0x7ffffff) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
    }
LAB_149751193:
    uVar17 = uVar17 + 1;
  } while (uVar17 != uVar18);
  goto switchD_149750ffe_caseD_7;
LAB_149751263:
  uVar22 = *(ushort *)((longlong)local_f8 + lVar11);
  uVar18 = (ulonglong)uVar22;
  uVar19 = *(ushort *)(local_a8 + lVar11);
  if (uVar22 != uVar19) {
    if ((uVar19 | uVar22) < 0x80) {
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
      uVar17 = (ulonglong)uVar19;
      uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
      if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar17]) goto LAB_14975127c;
    }
    uVar10 = local_128;
    if (uVar22 != uVar19) goto LAB_14975198b;
    goto LAB_149751469;
  }
  if (uVar22 == 0) goto LAB_149751469;
LAB_14975127c:
  lVar11 = lVar11 + 2;
  goto LAB_149751263;
LAB_14975198b:
  FUN_1400b22c2(&local_c0);
  if (local_f0 == local_b8) {
    bVar26 = true;
    if (1 < local_f0) {
      lVar11 = 0;
      while( true ) {
        uVar22 = *(ushort *)((longlong)local_f8 + lVar11);
        uVar14 = (uint)uVar22;
        uVar19 = *(ushort *)(local_c0 + lVar11);
        uVar21 = (uint)uVar19;
        if (uVar22 != uVar19) {
          if ((uVar19 | uVar22) < 0x80) {
            uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar22];
            uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar19];
            if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar19]) goto LAB_1497519e1;
          }
          iVar8 = uVar14 - uVar21;
          goto LAB_149751a30;
        }
        if (uVar22 == 0) break;
LAB_1497519e1:
        lVar11 = lVar11 + 2;
      }
      iVar8 = 0;
LAB_149751a30:
      bVar26 = iVar8 == 0;
      uVar10 = local_128;
    }
  }
  else {
    bVar26 = local_b8 + local_f0 == 1;
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
LAB_149751469:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_1497513c0:
  if (0 < (int)uVar7) {
    uVar18 = 0;
    do {
      uVar14 = (uint)uVar18;
      if (cVar3 == '\x01') {
        sVar13 = (sbyte)(uVar14 & 0x1f);
        lVar11 = *(longlong *)(lVar9 + 0x20);
        if (*(longlong *)(lVar9 + 0x20) == 0) {
          lVar11 = lVar9 + 0x10;
        }
        if (bVar26 != ((*(uint *)(lVar11 + (uVar18 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0)) {
LAB_149751402:
          plVar15 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar15 = &local_88;
          }
          puVar1 = (uint *)((longlong)plVar15 + (uVar18 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << sVar13;
        }
      }
      else if (cVar3 == '\0') {
        sVar13 = (sbyte)(uVar14 & 0x1f);
        lVar11 = *(longlong *)(lVar9 + 0x20);
        if (*(longlong *)(lVar9 + 0x20) == 0) {
          lVar11 = lVar9 + 0x10;
        }
        if (bVar26 == ((*(uint *)(lVar11 + (uVar18 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0))
        goto LAB_149751402;
      }
      uVar18 = (ulonglong)(uVar14 + 1);
    } while (uVar7 != uVar14 + 1);
  }
  goto switchD_149750ffe_caseD_7;
LAB_1497512dc:
  do {
    switch(cVar3) {
    case '\0':
      fVar29 = (float)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4);
      if ((fVar29 == fVar27) && (!NAN(fVar29) && !NAN(fVar27))) {
LAB_149751355:
        plVar15 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar15 = &local_88;
        }
        puVar1 = (uint *)((longlong)plVar15 + (uVar17 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
      }
      break;
    case '\x01':
      fVar29 = (float)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4);
      if ((fVar29 != fVar27) || (NAN(fVar29) || NAN(fVar27))) goto LAB_149751355;
      break;
    case '\x02':
      if (fVar27 < (float)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4)) goto LAB_149751355;
      break;
    case '\x03':
      if (fVar27 <= (float)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4)) goto LAB_149751355;
      break;
    case '\x04':
      if ((float)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4) < fVar27) goto LAB_149751355;
      break;
    case '\x05':
      if ((float)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar17 * 4) <= fVar27) goto LAB_149751355;
    }
    uVar17 = uVar17 + 1;
  } while (uVar18 != uVar17);
switchD_149750ffe_caseD_7:
  if (local_f8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_149751a3d(&local_100,0);
  uStack_90 = uStack_70;
  if (local_e8 == local_100) {
    if (local_78 == (longlong *)0x0) {
      local_a8 = local_88;
      uStack_a0 = uStack_80;
    }
    local_98 = local_78;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
  }
  else {
    local_98 = (longlong *)0x0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x8000000000;
  }
  plVar15 = local_98;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_c0 = lVar12;
  lVar12 = FUN_146fb78aa(param_1);
  if (lVar12 != 0) {
    FUN_1497c09a8(lVar12,&local_a8,uVar10);
    plVar15 = local_98;
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_1400020a8(plVar15);
  }
  FUN_149751a3d(&local_108,1);
  uStack_90 = uStack_70;
  if (local_e8 == local_108) {
    if (local_78 == (longlong *)0x0) {
      local_a8 = local_88;
      uStack_a0 = uStack_80;
    }
    local_98 = local_78;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
  }
  else {
    local_98 = (longlong *)0x0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x8000000000;
  }
  plVar15 = local_98;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_c0 = param_1 + 0x2b8;
  lVar12 = FUN_146fb78aa(param_1);
  if (lVar12 != 0) {
    FUN_1497c09a8(lVar12,&local_a8,uVar10);
    plVar15 = local_98;
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_1400020a8(plVar15);
  }
  FUN_149751a3d(&local_110,2);
  uStack_90 = uStack_70;
  if (local_e8 == local_110) {
    if (local_78 == (longlong *)0x0) {
      local_a8 = local_88;
      uStack_a0 = uStack_80;
    }
    local_98 = local_78;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
  }
  else {
    local_98 = (longlong *)0x0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x8000000000;
  }
  plVar15 = local_98;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_c0 = param_1 + 0x2d8;
  lVar12 = FUN_146fb78aa(param_1);
  if (lVar12 != 0) {
    FUN_1497c09a8(lVar12,&local_a8,uVar10);
    plVar15 = local_98;
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_1400020a8(plVar15);
  }
  FUN_149751a3d(&local_118,3);
  uStack_90 = uStack_70;
  if (local_e8 == local_118) {
    if (local_78 == (longlong *)0x0) {
      local_a8 = local_88;
      uStack_a0 = uStack_80;
    }
    local_98 = local_78;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
  }
  else {
    local_98 = (longlong *)0x0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x8000000000;
  }
  plVar15 = local_98;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_c0 = param_1 + 0x2f8;
  lVar12 = FUN_146fb78aa(param_1);
  if (lVar12 != 0) {
    FUN_1497c09a8(lVar12,&local_a8,uVar10);
    plVar15 = local_98;
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_1400020a8(plVar15);
  }
  FUN_149751a3d(&local_120,4);
  uStack_90 = uStack_70;
  if (local_e8 == local_120) {
    if (local_78 == (longlong *)0x0) {
      local_a8 = local_88;
      uStack_a0 = uStack_80;
    }
    local_98 = local_78;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
  }
  else {
    local_98 = (longlong *)0x0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x8000000000;
  }
  plVar15 = local_98;
  local_b8 = -1;
  local_b0 = 0;
  local_c0 = param_1 + 0x318;
  lVar12 = FUN_146fb78aa(param_1);
  if (lVar12 != 0) {
    FUN_1497c09a8(lVar12,&local_a8,uVar10);
    plVar15 = local_98;
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_1400020a8(plVar15);
  }
LAB_14975195c:
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_149750e8d:
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
LAB_149750ab0:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149751a3d FUN_149751a3d body=257 status=ok
// SIG undefined FUN_149751a3d(void)

undefined8 FUN_149751a3d(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc260b8) && (FUN_144b3d300(&DAT_14cc260b8), DAT_14cc260b8 == -1)) {
    if (DAT_14cc25fb0 == 0) {
      uVar1 = FUN_140a6b3ed();
      DAT_14cc25fb0 = FUN_14171c317(FUN_14675978a,uVar1,L"ESelectionByAttrGroup");
    }
    DAT_14cc260b0 = DAT_14cc25fb0;
    _Init_thread_footer(&DAT_14cc260b8);
  }
  FUN_1401cfad2(DAT_14cc260b0,&local_30,param_2);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar2,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149751b40 FUN_149751b40 body=353 status=ok
// SIG undefined FUN_149751b40(void)

void FUN_149751b40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_5f8 [32];
  undefined1 local_5d8;
  undefined1 local_5d0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  longlong local_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  longlong local_598;
  undefined4 local_590;
  undefined8 local_588;
  undefined1 local_4e8 [1216];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != param_1 + 0x1a0) goto LAB_149751b79;
  local_5c8 = 0x3f800000;
  uStack_5c4 = 0x3f800000;
  uStack_5c0 = 0x3f800000;
  uStack_5bc = 0x3f800000;
  FUN_140b1d240(local_4e8);
  local_590 = 0xffffffff;
  local_588 = 0;
  local_598 = param_1 + 0x198;
  uVar2 = FUN_146fb4872(param_1);
  plVar3 = (longlong *)FUN_1497005b2(uVar2,param_2,param_1 + 0x198);
  lVar1 = *plVar3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
LAB_149751c0f:
    local_5d0 = *(undefined1 *)(param_1 + 0x250);
    local_5d8 = 1;
    FUN_1474aec24(lVar1,0,&DAT_14c846480,local_4e8);
  }
  else if (lVar1 != 0) goto LAB_149751c0f;
  FUN_146ecd042(&local_598,local_4e8);
  local_5a8 = 0xffffffff;
  local_5a0 = 0;
  local_5b0 = param_1 + 0x1a0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_1496fd2a8(lVar1,&local_598,param_2);
  }
  FUN_14054b30a(&local_598);
  FUN_140f35722(local_4e8);
LAB_149751b79:
  if ((local_28 ^ (ulonglong)auStack_5f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149751ca2 FUN_149751ca2 body=280 status=ok
// SIG undefined FUN_149751ca2(void)

void FUN_149751ca2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [176];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != param_1 + 0x1a0) goto LAB_149751cdb;
  FUN_1414db454(local_d8);
  local_e8 = 0xffffffff;
  local_e0 = 0;
  local_f0 = param_1 + 0x198;
  uVar2 = FUN_146fb4872(param_1);
  plVar3 = (longlong *)FUN_1497c0fac(uVar2,param_2,param_1 + 0x198);
  lVar1 = *plVar3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
LAB_149751d5b:
    FUN_1474aec28(lVar1,&DAT_14c846480,local_d8);
  }
  else if (lVar1 != 0) goto LAB_149751d5b;
  local_e8 = 0xffffffff;
  local_e0 = 0;
  local_f0 = param_1 + 0x1a0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_1496fd2a8(lVar1,local_d8,param_2);
  }
  FUN_14054b30a(local_d8);
LAB_149751cdb:
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149751dbc FUN_149751dbc body=458 status=ok
// SIG undefined FUN_149751dbc(void)

undefined8 * FUN_149751dbc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2a630;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x40) = 1;
  FUN_1414db454(param_1 + 0x41);
  local_90 = param_1 + 0x59;
  local_88 = param_1 + 0x5b;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x41;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x57;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149751f88 FUN_149751f88 body=733 status=ok
// SIG undefined FUN_149751f88(void)

void FUN_149751f88(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160;
  undefined1 local_158;
  longlong local_148 [3];
  longlong local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_118 [3];
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [176];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 != param_1 + 0x208) {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 != param_1 + 0x2b8) {
      (**(code **)(*param_3 + 0x20))(param_3);
    }
  }
  FUN_1414db454(local_f0);
  local_118[0] = 0;
  local_118[1] = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_118[2] = param_1 + 0x198;
  uVar4 = FUN_146fb4872(param_1);
  plVar5 = (longlong *)FUN_1497c10e6(uVar4,param_2,param_1 + 0x198);
  lVar3 = *plVar5;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_118[2] = param_1 + 0x1a0;
  uVar4 = FUN_146fb4872(param_1);
  uVar4 = FUN_14979f482(uVar4,param_2,param_1 + 0x1a0);
  if (lVar3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x200);
    uVar2 = *(undefined1 *)(param_1 + 0x201);
    local_130 = lVar3;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    local_168 = &local_128;
    local_160 = uVar1;
    local_158 = uVar2;
    FUN_1474af352(&local_130,uVar4,local_f0,local_118);
  }
  local_148[0] = 0;
  local_148[1] = 0;
  FUN_1474af234(local_118);
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_118[2] = param_1 + 0x208;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_1496fd2a8(lVar3,local_f0,param_2);
  }
  local_118[2] = param_1 + 0x2b8;
  local_100 = 0xffffffff;
  local_f8 = 0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_14972da30(lVar3,local_148,param_2);
  }
  local_118[2] = param_1 + 0x2c8;
  local_100 = 0xffffffff;
  local_f8 = 0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_14972dcee(lVar3,local_118,param_2);
  }
  local_118[2] = param_1 + 0x2d8;
  local_100 = 0xffffffff;
  local_f8 = 0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_14972dfac(lVar3,&local_128,param_2);
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140e285a6(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(local_f0);
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149752266 FUN_149752266 body=2232 status=ok
// SIG undefined FUN_149752266(void)

void FUN_149752266(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_5f8 [40];
  void *local_5d0;
  int local_5c8;
  undefined4 local_5c4;
  void *local_5c0;
  int local_5b8;
  undefined4 local_5b4;
  void *local_5b0;
  int local_5a8;
  undefined4 local_5a4;
  void *local_5a0;
  int local_598;
  undefined4 local_594;
  void *local_590;
  int local_588;
  undefined4 local_584;
  void *local_580;
  int local_578;
  undefined4 local_574;
  void *local_570;
  int local_568;
  undefined4 local_564;
  void *local_560;
  int local_558;
  undefined4 local_554;
  undefined1 local_550;
  undefined1 local_54f;
  undefined1 local_54e;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined1 local_540 [64];
  longlong local_500;
  longlong local_4c8;
  longlong local_490;
  longlong local_458;
  longlong local_420;
  longlong local_3e8;
  longlong local_3b0;
  longlong local_378;
  longlong local_340;
  longlong local_338;
  undefined4 local_330;
  undefined8 local_328;
  longlong local_2f8;
  longlong local_2c0;
  longlong local_288;
  longlong local_250;
  longlong local_218;
  longlong local_1e0;
  longlong local_1a8;
  longlong local_170;
  longlong local_138;
  void *local_130;
  int local_128;
  void *local_120;
  int local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  lVar14 = param_1 + 0x2f8;
  local_330 = 0xffffffff;
  local_328 = 0;
  local_338 = lVar14;
  uVar11 = FUN_146fb4872();
  uVar11 = FUN_1496fdb42(uVar11,param_2,lVar14);
  FUN_1496f87b2(&local_130,uVar11);
  lVar13 = param_1 + 0x198;
  lVar12 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar12 == lVar13) {
    local_330 = 0xffffffff;
    local_328 = 0;
    local_338 = lVar13;
    uVar11 = FUN_146fb4872(param_1,&local_338);
    uVar11 = FUN_1496fcf74(uVar11,param_2,lVar13);
    FUN_146ecd042(local_f8,uVar11);
    local_330 = 0xffffffff;
    local_328 = 0;
    local_338 = param_1 + 0x248;
    uVar11 = FUN_146fb4872(param_1,&local_338);
    uVar11 = FUN_1496fcf74(uVar11,param_2,param_1 + 0x248);
    FUN_149752b20(&local_338,local_f8);
    FUN_149752ea0(local_540,uVar11);
    local_550 = *(undefined1 *)(param_1 + 0x318);
    local_54f = *(undefined1 *)(param_1 + 0x319);
    local_54e = *(undefined1 *)(param_1 + 0x31a);
    local_54c = *(undefined4 *)(param_1 + 0x31c);
    local_548 = *(undefined4 *)(param_1 + 800);
    local_544 = *(undefined4 *)(param_1 + 0x324);
    if (((((((local_2f8 != 0) && (local_2c0 != 0)) && (local_288 != 0)) &&
          ((local_250 != 0 && (local_218 != 0)))) &&
         ((local_1e0 != 0 && ((local_1a8 != 0 && (local_170 != 0)))))) && (local_138 != 0)) &&
       (((((local_500 != 0 && (local_4c8 != 0)) && (local_490 != 0)) &&
         (((local_458 != 0 && (local_420 != 0)) &&
          ((local_3e8 != 0 && ((local_3b0 != 0 && (local_378 != 0)))))))) && (local_340 != 0)))) {
      FUN_14460e23c(&local_110,uVar11,local_f8,&local_550);
      pvVar9 = local_120;
      local_560 = (void *)0x0;
      lVar14 = (longlong)local_118;
      local_558 = local_118;
      if (lVar14 == 0) {
        local_554 = 0;
      }
      else {
        FUN_1446dd670(&local_560,local_118,0);
        memcpy(local_560,pvVar9,lVar14 * 2);
      }
      pvVar9 = local_130;
      local_570 = (void *)0x0;
      lVar14 = (longlong)local_128;
      local_568 = local_128;
      if (lVar14 == 0) {
        local_564 = 0;
      }
      else {
        FUN_1446dd670(&local_570,local_128,0);
        memcpy(local_570,pvVar9,lVar14 * 2);
      }
      lVar14 = FUN_1497531f8(local_540,&local_570,&local_560);
      pvVar9 = local_120;
      if (lVar14 == 0) {
        local_5a0 = (void *)0x0;
        lVar14 = (longlong)local_118;
        local_598 = local_118;
        if (lVar14 == 0) {
          local_594 = 0;
        }
        else {
          FUN_1446dd670(&local_5a0,local_118,0);
          memcpy(local_5a0,pvVar9,lVar14 * 2);
        }
        pvVar9 = local_130;
        local_5b0 = (void *)0x0;
        lVar14 = (longlong)local_128;
        local_5a8 = local_128;
        if (lVar14 == 0) {
          local_5a4 = 0;
        }
        else {
          FUN_1446dd670(&local_5b0,local_128,0);
          memcpy(local_5b0,pvVar9,lVar14 * 2);
        }
        lVar14 = FUN_14975343a(local_540,&local_5b0,&local_5a0);
        pvVar9 = local_120;
        lVar12 = local_110;
        if (lVar14 != 0) {
          local_5c0 = (void *)0x0;
          local_5b8 = local_118;
          if ((longlong)local_118 == 0) {
            local_5b4 = 0;
          }
          else {
            FUN_1446dd670(&local_5c0,local_118,0);
            memcpy(local_5c0,pvVar9,(longlong)local_118 * 2);
          }
          pvVar9 = local_130;
          local_5d0 = (void *)0x0;
          local_5c8 = local_128;
          if ((longlong)local_128 == 0) {
            local_5c4 = 0;
          }
          else {
            FUN_1446dd670(&local_5d0,local_128,0);
            memcpy(local_5d0,pvVar9,(longlong)local_128 * 2);
          }
          plVar15 = (longlong *)FUN_1497534f4(&local_338,&local_5d0,&local_5c0);
          if (0 < (int)plVar15[3]) {
            lVar12 = 0;
            lVar16 = 0;
            do {
              lVar17 = plVar15[2];
              lVar16 = lVar16 + 1;
              *(undefined8 *)(lVar17 + lVar12) = 0;
              ((undefined8 *)(lVar17 + lVar12))[1] = 0;
              lVar12 = lVar12 + 0x10;
            } while (lVar16 < (int)plVar15[3]);
          }
          iVar10 = (**(code **)(*plVar15 + 0x60))(plVar15);
          lVar12 = local_110;
          if (0 < iVar10) {
            lVar16 = 0;
            do {
              if (0 < *(int *)(local_110 + 8 + lVar16 * 0x28)) {
                plVar1 = (longlong *)(local_110 + lVar16 * 0x28);
                lVar17 = lVar16 * 0x10;
                lVar18 = 0;
                do {
                  lVar7 = *(longlong *)(lVar14 + 0x10);
                  lVar19 = (longlong)*(int *)(*plVar1 + lVar18 * 4) * 0x10;
                  fVar2 = *(float *)(plVar1[2] + lVar18 * 4);
                  fVar3 = *(float *)(lVar7 + 0xc + lVar19);
                  fVar4 = *(float *)(lVar7 + 8 + lVar19);
                  fVar5 = *(float *)(lVar7 + 4 + lVar19);
                  fVar6 = *(float *)(plVar1 + 4);
                  lVar8 = plVar15[2];
                  *(float *)(lVar8 + lVar17) =
                       fVar2 * *(float *)(lVar7 + lVar19) * fVar6 + *(float *)(lVar8 + lVar17);
                  *(float *)(lVar8 + 4 + lVar17) =
                       fVar5 * fVar2 * fVar6 + *(float *)(lVar8 + 4 + lVar17);
                  *(float *)(lVar8 + 8 + lVar17) =
                       fVar4 * fVar2 * fVar6 + *(float *)(lVar8 + 8 + lVar17);
                  *(float *)(lVar8 + 0xc + lVar17) =
                       fVar3 * fVar2 * fVar6 + *(float *)(lVar8 + 0xc + lVar17);
                  lVar18 = lVar18 + 1;
                } while (lVar18 < (int)plVar1[1]);
              }
              lVar16 = lVar16 + 1;
              iVar10 = (**(code **)(*plVar15 + 0x60))(plVar15);
            } while (lVar16 < iVar10);
          }
        }
      }
      else {
        local_580 = (void *)0x0;
        local_578 = local_118;
        if ((longlong)local_118 == 0) {
          local_574 = 0;
        }
        else {
          FUN_1446dd670(&local_580,local_118,0);
          memcpy(local_580,pvVar9,(longlong)local_118 * 2);
        }
        pvVar9 = local_130;
        local_590 = (void *)0x0;
        local_588 = local_128;
        if ((longlong)local_128 == 0) {
          local_584 = 0;
        }
        else {
          FUN_1446dd670(&local_590,local_128,0);
          memcpy(local_590,pvVar9,(longlong)local_128 * 2);
        }
        plVar15 = (longlong *)FUN_1497532b2(&local_338,&local_590,&local_580);
        if (0 < (int)plVar15[3]) {
          lVar12 = 0;
          do {
            *(undefined4 *)(plVar15[2] + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)plVar15[3]);
        }
        iVar10 = (**(code **)(*plVar15 + 0x60))();
        lVar12 = local_110;
        if (0 < iVar10) {
          lVar16 = 0;
          do {
            if (0 < *(int *)(local_110 + 8 + lVar16 * 0x28)) {
              plVar1 = (longlong *)(local_110 + lVar16 * 0x28);
              lVar17 = 0;
              do {
                *(float *)(plVar15[2] + lVar16 * 4) =
                     *(float *)(*(longlong *)(lVar14 + 0x10) +
                               (longlong)*(int *)(*plVar1 + lVar17 * 4) * 4) *
                     *(float *)(plVar1[2] + lVar17 * 4) * *(float *)(plVar1 + 4) +
                     *(float *)(plVar15[2] + lVar16 * 4);
                lVar17 = lVar17 + 1;
              } while (lVar17 < (int)plVar1[1]);
            }
            lVar16 = lVar16 + 1;
            iVar10 = (**(code **)(*plVar15 + 0x60))();
          } while (lVar16 < iVar10);
        }
      }
      FUN_149796584(lVar12,local_108);
      if (lVar12 != 0) {
        FUN_1400020a8(lVar12);
      }
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar13;
    lVar14 = FUN_146fb78aa(param_1);
    if (lVar14 != 0) {
      FUN_1496fd2a8(lVar14,local_f8,param_2);
    }
    FUN_14054b30a(local_f8);
  }
  else {
    lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar13 == lVar14) {
      local_330 = 0xffffffff;
      local_328 = 0;
      local_338 = lVar14;
      lVar14 = FUN_146fb78aa(param_1);
      if (lVar14 != 0) {
        FUN_1496fd436(lVar14,&local_130,param_2);
      }
    }
  }
  if (local_120 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_130 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_5f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149752b20 FUN_149752b20 body=895 status=ok
// SIG undefined FUN_149752b20(void)

undefined8 * FUN_149752b20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  param_1[1] = param_2;
  FUN_1446ddc76(&local_38,"Vertices",1);
  FUN_1446ddc76(&local_40,"BoneMap",1);
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = local_40;
  param_1[5] = local_38;
  param_1[6] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  FUN_1446ddc76(&local_38,"Vertices",1);
  FUN_1446ddc76(&local_40,"Vertex",1);
  param_1[9] = param_2;
  param_1[10] = param_2;
  param_1[0xb] = local_40;
  param_1[0xc] = local_38;
  param_1[0xd] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  FUN_1446ddc76(&local_38,"Faces",1);
  FUN_1446ddc76(&local_40,"Indices",1);
  param_1[0x10] = param_2;
  param_1[0x11] = param_2;
  param_1[0x12] = local_40;
  param_1[0x13] = local_38;
  param_1[0x14] = 0;
  uVar1 = FUN_146ea24fc(param_2);
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = param_2;
  param_1[0x18] = param_2;
  param_1[0x19] = DAT_14c9974b0;
  param_1[0x1a] = DAT_14c9974a8;
  param_1[0x1b] = 0;
  uVar1 = FUN_146eb4e12(param_2);
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = param_2;
  param_1[0x1f] = param_2;
  param_1[0x20] = DAT_14c9974b8;
  param_1[0x21] = DAT_14c9974a8;
  param_1[0x22] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar1;
  FUN_1446ddc76(&local_38,"VertexStart",1);
  param_1[0x25] = param_2;
  param_1[0x26] = param_2;
  param_1[0x27] = local_38;
  param_1[0x28] = DAT_14c996af0;
  param_1[0x29] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  FUN_1446ddc76(&local_38,"VertexCount",1);
  param_1[0x2c] = param_2;
  param_1[0x2d] = param_2;
  param_1[0x2e] = local_38;
  param_1[0x2f] = DAT_14c996af0;
  param_1[0x30] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar1;
  FUN_1446ddc76(&local_38,"FaceStart",1);
  param_1[0x33] = param_2;
  param_1[0x34] = param_2;
  param_1[0x35] = local_38;
  param_1[0x36] = DAT_14c996af0;
  param_1[0x37] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  FUN_1446ddc76(&local_38,"FaceCount",1);
  param_1[0x3a] = param_2;
  param_1[0x3b] = param_2;
  param_1[0x3c] = local_38;
  param_1[0x3d] = DAT_14c996af0;
  param_1[0x3e] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x3f] = uVar1;
  param_1[0x40] = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149752ea0 FUN_149752ea0 body=855 status=ok
// SIG undefined FUN_149752ea0(void)

undefined8 * FUN_149752ea0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_1446ddc76(&local_58,"Vertices",1);
  FUN_1446ddc76(&local_60,"BoneMap",1);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = local_60;
  param_1[5] = local_58;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[8] = uVar1;
  FUN_1446ddc76(&local_58,"Vertices",1);
  FUN_1446ddc76(&local_60,"Vertex",1);
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = local_60;
  param_1[0xc] = local_58;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = FUN_1409bc3ac(param_2);
  param_1[0xf] = uVar1;
  FUN_1446ddc76(&local_58,"Faces",1);
  FUN_1446ddc76(&local_60,"Indices",1);
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = local_60;
  param_1[0x13] = local_58;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = FUN_146ea2724(param_2);
  param_1[0x16] = uVar1;
  param_1[0x17] = param_2;
  param_1[0x18] = 0;
  param_1[0x19] = DAT_14c9974b0;
  param_1[0x1a] = DAT_14c9974a8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = FUN_146eb4f2e(param_2);
  param_1[0x1d] = uVar1;
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = DAT_14c9974b8;
  param_1[0x21] = DAT_14c9974a8;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x24] = uVar1;
  FUN_1446ddc76(&local_58,"VertexStart",1);
  param_1[0x25] = param_2;
  param_1[0x26] = 0;
  param_1[0x27] = local_58;
  param_1[0x28] = DAT_14c996af0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x2b] = uVar1;
  FUN_1446ddc76(&local_58,"VertexCount",1);
  param_1[0x2c] = param_2;
  param_1[0x2d] = 0;
  param_1[0x2e] = local_58;
  param_1[0x2f] = DAT_14c996af0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x32] = uVar1;
  FUN_1446ddc76(&local_58,"FaceStart",1);
  param_1[0x33] = param_2;
  param_1[0x34] = 0;
  param_1[0x35] = local_58;
  param_1[0x36] = DAT_14c996af0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x39] = uVar1;
  FUN_1446ddc76(&local_58,"FaceCount",1);
  param_1[0x3a] = param_2;
  param_1[0x3b] = 0;
  param_1[0x3c] = local_58;
  param_1[0x3d] = DAT_14c996af0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x40] = uVar1;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497531f8 FUN_1497531f8 body=184 status=ok
// SIG undefined FUN_1497531f8(void)

undefined8 FUN_1497531f8(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_1;
  iVar3 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_40,iVar3,*param_3,1);
  uVar1 = local_40;
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_40,iVar3,*param_2,1);
  uVar2 = FUN_140b35f8c(uVar2,local_40,uVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497532b2 FUN_1497532b2 body=391 status=ok
// SIG undefined FUN_1497532b2(void)

undefined8 FUN_1497532b2(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar5 = 0;
  iVar4 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_3,1);
  uVar1 = local_50;
  iVar4 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_2,1);
  cVar2 = FUN_140498cd4(uVar3,local_50,uVar1);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    local_60 = 0;
    local_58 = 1;
    iVar4 = (int)param_3[1] + -1;
    if ((int)param_3[1] == 0) {
      iVar4 = iVar5;
    }
    FUN_1446f82e2(&local_50,iVar4,*param_3,1);
    uVar1 = local_50;
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar4 = iVar5;
    }
    FUN_1446f82e2(&local_50,iVar4,*param_2,1);
    FUN_140498c8e(uVar3,local_50,uVar1,&local_60);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar4 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_3,1);
  uVar1 = local_50;
  iVar4 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_2,1);
  uVar3 = FUN_144b0731a(uVar3,local_50,uVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975343a FUN_14975343a body=184 status=ok
// SIG undefined FUN_14975343a(void)

undefined8 FUN_14975343a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_1;
  iVar3 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_40,iVar3,*param_3,1);
  uVar1 = local_40;
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_40,iVar3,*param_2,1);
  uVar2 = FUN_146ea2618(uVar2,local_40,uVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497534f4 FUN_1497534f4 body=391 status=ok
// SIG undefined FUN_1497534f4(void)

undefined8 FUN_1497534f4(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar5 = 0;
  iVar4 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_3,1);
  uVar1 = local_50;
  iVar4 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_2,1);
  cVar2 = FUN_140498cd4(uVar3,local_50,uVar1);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    local_60 = 0;
    local_58 = 1;
    iVar4 = (int)param_3[1] + -1;
    if ((int)param_3[1] == 0) {
      iVar4 = iVar5;
    }
    FUN_1446f82e2(&local_50,iVar4,*param_3,1);
    uVar1 = local_50;
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar4 = iVar5;
    }
    FUN_1446f82e2(&local_50,iVar4,*param_2,1);
    FUN_146c973be(uVar3,local_50,uVar1,&local_60);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar4 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_3,1);
  uVar1 = local_50;
  iVar4 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_2,1);
  uVar3 = FUN_146ea23e0(uVar3,local_50,uVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975367c FUN_14975367c body=3042 status=ok
// SIG undefined FUN_14975367c(void)

void FUN_14975367c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  void *pvVar13;
  longlong lVar14;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_938 [32];
  longlong local_918;
  undefined8 local_910;
  longlong local_908;
  ulonglong local_900;
  void *local_8f8;
  int local_8f0;
  undefined4 local_8ec;
  void *local_8e8;
  int local_8e0;
  undefined4 local_8dc;
  void *local_8d8;
  undefined8 uStack_8d0;
  void *local_8c8;
  undefined8 uStack_8c0;
  undefined1 local_8b0 [296];
  longlong local_788;
  undefined4 local_780;
  undefined8 local_778;
  longlong local_748;
  longlong local_710;
  longlong local_660;
  undefined4 local_658;
  undefined1 local_650;
  undefined1 local_64f;
  undefined1 local_64e;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined1 local_640 [64];
  longlong local_600;
  longlong local_5c8;
  longlong local_590;
  longlong local_558;
  longlong local_520;
  longlong local_4e8;
  longlong local_4b0;
  longlong local_478;
  longlong local_440;
  longlong local_438;
  undefined4 local_430;
  undefined8 local_428;
  longlong local_3f8;
  undefined8 local_3f0;
  undefined8 local_3d8;
  longlong *local_3c0;
  longlong local_388;
  longlong local_350;
  longlong local_318;
  longlong local_2e0;
  longlong local_2a8;
  longlong local_270;
  longlong local_238;
  void **local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 local_20c [4];
  undefined4 *local_208;
  void **local_200;
  int local_1d4;
  undefined1 local_1d0 [8];
  undefined1 *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [176];
  void **local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_938;
  lVar19 = param_1 + 0x198;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar6 == lVar19) {
    local_430 = 0xffffffff;
    local_428 = 0;
    local_438 = lVar19;
    uVar7 = FUN_146fb4872(param_1,&local_438);
    uVar7 = FUN_1496fcf74(uVar7,param_2,lVar19);
    FUN_146ecd042(local_1b8,uVar7);
    local_430 = 0xffffffff;
    local_428 = 0;
    local_438 = param_1 + 0x248;
    uVar7 = FUN_146fb4872(param_1,&local_438);
    uVar7 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x248);
    FUN_149752b20(&local_438,local_1b8);
    FUN_149752ea0(local_640,uVar7);
    local_650 = *(undefined1 *)(param_1 + 0x2f8);
    local_64f = *(undefined1 *)(param_1 + 0x2f9);
    local_64e = *(undefined1 *)(param_1 + 0x2fa);
    local_64c = *(undefined4 *)(param_1 + 0x2fc);
    local_648 = *(undefined4 *)(param_1 + 0x300);
    local_644 = *(undefined4 *)(param_1 + 0x304);
    local_788 = lVar19;
    if (((((((local_3f8 != 0) && (local_3c0 != (longlong *)0x0)) && (local_388 != 0)) &&
          ((local_350 != 0 && (local_318 != 0)))) &&
         (((local_2e0 != 0 && ((local_2a8 != 0 && (local_270 != 0)))) && (local_238 != 0)))) &&
        ((((local_600 != 0 && (local_5c8 != 0)) && (local_590 != 0)) &&
         (((local_558 != 0 && (local_520 != 0)) &&
          ((local_4e8 != 0 && ((local_4b0 != 0 && (local_478 != 0)))))))))) && (local_440 != 0)) {
      local_908 = lVar19;
      FUN_14460e23c(&local_660,uVar7,local_1b8,&local_650);
      FUN_146eaef66(&local_788,uVar7);
      FUN_146eaedb4(local_8b0,local_1b8);
      uVar2 = DAT_14c9974a8;
      if (local_710 != 0 && local_748 != 0) {
        local_98 = 0;
        local_90 = 0;
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        uStack_e8 = 0;
        local_e0 = 0;
        local_108 = (void **)0x0;
        uStack_100 = (void **)0x0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_910 = param_2;
        FUN_1446ddc76(&local_230,"BoneName",1);
        plVar8 = (longlong *)FUN_1497455e8(uVar7,local_230,uVar2);
        uVar7 = DAT_14c9974a8;
        FUN_1446ddc76(&local_8c8,"BoneName",1);
        plVar9 = (longlong *)FUN_1497455e8(local_1b8,local_8c8,uVar7);
        local_918 = param_1;
        if (plVar9 != (longlong *)0x0 && plVar8 != (longlong *)0x0) {
          local_20c = (undefined1  [4])0x0;
          iVar3 = (**(code **)(*plVar9 + 0x60))(plVar9);
          if (0 < iVar3) {
            do {
              local_208 = (undefined4 *)((longlong)(int)local_20c * 0x10 + plVar9[2]);
              local_200 = (void **)local_20c;
              FUN_1409bc59c(&local_108,&local_8d8,&local_208,0);
              iVar16 = (int)local_20c + 1;
              local_20c = (undefined1  [4])iVar16;
              iVar3 = (**(code **)(*plVar9 + 0x60))(plVar9);
            } while (iVar16 < iVar3);
          }
          local_20c = (undefined1  [4])0x0;
          iVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
          if (0 < iVar3) {
            do {
              lVar19 = plVar8[2];
              lVar6 = (longlong)(int)local_20c * 0x10;
              iVar3 = *(int *)(lVar19 + 8 + lVar6);
              puVar11 = &DAT_149dfb77a;
              if (iVar3 != 0) {
                puVar11 = *(undefined2 **)(lVar19 + lVar6);
              }
              iVar16 = iVar3 + -1;
              if (iVar3 == 0) {
                iVar16 = 0;
              }
              uVar4 = FUN_144a49b4a(iVar16,puVar11);
              iVar3 = FUN_144a7df4c(&local_108,uVar4,lVar19 + lVar6);
              if (local_108 + (longlong)iVar3 * 4 != (void **)0x0 && iVar3 != -1) {
                local_200 = local_108 + (longlong)iVar3 * 4 + 2;
                local_208 = (undefined4 *)local_20c;
                FUN_140263e2a(&local_b8,&local_8d8,&local_208,0);
              }
              iVar16 = (int)local_20c + 1;
              local_20c = (undefined1  [4])iVar16;
              iVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
            } while (iVar16 < iVar3);
          }
        }
        FUN_1417eceb2(&local_208,&local_b8);
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_14062c7dc(&local_108);
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_144a6bfa8(&local_b8);
        uVar18 = 0;
LAB_149753c4a:
        if (local_3c0 == (longlong *)0x0) {
          iVar3 = FUN_1401f66f6(local_3f0,local_3d8);
        }
        else {
          iVar3 = (**(code **)(*local_3c0 + 0x60))();
        }
        if ((longlong)uVar18 < (longlong)iVar3) {
          if (*(int *)(local_660 + 8 + uVar18 * 0x28) != 0) {
            plVar8 = (longlong *)(local_660 + uVar18 * 0x28);
            local_98 = 0;
            local_90 = 0;
            local_b8 = (void *)0x0;
            uStack_b0 = 0;
            local_8c = 0xffffffff00000080;
            local_84 = 0;
            local_78 = (undefined1 *)0x0;
            local_70 = 0;
            iVar3 = (int)plVar8[1];
            uStack_b0._0_4_ = 0;
            local_900 = uVar18;
            if (0 < iVar3) {
              lVar19 = *plVar8;
              lVar6 = *(longlong *)(local_748 + 0x10);
              lVar14 = 0;
              lVar17 = lVar6;
LAB_149753cec:
              lVar20 = (longlong)*(int *)(lVar19 + lVar14 * 4) * 0x10;
              if (0 < *(int *)(lVar17 + 8 + lVar20)) {
                piVar12 = (int *)(lVar19 + lVar14 * 4);
                plVar9 = (longlong *)(lVar17 + lVar20);
                lVar17 = 0;
LAB_149753d09:
                if ((int)local_200 != local_1d4) {
                  uVar5 = *(uint *)(*plVar9 + lVar17 * 4);
                  puVar10 = local_1c8;
                  if (local_1c8 == (undefined1 *)0x0) {
                    puVar10 = local_1d0;
                  }
                  iVar3 = *(int *)(puVar10 + (ulonglong)(local_1c0 - 1U & uVar5) * 4);
                  for (iVar16 = iVar3; iVar16 != -1; iVar16 = local_208[(longlong)iVar16 * 4 + 2]) {
                    if (local_208[(longlong)iVar16 * 4] == uVar5) goto LAB_149753d91;
                  }
                }
                goto LAB_149753d1b;
              }
              goto LAB_149753eb8;
            }
            goto LAB_149753ed5;
          }
          goto LAB_14975415e;
        }
        local_1c0 = 0;
        if (local_1c8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_144a6bfa8(&local_208);
        param_1 = local_918;
        param_2 = local_910;
      }
      FUN_149796584(local_660,local_658);
      local_788 = local_908;
      if (local_660 != 0) {
        FUN_1400020a8(local_660);
        local_788 = local_908;
      }
    }
    local_780 = 0xffffffff;
    local_778 = 0;
    lVar19 = FUN_146fb78aa(param_1);
    if (lVar19 != 0) {
      FUN_1496fd2a8(lVar19,local_1b8,param_2);
    }
    FUN_14054b30a(local_1b8);
  }
  if ((local_60 ^ (ulonglong)auStack_938) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar3 = puVar15[2], iVar3 != -1) {
LAB_149753d91:
    puVar15 = local_208 + (longlong)iVar3 * 4;
    if (local_208[(longlong)iVar3 * 4] == uVar5) goto LAB_149753dae;
  }
  puVar15 = (undefined4 *)0x0;
LAB_149753dae:
  uVar5 = puVar15[1];
  local_8c8 = (void *)CONCAT44(local_8c8._4_4_,uVar5);
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(local_710 + 0x10) + (longlong)*piVar12 * 0x10) +
                    lVar17 * 4);
  if ((int)uStack_b0 != local_84) {
    puVar10 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar10 = local_80;
    }
    iVar3 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & uVar5) * 4);
    for (iVar16 = iVar3; iVar16 != -1;
        iVar16 = *(int *)((longlong)local_b8 + (longlong)iVar16 * 0x10 + 8)) {
      if (*(uint *)((longlong)local_b8 + (longlong)iVar16 * 0x10) == uVar5) {
        goto LAB_149753e83;
      }
    }
  }
  local_8d8 = (void *)CONCAT44(local_8d8._4_4_,fVar1 * *(float *)(plVar8[2] + lVar14 * 4));
  local_108 = &local_8c8;
  uStack_100 = &local_8d8;
  FUN_140ad38ce(&local_b8,&local_230,&local_108,0);
  goto LAB_149753e18;
  while (iVar3 = *(int *)((longlong)pvVar13 + 8), iVar3 != -1) {
LAB_149753e83:
    pvVar13 = (void *)((longlong)local_b8 + (longlong)iVar3 * 0x10);
    if (*(uint *)((longlong)local_b8 + (longlong)iVar3 * 0x10) == uVar5) goto LAB_149753e9e;
  }
  pvVar13 = (void *)0x0;
LAB_149753e9e:
  *(float *)((longlong)pvVar13 + 4) =
       *(float *)(plVar8[2] + lVar14 * 4) * fVar1 + *(float *)((longlong)pvVar13 + 4);
LAB_149753e18:
  lVar19 = *plVar8;
  lVar6 = *(longlong *)(local_748 + 0x10);
LAB_149753d1b:
  lVar17 = lVar17 + 1;
  piVar12 = (int *)(lVar19 + lVar14 * 4);
  plVar9 = (longlong *)(lVar6 + (longlong)*piVar12 * 0x10);
  if (*(int *)(lVar6 + 8 + (longlong)*piVar12 * 0x10) <= lVar17) goto LAB_149753eb1;
  goto LAB_149753d09;
LAB_149753eb1:
  iVar3 = (int)plVar8[1];
  lVar17 = lVar6;
LAB_149753eb8:
  lVar14 = lVar14 + 1;
  if (iVar3 <= lVar14) goto code_r0x000149753ec7;
  goto LAB_149753cec;
code_r0x000149753ec7:
LAB_149753ed5:
  local_8c8 = (void *)0x0;
  uStack_8c0 = 0;
  iVar3 = (int)uStack_b0 - local_84;
  local_8d8 = (void *)0x0;
  uStack_8d0 = 0;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  iVar16 = local_84;
  if (iVar3 != 0) {
    FUN_14481578e(&local_8c8);
    iVar16 = (int)uStack_b0;
  }
  iVar16 = iVar16 - local_84;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  if ((int)uStack_8d0._4_4_ < iVar16) {
    FUN_14482f6fa(&local_8d8,iVar16);
  }
  local_230 = (void **)&DAT_100000000;
  uStack_228 = local_a8;
  local_220 = 0xffffffff;
  uStack_218 = 0;
  if (local_90 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_230);
    iVar3 = local_90;
  }
  local_f0 = local_220;
  uVar7 = local_f0;
  uStack_e8 = CONCAT44(uStack_214,uStack_218);
  uStack_100 = local_230;
  local_f8 = (undefined4)uStack_228;
  uStack_f4 = uStack_228._4_4_;
  local_108 = &local_b8;
  local_f0._4_4_ = (int)((ulonglong)local_220 >> 0x20);
  iVar16 = local_f0._4_4_;
  if ((local_f0._4_4_ != iVar3) || (local_f0 = uVar7, uStack_228 != local_a8)) {
    do {
      local_f0 = uVar7;
      uVar18 = uStack_8c0;
      puVar15 = (undefined4 *)((longlong)iVar16 * 0x10 + (longlong)*local_108);
      lVar19 = (longlong)(int)uStack_8c0;
      uVar5 = (int)uStack_8c0 + 1;
      uStack_8c0 = CONCAT44(uStack_8c0._4_4_,uVar5);
      if (uStack_8c0._4_4_ < uVar5) {
        FUN_1446f48e2(&local_8c8,uVar18 & 0xffffffff);
      }
      uVar18 = uStack_8d0;
      *(undefined4 *)((longlong)local_8c8 + lVar19 * 4) = *puVar15;
      lVar19 = (longlong)(int)uStack_8d0;
      uVar5 = (int)uStack_8d0 + 1;
      uStack_8d0 = CONCAT44(uStack_8d0._4_4_,uVar5);
      if (uStack_8d0._4_4_ < uVar5) {
        FUN_14475e4ac(&local_8d8,uVar18 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_8d8 + lVar19 * 4) = puVar15[1];
      local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~uStack_100._4_4_);
      FUN_1449c0562(&uStack_100);
      iVar16 = local_f0._4_4_;
      uVar7 = local_f0;
    } while (local_108 != &local_b8 ||
             ((undefined1 *)CONCAT44(uStack_f4,local_f8) != local_a8 || local_f0._4_4_ != iVar3));
  }
  pvVar13 = local_8d8;
  local_8e8 = (void *)0x0;
  lVar19 = (longlong)(int)uStack_8d0;
  local_8e0 = (int)uStack_8d0;
  if (lVar19 == 0) {
    local_8dc = 0;
  }
  else {
    FUN_1447c510a(&local_8e8,uStack_8d0 & 0xffffffff,0);
    memcpy(local_8e8,pvVar13,lVar19 << 2);
  }
  pvVar13 = local_8c8;
  local_8f8 = (void *)0x0;
  lVar19 = (longlong)(int)uStack_8c0;
  local_8f0 = (int)uStack_8c0;
  if (lVar19 == 0) {
    local_8ec = 0;
  }
  else {
    FUN_144a06ca8(&local_8f8,uStack_8c0 & 0xffffffff,0);
    memcpy(local_8f8,pvVar13,lVar19 << 2);
  }
  uVar18 = local_900;
  FUN_1429fb480(local_8b0,local_900 & 0xffffffff,&local_8f8,&local_8e8);
  if (local_8d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_8c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(&local_b8);
LAB_14975415e:
  uVar18 = uVar18 + 1;
  goto LAB_149753c4a;
}



// FUNCTION 149754260 FUN_149754260 body=450 status=ok
// SIG undefined FUN_149754260(void)

void FUN_149754260(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_268 [32];
  longlong local_248 [2];
  longlong local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined1 local_110 [16];
  longlong local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [176];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar4) {
    local_230 = 0xffffffff;
    local_228 = 0;
    local_238 = lVar4;
    uVar2 = FUN_146fb4872(param_1,&local_238);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar4);
    FUN_146ecd042(local_f0,uVar2);
    lVar1 = param_1 + 0x248;
    local_230 = 0xffffffff;
    local_228 = 0;
    local_238 = lVar1;
    lVar3 = FUN_146fb4872(param_1,&local_238);
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      local_230 = 0xffffffff;
      local_228 = 0;
      local_238 = lVar1;
      uVar2 = FUN_146fb4872(param_1);
      uVar2 = FUN_14972a204(uVar2,param_2,lVar1);
      local_100 = 0;
      uStack_f8 = 0;
      FUN_144a69486(local_110,uVar2);
      FUN_146eaedb4(&local_238,local_f0);
      FUN_146fd58e4(local_110,local_248);
      FUN_146eaf108(&local_238,local_248);
      if (local_248[0] != 0) {
        FUN_1400020a8();
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
    }
    local_230 = 0xffffffff;
    local_228 = 0;
    local_238 = lVar4;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496fd2a8(lVar4,local_f0,param_2);
    }
    FUN_14054b30a(local_f0);
  }
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149754424 FUN_149754424 body=809 status=ok
// SIG undefined FUN_149754424(void)

void FUN_149754424(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar7 == param_1 + 0x248) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_e0 = param_1 + 0x248;
    local_d8 = param_1;
    local_60 = param_1 + 0x198;
    uVar8 = FUN_146fb4872(param_1);
    local_e8 = param_2;
    uVar9 = FUN_1496fcf74(uVar8,param_2,param_1 + 0x198);
    local_78 = 0;
    uStack_70 = 0;
    FUN_1446ddc76(&local_80,"TriangleMesh",1);
    FUN_1446ddc76(&local_88,"ObjectIndices",1);
    plVar10 = (longlong *)FUN_146d84614(uVar9,local_88,local_80);
    uVar8 = DAT_14c996ae8;
    if (plVar10 != (longlong *)0x0) {
      FUN_1446ddc76(&local_90,"Indices",1);
      lVar7 = FUN_146d8470e(uVar9,local_90,uVar8);
      uVar8 = DAT_14c996af0;
      if (lVar7 != 0) {
        FUN_1446ddc76(&local_98,"FaceStart",1);
        local_d0 = FUN_146d84614(uVar9,local_98,uVar8);
        uVar8 = DAT_14c996af0;
        if (local_d0 != 0) {
          FUN_1446ddc76(&local_a0,"FaceCount",1);
          local_c0 = FUN_146d84614(uVar9,local_a0,uVar8);
          if (local_c0 != 0) {
            iVar5 = (**(code **)(*plVar10 + 0x60))(plVar10);
            if (0 < iVar5) {
              lVar13 = 0;
              local_c8 = plVar10;
              do {
                lVar11 = (longlong)*(int *)(plVar10[2] + lVar13 * 4);
                lVar14 = (longlong)*(int *)(*(longlong *)(local_c0 + 0x10) + lVar11 * 4);
                local_b8 = lVar13;
                if (0 < lVar14) {
                  lVar11 = (longlong)*(int *)(*(longlong *)(local_d0 + 0x10) + lVar11 * 4);
                  lVar14 = lVar14 + lVar11;
                  lVar13 = lVar11 * 0xc + 8;
                  do {
                    uVar4 = uStack_70;
                    lVar12 = *(longlong *)(lVar7 + 0x10);
                    uVar1 = *(undefined4 *)(lVar12 + lVar13);
                    uVar2 = *(undefined4 *)(lVar12 + -8 + lVar13);
                    uVar3 = *(undefined4 *)(lVar12 + -4 + lVar13);
                    lVar12 = (longlong)(int)uStack_70;
                    uVar6 = (int)uStack_70 + 1;
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
                    if (uStack_70._4_4_ < uVar6) {
                      FUN_141087970(&local_78,uVar4 & 0xffffffff);
                    }
                    *(undefined4 *)(local_78 + lVar12 * 0xc) = uVar2;
                    *(undefined4 *)(local_78 + 4 + lVar12 * 0xc) = uVar3;
                    *(undefined4 *)(local_78 + 8 + lVar12 * 0xc) = uVar1;
                    lVar11 = lVar11 + 1;
                    lVar13 = lVar13 + 0xc;
                  } while (lVar11 < lVar14);
                }
                plVar10 = local_c8;
                lVar13 = local_b8 + 1;
                iVar5 = (**(code **)(*local_c8 + 0x60))(local_c8);
              } while (lVar13 < iVar5);
            }
          }
        }
      }
    }
    FUN_14975474e(local_b0,&local_78);
    local_60 = local_e0;
    local_58 = 0xffffffff;
    local_50 = 0;
    lVar7 = FUN_146fb78aa(local_d8);
    if (lVar7 != 0) {
      FUN_1496f8d2a(lVar7,local_b0,local_e8);
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975474e FUN_14975474e body=621 status=ok
// SIG undefined FUN_14975474e(void)

undefined8 FUN_14975474e(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_148 [44];
  undefined1 local_11c [4];
  uint *local_118;
  undefined8 uStack_110;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_100 = &local_a8;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar8 = (longlong)(int)param_2[1] * 0xc;
    do {
      FUN_1497970d0(&local_100,lVar4);
      lVar4 = lVar4 + 0xc;
      lVar8 = lVar8 + -0xc;
    } while (lVar8 != 0);
  }
  local_118 = (uint *)0x0;
  uStack_110 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_1497971b8(&local_a8,&local_118);
  if ((longlong)(int)uStack_110 != 0) {
    puVar1 = local_118 + (longlong)(int)uStack_110 * 2;
    puVar5 = local_118;
    do {
      if ((int)uStack_a0 != local_74) {
        uVar2 = *puVar5;
        puVar7 = local_68;
        if (local_68 == (undefined1 *)0x0) {
          puVar7 = local_70;
        }
        uVar3 = *(uint *)(puVar7 + (ulonglong)
                                   (local_60 - 1U &
                                   (uVar2 * 0x40 + puVar5[1] + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2)) *
                                   4);
        while (uVar3 != 0xffffffff) {
          puVar6 = (uint *)(local_a8 + (longlong)(int)uVar3 * 0x14);
          if ((*puVar6 == uVar2) &&
             (*(uint *)(local_a8 + 4 + (longlong)(int)uVar3 * 0x14) == puVar5[1]))
          goto LAB_149754900;
          uVar3 = puVar6[3];
        }
      }
      puVar6 = (uint *)0x0;
LAB_149754900:
      if (puVar6[2] == 1) {
        FUN_1447cbafe(&local_f8,local_11c,puVar5,0);
        FUN_1447cbafe(&local_f8,local_11c);
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar1);
  }
  FUN_140619b9c(&local_f8,param_1);
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_f8);
  if (local_118 != (uint *)0x0) {
    FUN_1400020a8();
  }
  local_60 = 0;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146ec7714(&local_a8);
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497549bc FUN_1497549bc body=486 status=ok
// SIG undefined FUN_1497549bc(void)

undefined8 * FUN_1497549bc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2ac00;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0x3f80000000000000;
  param_1[0x34] = 0xffffffff00000000;
  local_98 = param_1 + 0x35;
  param_1[0x35] = 0x400000000;
  param_1[0x36] = 0x3f80000000000000;
  local_90 = (undefined8 *)((longlong)param_1 + 0x1ac);
  local_88 = param_1 + 0x36;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 4;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149754ba4 FUN_149754ba4 body=495 status=ok
// SIG undefined FUN_149754ba4(void)

void FUN_149754ba4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined4 *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_70 = *puVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined4 *)FUN_14972a54c(uVar2,param_2,param_1 + 0x19c);
    local_6c = *puVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined4 *)FUN_14972a54c(uVar2,param_2,param_1 + 0x1a0);
    local_68 = *puVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a4;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined4 *)FUN_146fca67a(uVar2,param_2,param_1 + 0x1a4);
    local_64 = *puVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a8;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined4 *)FUN_14972a54c(uVar2,param_2,param_1 + 0x1a8);
    local_60 = *puVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1ac;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined4 *)FUN_146fca67a(uVar2,param_2,param_1 + 0x1ac);
    local_5c = *puVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1b0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497c2780(lVar1,&local_70,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149754d94 FUN_149754d94 body=424 status=ok
// SIG undefined FUN_149754d94(void)

undefined8 * FUN_149754d94(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2aee0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x274) = 1;
  *(undefined4 *)(param_1 + 0x4f) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  local_88 = (undefined8 *)((longlong)param_1 + 0x27c);
  param_1[0x51] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x52) = 4;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4f;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149754f3e FUN_149754f3e body=815 status=ok
// SIG undefined FUN_149754f3e(void)

void FUN_149754f3e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined1 auStack_318 [32];
  double local_2f8;
  undefined4 local_2f0;
  double local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  undefined1 local_2b0;
  double local_78;
  undefined8 uStack_70;
  double local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  dVar1 = (double)(param_1 + 0x198);
  dVar3 = (double)(**(code **)(*param_3 + 0x20))(param_3);
  if (dVar3 == dVar1) {
    uStack_2e0 = 0xffffffff;
    local_2d8 = 0.0;
    local_2e8 = dVar1;
    uVar4 = FUN_146fb4872(param_1);
    uVar4 = FUN_1496fcf74(uVar4,param_2,dVar1);
    iVar2 = FUN_1401f66f6(uVar4,DAT_14c9974a8);
    if (iVar2 == 0) {
      uStack_2e0 = 0xffffffff;
      local_2d8 = 0.0;
      local_2e8 = dVar1;
      lVar5 = FUN_146fb78aa(param_1);
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_318);
      }
    }
    else {
      puVar6 = (undefined8 *)FUN_146eab21e(uVar4);
      if (puVar6 != (undefined8 *)0x0) {
        dVar3 = (double)(param_1 + 0x248);
        local_78 = 0.0;
        uStack_70 = 0;
        uStack_2e0 = 0xffffffff;
        local_2d8 = 0.0;
        local_2e8 = dVar3;
        lVar5 = FUN_146fb4872(param_1);
        lVar5 = *(longlong *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          uStack_2e0 = 0xffffffff;
          local_2d8 = 0.0;
          local_2e8 = dVar3;
          uVar7 = FUN_146fb4872(param_1);
          uVar7 = FUN_14972af6e(uVar7,param_2,dVar3);
          FUN_146fd58e4(uVar7,&local_2e8);
          local_78 = local_2e8;
          uStack_70 = CONCAT44(uStack_2dc,uStack_2e0);
          FUN_146ea9b2e(&local_2e8,uVar4);
          FUN_146eaa24a(&local_2e8,&local_78,0);
        }
        uStack_2e0 = 0xffffffff;
        local_2d8 = 0.0;
        local_2e8 = (double)(param_1 + 0x278);
        uVar4 = FUN_146fb4872(param_1,&local_2e8);
        pfVar8 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x278);
        local_2e8 = (double)*pfVar8;
        uStack_2e0 = CONCAT31(uStack_2e0._1_3_,*(undefined1 *)(param_1 + 0x268));
        local_2d8 = (double)*(float *)(param_1 + 0x26c);
        local_2d0 = (double)*(float *)(param_1 + 0x270);
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = (double)(param_1 + 0x27c);
        uVar4 = FUN_146fb4872(param_1,&local_60);
        pfVar8 = (float *)FUN_1497c2a0e(uVar4,param_2,param_1 + 0x27c);
        local_2c8 = *pfVar8;
        local_2c4 = pfVar8[1];
        local_2bc = pfVar8[2];
        local_2c0 = pfVar8[3];
        local_2b8 = pfVar8[4];
        local_2b4 = pfVar8[5];
        local_2c8 = local_2c8 * local_2c8 * local_2c8;
        local_2b0 = *(undefined1 *)(param_1 + 0x274);
        local_2f8 = local_78;
        local_2f0 = (undefined4)uStack_70;
        FUN_146ec192c(puVar6,CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar5 != 0) & 0xffffffff,
                      &local_2f8,&local_2e8);
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = dVar1;
        lVar5 = FUN_146fb78aa(param_1,&local_60);
        if (lVar5 != 0) {
          FUN_14972d97e(lVar5,puVar6,param_2);
        }
        if (local_78 != 0.0) {
          FUN_1400020a8();
        }
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149755290 FUN_149755290 body=438 status=ok
// SIG undefined FUN_149755290(void)

undefined8 * FUN_149755290(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2b190;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x80;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x41200000;
  local_90 = param_1 + 0x4e;
  param_1[0x4e] = 0xc41200000;
  local_88 = (undefined8 *)((longlong)param_1 + 0x274);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x26c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149755448 FUN_149755448 body=808 status=ok
// SIG undefined FUN_149755448(void)

void FUN_149755448(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined1 auStack_188 [39];
  undefined1 local_161;
  ulonglong local_160;
  longlong local_158;
  undefined4 local_150;
  longlong local_148;
  double local_140;
  undefined8 local_138;
  undefined1 local_130;
  double local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar4) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar4;
    lVar2 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      local_f0 = 0xffffffff;
      local_e8 = 0;
      local_f8 = lVar4;
      uVar3 = FUN_146fb4872(param_1);
      uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
      FUN_146ecd042(&local_f8,uVar3);
      iVar1 = FUN_1401f66f6(&local_f8,DAT_14c9974a8);
      if (iVar1 == 0) {
        local_140 = (double)CONCAT44(local_140._4_4_,0xffffffff);
        local_138 = 0;
        local_148 = lVar4;
        lVar4 = FUN_146fb78aa(param_1);
        if (lVar4 != 0) {
          FUN_1496fd2a8(lVar4,&local_f8,param_2);
        }
      }
      else {
        lVar2 = param_1 + 0x248;
        local_140._0_4_ = 0xffffffff;
        local_138 = 0;
        local_148 = lVar2;
        lVar5 = FUN_146fb4872(param_1);
        lVar5 = *(longlong *)(lVar5 + 0x48);
        if (lVar5 == 0) {
          local_160 = 0;
          lVar2 = 0;
        }
        else {
          local_140._0_4_ = 0xffffffff;
          local_138 = 0;
          local_148 = lVar2;
          uVar3 = FUN_146fb4872(param_1);
          uVar3 = FUN_14972af6e(uVar3,param_2,lVar2);
          FUN_146fd58e4(uVar3,&local_148);
          local_160 = (ulonglong)local_140._0_4_;
          lVar2 = local_148;
        }
        local_161 = lVar5 != 0;
        local_138 = 0x3fb999999999999a;
        local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(param_1 + 0x268));
        local_108 = 0xffffffff;
        local_100 = 0;
        local_110 = param_1 + 0x270;
        uVar3 = FUN_146fb4872(param_1,&local_110);
        pfVar6 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x270);
        local_128 = (double)*pfVar6;
        local_108 = 0xffffffff;
        local_100 = 0;
        local_110 = param_1 + 0x26c;
        uVar3 = FUN_146fb4872(param_1,&local_110);
        pfVar6 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x26c);
        local_140 = (double)*pfVar6;
        local_130 = 1;
        local_120 = 1;
        local_118 = *(undefined1 *)(param_1 + 0x278);
        local_108 = 0xffffffff;
        local_100 = 0;
        local_110 = param_1 + 0x274;
        uVar3 = FUN_146fb4872(param_1,&local_110);
        puVar7 = (undefined4 *)FUN_146fca67a(uVar3,param_2,param_1 + 0x274);
        local_11c = *puVar7;
        local_150 = (undefined4)local_160;
        local_158 = lVar2;
        FUN_1497066e1(&local_f8,&local_148,local_161);
        local_108 = 0xffffffff;
        local_100 = 0;
        local_110 = lVar4;
        lVar4 = FUN_146fb78aa(param_1,&local_110);
        if (lVar4 != 0) {
          FUN_1496fd2a8(lVar4,&local_f8,param_2);
        }
        if (lVar2 != 0) {
          FUN_1400020a8(lVar2);
        }
      }
      FUN_14054b30a(&local_f8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149755772 FUN_149755772 body=434 status=ok
// SIG undefined FUN_149755772(void)

undefined8 * FUN_149755772(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2b430;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  local_90 = param_1 + 0x49;
  param_1[0x49] = 0x412000003f000000;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  local_88 = (undefined8 *)((longlong)param_1 + 0x254);
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x3e99999a00000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4b;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x24c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149755926 FUN_149755926 body=593 status=ok
// SIG undefined FUN_149755926(void)

void FUN_149755926(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  double local_c8;
  uint local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = param_1 + 0x198;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == lVar8) {
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar8;
    lVar4 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      local_90 = 0xffffffff;
      local_88 = 0;
      local_98 = lVar8;
      uVar5 = FUN_146fb4872(param_1);
      uVar5 = FUN_1496fcf74(uVar5,param_2,lVar8);
      puVar6 = (undefined8 *)FUN_146eab21e(uVar5);
      if (puVar6 != (undefined8 *)0x0) {
        local_90 = 0xffffffff;
        local_88 = 0;
        local_98 = param_1 + 600;
        uVar5 = FUN_146fb4872(param_1,&local_98);
        pfVar7 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 600);
        fVar1 = *pfVar7;
        local_90 = 0xffffffff;
        local_88 = 0;
        local_98 = param_1 + 0x248;
        uVar5 = FUN_146fb4872(param_1,&local_98);
        pfVar7 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x248);
        fVar2 = *pfVar7;
        local_90 = 0xffffffff;
        local_88 = 0;
        local_98 = param_1 + 0x24c;
        uVar5 = FUN_146fb4872(param_1,&local_98);
        pfVar7 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x24c);
        fVar3 = *pfVar7;
        local_90 = 0xffffffff;
        local_88 = 0;
        local_98 = param_1 + 0x254;
        uVar5 = FUN_146fb4872(param_1,&local_98);
        pfVar7 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x254);
        local_b8 = (double)*pfVar7;
        local_b0 = 0;
        local_c0 = (uint)*(byte *)(param_1 + 0x250);
        local_c8 = (double)fVar2;
        FUN_146ebe80c(local_a8,puVar6,SUB84((double)fVar1,0),SUB84((double)fVar3,0));
        local_90 = 0xffffffff;
        local_88 = 0;
        local_98 = lVar8;
        lVar8 = FUN_146fb78aa(param_1,&local_98);
        if (lVar8 != 0) {
          FUN_14972d97e(lVar8,puVar6,param_2);
        }
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149755b78 FUN_149755b78 body=790 status=ok
// SIG undefined FUN_149755b78(void)

undefined8 * FUN_149755b78(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2b910;
  local_90 = param_1 + 0x33;
  FUN_1414db454();
  local_88 = param_1 + 0x49;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 2;
  param_1[0x4e] = 0;
  *(undefined2 *)(param_1 + 0x4f) = 1;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x80;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x32;
  local_b8 = param_1 + 0x54;
  local_b0 = (undefined8 *)((longlong)param_1 + 0x2a4);
  local_a8 = param_1 + 0x55;
  param_1[0x55] = 0x3ff0000000000000;
  local_a0 = param_1 + 0x56;
  param_1[0x56] = 0x4000000000000000;
  local_98 = param_1 + 0x57;
  param_1[0x57] = 0x4024000000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4e;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x50;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149755e90 FUN_149755e90 body=111 status=ok
// SIG undefined FUN_149755e90(void)

longlong * FUN_149755e90(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 149755f00 FUN_149755f00 body=788 status=ok
// SIG undefined FUN_149755f00(void)

undefined8 * FUN_149755f00(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2bbe0;
  local_90 = param_1 + 0x33;
  FUN_1414db454();
  local_88 = param_1 + 0x49;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 2;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x80;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x32;
  local_b8 = param_1 + 0x54;
  local_b0 = (undefined8 *)((longlong)param_1 + 0x2a4);
  local_a8 = param_1 + 0x55;
  param_1[0x55] = 0x3ff0000000000000;
  local_a0 = param_1 + 0x56;
  param_1[0x56] = 0x4000000000000000;
  local_98 = param_1 + 0x57;
  param_1[0x57] = 0x4024000000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4e;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x50;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149756216 FUN_149756216 body=807 status=ok
// SIG undefined FUN_149756216(void)

undefined8 * FUN_149756216(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2c160;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  local_88 = param_1 + 0x49;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  param_1[0x4e] = 0;
  local_b8 = param_1 + 0x4f;
  param_1[0x51] = 0;
  param_1[0x52] = 0x8000000000;
  local_b0 = param_1 + 0x53;
  local_a8 = param_1 + 0x54;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x32;
  local_a0 = param_1 + 0x55;
  param_1[0x55] = 0x3ff0000000000000;
  local_98 = param_1 + 0x56;
  param_1[0x56] = 0x4000000000000000;
  local_90 = param_1 + 0x57;
  param_1[0x57] = 0x4024000000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4e;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975653e FUN_14975653e body=634 status=ok
// SIG undefined FUN_14975653e(void)

void FUN_14975653e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  undefined8 uStack_380;
  longlong local_370;
  undefined4 local_368;
  undefined8 local_360;
  longlong local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined1 local_e8 [176];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar5 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != lVar5) goto LAB_14975657a;
  local_368 = 0xffffffff;
  local_360 = 0;
  local_370 = lVar5;
  uVar3 = FUN_146fb4872(param_1,&local_370);
  uVar3 = FUN_1496fcf74(uVar3,param_2,lVar5);
  FUN_146ecd042(local_e8,uVar3);
  local_368 = 0xffffffff;
  local_360 = 0;
  local_370 = lVar5;
  lVar2 = FUN_146fb4872(param_1,&local_370);
  if (*(longlong *)(lVar2 + 0x48) == 0) {
LAB_149756695:
    local_368 = 0xffffffff;
    local_360 = 0;
    local_370 = lVar5;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_1496fd2a8(lVar5,local_e8,param_2);
    }
  }
  else {
    cVar1 = FUN_146ebe002(local_e8);
    if (cVar1 == '\0') goto LAB_149756695;
    FUN_146ea9b2e(&local_370,local_e8);
    lVar2 = param_1 + 0x248;
    local_388 = 0;
    uStack_380 = 0;
    uStack_f8 = 0xffffffff;
    local_f0 = 0;
    local_100 = lVar2;
    lVar4 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar4 + 0x48) == 0) {
      FUN_146eaac2a(&local_370,&local_100);
      if (local_388 != 0) {
        FUN_1400020a8();
      }
      local_388 = local_100;
      uStack_380 = CONCAT44(uStack_f4,uStack_f8);
    }
    else {
      uStack_f8 = 0xffffffff;
      local_f0 = 0;
      local_100 = lVar2;
      uVar3 = FUN_146fb4872(param_1);
      uVar3 = FUN_14972af6e(uVar3,param_2,lVar2);
      FUN_146fd58e4(uVar3,&local_100);
      if (local_388 != 0) {
        FUN_1400020a8();
      }
      local_388 = local_100;
      uStack_380 = CONCAT44(uStack_f4,uStack_f8);
      FUN_146eaa24a(&local_370,&local_388,0);
    }
    FUN_146ec60f2(local_e8,&local_388);
    uStack_f8 = 0xffffffff;
    local_f0 = 0;
    local_100 = lVar5;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_1496fd2a8(lVar5,local_e8,param_2);
    }
    if (local_388 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14054b30a(local_e8);
LAB_14975657a:
  if ((local_38 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497567ba FUN_1497567ba body=1696 status=ok
// SIG undefined FUN_1497567ba(void)

void FUN_1497567ba(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 *puVar7;
  double *pdVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 auStack_498 [32];
  longlong *local_478;
  undefined1 local_470;
  char local_461;
  longlong local_460;
  longlong local_458;
  undefined4 local_450;
  longlong local_448 [4];
  longlong local_428;
  undefined8 local_420;
  longlong *local_418;
  undefined8 *local_410;
  longlong local_408;
  undefined4 local_400;
  longlong local_3f8 [5];
  undefined8 uStack_3d0;
  longlong local_3c8 [5];
  longlong local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  ulonglong local_378;
  double local_370;
  double local_368;
  undefined2 local_360;
  int local_35c;
  undefined1 local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340;
  longlong local_338;
  longlong *local_328;
  longlong local_318 [4];
  undefined8 local_2f8;
  undefined8 local_2e8 [59];
  undefined1 local_110 [176];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_498;
  lVar10 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 != lVar10) {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 != param_1 + 0x248) goto LAB_14975681a;
  }
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_388 = lVar10;
  uVar4 = FUN_146fb4872(param_1,&local_388);
  uVar4 = FUN_1496fcf74(uVar4,param_2,lVar10);
  FUN_146ecd042(local_110,uVar4);
  local_3c8[2] = 0;
  local_3c8[3] = 0;
  local_3c8[0] = 0;
  local_3c8[1] = 0;
  lVar3 = param_1 + 0x278;
  local_3f8[4] = 0;
  uStack_3d0 = 0;
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_388 = lVar3;
  lVar5 = FUN_146fb4872(param_1,&local_388);
  local_460 = *(longlong *)(lVar5 + 0x48);
  if (local_460 != 0) {
    uStack_380._0_4_ = 0xffffffff;
    local_378 = 0;
    local_388 = lVar3;
    uVar4 = FUN_146fb4872(param_1);
    uVar4 = FUN_14972af6e(uVar4,param_2,lVar3);
    FUN_146fd58e4(uVar4,&local_388);
    local_3f8[4] = local_388;
    uStack_3d0 = CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
    FUN_146ea9b2e(&local_388,local_110);
    FUN_146eaa24a(&local_388,local_3f8 + 4,0);
  }
  local_3f8[2] = 0;
  local_3f8[3] = 0;
  local_3f8[0] = 0;
  local_3f8[1] = 0;
  puVar14 = &local_388;
  uStack_380 = CONCAT44(uStack_380._4_4_,0xffffffff);
  local_378 = 0;
  local_388 = param_1 + 0x298;
  uVar4 = FUN_146fb4872(param_1,puVar14);
  pcVar6 = (char *)FUN_146fca358(uVar4,param_2,param_1 + 0x298);
  local_461 = *pcVar6;
  local_388._0_4_ = (uint)local_388 & 0xffffff00;
  local_388 = CONCAT44(0x1e,(uint)local_388);
  uStack_380 = 0x4008000000000000;
  local_378 = local_378 & 0xffffffffffffff00;
  local_370 = 3.0;
  local_368 = 10.0;
  local_360 = 0;
  local_35c = 0x80;
  local_358 = 1;
  local_350 = 0x3fe0000000000000;
  local_348 = 0;
  local_340 = 0x3ff0000000000000;
  local_338 = 0;
  local_328 = (longlong *)0x0;
  local_2f8 = 0x3ff0000000000000;
  puVar9 = &DAT_14c846480;
  puVar13 = local_2e8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  plVar11 = (longlong *)0x0;
  if (local_461 == '\x01') {
    local_420._0_4_ = 0xffffffff;
    local_418 = (longlong *)0x0;
    local_428 = param_1 + 0x2a0;
    uVar4 = FUN_146fb4872(param_1,&local_428);
    puVar7 = (undefined4 *)FUN_146fca67a(uVar4,param_2,param_1 + 0x2a0);
    local_388 = CONCAT44(*puVar7,(uint)local_388);
    local_420._0_4_ = 0xffffffff;
    local_418 = (longlong *)0x0;
    local_428 = param_1 + 0x2b8;
    uVar4 = FUN_146fb4872(param_1,&local_428);
    pdVar8 = (double *)FUN_1497c2d22(uVar4,param_2,param_1 + 0x2b8);
    local_368 = *pdVar8;
    local_420._0_4_ = 0xffffffff;
    local_418 = (longlong *)0x0;
    local_428 = param_1 + 0x2b0;
    uVar4 = FUN_146fb4872(param_1,&local_428);
    pdVar8 = (double *)FUN_1497c2d22(uVar4,param_2,param_1 + 0x2b0);
    local_370 = *pdVar8;
    local_420 = CONCAT44(local_420._4_4_,0xffffffff);
    local_418 = (longlong *)0x0;
    local_428 = param_1 + 0x2a8;
    uVar4 = FUN_146fb4872(param_1,&local_428);
    pdVar8 = (double *)FUN_1497c2d22(uVar4,param_2,param_1 + 0x2a8);
    uVar4 = local_388;
    uVar15 = 0;
    uVar16 = 0;
    dVar17 = *pdVar8;
    if (0.0 <= dVar17) {
      uVar15 = SUB84(dVar17,0);
      uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
    }
    local_388 = CONCAT71(local_388._1_7_,*(char *)(param_1 + 0x29a) == '\x01');
    uVar1 = local_388;
    local_360 = *(undefined2 *)(param_1 + 0x29b);
    local_388._4_4_ = SUB84(uVar4,4);
    iVar12 = 1;
    if (1 < local_388._4_4_) {
      iVar12 = local_388._4_4_;
    }
    local_388._0_4_ = (uint)uVar1;
    local_388 = CONCAT44(iVar12,(uint)local_388);
    uStack_380 = CONCAT44(uVar16,uVar15);
    uVar15 = 0;
    uVar16 = 0;
    if (0.0 <= local_370) {
      uVar15 = SUB84(local_370,0);
      uVar16 = (undefined4)((ulonglong)local_370 >> 0x20);
    }
    local_370 = (double)CONCAT44(uVar16,uVar15);
    dVar17 = 0.0;
    if (0.0 <= local_368) {
      dVar17 = local_368;
    }
    iVar12 = 0x50a;
    if (local_35c < 0x50a) {
      iVar12 = local_35c;
    }
    local_35c = 4;
    if (4 < iVar12) {
      local_35c = iVar12;
    }
    plVar11 = (longlong *)0x0;
    local_368 = dVar17;
    if (*(char *)(param_1 + 0x299) == '\0') {
      local_478 = &local_408;
      local_408 = local_3f8[4];
      local_400 = (undefined4)uStack_3d0;
      local_470 = 0;
      cVar2 = FUN_1497076af(local_110,local_3f8,&local_388,local_460 != 0);
      plVar11 = (longlong *)0x0;
      if (cVar2 != '\0') {
        plVar11 = local_3f8;
      }
    }
  }
  local_420._0_4_ = 0xffffffff;
  local_418 = (longlong *)0x0;
  local_428 = param_1 + 0x268;
  uVar4 = FUN_146fb4872(param_1,&local_428);
  puVar7 = (undefined4 *)FUN_146fca67a(uVar4,param_2,param_1 + 0x268);
  uVar15 = *puVar7;
  local_420 = CONCAT44(local_420._4_4_,0xffffffff);
  local_418 = (longlong *)0x0;
  local_428 = param_1 + 0x270;
  uVar4 = FUN_146fb4872(param_1,&local_428);
  puVar9 = (undefined8 *)FUN_1497c2d22(uVar4,param_2,param_1 + 0x270);
  local_420 = *puVar9;
  local_428 = CONCAT44(local_428._4_4_,uVar15);
  if ((local_461 == '\0') || (*(char *)(param_1 + 0x299) == '\0')) {
    puVar14 = (undefined8 *)0x0;
  }
  local_478 = local_448;
  local_448[2] = 0;
  local_448[3] = 0;
  local_448[0] = 0;
  local_448[1] = 0;
  local_458 = local_3f8[4];
  local_450 = (undefined4)uStack_3d0;
  local_418 = plVar11;
  local_410 = puVar14;
  FUN_146ec524e(local_110,&local_428,local_460 != 0);
  local_398 = 0xffffffff;
  local_390 = 0;
  local_3a0 = lVar10;
  lVar10 = FUN_146fb78aa(param_1);
  if (lVar10 != 0) {
    FUN_1496fd2a8(lVar10,local_110,param_2);
  }
  FUN_149755e90(local_3c8,local_448);
  local_3a0 = param_1 + 0x248;
  local_398 = 0xffffffff;
  local_390 = 0;
  lVar10 = FUN_146fb78aa(param_1);
  if (lVar10 != 0) {
    FUN_1497c32c4(lVar10,local_3c8,param_2);
  }
  if (local_448[2] != 0) {
    FUN_1400020a8();
  }
  if (local_448[0] != 0) {
    FUN_1400020a8();
  }
  if (local_338 != 0) {
    plVar11 = local_328;
    if (local_328 == (longlong *)0x0) {
      plVar11 = local_318;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_3f8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_3f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_3f8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_3c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_3c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(local_110);
LAB_14975681a:
  if ((local_60 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149756e5c FUN_149756e5c body=189 status=ok
// SIG undefined FUN_149756e5c(void)

undefined8 * FUN_149756e5c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2c400;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = puVar1;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = puVar1;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149756f1a FUN_149756f1a body=254 status=ok
// SIG undefined FUN_149756f1a(void)

void FUN_149756f1a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar4) {
    local_d0 = 0xffffffff;
    local_c8 = 0;
    local_d8 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    FUN_146ecd042(&local_d8,uVar3);
    iVar1 = FUN_1401f66f6(&local_d8,DAT_14c9974a8);
    if (0 < iVar1) {
      FUN_146ec1438(&local_d8);
    }
    local_e8 = 0xffffffff;
    local_e0 = 0;
    local_f0 = lVar4;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496fd2a8(lVar4,&local_d8,param_2);
    }
    FUN_14054b30a(&local_d8);
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975701a FUN_14975701a body=291 status=ok
// SIG undefined FUN_14975701a(void)

undefined8 * FUN_14975701a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2c6b0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x26c) = 1;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975713e FUN_14975713e body=1232 status=ok
// SIG undefined FUN_14975713e(void)

void FUN_14975713e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_6f8 [32];
  undefined1 local_6d8;
  longlong local_6c8;
  undefined4 local_6c0;
  code *local_6b8;
  float **local_6b0;
  longlong local_6a8;
  undefined8 uStack_6a0;
  code *local_698;
  float **local_690;
  longlong local_688;
  undefined8 local_680;
  undefined1 *local_678;
  undefined1 local_670 [168];
  undefined8 local_5c8;
  float *local_5c0;
  undefined4 local_5b8;
  undefined8 local_5b0;
  longlong local_350;
  int local_348;
  float local_33c;
  undefined **local_338;
  undefined1 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2de;
  undefined4 local_2dc;
  undefined1 local_2d8;
  undefined4 local_2d4;
  float **local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined8 local_278;
  undefined4 local_270;
  float *local_268;
  undefined8 local_260;
  undefined8 local_258;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  pfVar1 = (float *)(param_1 + 0x268);
  pfVar6 = (float *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pfVar6 == pfVar1) {
    local_33c = 0.0;
    pfVar6 = (float *)(param_1 + 0x198);
    local_5b8 = 0xffffffff;
    local_5b0 = 0;
    local_5c0 = pfVar6;
    lVar7 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar7 + 0x48) != 0) {
      pfVar2 = (float *)(param_1 + 0x248);
      local_5b8 = 0xffffffff;
      local_5b0 = 0;
      local_5c0 = pfVar2;
      lVar7 = FUN_146fb4872(param_1);
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        local_5b8 = 0xffffffff;
        local_5b0 = 0;
        local_5c0 = pfVar6;
        uVar8 = FUN_146fb4872(param_1,&local_5c0);
        uVar8 = FUN_1496fcf74(uVar8,param_2,pfVar6);
        local_5b8 = 0xffffffff;
        local_5b0 = 0;
        local_5c0 = pfVar2;
        uVar9 = FUN_146fb4872(param_1,&local_5c0);
        uVar9 = FUN_14972af6e(uVar9,param_2,pfVar2);
        cVar4 = FUN_146ebe002(uVar8);
        if (cVar4 != '\0') {
          iVar5 = FUN_1401f66f6(uVar8,DAT_14c9974a8);
          FUN_146fd58e4(uVar9,&local_350);
          FUN_146ea9b2e(&local_5c0,uVar8);
          FUN_146eaa24a(&local_5c0,&local_350,1);
          uVar9 = DAT_14c9974a8;
          if ((iVar5 != 0) && (local_348 != 0)) {
            FUN_1446ddc76(&local_5c8,"TransformToConvexIndices",1);
            uVar9 = FUN_146eab2fc(uVar8,local_5c8,uVar9);
            uVar10 = FUN_146ec600e(uVar8,DAT_14c9974d0,DAT_14c9974c8);
            FUN_1406bf76c(local_670,uVar8);
            local_688 = param_1;
            local_680 = uVar9;
            local_678 = local_670;
            if (*(char *)(param_1 + 0x26d) == '\0') {
              local_268 = &local_33c;
              local_690 = &local_268;
              local_698 = FUN_144613382;
              local_260 = uVar10;
              local_258 = uVar9;
              FUN_14461009c(&local_688,&local_350);
            }
            else {
              local_6a8 = 0;
              uStack_6a0 = 0;
              if (local_348 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(local_348);
              }
              if (local_348 != 0) {
                FUN_14481578e(&local_6a8);
              }
              local_268 = (float *)&local_6a8;
              local_6b8 = FUN_144613538;
              local_6b0 = &local_268;
              FUN_14461009c(&local_688,&local_350);
              local_6d8 = 0;
              FUN_1411b354a(&local_268,0,0,0);
              local_6c8 = local_6a8;
              local_6c0 = (undefined4)uStack_6a0;
              FUN_149706552(uVar8,&local_268,1);
              local_338 = &PTR_FUN_149f64a48;
              local_330 = 1;
              local_328 = 0x3ff8000000000000;
              local_320 = 0x3eb0c6f7a0000000;
              local_318 = 0x3eb0c6f7a0000000;
              local_310 = 0x3fe0000000000000;
              local_308 = 0;
              local_306 = 0;
              local_300 = 0;
              local_2f8 = 0;
              local_2f0 = 0x3fb999999999999a;
              local_2e0 = 0x101;
              local_2de = 1;
              local_2dc = 0x358637bd;
              local_2d8 = 1;
              local_2d4 = 0x3c23d70a;
              local_298 = 0;
              local_290 = 0;
              local_2b8 = 0;
              uStack_2b0 = 0;
              local_2c8 = 0;
              uStack_2c0 = 0;
              local_28c = 0xffffffff00000080;
              local_284 = 0;
              local_278 = 0;
              local_270 = 0;
              local_2e8 = 0xbff0000000000000;
              local_307 = 0;
              local_2d0 = &local_268;
              FUN_146c7648e(&local_338);
              dVar3 = (double)FUN_146ec788e(&local_268,0x3ff0000000000000);
              local_33c = (float)dVar3;
              FUN_146ec77cc(&local_338);
              FUN_141082778(&local_268);
              if (local_6a8 != 0) {
                FUN_1400020a8();
              }
            }
          }
          local_260 = CONCAT44(local_260._4_4_,0xffffffff);
          local_258 = 0;
          local_268 = pfVar1;
          lVar7 = FUN_146fb78aa(param_1);
          if (lVar7 != 0) {
            FUN_1496fe392(lVar7,&local_33c,param_2);
          }
          if (local_350 != 0) {
            FUN_1400020a8();
          }
          goto LAB_14975717e;
        }
      }
    }
    local_5b8 = 0xffffffff;
    local_5b0 = 0;
    local_5c0 = pfVar1;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1496fe392(lVar7,&local_33c,param_2);
    }
  }
LAB_14975717e:
  if ((local_48 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149757610 FUN_149757610 body=869 status=ok
// SIG undefined FUN_149757610(void)

void FUN_149757610(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  undefined4 local_390;
  undefined4 local_388;
  undefined1 local_380;
  undefined1 local_378;
  undefined1 local_370;
  undefined1 local_368;
  undefined1 local_360;
  undefined1 local_354;
  undefined1 local_353;
  undefined1 local_352;
  undefined1 local_351;
  longlong local_350 [2];
  undefined1 local_340 [16];
  undefined8 local_330;
  undefined8 uStack_328;
  longlong local_320;
  undefined4 local_318;
  longlong local_310;
  undefined8 local_308;
  longlong local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  lVar10 = param_1 + 0x198;
  lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar8 == lVar10) {
    lVar8 = param_1 + 0x248;
    local_2f8 = 0xffffffff;
    local_2f0 = 0;
    local_300 = lVar8;
    uVar9 = FUN_146fb4872(param_1,&local_300);
    uVar9 = FUN_14972af6e(uVar9,param_2,lVar8);
    local_80 = 0;
    uStack_78 = 0;
    FUN_144a69486(local_90,uVar9);
    local_2f8 = 0xffffffff;
    local_2f0 = 0;
    local_300 = lVar8;
    lVar8 = FUN_146fb4872(param_1,&local_300);
    if (*(longlong *)(lVar8 + 0x48) == 0) {
      local_2f8 = 0xffffffff;
      local_2f0 = 0;
      local_300 = lVar10;
      uVar9 = FUN_146fb4872(param_1);
      uVar9 = FUN_1496fcf74(uVar9,param_2,lVar10);
      FUN_146ea9b2e(&local_300,uVar9);
      FUN_146eaac2a(&local_300,local_350);
      local_310 = 0;
      local_308 = 0x8000000000;
      uVar7 = FUN_1401f66f6(uVar9,DAT_14c9974a8);
      FUN_146fd579c(&local_320,uVar7,0);
      FUN_146fd594e(&local_320,local_350);
      FUN_144a69486(local_90,&local_320);
      if (local_310 != 0) {
        FUN_1400020a8();
      }
      if (local_350[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar6 = FUN_146fd5e68(local_90);
    if (cVar6 == '\0') {
      local_2f8 = 0xffffffff;
      local_2f0 = 0;
      local_300 = lVar10;
      FUN_14971c3b4(param_1,param_2,&local_300,lVar10);
    }
    else {
      local_2f8 = 0xffffffff;
      local_2f0 = 0;
      local_300 = lVar10;
      uVar9 = FUN_146fb4872(param_1);
      uVar9 = FUN_1496fcf74(uVar9,param_2,lVar10);
      FUN_146ecd042(&local_300,uVar9);
      uVar2 = *(undefined1 *)(param_1 + 0x26b);
      uVar3 = *(undefined1 *)(param_1 + 0x26e);
      uVar4 = *(undefined1 *)(param_1 + 0x26d);
      uVar5 = *(undefined1 *)(param_1 + 0x26a);
      local_353 = *(undefined1 *)(param_1 + 0x26f);
      uVar7 = *(undefined4 *)(param_1 + 0x278);
      uVar1 = *(undefined4 *)(param_1 + 0x274);
      local_354 = *(undefined1 *)(param_1 + 0x270);
      local_351 = *(undefined1 *)(param_1 + 0x268);
      local_352 = *(undefined1 *)(param_1 + 0x269);
      local_330 = 0;
      uStack_328 = 0;
      FUN_144a69486(local_340,local_90);
      local_380 = local_353;
      local_398 = local_354;
      local_390 = uVar1;
      local_388 = uVar7;
      local_378 = uVar5;
      local_370 = uVar4;
      local_368 = uVar3;
      local_360 = uVar2;
      FUN_14970d7de(&local_300,local_340,local_351,local_352);
      local_318 = 0xffffffff;
      local_310 = 0;
      local_320 = lVar10;
      lVar10 = FUN_146fb78aa(param_1);
      if (lVar10 != 0) {
        FUN_1496fd2a8(lVar10,&local_300,param_2);
      }
      FUN_14054b30a(&local_300);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149757976 FUN_149757976 body=749 status=ok
// SIG undefined FUN_149757976(void)

void FUN_149757976(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  undefined1 local_350;
  longlong local_340 [2];
  undefined1 local_330 [16];
  undefined8 local_320;
  undefined8 uStack_318;
  longlong local_310;
  undefined4 local_308;
  longlong local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined1 local_80 [16];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar8 = param_1 + 0x198;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar6 == lVar8) {
    lVar6 = param_1 + 0x248;
    plVar9 = &local_2f0;
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar6;
    uVar7 = FUN_146fb4872(param_1,plVar9);
    uVar7 = FUN_14972af6e(uVar7,param_2,lVar6);
    local_70 = 0;
    uStack_68 = 0;
    FUN_144a69486(local_80,uVar7);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar6;
    lVar6 = FUN_146fb4872(param_1,&local_2f0);
    if (*(longlong *)(lVar6 + 0x48) == 0) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar8;
      uVar7 = FUN_146fb4872(param_1);
      uVar7 = FUN_1496fcf74(uVar7,param_2,lVar8);
      FUN_146ea9b2e(&local_2f0,uVar7);
      FUN_146eaac2a(&local_2f0,local_340);
      plVar9 = &local_310;
      local_300 = 0;
      local_2f8 = 0x8000000000;
      uVar5 = FUN_1401f66f6(uVar7,DAT_14c9974a8);
      FUN_146fd579c(plVar9,uVar5,0);
      FUN_146fd594e(plVar9,local_340);
      FUN_144a69486(local_80,plVar9);
      if (local_300 != 0) {
        FUN_1400020a8();
      }
      if (local_340[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar4 = FUN_146fd5e68(local_80);
    if (cVar4 == '\0') {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar8;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar8);
    }
    else {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar8;
      uVar7 = FUN_146fb4872(param_1);
      uVar7 = FUN_1496fcf74(uVar7,param_2,lVar8);
      FUN_146ecd042(&local_2f0,uVar7);
      uVar1 = *(undefined1 *)(param_1 + 0x270);
      uVar5 = *(undefined4 *)(param_1 + 0x26c);
      uVar2 = *(undefined1 *)(param_1 + 0x268);
      uVar3 = *(undefined1 *)(param_1 + 0x269);
      local_320 = 0;
      uStack_318 = 0;
      FUN_144a69486(local_330,local_80);
      local_358 = uVar5;
      local_350 = uVar1;
      FUN_14970dd52(&local_2f0,local_330,CONCAT71(0xffffff,uVar2),
                    CONCAT71((int7)((ulonglong)plVar9 >> 8),uVar3) & 0xffffffff);
      local_308 = 0xffffffff;
      local_300 = 0;
      local_310 = lVar8;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_1496fd2a8(lVar8,&local_2f0,param_2);
      }
      FUN_14054b30a(&local_2f0);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149757c64 FUN_149757c64 body=726 status=ok
// SIG undefined FUN_149757c64(void)

void FUN_149757c64(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_368 [40];
  longlong local_340 [2];
  undefined1 local_330 [16];
  undefined8 local_320;
  undefined8 uStack_318;
  longlong local_310;
  undefined4 local_308;
  longlong local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined1 local_80 [16];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar6 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar6) {
    lVar3 = param_1 + 0x248;
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    uVar4 = FUN_146fb4872(param_1,&local_2f0);
    uVar4 = FUN_14972af6e(uVar4,param_2,lVar3);
    local_70 = 0;
    uStack_68 = 0;
    FUN_144a69486(local_80,uVar4);
    local_2e8 = 0xffffffff;
    local_2e0 = 0;
    local_2f0 = lVar3;
    lVar3 = FUN_146fb4872(param_1,&local_2f0);
    if (*(longlong *)(lVar3 + 0x48) == 0) {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar6;
      uVar4 = FUN_146fb4872(param_1);
      uVar4 = FUN_1496fcf74(uVar4,param_2,lVar6);
      FUN_146ea9b2e(&local_2f0,uVar4);
      FUN_146eaac2a(&local_2f0,local_340);
      local_300 = 0;
      local_2f8 = 0x8000000000;
      uVar2 = FUN_1401f66f6(uVar4,DAT_14c9974a8);
      FUN_146fd579c(&local_310,uVar2,0);
      FUN_146fd594e(&local_310,local_340);
      FUN_144a69486(local_80,&local_310);
      if (local_300 != 0) {
        FUN_1400020a8();
      }
      if (local_340[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar1 = FUN_146fd5e68(local_80);
    if (cVar1 == '\0') {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar6;
      FUN_14971c3b4(param_1,param_2,&local_2f0,lVar6);
    }
    else {
      local_2e8 = 0xffffffff;
      local_2e0 = 0;
      local_2f0 = lVar6;
      uVar4 = FUN_146fb4872(param_1);
      uVar4 = FUN_1496fcf74(uVar4,param_2,lVar6);
      FUN_146ecd042(&local_2f0,uVar4);
      local_308 = 0xffffffff;
      local_300 = 0;
      local_310 = param_1 + 0x26c;
      uVar4 = FUN_146fb4872(param_1,&local_310);
      puVar5 = (undefined4 *)FUN_14972a54c(uVar4,param_2,param_1 + 0x26c);
      uVar2 = *puVar5;
      local_320 = 0;
      uStack_318 = 0;
      FUN_144a69486(local_330,local_80);
      FUN_14970de3e(&local_2f0,local_330,uVar2);
      local_308 = 0xffffffff;
      local_300 = 0;
      local_310 = lVar6;
      lVar6 = FUN_146fb78aa(param_1,&local_310);
      if (lVar6 != 0) {
        FUN_1496fd2a8(lVar6,&local_2f0,param_2);
      }
      FUN_14054b30a(&local_2f0);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149757f3c FUN_149757f3c body=251 status=ok
// SIG undefined FUN_149757f3c(void)

void FUN_149757f3c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar3) {
    local_e0 = 0xffffffff;
    local_d8 = 0;
    local_e8 = lVar3;
    uVar2 = FUN_146fb4872(param_1);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar3);
    FUN_146ecd042(&local_e8,uVar2);
    FUN_1446052d8(&local_e8,*(undefined1 *)(param_1 + 0x248),*(undefined1 *)(param_1 + 0x249),
                  *(undefined1 *)(param_1 + 0x24a));
    local_f8 = 0xffffffff;
    local_f0 = 0;
    local_100 = lVar3;
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fd2a8(lVar3,&local_e8,param_2);
    }
    FUN_14054b30a(&local_e8);
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149758038 FUN_149758038 body=68 status=ok
// SIG undefined FUN_149758038(void)

undefined8 * FUN_149758038(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be3ae70;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975807c FUN_14975807c body=38 status=ok
// SIG undefined FUN_14975807c(void)

undefined8 FUN_14975807c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatMathExpressionDataflowNode",1);
  return param_2;
}



// FUNCTION 1497580a2 FUN_1497580a2 body=38 status=ok
// SIG undefined FUN_1497580a2(void)

undefined8 FUN_1497580a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatMathExpression",1);
  return param_2;
}



// FUNCTION 1497580c8 FUN_1497580c8 body=38 status=ok
// SIG undefined FUN_1497580c8(void)

undefined8 FUN_1497580c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 1497580ee FUN_1497580ee body=32 status=ok
// SIG undefined FUN_1497580ee(void)

undefined8 FUN_1497580ee(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975810e FUN_14975810e body=123 status=ok
// SIG undefined FUN_14975810e(void)

void FUN_14975810e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25660 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25660 = FUN_140002ddd(FUN_14675622b,uVar1,L"FloatMathExpressionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25660,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149758186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975818a FUN_14975818a body=93 status=ok
// SIG undefined FUN_14975818a(void)

void FUN_14975818a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25660 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25660 = FUN_140002ddd(FUN_14675622b,uVar2,L"FloatMathExpressionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25660,param_1);
  return;
}



// FUNCTION 1497581e8 FUN_1497581e8 body=55 status=ok
// SIG undefined FUN_1497581e8(void)

void FUN_1497581e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25660 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25660 = FUN_140002ddd(FUN_14675622b,uVar1,L"FloatMathExpressionDataflowNode");
  }
  return;
}



// FUNCTION 149758220 FUN_149758220 body=233 status=ok
// SIG undefined FUN_149758220(void)

ulonglong FUN_149758220(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FFloatMathExpressionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497582ba;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497582ba;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497582ba;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497582ba:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14975830a FUN_14975830a body=68 status=ok
// SIG undefined FUN_14975830a(void)

undefined8 * FUN_14975830a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be3af90;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975834e FUN_14975834e body=38 status=ok
// SIG undefined FUN_14975834e(void)

undefined8 FUN_14975834e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMathExpressionDataflowNode",1);
  return param_2;
}



// FUNCTION 149758374 FUN_149758374 body=38 status=ok
// SIG undefined FUN_149758374(void)

undefined8 FUN_149758374(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MathExpression",1);
  return param_2;
}



// FUNCTION 14975839a FUN_14975839a body=38 status=ok
// SIG undefined FUN_14975839a(void)

undefined8 FUN_14975839a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149faf950,1);
  return param_2;
}



// FUNCTION 1497583c0 FUN_1497583c0 body=32 status=ok
// SIG undefined FUN_1497583c0(void)

undefined8 FUN_1497583c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497583e0 FUN_1497583e0 body=123 status=ok
// SIG undefined FUN_1497583e0(void)

void FUN_1497583e0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25678 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25678 = FUN_140002ddd(FUN_1467562c1,uVar1,L"MathExpressionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25678,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149758458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975845c FUN_14975845c body=93 status=ok
// SIG undefined FUN_14975845c(void)

void FUN_14975845c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25678 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25678 = FUN_140002ddd(FUN_1467562c1,uVar2,L"MathExpressionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25678,param_1);
  return;
}



// FUNCTION 1497584ba FUN_1497584ba body=55 status=ok
// SIG undefined FUN_1497584ba(void)

void FUN_1497584ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25678 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25678 = FUN_140002ddd(FUN_1467562c1,uVar1,L"MathExpressionDataflowNode");
  }
  return;
}



// FUNCTION 1497584f2 FUN_1497584f2 body=233 status=ok
// SIG undefined FUN_1497584f2(void)

ulonglong FUN_1497584f2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMathExpressionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975858c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975858c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975858c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975858c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149758610 FUN_149758610 body=63 status=ok
// SIG undefined FUN_149758610(void)

undefined1 FUN_149758610(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149758ad8(param_2,param_3);
    param_3 = param_3 + 0x298;
    param_2 = param_2 + 0x298;
  }
  return 1;
}



// FUNCTION 149758678 FUN_149758678 body=59 status=ok
// SIG undefined FUN_149758678(void)

undefined8 FUN_149758678(longlong *param_1)

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



// FUNCTION 1497586c4 FUN_1497586c4 body=40 status=ok
// SIG undefined FUN_1497586c4(void)

void FUN_1497586c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    FUN_149758a9c(param_2);
    *(undefined1 *)(param_2 + 0x298) = 0;
  }
  return;
}



// FUNCTION 14975873a FUN_14975873a body=173 status=ok
// SIG undefined FUN_14975873a(void)

undefined8 * FUN_14975873a(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be492a0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 10;
  param_1[0x34] = 0x3f8000003e800000;
  param_1[0x35] = &DAT_200000002;
  *(undefined4 *)(param_1 + 0x36) = 2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1c6) = 1;
  FUN_1414db454(param_1 + 0x39);
  param_1[0x51] = 0;
  param_1[0x52] = 0x8000000000;
  return param_1;
}



// FUNCTION 1497587e8 FUN_1497587e8 body=38 status=ok
// SIG undefined FUN_1497587e8(void)

undefined8 FUN_1497587e8(undefined8 param_1,int param_2)

{
  FUN_149758a9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975880e FUN_14975880e body=38 status=ok
// SIG undefined FUN_14975880e(void)

undefined8 FUN_14975880e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FAutoClusterDataflowNode",1);
  return param_2;
}



// FUNCTION 149758834 FUN_149758834 body=38 status=ok
// SIG undefined FUN_149758834(void)

undefined8 FUN_149758834(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AutoCluster",1);
  return param_2;
}



// FUNCTION 14975885a FUN_14975885a body=38 status=ok
// SIG undefined FUN_14975885a(void)

undefined8 FUN_14975885a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 149758880 FUN_149758880 body=32 status=ok
// SIG undefined FUN_149758880(void)

undefined8 FUN_149758880(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497588a0 FUN_1497588a0 body=123 status=ok
// SIG undefined FUN_1497588a0(void)

void FUN_1497588a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c00 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c00 = FUN_140002ddd(FUN_1467523b5,uVar1,L"AutoClusterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24c00,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149758918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975891c FUN_14975891c body=93 status=ok
// SIG undefined FUN_14975891c(void)

void FUN_14975891c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24c00 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24c00 = FUN_140002ddd(FUN_1467523b5,uVar2,L"AutoClusterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24c00,param_1);
  return;
}



// FUNCTION 14975897a FUN_14975897a body=55 status=ok
// SIG undefined FUN_14975897a(void)

void FUN_14975897a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c00 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c00 = FUN_140002ddd(FUN_1467523b5,uVar1,L"AutoClusterDataflowNode");
  }
  return;
}



// FUNCTION 1497589b2 FUN_1497589b2 body=233 status=ok
// SIG undefined FUN_1497589b2(void)

ulonglong FUN_1497589b2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FAutoClusterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149758a4c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149758a4c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149758a4c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149758a4c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149758a9c FUN_149758a9c body=60 status=ok
// SIG undefined FUN_149758a9c(void)

void FUN_149758a9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be492a0;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x39);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149758ad8 FUN_149758ad8 body=110 status=ok
// SIG undefined FUN_149758ad8(void)

longlong FUN_149758ad8(longlong param_1,longlong param_2)

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
  
  FUN_146fc06e2();
  uVar1 = *(undefined4 *)(param_2 + 0x19c);
  uVar2 = *(undefined4 *)(param_2 + 0x1a0);
  uVar3 = *(undefined4 *)(param_2 + 0x1a4);
  uVar4 = *(undefined4 *)(param_2 + 0x1a8);
  uVar5 = *(undefined4 *)(param_2 + 0x1ac);
  uVar6 = *(undefined4 *)(param_2 + 0x1b0);
  uVar7 = *(undefined4 *)(param_2 + 0x1b4);
  uVar8 = *(undefined4 *)(param_2 + 0x1b7);
  uVar9 = *(undefined4 *)(param_2 + 0x1bb);
  uVar10 = *(undefined4 *)(param_2 + 0x1bf);
  uVar11 = *(undefined4 *)(param_2 + 0x1c3);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  *(undefined4 *)(param_1 + 0x1b0) = uVar6;
  *(undefined4 *)(param_1 + 0x1b4) = uVar7;
  *(undefined4 *)(param_1 + 0x1b7) = uVar8;
  *(undefined4 *)(param_1 + 0x1bb) = uVar9;
  *(undefined4 *)(param_1 + 0x1bf) = uVar10;
  *(undefined4 *)(param_1 + 0x1c3) = uVar11;
  FUN_146ecd102(param_1 + 0x1c8,param_2 + 0x1c8);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x278,param_2 + 0x278);
  }
  return param_1;
}



// FUNCTION 149758b48 FUN_149758b48 body=72 status=ok
// SIG undefined FUN_149758b48(void)

void FUN_149758b48(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be49530;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 149758b90 FUN_149758b90 body=72 status=ok
// SIG undefined FUN_149758b90(void)

void FUN_149758b90(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be49530;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 149758bfc FUN_149758bfc body=63 status=ok
// SIG undefined FUN_149758bfc(void)

undefined1 FUN_149758bfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149759016(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 149758c64 FUN_149758c64 body=59 status=ok
// SIG undefined FUN_149758c64(void)

undefined8 FUN_149758c64(longlong *param_1)

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



// FUNCTION 149758cb0 FUN_149758cb0 body=40 status=ok
// SIG undefined FUN_149758cb0(void)

void FUN_149758cb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_149758fda(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 149758d26 FUN_149758d26 body=38 status=ok
// SIG undefined FUN_149758d26(void)

undefined8 FUN_149758d26(undefined8 param_1,int param_2)

{
  FUN_149758fda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149758d4c FUN_149758d4c body=38 status=ok
// SIG undefined FUN_149758d4c(void)

undefined8 FUN_149758d4c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClusterFlattenDataflowNode",1);
  return param_2;
}



// FUNCTION 149758d72 FUN_149758d72 body=38 status=ok
// SIG undefined FUN_149758d72(void)

undefined8 FUN_149758d72(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Flatten",1);
  return param_2;
}



// FUNCTION 149758d98 FUN_149758d98 body=38 status=ok
// SIG undefined FUN_149758d98(void)

undefined8 FUN_149758d98(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 149758dbe FUN_149758dbe body=32 status=ok
// SIG undefined FUN_149758dbe(void)

undefined8 FUN_149758dbe(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149758dde FUN_149758dde body=123 status=ok
// SIG undefined FUN_149758dde(void)

void FUN_149758dde(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c18 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c18 = FUN_140002ddd(FUN_14675244b,uVar1,L"ClusterFlattenDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24c18,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149758e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149758e5a FUN_149758e5a body=93 status=ok
// SIG undefined FUN_149758e5a(void)

void FUN_149758e5a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24c18 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24c18 = FUN_140002ddd(FUN_14675244b,uVar2,L"ClusterFlattenDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24c18,param_1);
  return;
}



// FUNCTION 149758eb8 FUN_149758eb8 body=55 status=ok
// SIG undefined FUN_149758eb8(void)

void FUN_149758eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c18 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c18 = FUN_140002ddd(FUN_14675244b,uVar1,L"ClusterFlattenDataflowNode");
  }
  return;
}



// FUNCTION 149758ef0 FUN_149758ef0 body=233 status=ok
// SIG undefined FUN_149758ef0(void)

ulonglong FUN_149758ef0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FClusterFlattenDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149758f8a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149758f8a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149758f8a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149758f8a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149758fda FUN_149758fda body=60 status=ok
// SIG undefined FUN_149758fda(void)

void FUN_149758fda(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be49530;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149759016 FUN_149759016 body=68 status=ok
// SIG undefined FUN_149759016(void)

longlong FUN_149759016(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14975905c FUN_14975905c body=72 status=ok
// SIG undefined FUN_14975905c(void)

void FUN_14975905c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be497d0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 1497590a4 FUN_1497590a4 body=72 status=ok
// SIG undefined FUN_1497590a4(void)

void FUN_1497590a4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be497d0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 149759110 FUN_149759110 body=63 status=ok
// SIG undefined FUN_149759110(void)

undefined1 FUN_149759110(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14975952a(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 149759178 FUN_149759178 body=59 status=ok
// SIG undefined FUN_149759178(void)

undefined8 FUN_149759178(longlong *param_1)

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



// FUNCTION 1497591c4 FUN_1497591c4 body=40 status=ok
// SIG undefined FUN_1497591c4(void)

void FUN_1497591c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_1497594ee(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14975923a FUN_14975923a body=38 status=ok
// SIG undefined FUN_14975923a(void)

undefined8 FUN_14975923a(undefined8 param_1,int param_2)

{
  FUN_1497594ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149759260 FUN_149759260 body=38 status=ok
// SIG undefined FUN_149759260(void)

undefined8 FUN_149759260(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClusterUnclusterDataflowNode",1);
  return param_2;
}



// FUNCTION 149759286 FUN_149759286 body=38 status=ok
// SIG undefined FUN_149759286(void)

undefined8 FUN_149759286(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Uncluster",1);
  return param_2;
}



// FUNCTION 1497592ac FUN_1497592ac body=38 status=ok
// SIG undefined FUN_1497592ac(void)

undefined8 FUN_1497592ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 1497592d2 FUN_1497592d2 body=32 status=ok
// SIG undefined FUN_1497592d2(void)

undefined8 FUN_1497592d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497592f2 FUN_1497592f2 body=123 status=ok
// SIG undefined FUN_1497592f2(void)

void FUN_1497592f2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c30 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c30 = FUN_140002ddd(FUN_1467524e1,uVar1,L"ClusterUnclusterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24c30,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975936a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975936e FUN_14975936e body=93 status=ok
// SIG undefined FUN_14975936e(void)

void FUN_14975936e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24c30 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24c30 = FUN_140002ddd(FUN_1467524e1,uVar2,L"ClusterUnclusterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24c30,param_1);
  return;
}



// FUNCTION 1497593cc FUN_1497593cc body=55 status=ok
// SIG undefined FUN_1497593cc(void)

void FUN_1497593cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c30 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c30 = FUN_140002ddd(FUN_1467524e1,uVar1,L"ClusterUnclusterDataflowNode");
  }
  return;
}



// FUNCTION 149759404 FUN_149759404 body=233 status=ok
// SIG undefined FUN_149759404(void)

ulonglong FUN_149759404(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FClusterUnclusterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975949e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975949e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975949e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975949e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497594ee FUN_1497594ee body=60 status=ok
// SIG undefined FUN_1497594ee(void)

void FUN_1497594ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be497d0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975952a FUN_14975952a body=68 status=ok
// SIG undefined FUN_14975952a(void)

longlong FUN_14975952a(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 149759570 FUN_149759570 body=72 status=ok
// SIG undefined FUN_149759570(void)

void FUN_149759570(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be49a70;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 1497595b8 FUN_1497595b8 body=72 status=ok
// SIG undefined FUN_1497595b8(void)

void FUN_1497595b8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be49a70;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 149759624 FUN_149759624 body=63 status=ok
// SIG undefined FUN_149759624(void)

undefined1 FUN_149759624(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149759a3e(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14975968c FUN_14975968c body=59 status=ok
// SIG undefined FUN_14975968c(void)

undefined8 FUN_14975968c(longlong *param_1)

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



// FUNCTION 1497596d8 FUN_1497596d8 body=40 status=ok
// SIG undefined FUN_1497596d8(void)

void FUN_1497596d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_149759a02(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14975974e FUN_14975974e body=38 status=ok
// SIG undefined FUN_14975974e(void)

undefined8 FUN_14975974e(undefined8 param_1,int param_2)

{
  FUN_149759a02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149759774 FUN_149759774 body=38 status=ok
// SIG undefined FUN_149759774(void)

undefined8 FUN_149759774(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClusterDataflowNode",1);
  return param_2;
}



// FUNCTION 14975979a FUN_14975979a body=38 status=ok
// SIG undefined FUN_14975979a(void)

undefined8 FUN_14975979a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Cluster",1);
  return param_2;
}



// FUNCTION 1497597c0 FUN_1497597c0 body=38 status=ok
// SIG undefined FUN_1497597c0(void)

undefined8 FUN_1497597c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 1497597e6 FUN_1497597e6 body=32 status=ok
// SIG undefined FUN_1497597e6(void)

undefined8 FUN_1497597e6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149759806 FUN_149759806 body=123 status=ok
// SIG undefined FUN_149759806(void)

void FUN_149759806(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c48 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c48 = FUN_140002ddd(FUN_146752577,uVar1,L"ClusterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24c48,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975987e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149759882 FUN_149759882 body=93 status=ok
// SIG undefined FUN_149759882(void)

void FUN_149759882(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24c48 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24c48 = FUN_140002ddd(FUN_146752577,uVar2,L"ClusterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24c48,param_1);
  return;
}



// FUNCTION 1497598e0 FUN_1497598e0 body=55 status=ok
// SIG undefined FUN_1497598e0(void)

void FUN_1497598e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c48 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c48 = FUN_140002ddd(FUN_146752577,uVar1,L"ClusterDataflowNode");
  }
  return;
}



// FUNCTION 149759918 FUN_149759918 body=233 status=ok
// SIG undefined FUN_149759918(void)

ulonglong FUN_149759918(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FClusterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497599b2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497599b2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497599b2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497599b2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149759a02 FUN_149759a02 body=60 status=ok
// SIG undefined FUN_149759a02(void)

void FUN_149759a02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be49a70;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149759a3e FUN_149759a3e body=68 status=ok
// SIG undefined FUN_149759a3e(void)

longlong FUN_149759a3e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 149759a84 FUN_149759a84 body=98 status=ok
// SIG undefined FUN_149759a84(void)

void FUN_149759a84(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be49e00;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)(param_2 + 0x4e) = 0x101;
  return;
}



// FUNCTION 149759ae6 FUN_149759ae6 body=98 status=ok
// SIG undefined FUN_149759ae6(void)

void FUN_149759ae6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be49e00;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)(param_2 + 0x4e) = 0x101;
  return;
}



// FUNCTION 149759b6c FUN_149759b6c body=63 status=ok
// SIG undefined FUN_149759b6c(void)

undefined1 FUN_149759b6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149759f86(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 149759bd4 FUN_149759bd4 body=59 status=ok
// SIG undefined FUN_149759bd4(void)

undefined8 FUN_149759bd4(longlong *param_1)

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



// FUNCTION 149759c20 FUN_149759c20 body=40 status=ok
// SIG undefined FUN_149759c20(void)

void FUN_149759c20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_149759f4a(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}


