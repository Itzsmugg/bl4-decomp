// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14627450a FUN_14627450a body=55 status=ok
// SIG undefined FUN_14627450a(void)

void FUN_14627450a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c951908 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c951908 = FUN_140002ddd(FUN_146274541,uVar1,L"PerPlatformFloat");
  }
  return;
}



// FUNCTION 146274541 FUN_146274541 body=49 status=ok
// SIG undefined FUN_146274541(void)

longlong FUN_146274541(void)

{
  if (DAT_14c951900 == 0) {
    FUN_14086a14e(&DAT_14c951900,&PTR_FUN_149e90358);
  }
  return DAT_14c951900;
}



// FUNCTION 146274572 FUN_146274572 body=48 status=ok
// SIG undefined FUN_146274572(void)

void FUN_146274572(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_149e91400;
  return;
}



// FUNCTION 1462745a2 FUN_1462745a2 body=55 status=ok
// SIG undefined FUN_1462745a2(void)

void FUN_1462745a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c951920 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c951920 = FUN_140002ddd(FUN_1417178d9,uVar1,L"PerPlatformBool");
  }
  return;
}



// FUNCTION 1462745da FUN_1462745da body=48 status=ok
// SIG undefined FUN_1462745da(void)

void FUN_1462745da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149e91560;
  return;
}



// FUNCTION 14627460a FUN_14627460a body=55 status=ok
// SIG undefined FUN_14627460a(void)

void FUN_14627460a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c951938 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c951938 = FUN_140002ddd(FUN_146274641,uVar1,L"PerPlatformFrameRate");
  }
  return;
}



// FUNCTION 146274641 FUN_146274641 body=47 status=ok
// SIG undefined FUN_146274641(void)

longlong FUN_146274641(void)

{
  if (DAT_14c951930 == 0) {
    FUN_14086a14e(&DAT_14c951930,&PTR_FUN_149e904d0);
  }
  return DAT_14c951930;
}



// FUNCTION 146274670 FUN_146274670 body=48 status=ok
// SIG undefined FUN_146274670(void)

void FUN_146274670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_149e916d0;
  return;
}



// FUNCTION 1462746a0 FUN_1462746a0 body=166 status=ok
// SIG undefined FUN_1462746a0(void)

void FUN_1462746a0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_2 != (ulonglong *)0x0) &&
     ((*(ushort *)((longlong)*(longlong **)(param_1 + 0x78) + 0x3b) & 0x1040) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x70);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
    iVar4 = (int)param_2[1];
    if (0 < iVar4) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
      lVar6 = 0;
      lVar7 = 0;
      do {
        if ((bVar1 & 1) == 0) {
          uVar5 = *param_2;
        }
        else {
          uVar5 = *param_2;
          if ((uVar5 & 1) != 0) {
            uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_2;
          }
        }
        plVar3 = *(longlong **)(param_1 + 0x78);
        if ((plVar3[7] & 0x1040000000U) == 0) {
          (**(code **)(*plVar3 + 0x158))(plVar3,uVar5 + lVar6);
          iVar4 = (int)param_2[1];
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + iVar2;
      } while (lVar7 < iVar4);
    }
  }
  return;
}



// FUNCTION 146274772 FUN_146274772 body=29 status=ok
// SIG undefined FUN_146274772(void)

undefined8 FUN_146274772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274790 FUN_146274790 body=29 status=ok
// SIG undefined FUN_146274790(void)

undefined8 FUN_146274790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462747ae FUN_1462747ae body=29 status=ok
// SIG undefined FUN_1462747ae(void)

undefined8 FUN_1462747ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462747cc FUN_1462747cc body=29 status=ok
// SIG undefined FUN_1462747cc(void)

undefined8 FUN_1462747cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462747ea FUN_1462747ea body=29 status=ok
// SIG undefined FUN_1462747ea(void)

undefined8 FUN_1462747ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274808 FUN_146274808 body=29 status=ok
// SIG undefined FUN_146274808(void)

undefined8 FUN_146274808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274826 FUN_146274826 body=29 status=ok
// SIG undefined FUN_146274826(void)

