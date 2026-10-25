// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459d0a0e FUN_1459d0a0e body=40 status=ok
// SIG undefined FUN_1459d0a0e(void)

undefined8 FUN_1459d0a0e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0a36 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d0a4a FUN_1459d0a4a body=31 status=ok
// SIG undefined FUN_1459d0a4a(void)

undefined8 FUN_1459d0a4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0a78 FUN_1459d0a78 body=31 status=ok
// SIG undefined FUN_1459d0a78(void)

undefined8 FUN_1459d0a78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0a98 FUN_1459d0a98 body=40 status=ok
// SIG undefined FUN_1459d0a98(void)

undefined8 FUN_1459d0a98(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0ac0 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459d0ad4 FUN_1459d0ad4 body=31 status=ok
// SIG undefined FUN_1459d0ad4(void)

undefined8 FUN_1459d0ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0b02 FUN_1459d0b02 body=31 status=ok
// SIG undefined FUN_1459d0b02(void)

undefined8 FUN_1459d0b02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0b22 FUN_1459d0b22 body=40 status=ok
// SIG undefined FUN_1459d0b22(void)

undefined8 FUN_1459d0b22(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0b4a thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d0b50 FUN_1459d0b50 body=40 status=ok
// SIG undefined FUN_1459d0b50(void)

undefined8 FUN_1459d0b50(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0b78 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d0b8c FUN_1459d0b8c body=31 status=ok
// SIG undefined FUN_1459d0b8c(void)

undefined8 FUN_1459d0b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0bba FUN_1459d0bba body=40 status=ok
// SIG undefined FUN_1459d0bba(void)

undefined8 FUN_1459d0bba(undefined8 param_1,int param_2)

{
  FUN_1459d0be2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0be2 FUN_1459d0be2 body=126 status=ok
// SIG undefined FUN_1459d0be2(void)

void FUN_1459d0be2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b951070;
  param_1[0x19] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    FUN_140115c12(param_1 + 0x1b,0);
  }
  param_1[0x1a] = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_141108dd0(param_1);
  return;
}



// FUNCTION 1459d0c6c FUN_1459d0c6c body=34 status=ok
// SIG undefined FUN_1459d0c6c(void)

void FUN_1459d0c6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba271a0;
  return;
}



// FUNCTION 1459d0c9a FUN_1459d0c9a body=34 status=ok
// SIG undefined FUN_1459d0c9a(void)

void FUN_1459d0c9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba32900;
  return;
}



// FUNCTION 1459d0cc8 FUN_1459d0cc8 body=34 status=ok
// SIG undefined FUN_1459d0cc8(void)

void FUN_1459d0cc8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba33960;
  return;
}



// FUNCTION 1459d0cf6 FUN_1459d0cf6 body=34 status=ok
// SIG undefined FUN_1459d0cf6(void)

void FUN_1459d0cf6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba35f20;
  return;
}



// FUNCTION 1459d0d24 FUN_1459d0d24 body=34 status=ok
// SIG undefined FUN_1459d0d24(void)

void FUN_1459d0d24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba370d0;
  return;
}



// FUNCTION 1459d0d52 FUN_1459d0d52 body=34 status=ok
// SIG undefined FUN_1459d0d52(void)

void FUN_1459d0d52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba39c50;
  return;
}



// FUNCTION 1459d0d80 FUN_1459d0d80 body=34 status=ok
// SIG undefined FUN_1459d0d80(void)

void FUN_1459d0d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba4d1d0;
  return;
}



// FUNCTION 1459d0dae FUN_1459d0dae body=34 status=ok
// SIG undefined FUN_1459d0dae(void)

void FUN_1459d0dae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba5b910;
  return;
}



// FUNCTION 1459d0ddc FUN_1459d0ddc body=34 status=ok
// SIG undefined FUN_1459d0ddc(void)

void FUN_1459d0ddc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba65c40;
  return;
}



// FUNCTION 1459d0e0a FUN_1459d0e0a body=34 status=ok
// SIG undefined FUN_1459d0e0a(void)

void FUN_1459d0e0a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba69040;
  return;
}



// FUNCTION 1459d0e38 FUN_1459d0e38 body=34 status=ok
// SIG undefined FUN_1459d0e38(void)

void FUN_1459d0e38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba6a4f0;
  return;
}



// FUNCTION 1459d0e66 FUN_1459d0e66 body=34 status=ok
// SIG undefined FUN_1459d0e66(void)

void FUN_1459d0e66(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba6fff0;
  return;
}



// FUNCTION 1459d0e94 FUN_1459d0e94 body=34 status=ok
// SIG undefined FUN_1459d0e94(void)

void FUN_1459d0e94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba72240;
  return;
}



// FUNCTION 1459d0ec2 FUN_1459d0ec2 body=34 status=ok
// SIG undefined FUN_1459d0ec2(void)

void FUN_1459d0ec2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba759f0;
  return;
}



// FUNCTION 1459d0ef0 FUN_1459d0ef0 body=34 status=ok
// SIG undefined FUN_1459d0ef0(void)

void FUN_1459d0ef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba82ff0;
  return;
}



// FUNCTION 1459d0f1e FUN_1459d0f1e body=34 status=ok
// SIG undefined FUN_1459d0f1e(void)

void FUN_1459d0f1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ba8b1f0;
  return;
}



// FUNCTION 1459d0f4c FUN_1459d0f4c body=34 status=ok
// SIG undefined FUN_1459d0f4c(void)

void FUN_1459d0f4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bab2bb0;
  return;
}



// FUNCTION 1459d0f7a FUN_1459d0f7a body=34 status=ok
// SIG undefined FUN_1459d0f7a(void)

void FUN_1459d0f7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bb46b80;
  return;
}



// FUNCTION 1459d0f9c FUN_1459d0f9c body=40 status=ok
// SIG undefined FUN_1459d0f9c(void)

undefined8 FUN_1459d0f9c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d0fc4 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d0fca FUN_1459d0fca body=11 status=ok
// SIG undefined FUN_1459d0fca(void)

void FUN_1459d0fca(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001459d0fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1459d0fd6 FUN_1459d0fd6 body=34 status=ok
// SIG undefined FUN_1459d0fd6(void)

void FUN_1459d0fd6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = FUsdUtilitiesModule::vftable;
  return;
}



// FUNCTION 1459d1004 FUN_1459d1004 body=34 status=ok
// SIG undefined FUN_1459d1004(void)

void FUN_1459d1004(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bc32a50;
  return;
}



// FUNCTION 1459d1032 FUN_1459d1032 body=34 status=ok
// SIG undefined FUN_1459d1032(void)

void FUN_1459d1032(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bc5de90;
  return;
}



// FUNCTION 1459d1054 FUN_1459d1054 body=40 status=ok
// SIG undefined FUN_1459d1054(void)

undefined8 FUN_1459d1054(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d107c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d108e FUN_1459d108e body=34 status=ok
// SIG undefined FUN_1459d108e(void)

void FUN_1459d108e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bc9e4f0;
  return;
}



// FUNCTION 1459d10bc FUN_1459d10bc body=34 status=ok
// SIG undefined FUN_1459d10bc(void)

void FUN_1459d10bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bca0070;
  return;
}



// FUNCTION 1459d10ea FUN_1459d10ea body=34 status=ok
// SIG undefined FUN_1459d10ea(void)

void FUN_1459d10ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bcd6370;
  return;
}



// FUNCTION 1459d1118 FUN_1459d1118 body=34 status=ok
// SIG undefined FUN_1459d1118(void)

void FUN_1459d1118(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bcdcda0;
  return;
}



// FUNCTION 1459d1146 FUN_1459d1146 body=34 status=ok
// SIG undefined FUN_1459d1146(void)

void FUN_1459d1146(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd1d710;
  return;
}



// FUNCTION 1459d1168 FUN_1459d1168 body=40 status=ok
// SIG undefined FUN_1459d1168(void)

undefined8 FUN_1459d1168(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d1190 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d1196 FUN_1459d1196 body=40 status=ok
// SIG undefined FUN_1459d1196(void)

undefined8 FUN_1459d1196(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d11be thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d11d0 FUN_1459d11d0 body=34 status=ok
// SIG undefined FUN_1459d11d0(void)

void FUN_1459d11d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd3c210;
  return;
}



// FUNCTION 1459d11fe FUN_1459d11fe body=34 status=ok
// SIG undefined FUN_1459d11fe(void)

void FUN_1459d11fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd3fa70;
  return;
}



// FUNCTION 1459d1220 FUN_1459d1220 body=40 status=ok
// SIG undefined FUN_1459d1220(void)

