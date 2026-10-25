// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464a66ca FUN_1464a66ca body=35 status=ok
// SIG undefined FUN_1464a66ca(void)

void FUN_1464a66ca(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c51bc0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afb6070;
  return;
}



// FUNCTION 1464a66f7 FUN_1464a66f7 body=47 status=ok
// SIG undefined FUN_1464a66f7(void)

longlong FUN_1464a66f7(void)

{
  if (DAT_14cb51478 == 0) {
    FUN_14073dd9a(&DAT_14cb51478,&PTR_LAB_14afb6028);
  }
  return DAT_14cb51478;
}



// FUNCTION 1464a672b FUN_1464a672b body=47 status=ok
// SIG undefined FUN_1464a672b(void)

longlong FUN_1464a672b(void)

{
  if (DAT_14cb514b0 == 0) {
    FUN_14073dd9a(&DAT_14cb514b0,&PTR_LAB_14afb65a0);
  }
  return DAT_14cb514b0;
}



// FUNCTION 1464a675a FUN_1464a675a body=47 status=ok
// SIG undefined FUN_1464a675a(void)

longlong FUN_1464a675a(void)

{
  if (DAT_14cb51490 == 0) {
    FUN_14000fc22(&DAT_14cb51490,&PTR_FUN_14afb6400);
  }
  return DAT_14cb51490;
}



// FUNCTION 1464a6789 FUN_1464a6789 body=47 status=ok
// SIG undefined FUN_1464a6789(void)

longlong FUN_1464a6789(void)

{
  if (DAT_14cb514a0 == 0) {
    FUN_14000fc22(&DAT_14cb514a0,&PTR_FUN_14afb64d0);
  }
  return DAT_14cb514a0;
}



// FUNCTION 1464a67b8 FUN_1464a67b8 body=34 status=ok
// SIG undefined FUN_1464a67b8(void)

void FUN_1464a67b8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14586a1a6();
  FUN_14069c8d6(uVar1,&PTR_s_GetEndControlPoint_14afb6510,2);
  return;
}



// FUNCTION 1464a67da FUN_1464a67da body=35 status=ok
// SIG undefined FUN_1464a67da(void)

void FUN_1464a67da(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afb65e0;
  return;
}



// FUNCTION 1464a67fd FUN_1464a67fd body=47 status=ok
// SIG undefined FUN_1464a67fd(void)

longlong FUN_1464a67fd(void)

{
  if (DAT_14cb514c8 == 0) {
    FUN_14073dd9a(&DAT_14cb514c8,&PTR_LAB_14afb6c38);
  }
  return DAT_14cb514c8;
}



// FUNCTION 1464a682c FUN_1464a682c body=55 status=ok
// SIG undefined FUN_1464a682c(void)

void FUN_1464a682c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb514e0 == 0) {
    uVar1 = FUN_14107672d();
    DAT_14cb514e0 = FUN_140002ddd(FUN_1464a6863,uVar1,L"GbxSplineMesh");
  }
  return;
}



// FUNCTION 1464a6863 FUN_1464a6863 body=47 status=ok
// SIG undefined FUN_1464a6863(void)

longlong FUN_1464a6863(void)

{
  if (DAT_14cb514d8 == 0) {
    FUN_14086a14e(&DAT_14cb514d8,&PTR_FUN_14afb7220);
  }
  return DAT_14cb514d8;
}



// FUNCTION 1464a6892 FUN_1464a6892 body=48 status=ok
// SIG undefined FUN_1464a6892(void)

void FUN_1464a6892(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14afb74a0;
  return;
}



// FUNCTION 1464a68c2 FUN_1464a68c2 body=192 status=ok
// SIG undefined FUN_1464a68c2(void)

void FUN_1464a68c2(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afb7610;
  puVar1[3] = &DAT_14cb51508;
  puVar1[4] = FUN_1459cf79e;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a6984 FUN_1464a6984 body=40 status=ok
// SIG undefined FUN_1464a6984(void)

undefined8 FUN_1464a6984(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a69ac FUN_1464a69ac body=34 status=ok
// SIG undefined FUN_1464a69ac(void)

undefined8 FUN_1464a69ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464a69ce FUN_1464a69ce body=34 status=ok
// SIG undefined FUN_1464a69ce(void)

undefined8 FUN_1464a69ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464a69f0 FUN_1464a69f0 body=93 status=ok
// SIG undefined FUN_1464a69f0(void)

void FUN_1464a69f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afb7610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a6a4e FUN_1464a6a4e body=34 status=ok
// SIG undefined FUN_1464a6a4e(void)

undefined8 FUN_1464a6a4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a6a70 FUN_1464a6a70 body=297 status=ok
// SIG undefined FUN_1464a6a70(void)

void FUN_1464a6a70(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_144a8054c();
  local_78 = L"DLSS";
  local_70 = 4;
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_58);
  local_38 = local_58;
  local_30 = local_50 + -1;
  if (local_50 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_48,&local_38,2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  FUN_140056680(&local_38,L"/Plugin/DLSS");
  FUN_141414c4a(&local_38,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a6b9a FUN_1464a6b9a body=192 status=ok
// SIG undefined FUN_1464a6b9a(void)

void FUN_1464a6b9a(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afb7cf0;
  puVar1[3] = &DAT_14cb51668;
  puVar1[4] = FUN_1459cf7cc;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a6c5c FUN_1464a6c5c body=142 status=ok
// SIG undefined FUN_1464a6c5c(void)

code * FUN_1464a6c5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BiasCurrentColor";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x900000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f1ba2;
}



// FUNCTION 1464a6cea FUN_1464a6cea body=136 status=ok
// SIG undefined FUN_1464a6cea(void)

code * FUN_1464a6cea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5dbf6;
}



// FUNCTION 1464a6d72 FUN_1464a6d72 body=136 status=ok
// SIG undefined FUN_1464a6d72(void)

code * FUN_1464a6d72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PassthroughSpecular";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12800000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5dd0a;
}



// FUNCTION 1464a6dfa FUN_1464a6dfa body=144 status=ok
// SIG undefined FUN_1464a6dfa(void)

code * FUN_1464a6dfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"OutputViewPort";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb00000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1464a6e8a;
}



// FUNCTION 1464a6e8a FUN_1464a6e8a body=144 status=ok
// SIG undefined FUN_1464a6e8a(void)

code * FUN_1464a6e8a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InputViewPort";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x400000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f1dca;
}



// FUNCTION 1464a6f1a FUN_1464a6f1a body=144 status=ok
// SIG undefined FUN_1464a6f1a(void)

code * FUN_1464a6f1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1464a6faa;
}



// FUNCTION 1464a6faa FUN_1464a6faa body=138 status=ok
// SIG undefined FUN_1464a6faa(void)

undefined1 * FUN_1464a6faa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x47;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1485f1e54;
}



// FUNCTION 1464a7034 FUN_1464a7034 body=136 status=ok
// SIG undefined FUN_1464a7034(void)

code * FUN_1464a7034(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AlternateMotionVectorsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a70bc;
}



// FUNCTION 1464a70bc FUN_1464a70bc body=144 status=ok
// SIG undefined FUN_1464a70bc(void)

code * FUN_1464a70bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CombinedVelocity";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f1e58;
}



// FUNCTION 1464a714c FUN_1464a714c body=144 status=ok
// SIG undefined FUN_1464a714c(void)

code * FUN_1464a714c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1464a71dc;
}



// FUNCTION 1464a71dc FUN_1464a71dc body=136 status=ok
// SIG undefined FUN_1464a71dc(void)

code * FUN_1464a71dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalJitterPixels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5e04c;
}



// FUNCTION 1464a7264 FUN_1464a7264 body=93 status=ok
// SIG undefined FUN_1464a7264(void)