undefined8 FUN_146274826(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274844 FUN_146274844 body=29 status=ok
// SIG undefined FUN_146274844(void)

undefined8 FUN_146274844(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274862 FUN_146274862 body=29 status=ok
// SIG undefined FUN_146274862(void)

undefined8 FUN_146274862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274880 FUN_146274880 body=29 status=ok
// SIG undefined FUN_146274880(void)

undefined8 FUN_146274880(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627489e FUN_14627489e body=29 status=ok
// SIG undefined FUN_14627489e(void)

undefined8 FUN_14627489e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462748bc FUN_1462748bc body=29 status=ok
// SIG undefined FUN_1462748bc(void)

undefined8 FUN_1462748bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462748da FUN_1462748da body=29 status=ok
// SIG undefined FUN_1462748da(void)

undefined8 FUN_1462748da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462748f8 FUN_1462748f8 body=29 status=ok
// SIG undefined FUN_1462748f8(void)

undefined8 FUN_1462748f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274916 FUN_146274916 body=29 status=ok
// SIG undefined FUN_146274916(void)

undefined8 FUN_146274916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274934 FUN_146274934 body=29 status=ok
// SIG undefined FUN_146274934(void)

undefined8 FUN_146274934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274952 FUN_146274952 body=29 status=ok
// SIG undefined FUN_146274952(void)

undefined8 FUN_146274952(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274970 FUN_146274970 body=29 status=ok
// SIG undefined FUN_146274970(void)

undefined8 FUN_146274970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627498e FUN_14627498e body=29 status=ok
// SIG undefined FUN_14627498e(void)

undefined8 FUN_14627498e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462749ac FUN_1462749ac body=29 status=ok
// SIG undefined FUN_1462749ac(void)

undefined8 FUN_1462749ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462749ca FUN_1462749ca body=29 status=ok
// SIG undefined FUN_1462749ca(void)

undefined8 FUN_1462749ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462749e8 FUN_1462749e8 body=29 status=ok
// SIG undefined FUN_1462749e8(void)

undefined8 FUN_1462749e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274a06 FUN_146274a06 body=29 status=ok
// SIG undefined FUN_146274a06(void)

undefined8 FUN_146274a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274a24 FUN_146274a24 body=29 status=ok
// SIG undefined FUN_146274a24(void)

undefined8 FUN_146274a24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274a42 FUN_146274a42 body=29 status=ok
// SIG undefined FUN_146274a42(void)

undefined8 FUN_146274a42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274a60 FUN_146274a60 body=29 status=ok
// SIG undefined FUN_146274a60(void)

undefined8 FUN_146274a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274a7e FUN_146274a7e body=29 status=ok
// SIG undefined FUN_146274a7e(void)

undefined8 FUN_146274a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274a9c FUN_146274a9c body=29 status=ok
// SIG undefined FUN_146274a9c(void)

undefined8 FUN_146274a9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274aba FUN_146274aba body=29 status=ok
// SIG undefined FUN_146274aba(void)

undefined8 FUN_146274aba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274ad8 FUN_146274ad8 body=29 status=ok
// SIG undefined FUN_146274ad8(void)

undefined8 FUN_146274ad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274af6 FUN_146274af6 body=29 status=ok
// SIG undefined FUN_146274af6(void)

undefined8 FUN_146274af6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274b14 FUN_146274b14 body=29 status=ok
// SIG undefined FUN_146274b14(void)

undefined8 FUN_146274b14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274b32 FUN_146274b32 body=29 status=ok
// SIG undefined FUN_146274b32(void)

undefined8 FUN_146274b32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274b50 FUN_146274b50 body=29 status=ok
// SIG undefined FUN_146274b50(void)

undefined8 FUN_146274b50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274b6e FUN_146274b6e body=29 status=ok
// SIG undefined FUN_146274b6e(void)

undefined8 FUN_146274b6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274b8c FUN_146274b8c body=29 status=ok
// SIG undefined FUN_146274b8c(void)

undefined8 FUN_146274b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274baa FUN_146274baa body=29 status=ok
// SIG undefined FUN_146274baa(void)

undefined8 FUN_146274baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274bc8 FUN_146274bc8 body=29 status=ok
// SIG undefined FUN_146274bc8(void)

undefined8 FUN_146274bc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274be6 FUN_146274be6 body=29 status=ok
// SIG undefined FUN_146274be6(void)

undefined8 FUN_146274be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274c04 FUN_146274c04 body=29 status=ok
// SIG undefined FUN_146274c04(void)

undefined8 FUN_146274c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274c22 FUN_146274c22 body=29 status=ok
// SIG undefined FUN_146274c22(void)

undefined8 FUN_146274c22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274c40 FUN_146274c40 body=29 status=ok
// SIG undefined FUN_146274c40(void)

undefined8 FUN_146274c40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274c5e FUN_146274c5e body=29 status=ok
// SIG undefined FUN_146274c5e(void)

undefined8 FUN_146274c5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274c7c FUN_146274c7c body=29 status=ok
// SIG undefined FUN_146274c7c(void)

undefined8 FUN_146274c7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274c9a FUN_146274c9a body=29 status=ok
// SIG undefined FUN_146274c9a(void)

undefined8 FUN_146274c9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274cb8 FUN_146274cb8 body=29 status=ok
// SIG undefined FUN_146274cb8(void)

undefined8 FUN_146274cb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274cd6 FUN_146274cd6 body=29 status=ok
// SIG undefined FUN_146274cd6(void)

undefined8 FUN_146274cd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274cf4 FUN_146274cf4 body=29 status=ok
// SIG undefined FUN_146274cf4(void)

undefined8 FUN_146274cf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274d12 FUN_146274d12 body=29 status=ok
// SIG undefined FUN_146274d12(void)

undefined8 FUN_146274d12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274d30 FUN_146274d30 body=29 status=ok
// SIG undefined FUN_146274d30(void)

undefined8 FUN_146274d30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274d4e FUN_146274d4e body=29 status=ok
// SIG undefined FUN_146274d4e(void)

undefined8 FUN_146274d4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274d6c FUN_146274d6c body=29 status=ok
// SIG undefined FUN_146274d6c(void)

undefined8 FUN_146274d6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274d8a FUN_146274d8a body=29 status=ok
// SIG undefined FUN_146274d8a(void)

undefined8 FUN_146274d8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274da8 FUN_146274da8 body=29 status=ok
// SIG undefined FUN_146274da8(void)

undefined8 FUN_146274da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274dc6 FUN_146274dc6 body=29 status=ok
// SIG undefined FUN_146274dc6(void)

undefined8 FUN_146274dc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274de4 FUN_146274de4 body=29 status=ok
// SIG undefined FUN_146274de4(void)

undefined8 FUN_146274de4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274e02 FUN_146274e02 body=29 status=ok
// SIG undefined FUN_146274e02(void)

undefined8 FUN_146274e02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274e20 FUN_146274e20 body=29 status=ok
// SIG undefined FUN_146274e20(void)

undefined8 FUN_146274e20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274e3e FUN_146274e3e body=29 status=ok
// SIG undefined FUN_146274e3e(void)

undefined8 FUN_146274e3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274e5c FUN_146274e5c body=29 status=ok
// SIG undefined FUN_146274e5c(void)

undefined8 FUN_146274e5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274e7a FUN_146274e7a body=29 status=ok
// SIG undefined FUN_146274e7a(void)

undefined8 FUN_146274e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274e98 FUN_146274e98 body=29 status=ok
// SIG undefined FUN_146274e98(void)

undefined8 FUN_146274e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274eb6 FUN_146274eb6 body=29 status=ok
// SIG undefined FUN_146274eb6(void)

undefined8 FUN_146274eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274ed4 FUN_146274ed4 body=29 status=ok
// SIG undefined FUN_146274ed4(void)

undefined8 FUN_146274ed4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274ef2 FUN_146274ef2 body=29 status=ok
// SIG undefined FUN_146274ef2(void)

undefined8 FUN_146274ef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274f10 FUN_146274f10 body=29 status=ok
// SIG undefined FUN_146274f10(void)

undefined8 FUN_146274f10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274f2e FUN_146274f2e body=29 status=ok
// SIG undefined FUN_146274f2e(void)

undefined8 FUN_146274f2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274f4c FUN_146274f4c body=29 status=ok
// SIG undefined FUN_146274f4c(void)

undefined8 FUN_146274f4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274f6a FUN_146274f6a body=31 status=ok
// SIG undefined FUN_146274f6a(void)

undefined1
FUN_146274f6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144a7afa6(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 146274f8a FUN_146274f8a body=29 status=ok
// SIG undefined FUN_146274f8a(void)

undefined8 FUN_146274f8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274fa8 FUN_146274fa8 body=29 status=ok
// SIG undefined FUN_146274fa8(void)

undefined8 FUN_146274fa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274fc6 FUN_146274fc6 body=29 status=ok
// SIG undefined FUN_146274fc6(void)

undefined8 FUN_146274fc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146274fe4 FUN_146274fe4 body=29 status=ok
// SIG undefined FUN_146274fe4(void)

undefined8 FUN_146274fe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146275002 FUN_146275002 body=29 status=ok
// SIG undefined FUN_146275002(void)

undefined8 FUN_146275002(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146275020 FUN_146275020 body=29 status=ok
// SIG undefined FUN_146275020(void)

undefined8 FUN_146275020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627503e FUN_14627503e body=29 status=ok
// SIG undefined FUN_14627503e(void)

undefined8 FUN_14627503e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627505c FUN_14627505c body=282 status=ok
// SIG undefined FUN_14627505c(void)

undefined8 FUN_14627505c(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (lVar1 != 0 && -1 < param_4) {
      do {
        if ((*(byte *)(lVar1 + 0xd4) & 0x80) != 0) goto LAB_1462750da;
        lVar1 = *(longlong *)(lVar1 + 0x40);
      } while (lVar1 != 0);
      lVar1 = 0;
    }
LAB_1462750da:
    local_38 = *(longlong *)(lVar1 + 0x18);
    FUN_1400021e4(&local_38,&local_48);
    puVar2 = local_48;
    if (local_40 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_38,L"<I%s>",puVar2);
    if (&local_38 == param_3) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(param_2,L"TScriptInterface");
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146275178 FUN_146275178 body=461 status=ok
// SIG undefined FUN_146275178(void)

void FUN_146275178(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  int *local_90;
  longlong local_88;
  longlong local_80;
  ulonglong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  byte local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (ulonglong *)0x0) {
    lVar11 = *(longlong *)(param_1 + 0x70);
    lVar2 = *(longlong *)(param_1 + 0x78);
    uVar3 = *(ulonglong *)(lVar11 + 0x38);
    uVar4 = *(ulonglong *)(lVar2 + 0x38);
    if (((uVar3 & 0x1040000000) == 0) || ((uVar4 & 0x1040000000) == 0)) {
      local_58 = *(byte *)(param_1 + 0x98);
      local_70 = *(undefined4 *)(param_1 + 0x80);
      uStack_6c = *(undefined4 *)(param_1 + 0x84);
      uStack_68 = *(undefined4 *)(param_1 + 0x88);
      uStack_64 = *(undefined4 *)(param_1 + 0x8c);
      local_60 = *(undefined8 *)(param_1 + 0x90);
      iVar1 = (int)param_2[1];
      iVar9 = 0;
      local_88 = lVar11;
      local_80 = lVar2;
      local_78 = param_2;
      if (0 < iVar1) {
        iVar10 = 0;
        do {
          local_4c = iVar10;
          cVar7 = FUN_1446ec082(&local_88,&local_4c);
          iVar9 = iVar10;
          if (cVar7 != '\0') break;
          iVar10 = iVar10 + 1;
          iVar9 = iVar1;
        } while (iVar1 != iVar10);
      }
      local_4c = iVar9;
      cVar7 = FUN_1446ec082(&local_88);
      if (cVar7 != '\0') {
        local_90 = (int *)(param_1 + 0x80);
        do {
          if ((local_58 & 1) == 0) {
            uVar8 = *local_78;
          }
          else {
            uVar6 = *local_78;
            uVar8 = ((longlong)uVar6 >> 0x18) + (longlong)local_78;
            if ((uVar6 & 1) == 0) {
              uVar8 = uVar6;
            }
          }
          lVar11 = (longlong)iVar9 * (longlong)local_60._4_4_ + uVar8;
          if (((uVar3 & 0x1040000000) == 0) &&
             (plVar5 = *(longlong **)(param_1 + 0x70), (plVar5[7] & 0x1040000000U) == 0)) {
            (**(code **)(*plVar5 + 0x158))(plVar5,lVar11);
          }
          if (((uVar4 & 0x1040000000) == 0) &&
             (plVar5 = *(longlong **)(param_1 + 0x78), (plVar5[7] & 0x1040000000U) == 0)) {
            (**(code **)(*plVar5 + 0x158))(plVar5,lVar11 + *local_90);
          }
          uVar6 = local_78[1];
          do {
            iVar9 = iVar9 + 1;
            if ((int)uVar6 <= iVar9) break;
            local_4c = iVar9;
            cVar7 = FUN_1446ec082(&local_88,&local_4c);
          } while (cVar7 == '\0');
          local_4c = iVar9;
          cVar7 = FUN_1446ec082(&local_88,&local_4c);
        } while (cVar7 != '\0');
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146275346 FUN_146275346 body=183 status=ok
// SIG undefined FUN_146275346(void)

void FUN_146275346(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403a658e();
  plVar1 = (longlong *)(param_1 + 0x70);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0)) &&
     (*plVar1 != 0)) {
    lVar4 = FUN_14001206a();
    lVar2 = *plVar1;
    if (((lVar2 != 0) && (lVar4 != 0)) &&
       ((lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0 &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))))) {
      local_30 = param_1;
      FUN_1468eabe6(lVar2 + 0x1b0,local_24,&local_30,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462753fe FUN_1462753fe body=117 status=ok
// SIG undefined FUN_1462753fe(void)

void FUN_1462753fe(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 == 0) {
    param_4 = param_3 + *(int *)(param_1 + 0x44);
  }
  local_28 = *param_2;
  local_20 = param_2[1];
  FUN_140805e68(param_4,&local_28,1);
  FUN_144a7b126(param_4,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146275474 FUN_146275474 body=101 status=ok
// SIG undefined FUN_146275474(void)

void FUN_146275474(longlong param_1,undefined8 param_2,longlong param_3,char *param_4)

{
  char cVar1;
  
  if (param_3 == 0) {
    param_3 = FUN_140bc13b4(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe0),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe8));
  }
  else if (param_4 == (char *)0x0) {
    param_4 = (char *)(*(int *)(param_1 + 0x44) + param_3);
  }
  if (*param_4 == '\x01') {
    cVar1 = FUN_140ec0d80(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe8),param_2);
    *param_4 = cVar1;
  }
  return;
}



// FUNCTION 1462754da FUN_1462754da body=94 status=ok
// SIG undefined FUN_1462754da(void)

void FUN_1462754da(longlong param_1,longlong param_2,char *param_3)

{
  if (param_2 == 0) {
    param_2 = FUN_140bc13b4(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe0),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe8));
  }
  else if (param_3 == (char *)0x0) {
    param_3 = (char *)(*(int *)(param_1 + 0x44) + param_2);
  }
  if (*param_3 == '\x01') {
    FUN_1400fca8a(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe8));
    *param_3 = '\0';
  }
  return;
}



// FUNCTION 146275546 FUN_146275546 body=50 status=ok
// SIG undefined FUN_146275546(void)

void FUN_146275546(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149e996b0;
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  return;
}



// FUNCTION 146275578 FUN_146275578 body=57 status=ok
// SIG undefined FUN_146275578(void)

void FUN_146275578(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e99980;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 1462755b1 FUN_1462755b1 body=52 status=ok
// SIG undefined FUN_1462755b1(void)

void FUN_1462755b1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea02d0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 1462755eb FUN_1462755eb body=52 status=ok
// SIG undefined FUN_1462755eb(void)

void FUN_1462755eb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea0580;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 14627561f FUN_14627561f body=66 status=ok
// SIG undefined FUN_14627561f(void)

longlong FUN_14627561f(void)

{
  longlong lVar1;
  
  if (DAT_14c952590 == 0) {
    FUN_1457eb309();
    lVar1 = FUN_145b2aff6();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952590 = lVar1;
  }
  return DAT_14c952590;
}



// FUNCTION 146275661 FUN_146275661 body=52 status=ok
// SIG undefined FUN_146275661(void)

void FUN_146275661(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea0830;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 14627569b FUN_14627569b body=57 status=ok
// SIG undefined FUN_14627569b(void)

void FUN_14627569b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_149ea0d90;
  return;
}



// FUNCTION 1462756d9 FUN_1462756d9 body=50 status=ok
// SIG undefined FUN_1462756d9(void)

void FUN_1462756d9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea12f0;
  return;
}



// FUNCTION 14627570b FUN_14627570b body=66 status=ok
// SIG undefined FUN_14627570b(void)

longlong FUN_14627570b(void)

{
  longlong lVar1;
  
  if (DAT_14c9525f0 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145bd307e();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c9525f0 = lVar1;
  }
  return DAT_14c9525f0;
}



// FUNCTION 14627574d FUN_14627574d body=50 status=ok
// SIG undefined FUN_14627574d(void)

void FUN_14627574d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea15a0;
  return;
}



// FUNCTION 14627577f FUN_14627577f body=66 status=ok
// SIG undefined FUN_14627577f(void)

longlong FUN_14627577f(void)

{
  longlong lVar1;
  
  if (DAT_14c952608 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145b2b39e();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952608 = lVar1;
  }
  return DAT_14c952608;
}



// FUNCTION 1462757c1 FUN_1462757c1 body=50 status=ok
// SIG undefined FUN_1462757c1(void)

void FUN_1462757c1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea1850;
  return;
}



// FUNCTION 1462757f3 FUN_1462757f3 body=66 status=ok
// SIG undefined FUN_1462757f3(void)

longlong FUN_1462757f3(void)

{
  longlong lVar1;
  
  if (DAT_14c952620 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145b2b488();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952620 = lVar1;
  }
  return DAT_14c952620;
}



// FUNCTION 146275835 FUN_146275835 body=50 status=ok
// SIG undefined FUN_146275835(void)

void FUN_146275835(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea1b00;
  return;
}



// FUNCTION 146275867 FUN_146275867 body=66 status=ok
// SIG undefined FUN_146275867(void)

longlong FUN_146275867(void)

{
  longlong lVar1;
  
  if (DAT_14c952638 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145b2b572();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952638 = lVar1;
  }
  return DAT_14c952638;
}



// FUNCTION 1462758a9 FUN_1462758a9 body=50 status=ok
// SIG undefined FUN_1462758a9(void)

void FUN_1462758a9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea1db0;
  return;
}



// FUNCTION 1462758db FUN_1462758db body=66 status=ok
// SIG undefined FUN_1462758db(void)

longlong FUN_1462758db(void)

{
  longlong lVar1;
  
  if (DAT_14c952650 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145bb4e0e();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952650 = lVar1;
  }
  return DAT_14c952650;
}



// FUNCTION 14627591d FUN_14627591d body=50 status=ok
// SIG undefined FUN_14627591d(void)

void FUN_14627591d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea2060;
  return;
}