undefined8 FUN_1459d1220(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d1248 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d125a FUN_1459d125a body=34 status=ok
// SIG undefined FUN_1459d125a(void)

void FUN_1459d125a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd54130;
  return;
}



// FUNCTION 1459d1288 FUN_1459d1288 body=34 status=ok
// SIG undefined FUN_1459d1288(void)

void FUN_1459d1288(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd5a1d0;
  return;
}



// FUNCTION 1459d12b6 FUN_1459d12b6 body=34 status=ok
// SIG undefined FUN_1459d12b6(void)

void FUN_1459d12b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd5a2d0;
  return;
}



// FUNCTION 1459d12e4 FUN_1459d12e4 body=34 status=ok
// SIG undefined FUN_1459d12e4(void)

void FUN_1459d12e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bdace60;
  return;
}



// FUNCTION 1459d1306 FUN_1459d1306 body=40 status=ok
// SIG undefined FUN_1459d1306(void)

undefined8 FUN_1459d1306(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d132e thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d1340 FUN_1459d1340 body=34 status=ok
// SIG undefined FUN_1459d1340(void)

void FUN_1459d1340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be11f20;
  return;
}



// FUNCTION 1459d136e FUN_1459d136e body=34 status=ok
// SIG undefined FUN_1459d136e(void)

void FUN_1459d136e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be153a0;
  return;
}



// FUNCTION 1459d139c FUN_1459d139c body=34 status=ok
// SIG undefined FUN_1459d139c(void)

void FUN_1459d139c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be16540;
  return;
}



// FUNCTION 1459d13ca FUN_1459d13ca body=34 status=ok
// SIG undefined FUN_1459d13ca(void)

void FUN_1459d13ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be6dfd0;
  return;
}



// FUNCTION 1459d13f8 FUN_1459d13f8 body=34 status=ok
// SIG undefined FUN_1459d13f8(void)

void FUN_1459d13f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be71840;
  return;
}



// FUNCTION 1459d1426 FUN_1459d1426 body=34 status=ok
// SIG undefined FUN_1459d1426(void)

void FUN_1459d1426(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be79000;
  return;
}



// FUNCTION 1459d1454 FUN_1459d1454 body=34 status=ok
// SIG undefined FUN_1459d1454(void)

void FUN_1459d1454(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be804e0;
  return;
}



// FUNCTION 1459d1482 FUN_1459d1482 body=34 status=ok
// SIG undefined FUN_1459d1482(void)

void FUN_1459d1482(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be8a8a0;
  return;
}



// FUNCTION 1459d14a4 FUN_1459d14a4 body=40 status=ok
// SIG undefined FUN_1459d14a4(void)

undefined8 FUN_1459d14a4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d14cc thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d14d2 FUN_1459d14d2 body=40 status=ok
// SIG undefined FUN_1459d14d2(void)

undefined8 FUN_1459d14d2(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d14fa thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d1500 FUN_1459d1500 body=40 status=ok
// SIG undefined FUN_1459d1500(void)

undefined8 FUN_1459d1500(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d1528 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d153a FUN_1459d153a body=34 status=ok
// SIG undefined FUN_1459d153a(void)

void FUN_1459d153a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be8c750;
  return;
}



// FUNCTION 1459d1568 FUN_1459d1568 body=34 status=ok
// SIG undefined FUN_1459d1568(void)

void FUN_1459d1568(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be8f450;
  return;
}



// FUNCTION 1459d1596 FUN_1459d1596 body=34 status=ok
// SIG undefined FUN_1459d1596(void)

void FUN_1459d1596(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be90360;
  return;
}



// FUNCTION 1459d15b8 FUN_1459d15b8 body=40 status=ok
// SIG undefined FUN_1459d15b8(void)

undefined8 FUN_1459d15b8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d15e0 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d15f2 FUN_1459d15f2 body=34 status=ok
// SIG undefined FUN_1459d15f2(void)

void FUN_1459d15f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be92da0;
  return;
}



// FUNCTION 1459d1620 FUN_1459d1620 body=34 status=ok
// SIG undefined FUN_1459d1620(void)

void FUN_1459d1620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14be98470;
  return;
}



// FUNCTION 1459d164e FUN_1459d164e body=34 status=ok
// SIG undefined FUN_1459d164e(void)

void FUN_1459d164e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bea2480;
  return;
}



// FUNCTION 1459d167c FUN_1459d167c body=34 status=ok
// SIG undefined FUN_1459d167c(void)

void FUN_1459d167c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bea2870;
  return;
}



// FUNCTION 1459d16aa FUN_1459d16aa body=34 status=ok
// SIG undefined FUN_1459d16aa(void)

void FUN_1459d16aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bea6740;
  return;
}



// FUNCTION 1459d16d8 FUN_1459d16d8 body=34 status=ok
// SIG undefined FUN_1459d16d8(void)

void FUN_1459d16d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14beaf970;
  return;
}



// FUNCTION 1459d1706 FUN_1459d1706 body=34 status=ok
// SIG undefined FUN_1459d1706(void)

void FUN_1459d1706(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14beb2130;
  return;
}



// FUNCTION 1459d1734 FUN_1459d1734 body=34 status=ok
// SIG undefined FUN_1459d1734(void)

void FUN_1459d1734(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bebb0e0;
  return;
}



// FUNCTION 1459d1762 FUN_1459d1762 body=34 status=ok
// SIG undefined FUN_1459d1762(void)

void FUN_1459d1762(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bece940;
  return;
}



// FUNCTION 1459d1790 FUN_1459d1790 body=34 status=ok
// SIG undefined FUN_1459d1790(void)

void FUN_1459d1790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bed3720;
  return;
}



// FUNCTION 1459d17be FUN_1459d17be body=34 status=ok
// SIG undefined FUN_1459d17be(void)

void FUN_1459d17be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bee5ab0;
  return;
}



// FUNCTION 1459d17ec FUN_1459d17ec body=34 status=ok
// SIG undefined FUN_1459d17ec(void)

void FUN_1459d17ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14beea3f0;
  return;
}



// FUNCTION 1459d181a FUN_1459d181a body=34 status=ok
// SIG undefined FUN_1459d181a(void)

void FUN_1459d181a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bf07a20;
  return;
}



// FUNCTION 1459d1848 FUN_1459d1848 body=34 status=ok
// SIG undefined FUN_1459d1848(void)

void FUN_1459d1848(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bf080c0;
  return;
}



// FUNCTION 1459d186a FUN_1459d186a body=346 status=ok
// SIG undefined FUN_1459d186a(void)

void FUN_1459d186a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_28 = 0xf00000d0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459d19c6(puVar2,local_38,local_3c);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d19c6 FUN_1459d19c6 body=249 status=ok
// SIG undefined FUN_1459d19c6(void)