void FUN_1464a7264(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afb7cf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a72c2 FUN_1464a72c2 body=34 status=ok
// SIG undefined FUN_1464a72c2(void)

undefined8 FUN_1464a72c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a72e4 FUN_1464a72e4 body=93 status=ok
// SIG undefined FUN_1464a72e4(void)

undefined8 FUN_1464a72e4(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146011dcc(local_28);
  FUN_140aa5ef8(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a7342 FUN_1464a7342 body=354 status=ok
// SIG undefined FUN_1464a7342(void)

ulonglong FUN_1464a7342(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  wchar_t *local_40;
  undefined4 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_144a8054c();
  local_40 = L"StreamlineCore";
  local_38 = 0xe;
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_30);
  if (local_30 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_144a8054c();
    local_60 = L"Streamline";
    local_58 = 10;
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_50);
    plVar1 = local_28;
    plVar4 = local_48;
    local_30 = local_50;
    local_50 = (longlong *)0x0;
    if (local_48 == local_28) {
LAB_1464a744e:
      plVar4 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
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
    else {
      local_48 = (longlong *)0x0;
      local_28 = plVar4;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar1 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
        goto LAB_1464a744e;
      }
    }
    if (local_30 == (longlong *)0x0) {
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      goto LAB_1464a7399;
    }
  }
  uVar3 = (**(code **)(*local_30 + 0x48))();
  uVar5 = (ulonglong)uVar3 ^ 1;
LAB_1464a7399:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1464a74a6 FUN_1464a74a6 body=442 status=ok
// SIG undefined FUN_1464a74a6(void)

longlong * FUN_1464a74a6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar6 = *(int *)(param_1 + 0x60);
  if (0 < iVar6) {
    lVar8 = 8;
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar8);
      if ((lVar3 == 0) || (*(int *)(lVar3 + 8) < 2)) {
        local_90 = *(undefined8 *)(param_3 + 0x60);
        local_88 = *(undefined8 *)(param_3 + 0x68);
        local_80 = *(undefined8 *)(param_3 + 0x70);
        local_78 = *(undefined8 *)(param_3 + 0x78);
        local_70 = *(undefined4 *)(param_3 + 0x19c);
        local_6c = *(undefined4 *)(param_3 + 0x1a0);
        local_68 = *(undefined4 *)(param_3 + 0x1a4);
        local_64 = *(undefined1 *)(param_3 + 400);
        local_63 = *(float *)(param_3 + 0x194) != 0.0;
        local_62 = *(undefined1 *)(param_3 + 0x1b0);
        local_61 = *(undefined1 *)(param_3 + 0x1b1);
        local_60 = *(undefined1 *)(param_3 + 0x1b3);
        local_5c = *(undefined4 *)(param_3 + 0x1b4);
        local_58 = *(undefined4 *)(param_3 + 0x1b8);
        local_54 = *(undefined4 *)(param_3 + 0x1bc);
        cVar5 = FUN_14031289a(*(longlong *)(*(longlong *)(param_1 + 0x58) + -8 + lVar8) + 8,
                              &local_90);
        if (cVar5 == '\0') {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x58) + -8 + lVar8);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar8);
          if (lVar8 == 0) {
            *param_2 = lVar7;
            param_2[1] = 0;
          }
          else {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
            plVar4 = (longlong *)param_2[1];
            *param_2 = lVar7;
            param_2[1] = lVar8;
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
          *(undefined4 *)(*param_2 + 0x58) = *(undefined4 *)(param_1 + 0x50);
          break;
        }
        iVar6 = *(int *)(param_1 + 0x60);
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < iVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1464a7662 FUN_1464a7662 body=192 status=ok
// SIG undefined FUN_1464a7662(void)

void FUN_1464a7662(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afb89b0;
  puVar1[3] = &DAT_14cb51b5a;
  puVar1[4] = FUN_1459cf7fa;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a7724 FUN_1464a7724 body=132 status=ok
// SIG undefined FUN_1464a7724(void)

void FUN_1464a7724(longlong param_1,int param_2)

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



// FUNCTION 1464a77a8 FUN_1464a77a8 body=96 status=ok
// SIG undefined FUN_1464a77a8(void)

void FUN_1464a77a8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1464a7808 FUN_1464a7808 body=93 status=ok
// SIG undefined FUN_1464a7808(void)

void FUN_1464a7808(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afb89b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a7866 FUN_1464a7866 body=34 status=ok
// SIG undefined FUN_1464a7866(void)

undefined8 FUN_1464a7866(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a7888 FUN_1464a7888 body=93 status=ok
// SIG undefined FUN_1464a7888(void)

void FUN_1464a7888(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(&local_18,L"NGXRHI",1);
  uVar1 = FUN_144a52528();
  FUN_14493e38c(uVar1,local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a78e6 FUN_1464a78e6 body=192 status=ok
// SIG undefined FUN_1464a78e6(void)

void FUN_1464a78e6(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afb9e50;
  puVar1[3] = &DAT_14cb51b5c;
  puVar1[4] = FUN_1459cf828;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a79a8 FUN_1464a79a8 body=93 status=ok
// SIG undefined FUN_1464a79a8(void)

void FUN_1464a79a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afb9e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a7a06 FUN_1464a7a06 body=34 status=ok
// SIG undefined FUN_1464a7a06(void)

undefined8 FUN_1464a7a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a7a28 FUN_1464a7a28 body=93 status=ok
// SIG undefined FUN_1464a7a28(void)

void FUN_1464a7a28(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(&local_18,L"NGXRHI",1);
  uVar1 = FUN_144a52528();
  FUN_14493e38c(uVar1,local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a7a86 FUN_1464a7a86 body=192 status=ok
// SIG undefined FUN_1464a7a86(void)

void FUN_1464a7a86(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afb9f90;
  puVar1[3] = &DAT_14cb51b60;
  puVar1[4] = FUN_1459cf856;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a7b48 FUN_1464a7b48 body=34 status=ok
// SIG undefined FUN_1464a7b48(void)

undefined8 FUN_1464a7b48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1464a7b6a FUN_1464a7b6a body=93 status=ok
// SIG undefined FUN_1464a7b6a(void)

void FUN_1464a7b6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afb9f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a7bc8 FUN_1464a7bc8 body=34 status=ok
// SIG undefined FUN_1464a7bc8(void)

undefined8 FUN_1464a7bc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a7bea FUN_1464a7bea body=93 status=ok
// SIG undefined FUN_1464a7bea(void)

void FUN_1464a7bea(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(&local_18,L"NGXRHI",1);
  uVar1 = FUN_144a52528();
  FUN_14493e38c(uVar1,local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a7c48 FUN_1464a7c48 body=192 status=ok
// SIG undefined FUN_1464a7c48(void)

void FUN_1464a7c48(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afba0b0;
  puVar1[3] = &DAT_14cb51b64;
  puVar1[4] = FUN_1459cf884;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a7d0a FUN_1464a7d0a body=93 status=ok
// SIG undefined FUN_1464a7d0a(void)

void FUN_1464a7d0a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afba0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a7d68 FUN_1464a7d68 body=34 status=ok
// SIG undefined FUN_1464a7d68(void)

undefined8 FUN_1464a7d68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a7d8a FUN_1464a7d8a body=49 status=ok
// SIG undefined FUN_1464a7d8a(void)

longlong FUN_1464a7d8a(void)

{
  if (DAT_14cb51b70 == 0) {
    FUN_140f50038(&DAT_14cb51b70,&PTR_s__Script_DLSS_14afba168);
  }
  return DAT_14cb51b70;
}



// FUNCTION 1464a7dbb FUN_1464a7dbb body=49 status=ok
// SIG undefined FUN_1464a7dbb(void)

longlong FUN_1464a7dbb(void)

{
  if (DAT_14cb51b80 == 0) {
    FUN_1409ce572(&DAT_14cb51b80,&PTR_FUN_14afba200);
  }
  return DAT_14cb51b80;
}



// FUNCTION 1464a7dec FUN_1464a7dec body=49 status=ok
// SIG undefined FUN_1464a7dec(void)

longlong FUN_1464a7dec(void)

{
  if (DAT_14cb51b98 == 0) {
    FUN_1409ce572(&DAT_14cb51b98,&PTR_FUN_14afba2c0);
  }
  return DAT_14cb51b98;
}



// FUNCTION 1464a7e1d FUN_1464a7e1d body=49 status=ok
// SIG undefined FUN_1464a7e1d(void)

longlong FUN_1464a7e1d(void)

{
  if (DAT_14cb51bb0 == 0) {
    FUN_1409ce572(&DAT_14cb51bb0,&PTR_FUN_14afba410);
  }
  return DAT_14cb51bb0;
}



// FUNCTION 1464a7e4e FUN_1464a7e4e body=42 status=ok
// SIG undefined FUN_1464a7e4e(void)

void FUN_1464a7e4e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afba780;
  *(undefined4 *)(puVar1 + 5) = 0x2010202;
  return;
}



// FUNCTION 1464a7e78 FUN_1464a7e78 body=47 status=ok
// SIG undefined FUN_1464a7e78(void)

longlong FUN_1464a7e78(void)

{
  if (DAT_14cb51bd0 == 0) {
    FUN_14073dd9a(&DAT_14cb51bd0,&PTR_LAB_14afba738);
  }
  return DAT_14cb51bd0;
}



// FUNCTION 1464a7ea7 FUN_1464a7ea7 body=47 status=ok
// SIG undefined FUN_1464a7ea7(void)

longlong FUN_1464a7ea7(void)

{
  if (DAT_14cb51be8 == 0) {
    FUN_14073dd9a(&DAT_14cb51be8,&PTR_LAB_14afbb618);
  }
  return DAT_14cb51be8;
}



// FUNCTION 1464a7ed6 FUN_1464a7ed6 body=61 status=ok
// SIG undefined FUN_1464a7ed6(void)

void FUN_1464a7ed6(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1464a7f14 FUN_1464a7f14 body=336 status=ok
// SIG undefined FUN_1464a7f14(void)

undefined8 * FUN_1464a7f14(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = &PTR_FUN_14afbec60;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14afbed30;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_30 = 0;
  }
  else {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
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
    local_30 = *param_1;
    plVar4 = (longlong *)param_1[1];
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_28 = plVar4;
  FUN_141332b2e(&local_30);
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a806c FUN_1464a806c body=192 status=ok
// SIG undefined FUN_1464a806c(void)

void FUN_1464a806c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afbee60;
  puVar1[3] = &DAT_14cb51d24;
  puVar1[4] = FUN_145bf5f96;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a812e FUN_1464a812e body=40 status=ok
// SIG undefined FUN_1464a812e(void)

undefined8 FUN_1464a812e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a8156 FUN_1464a8156 body=137 status=ok
// SIG undefined FUN_1464a8156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1464a8156(void)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 3;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (uint)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,3,1);
  }
  uVar2 = 0x7fffffff;
  if (2 < (int)uVar1) {
    uVar2 = uVar1;
  }
  FUN_1446f8d3c(&DAT_14cb51c38,0,uVar2,1,1);
  _DAT_14cb51c44 = uVar2;
  return;
}



// FUNCTION 1464a81e0 FUN_1464a81e0 body=42 status=ok
// SIG undefined FUN_1464a81e0(void)

void FUN_1464a81e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145806982(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1464a820a FUN_1464a820a body=29 status=ok
// SIG undefined FUN_1464a820a(void)

undefined8 FUN_1464a820a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a8228 FUN_1464a8228 body=42 status=ok
// SIG undefined FUN_1464a8228(void)

void FUN_1464a8228(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145806982(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1464a8252 FUN_1464a8252 body=29 status=ok
// SIG undefined FUN_1464a8252(void)

undefined8 FUN_1464a8252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a8270 FUN_1464a8270 body=93 status=ok
// SIG undefined FUN_1464a8270(void)

void FUN_1464a8270(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afbee60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a82ce FUN_1464a82ce body=29 status=ok
// SIG undefined FUN_1464a82ce(void)

undefined8 FUN_1464a82ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a82ec FUN_1464a82ec body=136 status=ok
// SIG undefined FUN_1464a82ec(void)

code * FUN_1464a82ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugLayerCompatibilityHelperDest";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e31166;
}



// FUNCTION 1464a8374 FUN_1464a8374 body=136 status=ok
// SIG undefined FUN_1464a8374(void)

code * FUN_1464a8374(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpecularAlbedo";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f3bba;
}



// FUNCTION 1464a83fc FUN_1464a83fc body=49 status=ok
// SIG undefined FUN_1464a83fc(void)

longlong FUN_1464a83fc(void)

{
  if (DAT_14cb52038 == 0) {
    FUN_140f50038(&DAT_14cb52038,&PTR_s__Script_DLSSBlueprint_14afbf256_2_14afbf238);
  }
  return DAT_14cb52038;
}



// FUNCTION 1464a842d FUN_1464a842d body=47 status=ok
// SIG undefined FUN_1464a842d(void)

longlong FUN_1464a842d(void)

{
  if (DAT_14cb52048 == 0) {
    FUN_1409ce572(&DAT_14cb52048,&PTR_FUN_14afbf320);
  }
  return DAT_14cb52048;
}



// FUNCTION 1464a845c FUN_1464a845c body=49 status=ok
// SIG undefined FUN_1464a845c(void)

longlong FUN_1464a845c(void)

{
  if (DAT_14cb52060 == 0) {
    FUN_1409ce572(&DAT_14cb52060,&PTR_FUN_14afbf3e0);
  }
  return DAT_14cb52060;
}



// FUNCTION 1464a848d FUN_1464a848d body=47 status=ok
// SIG undefined FUN_1464a848d(void)

longlong FUN_1464a848d(void)

{
  if (DAT_14cb52078 == 0) {
    FUN_14000fc22(&DAT_14cb52078,&PTR_FUN_14afbf468);
  }
  return DAT_14cb52078;
}



// FUNCTION 1464a84bc FUN_1464a84bc body=47 status=ok
// SIG undefined FUN_1464a84bc(void)

longlong FUN_1464a84bc(void)

{
  if (DAT_14cb52080 == 0) {
    FUN_14000fc22(&DAT_14cb52080,&PTR_FUN_14afbf500);
  }
  return DAT_14cb52080;
}



// FUNCTION 1464a84eb FUN_1464a84eb body=47 status=ok
// SIG undefined FUN_1464a84eb(void)

longlong FUN_1464a84eb(void)

{
  if (DAT_14cb52088 == 0) {
    FUN_14000fc22(&DAT_14cb52088,&PTR_FUN_14afbf598);
  }
  return DAT_14cb52088;
}



// FUNCTION 1464a851a FUN_1464a851a body=47 status=ok
// SIG undefined FUN_1464a851a(void)

longlong FUN_1464a851a(void)

{
  if (DAT_14cb52090 == 0) {
    FUN_14000fc22(&DAT_14cb52090,&PTR_FUN_14afbf688);
  }
  return DAT_14cb52090;
}



// FUNCTION 1464a8549 FUN_1464a8549 body=47 status=ok
// SIG undefined FUN_1464a8549(void)

longlong FUN_1464a8549(void)

{
  if (DAT_14cb52098 == 0) {
    FUN_14000fc22(&DAT_14cb52098,&PTR_FUN_14afbf7a0);
  }
  return DAT_14cb52098;
}



// FUNCTION 1464a8578 FUN_1464a8578 body=47 status=ok
// SIG undefined FUN_1464a8578(void)

longlong FUN_1464a8578(void)

{
  if (DAT_14cb520a0 == 0) {
    FUN_14000fc22(&DAT_14cb520a0,&PTR_FUN_14afbf880);
  }
  return DAT_14cb520a0;
}



// FUNCTION 1464a85a7 FUN_1464a85a7 body=47 status=ok
// SIG undefined FUN_1464a85a7(void)

longlong FUN_1464a85a7(void)

{
  if (DAT_14cb520a8 == 0) {
    FUN_14000fc22(&DAT_14cb520a8,&PTR_FUN_14afbfc00);
  }
  return DAT_14cb520a8;
}



// FUNCTION 1464a85d6 FUN_1464a85d6 body=47 status=ok
// SIG undefined FUN_1464a85d6(void)

longlong FUN_1464a85d6(void)

{
  if (DAT_14cb520b0 == 0) {
    FUN_14000fc22(&DAT_14cb520b0,&PTR_FUN_14afbfce0);
  }
  return DAT_14cb520b0;
}



// FUNCTION 1464a8605 FUN_1464a8605 body=47 status=ok
// SIG undefined FUN_1464a8605(void)

longlong FUN_1464a8605(void)

{
  if (DAT_14cb520b8 == 0) {
    FUN_14000fc22(&DAT_14cb520b8,&PTR_FUN_14afbfdc0);
  }
  return DAT_14cb520b8;
}



// FUNCTION 1464a8634 FUN_1464a8634 body=47 status=ok
// SIG undefined FUN_1464a8634(void)

longlong FUN_1464a8634(void)

{
  if (DAT_14cb520c0 == 0) {
    FUN_14000fc22(&DAT_14cb520c0,&PTR_FUN_14afbfe58);
  }
  return DAT_14cb520c0;
}



// FUNCTION 1464a8663 FUN_1464a8663 body=47 status=ok
// SIG undefined FUN_1464a8663(void)

longlong FUN_1464a8663(void)

{
  if (DAT_14cb520c8 == 0) {
    FUN_14000fc22(&DAT_14cb520c8,&PTR_FUN_14afbff80);
  }
  return DAT_14cb520c8;
}



// FUNCTION 1464a8692 FUN_1464a8692 body=47 status=ok
// SIG undefined FUN_1464a8692(void)

longlong FUN_1464a8692(void)

{
  if (DAT_14cb520d0 == 0) {
    FUN_14000fc22(&DAT_14cb520d0,&PTR_FUN_14afc0018);
  }
  return DAT_14cb520d0;
}



// FUNCTION 1464a86c1 FUN_1464a86c1 body=47 status=ok
// SIG undefined FUN_1464a86c1(void)

longlong FUN_1464a86c1(void)

{
  if (DAT_14cb520d8 == 0) {
    FUN_14000fc22(&DAT_14cb520d8,&PTR_FUN_14afc00b0);
  }
  return DAT_14cb520d8;
}



// FUNCTION 1464a86f0 FUN_1464a86f0 body=47 status=ok
// SIG undefined FUN_1464a86f0(void)

longlong FUN_1464a86f0(void)

{
  if (DAT_14cb520e0 == 0) {
    FUN_14000fc22(&DAT_14cb520e0,&PTR_FUN_14afc01e0);
  }
  return DAT_14cb520e0;
}



// FUNCTION 1464a871f FUN_1464a871f body=47 status=ok
// SIG undefined FUN_1464a871f(void)

longlong FUN_1464a871f(void)

{
  if (DAT_14cb520e8 == 0) {
    FUN_14000fc22(&DAT_14cb520e8,&PTR_FUN_14afc0278);
  }
  return DAT_14cb520e8;
}



// FUNCTION 1464a874e FUN_1464a874e body=47 status=ok
// SIG undefined FUN_1464a874e(void)

longlong FUN_1464a874e(void)

{
  if (DAT_14cb520f0 == 0) {
    FUN_14000fc22(&DAT_14cb520f0,&PTR_FUN_14afc0318);
  }
  return DAT_14cb520f0;
}



// FUNCTION 1464a877d FUN_1464a877d body=47 status=ok
// SIG undefined FUN_1464a877d(void)

longlong FUN_1464a877d(void)

{
  if (DAT_14cb520f8 == 0) {
    FUN_14000fc22(&DAT_14cb520f8,&PTR_FUN_14afc03b0);
  }
  return DAT_14cb520f8;
}



// FUNCTION 1464a87ac FUN_1464a87ac body=47 status=ok
// SIG undefined FUN_1464a87ac(void)

longlong FUN_1464a87ac(void)

{
  if (DAT_14cb52100 == 0) {
    FUN_14000fc22(&DAT_14cb52100,&PTR_FUN_14afc0450);
  }
  return DAT_14cb52100;
}



// FUNCTION 1464a87db FUN_1464a87db body=47 status=ok
// SIG undefined FUN_1464a87db(void)

longlong FUN_1464a87db(void)

{
  if (DAT_14cb52108 == 0) {
    FUN_14000fc22(&DAT_14cb52108,&PTR_FUN_14afc0538);
  }
  return DAT_14cb52108;
}



// FUNCTION 1464a880a FUN_1464a880a body=47 status=ok
// SIG undefined FUN_1464a880a(void)

longlong FUN_1464a880a(void)

{
  if (DAT_14cb52110 == 0) {
    FUN_14000fc22(&DAT_14cb52110,&PTR_FUN_14afc0628);
  }
  return DAT_14cb52110;
}



// FUNCTION 1464a8839 FUN_1464a8839 body=47 status=ok
// SIG undefined FUN_1464a8839(void)

longlong FUN_1464a8839(void)

{
  if (DAT_14cb52118 == 0) {
    FUN_14000fc22(&DAT_14cb52118,&PTR_FUN_14afc0758);
  }
  return DAT_14cb52118;
}



// FUNCTION 1464a8868 FUN_1464a8868 body=47 status=ok
// SIG undefined FUN_1464a8868(void)

longlong FUN_1464a8868(void)

{
  if (DAT_14cb52120 == 0) {
    FUN_14000fc22(&DAT_14cb52120,&PTR_FUN_14afc07f0);
  }
  return DAT_14cb52120;
}



// FUNCTION 1464a8898 FUN_1464a8898 body=34 status=ok
// SIG undefined FUN_1464a8898(void)

void FUN_1464a8898(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7e388();
  FUN_14069c8d6(uVar1,&PTR_s_EnableDLAA_14afc0830,0x16);
  return;
}



// FUNCTION 1464a88ba FUN_1464a88ba body=35 status=ok
// SIG undefined FUN_1464a88ba(void)

void FUN_1464a88ba(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afc0b70;
  return;
}



// FUNCTION 1464a88de FUN_1464a88de body=192 status=ok
// SIG undefined FUN_1464a88de(void)

void FUN_1464a88de(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afc1730;
  puVar1[3] = &DAT_14cb5227c;
  puVar1[4] = FUN_1459cf8b2;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a89a0 FUN_1464a89a0 body=40 status=ok
// SIG undefined FUN_1464a89a0(void)

undefined8 FUN_1464a89a0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a89c8 FUN_1464a89c8 body=93 status=ok
// SIG undefined FUN_1464a89c8(void)

void FUN_1464a89c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc1730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a8a26 FUN_1464a8a26 body=34 status=ok
// SIG undefined FUN_1464a8a26(void)

undefined8 FUN_1464a8a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a8a48 FUN_1464a8a48 body=192 status=ok
// SIG undefined FUN_1464a8a48(void)

void FUN_1464a8a48(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afc1af0;
  puVar1[3] = &DAT_14cb5228c;
  puVar1[4] = FUN_1459cf8e0;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a8b0a FUN_1464a8b0a body=136 status=ok
// SIG undefined FUN_1464a8b0a(void)

code * FUN_1464a8b0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutUIHintTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e68738;
}



// FUNCTION 1464a8b92 FUN_1464a8b92 body=136 status=ok
// SIG undefined FUN_1464a8b92(void)

code * FUN_1464a8b92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AlternateMotionVectorsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1300000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a8c1a;
}



// FUNCTION 1464a8c1a FUN_1464a8c1a body=144 status=ok
// SIG undefined FUN_1464a8c1a(void)

code * FUN_1464a8c1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CombinedVelocity";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f4c60;
}



// FUNCTION 1464a8caa FUN_1464a8caa body=144 status=ok
// SIG undefined FUN_1464a8caa(void)

code * FUN_1464a8caa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1464a8d3a;
}



// FUNCTION 1464a8d3a FUN_1464a8d3a body=136 status=ok
// SIG undefined FUN_1464a8d3a(void)

code * FUN_1464a8d3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalJitterPixels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f4cea;
}



// FUNCTION 1464a8dc2 FUN_1464a8dc2 body=144 status=ok
// SIG undefined FUN_1464a8dc2(void)

code * FUN_1464a8dc2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Velocity";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f1fc1e;
}



// FUNCTION 1464a8e52 FUN_1464a8e52 body=93 status=ok
// SIG undefined FUN_1464a8e52(void)

void FUN_1464a8e52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc1af0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a8eb0 FUN_1464a8eb0 body=34 status=ok
// SIG undefined FUN_1464a8eb0(void)

undefined8 FUN_1464a8eb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a8ed2 FUN_1464a8ed2 body=49 status=ok
// SIG undefined FUN_1464a8ed2(void)

longlong FUN_1464a8ed2(void)

{
  if (DAT_14cb52670 == 0) {
    FUN_140f50038(&DAT_14cb52670,&PTR_s__Script_StreamlineRHI_14afc1be8);
  }
  return DAT_14cb52670;
}



// FUNCTION 1464a8f03 FUN_1464a8f03 body=47 status=ok
// SIG undefined FUN_1464a8f03(void)

longlong FUN_1464a8f03(void)

{
  if (DAT_14cb52680 == 0) {
    FUN_1409ce572(&DAT_14cb52680,&PTR_FUN_14afc1ca0);
  }
  return DAT_14cb52680;
}



// FUNCTION 1464a8f32 FUN_1464a8f32 body=41 status=ok
// SIG undefined FUN_1464a8f32(void)

void FUN_1464a8f32(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afc1ee0;
  *(undefined2 *)(puVar1 + 5) = 0x202;
  return;
}



// FUNCTION 1464a8f5b FUN_1464a8f5b body=47 status=ok
// SIG undefined FUN_1464a8f5b(void)

longlong FUN_1464a8f5b(void)

{
  if (DAT_14cb526a0 == 0) {
    FUN_14073dd9a(&DAT_14cb526a0,&PTR_LAB_14afc1e98);
  }
  return DAT_14cb526a0;
}



// FUNCTION 1464a8f8a FUN_1464a8f8a body=53 status=ok
// SIG undefined FUN_1464a8f8a(void)

void FUN_1464a8f8a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afc2420;
  *(undefined4 *)(puVar1 + 5) = 0x10101;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 1;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1464a8fbf FUN_1464a8fbf body=47 status=ok
// SIG undefined FUN_1464a8fbf(void)

longlong FUN_1464a8fbf(void)

{
  if (DAT_14cb526b8 == 0) {
    FUN_14073dd9a(&DAT_14cb526b8,&PTR_LAB_14afc23d8);
  }
  return DAT_14cb526b8;
}



// FUNCTION 1464a8fee FUN_1464a8fee body=192 status=ok
// SIG undefined FUN_1464a8fee(void)

void FUN_1464a8fee(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afc4470;
  puVar1[3] = &DAT_14cb527d1;
  puVar1[4] = FUN_145a24f56;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a90b0 FUN_1464a90b0 body=40 status=ok
// SIG undefined FUN_1464a90b0(void)

undefined8 FUN_1464a90b0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a90d8 FUN_1464a90d8 body=40 status=ok
// SIG undefined FUN_1464a90d8(void)

undefined8 FUN_1464a90d8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a9100 FUN_1464a9100 body=93 status=ok
// SIG undefined FUN_1464a9100(void)

void FUN_1464a9100(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc4470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a915e FUN_1464a915e body=47 status=ok
// SIG undefined FUN_1464a915e(void)

longlong FUN_1464a915e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a918e FUN_1464a918e body=192 status=ok
// SIG undefined FUN_1464a918e(void)

void FUN_1464a918e(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afc4760;
  puVar1[3] = &DAT_14cb52830;
  puVar1[4] = FUN_1485f6196;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a9250 FUN_1464a9250 body=93 status=ok
// SIG undefined FUN_1464a9250(void)

void FUN_1464a9250(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc4760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a92ae FUN_1464a92ae body=192 status=ok
// SIG undefined FUN_1464a92ae(void)

void FUN_1464a92ae(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afc4980;
  puVar1[3] = &DAT_14cb52834;
  puVar1[4] = FUN_1459cf90e;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a9376 FUN_1464a9376 body=29 status=ok
// SIG undefined FUN_1464a9376(void)

undefined8 FUN_1464a9376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a9394 FUN_1464a9394 body=93 status=ok
// SIG undefined FUN_1464a9394(void)

void FUN_1464a9394(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc4980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a93f2 FUN_1464a93f2 body=29 status=ok
// SIG undefined FUN_1464a93f2(void)

undefined8 FUN_1464a93f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a9410 FUN_1464a9410 body=231 status=ok
// SIG undefined FUN_1464a9410(void)

void FUN_1464a9410(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14afc7e50;
  local_28[3] = &DAT_14cb52860;
  local_28[4] = FUN_145a24f8c;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a94f8 FUN_1464a94f8 body=237 status=ok
// SIG undefined FUN_1464a94f8(void)

undefined8
FUN_1464a94f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14aa9a7d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14afc8830;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14586669c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a95e6 FUN_1464a95e6 body=29 status=ok
// SIG undefined FUN_1464a95e6(void)

undefined8 FUN_1464a95e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a9604 FUN_1464a9604 body=93 status=ok
// SIG undefined FUN_1464a9604(void)

void FUN_1464a9604(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afc7e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a9662 FUN_1464a9662 body=75 status=ok
// SIG undefined FUN_1464a9662(void)

longlong FUN_1464a9662(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a96ae FUN_1464a96ae body=166 status=ok
// SIG undefined FUN_1464a96ae(void)

/* WARNING: Removing unreachable block (ram,0x0001464a974e) */

void FUN_1464a96ae(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"arg%d",(int)param_1[1]);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1464a9756 FUN_1464a9756 body=193 status=ok
// SIG undefined FUN_1464a9756(void)

LPCRITICAL_SECTION FUN_1464a9756(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14afc80d0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)FUN_143c11352;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1464a9818 FUN_1464a9818 body=244 status=ok
// SIG undefined FUN_1464a9818(void)

/* WARNING: Removing unreachable block (ram,0x0001464a98ff) */

void FUN_1464a9818(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((ulonglong)*(uint *)(param_2 + 0x20) < 3) {
    pcVar3 = &DAT_14afc8b88 + *(int *)(&DAT_14afc8b88 + (ulonglong)*(uint *)(param_2 + 0x20) * 4);
  }
  else {
    pcVar3 = "Unknown";
  }
  FUN_144a81018(local_130,pcVar3);
  FUN_140002266(&local_140,L"mode=%s",local_28);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = local_140;
  *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_138;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = local_138._4_4_;
  local_138 = 0;
  local_140 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1464a990e FUN_1464a990e body=29 status=ok
// SIG undefined FUN_1464a990e(void)

undefined8 FUN_1464a990e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a992c FUN_1464a992c body=39 status=ok
// SIG undefined FUN_1464a992c(void)

longlong FUN_1464a992c(longlong param_1,int param_2)

{
  FUN_140af926c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x10);
  }
  return param_1 + -0x10;
}



// FUNCTION 1464a9954 FUN_1464a9954 body=132 status=ok
// SIG undefined FUN_1464a9954(void)

void FUN_1464a9954(longlong param_1,int param_2)

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



// FUNCTION 1464a99d9 FUN_1464a99d9 body=49 status=ok
// SIG undefined FUN_1464a99d9(void)

longlong FUN_1464a99d9(void)

{
  if (DAT_14cb52f88 == 0) {
    FUN_1409ce572(&DAT_14cb52f88,&PTR_FUN_14afc8d20);
  }
  return DAT_14cb52f88;
}



// FUNCTION 1464a9a0a FUN_1464a9a0a body=49 status=ok
// SIG undefined FUN_1464a9a0a(void)

longlong FUN_1464a9a0a(void)

{
  if (DAT_14cb52fa0 == 0) {
    FUN_1409ce572(&DAT_14cb52fa0,&PTR_FUN_14afc8e00);
  }
  return DAT_14cb52fa0;
}



// FUNCTION 1464a9a3b FUN_1464a9a3b body=47 status=ok
// SIG undefined FUN_1464a9a3b(void)

longlong FUN_1464a9a3b(void)

{
  if (DAT_14cb52fb8 == 0) {
    FUN_1409ce572(&DAT_14cb52fb8,&PTR_FUN_14afc8ec0);
  }
  return DAT_14cb52fb8;
}



// FUNCTION 1464a9a6a FUN_1464a9a6a body=49 status=ok
// SIG undefined FUN_1464a9a6a(void)

longlong FUN_1464a9a6a(void)

{
  if (DAT_14cb52fd0 == 0) {
    FUN_14086a14e(&DAT_14cb52fd0,&PTR_FUN_14afc8ff0);
  }
  return DAT_14cb52fd0;
}



// FUNCTION 1464a9a9c FUN_1464a9a9c body=48 status=ok
// SIG undefined FUN_1464a9a9c(void)

void FUN_1464a9a9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14afca370;
  return;
}



// FUNCTION 1464a9acc FUN_1464a9acc body=55 status=ok
// SIG undefined FUN_1464a9acc(void)

void FUN_1464a9acc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52ff0 == 0) {
    uVar1 = FUN_145a24fed();
    DAT_14cb52ff0 = FUN_140002ddd(FUN_1464a9b03,uVar1,L"StreamlineFeatureRequirements");
  }
  return;
}



// FUNCTION 1464a9b03 FUN_1464a9b03 body=47 status=ok
// SIG undefined FUN_1464a9b03(void)

longlong FUN_1464a9b03(void)

{
  if (DAT_14cb52fe8 == 0) {
    FUN_14086a14e(&DAT_14cb52fe8,&PTR_FUN_14afc9350);
  }
  return DAT_14cb52fe8;
}



// FUNCTION 1464a9b32 FUN_1464a9b32 body=48 status=ok
// SIG undefined FUN_1464a9b32(void)

void FUN_1464a9b32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000034;
  *puVar1 = &PTR_FUN_14afca4d0;
  return;
}



// FUNCTION 1464a9b62 FUN_1464a9b62 body=49 status=ok
// SIG undefined FUN_1464a9b62(void)

longlong FUN_1464a9b62(void)

{
  if (DAT_14cb53028 == 0) {
    FUN_14073dd9a(&DAT_14cb53028,&PTR_LAB_14afc9b30);
  }
  return DAT_14cb53028;
}



// FUNCTION 1464a9b93 FUN_1464a9b93 body=47 status=ok
// SIG undefined FUN_1464a9b93(void)

longlong FUN_1464a9b93(void)

{
  if (DAT_14cb53000 == 0) {
    FUN_14000fc22(&DAT_14cb53000,&PTR_FUN_14afc9610);
  }
  return DAT_14cb53000;
}



// FUNCTION 1464a9bc2 FUN_1464a9bc2 body=47 status=ok
// SIG undefined FUN_1464a9bc2(void)

longlong FUN_1464a9bc2(void)

{
  if (DAT_14cb53008 == 0) {
    FUN_14000fc22(&DAT_14cb53008,&PTR_FUN_14afc9758);
  }
  return DAT_14cb53008;
}



// FUNCTION 1464a9bf1 FUN_1464a9bf1 body=47 status=ok
// SIG undefined FUN_1464a9bf1(void)

longlong FUN_1464a9bf1(void)

{
  if (DAT_14cb53010 == 0) {
    FUN_14000fc22(&DAT_14cb53010,&PTR_FUN_14afc9898);
  }
  return DAT_14cb53010;
}



// FUNCTION 1464a9c20 FUN_1464a9c20 body=47 status=ok
// SIG undefined FUN_1464a9c20(void)

longlong FUN_1464a9c20(void)

{
  if (DAT_14cb53018 == 0) {
    FUN_14000fc22(&DAT_14cb53018,&PTR_FUN_14afc9a20);
  }
  return DAT_14cb53018;
}



// FUNCTION 1464a9c50 FUN_1464a9c50 body=34 status=ok
// SIG undefined FUN_1464a9c50(void)

void FUN_1464a9c50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7e474();
  FUN_14069c8d6(uVar1,&PTR_s_BreakStreamlineFeatureRequiremen_14afc9a60,4);
  return;
}



// FUNCTION 1464a9c72 FUN_1464a9c72 body=35 status=ok
// SIG undefined FUN_1464a9c72(void)

void FUN_1464a9c72(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afc9b70;
  return;
}



// FUNCTION 1464a9c96 FUN_1464a9c96 body=192 status=ok
// SIG undefined FUN_1464a9c96(void)

void FUN_1464a9c96(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afca640;
  puVar1[3] = &DAT_14cb53039;
  puVar1[4] = FUN_1459cf93c;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464a9d58 FUN_1464a9d58 body=40 status=ok
// SIG undefined FUN_1464a9d58(void)

undefined8 FUN_1464a9d58(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464a9d80 FUN_1464a9d80 body=34 status=ok
// SIG undefined FUN_1464a9d80(void)

undefined8 FUN_1464a9d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464a9da2 FUN_1464a9da2 body=34 status=ok
// SIG undefined FUN_1464a9da2(void)

undefined8 FUN_1464a9da2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464a9dc4 FUN_1464a9dc4 body=93 status=ok
// SIG undefined FUN_1464a9dc4(void)

void FUN_1464a9dc4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afca640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464a9e22 FUN_1464a9e22 body=34 status=ok
// SIG undefined FUN_1464a9e22(void)

undefined8 FUN_1464a9e22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464a9e44 FUN_1464a9e44 body=47 status=ok
// SIG undefined FUN_1464a9e44(void)

longlong FUN_1464a9e44(void)

{
  if (DAT_14cb530c8 == 0) {
    FUN_140f50038(&DAT_14cb530c8,&PTR_s__Script_StreamlineReflexBlueprin_14afcb51f_1_14afcb500);
  }
  return DAT_14cb530c8;
}



// FUNCTION 1464a9e73 FUN_1464a9e73 body=49 status=ok
// SIG undefined FUN_1464a9e73(void)

longlong FUN_1464a9e73(void)

{
  if (DAT_14cb53040 == 0) {
    FUN_1409ce572(&DAT_14cb53040,&PTR_FUN_14afca750);
  }
  return DAT_14cb53040;
}



// FUNCTION 1464a9ea4 FUN_1464a9ea4 body=49 status=ok
// SIG undefined FUN_1464a9ea4(void)

longlong FUN_1464a9ea4(void)

{
  if (DAT_14cb530b0 == 0) {
    FUN_14073dd9a(&DAT_14cb530b0,&PTR_LAB_14afcb190);
  }
  return DAT_14cb530b0;
}



// FUNCTION 1464a9ed5 FUN_1464a9ed5 body=47 status=ok
// SIG undefined FUN_1464a9ed5(void)

longlong FUN_1464a9ed5(void)

{
  if (DAT_14cb53058 == 0) {
    FUN_14000fc22(&DAT_14cb53058,&PTR_FUN_14afca828);
  }
  return DAT_14cb53058;
}



// FUNCTION 1464a9f04 FUN_1464a9f04 body=47 status=ok
// SIG undefined FUN_1464a9f04(void)

longlong FUN_1464a9f04(void)

{
  if (DAT_14cb53060 == 0) {
    FUN_14000fc22(&DAT_14cb53060,&PTR_FUN_14afca8c0);
  }
  return DAT_14cb53060;
}



// FUNCTION 1464a9f33 FUN_1464a9f33 body=47 status=ok
// SIG undefined FUN_1464a9f33(void)

longlong FUN_1464a9f33(void)

{
  if (DAT_14cb53068 == 0) {
    FUN_14000fc22(&DAT_14cb53068,&PTR_FUN_14afca960);
  }
  return DAT_14cb53068;
}



// FUNCTION 1464a9f62 FUN_1464a9f62 body=47 status=ok
// SIG undefined FUN_1464a9f62(void)

longlong FUN_1464a9f62(void)

{
  if (DAT_14cb53070 == 0) {
    FUN_14000fc22(&DAT_14cb53070,&PTR_FUN_14afcaa40);
  }
  return DAT_14cb53070;
}



// FUNCTION 1464a9f91 FUN_1464a9f91 body=47 status=ok
// SIG undefined FUN_1464a9f91(void)

longlong FUN_1464a9f91(void)

{
  if (DAT_14cb53078 == 0) {
    FUN_14000fc22(&DAT_14cb53078,&PTR_FUN_14afcaad8);
  }
  return DAT_14cb53078;
}



// FUNCTION 1464a9fc0 FUN_1464a9fc0 body=47 status=ok
// SIG undefined FUN_1464a9fc0(void)

longlong FUN_1464a9fc0(void)

{
  if (DAT_14cb53080 == 0) {
    FUN_14000fc22(&DAT_14cb53080,&PTR_FUN_14afcac00);
  }
  return DAT_14cb53080;
}



// FUNCTION 1464a9fef FUN_1464a9fef body=47 status=ok
// SIG undefined FUN_1464a9fef(void)

longlong FUN_1464a9fef(void)

{
  if (DAT_14cb53088 == 0) {
    FUN_14000fc22(&DAT_14cb53088,&PTR_FUN_14afcad40);
  }
  return DAT_14cb53088;
}



// FUNCTION 1464aa01e FUN_1464aa01e body=47 status=ok
// SIG undefined FUN_1464aa01e(void)

longlong FUN_1464aa01e(void)

{
  if (DAT_14cb53090 == 0) {
    FUN_14000fc22(&DAT_14cb53090,&PTR_FUN_14afcade0);
  }
  return DAT_14cb53090;
}



// FUNCTION 1464aa04d FUN_1464aa04d body=47 status=ok
// SIG undefined FUN_1464aa04d(void)

longlong FUN_1464aa04d(void)

{
  if (DAT_14cb53098 == 0) {
    FUN_14000fc22(&DAT_14cb53098,&PTR_FUN_14afcaec8);
  }
  return DAT_14cb53098;
}



// FUNCTION 1464aa07c FUN_1464aa07c body=47 status=ok
// SIG undefined FUN_1464aa07c(void)

longlong FUN_1464aa07c(void)

{
  if (DAT_14cb530a0 == 0) {
    FUN_14000fc22(&DAT_14cb530a0,&PTR_FUN_14afcafb0);
  }
  return DAT_14cb530a0;
}



// FUNCTION 1464aa0ac FUN_1464aa0ac body=34 status=ok
// SIG undefined FUN_1464aa0ac(void)

void FUN_1464aa0ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7e560();
  FUN_14069c8d6(uVar1,&PTR_s_GetDefaultReflexMode_14afcaff0,10);
  return;
}



// FUNCTION 1464aa0ce FUN_1464aa0ce body=35 status=ok
// SIG undefined FUN_1464aa0ce(void)

void FUN_1464aa0ce(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afcb1d0;
  return;
}



// FUNCTION 1464aa0f2 FUN_1464aa0f2 body=192 status=ok
// SIG undefined FUN_1464aa0f2(void)

void FUN_1464aa0f2(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afcb600;
  puVar1[3] = &DAT_14cb530d9;
  puVar1[4] = FUN_1459cf96a;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aa1b4 FUN_1464aa1b4 body=40 status=ok
// SIG undefined FUN_1464aa1b4(void)

undefined8 FUN_1464aa1b4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464aa1dc FUN_1464aa1dc body=93 status=ok
// SIG undefined FUN_1464aa1dc(void)

void FUN_1464aa1dc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcb600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aa23a FUN_1464aa23a body=34 status=ok
// SIG undefined FUN_1464aa23a(void)

undefined8 FUN_1464aa23a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464aa25c FUN_1464aa25c body=114 status=ok
// SIG undefined FUN_1464aa25c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1464aa25c(void)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_20,&DAT_14cb530dc);
  if (cVar1 == '\0') {
    _DAT_14cb530dc = 0;
    uRam000000014cb530e4 = 0;
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aa2d0 FUN_1464aa2d0 body=93 status=ok
// SIG undefined FUN_1464aa2d0(void)

void FUN_1464aa2d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcb6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aa32e FUN_1464aa32e body=34 status=ok
// SIG undefined FUN_1464aa32e(void)

undefined8 FUN_1464aa32e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464aa350 FUN_1464aa350 body=114 status=ok
// SIG undefined FUN_1464aa350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1464aa350(void)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_20,&DAT_14cb530f0);
  if (cVar1 == '\0') {
    _DAT_14cb530f0 = 0;
    uRam000000014cb530f8 = 0;
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aa3c4 FUN_1464aa3c4 body=33 status=ok
// SIG undefined FUN_1464aa3c4(void)

void FUN_1464aa3c4(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a52528();
  FUN_14126849c(lVar1 + 0x310,param_1);
  return;
}



// FUNCTION 1464aa3e6 FUN_1464aa3e6 body=231 status=ok
// SIG undefined FUN_1464aa3e6(void)

void FUN_1464aa3e6(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14afcbe60;
  local_28[3] = &DAT_14cb53101;
  local_28[4] = FUN_1459cf998;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aa4ce FUN_1464aa4ce body=93 status=ok
// SIG undefined FUN_1464aa4ce(void)

void FUN_1464aa4ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcbe60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aa52c FUN_1464aa52c body=29 status=ok
// SIG undefined FUN_1464aa52c(void)

undefined8 FUN_1464aa52c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464aa54a FUN_1464aa54a body=192 status=ok
// SIG undefined FUN_1464aa54a(void)

void FUN_1464aa54a(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afcc250;
  puVar1[3] = &DAT_14cb53160;
  puVar1[4] = FUN_1459a64ec;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aa60c FUN_1464aa60c body=93 status=ok
// SIG undefined FUN_1464aa60c(void)

void FUN_1464aa60c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcc250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aa66a FUN_1464aa66a body=34 status=ok
// SIG undefined FUN_1464aa66a(void)

undefined8 FUN_1464aa66a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464aa68c FUN_1464aa68c body=192 status=ok
// SIG undefined FUN_1464aa68c(void)

void FUN_1464aa68c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afcc530;
  puVar1[3] = &DAT_14cb533c8;
  puVar1[4] = FUN_145a1f39e;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aa74e FUN_1464aa74e body=136 status=ok
// SIG undefined FUN_1464aa74e(void)

code * FUN_1464aa74e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVelocityTex";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6f52c;
}



// FUNCTION 1464aa7d6 FUN_1464aa7d6 body=136 status=ok
// SIG undefined FUN_1464aa7d6(void)

code * FUN_1464aa7d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutUITexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e68ca2;
}



// FUNCTION 1464aa85e FUN_1464aa85e body=93 status=ok
// SIG undefined FUN_1464aa85e(void)

void FUN_1464aa85e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcc530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aa8bc FUN_1464aa8bc body=34 status=ok
// SIG undefined FUN_1464aa8bc(void)

undefined8 FUN_1464aa8bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464aa8de FUN_1464aa8de body=231 status=ok
// SIG undefined FUN_1464aa8de(void)

void FUN_1464aa8de(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14afccf70;
  local_28[3] = &DAT_14cb53664;
  local_28[4] = FUN_145bfe920;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aa9c6 FUN_1464aa9c6 body=93 status=ok
// SIG undefined FUN_1464aa9c6(void)

void FUN_1464aa9c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afccf70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aaa24 FUN_1464aaa24 body=231 status=ok
// SIG undefined FUN_1464aaa24(void)

void FUN_1464aaa24(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14afcdda0;
  local_28[3] = &DAT_14cb5371c;
  local_28[4] = FUN_145a1f3d2;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aab0c FUN_1464aab0c body=93 status=ok
// SIG undefined FUN_1464aab0c(void)

void FUN_1464aab0c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcdda0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aab6a FUN_1464aab6a body=29 status=ok
// SIG undefined FUN_1464aab6a(void)

undefined8 FUN_1464aab6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464aab88 FUN_1464aab88 body=231 status=ok
// SIG undefined FUN_1464aab88(void)

void FUN_1464aab88(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14afce610;
  local_28[3] = &DAT_14cb53818;
  local_28[4] = FUN_1459cf9c6;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aac70 FUN_1464aac70 body=93 status=ok
// SIG undefined FUN_1464aac70(void)

void FUN_1464aac70(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afce610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aaccd FUN_1464aaccd body=47 status=ok
// SIG undefined FUN_1464aaccd(void)

longlong FUN_1464aaccd(void)

{
  if (DAT_14cb53950 == 0) {
    FUN_140f50038(&DAT_14cb53950,&PTR_s__Script_XeFGBlueprint_14afce7c8);
  }
  return DAT_14cb53950;
}



// FUNCTION 1464aacfc FUN_1464aacfc body=49 status=ok
// SIG undefined FUN_1464aacfc(void)

longlong FUN_1464aacfc(void)

{
  if (DAT_14cb53960 == 0) {
    FUN_1409ce572(&DAT_14cb53960,&PTR_FUN_14afce890);
  }
  return DAT_14cb53960;
}



// FUNCTION 1464aad2d FUN_1464aad2d body=49 status=ok
// SIG undefined FUN_1464aad2d(void)

longlong FUN_1464aad2d(void)

{
  if (DAT_14cb539d0 == 0) {
    FUN_14073dd9a(&DAT_14cb539d0,&PTR_LAB_14afcf070);
  }
  return DAT_14cb539d0;
}



// FUNCTION 1464aad5e FUN_1464aad5e body=47 status=ok
// SIG undefined FUN_1464aad5e(void)

longlong FUN_1464aad5e(void)

{
  if (DAT_14cb53990 == 0) {
    FUN_14000fc22(&DAT_14cb53990,&PTR_FUN_14afcea20);
  }
  return DAT_14cb53990;
}



// FUNCTION 1464aad8d FUN_1464aad8d body=47 status=ok
// SIG undefined FUN_1464aad8d(void)

longlong FUN_1464aad8d(void)

{
  if (DAT_14cb53998 == 0) {
    FUN_14000fc22(&DAT_14cb53998,&PTR_FUN_14afceb00);
  }
  return DAT_14cb53998;
}



// FUNCTION 1464aadbc FUN_1464aadbc body=47 status=ok
// SIG undefined FUN_1464aadbc(void)

longlong FUN_1464aadbc(void)

{
  if (DAT_14cb539a8 == 0) {
    FUN_14000fc22(&DAT_14cb539a8,&PTR_FUN_14afcec98);
  }
  return DAT_14cb539a8;
}



// FUNCTION 1464aadeb FUN_1464aadeb body=47 status=ok
// SIG undefined FUN_1464aadeb(void)

longlong FUN_1464aadeb(void)

{
  if (DAT_14cb539b0 == 0) {
    FUN_14000fc22(&DAT_14cb539b0,&PTR_FUN_14afced30);
  }
  return DAT_14cb539b0;
}



// FUNCTION 1464aae1a FUN_1464aae1a body=47 status=ok
// SIG undefined FUN_1464aae1a(void)

longlong FUN_1464aae1a(void)

{
  if (DAT_14cb539b8 == 0) {
    FUN_14000fc22(&DAT_14cb539b8,&PTR_FUN_14afcee10);
  }
  return DAT_14cb539b8;
}



// FUNCTION 1464aae4a FUN_1464aae4a body=34 status=ok
// SIG undefined FUN_1464aae4a(void)

void FUN_1464aae4a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7e64c();
  FUN_14069c8d6(uVar1,&PTR_s_GetSupportedXeFGModes_14afcef40,7);
  return;
}



// FUNCTION 1464aae6c FUN_1464aae6c body=35 status=ok
// SIG undefined FUN_1464aae6c(void)

void FUN_1464aae6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afcf0b0;
  return;
}



// FUNCTION 1464aae90 FUN_1464aae90 body=192 status=ok
// SIG undefined FUN_1464aae90(void)

void FUN_1464aae90(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afcf610;
  puVar1[3] = &DAT_14cb53a10;
  puVar1[4] = FUN_1459cfa24;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464aaf52 FUN_1464aaf52 body=40 status=ok
// SIG undefined FUN_1464aaf52(void)

undefined8 FUN_1464aaf52(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464aaf7a FUN_1464aaf7a body=93 status=ok
// SIG undefined FUN_1464aaf7a(void)

void FUN_1464aaf7a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcf610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464aafd8 FUN_1464aafd8 body=29 status=ok
// SIG undefined FUN_1464aafd8(void)

undefined8 FUN_1464aafd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464aaff5 FUN_1464aaff5 body=47 status=ok
// SIG undefined FUN_1464aaff5(void)

longlong FUN_1464aaff5(void)

{
  if (DAT_14cb53a18 == 0) {
    FUN_14086a14e(&DAT_14cb53a18,&PTR_FUN_14afcf908);
  }
  return DAT_14cb53a18;
}



// FUNCTION 1464ab024 FUN_1464ab024 body=48 status=ok
// SIG undefined FUN_1464ab024(void)

void FUN_1464ab024(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14afd0520;
  return;
}



// FUNCTION 1464ab054 FUN_1464ab054 body=47 status=ok
// SIG undefined FUN_1464ab054(void)

longlong FUN_1464ab054(void)

{
  if (DAT_14cb53a48 == 0) {
    FUN_14073dd9a(&DAT_14cb53a48,&PTR_LAB_14afcfd10);
  }
  return DAT_14cb53a48;
}



// FUNCTION 1464ab083 FUN_1464ab083 body=47 status=ok
// SIG undefined FUN_1464ab083(void)

longlong FUN_1464ab083(void)

{
  if (DAT_14cb53a30 == 0) {
    FUN_14000fc22(&DAT_14cb53a30,&PTR_FUN_14afcf9f0);
  }
  return DAT_14cb53a30;
}



// FUNCTION 1464ab0b2 FUN_1464ab0b2 body=47 status=ok
// SIG undefined FUN_1464ab0b2(void)

longlong FUN_1464ab0b2(void)

{
  if (DAT_14cb53a38 == 0) {
    FUN_14000fc22(&DAT_14cb53a38,&PTR_FUN_14afcfc50);
  }
  return DAT_14cb53a38;
}



// FUNCTION 1464ab0e2 FUN_1464ab0e2 body=34 status=ok
// SIG undefined FUN_1464ab0e2(void)

void FUN_1464ab0e2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141419aaa();
  FUN_14069c8d6(uVar1,&PTR_s_PlayFaceFXAnim_14afcfc90,2);
  return;
}



// FUNCTION 1464ab104 FUN_1464ab104 body=35 status=ok
// SIG undefined FUN_1464ab104(void)

void FUN_1464ab104(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afcfd50;
  return;
}



// FUNCTION 1464ab12c FUN_1464ab12c body=46 status=ok
// SIG undefined FUN_1464ab12c(void)

void FUN_1464ab12c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afd01d0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1464ab15f FUN_1464ab15f body=47 status=ok
// SIG undefined FUN_1464ab15f(void)

longlong FUN_1464ab15f(void)

{
  if (DAT_14cb53a78 == 0) {
    FUN_14073dd9a(&DAT_14cb53a78,&PTR_LAB_14afd0188);
  }
  return DAT_14cb53a78;
}



// FUNCTION 1464ab18e FUN_1464ab18e body=192 status=ok
// SIG undefined FUN_1464ab18e(void)

void FUN_1464ab18e(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afd06b0;
  puVar1[3] = &DAT_14cb53ab0;
  puVar1[4] = FUN_1459cfa52;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464ab250 FUN_1464ab250 body=40 status=ok
// SIG undefined FUN_1464ab250(void)

undefined8 FUN_1464ab250(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ab278 FUN_1464ab278 body=29 status=ok
// SIG undefined FUN_1464ab278(void)

undefined8 FUN_1464ab278(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ab296 FUN_1464ab296 body=93 status=ok
// SIG undefined FUN_1464ab296(void)

void FUN_1464ab296(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afd06b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464ab2f4 FUN_1464ab2f4 body=29 status=ok
// SIG undefined FUN_1464ab2f4(void)

undefined8 FUN_1464ab2f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ab316 FUN_1464ab316 body=47 status=ok
// SIG undefined FUN_1464ab316(void)

longlong FUN_1464ab316(void)

{
  if (DAT_14cb53ae0 == 0) {
    FUN_14073dd9a(&DAT_14cb53ae0,&PTR_LAB_14afd0a10);
  }
  return DAT_14cb53ae0;
}



// FUNCTION 1464ab345 FUN_1464ab345 body=47 status=ok
// SIG undefined FUN_1464ab345(void)

longlong FUN_1464ab345(void)

{
  if (DAT_14cb53ad0 == 0) {
    FUN_14000fc22(&DAT_14cb53ad0,&PTR_FUN_14afd0898);
  }
  return DAT_14cb53ad0;
}



// FUNCTION 1464ab374 FUN_1464ab374 body=34 status=ok
// SIG undefined FUN_1464ab374(void)

void FUN_1464ab374(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7e738();
  FUN_14069c8d6(uVar1,&PTR_s_TransitionToCloudscape_14afd08e0,1);
  return;
}



// FUNCTION 1464ab39b FUN_1464ab39b body=47 status=ok
// SIG undefined FUN_1464ab39b(void)

longlong FUN_1464ab39b(void)

{
  if (DAT_14cb53af0 == 0) {
    FUN_1409ce572(&DAT_14cb53af0,&PTR_FUN_14afd1120);
  }
  return DAT_14cb53af0;
}



// FUNCTION 1464ab3ca FUN_1464ab3ca body=47 status=ok
// SIG undefined FUN_1464ab3ca(void)

longlong FUN_1464ab3ca(void)

{
  if (DAT_14cb53b08 == 0) {
    FUN_14086a14e(&DAT_14cb53b08,&PTR_FUN_14afd1360);
  }
  return DAT_14cb53b08;
}



// FUNCTION 1464ab3fa FUN_1464ab3fa body=48 status=ok
// SIG undefined FUN_1464ab3fa(void)

void FUN_1464ab3fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14afd2fb0;
  return;
}



// FUNCTION 1464ab42f FUN_1464ab42f body=47 status=ok
// SIG undefined FUN_1464ab42f(void)

longlong FUN_1464ab42f(void)

{
  if (DAT_14cb53b28 == 0) {
    FUN_14073dd9a(&DAT_14cb53b28,&PTR_LAB_14afd1538);
  }
  return DAT_14cb53b28;
}



// FUNCTION 1464ab463 FUN_1464ab463 body=47 status=ok
// SIG undefined FUN_1464ab463(void)

longlong FUN_1464ab463(void)

{
  if (DAT_14cb53b50 == 0) {
    FUN_14073dd9a(&DAT_14cb53b50,&PTR_LAB_14afd1a90);
  }
  return DAT_14cb53b50;
}



// FUNCTION 1464ab492 FUN_1464ab492 body=49 status=ok
// SIG undefined FUN_1464ab492(void)

longlong FUN_1464ab492(void)

{
  if (DAT_14cb53b88 == 0) {
    FUN_14073dd9a(&DAT_14cb53b88,&PTR_LAB_14afd2a50);
  }
  return DAT_14cb53b88;
}



// FUNCTION 1464ab4c3 FUN_1464ab4c3 body=47 status=ok
// SIG undefined FUN_1464ab4c3(void)

longlong FUN_1464ab4c3(void)

{
  if (DAT_14cb53b60 == 0) {
    FUN_14000fc22(&DAT_14cb53b60,&PTR_FUN_14afd2728);
  }
  return DAT_14cb53b60;
}



// FUNCTION 1464ab4f2 FUN_1464ab4f2 body=47 status=ok
// SIG undefined FUN_1464ab4f2(void)

longlong FUN_1464ab4f2(void)

{
  if (DAT_14cb53b68 == 0) {
    FUN_14000fc22(&DAT_14cb53b68,&PTR_FUN_14afd27e8);
  }
  return DAT_14cb53b68;
}



// FUNCTION 1464ab521 FUN_1464ab521 body=47 status=ok
// SIG undefined FUN_1464ab521(void)

longlong FUN_1464ab521(void)

{
  if (DAT_14cb53b70 == 0) {
    FUN_14000fc22(&DAT_14cb53b70,&PTR_FUN_14afd2888);
  }
  return DAT_14cb53b70;
}



// FUNCTION 1464ab550 FUN_1464ab550 body=47 status=ok
// SIG undefined FUN_1464ab550(void)

longlong FUN_1464ab550(void)

{
  if (DAT_14cb53b78 == 0) {
    FUN_14000fc22(&DAT_14cb53b78,&PTR_FUN_14afd2930);
  }
  return DAT_14cb53b78;
}



// FUNCTION 1464ab580 FUN_1464ab580 body=34 status=ok
// SIG undefined FUN_1464ab580(void)

void FUN_1464ab580(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459961aa();
  FUN_14069c8d6(uVar1,&PTR_s_EndPreview_14afd2970,4);
  return;
}



// FUNCTION 1464ab5a2 FUN_1464ab5a2 body=35 status=ok
// SIG undefined FUN_1464ab5a2(void)

void FUN_1464ab5a2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afd2a90;
  return;
}



// FUNCTION 1464ab5c6 FUN_1464ab5c6 body=192 status=ok
// SIG undefined FUN_1464ab5c6(void)

void FUN_1464ab5c6(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afd3140;
  puVar1[3] = &DAT_14cb53b98;
  puVar1[4] = FUN_1459cfa80;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464ab688 FUN_1464ab688 body=40 status=ok
// SIG undefined FUN_1464ab688(void)

undefined8 FUN_1464ab688(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ab6b0 FUN_1464ab6b0 body=40 status=ok
// SIG undefined FUN_1464ab6b0(void)

undefined8 FUN_1464ab6b0(undefined8 param_1,int param_2)

{
  FUN_1403aec46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