// FUNCTION 14627594f FUN_14627594f body=66 status=ok
// SIG undefined FUN_14627594f(void)

longlong FUN_14627594f(void)

{
  longlong lVar1;
  
  if (DAT_14c952668 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145b2b65c();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952668 = lVar1;
  }
  return DAT_14c952668;
}



// FUNCTION 146275991 FUN_146275991 body=50 status=ok
// SIG undefined FUN_146275991(void)

void FUN_146275991(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea2310;
  return;
}



// FUNCTION 1462759c9 FUN_1462759c9 body=52 status=ok
// SIG undefined FUN_1462759c9(void)

void FUN_1462759c9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea25c0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 1462759fd FUN_1462759fd body=52 status=ok
// SIG undefined FUN_1462759fd(void)

void FUN_1462759fd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_FUN_149ea2870;
  return;
}



// FUNCTION 146275a31 FUN_146275a31 body=57 status=ok
// SIG undefined FUN_146275a31(void)

void FUN_146275a31(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e9a090;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 146275a6f FUN_146275a6f body=50 status=ok
// SIG undefined FUN_146275a6f(void)

void FUN_146275a6f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea2b20;
  return;
}



// FUNCTION 146275aa1 FUN_146275aa1 body=50 status=ok
// SIG undefined FUN_146275aa1(void)