void FUN_1459d19c6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar3 = &local_58;
  local_40 = 4;
  local_38 = 3;
  local_b8[0] = 0;
  local_90 = 0;
  local_58 = param_3;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,puVar3);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_40) {
      puVar3 = (undefined4 *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d1ac0 FUN_1459d1ac0 body=98 status=ok
// SIG undefined FUN_1459d1ac0(void)

void FUN_1459d1ac0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1414354ce();
  if (lVar1 != 0) {
    lVar1 = FUN_1414354ce(param_1);
    lVar1 = *(longlong *)(lVar1 + 0x48);
    if (lVar1 != 0) {
      lVar2 = FUN_140b7066c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1415c90dc(lVar1,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x50) != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 1459d1b22 FUN_1459d1b22 body=37 status=ok
// SIG undefined FUN_1459d1b22(void)

void FUN_1459d1b22(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x390);
  FUN_1459d1b48(param_2);
  return;
}



// FUNCTION 1459d1b48 FUN_1459d1b48 body=166 status=ok
// SIG undefined FUN_1459d1b48(void)

undefined8 * FUN_1459d1b48(undefined8 *param_1)

{
  FUN_14128dafa();
  param_1[0x5d] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  FUN_1405bceb4(param_1 + 0x5d);
  *param_1 = &PTR_FUN_14b692310;
  param_1[0x5d] = &PTR_FUN_14b692380;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 2;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x381) = 0;
  return param_1;
}



// FUNCTION 1459d1bee FUN_1459d1bee body=385 status=ok
// SIG undefined FUN_1459d1bee(void)

void FUN_1459d1bee(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_98 [2];
  longlong local_88 [4];
  undefined1 *local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *param_1;
  local_98[0] = (longlong *)0x0;
  if (local_a8 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)*plVar3)(plVar3,local_98);
  }
  local_68 = (undefined1 *)0x0;
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  local_58 = plVar3;
  *plVar3 = (longlong)&PTR_FUN_14b3e72f0;
  plVar3[2] = local_a8;
  plVar3[4] = 0;
  if (local_a8 != 0) {
    plVar4 = local_98[0];
    if (local_98[0] == (longlong *)0x0) {
      plVar4 = local_88;
    }
    (**(code **)*plVar4)(plVar4,plVar3 + 4);
  }
  if (plVar3 == (longlong *)&DAT_fffffffffffffff0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_145fd03d0;
    local_68 = &LAB_145fd03d0;
  }
  if (local_a8 != 0) {
    plVar4 = local_98[0];
    if (local_98[0] == (longlong *)0x0) {
      plVar4 = local_88;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_1459d1e1c();
  iVar2 = DAT_14cb70fd0;
  lVar5 = (longlong)(int)DAT_14cb70fd0;
  DAT_14cb70fd0 = DAT_14cb70fd0 + 1;
  if (DAT_14cb70fd4 < DAT_14cb70fd0) {
    FUN_1459d1eec(iVar2);
  }
  lVar1 = DAT_14cb70fc8;
  lVar5 = lVar5 * 0x40;
  *(undefined1 **)(DAT_14cb70fc8 + lVar5) = puVar6;
  *(undefined8 *)(lVar1 + 0x10 + lVar5) = 0;
  if (plVar3 != (longlong *)&DAT_fffffffffffffff0) {
    if (plVar3 == (longlong *)0x0) {
      plVar3 = local_48;
    }
    (**(code **)*plVar3)(plVar3,lVar1 + lVar5 + 0x10);
    if (local_68 != (undefined1 *)0x0) {
      plVar3 = local_48;
      if (local_58 != (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d1d88 FUN_1459d1d88 body=29 status=ok
// SIG undefined FUN_1459d1d88(void)

void FUN_1459d1d88(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1459d1da6 FUN_1459d1da6 body=73 status=ok
// SIG undefined FUN_1459d1da6(void)

undefined8 * FUN_1459d1da6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b3e72f0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d1df0 FUN_1459d1df0 body=12 status=ok
// SIG undefined FUN_1459d1df0(void)

void FUN_1459d1df0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001459d1df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1459d1dfc FUN_1459d1dfc body=31 status=ok
// SIG undefined FUN_1459d1dfc(void)

undefined8 FUN_1459d1dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d1e1c FUN_1459d1e1c body=102 status=ok
// SIG undefined FUN_1459d1e1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459d1e1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb70fd8) {
    FUN_144b3d300(&DAT_14cb70fd8);
    if (DAT_14cb70fd8 == -1) {
      DAT_14cb70fc8 = 0;
      _DAT_14cb70fd0 = 0;
      atexit(FUN_143c9609b);
      _Init_thread_footer(&DAT_14cb70fd8);
      return;
    }
  }
  return;
}



// FUNCTION 1459d1e82 FUN_1459d1e82 body=106 status=ok
// SIG undefined FUN_1459d1e82(void)

undefined8 * FUN_1459d1e82(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b3e72f0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1459d1eec FUN_1459d1eec body=140 status=ok
// SIG undefined FUN_1459d1eec(void)

void FUN_1459d1eec(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb70fd0;
  if (param_1 <= (int)DAT_14cb70fd0) {
    if (DAT_14cb70fd4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb70fd0) {
        uVar2 = DAT_14cb70fd0;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb70fd0 + ((ulonglong)((longlong)(int)DAT_14cb70fd0 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    DAT_14cb70fd4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb70fc8,param_1,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459d1f84 FUN_1459d1f84 body=214 status=ok
// SIG undefined FUN_1459d1f84(void)

undefined8 * FUN_1459d1f84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a808720;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar1 = FUN_1411f01c4();
  FUN_1446f470e(&local_38,L"RootShakePattern",1);
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  lVar2 = FUN_140486aac(param_2,param_1,local_38,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[6] = lVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d205c FUN_1459d205c body=265 status=ok
// SIG undefined FUN_1459d205c(void)

void FUN_1459d205c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [36];
  uint local_54 [2];
  int local_4c;
  uint local_48;
  int local_40;
  uint local_3c;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144a61b4f();
  if (cVar2 != '\0') {
    cVar2 = FUN_1401144ce(param_2);
    if (cVar2 != '\0') {
      FUN_140ac173c(local_54,param_2);
      uVar4 = local_54[0];
      if (local_4c != 0) {
        uVar4 = FUN_144a78877(local_54[0]);
      }
      if (local_40 != 0) {
        local_48 = FUN_144a78877(local_48);
      }
      if (local_34 != 0) {
        local_3c = FUN_144a78877(local_3c);
      }
      iVar3 = FUN_140ac163e((longlong *)(param_1 + 0x528),local_48 ^ uVar4 ^ local_3c,local_54);
      if (iVar3 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x528);
        lVar5 = lVar1 + (longlong)iVar3 * 0xb0;
        if ((lVar5 != 0) && ((longlong)iVar3 * 0xb0 + lVar1 != -0x28)) {
          FUN_1459d2166(param_3,lVar5 + 0x40);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d2166 FUN_1459d2166 body=88 status=ok
// SIG undefined FUN_1459d2166(void)

undefined8 * FUN_1459d2166(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1459d21be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1459d21be FUN_1459d21be body=98 status=ok
// SIG undefined FUN_1459d21be(void)

void FUN_1459d21be(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1459d2220 FUN_1459d2220 body=113 status=ok
// SIG undefined FUN_1459d2220(void)

void FUN_1459d2220(longlong param_1,longlong param_2,short *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (-1 < *param_3)) {
    lVar1 = FUN_14119d4d6();
    lVar2 = FUN_140bccd38(param_2,param_3);
    if (lVar2 == lVar1) {
      FUN_14144f736(param_1 + 0x200,&DAT_14cbca3b8,1);
      FUN_140d27a2a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1459d2292 FUN_1459d2292 body=40 status=ok
// SIG undefined FUN_1459d2292(void)

undefined8 FUN_1459d2292(undefined8 param_1,int param_2)

{
  FUN_1459d22ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d22ba FUN_1459d22ba body=178 status=ok
// SIG undefined FUN_1459d22ba(void)

void FUN_1459d22ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6e3ea0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d236c(param_1 + 0xbd);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d23a2(param_1 + 0xb3);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d23d8(param_1 + 0x92);
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d240e(param_1);
  return;
}



// FUNCTION 1459d236c FUN_1459d236c body=53 status=ok
// SIG undefined FUN_1459d236c(void)

void FUN_1459d236c(longlong *param_1)

{
  FUN_1459d2514();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459d23a2 FUN_1459d23a2 body=53 status=ok
// SIG undefined FUN_1459d23a2(void)

void FUN_1459d23a2(longlong *param_1)

{
  FUN_1459d256c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459d23d8 FUN_1459d23d8 body=53 status=ok
// SIG undefined FUN_1459d23d8(void)

void FUN_1459d23d8(longlong *param_1)

{
  FUN_1459d25c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459d240e FUN_1459d240e body=131 status=ok
// SIG undefined FUN_1459d240e(void)

void FUN_1459d240e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b157de0;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d2492(param_1 + 0x66);
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3dde(param_1 + 0x4a);
  FUN_1459d24c8(param_1);
  return;
}



// FUNCTION 1459d2492 FUN_1459d2492 body=53 status=ok
// SIG undefined FUN_1459d2492(void)

void FUN_1459d2492(longlong *param_1)

{
  FUN_1459d261e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459d24c8 FUN_1459d24c8 body=76 status=ok
// SIG undefined FUN_1459d24c8(void)

void FUN_1459d24c8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aca4380;
  plVar3 = (longlong *)param_1[0x26];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459d2514 FUN_1459d2514 body=88 status=ok
// SIG undefined FUN_1459d2514(void)

void FUN_1459d2514(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 1459d256c FUN_1459d256c body=88 status=ok
// SIG undefined FUN_1459d256c(void)

void FUN_1459d256c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 1459d25c4 FUN_1459d25c4 body=90 status=ok
// SIG undefined FUN_1459d25c4(void)

void FUN_1459d25c4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 1459d261e FUN_1459d261e body=317 status=ok
// SIG undefined FUN_1459d261e(void)

void FUN_1459d261e(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d275c FUN_1459d275c body=54 status=ok
// SIG undefined FUN_1459d275c(void)

void FUN_1459d275c(longlong param_1,byte param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 8 +
              (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459d278e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x3a8))(plVar1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1459d2792 FUN_1459d2792 body=32 status=ok
// SIG undefined FUN_1459d2792(void)

bool FUN_1459d2792(undefined8 param_1,longlong *param_2)

{
  FUN_1459d27b2();
  return DAT_14c98edb8 == *param_2;
}



// FUNCTION 1459d27b2 FUN_1459d27b2 body=104 status=ok
// SIG undefined FUN_1459d27b2(void)

void FUN_1459d27b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98edc0) {
    FUN_144b3d300(&DAT_14c98edc0);
    if (DAT_14c98edc0 == -1) {
      FUN_1446f470e(&DAT_14c98edb8,L"FDriverIdMetaData",1);
      _Init_thread_footer(&DAT_14c98edc0);
      return;
    }
  }
  return;
}



// FUNCTION 1459d2822 FUN_1459d2822 body=128 status=ok
// SIG undefined FUN_1459d2822(void)

undefined8 * FUN_1459d2822(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1410ba828();
  *param_1 = &PTR_FUN_14afa9fc0;
  param_1[6] = &PTR_FUN_14afaa2a0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = FUN_145c7c882;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  param_1[8] = puVar1 + 2;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1459d28a2 FUN_1459d28a2 body=35 status=ok
// SIG undefined FUN_1459d28a2(void)

void FUN_1459d28a2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459d28c6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b75e0f0;
  return;
}



// FUNCTION 1459d28c6 FUN_1459d28c6 body=67 status=ok
// SIG undefined FUN_1459d28c6(void)

undefined8 * FUN_1459d28c6(undefined8 *param_1)

{
  FUN_140834366();
  *param_1 = &PTR_FUN_14a8fee80;
  *(undefined4 *)(param_1 + 0x73) = 0xffffffff;
  param_1[0x74] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  return param_1;
}



// FUNCTION 1459d290a FUN_1459d290a body=207 status=ok
// SIG undefined FUN_1459d290a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1459d290a(void)

{
  if ((DAT_14c9e9287 & 2) == 0) {
    DAT_14c9e9287 = DAT_14c9e9287 | 2;
    _DAT_14c9e9228 = L"FOnePassPointShadowProjectionShaderParameters";
    _DAT_14c9e9240 = FUN_146826540;
    _DAT_14c9e9248 = FUN_146825d77;
    _DAT_14c9e9250 = FUN_146825fd6;
    _DAT_14c9e9258 = FUN_1407e02ea;
    _DAT_14c9e9260 = FUN_146826273;
    _DAT_14c9e9238 = &LAB_1471d232a;
    _DAT_14c9e9278 = 0xffffffff0000001e;
    _DAT_14c9e9280 = 2;
    DAT_14c9e9284 = 0;
    _DAT_14c9e9268 = &LAB_1471d233a;
    FUN_1459d29da();
    FUN_1407e00cc(&DAT_14c9e9220);
  }
  return &DAT_14c9e9220;
}



// FUNCTION 1459d29da FUN_1459d29da body=121 status=ok
// SIG undefined FUN_1459d29da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459d29da(void)

{
  FUN_1459d2a54();
  _DAT_14c9ea3e0 = L"ShadowDepthTexture";
  DAT_14c9ea40a = FUN_140850cc5();
  _DAT_14c9ea3e8 = FUN_140fb78d0();
  _DAT_14c9ea3f8 = &LAB_14682652b;
  _DAT_14c9ea400 = 0x100000000;
  _DAT_14c9ea408 = 0;
  _DAT_14c9ea3f0 = DAT_14c9e9230;
  DAT_14c9e9230 = &DAT_14c9ea3e0;
  return;
}



// FUNCTION 1459d2a54 FUN_1459d2a54 body=121 status=ok
// SIG undefined FUN_1459d2a54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459d2a54(void)

{
  FUN_1459d2ace();
  _DAT_14c9ea410 = L"ShadowDepthTexture2";
  DAT_14c9ea43a = FUN_140850cc5();
  _DAT_14c9ea418 = FUN_140fb78d0();
  _DAT_14c9ea428 = &LAB_14682652b;
  _DAT_14c9ea430 = &DAT_100000004;
  _DAT_14c9ea438 = 0;
  _DAT_14c9ea420 = DAT_14c9e9230;
  DAT_14c9e9230 = &DAT_14c9ea410;
  return;
}



// FUNCTION 1459d2ace FUN_1459d2ace body=121 status=ok
// SIG undefined FUN_1459d2ace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459d2ace(void)

{
  FUN_1459d2b48();
  _DAT_14c9ea440 = L"ShadowDepthCubeComparisonSampler";
  DAT_14c9ea46a = FUN_140850cc5();
  _DAT_14c9ea448 = FUN_140fb78d0();
  _DAT_14c9ea458 = &LAB_14682652b;
  _DAT_14c9ea460 = &DAT_100000008;
  _DAT_14c9ea468 = 0;
  _DAT_14c9ea450 = DAT_14c9e9230;
  DAT_14c9e9230 = &DAT_14c9ea440;
  return;
}



// FUNCTION 1459d2b48 FUN_1459d2b48 body=121 status=ok
// SIG undefined FUN_1459d2b48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459d2b48(void)

{
  FUN_1459d2bc2();
  _DAT_14c9ea470 = L"ShadowViewProjectionMatrices";
  DAT_14c9ea49a = FUN_140850cc5();
  _DAT_14c9ea478 = FUN_140ec6960();
  _DAT_14c9ea488 = &LAB_14682652b;
  _DAT_14c9ea490 = &DAT_10000000c;
  _DAT_14c9ea498 = 0;
  _DAT_14c9ea480 = DAT_14c9e9230;
  DAT_14c9e9230 = &DAT_14c9ea470;
  return;
}



// FUNCTION 1459d2bc2 FUN_1459d2bc2 body=216 status=ok
// SIG undefined FUN_1459d2bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459d2bc2(void)

{
  _DAT_14c9ea4d0 = L"LightPositionOrDirection";
  DAT_14c9ea4fa = FUN_140850cc5();
  _DAT_14c9ea4d8 = FUN_140ec6960();
  _DAT_14c9ea4e8 = &LAB_14682652b;
  _DAT_14c9ea4f0 = &DAT_100000018;
  _DAT_14c9ea4f8 = 0;
  _DAT_14c9ea4e0 = DAT_14c9e9230;
  DAT_14c9e9230 = &DAT_14c9ea4d0;
  _DAT_14c9ea4a0 = L"InvShadowmapResolution";
  DAT_14c9ea4ca = FUN_140850cc5();
  _DAT_14c9ea4a8 = FUN_140ec6960();
  _DAT_14c9ea4b8 = &LAB_14682652b;
  _DAT_14c9ea4c0 = 0x100000012;
  _DAT_14c9ea4c8 = 0;
  _DAT_14c9ea4b0 = DAT_14c9e9230;
  DAT_14c9e9230 = &DAT_14c9ea4a0;
  return;
}



// FUNCTION 1459d2c9a FUN_1459d2c9a body=38 status=ok
// SIG undefined FUN_1459d2c9a(void)

undefined8 FUN_1459d2c9a(undefined8 param_1,int param_2)

{
  FUN_1459d2cc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d2cc0 FUN_1459d2cc0 body=67 status=ok
// SIG undefined FUN_1459d2cc0(void)

void FUN_1459d2cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adbb060;
  FUN_1459d2d3c(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d2d04(param_1 + 2);
  return;
}



// FUNCTION 1459d2d04 FUN_1459d2d04 body=55 status=ok
// SIG undefined FUN_1459d2d04(void)

void FUN_1459d2d04(longlong *param_1)

{
  FUN_1459d2dfe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459d2d3c FUN_1459d2d3c body=117 status=ok
// SIG undefined FUN_1459d2d3c(void)

void FUN_1459d2d3c(longlong *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_1459d2db1(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  FUN_1459d2db1(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459d2db1 FUN_1459d2db1 body=77 status=ok
// SIG undefined FUN_1459d2db1(void)

void FUN_1459d2db1(longlong param_1,int param_2)

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



// FUNCTION 1459d2dfe FUN_1459d2dfe body=416 status=ok
// SIG undefined FUN_1459d2dfe(void)

void FUN_1459d2dfe(longlong *param_1,int param_2)

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
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459d2fac FUN_1459d2fac body=221 status=ok
// SIG undefined FUN_1459d2fac(void)

longlong FUN_1459d2fac(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c997998 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146ef13ab;
    local_40 = FUN_14628833b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x12000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/PhysicsCore",L"PhysicalMaterialPropertyBase",&DAT_14c997998,
                  &DAT_146ef13aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c997998;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3090 FUN_1459d3090 body=221 status=ok
// SIG undefined FUN_1459d3090(void)

longlong FUN_1459d3090(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c997b48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146ef3163;
    local_40 = FUN_1462884a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/PhysicsCore",L"ChaosPhysicalMaterial",&DAT_14c997b48,&DAT_146ef3162);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c997b48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3174 FUN_1459d3174 body=221 status=ok
// SIG undefined FUN_1459d3174(void)

longlong FUN_1459d3174(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9987b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03d03;
    local_40 = &LAB_1459a5583;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectPrioritizer",&DAT_14c9987b0,&DAT_146f03d02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9987b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3258 FUN_1459d3258 body=221 status=ok
// SIG undefined FUN_1459d3258(void)

longlong FUN_1459d3258(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99c4e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f79985;
    local_40 = FUN_14628f1e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MeshDescription",L"MeshDescriptionBaseBulkData",&DAT_14c99c4e8,
                  &DAT_146f79984);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99c4e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d333c FUN_1459d333c body=221 status=ok
// SIG undefined FUN_1459d333c(void)

longlong FUN_1459d333c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e5c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470423bb;
    local_40 = FUN_14629667f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"SpatializationPluginSourceSettingsBase",
                  &DAT_14c99e5c8,&DAT_1470423ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e5c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3420 FUN_1459d3420 body=221 status=ok
// SIG undefined FUN_1459d3420(void)

longlong FUN_1459d3420(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e5e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470423bf;
    local_40 = FUN_1462966d6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"SourceDataOverridePluginSourceSettingsBase",
                  &DAT_14c99e5e0,&DAT_1470423be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e5e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3504 FUN_1459d3504 body=221 status=ok
// SIG undefined FUN_1459d3504(void)

longlong FUN_1459d3504(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e5f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470423c3;
    local_40 = FUN_14629672d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"OcclusionPluginSourceSettingsBase",&DAT_14c99e5f8,
                  &DAT_1470423c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e5f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d35e8 FUN_1459d35e8 body=221 status=ok
// SIG undefined FUN_1459d35e8(void)

longlong FUN_1459d35e8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e610 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470423c7;
    local_40 = FUN_146296784;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"ReverbPluginSourceSettingsBase",&DAT_14c99e610,
                  &DAT_1470423c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e610;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d36cc FUN_1459d36cc body=221 status=ok
// SIG undefined FUN_1459d36cc(void)

longlong FUN_1459d36cc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e998 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470459d3;
    local_40 = FUN_146296ff0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"SoundfieldEffectSettingsBase",&DAT_14c99e998,
                  &DAT_1470459d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e998;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d37b0 FUN_1459d37b0 body=221 status=ok
// SIG undefined FUN_1459d37b0(void)

longlong FUN_1459d37b0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e9f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147045dbb;
    local_40 = FUN_1462970a6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"WaveformTransformationBase",&DAT_14c99e9f8,
                  &DAT_147045dba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e9f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3894 FUN_1459d3894 body=221 status=ok
// SIG undefined FUN_1459d3894(void)

longlong FUN_1459d3894(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99fd00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470797e5;
    local_40 = FUN_14629edf2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/PacketHandler",L"HandlerComponentFactory",&DAT_14c99fd00,&DAT_1470797e4)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99fd00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3978 FUN_1459d3978 body=221 status=ok
// SIG undefined FUN_1459d3978(void)

longlong FUN_1459d3978(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a07b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147089029;
    local_40 = FUN_1462a116d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusEditorObjectBase",&DAT_14c9a07b0,&DAT_147089028);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a07b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3a5c FUN_1459d3a5c body=221 status=ok
// SIG undefined FUN_1459d3a5c(void)

longlong FUN_1459d3a5c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470f4c27;
    local_40 = FUN_1462b1fa7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"DCollisionChunk",&DAT_14c9ab308,&DAT_1470f4c26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3b40 FUN_1459d3b40 body=221 status=ok
// SIG undefined FUN_1459d3b40(void)

longlong FUN_1459d3b40(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab368 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470f4c2f;
    local_40 = FUN_142b4cef7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"DPhysicsAsset",&DAT_14c9ab368,&DAT_1470f4c2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab368;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3c24 FUN_1459d3c24 body=221 status=ok
// SIG undefined FUN_1459d3c24(void)

longlong FUN_1459d3c24(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ac2e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14712a0d5;
    local_40 = FUN_1462b4abf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/MaterialShaderQualitySettings",L"MaterialShaderQualitySettings",
                  &DAT_14c9ac2e8,&DAT_14712a0d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ac2e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3d08 FUN_1459d3d08 body=221 status=ok
// SIG undefined FUN_1459d3d08(void)

longlong FUN_1459d3d08(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1998 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14744fd2b;
    local_40 = &LAB_145c2eebf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeScratchRenderTarget",&DAT_14caa1998,&DAT_14744fd2a
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1998;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3dec FUN_1459d3dec body=221 status=ok
// SIG undefined FUN_1459d3dec(void)

longlong FUN_1459d3dec(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1cd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1474521df;
    local_40 = &LAB_145a5edd8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeWeightmapUsage",&DAT_14caa1cd0,&DAT_1474521de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1cd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3ed0 FUN_1459d3ed0 body=221 status=ok
// SIG undefined FUN_1459d3ed0(void)

longlong FUN_1459d3ed0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa92e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14749cd3b;
    local_40 = FUN_14632d204;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GeometryCollectionEngine",L"GeometryCollectionCache",&DAT_14caa92e0,
                  &DAT_14749cd3a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa92e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d3fb4 FUN_1459d3fb4 body=221 status=ok
// SIG undefined FUN_1459d3fb4(void)

longlong FUN_1459d3fb4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab24b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475339e1;
    local_40 = FUN_140e39323;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x420;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneCompiledData",&DAT_14cab24b8,&DAT_1475339e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab24b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4098 FUN_1459d4098 body=221 status=ok
// SIG undefined FUN_1459d4098(void)

longlong FUN_1459d4098(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4ca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475b9fb3;
    local_40 = FUN_14634707e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScene3DTransformSectionConstraints",
                  &DAT_14cab4ca0,&DAT_1475b9fb2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4ca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d417c FUN_1459d417c body=221 status=ok
// SIG undefined FUN_1459d417c(void)

longlong FUN_1459d417c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476c40e9;
    local_40 = &LAB_145c0d39d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/UMG",L"SlateAccessibleWidgetData",&DAT_14cab6808,&DAT_1476c40e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4260 FUN_1459d4260 body=221 status=ok
// SIG undefined FUN_1459d4260(void)

longlong FUN_1459d4260(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476c40f3;
    local_40 = FUN_14634e48f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/UMG",L"UIComponent",&DAT_14cab6880,&DAT_1476c40f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4344 FUN_1459d4344 body=221 status=ok
// SIG undefined FUN_1459d4344(void)

longlong FUN_1459d4344(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab69a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476c41b7;
    local_40 = &LAB_145d1879a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetNavigation",&DAT_14cab69a8,&DAT_1476c41b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab69a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4428 FUN_1459d4428 body=221 status=ok
// SIG undefined FUN_1459d4428(void)

longlong FUN_1459d4428(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6b40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476c8569;
    local_40 = &LAB_145c80d1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/UMG",L"UMGSequenceTickManager",&DAT_14cab6b40,&DAT_1476c8568);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6b40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d450c FUN_1459d450c body=221 status=ok
// SIG undefined FUN_1459d450c(void)

longlong FUN_1459d450c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6e60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476cba45;
    local_40 = FUN_1463500df;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetEnumStateRegistration",&DAT_14cab6e60,&DAT_1476cba44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6e60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d45f0 FUN_1459d45f0 body=221 status=ok
// SIG undefined FUN_1459d45f0(void)

longlong FUN_1459d45f0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8b20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14775a873;
    local_40 = FUN_146358f1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/UMG",L"Visual",&DAT_14cab8b20,&DAT_14775a872);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d46d4 FUN_1459d46d4 body=221 status=ok
// SIG undefined FUN_1459d46d4(void)

longlong FUN_1459d46d4(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabbda0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1477f4b3f;
    local_40 = &LAB_14636354c;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x238;
    FUN_14081cfa3(L"/Script/MovieSceneCapture",L"MovieSceneCapture",&DAT_14cabbda0,FUN_14636352a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabbda0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d47b8 FUN_1459d47b8 body=221 status=ok
// SIG undefined FUN_1459d47b8(void)

longlong FUN_1459d47b8(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabcf48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147824b21;
    local_40 = &LAB_145cb83fb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x228;
    FUN_14081cfa3(L"/Script/MRMesh",L"MRMeshBodyHolder",&DAT_14cabcf48,&DAT_147824b20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabcf48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d489c FUN_1459d489c body=221 status=ok
// SIG undefined FUN_1459d489c(void)

longlong FUN_1459d489c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabd8c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147848915;
    local_40 = &LAB_145d62f62;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/MassEntity",L"MassObserverRegistry",&DAT_14cabd8c0,&DAT_147848914);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabd8c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4980 FUN_1459d4980 body=221 status=ok
// SIG undefined FUN_1459d4980(void)

longlong FUN_1459d4980(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabf1d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14785ce9f;
    local_40 = &LAB_145c5b25a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"AutoRTFMTestObject",&DAT_14cabf1d8,FUN_14636ed2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf1d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4a64 FUN_1459d4a64 body=221 status=ok
// SIG undefined FUN_1459d4a64(void)

longlong FUN_1459d4a64(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabfc20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14786167d;
    local_40 = &LAB_14588a4df;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"Distribution",&DAT_14cabfc20,&DAT_14786167c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabfc20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4b48 FUN_1459d4b48 body=221 status=ok
// SIG undefined FUN_1459d4b48(void)

longlong FUN_1459d4b48(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac1948 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478709f7;
    local_40 = &LAB_1459be38e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionHLODSourceActors",&DAT_14cac1948,&DAT_1478709f6)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1948;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4c2c FUN_1459d4c2c body=221 status=ok
// SIG undefined FUN_1459d4c2c(void)

longlong FUN_1459d4c2c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac47c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478822ad;
    local_40 = &LAB_14588008a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialInterfaceEditorOnlyData",&DAT_14cac47c0,&DAT_1478822ac
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac47c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4d10 FUN_1459d4d10 body=221 status=ok
// SIG undefined FUN_1459d4d10(void)

longlong FUN_1459d4d10(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac5150 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478853b1;
    local_40 = &LAB_145c6e975;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleLODLevel",&DAT_14cac5150,&DAT_1478853b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5150;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4df4 FUN_1459d4df4 body=221 status=ok
// SIG undefined FUN_1459d4df4(void)

longlong FUN_1459d4df4(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac55b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147887389;
    local_40 = &LAB_1459be806;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleEventSendToGame",&DAT_14cac55b0,&DAT_147887388);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac55b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4ed8 FUN_1459d4ed8 body=221 status=ok
// SIG undefined FUN_1459d4ed8(void)

longlong FUN_1459d4ed8(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac6328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14788bb07;
    local_40 = &LAB_145a19b8b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleSystemReplay",&DAT_14cac6328,&DAT_14788bb06);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac6328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d4fbc FUN_1459d4fbc body=221 status=ok
// SIG undefined FUN_1459d4fbc(void)

longlong FUN_1459d4fbc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac6f40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478991d3;
    local_40 = &LAB_1459a5769;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ReplicationDriver",&DAT_14cac6f40,&DAT_1478991d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac6f40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d50a0 FUN_1459d50a0 body=221 status=ok
// SIG undefined FUN_1459d50a0(void)

longlong FUN_1459d50a0(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac8808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a9163;
    local_40 = &LAB_145bb5c07;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Engine",L"SubUVAnimation",&DAT_14cac8808,&DAT_1478a9162);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5184 FUN_1459d5184 body=221 status=ok
// SIG undefined FUN_1459d5184(void)

longlong FUN_1459d5184(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad0300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1479b9475;
    local_40 = FUN_1463b4ca2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"InitialActiveSoundParams",&DAT_14cad0300,&DAT_1479b9474);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad0300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5268 FUN_1459d5268 body=221 status=ok
// SIG undefined FUN_1459d5268(void)

longlong FUN_1459d5268(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad2e38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a195a7;
    local_40 = FUN_1463bda0c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"SplineMetadata",&DAT_14cad2e38,&DAT_147a195a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2e38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d534c FUN_1459d534c body=221 status=ok
// SIG undefined FUN_1459d534c(void)

longlong FUN_1459d534c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad6f50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7d2e9;
    local_40 = FUN_1463c500d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"DPICustomScalingRule",&DAT_14cad6f50,&DAT_147a7d2e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad6f50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5430 FUN_1459d5430 body=221 status=ok
// SIG undefined FUN_1459d5430(void)

longlong FUN_1459d5430(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad7be0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7fabf;
    local_40 = FUN_1463c5582;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ThumbnailInfo",&DAT_14cad7be0,&DAT_147a7fabe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7be0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5514 FUN_1459d5514 body=221 status=ok
// SIG undefined FUN_1459d5514(void)

longlong FUN_1459d5514(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae43f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147aea365;
    local_40 = FUN_1463d1b61;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/Engine",L"HLODProxy",&DAT_14cae43f8,&DAT_147aea364);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae43f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d55f8 FUN_1459d55f8 body=221 status=ok
// SIG undefined FUN_1459d55f8(void)

longlong FUN_1459d55f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae4440 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147aea36d;
    local_40 = FUN_1463d1d02;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"HLODProxyDesc",&DAT_14cae4440,&DAT_147aea36c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae4440;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d56dc FUN_1459d56dc body=221 status=ok
// SIG undefined FUN_1459d56dc(void)

longlong FUN_1459d56dc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae5098 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b0612f;
    local_40 = &LAB_1460d2fef;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"StringTable",&DAT_14cae5098,&DAT_147b0612e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae5098;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d57c0 FUN_1459d57c0 body=221 status=ok
// SIG undefined FUN_1459d57c0(void)

longlong FUN_1459d57c0(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae50e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b06403;
    local_40 = &LAB_145c1fe8c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"InterpCurveEdSetup",&DAT_14cae50e0,&DAT_147b06402);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae50e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d58a4 FUN_1459d58a4 body=221 status=ok
// SIG undefined FUN_1459d58a4(void)

longlong FUN_1459d58a4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8d28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b974e9;
    local_40 = FUN_1463e7d6c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"LevelActorContainer",&DAT_14cae8d28,&DAT_147b974e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8d28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5988 FUN_1459d5988 body=221 status=ok
// SIG undefined FUN_1459d5988(void)

longlong FUN_1459d5988(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf2a30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147be688d;
    local_40 = FUN_1463edcbd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"ObjectReferencer",&DAT_14caf2a30,&DAT_147be688c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2a30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5a6c FUN_1459d5a6c body=221 status=ok
// SIG undefined FUN_1459d5a6c(void)

longlong FUN_1459d5a6c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caffdb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147cccfef;
    local_40 = &LAB_145c04b0b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Engine",L"NeuralProfile",&DAT_14caffdb0,&DAT_147cccfee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caffdb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5b50 FUN_1459d5b50 body=221 status=ok
// SIG undefined FUN_1459d5b50(void)

longlong FUN_1459d5b50(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0fca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147da90f7;
    local_40 = FUN_14640db4b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"VirtualTextureBuilder",&DAT_14cb0fca8,&DAT_147da90f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0fca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5c34 FUN_1459d5c34 body=221 status=ok
// SIG undefined FUN_1459d5c34(void)

longlong FUN_1459d5c34(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb10b30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db1491;
    local_40 = &LAB_145c11290;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/Engine",L"WorldComposition",&DAT_14cb10b30,&DAT_147db1490);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10b30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5d18 FUN_1459d5d18 body=221 status=ok
// SIG undefined FUN_1459d5d18(void)

longlong FUN_1459d5d18(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb10dc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_143797e86;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db3b99;
    local_40 = FUN_14640f1e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"ContentBundleManager",&DAT_14cb10dc0,&DAT_147db3b98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10dc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5dfc FUN_1459d5dfc body=221 status=ok
// SIG undefined FUN_1459d5dfc(void)

longlong FUN_1459d5dfc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db7f47;
    local_40 = FUN_146410a1f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"HLODBuilderSettings",&DAT_14cb11358,&DAT_147db7f46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5ee0 FUN_1459d5ee0 body=221 status=ok
// SIG undefined FUN_1459d5ee0(void)

longlong FUN_1459d5ee0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb126d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147dee38f;
    local_40 = FUN_1464146ef;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Overlay",L"Overlays",&DAT_14cb126d0,&DAT_147dee38e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb126d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d5fc4 FUN_1459d5fc4 body=221 status=ok
// SIG undefined FUN_1459d5fc4(void)

longlong FUN_1459d5fc4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1a928 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e1c099;
    local_40 = FUN_1464191ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnerCondition",&DAT_14cb1a928,&DAT_147e1c098);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a928;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d60a8 FUN_1459d60a8 body=221 status=ok
// SIG undefined FUN_1459d60a8(void)

longlong FUN_1459d60a8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1d288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e6cfa1;
    local_40 = FUN_146422b98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"CrowdManagerBase",&DAT_14cb1d288,&DAT_147e6cfa0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d618c FUN_1459d618c body=221 status=ok
// SIG undefined FUN_1459d618c(void)

longlong FUN_1459d618c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1ea88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ea55e3;
    local_40 = &LAB_1464289d0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/AIModule",L"AISubsystem",&DAT_14cb1ea88,&DAT_147ea55e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ea88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6270 FUN_1459d6270 body=221 status=ok
// SIG undefined FUN_1459d6270(void)

longlong FUN_1459d6270(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1fcf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ed8cff;
    local_40 = FUN_14642d510;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryNode",&DAT_14cb1fcf0,&DAT_147ed8cfe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fcf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6354 FUN_1459d6354 body=221 status=ok
// SIG undefined FUN_1459d6354(void)

longlong FUN_1459d6354(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1fd08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ed8f99;
    local_40 = FUN_14642d562;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryOption",&DAT_14cb1fd08,&DAT_147ed8f98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fd08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6438 FUN_1459d6438 body=221 status=ok
// SIG undefined FUN_1459d6438(void)

longlong FUN_1459d6438(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb20190 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147eed963;
    local_40 = FUN_14642df11;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AIModule",L"AIHotSpotManager",&DAT_14cb20190,&DAT_147eed962);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d651c FUN_1459d651c body=221 status=ok
// SIG undefined FUN_1459d651c(void)

longlong FUN_1459d651c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb266b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f855c3;
    local_40 = FUN_1464498c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/FaceFX",L"FaceFXAsset",&DAT_14cb266b8,&DAT_147f855c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb266b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6600 FUN_1459d6600 body=221 status=ok
// SIG undefined FUN_1459d6600(void)

longlong FUN_1459d6600(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb29350 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fd2cef;
    local_40 = FUN_14645757c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraAsset",&DAT_14cb29350,&DAT_147fd2cee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29350;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d66e4 FUN_1459d66e4 body=221 status=ok
// SIG undefined FUN_1459d66e4(void)

longlong FUN_1459d66e4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb29518 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fdd629;
    local_40 = FUN_146457e94;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraRigInterfaceParameter",&DAT_14cb29518,
                  &DAT_147fdd628);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d67c8 FUN_1459d67c8 body=221 status=ok
// SIG undefined FUN_1459d67c8(void)

longlong FUN_1459d67c8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb2ac00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ff04db;
    local_40 = FUN_1464599ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"BlueprintCameraDirectorEvaluator",&DAT_14cb2ac00,
                  FUN_146459998);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2ac00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d68ac FUN_1459d68ac body=221 status=ok
// SIG undefined FUN_1459d68ac(void)

longlong FUN_1459d68ac(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb2b5f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148021dac;
    local_40 = &LAB_145c5196e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"BlueprintCameraNodeEvaluator",&DAT_14cb2b5f8,
                  FUN_14645c8a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2b5f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6990 FUN_1459d6990 body=221 status=ok
// SIG undefined FUN_1459d6990(void)

longlong FUN_1459d6990(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb36700 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148063871;
    local_40 = &LAB_145a19c53;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSimCacheDebugData",&DAT_14cb36700,&DAT_148063870);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb36700;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6a74 FUN_1459d6a74 body=221 status=ok
// SIG undefined FUN_1459d6a74(void)

longlong FUN_1459d6a74(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb36898 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148068055;
    local_40 = &LAB_14570f824;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1e0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraStatelessEmitter",&DAT_14cb36898,&DAT_148068054);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb36898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6b58 FUN_1459d6b58 body=221 status=ok
// SIG undefined FUN_1459d6b58(void)

longlong FUN_1459d6b58(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb368b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14806805f;
    local_40 = FUN_1464680b2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraStatelessEmitterTemplate",&DAT_14cb368b0,
                  &DAT_14806805e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb368b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6c36 FUN_1459d6c36 body=40 status=ok
// SIG undefined FUN_1459d6c36(void)

undefined8 FUN_1459d6c36(undefined8 param_1,int param_2)

{
  FUN_1459d6c5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459d6c5e FUN_1459d6c5e body=76 status=ok
// SIG undefined FUN_1459d6c5e(void)

void FUN_1459d6c5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad6fe70;
  FUN_1459d6caa(param_1 + 0x52);
  FUN_1459d6caa(param_1 + 0x39);
  FUN_1459d6caa(param_1 + 0x20);
  FUN_1459d6caa(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459d6caa FUN_1459d6caa body=111 status=ok
// SIG undefined FUN_1459d6caa(void)

void FUN_1459d6caa(longlong param_1)

{
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_14ad6b340;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_14ad6b340;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_14ad6b340;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14ad6b340;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459d6d20 FUN_1459d6d20 body=221 status=ok
// SIG undefined FUN_1459d6d20(void)

longlong FUN_1459d6d20(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb39720 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1480d806d;
    local_40 = &LAB_145f9ea9c;
    local_48 = L"Niagara";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x1f0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraBakerSettings",&DAT_14cb39720,&DAT_1480d806c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb39720;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6e0a FUN_1459d6e0a body=221 status=ok
// SIG undefined FUN_1459d6e0a(void)

longlong FUN_1459d6e0a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb43e80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481faf33;
    local_40 = FUN_14647b8e3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraValidationRule",&DAT_14cb43e80,&DAT_1481faf32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb43e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6eee FUN_1459d6eee body=221 status=ok
// SIG undefined FUN_1459d6eee(void)

longlong FUN_1459d6eee(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1482048c9;
    local_40 = FUN_14647c285;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Niagara",L"VolumeCache",&DAT_14cb44340,&DAT_1482048c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d6fd2 FUN_1459d6fd2 body=221 status=ok
// SIG undefined FUN_1459d6fd2(void)

longlong FUN_1459d6fd2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44828 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14821643f;
    local_40 = FUN_14647d9f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/CommonInput",L"CommonUIHoldData",&DAT_14cb44828,&DAT_14821643e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44828;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d70b6 FUN_1459d70b6 body=221 status=ok
// SIG undefined FUN_1459d70b6(void)

longlong FUN_1459d70b6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb45810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14823564d;
    local_40 = FUN_1464821db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonTextScrollStyle",&DAT_14cb45810,&DAT_14823564c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d719a FUN_1459d719a body=221 status=ok
// SIG undefined FUN_1459d719a(void)

longlong FUN_1459d719a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb460a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14823dd2f;
    local_40 = FUN_146483eb0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonWidgetGroupBase",&DAT_14cb460a0,FUN_146483e8e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb460a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d727e FUN_1459d727e body=221 status=ok
// SIG undefined FUN_1459d727e(void)

longlong FUN_1459d727e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb49e48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148409a61;
    local_40 = &LAB_1459826c4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Water",L"WaterWavesAsset",&DAT_14cb49e48,&DAT_148409a60);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb49e48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7362 FUN_1459d7362 body=221 status=ok
// SIG undefined FUN_1459d7362(void)

longlong FUN_1459d7362(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4ab88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148411b15;
    local_40 = FUN_14648b57b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoConstantFrameAxisSource",
                  &DAT_14cb4ab88,&DAT_148411b14);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ab88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7446 FUN_1459d7446 body=221 status=ok
// SIG undefined FUN_1459d7446(void)

longlong FUN_1459d7446(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b578 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148442e1b;
    local_40 = FUN_14648e5ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"ContextObjectStore",&DAT_14cb4b578,
                  &DAT_148442e1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b578;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d752a FUN_1459d752a body=221 status=ok
// SIG undefined FUN_1459d752a(void)

longlong FUN_1459d752a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b650 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484439d1;
    local_40 = &LAB_145cb1a08;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InputRouter",&DAT_14cb4b650,&DAT_1484439d0)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b650;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d760e FUN_1459d760e body=221 status=ok
// SIG undefined FUN_1459d760e(void)

longlong FUN_1459d760e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b9b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148456ac9;
    local_40 = FUN_14648febe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"ToolTargetManager",&DAT_14cb4b9b8,
                  &DAT_148456ac8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b9b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d76f2 FUN_1459d76f2 body=221 status=ok
// SIG undefined FUN_1459d76f2(void)

longlong FUN_1459d76f2(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4bd38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14846a725;
    local_40 = &LAB_146015ba9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/ModelingOperators",L"RecomputeUVsOpFactory",&DAT_14cb4bd38,
                  &DAT_14846a724);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4bd38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d77d6 FUN_1459d77d6 body=221 status=ok
// SIG undefined FUN_1459d77d6(void)

longlong FUN_1459d77d6(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4bda0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14846d2dd;
    local_40 = &LAB_14602959b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/ModelingOperators",L"UVLayoutOperatorFactory",&DAT_14cb4bda0,
                  &DAT_14846d2dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4bda0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d78ba FUN_1459d78ba body=221 status=ok
// SIG undefined FUN_1459d78ba(void)

longlong FUN_1459d78ba(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4c1c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484b80c3;
    local_40 = FUN_146491e9f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GeometryFramework",L"DynamicMeshGenerator",&DAT_14cb4c1c0,&DAT_1484b80c2
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c1c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d799e FUN_1459d799e body=221 status=ok
// SIG undefined FUN_1459d799e(void)

longlong FUN_1459d799e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb557f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486249f9;
    local_40 = FUN_1464b325e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"BlueprintableCameraModeBehavior",&DAT_14cb557f8,
                  &DAT_1486249f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb557f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7a82 FUN_1459d7a82 body=221 status=ok
// SIG undefined FUN_1459d7a82(void)

longlong FUN_1459d7a82(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb654c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14871a177;
    local_40 = FUN_146509a9e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillSocketResolverStrategy",&DAT_14cb654c0,&DAT_14871a176
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb654c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7b66 FUN_1459d7b66 body=221 status=ok
// SIG undefined FUN_1459d7b66(void)

longlong FUN_1459d7b66(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6cca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14878d5ab;
    local_40 = &LAB_145e0e93b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/GbxGame",L"MissionTaskStateManager",&DAT_14cb6cca0,&DAT_14878d5aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7c4a FUN_1459d7c4a body=221 status=ok
// SIG undefined FUN_1459d7c4a(void)

longlong FUN_1459d7c4a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6ce70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14878d5ce;
    local_40 = &LAB_145c38c72;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusActorDataLayerHelper",&DAT_14cb6ce70,FUN_146534a98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ce70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7d2e FUN_1459d7d2e body=221 status=ok
// SIG undefined FUN_1459d7d2e(void)

longlong FUN_1459d7d2e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb90260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489c48f3;
    local_40 = &LAB_145c1e6c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlTextureAtlasDetails",&DAT_14cb90260,&DAT_1489c48f2
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb90260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7e12 FUN_1459d7e12 body=221 status=ok
// SIG undefined FUN_1459d7e12(void)

longlong FUN_1459d7e12(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb908d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489c8b8b;
    local_40 = &LAB_145dc7edb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1f8;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"WidgetSurfacePartitioningCompositor",&DAT_14cb908d0,
                  &DAT_1489c8b8a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb908d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7ef6 FUN_1459d7ef6 body=221 status=ok
// SIG undefined FUN_1459d7ef6(void)

longlong FUN_1459d7ef6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb91860 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f30c9;
    local_40 = FUN_14656a3da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconAction_BaseModifier",&DAT_14cb91860,&DAT_1489f30c8
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91860;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d7fda FUN_1459d7fda body=221 status=ok
// SIG undefined FUN_1459d7fda(void)

longlong FUN_1459d7fda(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb95e88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a4b22f;
    local_40 = FUN_14657ab1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"PartyBeaconState",&DAT_14cb95e88,&DAT_148a4b22e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95e88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d80be FUN_1459d80be body=221 status=ok
// SIG undefined FUN_1459d80be(void)

longlong FUN_1459d80be(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb95fe0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a4d5d5;
    local_40 = FUN_14657aff2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconState",&DAT_14cb95fe0,
                  &DAT_148a4d5d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95fe0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d81a2 FUN_1459d81a2 body=221 status=ok
// SIG undefined FUN_1459d81a2(void)

longlong FUN_1459d81a2(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96540 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a57ca7;
    local_40 = &LAB_145ec28f1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Shift",L"ShiftSessionManager",&DAT_14cb96540,&DAT_148a57ca6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96540;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8286 FUN_1459d8286 body=221 status=ok
// SIG undefined FUN_1459d8286(void)

longlong FUN_1459d8286(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb98750 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148abe331;
    local_40 = FUN_14658973c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/ShiftUI",L"ShiftUISettings",&DAT_14cb98750,&DAT_148abe330);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb98750;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d836a FUN_1459d836a body=221 status=ok
// SIG undefined FUN_1459d836a(void)

longlong FUN_1459d836a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb98cc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148ac9ff3;
    local_40 = FUN_143f7ad30;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxWorldPainter",L"GbxWorldPainterLayerData",&DAT_14cb98cc0,
                  &DAT_148ac9ff2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb98cc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d844e FUN_1459d844e body=221 status=ok
// SIG undefined FUN_1459d844e(void)

longlong FUN_1459d844e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c488 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b4f05b;
    local_40 = &LAB_145d57dad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGDataAssetRepo",&DAT_14cb9c488,&DAT_148b4f05a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c488;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8532 FUN_1459d8532 body=221 status=ok
// SIG undefined FUN_1459d8532(void)

longlong FUN_1459d8532(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c9e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b50f7d;
    local_40 = FUN_14659b771;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGMenuManagerAction",&DAT_14cb9c9e8,&DAT_148b50f7c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c9e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8616 FUN_1459d8616 body=221 status=ok
// SIG undefined FUN_1459d8616(void)

longlong FUN_1459d8616(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9caf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b50fc3;
    local_40 = FUN_14659ba63;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGMenuManagerFlow",&DAT_14cb9caf8,&DAT_148b50fc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9caf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d86fa FUN_1459d86fa body=221 status=ok
// SIG undefined FUN_1459d86fa(void)

longlong FUN_1459d86fa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9cef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b5187f;
    local_40 = FUN_14659c639;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxGameplayTagStateDef",&DAT_14cb9cef0,&DAT_148b5187e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d87de FUN_1459d87de body=221 status=ok
// SIG undefined FUN_1459d87de(void)

longlong FUN_1459d87de(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ed10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b79ab9;
    local_40 = FUN_1465a1c54;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GameplayDebugger",L"GameplayDebuggerLocalController",&DAT_14cb9ed10,
                  &DAT_148b79ab8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ed10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d88c2 FUN_1459d88c2 body=221 status=ok
// SIG undefined FUN_1459d88c2(void)

longlong FUN_1459d88c2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbd430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148ca1060;
    local_40 = FUN_14660eab6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"WaypointSystemDelegateProxy",&DAT_14cbbd430,FUN_14660ea94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbd430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d89a6 FUN_1459d89a6 body=221 status=ok
// SIG undefined FUN_1459d89a6(void)

longlong FUN_1459d89a6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf4010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148f8c3f9;
    local_40 = FUN_1466697e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"UVProjectionOperatorFactory",&DAT_14cbf4010,
                  &DAT_148f8c3f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf4010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8a8a FUN_1459d8a8a body=221 status=ok
// SIG undefined FUN_1459d8a8a(void)

longlong FUN_1459d8a8a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf5058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148fc64cd;
    local_40 = FUN_14667084f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Qos",L"QosEvaluator",&DAT_14cbf5058,&DAT_148fc64cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf5058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8b6e FUN_1459d8b6e body=221 status=ok
// SIG undefined FUN_1459d8b6e(void)

longlong FUN_1459d8b6e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf5430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148fcdd8f;
    local_40 = &LAB_145c4ae24;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/Party",L"SocialGroupChannel",&DAT_14cbf5430,&DAT_148fcdd8e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf5430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8c52 FUN_1459d8c52 body=221 status=ok
// SIG undefined FUN_1459d8c52(void)

longlong FUN_1459d8c52(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf8328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1490837db;
    local_40 = FUN_14667aa89;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/HairStrandsCore",L"GroomCreateStrandsTexturesOptions",&DAT_14cbf8328,
                  &DAT_1490837da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf8328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8d36 FUN_1459d8d36 body=221 status=ok
// SIG undefined FUN_1459d8d36(void)

longlong FUN_1459d8d36(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf9300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14908cfa7;
    local_40 = FUN_14667b8f4;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/HairStrandsCore",L"GroomImportOptions",&DAT_14cbf9300,&DAT_14908cfa6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf9300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459d8e1a FUN_1459d8e1a body=221 status=ok
// SIG undefined FUN_1459d8e1a(void)

longlong FUN_1459d8e1a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0b550 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492dc517;
    local_40 = FUN_14671a53b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkSourceFactory",&DAT_14cc0b550,
                  &DAT_1492dc516);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b550;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