void FUN_146275aa1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea2dd0;
  return;
}



// FUNCTION 146275ad3 FUN_146275ad3 body=50 status=ok
// SIG undefined FUN_146275ad3(void)

void FUN_146275ad3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea3080;
  return;
}



// FUNCTION 146275b05 FUN_146275b05 body=66 status=ok
// SIG undefined FUN_146275b05(void)

longlong FUN_146275b05(void)

{
  longlong lVar1;
  
  if (DAT_14c952710 == 0) {
    FUN_1457eb309();
    lVar1 = FUN_145b2b91a();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952710 = lVar1;
  }
  return DAT_14c952710;
}



// FUNCTION 146275b47 FUN_146275b47 body=50 status=ok
// SIG undefined FUN_146275b47(void)

void FUN_146275b47(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea3330;
  return;
}



// FUNCTION 146275b79 FUN_146275b79 body=50 status=ok
// SIG undefined FUN_146275b79(void)

void FUN_146275b79(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea0ae0;
  return;
}



// FUNCTION 146275bab FUN_146275bab body=52 status=ok
// SIG undefined FUN_146275bab(void)

void FUN_146275bab(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_FUN_149ea1040;
  return;
}



// FUNCTION 146275bdf FUN_146275bdf body=52 status=ok
// SIG undefined FUN_146275bdf(void)

void FUN_146275bdf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e9a480;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 146275c19 FUN_146275c19 body=57 status=ok
// SIG undefined FUN_146275c19(void)

void FUN_146275c19(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_149ea35e0;
  return;
}



// FUNCTION 146275c52 FUN_146275c52 body=52 status=ok
// SIG undefined FUN_146275c52(void)

void FUN_146275c52(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_FUN_149ea3890;
  return;
}



// FUNCTION 146275c86 FUN_146275c86 body=66 status=ok
// SIG undefined FUN_146275c86(void)

longlong FUN_146275c86(void)

{
  longlong lVar1;
  
  if (DAT_14c9527a0 == 0) {
    FUN_1457eb309();
    lVar1 = FUN_145b2ba04();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c9527a0 = lVar1;
  }
  return DAT_14c9527a0;
}



// FUNCTION 146275cc8 FUN_146275cc8 body=50 status=ok
// SIG undefined FUN_146275cc8(void)

void FUN_146275cc8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea3b40;
  return;
}



// FUNCTION 146275cfa FUN_146275cfa body=52 status=ok
// SIG undefined FUN_146275cfa(void)

void FUN_146275cfa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e9a7c0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 146275d2e FUN_146275d2e body=66 status=ok
// SIG undefined FUN_146275d2e(void)

longlong FUN_146275d2e(void)

{
  longlong lVar1;
  
  if (DAT_14c9527e0 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145b2bbd8();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c9527e0 = lVar1;
  }
  return DAT_14c9527e0;
}



// FUNCTION 146275d70 FUN_146275d70 body=50 status=ok
// SIG undefined FUN_146275d70(void)

void FUN_146275d70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea3df0;
  return;
}



// FUNCTION 146275da2 FUN_146275da2 body=66 status=ok
// SIG undefined FUN_146275da2(void)

longlong FUN_146275da2(void)

{
  longlong lVar1;
  
  if (DAT_14c9527f8 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145b2bcc2();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c9527f8 = lVar1;
  }
  return DAT_14c9527f8;
}



// FUNCTION 146275de4 FUN_146275de4 body=50 status=ok
// SIG undefined FUN_146275de4(void)

void FUN_146275de4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea40a0;
  return;
}



// FUNCTION 146275e16 FUN_146275e16 body=66 status=ok
// SIG undefined FUN_146275e16(void)

longlong FUN_146275e16(void)

{
  longlong lVar1;
  
  if (DAT_14c952810 == 0) {
    FUN_14580b32a();
    lVar1 = FUN_145b2bdac();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952810 = lVar1;
  }
  return DAT_14c952810;
}



// FUNCTION 146275e58 FUN_146275e58 body=50 status=ok
// SIG undefined FUN_146275e58(void)

void FUN_146275e58(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea4350;
  return;
}



// FUNCTION 146275e8a FUN_146275e8a body=52 status=ok
// SIG undefined FUN_146275e8a(void)

void FUN_146275e8a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_FUN_149ea4600;
  return;
}



// FUNCTION 146275ebe FUN_146275ebe body=66 status=ok
// SIG undefined FUN_146275ebe(void)

longlong FUN_146275ebe(void)

{
  longlong lVar1;
  
  if (DAT_14c952840 == 0) {
    FUN_1457eb309();
    lVar1 = FUN_145b2bf80();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952840 = lVar1;
  }
  return DAT_14c952840;
}



// FUNCTION 146275f00 FUN_146275f00 body=50 status=ok
// SIG undefined FUN_146275f00(void)

void FUN_146275f00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea48b0;
  return;
}



// FUNCTION 146275f32 FUN_146275f32 body=35 status=ok
// SIG undefined FUN_146275f32(void)

void FUN_146275f32(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149ea4b60;
  return;
}



// FUNCTION 146275f55 FUN_146275f55 body=35 status=ok
// SIG undefined FUN_146275f55(void)

void FUN_146275f55(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149ea4e00;
  return;
}



// FUNCTION 146275f78 FUN_146275f78 body=35 status=ok
// SIG undefined FUN_146275f78(void)

void FUN_146275f78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149ea50a0;
  return;
}



// FUNCTION 146275f9b FUN_146275f9b body=52 status=ok
// SIG undefined FUN_146275f9b(void)

void FUN_146275f9b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149ea5340;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 146275fd0 FUN_146275fd0 body=270 status=ok
// SIG undefined FUN_146275fd0(void)

void FUN_146275fd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403a6406();
  plVar1 = (longlong *)(param_1 + 0x78);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  if (((*(byte *)(param_2 + 5) & 1) == 0) && ((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0)) {
LAB_146276086:
    if (*plVar1 != 0) goto LAB_146276043;
  }
  else if (*plVar1 != 0) {
    lVar3 = FUN_144a817a2();
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      if ((((lVar3 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0)) ||
          (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) goto LAB_146276043;
      local_30 = param_1;
      FUN_1468eabe6(lVar4 + 800,local_24,&local_30,0);
      goto LAB_146276086;
    }
  }
  lVar4 = FUN_1448f9ec4(param_1);
  if (lVar4 != 0) {
    lVar3 = FUN_144a797b2();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && ((*(uint *)(lVar4 + 0xd4) & 0x80000080) == 0x80)) {
      FUN_144a79778(lVar4);
    }
  }
LAB_146276043:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462760e0 FUN_1462760e0 body=199 status=ok
// SIG undefined FUN_1462760e0(void)

void FUN_1462760e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
  iVar8 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(param_2 + 0x20) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)(param_2 + 0x18);
    iVar8 = *(int *)(param_2 + 0x20) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar8,puVar7);
  FUN_144a78877(uVar5,uVar6);
  return;
}



// FUNCTION 1462761a8 FUN_1462761a8 body=32 status=ok
// SIG undefined FUN_1462761a8(void)

undefined8 FUN_1462761a8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"int16");
  return param_2;
}



// FUNCTION 1462761c8 FUN_1462761c8 body=32 status=ok
// SIG undefined FUN_1462761c8(void)

undefined8 FUN_1462761c8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"int8");
  return param_2;
}



// FUNCTION 1462761e8 FUN_1462761e8 body=29 status=ok
// SIG undefined FUN_1462761e8(void)

undefined8 FUN_1462761e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276206 FUN_146276206 body=40 status=ok
// SIG undefined FUN_146276206(void)

undefined8 FUN_146276206(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627622e FUN_14627622e body=40 status=ok
// SIG undefined FUN_14627622e(void)

undefined8 FUN_14627622e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276256 FUN_146276256 body=40 status=ok
// SIG undefined FUN_146276256(void)

undefined8 FUN_146276256(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627627e FUN_14627627e body=40 status=ok
// SIG undefined FUN_14627627e(void)

undefined8 FUN_14627627e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462762a6 FUN_1462762a6 body=40 status=ok
// SIG undefined FUN_1462762a6(void)

undefined8 FUN_1462762a6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462762ce FUN_1462762ce body=40 status=ok
// SIG undefined FUN_1462762ce(void)

undefined8 FUN_1462762ce(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462762f6 FUN_1462762f6 body=40 status=ok
// SIG undefined FUN_1462762f6(void)

undefined8 FUN_1462762f6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627631e FUN_14627631e body=40 status=ok
// SIG undefined FUN_14627631e(void)

undefined8 FUN_14627631e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276346 FUN_146276346 body=40 status=ok
// SIG undefined FUN_146276346(void)

undefined8 FUN_146276346(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627636e FUN_14627636e body=40 status=ok
// SIG undefined FUN_14627636e(void)

undefined8 FUN_14627636e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276396 FUN_146276396 body=40 status=ok
// SIG undefined FUN_146276396(void)

undefined8 FUN_146276396(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462763be FUN_1462763be body=40 status=ok
// SIG undefined FUN_1462763be(void)

undefined8 FUN_1462763be(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462763e6 FUN_1462763e6 body=40 status=ok
// SIG undefined FUN_1462763e6(void)

undefined8 FUN_1462763e6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627640e FUN_14627640e body=40 status=ok
// SIG undefined FUN_14627640e(void)

undefined8 FUN_14627640e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276436 FUN_146276436 body=40 status=ok
// SIG undefined FUN_146276436(void)

undefined8 FUN_146276436(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627645e FUN_14627645e body=40 status=ok
// SIG undefined FUN_14627645e(void)

undefined8 FUN_14627645e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276486 FUN_146276486 body=40 status=ok
// SIG undefined FUN_146276486(void)

undefined8 FUN_146276486(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462764ae FUN_1462764ae body=40 status=ok
// SIG undefined FUN_1462764ae(void)

undefined8 FUN_1462764ae(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462764d6 FUN_1462764d6 body=40 status=ok
// SIG undefined FUN_1462764d6(void)

undefined8 FUN_1462764d6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462764fe FUN_1462764fe body=40 status=ok
// SIG undefined FUN_1462764fe(void)

undefined8 FUN_1462764fe(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276526 FUN_146276526 body=40 status=ok
// SIG undefined FUN_146276526(void)

undefined8 FUN_146276526(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627654e FUN_14627654e body=40 status=ok
// SIG undefined FUN_14627654e(void)

undefined8 FUN_14627654e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276576 FUN_146276576 body=40 status=ok
// SIG undefined FUN_146276576(void)

undefined8 FUN_146276576(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627659e FUN_14627659e body=40 status=ok
// SIG undefined FUN_14627659e(void)

undefined8 FUN_14627659e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462765c6 FUN_1462765c6 body=40 status=ok
// SIG undefined FUN_1462765c6(void)

undefined8 FUN_1462765c6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462765ee FUN_1462765ee body=40 status=ok
// SIG undefined FUN_1462765ee(void)

undefined8 FUN_1462765ee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276616 FUN_146276616 body=40 status=ok
// SIG undefined FUN_146276616(void)

undefined8 FUN_146276616(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627663e FUN_14627663e body=40 status=ok
// SIG undefined FUN_14627663e(void)

undefined8 FUN_14627663e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276666 FUN_146276666 body=40 status=ok
// SIG undefined FUN_146276666(void)

undefined8 FUN_146276666(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627668e FUN_14627668e body=40 status=ok
// SIG undefined FUN_14627668e(void)

undefined8 FUN_14627668e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462766b6 FUN_1462766b6 body=40 status=ok
// SIG undefined FUN_1462766b6(void)

undefined8 FUN_1462766b6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462766de FUN_1462766de body=40 status=ok
// SIG undefined FUN_1462766de(void)

undefined8 FUN_1462766de(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276706 FUN_146276706 body=40 status=ok
// SIG undefined FUN_146276706(void)

undefined8 FUN_146276706(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627672e FUN_14627672e body=40 status=ok
// SIG undefined FUN_14627672e(void)

undefined8 FUN_14627672e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276756 FUN_146276756 body=40 status=ok
// SIG undefined FUN_146276756(void)

undefined8 FUN_146276756(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627677e FUN_14627677e body=40 status=ok
// SIG undefined FUN_14627677e(void)

undefined8 FUN_14627677e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462767a6 FUN_1462767a6 body=40 status=ok
// SIG undefined FUN_1462767a6(void)

undefined8 FUN_1462767a6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462767ce FUN_1462767ce body=82 status=ok
// SIG undefined FUN_1462767ce(void)

void FUN_1462767ce(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20,*param_3);
  *param_2 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146276822 FUN_146276822 body=196 status=ok
// SIG undefined FUN_146276822(void)

void FUN_146276822(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar2 = *(longlong **)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2);
  if ((plVar2 != (longlong *)0x0) && (lVar3 != 0)) {
    (**(code **)(*plVar2 + 0x1f8))(plVar2,&local_58,0,lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462768e8 FUN_1462768e8 body=104 status=ok
// SIG undefined FUN_1462768e8(void)

void FUN_1462768e8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar2 = *(longlong **)(param_2 + 0x30);
  if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_2 + 0x38) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146276946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x200))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 146276950 FUN_146276950 body=132 status=ok
// SIG undefined FUN_146276950(void)

void FUN_146276950(longlong param_1,int param_2)

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



// FUNCTION 1462769d6 FUN_1462769d6 body=29 status=ok
// SIG undefined FUN_1462769d6(void)

undefined8 FUN_1462769d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462769f3 FUN_1462769f3 body=169 status=ok
// SIG undefined FUN_1462769f3(void)

undefined8 * FUN_1462769f3(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  iVar1 = FUN_144a54874(puVar3,L"engine-ini:",0xb);
  if (iVar1 == 0) {
    puVar2 = &DAT_14c872ce8;
  }
  else {
    iVar1 = FUN_144a54874(puVar3,L"game-ini:",9);
    if (iVar1 == 0) {
      puVar2 = &DAT_14c872af8;
    }
    else {
      iVar1 = FUN_144a54874(puVar3,L"input-ini:",10);
      if (iVar1 == 0) {
        puVar2 = &DAT_14c872ae8;
      }
      else {
        iVar1 = FUN_144a54874(puVar3,L"editor-ini:",0xb);
        puVar2 = (undefined8 *)0x0;
        if (iVar1 == 0) {
          puVar2 = &DAT_14c872bc8;
        }
      }
    }
  }
  return puVar2;
}



// FUNCTION 146276a9c FUN_146276a9c body=48 status=ok
// SIG undefined FUN_146276a9c(void)

void FUN_146276a9c(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9643a8);
  FUN_145c06410(&DAT_14c964380);
                    /* WARNING: Could not recover jumptable at 0x000146276ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9643a8);
  return;
}



// FUNCTION 146276acc FUN_146276acc body=120 status=ok
// SIG undefined FUN_146276acc(void)

void FUN_146276acc(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar4 = 8;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_1407d0156(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146276b44 FUN_146276b44 body=29 status=ok
// SIG undefined FUN_146276b44(void)

undefined8 FUN_146276b44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276b62 FUN_146276b62 body=29 status=ok
// SIG undefined FUN_146276b62(void)

undefined8 FUN_146276b62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276b80 FUN_146276b80 body=29 status=ok
// SIG undefined FUN_146276b80(void)

undefined8 FUN_146276b80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276b9e FUN_146276b9e body=29 status=ok
// SIG undefined FUN_146276b9e(void)

undefined8 FUN_146276b9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146276bbc FUN_146276bbc body=55 status=ok
// SIG undefined FUN_146276bbc(void)

void FUN_146276bbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964878 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c964878 = FUN_140002ddd(FUN_146276bf3,uVar1,L"VersePersistentVar");
  }
  return;
}



// FUNCTION 146276bf3 FUN_146276bf3 body=47 status=ok
// SIG undefined FUN_146276bf3(void)

longlong FUN_146276bf3(void)

{
  if (DAT_14c964870 == 0) {
    FUN_14086a14e(&DAT_14c964870,&PTR_FUN_149eb6008);
  }
  return DAT_14c964870;
}



// FUNCTION 146276c22 FUN_146276c22 body=48 status=ok
// SIG undefined FUN_146276c22(void)

void FUN_146276c22(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_149eb70c0;
  return;
}



// FUNCTION 146276c52 FUN_146276c52 body=55 status=ok
// SIG undefined FUN_146276c52(void)

void FUN_146276c52(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964890 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c964890 = FUN_140002ddd(FUN_146276c89,uVar1,L"VerseSessionVar");
  }
  return;
}



// FUNCTION 146276c89 FUN_146276c89 body=47 status=ok
// SIG undefined FUN_146276c89(void)

longlong FUN_146276c89(void)

{
  if (DAT_14c964888 == 0) {
    FUN_14086a14e(&DAT_14c964888,&PTR_FUN_149eb60b8);
  }
  return DAT_14c964888;
}



// FUNCTION 146276cb8 FUN_146276cb8 body=48 status=ok
// SIG undefined FUN_146276cb8(void)

void FUN_146276cb8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149eb7220;
  return;
}



// FUNCTION 146276ce8 FUN_146276ce8 body=55 status=ok
// SIG undefined FUN_146276ce8(void)

void FUN_146276ce8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9648a8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9648a8 = FUN_140002ddd(FUN_146276d1f,uVar1,L"VerseClassVarAccessor");
  }
  return;
}



// FUNCTION 146276d1f FUN_146276d1f body=49 status=ok
// SIG undefined FUN_146276d1f(void)

longlong FUN_146276d1f(void)

{
  if (DAT_14c9648a0 == 0) {
    FUN_14086a14e(&DAT_14c9648a0,&PTR_FUN_149eb6240);
  }
  return DAT_14c9648a0;
}



// FUNCTION 146276d50 FUN_146276d50 body=48 status=ok
// SIG undefined FUN_146276d50(void)

void FUN_146276d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149eb7380;
  return;
}



// FUNCTION 146276d80 FUN_146276d80 body=55 status=ok
// SIG undefined FUN_146276d80(void)

void FUN_146276d80(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9648c0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9648c0 = FUN_140002ddd(FUN_146276db7,uVar1,L"VerseClassVarAccessors");
  }
  return;
}



// FUNCTION 146276db7 FUN_146276db7 body=47 status=ok
// SIG undefined FUN_146276db7(void)

longlong FUN_146276db7(void)

{
  if (DAT_14c9648b8 == 0) {
    FUN_14086a14e(&DAT_14c9648b8,&PTR_FUN_149eb6488);
  }
  return DAT_14c9648b8;
}



// FUNCTION 146276de6 FUN_146276de6 body=48 status=ok
// SIG undefined FUN_146276de6(void)

void FUN_146276de6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_149eb74f0;
  return;
}



// FUNCTION 146276e1b FUN_146276e1b body=47 status=ok
// SIG undefined FUN_146276e1b(void)

longlong FUN_146276e1b(void)

{
  if (DAT_14c964910 == 0) {
    FUN_1409ce572(&DAT_14c964910,&PTR_FUN_149eb7090);
  }
  return DAT_14c964910;
}



// FUNCTION 146276e4a FUN_146276e4a body=47 status=ok
// SIG undefined FUN_146276e4a(void)

longlong FUN_146276e4a(void)

{
  if (DAT_14c9648d8 == 0) {
    FUN_14073dd9a(&DAT_14c9648d8,&PTR_LAB_149eb6ab8);
  }
  return DAT_14c9648d8;
}



// FUNCTION 146276e7a FUN_146276e7a body=34 status=ok
// SIG undefined FUN_146276e7a(void)

undefined8 FUN_146276e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146276e9c FUN_146276e9c body=34 status=ok
// SIG undefined FUN_146276e9c(void)

undefined8 FUN_146276e9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146276ebe FUN_146276ebe body=34 status=ok
// SIG undefined FUN_146276ebe(void)

undefined8 FUN_146276ebe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146276ee0 FUN_146276ee0 body=34 status=ok
// SIG undefined FUN_146276ee0(void)

undefined8 FUN_146276ee0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146276f02 FUN_146276f02 body=236 status=ok
// SIG undefined FUN_146276f02(void)

undefined1 * FUN_146276f02(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar2 = *(undefined1 **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xdc8)
  ;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)FUN_14494321d(1);
    *puVar2 = 0;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
      puVar1 = *(undefined1 **)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xdc8);
      if (puVar1 != puVar2) {
        *(undefined1 **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xdc8) =
             puVar2;
        if (puVar1 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      *(undefined1 **)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xdc8) =
           puVar2;
    }
  }
  *puVar2 = 1;
  return puVar2;
}



// FUNCTION 146276fee FUN_146276fee body=55 status=ok
// SIG undefined FUN_146276fee(void)

void FUN_146276fee(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964948 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964948 = FUN_140002ddd(FUN_14171c6f7,uVar1,L"Axis");
  }
  return;
}



// FUNCTION 146277026 FUN_146277026 body=43 status=ok
// SIG undefined FUN_146277026(void)

void FUN_146277026(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149eb9b70;
  return;
}



// FUNCTION 146277052 FUN_146277052 body=55 status=ok
// SIG undefined FUN_146277052(void)

void FUN_146277052(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964960 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964960 = FUN_140002ddd(FUN_146277089,uVar1,L"NodeChain");
  }
  return;
}



// FUNCTION 146277089 FUN_146277089 body=47 status=ok
// SIG undefined FUN_146277089(void)

longlong FUN_146277089(void)

{
  if (DAT_14c964958 == 0) {
    FUN_14086a14e(&DAT_14c964958,&PTR_FUN_149eb79a0);
  }
  return DAT_14c964958;
}



// FUNCTION 1462770b8 FUN_1462770b8 body=43 status=ok
// SIG undefined FUN_1462770b8(void)

void FUN_1462770b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149eb9cd0;
  return;
}



// FUNCTION 1462770e4 FUN_1462770e4 body=55 status=ok
// SIG undefined FUN_1462770e4(void)

void FUN_1462770e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964978 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964978 = FUN_140002ddd(FUN_14627711b,uVar1,L"NodeObject");
  }
  return;
}



// FUNCTION 14627711b FUN_14627711b body=47 status=ok
// SIG undefined FUN_14627711b(void)

longlong FUN_14627711b(void)

{
  if (DAT_14c964970 == 0) {
    FUN_14086a14e(&DAT_14c964970,&PTR_FUN_149eb7ac0);
  }
  return DAT_14c964970;
}



// FUNCTION 14627714a FUN_14627714a body=43 status=ok
// SIG undefined FUN_14627714a(void)

void FUN_14627714a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_149eb9e30;
  return;
}



// FUNCTION 146277176 FUN_146277176 body=55 status=ok
// SIG undefined FUN_146277176(void)

void FUN_146277176(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964990 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964990 = FUN_140002ddd(FUN_1462771ad,uVar1,L"NodeHierarchyData");
  }
  return;
}



// FUNCTION 1462771ad FUN_1462771ad body=47 status=ok
// SIG undefined FUN_1462771ad(void)

longlong FUN_1462771ad(void)

{
  if (DAT_14c964988 == 0) {
    FUN_14086a14e(&DAT_14c964988,&PTR_FUN_149eb7d50);
  }
  return DAT_14c964988;
}



// FUNCTION 1462771dc FUN_1462771dc body=43 status=ok
// SIG undefined FUN_1462771dc(void)

void FUN_1462771dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_149eb9f90;
  return;
}



// FUNCTION 146277208 FUN_146277208 body=55 status=ok
// SIG undefined FUN_146277208(void)

void FUN_146277208(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9649a8 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c9649a8 = FUN_140002ddd(FUN_14627723f,uVar1,L"NodeHierarchyWithUserData");
  }
  return;
}



// FUNCTION 14627723f FUN_14627723f body=47 status=ok
// SIG undefined FUN_14627723f(void)

longlong FUN_14627723f(void)

{
  if (DAT_14c9649a0 == 0) {
    FUN_14086a14e(&DAT_14c9649a0,&PTR_FUN_149eb7e30);
  }
  return DAT_14c9649a0;
}



// FUNCTION 14627726e FUN_14627726e body=43 status=ok
// SIG undefined FUN_14627726e(void)

void FUN_14627726e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_149eba0f0;
  return;
}



// FUNCTION 146277299 FUN_146277299 body=75 status=ok
// SIG undefined FUN_146277299(void)

void FUN_146277299(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149eb8090;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  return;
}



// FUNCTION 1462772e9 FUN_1462772e9 body=47 status=ok
// SIG undefined FUN_1462772e9(void)

longlong FUN_1462772e9(void)

{
  if (DAT_14c9649c8 == 0) {
    FUN_14073dd9a(&DAT_14c9649c8,&PTR_LAB_149eb8048);
  }
  return DAT_14c9649c8;
}



// FUNCTION 146277318 FUN_146277318 body=55 status=ok
// SIG undefined FUN_146277318(void)

void FUN_146277318(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9649e0 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c9649e0 = FUN_140002ddd(FUN_14627734f,uVar1,L"CCDIKChainLink");
  }
  return;
}



// FUNCTION 14627734f FUN_14627734f body=47 status=ok
// SIG undefined FUN_14627734f(void)

longlong FUN_14627734f(void)

{
  if (DAT_14c9649d8 == 0) {
    FUN_14086a14e(&DAT_14c9649d8,&PTR_FUN_149eb8388);
  }
  return DAT_14c9649d8;
}



// FUNCTION 14627737e FUN_14627737e body=43 status=ok
// SIG undefined FUN_14627737e(void)

void FUN_14627737e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000000e0;
  *puVar1 = &PTR_FUN_149eba3c0;
  return;
}



// FUNCTION 1462773aa FUN_1462773aa body=55 status=ok
// SIG undefined FUN_1462773aa(void)

void FUN_1462773aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9649f8 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c9649f8 = FUN_140002ddd(FUN_14171c8cd,uVar1,L"FilterOptionPerAxis");
  }
  return;
}



// FUNCTION 1462773e2 FUN_1462773e2 body=43 status=ok
// SIG undefined FUN_1462773e2(void)

void FUN_1462773e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_149eba520;
  return;
}



// FUNCTION 14627740e FUN_14627740e body=55 status=ok
// SIG undefined FUN_14627740e(void)

void FUN_14627740e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964a10 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964a10 = FUN_140002ddd(FUN_146277445,uVar1,L"TransformFilter");
  }
  return;
}



// FUNCTION 146277445 FUN_146277445 body=49 status=ok
// SIG undefined FUN_146277445(void)

longlong FUN_146277445(void)

{
  if (DAT_14c964a08 == 0) {
    FUN_14086a14e(&DAT_14c964a08,&PTR_FUN_149eb8698);
  }
  return DAT_14c964a08;
}



// FUNCTION 146277476 FUN_146277476 body=43 status=ok
// SIG undefined FUN_146277476(void)

void FUN_146277476(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x100000009;
  *puVar1 = &PTR_FUN_149eba680;
  return;
}



// FUNCTION 1462774a2 FUN_1462774a2 body=55 status=ok
// SIG undefined FUN_1462774a2(void)

void FUN_1462774a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964a28 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964a28 = FUN_140002ddd(FUN_1462774d9,uVar1,L"ConstraintDescription");
  }
  return;
}



// FUNCTION 1462774d9 FUN_1462774d9 body=47 status=ok
// SIG undefined FUN_1462774d9(void)

longlong FUN_1462774d9(void)

{
  if (DAT_14c964a20 == 0) {
    FUN_14086a14e(&DAT_14c964a20,&PTR_FUN_149eb8970);
  }
  return DAT_14c964a20;
}



// FUNCTION 146277508 FUN_146277508 body=43 status=ok
// SIG undefined FUN_146277508(void)

void FUN_146277508(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000000d;
  *puVar1 = &PTR_FUN_149eba7e0;
  return;
}



// FUNCTION 146277534 FUN_146277534 body=55 status=ok
// SIG undefined FUN_146277534(void)

void FUN_146277534(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964a40 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964a40 = FUN_140002ddd(FUN_14627756b,uVar1,L"ConstraintOffset");
  }
  return;
}



// FUNCTION 14627756b FUN_14627756b body=47 status=ok
// SIG undefined FUN_14627756b(void)

longlong FUN_14627756b(void)

{
  if (DAT_14c964a38 == 0) {
    FUN_14086a14e(&DAT_14c964a38,&PTR_FUN_149eb8b18);
  }
  return DAT_14c964a38;
}



// FUNCTION 14627759a FUN_14627759a body=43 status=ok
// SIG undefined FUN_14627759a(void)

void FUN_14627759a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_149eba940;
  return;
}



// FUNCTION 1462775c6 FUN_1462775c6 body=55 status=ok
// SIG undefined FUN_1462775c6(void)

void FUN_1462775c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964a58 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964a58 = FUN_140002ddd(FUN_1462775fd,uVar1,L"TransformConstraint");
  }
  return;
}



// FUNCTION 1462775fd FUN_1462775fd body=47 status=ok
// SIG undefined FUN_1462775fd(void)

longlong FUN_1462775fd(void)

{
  if (DAT_14c964a50 == 0) {
    FUN_14086a14e(&DAT_14c964a50,&PTR_FUN_149eb8d30);
  }
  return DAT_14c964a50;
}



// FUNCTION 14627762c FUN_14627762c body=43 status=ok
// SIG undefined FUN_14627762c(void)

void FUN_14627762c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000028;
  *puVar1 = &PTR_FUN_149ebaaa0;
  return;
}



// FUNCTION 146277657 FUN_146277657 body=47 status=ok
// SIG undefined FUN_146277657(void)

longlong FUN_146277657(void)

{
  if (DAT_14c964a68 == 0) {
    FUN_1409ce572(&DAT_14c964a68,&PTR_FUN_149eb8db0);
  }
  return DAT_14c964a68;
}



// FUNCTION 146277686 FUN_146277686 body=55 status=ok
// SIG undefined FUN_146277686(void)

void FUN_146277686(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964a88 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964a88 = FUN_140002ddd(FUN_1462776bd,uVar1,L"ConstraintDescriptionEx");
  }
  return;
}



// FUNCTION 1462776bd FUN_1462776bd body=47 status=ok
// SIG undefined FUN_1462776bd(void)

longlong FUN_1462776bd(void)

{
  if (DAT_14c964a80 == 0) {
    FUN_14086a14e(&DAT_14c964a80,&PTR_FUN_149eb8e88);
  }
  return DAT_14c964a80;
}



// FUNCTION 1462776ec FUN_1462776ec body=43 status=ok
// SIG undefined FUN_1462776ec(void)

void FUN_1462776ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149ebac70;
  return;
}


