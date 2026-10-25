// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ca8ede FUN_142ca8ede body=229 status=ok
// SIG undefined FUN_142ca8ede(void)

void FUN_142ca8ede(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9e12e8,param_3);
  return;
}



// FUNCTION 142ca8fc4 FUN_142ca8fc4 body=99 status=ok
// SIG undefined FUN_142ca8fc4(void)

void FUN_142ca8fc4(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142ca9028 FUN_142ca9028 body=481 status=ok
// SIG undefined FUN_142ca9028(void)

void FUN_142ca9028(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471b5112(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ca920a FUN_142ca920a body=232 status=ok
// SIG undefined FUN_142ca920a(void)

void FUN_142ca920a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ca92f2 FUN_142ca92f2 body=81 status=ok
// SIG undefined FUN_142ca92f2(void)

void FUN_142ca92f2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471b51b5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ca9344 FUN_142ca9344 body=481 status=ok
// SIG undefined FUN_142ca9344(void)

void FUN_142ca9344(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471b5612(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ca9526 FUN_142ca9526 body=232 status=ok
// SIG undefined FUN_142ca9526(void)

void FUN_142ca9526(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ca960e FUN_142ca960e body=81 status=ok
// SIG undefined FUN_142ca960e(void)

void FUN_142ca960e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471b56b5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ca965f FUN_142ca965f body=6214 status=ok
// SIG undefined FUN_142ca965f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ca965f(void)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_88,&DAT_14c9dc4d4);
  if (cVar1 == '\0') {
    _DAT_14c9dc4d4 = 0;
    uRam000000014c9dc4dc = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  DAT_14c9dc4e4 = 0x40;
  DAT_14c9dc4ec = 0x10;
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc4f0,L"r.HairStrands.Voxelization",&DAT_14c760390,
                L"Enable hair voxelization for transmittance evaluation");
  atexit(FUN_142c85820);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc500,L"r.HairStrands.Voxelization.AABBScale",&DAT_14c760394,
                L"Scale the hair macro group bounding box");
  atexit(FUN_142c85865);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc510,L"r.HairStrands.Voxelization.DensityScale",&DAT_14c760398,
                L"Scale the hair density when computing voxel transmittance. Default value is 2 (arbitraty)"
               );
  atexit(FUN_142c858aa);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc520,L"r.HairStrands.Voxelization.DensityScale.AO",&DAT_14c76039c,
                L"Scale the hair density when computing voxel AO. (Default:-1, it will use the global density scale"
               );
  atexit(FUN_142c858ef);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc530,L"r.HairStrands.Voxelization.DensityScale.Shadow",&DAT_14c7603a0,
                L"Scale the hair density when computing voxel shadow. (Default:-1, it will use the global density scale"
               );
  atexit(FUN_142c85934);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc540,L"r.HairStrands.Voxelization.DensityScale.Transmittance",
                &DAT_14c7603a4,
                L"Scale the hair density when computing voxel transmittance. (Default:-1, it will use the global density scale"
               );
  atexit(FUN_142c85979);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc550,L"r.HairStrands.Voxelization.DensityScale.Environment",&DAT_14c7603a8
                ,
                L"Scale the hair density when computing voxel environment. (Default:-1, it will use the global density scale"
               );
  atexit(FUN_142c859be);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc560,L"r.HairStrands.Voxelization.DensityScale.Raytracing",&DAT_14c7603ac,
                L"Scale the hair density when computing voxel raytracing. (Default:-1, it will use the global density scale"
               );
  atexit(FUN_142c85a03);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc570,L"r.HairStrands.Voxelization.DepthBiasScale.Shadow",&DAT_14c7603b0,
                L"Set depth bias for voxel ray marching for analyticaly light. Offset the origin position towards the light for shadow computation"
               );
  atexit(FUN_142c85a48);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc580,L"r.HairStrands.Voxelization.DepthBiasScale.Light",&DAT_14c7603b4,
                L"Set depth bias for voxel ray marching for analyticaly light. Offset the origin position towards the light for transmittance computation"
               );
  atexit(FUN_142c85a8d);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc590,L"r.HairStrands.Voxelization.DepthBiasScale.Transmittance",
                &DAT_14c7603b4,
                L"Set depth bias for voxel ray marching for analyticaly light. Offset the origin position towards the light for transmittance computation"
               );
  atexit(FUN_142c85ad2);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc5a0,L"r.HairStrands.Voxelization.DepthBiasScale.Environment",
                &DAT_14c7603b8,
                L"Set depth bias for voxel ray marching for environement lights. Offset the origin position towards the light"
               );
  atexit(FUN_142c85b17);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc5b0,L"r.HairStrands.Voxelization.InjectOpaqueDepth",&DAT_14c7603bc,
                L"Inject opaque geometry depth into the voxel volume for acting as occluder.");
  atexit(FUN_142c85b5c);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc5c0,L"r.HairStrands.Voxelization.InjectOpaque.BiasCount",&DAT_14c7603c0,
                L"Bias, in number of voxel, at which opaque depth is injected.");
  atexit(FUN_142c85ba1);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc5d0,L"r.HairStrands.Voxelization.InjectOpaque.MarkCount",&DAT_14c7603c4,
                L"Number of voxel marked as opaque starting along the view direction beneath the opaque surface."
               );
  atexit(FUN_142c85be6);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc5e0,L"r.HairStrands.Voxelization.Raymarching.SteppingScale",
                &DAT_14c7603c8,
                L"Stepping scale used for raymarching the voxel structure for shadow.");
  atexit(FUN_142c85c2b);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc5f0,L"r.HairStrands.Voxelization.Raymarching.SteppingScale.Shadow",
                &DAT_14c7603cc,
                L"Stepping scale used for raymarching the voxel structure, override scale for shadow (default -1)."
               );
  atexit(FUN_142c85c70);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc600,L"r.HairStrands.Voxelization.Raymarching.SteppingScale.Transmission",
                &DAT_14c7603d0,
                L"Stepping scale used for raymarching the voxel structure, override scale for transmittance (default -1)."
               );
  atexit(FUN_142c85cb5);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc610,L"r.HairStrands.Voxelization.Raymarching.SteppingScale.Environment",
                &DAT_14c7603d4,
                L"Stepping scale used for raymarching the voxel structure, override scale for env. lighting (default -1)."
               );
  atexit(FUN_142c85cfa);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc620,L"r.HairStrands.Voxelization.Raymarching.SteppingScale.Raytracing",
                &DAT_14c7603d8,
                L"Stepping scale used for raymarching the voxel structure, override scale for raytracing (default -1)."
               );
  atexit(FUN_142c85d3f);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc630,L"r.HairStrands.Voxelization.ForceTransmittanceAndShadow",
                &DAT_14c9dc640,
                L"For transmittance and shadow to be computed with density volume. This requires voxelization is enabled."
               );
  atexit(FUN_142c85d84);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc648,L"r.HairStrands.Voxelization.Virtual",&DAT_14c7603dc,
                L"Enable the two voxel hierachy.");
  atexit(FUN_142c85dc9);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9dc658,L"r.HairStrands.Voxelization.Virtual.VoxelWorldSize",&DAT_14c7603e0,
                L"World size of a voxel in cm.");
  atexit(FUN_142c85e0e);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc668,L"r.HairStrands.Voxelization.Virtual.VoxelPageResolution",
                &DAT_14c7603e4,L"Resolution of a voxel page.");
  atexit(FUN_142c85e53);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc678,L"r.HairStrands.Voxelization.Virtual.VoxelPageCountPerDim",
                &DAT_14c7603e8,
                L"Number of voxel pages per texture dimension. The voxel page memory is allocated with a 3D texture. This value provide the resolution of this texture."
               );
  atexit(FUN_142c85e98);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc688,L"r.HairStrands.Voxelization.GPUDriven",&DAT_14c7603ec,
                L"Enable GPU driven voxelization.");
  atexit(FUN_142c85edd);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc698,L"r.HairStrands.Voxelization.GPUDriven.MinPageIndexResolution",
                &DAT_14c7603f0,
                L"Min resolution of the page index. This is used for allocating a conservative page index buffer when GPU driven allocation is enabled."
               );
  atexit(FUN_142c85f22);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc6a8,L"r.HairStrands.Voxelization.GPUDriven.MaxPageIndexResolution",
                &DAT_14c7603f4,
                L"Max resolution of the page index. This is used for allocating a conservative page index buffer when GPU driven allocation is enabled."
               );
  atexit(FUN_142c85f67);
  _DAT_14c9dc6b8 = 0x100000001000;
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc6c0,L"r.HairStrands.Voxelization.Virtual.InvalidateEmptyPageIndex",
                &DAT_14c7603f8,
                L"Invalid voxel page index which does not contain any voxelized data.");
  atexit(FUN_142c85fac);
  local_98 = 0;
  FUN_141471170(&DAT_14c9dc6d0,L"r.HairStrands.Voxelization.Virtual.ComputeRasterMaxVoxelCount",
                &DAT_14c7603fc,
                L"Max number of voxel which are rasterized for a given hair segment. This is for debug purpose only."
               );
  atexit(FUN_142c85ff1);
  local_98 = 0x20;
  FUN_1415c789c(&DAT_14c9dc6e0,L"r.RayTracing.Shadows.HairOcclusionThreshold",&DAT_14c760400,
                L"Define the number of hair that need to be crossed, before casting occlusion (default = 1)"
               );
  atexit(FUN_142c86036);
  local_98 = 0x20;
  FUN_1415c789c(&DAT_14c9dc6f0,L"r.RayTracing.Sky.HairOcclusionThreshold",&DAT_14c760404,
                L"Define the number of hair that need to be crossed, before casting occlusion (default = 1)"
               );
  atexit(FUN_142c8607b);
  local_98 = 0x20;
  FUN_141471170(&DAT_14c9dc700,L"r.HairStrands.Voxelization.Virtual.Adaptive",&DAT_14c760408,
                L"Enable adaptive voxel allocation (default = 1)");
  atexit(FUN_142c860c0);
  local_98 = 0x20;
  FUN_1415c789c(&DAT_14c9dc710,L"r.HairStrands.Voxelization.Virtual.Adaptive.CorrectionSpeed",
                &DAT_14c76040c,
                L"Define the speed at which allocation adaption runs (value in 0..1, default = 0.25). A higher number means faster adaptation, but with a risk of oscillation i.e. over and under allocation"
               );
  atexit(FUN_142c86105);
  local_98 = 0x20;
  FUN_1415c789c(&DAT_14c9dc720,L"r.HairStrands.Voxelization.Virtual.Adaptive.CorrectionThreshold",
                &DAT_14c760410,
                L"Define the allocation margin to limit over allocation (value in 0..1, default = 0.95)"
               );
  atexit(FUN_142c8614a);
  local_98 = 0x20;
  FUN_141471170(&DAT_14c9dc730,L"r.HairStrands.Voxelization.Virtual.Jitter",&DAT_14c760414,
                L"Change jittered for voxelization/traversal. 0: No jitter 1: Regular randomized jitter: 2: Constant Jitter (default = 1)"
               );
  atexit(FUN_142c8618f);
  local_80 = FUN_1414708b2;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9dc7c8,&local_88);
  local_80 = FUN_145f2af88;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dc8f0,&local_88);
  local_80 = FUN_145f45aec;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dca18,&local_88);
  local_80 = FUN_145f460e2;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dcb40,&local_88);
  local_80 = FUN_145f02e38;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dcc68,&local_88);
  local_80 = FUN_145e83356;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dcd90,&local_88);
  local_80 = FUN_145f2b57c;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dceb8,&local_88);
  local_80 = FUN_145f62ce6;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dcfe0,&local_88);
  local_80 = FUN_145f03426;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd108,&local_88);
  local_80 = FUN_145f2bb70;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd230,&local_88);
  local_80 = FUN_145f465f4;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd358,&local_88);
  local_80 = FUN_145e48542;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd480,&local_88);
  local_80 = FUN_145ec849e;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd5b0,&local_88);
  local_80 = FUN_145d1b1b2;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd6d8,&local_88);
  local_80 = FUN_1460ad3fc;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd800,&local_88);
  local_80 = FUN_1460ad66c;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dd928,&local_88);
  local_80 = FUN_146044bd6;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dda50,&local_88);
  local_80 = FUN_146044f1a;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ddb78,&local_88);
  local_80 = FUN_14604525e;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ddca0,&local_88);
  local_80 = FUN_1460ad8dc;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dddc8,&local_88);
  local_80 = FUN_145d54a22;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ddef0,&local_88);
  local_80 = FUN_1460adb4c;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9de018,&local_88);
  local_80 = FUN_1460addbc;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9de140,&local_88);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de150,L"r.HeterogeneousVolumes",&local_88,
                L"Enables the Heterogeneous volume integrator (Default = 1)");
  atexit(FUN_142c8ce58);
  local_88._0_4_ = 0;
  local_98 = 0x24;
  FUN_14078dbce(&DAT_14c9de168,L"r.HeterogeneousVolumes.Shadows",&local_88,
                L"Enables heterogeneous volume-casting shadows (default = 0)");
  atexit(FUN_142c8ce9d);
  local_88._0_4_ = 0;
  local_98 = 0x24;
  FUN_14078dbce(&DAT_14c9de180,L"r.Translucency.HeterogeneousVolumes",&local_88,
                L"Enables composting with heterogeneous volumes when rendering translucency (Default = 0)\n"
               );
  atexit(FUN_142c8cee2);
  local_88._0_4_ = 0x3f800000;
  local_98 = 0x60;
  FUN_140a6b41e(&DAT_14c9de198,L"r.HeterogeneousVolumes.DownsampleFactor",&local_88,
                L"Downsamples the rendered viewport (Default = 1.0)");
  atexit(FUN_142c8cf27);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de1b0,L"r.HeterogeneousVolumes.Composition",&local_88,
                L"Change the order of Heterogeneous Volumes composition (Default = 0)\n0: Before Translucency\n1: After Translucency\nRequires enabling Heterogeneous Volumes Project Setting: \'Composite with Translucency\'"
               );
  atexit(FUN_142c8cf6c);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de1c8,L"r.HeterogeneousVolumes.Shadows.Mode",&local_88,
                L"0: Live-Shading (Default)1: Preshaded Voxel Grid");
  atexit(FUN_142c8cfb1);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de1e0,L"r.HeterogeneousVolumes.Debug",&local_88,
                L"Creates auxillary output buffers for debugging (Default = 0)");
  atexit(FUN_142c8cff6);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de1f8,L"r.HeterogeneousVolumes.HardwareRayTracing",&local_88,
                L"Enables hardware ray tracing acceleration (Default = 0)");
  atexit(FUN_142c8d03b);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de210,L"r.HeterogeneousVolumes.IndirectLighting",&local_88,
                L"Enables indirect lighting (Default = 0)");
  atexit(FUN_142c8d080);
  local_88._0_4_ = 3;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de228,L"r.HeterogeneousVolumes.StochasticFiltering",&local_88,
                L"Configures the stochastic filtering kernel (Default = 3)\n0: Disabled\n1: Constant\n2: Linear\n3: Cubic"
               );
  atexit(FUN_142c8d0c5);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de240,L"r.HeterogeneousVolumes.Jitter",&local_88,
                L"Enables jitter when ray marching (Default = 1)");
  atexit(FUN_142c8d10a);
  local_88._0_4_ = 0x200;
  local_98 = 0x60;
  FUN_14078dbce(&DAT_14c9de258,L"r.HeterogeneousVolumes.MaxStepCount",&local_88,
                L"The maximum ray-marching step count (Default = 512)");
  atexit(FUN_142c8d14f);
  local_88._0_4_ = 0x46ea6000;
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9de270,L"r.HeterogeneousVolumes.MaxTraceDistance",&local_88,
                L"The maximum trace view-distance for direct volume rendering (Default = 30000)");
  atexit(FUN_142c8d194);
  local_88._0_4_ = 0x46ea6000;
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9de288,L"r.HeterogeneousVolumes.MaxShadowTraceDistance",&local_88,
                L"The maximum shadow-trace distance (Default = 30000)");
  atexit(FUN_142c8d1d9);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de2a0,L"r.HeterogeneousVolumes.Preshading",&local_88,
                L"Evaluates the material into a canonical preshaded volume before rendering the result (Default = 0)"
               );
  atexit(FUN_142c8d21e);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de2b8,L"r.HeterogeneousVolumes.Preshading.MipLevel",&local_88,
                L"Statically determines the MIP-level when evaluating preshaded volume data (Default = 0)"
               );
  atexit(FUN_142c8d263);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de2d0,L"r.HeterogeneousVolumes.VolumeResolution.X",&local_88,
                L"Overrides the preshading and lighting volume resolution in X (Default = 0)0: Disabled, uses per-volume attribute\n>0: Overrides resolution in X\n"
               );
  atexit(FUN_142c8d2a8);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de2e8,L"r.HeterogeneousVolumes.VolumeResolution.Y",&local_88,
                L"Overrides the preshading and lighting volume resolution in X (Default = 0)0: Disabled, uses per-volume attribute\n>0: Overrides resolution in Y\n"
               );
  atexit(FUN_142c8d2ed);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de300,L"r.HeterogeneousVolumes.VolumeResolution.Z",&local_88,
                L"Overrides the preshading and lighting volume resolution in X (Default = 0)0: Disabled, uses per-volume attribute\n>0: Overrides resolution in Z\n"
               );
  atexit(FUN_142c8d332);
  local_88._0_4_ = 0xbf800000;
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9de318,L"r.HeterogeneousVolumes.ShadowStepSize",&local_88,
                L"The ray-marching step-size override for shadow rays (Default = -1.0, disabled)");
  atexit(FUN_142c8d377);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de330,L"r.HeterogeneousVolumes.SparseVoxel",&local_88,
                L"Uses sparse-voxel rendering algorithms (Default = 0)");
  atexit(FUN_142c8d3bc);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de348,L"r.HeterogeneousVolumes.SparseVoxel.GenerationMipBias",&local_88,
                L"Determines MIP bias for sparse voxel generation (Default = 0)");
  atexit(FUN_142c8d401);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de360,L"r.HeterogeneousVolumes.SparseVoxel.PerTileCulling",&local_88,
                L"Enables sparse-voxel culling when using tiled rendering (Default = 1)");
  atexit(FUN_142c8d446);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de378,L"r.HeterogeneousVolumes.SparseVoxel.Refinement",&local_88,
                L"Uses hierarchical refinement to coalesce neighboring sparse-voxels (Default = 0)")
  ;
  atexit(FUN_142c8d48b);
  local_88._0_4_ = 0xbf800000;
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9de390,L"r.HeterogeneousVolumes.StepSize",&local_88,
                L"The ray-marching step-size override (Default = -1.0, disabled)");
  atexit(FUN_142c8d4d0);
  local_88._0_4_ = 2;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de3a8,L"r.HeterogeneousVolumes.LightingCache",&local_88,
                L"Enables an optimized pre-pass, caching certain volumetric rendering lighting quantities (Default = 2)\n0: Disabled\n1: Cache transmittance (deprecated)\n2: Cache in-scattering\n"
               );
  atexit(FUN_142c8d515);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de3c0,L"r.HeterogeneousVolumes.LightingCache.UseAVSM",&local_88,
                L"Enables use of AVSMs when evaluating self-shadowing (Default = 1)");
  atexit(FUN_142c8d55a);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de3d8,L"r.HeterogeneousVolumes.LightingCache.DownsampleFactor",&local_88,
                L"Overrides the lighting-cache downsample factor, relative to the preshading volume resolution (Default = 0)\n0: Disabled, uses per-volume attribute\n>0: Overrides the lighting-cache downsample factor"
               );
  atexit(FUN_142c8d59f);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de3f0,L"r.HeterogeneousVolumes.DepthSort",&local_88,
                L"Iterates over volumes in depth-sorted order, based on its centroid (Default = 1)")
  ;
  atexit(FUN_142c8d5e4);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de408,L"r.HeterogeneousVolumes.HeightFog",&local_88,
                L"Applies height fog to Heterogeneous Volumes (Default = 1)");
  atexit(FUN_142c8d629);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de420,L"r.HeterogeneousVolumes.VolumetricFog",&local_88,
                L"Applies volumetric fog to Heterogeneous Volumes (Default = 1)");
  atexit(FUN_142c8d66e);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de438,L"r.HeterogeneousVolumes.ApplyFogInscattering",&local_88,
                L"Determines the method for applying fog in-scattering (default = 1)\n0: Off\n1: Reference (evaluated per ray-march step)\n2: Stochastic (evaluated once per ray)\n"
               );
  atexit(FUN_142c8d6b3);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de450,L"r.HeterogeneousVolumes.UseAnalyticDerivatives",&local_88,
                L"Enables support for analytic derivatives (Default = 0)");
  atexit(FUN_142c8d6f8);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de468,L"r.HeterogeneousVolumes.Velocity",&local_88,
                L"Writes Heterogeneous Volumes velocity to the feature buffer (Default = 0)");
  atexit(FUN_142c8d73d);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de480,L"r.HeterogeneousVolumes.CLOD",&local_88,
                L"Uses Continuous Level-of-Detail to accelerate rendering (Default = 1)");
  atexit(FUN_142c8d782);
  local_88 = (code *)((ulonglong)local_88._4_4_ << 0x20);
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9de498,L"r.HeterogeneousVolumes.CLOD.Bias",&local_88,
                L"Biases evaluation result when computing Continuous Level-of-Detail (Default = 0.0)\n> 0: Coarser\n< 0: Sharper\n"
               );
  atexit(FUN_142c8d7c7);
  local_80 = FUN_145e838c6;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9de5c8,&local_88);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de5d8,L"r.HeterogeneousVolumes.AmbientOcclusion",&local_88,
                L"Enables ambient occlusion computation (Default = 0)");
  atexit(FUN_142c97425);
  local_88._0_4_ = 4;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de5f0,L"r.HeterogeneousVolumes.AmbientOcclusion.DownsampleFactor",&local_88
                ,
                L"Performs downsampling when determining the ambient occlusion voxel resolution (Default = 4)"
               );
  atexit(FUN_142c9746a);
  local_88._0_4_ = 4;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de608,L"r.HeterogeneousVolumes.AmbientOcclusion.RayCount.X",&local_88,
                L"With the Y-counterpart, determines the number of AO rays when calculating ambient occlusion (Default = 4)"
               );
  atexit(FUN_142c974af);
  local_88._0_4_ = 4;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de620,L"r.HeterogeneousVolumes.AmbientOcclusion.RayCount.Y",&local_88,
                L" With the X-counterpart, determines the number of AO rays when calculating ambient occlusion (Default = 4)"
               );
  atexit(FUN_142c974f4);
  local_88._0_4_ = 1000;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de638,L"r.HeterogeneousVolumes.AmbientOcclusion.MaxTraceDistance",&local_88
                ,
                L"Determines the number of rays when calculating ambient occlusion (Default = 1000.0)"
               );
  atexit(FUN_142c97539);
  local_88 = (code *)CONCAT44(local_88._4_4_,0x40);
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9de650,L"r.HeterogeneousVolumes.AmbientOcclusion.MaxStepCount",&local_88,
                L"Determines the maximum steps when ray marching ambient occlusion (Default = 64)");
  atexit(FUN_142c9757e);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_142ca4cfe;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9de6d0,6,&local_88);
  local_80 = FUN_14601a390;
  local_88 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9de7f0,&local_88);
  local_80 = FUN_145e52b44;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9de918,&local_88);
  local_80 = FUN_146132f9e;
  local_88 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9dea40,&local_88);
  local_80 = FUN_145e530ae;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9deb68,&local_88);
  local_80 = FUN_145ccca54;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dec90,&local_88);
  _DAT_14ca98658 = 0;
  DAT_14ca98791 = DAT_14ca98791 | 2;
  _DAT_14ca98734 = 0x1c;
  local_80 = FUN_145f90c70;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dedb8,&local_88);
  local_80 = FUN_14609009c;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9deee0,&local_88);
  local_80 = FUN_145d45fc4;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9df008,&local_88);
  local_80 = FUN_145f46bea;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9df130,&local_88);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9df140,L"r.HeterogeneousVolumes.LightingCache.BoundsCulling",&local_88,
                L"Enables bounds culling when populating the lighting cache (Default = 1)");
  atexit(FUN_142c9b715);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9df158,L"r.HeterogeneousVolumes.LiveShading.ScreenTileClassification",
                &local_88,
                L"Enables screen tile classification for increased occupancy (Default = 0)");
  atexit(FUN_142c9b75a);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9df170,L"r.HeterogeneousVolumes.SupportOverlappingVolumes",&local_88,
                L"Enables support for overlapping volumes (Default = 0)");
  atexit(FUN_142c9b79f);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9df188,L"r.HeterogeneousVolumes.UseExistenceMask",&local_88,
                L"Creates an evaluation mask which culls operations to the areas with non-zero extinction (Default = 1)"
               );
  atexit(FUN_142c9b7e4);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9df1a0,L"r.HeterogeneousVolumes.Shadows.UseCameraSceneDepth",&local_88,
                L"Culls Camera AVSM by SceneDepth (Default = 0)");
  atexit(FUN_142c9b829);
  local_88 = (code *)CONCAT44(local_88._4_4_,0x3f800000);
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9df1b8,L"r.HeterogeneousVolumes.Shadows.NearClippingDistance",&local_88,
                L"Near clipping plane distance for shadow projection (Default = 1.0)");
  atexit(FUN_142c9b86e);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_142ca7a46;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9df238,6,&local_88);
  local_80 = FUN_145dae624;
  local_88 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9df358,&local_88);
  local_80 = FUN_14613327a;
  local_88 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9df480,&local_88);
  local_80 = FUN_145f00f00;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9df518,&local_88);
  local_80 = FUN_145f2c164;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9df640,&local_88);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_142ca7a60;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9df6b8,6,&local_88);
  local_80 = FUN_1461232c8;
  local_88 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9df7d8,&local_88);
  local_80 = FUN_14608938a;
  local_88 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9df900,&local_88);
  local_80 = FUN_145f470fc;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dfa28,&local_88);
  local_80 = FUN_145f68e5e;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dfb50,&local_88);
  local_80 = FUN_145f71be0;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dfc78,&local_88);
  local_80 = FUN_145e53618;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dfda0,&local_88);
  local_80 = FUN_145e83e36;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9dfec8,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142caaec0 FUN_142caaec0 body=892 status=ok
// SIG undefined FUN_142caaec0(void)

void FUN_142caaec0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_b8 [32];
  int *local_98;
  longlong local_88;
  uint local_7c;
  longlong *local_78;
  longlong local_70;
  undefined1 local_65;
  int local_64;
  int local_60;
  uint local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_88 = CONCAT44(local_88._4_4_,param_4);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = *(undefined8 *)(*param_5 + 0x84);
  uVar3 = *(ushort *)(*param_5 + 0x8c);
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar11 + 8;
  local_70 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x50);
    puVar11 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar11 = &PTR_FUN_14a240800;
  puVar11[6] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  iVar10 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
  local_78 = plVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar10);
  }
  plVar1 = local_78;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar10 * 8) = puVar11;
  iVar13 = (int)uVar4;
  *(int *)(puVar11 + 4) = iVar13;
  iVar10 = (int)((ulonglong)uVar4 >> 0x20);
  *(int *)((longlong)puVar11 + 0x24) = iVar10;
  local_7c = (uint)uVar3;
  *(uint *)(puVar11 + 5) = local_7c;
  if ((*(char *)(param_3 + 0x92) == '\x04') || (*(char *)(param_3 + 0x92) == '\x01')) {
    uVar8 = *(undefined2 *)(param_3 + 0x8e);
  }
  else {
    uVar8 = 0;
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar12 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_78,0x48);
    puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar12 + 8;
  }
  lVar7 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar12[1] = *(undefined8 *)(param_3 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 1;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *puVar12 = &PTR_FUN_14a203858;
  *(undefined1 *)(puVar12 + 5) = 0;
  *(char *)((longlong)puVar12 + 0x29) = (char)local_88;
  *(undefined4 *)((longlong)puVar12 + 0x2a) = 1;
  *(undefined2 *)((longlong)puVar12 + 0x2e) = uVar8;
  *(undefined1 *)(puVar12 + 6) = 0;
  *(undefined1 *)((longlong)puVar12 + 0x32) = 0;
  puVar12[7] = param_3;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(lVar7,iVar14);
  }
  plVar1 = local_78;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar11[2] = puVar12;
  lVar5 = *param_5;
  uVar2 = *(undefined1 *)(lVar5 + 0x94);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar12 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    local_88 = lVar7;
    FUN_140023dd8(local_78,0x50);
    puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar12 + 9;
    lVar7 = local_88;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar12[1] = *(undefined8 *)(lVar5 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar12 + 6) = uVar2;
  *(undefined1 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x35) = 0;
  puVar12[8] = lVar5;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(lVar7,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar11[6] = puVar12;
  iVar14 = iVar13 + 6;
  if (-1 < iVar13 + 3) {
    iVar14 = iVar13 + 3;
  }
  iVar13 = iVar10 + 6;
  if (-1 < iVar10 + 3) {
    iVar13 = iVar10 + 3;
  }
  uVar9 = local_7c + 3;
  FUN_1471b5a50(*(undefined8 *)(local_70 + 0x13818),local_58);
  local_98 = &local_64;
  local_64 = iVar14 >> 2;
  local_60 = iVar13 >> 2;
  local_5c = uVar9 >> 2;
  FUN_1471b5abd(param_1,&local_65,local_58,puVar11 + 2);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cab26d FUN_142cab26d body=7105 status=ok
// SIG undefined FUN_142cab26d(void)

void FUN_142cab26d(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  int param_5,ulonglong *param_6,ulonglong *param_7)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined2 uVar12;
  ulonglong uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_198 [32];
  undefined1 **local_178;
  int *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  ulonglong local_148;
  ulonglong local_140;
  uint local_134;
  longlong local_130;
  ulonglong local_128;
  uint local_11c;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 *local_108;
  int local_100;
  int local_fc;
  uint local_f8;
  undefined1 local_f1;
  undefined1 local_f0 [16];
  int local_e0;
  int local_dc;
  uint local_d8;
  undefined1 *local_d4;
  undefined4 local_cc;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  longlong local_a8 [4];
  ulonglong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar4 = *(ushort *)(param_3 + 0x8c);
  local_140 = (ulonglong)*(uint *)(param_3 + 0x84);
  local_148 = (ulonglong)*(uint *)(param_3 + 0x88);
  local_b8 = (longlong *)0x0;
  uVar5 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar5 = DAT_14ca84e48;
  }
  local_c8 = uVar5 + (uVar5 == 0);
  iStack_c4 = 1;
  uStack_c0 = 0x4189;
  plVar10 = (longlong *)(param_1 + 0x70);
  uVar17 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar8 = uVar17 + 0x150;
  local_168 = plVar10;
  local_158 = param_3;
  local_130 = param_2;
  local_108 = param_4;
  if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
    FUN_140023dd8(plVar10,0x160);
    uVar17 = *plVar10 + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar17 + 0x150;
  }
  lVar1 = param_1 + 0x188;
  *(ulonglong *)(param_1 + 0x70) = uVar8;
  FUN_1456bd266(uVar17,L"HeterogeneousVolumes.NumVoxelsBuffer",&local_c8,0);
  iVar14 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar14 + 1U) {
    FUN_144737178(lVar1,iVar14);
  }
  plVar10 = local_168;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_6 = uVar17;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar18 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_168,0x30);
    puVar18 = (undefined8 *)(*plVar10 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar18 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  *puVar18 = &PTR_FUN_14a240828;
  puVar18[2] = 0;
  local_150 = (longlong *)(param_1 + 0x98);
  iVar14 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8(local_150,iVar14);
  }
  plVar10 = local_168;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 8) = puVar18;
  uVar8 = *param_6;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_168,0x48);
    puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
  }
  local_160 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar11[1] = *(undefined8 *)(uVar8 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 2;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar11 + 5) = 0;
  *puVar11 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar11 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
  puVar11[7] = uVar8;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(local_160,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar18[2] = puVar11;
  FUN_1471b5f78(*(undefined8 *)(local_130 + 0x13818),&local_c8);
  local_178 = &local_d4;
  local_d4 = &DAT_100000001;
  local_cc = 1;
  FUN_1471b5fe5(param_1,local_88 + 2,&local_c8,puVar18 + 2);
  plVar10 = local_168;
  uVar5 = (int)local_148 * (uint)uVar4 * (int)local_140;
  uVar16 = 8;
  if (DAT_14ca84e48 < 8) {
    uVar16 = DAT_14ca84e48;
  }
  local_c8 = uVar16 + (uVar16 == 0);
  uStack_c0 = 0x10109;
  if (DAT_14ca84e48 <= uVar5) {
    uVar5 = DAT_14ca84e48;
  }
  local_b8 = (longlong *)0x0;
  iStack_c4 = uVar5 + (uVar5 == 0);
  uVar17 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar8 = uVar17 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
    FUN_140023dd8(local_168,0x160);
    uVar17 = *plVar10 + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar8;
  FUN_1456bd266(uVar17,L"HeterogeneousVolumes.VoxelBuffer",&local_c8,0);
  iVar14 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar14 + 1U) {
    FUN_144737178(lVar1,iVar14);
  }
  plVar10 = local_168;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_7 = uVar17;
  if (*(int *)(DAT_14c9de388 + 4) == 0) {
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar18 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x50);
      puVar18 = (undefined8 *)(*plVar10 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar18 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    *puVar18 = &PTR_FUN_14a240888;
    puVar18[2] = 0;
    puVar18[3] = 0;
    puVar18[6] = 0;
    puVar18[7] = 0;
    iVar14 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
      FUN_1448cfae8(local_150,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*local_150 + (longlong)iVar14 * 8) = puVar18;
    if ((*(char *)(local_158 + 0x92) == '\x04') || (*(char *)(local_158 + 0x92) == '\x01')) {
      uVar12 = *(undefined2 *)(local_158 + 0x8e);
    }
    else {
      uVar12 = 0;
    }
    uVar2 = *(undefined1 *)(local_158 + 0x90);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(local_158 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 1;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *puVar11 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar11 + 5) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar12;
    *(undefined1 *)(puVar11 + 6) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = local_158;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[2] = puVar11;
    puVar18[3] = DAT_14c9c0d80;
    *(int *)(puVar18 + 4) = (int)local_140;
    *(int *)((longlong)puVar18 + 0x24) = (int)local_148;
    *(uint *)(puVar18 + 5) = (uint)uVar4;
    *(int *)((longlong)puVar18 + 0x2c) = param_5;
    uVar8 = *param_6;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(uVar8 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 0;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar11 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = uVar8;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[6] = puVar11;
    uVar8 = *param_7;
    cVar3 = *(char *)(uVar8 + 0x68);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(uVar8 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 0;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar11 + 6) = cVar3 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar11 + 0x31) = 0;
    puVar11[7] = uVar8;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[7] = puVar11;
    iVar6 = (int)local_140 + 3;
    iVar14 = (int)local_140 + 6;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    iVar7 = (int)local_148 + 3;
    iVar6 = (int)local_148 + 6;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    FUN_1471b635c(*(undefined8 *)(local_130 + 0x13818),&local_c8);
    local_178 = (undefined1 **)&local_100;
    local_100 = iVar14 >> 2;
    local_fc = iVar6 >> 2;
    local_f8 = uVar4 + 3 >> 2;
    FUN_1471b63c9(param_1,local_88 + 2,&local_c8,puVar18 + 2);
  }
  else {
    uVar5 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar5 = DAT_14ca84e48;
    }
    local_b8 = (longlong *)0x0;
    local_c8 = uVar5 + (uVar5 == 0);
    iStack_c4 = 1;
    uStack_c0 = 0x4189;
    uVar17 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar17 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
      FUN_140023dd8(local_168,0x160);
      uVar17 = *plVar10 + 0xfU & 0xfffffffffffffff0;
      uVar8 = uVar17 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar8;
    FUN_1456bd266(uVar17,L"HeterogeneousVolume.NumVoxelsToRefineBuffer1",&local_c8,0);
    iVar14 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar14 + 1U) {
      FUN_144737178(lVar1,iVar14);
    }
    plVar10 = local_168;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = uVar17;
    *(int *)(uVar17 + 0x7c) = *(int *)(param_1 + 400) + -1;
    uVar5 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar5 = DAT_14ca84e48;
    }
    local_b8 = (longlong *)0x0;
    local_c8 = uVar5 + (uVar5 == 0);
    iStack_c4 = 1;
    uStack_c0 = 0x4189;
    uVar19 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar19 + 0x150;
    local_88[2] = uVar17;
    if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
      FUN_140023dd8(local_168,0x160);
      uVar19 = *plVar10 + 0xfU & 0xfffffffffffffff0;
      uVar8 = uVar19 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar8;
    FUN_1456bd266(uVar19,L"HeterogeneousVolume.NumVoxelsToRefineBuffer2",&local_c8,0);
    iVar14 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar14 + 1U) {
      FUN_144737178(lVar1,iVar14);
    }
    plVar10 = local_168;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = uVar19;
    *(int *)(uVar19 + 0x7c) = *(int *)(param_1 + 400) + -1;
    uVar8 = *param_7;
    uStack_c0 = *(undefined4 *)(uVar8 + 0x68);
    uStack_bc = *(undefined4 *)(uVar8 + 0x6c);
    local_b8 = *(longlong **)(uVar8 + 0x70);
    uVar5 = *(uint *)(uVar8 + 0x60);
    if (DAT_14ca84e48 <= *(uint *)(uVar8 + 0x60)) {
      uVar5 = DAT_14ca84e48;
    }
    local_c8 = uVar5 + (uVar5 == 0);
    uVar5 = DAT_14ca84e48;
    if (*(uint *)(uVar8 + 100) < DAT_14ca84e48) {
      uVar5 = *(uint *)(uVar8 + 100);
    }
    iStack_c4 = uVar5 + (uVar5 == 0);
    uVar17 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar17 + 0x150;
    local_88[3] = uVar19;
    if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
      FUN_140023dd8(local_168,0x160);
      uVar17 = *plVar10 + 0xfU & 0xfffffffffffffff0;
      uVar8 = uVar17 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar8;
    FUN_1456bd266(uVar17,L"HeterogeneousVolume.VoxelsToRefineBuffer1",&local_c8,0);
    iVar14 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar14 + 1U) {
      FUN_144737178(lVar1,iVar14);
    }
    plVar10 = local_168;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = uVar17;
    *(int *)(uVar17 + 0x7c) = *(int *)(param_1 + 400) + -1;
    uVar8 = *param_7;
    uStack_c0 = *(undefined4 *)(uVar8 + 0x68);
    uStack_bc = *(undefined4 *)(uVar8 + 0x6c);
    local_b8 = *(longlong **)(uVar8 + 0x70);
    uVar5 = *(uint *)(uVar8 + 0x60);
    if (DAT_14ca84e48 <= *(uint *)(uVar8 + 0x60)) {
      uVar5 = DAT_14ca84e48;
    }
    local_c8 = uVar5 + (uVar5 == 0);
    uVar5 = DAT_14ca84e48;
    if (*(uint *)(uVar8 + 100) < DAT_14ca84e48) {
      uVar5 = *(uint *)(uVar8 + 100);
    }
    iStack_c4 = uVar5 + (uVar5 == 0);
    uVar13 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar13 + 0x150;
    local_88[0] = uVar17;
    if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
      FUN_140023dd8(local_168,0x160);
      uVar13 = *plVar10 + 0xfU & 0xfffffffffffffff0;
      uVar8 = uVar13 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar8;
    FUN_1456bd266(uVar13,L"HeterogeneousVolume.VoxelsToRefineBuffer2",&local_c8,0);
    iVar14 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar14 + 1U) {
      FUN_144737178(lVar1,iVar14);
    }
    plVar10 = local_168;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = uVar13;
    *(int *)(uVar13 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar18 + 8;
    local_88[1] = uVar13;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar18 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar18 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar18[1] = *(undefined8 *)(uVar19 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 2;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar18 + 5) = 0;
    *puVar18 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar18 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
    puVar18[7] = uVar19;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar18,0,2);
    plVar10 = local_168;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar18 + 10;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x60);
      puVar18 = (undefined8 *)(*plVar10 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar18 + 10;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    *puVar18 = &PTR_FUN_14a240848;
    puVar18[2] = 0;
    puVar18[3] = 0;
    puVar18[6] = 0;
    puVar18[7] = 0;
    puVar18[8] = 0;
    puVar18[9] = 0;
    iVar14 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
      FUN_1448cfae8(local_150,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*local_150 + (longlong)iVar14 * 8) = puVar18;
    if ((*(char *)(local_158 + 0x92) == '\x04') || (*(char *)(local_158 + 0x92) == '\x01')) {
      uVar12 = *(undefined2 *)(local_158 + 0x8e);
    }
    else {
      uVar12 = 0;
    }
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(local_158 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 1;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *puVar11 = &PTR_FUN_14a203858;
    *(undefined4 *)(puVar11 + 5) = 0x10000;
    *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar12;
    *(undefined1 *)(puVar11 + 6) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = local_158;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[2] = puVar11;
    *(int *)(puVar18 + 4) = (int)local_140;
    *(int *)((longlong)puVar18 + 0x24) = (int)local_148;
    *(uint *)(puVar18 + 5) = (uint)uVar4;
    *(int *)((longlong)puVar18 + 0x2c) = param_5;
    uVar8 = *param_6;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    local_118 = (ulonglong)uVar4;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(uVar8 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 0;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar11 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = uVar8;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[6] = puVar11;
    uVar8 = *param_7;
    cVar3 = *(char *)(uVar8 + 0x68);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    uVar17 = local_118;
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(uVar8 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 0;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar11 + 6) = cVar3 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar11 + 0x31) = 0;
    puVar11[7] = uVar8;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[7] = puVar11;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(uVar19 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 0;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar11 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = uVar19;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar10 = local_168;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[8] = puVar11;
    cVar3 = *(char *)(uVar13 + 0x68);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_168,0x48);
      puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(uVar13 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 0;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar11 + 6) = cVar3 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar11 + 0x31) = 0;
    puVar11[7] = uVar13;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar18[9] = puVar11;
    iVar6 = (int)local_140 + 3;
    iVar14 = (int)local_140 + 6;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    iVar7 = (int)local_148 + 3;
    iVar6 = (int)local_148 + 6;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    FUN_1471b6098(*(undefined8 *)(local_130 + 0x13818),&local_c8);
    local_178 = (undefined1 **)&local_e0;
    local_e0 = iVar14 >> 2;
    local_dc = iVar6 >> 2;
    local_d8 = (int)uVar17 + 3U >> 2;
    FUN_1471b6105(param_1,local_f0,&local_c8,puVar18 + 2);
    if (1 < *(byte *)(local_158 + 0x90)) {
      uVar16 = 1;
      uVar5 = 1;
      uVar8 = 0;
      do {
        plVar10 = local_168;
        uVar17 = local_88[uVar8 + 2];
        puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar18 + 8;
        local_134 = uVar5;
        local_110 = uVar8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x48);
          puVar18 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar18 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar18[1] = *(undefined8 *)(uVar17 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 2;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar18 + 5) = 0;
        *puVar18 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar18 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
        puVar18[7] = uVar17;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(local_160,iVar14);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        FUN_1405bfba3(param_1,puVar18,0,2);
        plVar10 = local_168;
        puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar9 = puVar18 + 0x10;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x90);
          puVar18 = (undefined8 *)(*plVar10 + 0xfU & 0xfffffffffffffff0);
          puVar9 = puVar18 + 0x10;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        *puVar18 = &PTR_FUN_14a240868;
        puVar18[2] = 0;
        puVar18[3] = 0;
        puVar18[8] = 0;
        puVar18[9] = 0;
        puVar18[10] = 0;
        puVar18[0xb] = 0;
        puVar18[0xc] = 0;
        puVar18[0xd] = 0;
        puVar18[0xe] = 0;
        *(undefined4 *)(puVar18 + 0xf) = 4;
        iVar14 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
          FUN_1448cfae8(local_150,iVar14);
        }
        plVar10 = local_168;
        *(undefined8 **)(*local_150 + (longlong)iVar14 * 8) = puVar18;
        if ((*(char *)(local_158 + 0x92) == '\x04') || (*(char *)(local_158 + 0x92) == '\x01')) {
          uVar12 = *(undefined2 *)(local_158 + 0x8e);
        }
        else {
          uVar12 = 0;
        }
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 8;
        local_11c = (uint)uVar8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x48);
          puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar11[1] = *(undefined8 *)(local_158 + 8);
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 1;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
        *puVar11 = &PTR_FUN_14a203858;
        *(undefined1 *)(puVar11 + 5) = 0;
        bVar15 = (byte)uVar16;
        *(byte *)((longlong)puVar11 + 0x29) = bVar15;
        *(undefined4 *)((longlong)puVar11 + 0x2a) = 1;
        *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar12;
        *(undefined1 *)(puVar11 + 6) = 0;
        *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
        puVar11[7] = local_158;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(local_160,iVar14);
        }
        plVar10 = local_168;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar18[2] = puVar11;
        puVar18[4] = *local_108;
        *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(local_108 + 1);
        *(int *)(puVar18 + 6) = (int)local_140 >> (bVar15 & 0x1f);
        *(int *)((longlong)puVar18 + 0x34) = (int)local_148 >> (bVar15 & 0x1f);
        *(uint *)(puVar18 + 7) = (uint)local_118 >> (bVar15 & 0x1f);
        *(uint *)((longlong)puVar18 + 0x3c) = param_5 + uVar16;
        uVar19 = (ulonglong)local_134;
        uVar8 = local_88[uVar19 + 2];
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x50);
          puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar11[1] = *(undefined8 *)(uVar8 + 8);
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 3;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
        *puVar11 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar11 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
        puVar11[7] = 0;
        puVar11[8] = uVar8;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          local_128 = uVar8;
          FUN_1447568fc(local_160,iVar14);
          uVar8 = local_128;
        }
        plVar10 = local_168;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar18[8] = puVar11;
        uVar19 = local_88[uVar19];
        cVar3 = *(char *)(uVar19 + 0x68);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          local_128 = uVar8;
          FUN_140023dd8(local_168,0x50);
          puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 9;
          uVar8 = local_128;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar11[1] = *(undefined8 *)(uVar19 + 8);
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 3;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
        *puVar11 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar11 + 5) = cVar3 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
        puVar11[7] = 0;
        puVar11[8] = uVar19;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(local_160,iVar14);
        }
        plVar10 = local_168;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar18[9] = puVar11;
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x48);
          puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar11[1] = *(undefined8 *)(uVar17 + 8);
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 2;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar11 + 5) = 0;
        *puVar11 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar11 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
        puVar11[7] = uVar17;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(local_160,iVar14);
        }
        plVar10 = local_168;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar18[10] = puVar11;
        uVar17 = local_88[local_110];
        cVar3 = *(char *)(uVar17 + 0x68);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x48);
          puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar11[1] = *(undefined8 *)(uVar17 + 8);
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 2;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar11 + 5) = 0;
        *puVar11 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar11 + 6) = cVar3 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar11 + 0x31) = 0;
        puVar11[7] = uVar17;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(local_160,iVar14);
        }
        plVar10 = local_168;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar18[0xb] = puVar11;
        uVar17 = *param_6;
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x48);
          puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar11[1] = *(undefined8 *)(uVar17 + 8);
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 2;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar11 + 5) = 0;
        *puVar11 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar11 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
        puVar11[7] = uVar17;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(local_160,iVar14);
        }
        plVar10 = local_168;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar18[0xc] = puVar11;
        uVar17 = *param_7;
        cVar3 = *(char *)(uVar17 + 0x68);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          FUN_140023dd8(local_168,0x48);
          puVar11 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar11 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        puVar11[1] = *(undefined8 *)(uVar17 + 8);
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 2;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar11 + 5) = 0;
        *puVar11 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar11 + 6) = cVar3 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar11 + 0x31) = 0;
        puVar11[7] = uVar17;
        iVar14 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(local_160,iVar14);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar18[0xd] = puVar11;
        puVar18[0xe] = uVar8;
        *(undefined4 *)(puVar18 + 0xf) = 4;
        FUN_1471b61b8(*(undefined8 *)(local_130 + 0x13818),local_f0);
        local_c8 = 0;
        iStack_c4 = 0;
        local_b8 = (longlong *)0x0;
        local_178 = (undefined1 **)puVar18[0xe];
        local_170 = &local_c8;
        FUN_1471b6225(param_1,&local_f1,local_f0,puVar18 + 2);
        uVar5 = local_11c;
        if (CONCAT44(iStack_c4,local_c8) != 0) {
          plVar10 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar10 = local_a8;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        uVar16 = uVar16 + 1;
        uVar8 = (ulonglong)local_134;
      } while (uVar16 < *(byte *)(local_158 + 0x90));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cace2f FUN_142cace2f body=69 status=ok
// SIG undefined FUN_142cace2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cace2f(void)

{
  _DAT_14c9e2528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cace71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2530,1);
  return;
}



// FUNCTION 142cace74 FUN_142cace74 body=69 status=ok
// SIG undefined FUN_142cace74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cace74(void)

{
  _DAT_14c9e2540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142caceb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2548,1);
  return;
}



// FUNCTION 142caceb9 FUN_142caceb9 body=69 status=ok
// SIG undefined FUN_142caceb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142caceb9(void)

{
  _DAT_14c9e2558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cacefb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2560,1);
  return;
}



// FUNCTION 142cacefe FUN_142cacefe body=69 status=ok
// SIG undefined FUN_142cacefe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cacefe(void)

{
  _DAT_14c9e2570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cacf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2578,1);
  return;
}



// FUNCTION 142cacf43 FUN_142cacf43 body=69 status=ok
// SIG undefined FUN_142cacf43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cacf43(void)

{
  _DAT_14c9e2588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cacf85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2590,1);
  return;
}



// FUNCTION 142cacf88 FUN_142cacf88 body=69 status=ok
// SIG undefined FUN_142cacf88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cacf88(void)

{
  _DAT_14c9e25a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cacfca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e25a8,1);
  return;
}



// FUNCTION 142cacfcd FUN_142cacfcd body=69 status=ok
// SIG undefined FUN_142cacfcd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cacfcd(void)

{
  _DAT_14c9e25b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e25c0,1);
  return;
}



// FUNCTION 142cad012 FUN_142cad012 body=69 status=ok
// SIG undefined FUN_142cad012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad012(void)

{
  _DAT_14c9e25d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e25d8,1);
  return;
}



// FUNCTION 142cad057 FUN_142cad057 body=69 status=ok
// SIG undefined FUN_142cad057(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad057(void)

{
  _DAT_14c9e25e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e25f0,1);
  return;
}



// FUNCTION 142cad09c FUN_142cad09c body=69 status=ok
// SIG undefined FUN_142cad09c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad09c(void)

{
  _DAT_14c9e2600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2608,1);
  return;
}



// FUNCTION 142cad0e1 FUN_142cad0e1 body=69 status=ok
// SIG undefined FUN_142cad0e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad0e1(void)

{
  _DAT_14c9e2618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2620,1);
  return;
}



// FUNCTION 142cad126 FUN_142cad126 body=69 status=ok
// SIG undefined FUN_142cad126(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad126(void)

{
  _DAT_14c9e2630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2638,1);
  return;
}



// FUNCTION 142cad16b FUN_142cad16b body=69 status=ok
// SIG undefined FUN_142cad16b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad16b(void)

{
  _DAT_14c9e2648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad1ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2650,1);
  return;
}



// FUNCTION 142cad1b0 FUN_142cad1b0 body=69 status=ok
// SIG undefined FUN_142cad1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad1b0(void)

{
  _DAT_14c9e2660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad1f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2668,1);
  return;
}



// FUNCTION 142cad1f5 FUN_142cad1f5 body=69 status=ok
// SIG undefined FUN_142cad1f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad1f5(void)

{
  _DAT_14c9e2678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2680,1);
  return;
}



// FUNCTION 142cad23a FUN_142cad23a body=69 status=ok
// SIG undefined FUN_142cad23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad23a(void)

{
  _DAT_14c9e2690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2698,1);
  return;
}



// FUNCTION 142cad27f FUN_142cad27f body=69 status=ok
// SIG undefined FUN_142cad27f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad27f(void)

{
  _DAT_14c9e26a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e26b0,1);
  return;
}



// FUNCTION 142cad2c4 FUN_142cad2c4 body=69 status=ok
// SIG undefined FUN_142cad2c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad2c4(void)

{
  _DAT_14c9e26c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e26c8,1);
  return;
}



// FUNCTION 142cad309 FUN_142cad309 body=69 status=ok
// SIG undefined FUN_142cad309(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad309(void)

{
  _DAT_14c9e26d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad34b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e26e0,1);
  return;
}



// FUNCTION 142cad34e FUN_142cad34e body=69 status=ok
// SIG undefined FUN_142cad34e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad34e(void)

{
  _DAT_14c9e26f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e26f8,1);
  return;
}



// FUNCTION 142cad393 FUN_142cad393 body=69 status=ok
// SIG undefined FUN_142cad393(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad393(void)

{
  _DAT_14c9e2708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad3d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2710,1);
  return;
}



// FUNCTION 142cad3d8 FUN_142cad3d8 body=69 status=ok
// SIG undefined FUN_142cad3d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad3d8(void)

{
  _DAT_14c9e2720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2728,1);
  return;
}



// FUNCTION 142cad41d FUN_142cad41d body=69 status=ok
// SIG undefined FUN_142cad41d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad41d(void)

{
  _DAT_14c9e2738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad45f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2740,1);
  return;
}



// FUNCTION 142cad462 FUN_142cad462 body=69 status=ok
// SIG undefined FUN_142cad462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad462(void)

{
  _DAT_14c9e2750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2758,1);
  return;
}



// FUNCTION 142cad4a7 FUN_142cad4a7 body=69 status=ok
// SIG undefined FUN_142cad4a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad4a7(void)

{
  _DAT_14c9e2768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2770,1);
  return;
}



// FUNCTION 142cad4ec FUN_142cad4ec body=69 status=ok
// SIG undefined FUN_142cad4ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad4ec(void)

{
  _DAT_14c9e2780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2788,1);
  return;
}



// FUNCTION 142cad531 FUN_142cad531 body=69 status=ok
// SIG undefined FUN_142cad531(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad531(void)

{
  _DAT_14c9e2798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e27a0,1);
  return;
}



// FUNCTION 142cad576 FUN_142cad576 body=69 status=ok
// SIG undefined FUN_142cad576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad576(void)

{
  _DAT_14c9e27b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e27b8,1);
  return;
}



// FUNCTION 142cad5bb FUN_142cad5bb body=69 status=ok
// SIG undefined FUN_142cad5bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad5bb(void)

{
  _DAT_14c9e27c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e27d0,1);
  return;
}



// FUNCTION 142cad600 FUN_142cad600 body=69 status=ok
// SIG undefined FUN_142cad600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad600(void)

{
  _DAT_14c9e27e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e27e8,1);
  return;
}



// FUNCTION 142cad645 FUN_142cad645 body=69 status=ok
// SIG undefined FUN_142cad645(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad645(void)

{
  _DAT_14c9e27f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2800,1);
  return;
}



// FUNCTION 142cad68a FUN_142cad68a body=69 status=ok
// SIG undefined FUN_142cad68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad68a(void)

{
  _DAT_14c9e2810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2818,1);
  return;
}



// FUNCTION 142cad6cf FUN_142cad6cf body=69 status=ok
// SIG undefined FUN_142cad6cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad6cf(void)

{
  _DAT_14c9e2828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2830,1);
  return;
}



// FUNCTION 142cad714 FUN_142cad714 body=69 status=ok
// SIG undefined FUN_142cad714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad714(void)

{
  _DAT_14c9e2840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2848,1);
  return;
}



// FUNCTION 142cad759 FUN_142cad759 body=69 status=ok
// SIG undefined FUN_142cad759(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad759(void)

{
  _DAT_14c9e2858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2860,1);
  return;
}



// FUNCTION 142cad79e FUN_142cad79e body=69 status=ok
// SIG undefined FUN_142cad79e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad79e(void)

{
  _DAT_14c9e2870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cad7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e2878,1);
  return;
}



// FUNCTION 142cad97c FUN_142cad97c body=1890 status=ok
// SIG undefined FUN_142cad97c(void)

void FUN_142cad97c(longlong param_1,longlong param_2,undefined1 param_3,int *param_4,
                  longlong param_5,ulonglong *param_6,ulonglong *param_7)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  sbyte sVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_c8 [32];
  int *local_a8;
  undefined1 local_99;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar11 = 4;
  if (*(int *)(DAT_14c9e2658 + 4) < 4) {
    iVar11 = *(int *)(DAT_14c9e2658 + 4);
  }
  iVar12 = 1;
  if (1 < iVar11) {
    iVar12 = iVar11;
  }
  sVar7 = 6;
  if (*(int *)(DAT_14c9e2700 + 4) == 0) {
    sVar7 = 0;
  }
  uVar16 = (*param_4 << sVar7) * param_4[1] * param_4[2];
  uVar8 = 8;
  if (DAT_14ca84e48 < 8) {
    uVar8 = DAT_14ca84e48;
  }
  local_60 = uVar8 + (uVar8 == 0);
  local_50 = 0;
  uVar8 = DAT_14ca84e48;
  if (uVar16 < DAT_14ca84e48) {
    uVar8 = uVar16;
  }
  uStack_5c = CONCAT44(0x10109,uVar8 + (uVar8 == 0));
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar15 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar15 + 0x150;
  local_99 = param_3;
  local_98 = plVar1;
  local_88 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(plVar1,0x160);
    uVar15 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar15 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bd266(uVar15,L"HeterogeneousVolumes.OrthoGrid.RasterTileBuffer",&local_60,0);
  iVar11 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar11 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar11);
  }
  plVar1 = local_98;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar11 * 8) = uVar15;
  *(int *)(uVar15 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_6 = uVar15;
  local_50 = 0;
  uVar8 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar8 = DAT_14ca84e48;
  }
  local_60 = uVar8 + (uVar8 == 0);
  uStack_5c = 0x410900000001;
  uVar15 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar15 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(local_98,0x160);
    uVar15 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar15 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bd266(uVar15,L"HeterogeneousVolume.OrthoGrid.RasterTileAllocatorBuffer",&local_60,0);
  iVar11 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar11 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar11);
  }
  plVar1 = local_98;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar11 * 8) = uVar15;
  *(int *)(uVar15 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_7 = uVar15;
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_98,0x48);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 8;
  }
  local_90 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar10[1] = *(undefined8 *)(uVar15 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 2;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar10 + 5) = 0;
  *puVar10 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar10 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar10 + 0x32) = 0;
  puVar10[7] = uVar15;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_90,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar10,0,2);
  plVar1 = local_98;
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar10 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_98,0x50);
    puVar10 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar10 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar10 = &PTR_FUN_14a240978;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  iVar11 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar11 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar11);
  }
  plVar1 = local_98;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar11 * 8) = puVar10;
  *(int *)(puVar10 + 3) = param_4[2];
  puVar10[2] = *(undefined8 *)param_4;
  cVar2 = *(char *)(param_5 + 0x68);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar13 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_98,0x50);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar13 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar13[1] = *(undefined8 *)(param_5 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 3;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *puVar13 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar13 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
  puVar13[7] = 0;
  puVar13[8] = param_5;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_90,iVar11);
  }
  plVar1 = local_98;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[5] = puVar13;
  *(int *)((longlong)puVar10 + 0x1c) = iVar12;
  *(uint *)(puVar10 + 4) = uVar16;
  uVar5 = *param_7;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar13 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_98,0x48);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar13 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar13[1] = *(undefined8 *)(uVar5 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 2;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar13 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
  puVar13[7] = uVar5;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_90,iVar11);
  }
  plVar1 = local_98;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[6] = puVar13;
  uVar5 = *param_6;
  cVar2 = *(char *)(uVar5 + 0x68);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar13 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_98,0x48);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar13 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar13[1] = *(undefined8 *)(uVar5 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 2;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar13 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar13 + 0x31) = 0;
  puVar13[7] = uVar5;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_90,iVar11);
  }
  uVar4 = local_99;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[7] = puVar13;
  iVar11 = *param_4 + 3;
  iVar12 = *param_4 + 6;
  if (-1 < iVar11) {
    iVar12 = iVar11;
  }
  iVar11 = param_4[1] + 3;
  iVar14 = param_4[1] + 6;
  if (-1 < iVar11) {
    iVar14 = iVar11;
  }
  iVar11 = param_4[2] + 3;
  iVar9 = param_4[2] + 6;
  if (-1 < iVar11) {
    iVar9 = iVar11;
  }
  uVar3 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_88 + 8) * 2) * 8);
  FUN_145f14558();
  FUN_1448e935e(uVar3,&local_60,&DAT_14c9e2f58,uVar4);
  FUN_145f14558();
  local_70 = local_60;
  uStack_6c = (undefined4)uStack_5c;
  uStack_68 = uStack_5c._4_4_;
  uStack_64 = uStack_54;
  local_a8 = &local_7c;
  local_7c = iVar12 >> 2;
  local_78 = iVar14 >> 2;
  local_74 = iVar9 >> 2;
  FUN_1471b8902(param_1,&local_60,&local_70,puVar10 + 2);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cae0df FUN_142cae0df body=15946 status=ok
// SIG undefined FUN_142cae0df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cae0df(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
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
  char cVar21;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  int iVar31;
  longlong lVar32;
  uint uVar33;
  int iVar34;
  double *pdVar35;
  undefined8 *puVar36;
  int6 iVar37;
  double *pdVar38;
  undefined8 *puVar39;
  undefined1 **ppuVar40;
  longlong lVar41;
  bool bVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  float fVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  float fVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStack_5e8 [32];
  undefined1 **local_5c8;
  longlong *local_5c0;
  longlong *local_5b8;
  ulonglong *local_5b0;
  undefined8 *local_5a8;
  longlong local_5a0;
  ulonglong local_598;
  undefined8 *local_590;
  undefined8 *local_588;
  ulonglong local_580;
  ulonglong local_578;
  ulonglong local_570;
  float local_568;
  float local_564;
  longlong local_560;
  uint local_554;
  ulonglong local_550;
  ulonglong local_548;
  double *local_540;
  longlong *local_538;
  double dStack_530;
  longlong *local_528;
  longlong local_520;
  ulonglong local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined4 local_4fc;
  longlong local_4f8;
  longlong local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  uint local_4a0;
  uint local_490;
  longlong local_488;
  longlong local_480;
  uint local_478;
  uint uStack_474;
  uint local_470;
  float local_46c;
  float local_468;
  undefined4 local_464;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  longlong local_428;
  longlong *local_420;
  undefined1 *local_414;
  undefined4 local_40c;
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378 [4];
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8 [4];
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 *local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined *puStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  if ((((*(int *)(DAT_14c9de160 + 4) != 0) && (*(int *)(param_3 + 0x3758) != 0)) &&
      (*(longlong *)(param_3 + 8) != 0)) &&
     (((*(char *)(param_3 + 0x23eb) == '\0' && (*(int *)(DAT_14c9e2538 + 4) != 0)) &&
      (*(char *)(param_4 + 0xd) != '\0')))) {
    FUN_1471b74da(param_3,param_4,&local_460,&local_464);
    if ((local_430 != 0.0) || (NAN(local_430))) {
      local_468 = *(float *)(DAT_14c9e2568 + 4);
      local_46c = *(float *)(DAT_14c9e2580 + 4);
      FUN_1471b85a3(param_3,&local_460,&local_468,&local_46c);
      local_5c8 = (undefined1 **)&local_478;
      local_564 = local_468;
      FUN_1471b89b4(param_3,local_464,local_468,&local_46c);
      local_508 = (ulonglong)local_478;
      local_510 = (ulonglong)uStack_474;
      local_518 = (ulonglong)local_470;
      uVar22 = uStack_474 * local_478 * local_470;
      if (uVar22 != 0) {
        pdVar35 = (double *)(param_3 + 0x9b0);
        pdVar38 = local_2f8;
        for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
          *pdVar38 = *pdVar35;
          pdVar35 = pdVar35 + 1;
          pdVar38 = pdVar38 + 1;
        }
        pdVar35 = (double *)(param_3 + 0xa30);
        pdVar38 = local_378;
        for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
          *pdVar38 = *pdVar35;
          pdVar35 = pdVar35 + 1;
          pdVar38 = pdVar38 + 1;
        }
        local_568 = local_46c;
        uVar33 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar33 = DAT_14ca84e48;
        }
        uStack_170 = 0x10109;
        local_178._0_4_ = uVar33 + (uVar33 == 0);
        puStack_168 = (undefined *)0x0;
        uVar33 = DAT_14ca84e48;
        if (uVar22 < DAT_14ca84e48) {
          uVar33 = uVar22;
        }
        local_178._4_4_ = uVar33 + (uVar33 == 0);
        puVar1 = (ulonglong *)(param_1 + 0x70);
        local_598 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar25 = local_598 + 0x150;
        local_5b0 = puVar1;
        if (*(ulonglong *)(param_1 + 0x78) < uVar25) {
          FUN_140023dd8(puVar1,0x160);
          local_598 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar25 = local_598 + 0x150;
        }
        local_560 = param_1 + 0x188;
        *(ulonglong *)(param_1 + 0x70) = uVar25;
        FUN_1456bd266(local_598,L"HeterogeneousVolumes.FrustumGrid.TopLevelGridBuffer",&local_178,0)
        ;
        iVar23 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar23 + 1U) {
          FUN_144737178(local_560,iVar23);
        }
        puVar1 = local_5b0;
        *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar23 * 8) = local_598;
        *(int *)(local_598 + 0x7c) = *(int *)(param_1 + 400) + -1;
        cVar21 = *(char *)(local_598 + 0x68);
        puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar36 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x48);
          puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar36 + 8;
        }
        local_5a0 = param_1 + 0x198;
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar36[1] = *(undefined8 *)(local_598 + 8);
        puVar36[2] = 0;
        *(undefined1 *)(puVar36 + 3) = 2;
        *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar36 + 5) = 0;
        *puVar36 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar36 + 6) = cVar21 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
        puVar36[7] = local_598;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
        *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        FUN_1405bfba3(param_1,puVar36,0xfffffff8,2);
        iVar23 = *(int *)(param_3 + 0x3758);
        if (0 < iVar23) {
          iVar31 = (int)local_508 + 3;
          iVar34 = (int)local_508 + 6;
          if (-1 < iVar31) {
            iVar34 = iVar31;
          }
          local_570 = CONCAT44(local_570._4_4_,iVar34 >> 2);
          iVar31 = (int)local_510 + 3;
          iVar34 = (int)local_510 + 6;
          if (-1 < iVar31) {
            iVar34 = iVar31;
          }
          local_578 = CONCAT44(local_578._4_4_,iVar34 >> 2);
          iVar31 = (int)local_518 + 3;
          iVar34 = (int)local_518 + 6;
          if (-1 < iVar31) {
            iVar34 = iVar31;
          }
          local_520 = param_1 + 0x98;
          local_580 = CONCAT44(local_580._4_4_,iVar34 >> 2);
          local_538 = (longlong *)0x0;
          do {
            local_588 = *(undefined8 **)
                         (*(longlong *)(param_3 + 0x3750) + (longlong)local_538 * 0x10);
            iVar34 = *(int *)(local_588 + 0x16);
            if (0 < iVar34) {
              lVar41 = 0x38;
              lVar32 = 0;
              do {
                puVar29 = (undefined8 *)local_588[0x15];
                if ((undefined8 *)local_588[0x15] == (undefined8 *)0x0) {
                  puVar29 = local_588;
                }
                if (*(longlong **)((longlong)puVar29 + lVar41) != (longlong *)0x0) {
                  local_540 = (double *)
                              (**(code **)(**(longlong **)((longlong)puVar29 + lVar41) + 0x10))();
                  puVar1 = local_5b0;
                  local_590 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar29 = local_590 + 0x18;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0xd0);
                    local_590 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar29 = local_590 + 0x18;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  *local_590 = &PTR_FUN_14a240998;
                  local_590[2] = 0;
                  *(undefined1 *)(local_590 + 3) = 1;
                  local_590[0x16] = 0;
                  local_5a8 = (undefined8 *)(longlong)*(int *)(param_1 + 0xa0);
                  uVar22 = *(int *)(param_1 + 0xa0) + 1;
                  *(uint *)(param_1 + 0xa0) = uVar22;
                  if (*(uint *)(param_1 + 0xa4) < uVar22) {
                    FUN_1448cfae8(local_520,local_5a8);
                  }
                  puVar29 = local_590;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)local_5a8 * 8) =
                       local_590;
                  lVar26 = FUN_1447e4f80();
                  cVar21 = *(char *)(lVar26 + 0x41);
                  if (*(char *)(lVar26 + 0x41) == '\x03') {
                    cVar21 = '\x02';
                  }
                  puVar29[2] = *(undefined8 *)(param_3 + 0x18);
                  *(char *)(puVar29 + 3) = cVar21;
                  dVar8 = local_540[2];
                  dVar56 = local_540[5];
                  dVar19 = local_540[1];
                  dVar54 = local_540[4];
                  *(float *)(puVar29 + 6) = (float)(*local_540 - local_540[3]);
                  *(float *)((longlong)puVar29 + 0x34) = (float)(dVar19 - dVar54);
                  *(float *)(puVar29 + 7) = (float)(dVar8 - dVar56);
                  dVar8 = local_540[2];
                  dVar56 = local_540[5];
                  dVar19 = local_540[1];
                  dVar54 = local_540[4];
                  *(float *)(puVar29 + 8) = (float)(*local_540 + local_540[3]);
                  *(float *)((longlong)puVar29 + 0x44) = (float)(dVar19 + dVar54);
                  *(float *)(puVar29 + 9) = (float)(dVar8 + dVar56);
                  *(float *)(puVar29 + 10) = (float)local_378[0];
                  *(float *)((longlong)puVar29 + 0x54) = (float)local_378[1];
                  *(float *)(puVar29 + 0xb) = (float)local_378[2];
                  *(float *)((longlong)puVar29 + 0x5c) = (float)local_378[3];
                  *(float *)(puVar29 + 0xc) = (float)local_358;
                  *(float *)((longlong)puVar29 + 100) = (float)local_350;
                  *(float *)(puVar29 + 0xd) = (float)local_348;
                  *(float *)((longlong)puVar29 + 0x6c) = (float)local_340;
                  *(float *)(puVar29 + 0xe) = (float)local_338;
                  *(float *)((longlong)puVar29 + 0x74) = (float)local_330;
                  *(float *)(puVar29 + 0xf) = (float)local_328;
                  *(float *)((longlong)puVar29 + 0x7c) = (float)local_320;
                  *(float *)(puVar29 + 0x10) = (float)local_318;
                  *(float *)((longlong)puVar29 + 0x84) = (float)local_310;
                  *(float *)(puVar29 + 0x11) = (float)local_308;
                  *(float *)((longlong)puVar29 + 0x8c) = (float)local_300;
                  dVar8 = tan((double)*(float *)(param_3 + 0x1de8) * 0.5 * 0.017453292519943295);
                  puVar1 = local_5b0;
                  *(float *)(puVar29 + 0x12) = (float)dVar8;
                  *(float *)((longlong)puVar29 + 0x94) = local_564;
                  *(float *)(puVar29 + 0x13) = local_568;
                  *(int *)(puVar29 + 0x14) = (int)local_508;
                  *(int *)((longlong)puVar29 + 0xa4) = (int)local_510;
                  *(int *)(puVar29 + 0x15) = (int)local_518;
                  *(int *)(puVar29 + 4) = (int)local_508;
                  *(int *)((longlong)puVar29 + 0x24) = (int)local_510;
                  *(int *)(puVar29 + 5) = (int)local_518;
                  local_5a8 = (undefined8 *)
                              CONCAT71(local_5a8._1_7_,*(undefined1 *)(local_598 + 0x68));
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 8;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x48);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 8;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_598 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 2;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar36 + 5) = 0;
                  *puVar36 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar36 + 6) = (char)local_5a8 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
                  puVar36[7] = local_598;
                  local_5a8 = (undefined8 *)(longlong)*(int *)(param_1 + 0x1a0);
                  uVar22 = *(int *)(param_1 + 0x1a0) + 1;
                  *(uint *)(param_1 + 0x1a0) = uVar22;
                  if (*(uint *)(param_1 + 0x1a4) < uVar22) {
                    FUN_1447568fc(local_5a0,local_5a8);
                  }
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)local_5a8 * 8) =
                       puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_590[0x16] = puVar36;
                  local_590 = local_590 + 2;
                  uVar24 = *(undefined8 *)(param_3 + 0x13818);
                  FUN_145f4760e();
                  FUN_1448e935e(uVar24,&local_178,&DAT_14c9e2ab8,0);
                  FUN_145f4760e();
                  local_1f8 = (double)CONCAT44(local_178._4_4_,(int)local_178);
                  uStack_1f0 = uStack_170;
                  uStack_1ec = uStack_16c;
                  local_278 = (undefined1 *)CONCAT44((undefined4)local_578,(int)local_570);
                  dStack_270 = (double)CONCAT44(dStack_270._4_4_,(undefined4)local_580);
                  local_5c8 = &local_278;
                  FUN_1471b8c2b(param_1,&local_178,&local_1f8);
                  iVar34 = *(int *)(local_588 + 0x16);
                }
                lVar32 = lVar32 + 1;
                lVar41 = lVar41 + 0xa8;
              } while (lVar32 < iVar34);
              iVar23 = *(int *)(param_3 + 0x3758);
            }
            local_538 = (longlong *)((longlong)local_538 + 1);
          } while ((longlong)local_538 < (longlong)iVar23);
        }
        local_490 = local_470;
        local_5b8 = &local_488;
        local_5c0 = &local_480;
        local_5c8 = (undefined1 **)local_598;
        FUN_142cad97c(param_1,param_2,0);
        puVar1 = local_5b0;
        local_4a0 = local_470;
        local_4a8 = CONCAT44(uStack_474,local_478);
        local_4f8 = local_488;
        local_520 = local_480;
        puStack_168 = (undefined *)0x0;
        uVar22 = 0xc;
        if (DAT_14ca84e48 < 0xc) {
          uVar22 = DAT_14ca84e48;
        }
        local_178._0_4_ = uVar22 + (uVar22 == 0);
        local_178._4_4_ = 1;
        uStack_170 = 0x4189;
        local_548 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar25 = local_548 + 0x150;
        if (*(ulonglong *)(param_1 + 0x78) < uVar25) {
          FUN_140023dd8(local_5b0,0x160);
          local_548 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar25 = local_548 + 0x150;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar25;
        FUN_1456bd266(local_548,
                      L"HeterogeneousVolume.FrustumGrid.RasterizeBottomLevelGridIndirectArgs",
                      &local_178,0);
        iVar23 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar23 + 1U) {
          FUN_144737178(local_560,iVar23);
        }
        puVar1 = local_5b0;
        *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar23 * 8) = local_548;
        *(int *)(local_548 + 0x7c) = *(int *)(param_1 + 400) + -1;
        puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar29 = puVar36 + 6;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x40);
          puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar29 = puVar36 + 6;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        *puVar36 = &PTR_FUN_14a2409b8;
        local_528 = (longlong *)(param_1 + 0x98);
        puVar36[4] = 0;
        puVar36[5] = 0;
        iVar23 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar23 + 1U) {
          FUN_1448cfae8(local_528,iVar23);
        }
        puVar1 = local_5b0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar23 * 8) = puVar36;
        *(undefined4 *)(puVar36 + 3) = DAT_14ca84f2c;
        puVar36[2] = _DAT_14ca84f24;
        puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar39 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x50);
          puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar39 + 9;
        }
        local_588 = puVar36 + 4;
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar39[1] = *(undefined8 *)(local_4f8 + 8);
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 3;
        *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
        *puVar39 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar39 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
        puVar39[7] = 0;
        puVar39[8] = local_4f8;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        puVar1 = local_5b0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar39;
        *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        *local_588 = puVar39;
        puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar39 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x48);
          puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar39 + 8;
        }
        local_588 = puVar36 + 2;
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar39[1] = *(undefined8 *)(local_548 + 8);
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 2;
        *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar39 + 5) = 0;
        *puVar39 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar39 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar39 + 0x32) = 0;
        puVar39[7] = local_548;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar39;
        *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar36[5] = puVar39;
        FUN_1471b8cde(*(undefined8 *)(param_3 + 0x13818),local_408);
        local_5c8 = &local_414;
        local_414 = &DAT_100000001;
        local_40c = 1;
        FUN_1471b8d4b(param_1,&local_178,local_408,local_588);
        puVar1 = local_5b0;
        iVar23 = *(int *)(DAT_14c9e25b0 + 4);
        if (iVar23 < 2) {
          iVar23 = 1;
        }
        local_554 = (uint)((double)iVar23 * 1000000.0 * 0.125);
        uVar22 = 8;
        if (DAT_14ca84e48 < 8) {
          uVar22 = DAT_14ca84e48;
        }
        local_178._0_4_ = uVar22 + (uVar22 == 0);
        uStack_170 = 0x10109;
        uVar22 = DAT_14ca84e48;
        if (local_554 < DAT_14ca84e48) {
          uVar22 = local_554;
        }
        puStack_168 = (undefined *)0x0;
        local_178._4_4_ = uVar22 + (uVar22 == 0);
        local_570 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar25 = local_570 + 0x150;
        if (*(ulonglong *)(param_1 + 0x78) < uVar25) {
          FUN_140023dd8(local_5b0,0x160);
          local_570 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar25 = local_570 + 0x150;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar25;
        FUN_1456bd266(local_570,L"HeterogeneousVolumes.FrustumGrid.ExtinctionGridBuffer",&local_178,
                      0);
        iVar23 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar23 + 1U) {
          FUN_144737178(local_560,iVar23);
        }
        puVar1 = local_5b0;
        *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar23 * 8) = local_570;
        *(int *)(local_570 + 0x7c) = *(int *)(param_1 + 400) + -1;
        uVar22 = 8;
        if (DAT_14ca84e48 < 8) {
          uVar22 = DAT_14ca84e48;
        }
        local_178._0_4_ = uVar22 + (uVar22 == 0);
        uStack_170 = 0x10109;
        uVar22 = DAT_14ca84e48;
        if (local_554 < DAT_14ca84e48) {
          uVar22 = local_554;
        }
        puStack_168 = (undefined *)0x0;
        local_178._4_4_ = uVar22 + (uVar22 == 0);
        local_578 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar25 = local_578 + 0x150;
        if (*(ulonglong *)(param_1 + 0x78) < uVar25) {
          FUN_140023dd8(local_5b0,0x160);
          local_578 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar25 = local_578 + 0x150;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar25;
        FUN_1456bd266(local_578,L"HeterogeneousVolumes.FrustumGrid.EmissionGridBuffer",&local_178,0)
        ;
        iVar23 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar23 + 1U) {
          FUN_144737178(local_560,iVar23);
        }
        puVar1 = local_5b0;
        *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar23 * 8) = local_578;
        *(int *)(local_578 + 0x7c) = *(int *)(param_1 + 400) + -1;
        uVar22 = 8;
        if (DAT_14ca84e48 < 8) {
          uVar22 = DAT_14ca84e48;
        }
        local_178._0_4_ = uVar22 + (uVar22 == 0);
        uStack_170 = 0x10109;
        uVar22 = DAT_14ca84e48;
        if (local_554 < DAT_14ca84e48) {
          uVar22 = local_554;
        }
        puStack_168 = (undefined *)0x0;
        local_178._4_4_ = uVar22 + (uVar22 == 0);
        local_580 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar25 = local_580 + 0x150;
        if (*(ulonglong *)(param_1 + 0x78) < uVar25) {
          FUN_140023dd8(local_5b0,0x160);
          local_580 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar25 = local_580 + 0x150;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar25;
        FUN_1456bd266(local_580,L"HeterogeneousVolumes.FrustumGrid.ScatteringGridBuffer",&local_178,
                      0);
        iVar23 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar23 + 1U) {
          FUN_144737178(local_560,iVar23);
        }
        puVar1 = local_5b0;
        *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar23 * 8) = local_580;
        *(int *)(local_580 + 0x7c) = *(int *)(param_1 + 400) + -1;
        uStack_170 = 0x4109;
        uVar22 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar22 = DAT_14ca84e48;
        }
        puStack_168 = (undefined *)0x0;
        local_178._0_4_ = uVar22 + (uVar22 == 0);
        local_178._4_4_ = 2 - (uint)(DAT_14ca84e48 < 2);
        local_550 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar25 = local_550 + 0x150;
        if (*(ulonglong *)(param_1 + 0x78) < uVar25) {
          FUN_140023dd8(local_5b0,0x160);
          local_550 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar25 = local_550 + 0x150;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar25;
        FUN_1456bd266(local_550,L"HeterogeneousVolume.FrustumGrid.BottomLevelGridAllocatorBuffer",
                      &local_178,0);
        iVar23 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar23 + 1U) {
          FUN_144737178(local_560,iVar23);
        }
        puVar1 = local_5b0;
        *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar23 * 8) = local_550;
        *(int *)(local_550 + 0x7c) = *(int *)(param_1 + 400) + -1;
        puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar36 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x48);
          puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar36 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar36[1] = *(undefined8 *)(local_550 + 8);
        puVar36[2] = 0;
        *(undefined1 *)(puVar36 + 3) = 2;
        *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar36 + 5) = 0;
        *puVar36 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar36 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar36 + 0x32) = 0;
        puVar36[7] = local_550;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
        *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        FUN_1405bfba3(param_1,puVar36,0,2);
        if (0 < *(int *)(param_3 + 0x3758)) {
          local_4f0 = param_1 + 0x168;
          local_540 = (double *)0x0;
          do {
            local_590 = *(undefined8 **)
                         (*(longlong *)(param_3 + 0x3750) + (longlong)local_540 * 0x10);
            local_518 = *(ulonglong *)
                         (*(longlong *)(param_3 + 0x3750) + 8 + (longlong)local_540 * 0x10);
            local_420 = (longlong *)local_590[0x18];
            cVar21 = FUN_1404d4df8(local_590,local_518,*(undefined4 *)(param_3 + 0x3090));
            if ((cVar21 != '\0') && (iVar23 = *(int *)(local_590 + 0x16), 0 < iVar23)) {
              local_588 = (undefined8 *)0x0;
              do {
                puVar29 = (undefined8 *)local_590[0x15];
                if ((undefined8 *)local_590[0x15] == (undefined8 *)0x0) {
                  puVar29 = local_590;
                }
                local_538 = (longlong *)puVar29[(longlong)local_588 * 0x15 + 7];
                if (local_538 != (longlong *)0x0) {
                  local_4fc = *(undefined4 *)(*(longlong *)(local_518 + 0x218) + 0x158);
                  local_4d8 = *(double *)(local_518 + 0x1b8);
                  dStack_4d0 = *(double *)(local_518 + 0x1c0);
                  local_4c8 = *(double *)(local_518 + 0x1c8);
                  uStack_4c0 = 0;
                  local_4e8 = *(double *)(local_518 + 0x1d0);
                  dStack_4e0 = *(double *)(local_518 + 0x1d8);
                  local_4b8 = *(double *)(local_518 + 0x1e0);
                  uStack_4b0 = 0;
                  dVar8 = *(double *)(local_518 + 0x180);
                  dVar56 = *(double *)(local_518 + 0x188);
                  dVar19 = *(double *)(local_518 + 400);
                  dVar54 = *(double *)(local_518 + 0x198);
                  dVar55 = *(double *)(local_518 + 0x1a0);
                  dVar5 = *(double *)(local_518 + 0x1a8);
                  local_560 = FUN_1449cbe5c(local_420,*(undefined4 *)(param_3 + 0x3090),&local_420);
                  puVar1 = local_5b0;
                  local_5a8 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar29 = local_5a8 + 0x3c;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x1f0);
                    local_5a8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar29 = local_5a8 + 0x3c;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  *local_5a8 = &PTR_FUN_14a2409d8;
                  local_5a8[2] = 0;
                  *(undefined1 *)(local_5a8 + 3) = 1;
                  local_5a8[4] = 0;
                  *(undefined1 *)(local_5a8 + 5) = 1;
                  local_5a8[6] = 0;
                  local_5a8[0x30] = 0;
                  *(undefined1 *)(local_5a8 + 0x31) = 1;
                  local_5a8[0x32] = 0;
                  local_5a8[0x33] = 0;
                  local_5a8[0x34] = 0;
                  *(undefined4 *)(local_5a8 + 0x35) = 4;
                  local_5a8[0x36] = 0;
                  local_5a8[0x37] = 0;
                  local_5a8[0x38] = 0;
                  local_5a8[0x39] = 0;
                  local_5a8[0x3a] = 0;
                  iVar23 = *(int *)(param_1 + 0xa0);
                  *(uint *)(param_1 + 0xa0) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0xa4) < iVar23 + 1U) {
                    FUN_1448cfae8(local_528,iVar23);
                  }
                  puVar29 = local_5a8;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar23 * 8) = local_5a8
                  ;
                  lVar32 = FUN_1447e4f80();
                  cVar21 = *(char *)(lVar32 + 0x41);
                  if (*(char *)(lVar32 + 0x41) == '\x03') {
                    cVar21 = '\x02';
                  }
                  puVar29[2] = *(undefined8 *)(param_3 + 0x18);
                  *(char *)(puVar29 + 3) = cVar21;
                  uVar24 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
                  uVar24 = FUN_1448c569e(uVar24,param_1);
                  if (*(int *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x110) < DAT_14ca4b328) {
                    FUN_144b3d300(&DAT_14ca4b328);
                    if (DAT_14ca4b328 == -1) {
                      DAT_14ca4b320 = FUN_145900d44();
                      _Init_thread_footer(&DAT_14ca4b328);
                    }
                  }
                  cVar21 = *(char *)(DAT_14ca4b320 + 0x41);
                  if (*(char *)(DAT_14ca4b320 + 0x41) == '\x03') {
                    cVar21 = '\x02';
                  }
                  local_5a8[4] = uVar24;
                  *(char *)(local_5a8 + 5) = cVar21;
                  plVar30 = *(longlong **)(param_3 + 0x30d8);
                  if ((plVar30 == (longlong *)0x0) || ((*(byte *)(plVar30 + 1) & 2) == 0)) {
                    local_178._0_4_ = 0x3f800000;
                    local_178._4_4_ = 0x3f800000;
                    uStack_170 = 0x3f800000;
                    uStack_16c = 0x3f800000;
                    local_5c0 = &local_178;
                    local_5c8 = (undefined1 **)CONCAT44(local_5c8._4_4_,1);
                    lVar32 = FUN_1449cc94d(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
                  }
                  else {
                    if (*(code **)(*plVar30 + 0x80) == (code *)&LAB_144b15db6) {
                      lVar32 = plVar30[(ulonglong)*(uint *)(plVar30 + 0xcd) + 0xd1];
                    }
                    else {
                      lVar32 = (**(code **)(*plVar30 + 0x80))();
                    }
                    local_178._0_4_ = (int)lVar32;
                    local_178._4_4_ = (int)((ulonglong)lVar32 >> 0x20);
                    if (lVar32 != 0) {
                      LOCK();
                      *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
                      UNLOCK();
                    }
                    lVar32 = FUN_144735dd8(param_1,&local_178,1);
                    puVar29 = (undefined8 *)CONCAT44(local_178._4_4_,(int)local_178);
                    if (puVar29 != (undefined8 *)0x0) {
                      LOCK();
                      piVar2 = (int *)(puVar29 + 1);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)*puVar29)(puVar29,1);
                      }
                    }
                  }
                  puVar1 = local_5b0;
                  cVar21 = *(char *)(lVar32 + 0x68);
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 9;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x50);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 9;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(lVar32 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 3;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *puVar36 = &PTR_FUN_14a1fb168;
                  *(byte *)(puVar36 + 5) = cVar21 >> 7 & 0x1c;
                  *(undefined8 *)((longlong)puVar36 + 0x2c) = 0xffffffff00000000;
                  puVar36[7] = 0;
                  puVar36[8] = lVar32;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
                    FUN_1447568fc(local_5a0,iVar23);
                  }
                  puVar29 = local_5a8;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[6] = puVar36;
                  *(float *)(local_5a8 + 8) = (float)(dVar8 - dVar54);
                  *(float *)((longlong)local_5a8 + 0x44) = (float)(dVar56 - dVar55);
                  *(float *)(local_5a8 + 9) = (float)(dVar19 - dVar5);
                  *(float *)(local_5a8 + 10) = (float)(dVar8 + dVar54);
                  *(float *)((longlong)local_5a8 + 0x54) = (float)(dVar56 + dVar55);
                  *(float *)(local_5a8 + 0xb) = (float)(dVar19 + dVar5);
                  puVar36 = (undefined8 *)(**(code **)(*local_538 + 0x28))();
                  puVar39 = &local_178;
                  for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
                    *puVar39 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar39 = puVar39 + 1;
                  }
                  puVar36 = (undefined8 *)(**(code **)(*local_538 + 0x20))();
                  puVar39 = &local_1f8;
                  for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
                    *puVar39 = *puVar36;
                    puVar36 = puVar36 + 1;
                    puVar39 = puVar39 + 1;
                  }
                  FUN_1447fea8d(&local_278,&local_178);
                  *(float *)(puVar29 + 0xc) = (float)(double)local_278;
                  *(float *)((longlong)puVar29 + 100) = (float)dStack_270;
                  *(float *)(puVar29 + 0xd) = (float)local_268;
                  *(float *)((longlong)puVar29 + 0x6c) = (float)dStack_260;
                  *(float *)(puVar29 + 0xe) = (float)local_258;
                  *(float *)((longlong)puVar29 + 0x74) = (float)uStack_250;
                  *(float *)(puVar29 + 0xf) = (float)local_248;
                  *(float *)((longlong)puVar29 + 0x7c) = (float)uStack_240;
                  *(float *)(puVar29 + 0x10) = (float)local_238;
                  *(float *)((longlong)puVar29 + 0x84) = (float)local_230;
                  *(float *)(puVar29 + 0x11) = (float)local_228;
                  *(float *)((longlong)puVar29 + 0x8c) = (float)local_220;
                  *(float *)(puVar29 + 0x12) = (float)local_218;
                  *(float *)((longlong)puVar29 + 0x94) = (float)local_210;
                  *(float *)(puVar29 + 0x13) = (float)local_208;
                  *(float *)((longlong)puVar29 + 0x9c) = (float)local_200;
                  if ((((1e-08 < ABS(*(float *)(puVar29 + 0xc))) ||
                       (1e-08 < ABS(*(float *)((longlong)local_5a8 + 100)))) ||
                      (1e-08 < ABS(*(float *)(local_5a8 + 0xd)))) ||
                     ((((1e-08 < ABS(*(float *)(local_5a8 + 0xe)) ||
                        (1e-08 < ABS(*(float *)((longlong)local_5a8 + 0x74)))) ||
                       ((1e-08 < ABS(*(float *)(local_5a8 + 0xf)) ||
                        ((1e-08 < ABS((float)local_238) || (1e-08 < ABS((float)local_230))))))) ||
                      (1e-08 < ABS((float)local_228))))) {
                    FUN_144906c86(&local_278,local_5a8 + 0xc);
                  }
                  else {
                    local_248 = _DAT_14c846280;
                    uStack_240 = _DAT_14c846288;
                    local_258 = _DAT_14c846270;
                    uStack_250 = _DAT_14c846278;
                    local_268 = _DAT_14c846260;
                    dStack_260 = _DAT_14c846268;
                    local_278 = _DAT_14c846250;
                    dStack_270 = DAT_14c846258;
                  }
                  *(undefined4 *)(local_5a8 + 0x1a) = (undefined4)local_248;
                  *(undefined4 *)((longlong)local_5a8 + 0xd4) = local_248._4_4_;
                  *(undefined4 *)(local_5a8 + 0x1b) = (undefined4)uStack_240;
                  *(undefined4 *)((longlong)local_5a8 + 0xdc) = uStack_240._4_4_;
                  *(undefined4 *)(local_5a8 + 0x18) = (undefined4)local_258;
                  *(undefined4 *)((longlong)local_5a8 + 0xc4) = local_258._4_4_;
                  *(undefined4 *)(local_5a8 + 0x19) = (undefined4)uStack_250;
                  *(undefined4 *)((longlong)local_5a8 + 0xcc) = uStack_250._4_4_;
                  local_5a8[0x16] = local_268;
                  local_5a8[0x17] = dStack_260;
                  local_5a8[0x14] = local_278;
                  local_5a8[0x15] = dStack_270;
                  if ((((((9.99999993922529e-09 <
                           ABS((double)CONCAT44(local_178._4_4_,(int)local_178))) ||
                         (9.99999993922529e-09 < ABS((double)CONCAT44(uStack_16c,uStack_170)))) ||
                        (9.99999993922529e-09 < ABS((double)puStack_168))) ||
                       ((9.99999993922529e-09 < ABS(dStack_158) ||
                        (9.99999993922529e-09 < ABS(local_150))))) ||
                      (9.99999993922529e-09 < ABS(local_148))) ||
                     (((9.99999993922529e-09 < ABS(local_138) ||
                       (9.99999993922529e-09 < ABS(dStack_130))) ||
                      (9.99999993922529e-09 < ABS(local_128))))) {
                    FUN_14007522e(&local_278,&local_178);
                  }
                  else {
                    puVar29 = &DAT_14c846400;
                    ppuVar40 = &local_278;
                    for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
                      *ppuVar40 = (undefined1 *)*puVar29;
                      puVar29 = puVar29 + 1;
                      ppuVar40 = ppuVar40 + 1;
                    }
                  }
                  FUN_1448ac920(&local_3f8,&local_278);
                  dVar14 = dStack_3f0 + dStack_3f0;
                  dVar19 = local_3e8 + local_3e8;
                  dVar56 = local_3f8 * (local_3f8 + local_3f8);
                  dVar5 = (1.0 - (local_3e8 * dVar19 + dStack_3f0 * dVar14)) * local_3b8;
                  dVar10 = (1.0 - (local_3e8 * dVar19 + dVar56)) * dStack_3b0;
                  dVar54 = (local_3f8 + local_3f8) * dStack_3e0;
                  dVar53 = (dVar14 * local_3f8 + dVar19 * dStack_3e0) * local_3b8;
                  dVar57 = (dVar19 * dStack_3f0 + dVar54) * dStack_3b0;
                  dVar15 = (dVar14 * dStack_3e0 + local_3f8 * dVar19) * local_3a8;
                  local_538 = (longlong *)local_3a8;
                  dStack_530 = dStack_3a0;
                  dVar55 = (local_3f8 * dVar19 - dVar14 * dStack_3e0) * local_3b8;
                  dVar8 = (dVar14 * local_3f8 - dVar19 * dStack_3e0) * dStack_3b0;
                  dVar19 = (dVar19 * dStack_3f0 - dVar54) * local_3a8;
                  dVar6 = local_4e8 * dVar5;
                  dVar7 = local_4e8 * dVar53;
                  dVar12 = dStack_4e0 * dVar8;
                  dVar13 = dStack_4e0 * dVar10;
                  dVar9 = local_4b8 * dVar15;
                  dVar11 = local_4b8 * dVar19;
                  dVar16 = local_4e8 * dVar55;
                  dVar20 = dStack_4e0 * dVar57;
                  dVar17 = (1.0 - (dVar56 + dStack_3f0 * dVar14)) * local_3a8;
                  dVar14 = local_4b8 * dVar17;
                  dVar56 = dVar15 * dVar15 + dVar8 * dVar8 + dVar5 * dVar5;
                  dVar54 = dVar19 * dVar19 + dVar10 * dVar10 + dVar53 * dVar53;
                  dVar18 = dVar17 * dVar17 + dVar57 * dVar57 + dVar55 * dVar55;
                  if (dVar56 <= dVar54) {
                    dVar56 = dVar54;
                  }
                  if (dVar56 <= dVar18) {
                    dVar56 = dVar18;
                  }
                  dVar8 = local_4c8 * dVar15 + dStack_4d0 * dVar8 + local_4d8 * dVar5 + local_3d8;
                  dVar19 = local_4c8 * dVar19 + dStack_4d0 * dVar10 + local_4d8 * dVar53 + local_3d0
                  ;
                  dVar54 = local_4c8 * dVar17 + dStack_4d0 * dVar57 + local_4d8 * dVar55 + local_3c8
                  ;
                  if (dVar56 < 0.0) {
                    sqrt(dVar56);
                  }
                  puVar29 = local_5a8;
                  *(float *)(local_5a8 + 0x1c) = (float)dVar8;
                  *(float *)((longlong)local_5a8 + 0xe4) = (float)dVar19;
                  *(float *)(local_5a8 + 0x1d) = (float)dVar54;
                  *(float *)(local_5a8 + 0x1e) = (float)(ABS(dVar9) + ABS(dVar12) + ABS(dVar6));
                  *(float *)((longlong)local_5a8 + 0xf4) =
                       (float)(ABS(dVar11) + ABS(dVar13) + ABS(dVar7));
                  *(float *)(local_5a8 + 0x1f) = (float)(ABS(dVar14) + ABS(dVar20) + ABS(dVar16));
                  *(undefined4 *)((longlong)local_5a8 + 0xfc) = local_4fc;
                  *(uint *)(local_5a8 + 0x21) = local_4a0;
                  local_5a8[0x20] = local_4a8;
                  local_5a8[0x22] = local_4a8;
                  *(uint *)(local_5a8 + 0x23) = local_4a0;
                  *(float *)(local_5a8 + 0x24) = (float)local_378[0];
                  *(float *)((longlong)local_5a8 + 0x124) = (float)local_378[1];
                  *(float *)(local_5a8 + 0x25) = (float)local_378[2];
                  *(float *)((longlong)local_5a8 + 300) = (float)local_378[3];
                  *(float *)(local_5a8 + 0x26) = (float)local_358;
                  *(float *)((longlong)local_5a8 + 0x134) = (float)local_350;
                  *(float *)(local_5a8 + 0x27) = (float)local_348;
                  *(float *)((longlong)local_5a8 + 0x13c) = (float)local_340;
                  *(float *)(local_5a8 + 0x28) = (float)local_338;
                  *(float *)((longlong)local_5a8 + 0x144) = (float)local_330;
                  *(float *)(local_5a8 + 0x29) = (float)local_328;
                  *(float *)((longlong)local_5a8 + 0x14c) = (float)local_320;
                  *(float *)(local_5a8 + 0x2a) = (float)local_318;
                  *(float *)((longlong)local_5a8 + 0x154) = (float)local_310;
                  *(float *)(local_5a8 + 0x2b) = (float)local_308;
                  *(float *)((longlong)local_5a8 + 0x15c) = (float)local_300;
                  dVar8 = tan((double)*(float *)(param_3 + 0x1de8) * 0.5 * 0.017453292519943295);
                  *(float *)(puVar29 + 0x2c) = (float)dVar8;
                  *(float *)((longlong)puVar29 + 0x164) = local_564;
                  *(float *)(puVar29 + 0x2d) = local_568;
                  *(uint *)(puVar29 + 0x2e) = (uint)*(byte *)(param_4 + 0xf);
                  FUN_1448a862c(&local_3f8);
                  FUN_14019e00e(&local_428,&local_3f8,0,1);
                  lVar41 = FUN_1448a8484();
                  lVar32 = local_428;
                  cVar21 = *(char *)(lVar41 + 0x41);
                  if (*(char *)(lVar41 + 0x41) == '\x03') {
                    cVar21 = '\x02';
                  }
                  puVar29[0x30] = local_428;
                  *(char *)(puVar29 + 0x31) = cVar21;
                  if (local_428 != 0) {
                    LOCK();
                    puVar3 = (uint *)(local_428 + 8);
                    uVar22 = *puVar3;
                    *puVar3 = *puVar3 - 1;
                    UNLOCK();
                    if ((uVar22 & 0x3fffffff) == 1) {
                      puVar3 = (uint *)(local_428 + 8);
                      LOCK();
                      uVar22 = *puVar3;
                      *puVar3 = *puVar3 | 0x40000000;
                      UNLOCK();
                      if ((uVar22 >> 0x1e & 1) == 0) {
                        bVar4 = *(byte *)(local_428 + 0xd);
                        plVar27 = (longlong *)FUN_14001cc68(0x10);
                        plVar27[1] = lVar32;
                        plVar30 = DAT_14ca843c0;
                        plVar28 = DAT_14ca843c8;
                        if ((bVar4 & 2) == 0) {
                          do {
                            *plVar27 = (longlong)plVar30;
                            LOCK();
                            bVar42 = plVar30 != DAT_14ca843c0;
                            plVar28 = plVar27;
                            if (bVar42) {
                              plVar30 = DAT_14ca843c0;
                              plVar28 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar28;
                            UNLOCK();
                          } while (bVar42);
                        }
                        else {
                          do {
                            *plVar27 = (longlong)plVar28;
                            LOCK();
                            bVar42 = plVar28 != DAT_14ca843c8;
                            plVar30 = plVar27;
                            if (bVar42) {
                              plVar28 = DAT_14ca843c8;
                              plVar30 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar30;
                            UNLOCK();
                          } while (bVar42);
                        }
                      }
                    }
                  }
                  puVar1 = local_5b0;
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 9;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 9;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_4f8 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 3;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *puVar36 = &PTR_FUN_14a1fb168;
                  *(undefined1 *)(puVar36 + 5) = 0x1c;
                  *(undefined8 *)((longlong)puVar36 + 0x2c) = 0xffffffff00000000;
                  puVar36[7] = 0;
                  puVar36[8] = local_4f8;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  uVar22 = iVar23 + 1;
                  *(uint *)(param_1 + 0x1a0) = uVar22;
                  if (*(uint *)(param_1 + 0x1a4) < uVar22) {
                    FUN_1447568fc(local_5a0);
                  }
                  puVar1 = local_5b0;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[0x32] = puVar36;
                  cVar21 = *(char *)(local_520 + 0x68);
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 9;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 9;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_520 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 3;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *puVar36 = &PTR_FUN_14a1fb168;
                  *(byte *)(puVar36 + 5) = cVar21 >> 7 & 0x1c;
                  *(undefined8 *)((longlong)puVar36 + 0x2c) = 0xffffffff00000000;
                  puVar36[7] = 0;
                  puVar36[8] = local_520;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  uVar22 = iVar23 + 1;
                  *(uint *)(param_1 + 0x1a0) = uVar22;
                  if (*(uint *)(param_1 + 0x1a4) < uVar22) {
                    FUN_1447568fc(local_5a0);
                  }
                  puVar1 = local_5b0;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[0x33] = puVar36;
                  local_5a8[0x34] = local_548;
                  *(undefined4 *)(local_5a8 + 0x35) = 4;
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 8;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 8;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_550 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 2;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar36 + 5) = 0;
                  *puVar36 = &PTR_FUN_14a1fb3e8;
                  *(undefined2 *)(puVar36 + 6) = 0x1c;
                  *(undefined1 *)((longlong)puVar36 + 0x32) = 0;
                  puVar36[7] = local_550;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
                    FUN_1447568fc(local_5a0,iVar23);
                  }
                  puVar1 = local_5b0;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[0x37] = puVar36;
                  cVar21 = *(char *)(local_598 + 0x68);
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 8;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x48);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 8;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_598 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 2;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar36 + 5) = 0;
                  *puVar36 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar36 + 6) = cVar21 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
                  puVar36[7] = local_598;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
                    FUN_1447568fc(local_5a0,iVar23);
                  }
                  puVar1 = local_5b0;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[0x36] = puVar36;
                  cVar21 = *(char *)(local_570 + 0x68);
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 8;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x48);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 8;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_570 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 2;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar36 + 5) = 0;
                  *puVar36 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar36 + 6) = cVar21 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
                  puVar36[7] = local_570;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
                    FUN_1447568fc(local_5a0,iVar23);
                  }
                  puVar1 = local_5b0;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[0x38] = puVar36;
                  cVar21 = *(char *)(local_578 + 0x68);
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 8;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x48);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 8;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_578 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 2;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar36 + 5) = 0;
                  *puVar36 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar36 + 6) = cVar21 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
                  puVar36[7] = local_578;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
                    FUN_1447568fc(local_5a0,iVar23);
                  }
                  puVar1 = local_5b0;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[0x39] = puVar36;
                  cVar21 = *(char *)(local_580 + 0x68);
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 8;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x48);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 8;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar29;
                  puVar36[1] = *(undefined8 *)(local_580 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 2;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar36 + 5) = 0;
                  *puVar36 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar36 + 6) = cVar21 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar36 + 0x31) = 0;
                  puVar36[7] = local_580;
                  iVar23 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
                    FUN_1447568fc(local_5a0,iVar23);
                  }
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  local_5a8[0x3a] = puVar36;
                  *(uint *)((longlong)local_5a8 + 0x16c) = local_554;
                  local_538 = local_420;
                  FUN_1471c0c16();
                  FUN_140069376(param_1);
                  puVar1 = local_5b0;
                  iVar37 = (int6)(short)((uint)iVar23 >> 0x10);
                  uVar76 = (undefined4)CONCAT62(iVar37,2);
                  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2))
                     && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
                    uVar76 = (undefined4)CONCAT62(iVar37,4);
                  }
                  puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar29 = puVar36 + 0x3c;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                    FUN_140023dd8(local_5b0,0x1e8);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar29 = puVar36 + 0x3c;
                  }
                  puVar39 = local_5a8 + 2;
                  *local_5b0 = (ulonglong)puVar29;
                  uStack_170 = (undefined4)DAT_14c9e5cf8;
                  uStack_16c = (undefined4)((ulonglong)DAT_14c9e5cf8 >> 0x20);
                  if (DAT_14c9e5cf8 != 0) {
                    LOCK();
                    *(int *)(DAT_14c9e5cf8 + 8) = *(int *)(DAT_14c9e5cf8 + 8) + 1;
                    UNLOCK();
                  }
                  puStack_168 = &DAT_14c9e5cb0;
                  local_5c8 = (undefined1 **)CONCAT71(local_5c8._1_7_,2);
                  local_178 = puVar39;
                  FUN_140068f1a(puVar36,&local_1f8,&local_178,uVar76);
                  *puVar36 = &PTR_FUN_14a2409e0;
                  puVar36[0x37] = puVar39;
                  puVar36[0x38] = param_2;
                  puVar36[0x39] = param_3;
                  puVar36[0x3a] = local_538;
                  puVar36[0x3b] = local_560;
                  iVar23 = *(int *)(param_1 + 0x170);
                  *(uint *)(param_1 + 0x170) = iVar23 + 1U;
                  if (*(uint *)(param_1 + 0x174) < iVar23 + 1U) {
                    FUN_14470e57a(local_4f0,iVar23);
                  }
                  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar23 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
                  FUN_140069100(param_1,puVar36);
                  iVar23 = *(int *)(local_590 + 0x16);
                }
                local_588 = (undefined8 *)((longlong)local_588 + 1);
              } while ((longlong)local_588 < (longlong)iVar23);
            }
            local_540 = (double *)((longlong)local_540 + 1);
          } while ((longlong)local_540 < (longlong)*(int *)(param_3 + 0x3758));
        }
        puVar1 = local_5b0;
        puVar36 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar29 = puVar36 + 0x4c;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x270);
          puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar29 = puVar36 + 0x4c;
        }
        *local_5b0 = (ulonglong)puVar29;
        *puVar36 = &PTR_FUN_14a240928;
        lVar32 = 0x1ec;
        do {
          puVar29 = (undefined8 *)((longlong)puVar36 + lVar32 + -0xc);
          *puVar29 = 0;
          puVar29[1] = 0x3f80000000000000;
          lVar32 = lVar32 + 0x10;
        } while (lVar32 != 0x24c);
        puVar36[0x4a] = 0;
        puVar36[0x4b] = 0;
        puVar36[0x48] = 0;
        puVar36[0x49] = 0;
        iVar23 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar23 + 1U) {
          FUN_1448cfae8(local_528,iVar23);
        }
        *(undefined8 **)(*local_528 + (longlong)iVar23 * 8) = puVar36;
        dVar19 = (double)(int)local_510;
        dVar56 = (double)(int)local_508;
        dVar8 = (double)*(float *)(param_3 + 0x1de8) * 0.5 * 0.017453292519943295;
        dVar54 = (double)local_568 / ((double)local_568 - (double)local_564);
        dVar55 = dVar54;
        if ((local_564 == local_568) && (!NAN(local_564) && !NAN(local_568))) {
          dVar55 = 1.0;
        }
        dVar10 = -(double)local_564 * dVar55;
        dVar5 = tan(dVar8);
        dVar19 = (dVar56 / dVar5) / dVar19;
        dVar8 = tan(dVar8);
        dVar8 = 1.0 / dVar8;
        uStack_170 = 0;
        uStack_16c = 0;
        puStack_168 = (undefined *)0x0;
        local_160 = 0.0;
        dStack_158 = 0.0;
        local_148 = 0.0;
        dStack_140 = 0.0;
        local_138 = 0.0;
        dStack_130 = 0.0;
        local_120 = 1.0;
        local_118 = 0.0;
        dStack_110 = 0.0;
        local_100 = 0.0;
        local_150 = dVar19;
        local_128 = dVar55;
        local_108 = dVar10;
        local_178 = (undefined8 *)dVar8;
        if (ABS(dVar8) <= 9.99999993922529e-09) {
          if ((((local_564 == local_568) && (!NAN(local_564) && !NAN(local_568))) ||
              (9.99999993922529e-09 < ABS(dVar54))) || (9.99999993922529e-09 < ABS(dVar19)))
          goto LAB_142cb0ae9;
          puVar29 = &DAT_14c846400;
          puVar39 = &local_1f8;
          for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
            *puVar39 = *puVar29;
            puVar29 = puVar29 + 1;
            puVar39 = puVar39 + 1;
          }
          uVar43 = 0;
          uVar45 = 0x3ff00000;
          uVar46 = 0;
          uVar47 = 0;
          uVar49 = 0;
          uVar50 = 0;
          uVar51 = 0;
          uVar52 = 0;
          dVar56 = 0.0;
          uVar59 = 0;
          uVar60 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar69 = 0;
          uVar71 = 0;
          uVar72 = 0;
          uVar73 = 0;
          uVar74 = 0;
          uVar75 = 0;
          uVar76 = 0;
          uVar77 = 0;
        }
        else {
LAB_142cb0ae9:
          FUN_14007522e(&local_1f8,&local_178);
          uVar74 = SUB84(puStack_168,0);
          uVar75 = (undefined4)((ulonglong)puStack_168 >> 0x20);
          uVar72 = SUB84(local_160,0);
          uVar73 = (undefined4)((ulonglong)local_160 >> 0x20);
          uVar69 = SUB84(dStack_158,0);
          uVar71 = (undefined4)((ulonglong)dStack_158 >> 0x20);
          uVar64 = SUB84(local_148,0);
          uVar65 = (undefined4)((ulonglong)local_148 >> 0x20);
          uVar62 = SUB84(dStack_140,0);
          uVar63 = (undefined4)((ulonglong)dStack_140 >> 0x20);
          uVar59 = SUB84(local_138,0);
          uVar60 = (undefined4)((ulonglong)local_138 >> 0x20);
          uVar43 = SUB84(local_120,0);
          uVar45 = (undefined4)((ulonglong)local_120 >> 0x20);
          uVar51 = SUB84(local_118,0);
          uVar52 = (undefined4)((ulonglong)local_118 >> 0x20);
          uVar49 = SUB84(dStack_110,0);
          uVar50 = (undefined4)((ulonglong)dStack_110 >> 0x20);
          uVar46 = SUB84(local_100,0);
          uVar47 = (undefined4)((ulonglong)local_100 >> 0x20);
          dVar56 = dStack_130;
          uVar76 = uStack_170;
          uVar77 = uStack_16c;
          dVar10 = local_108;
          dVar55 = local_128;
          dVar19 = local_150;
          dVar8 = (double)local_178;
        }
        *(float *)(puVar36 + 0x22) = (float)dVar8;
        *(float *)((longlong)puVar36 + 0x114) = (float)(double)CONCAT44(uVar77,uVar76);
        *(float *)(puVar36 + 0x23) = (float)(double)CONCAT44(uVar75,uVar74);
        *(float *)((longlong)puVar36 + 0x11c) = (float)(double)CONCAT44(uVar73,uVar72);
        *(float *)(puVar36 + 0x24) = (float)(double)CONCAT44(uVar71,uVar69);
        *(float *)((longlong)puVar36 + 0x124) = (float)dVar19;
        *(float *)(puVar36 + 0x25) = (float)(double)CONCAT44(uVar65,uVar64);
        *(float *)((longlong)puVar36 + 300) = (float)(double)CONCAT44(uVar63,uVar62);
        *(float *)(puVar36 + 0x26) = (float)(double)CONCAT44(uVar60,uVar59);
        *(float *)((longlong)puVar36 + 0x134) = (float)dVar56;
        *(float *)(puVar36 + 0x27) = (float)dVar55;
        *(float *)((longlong)puVar36 + 0x13c) = (float)(double)CONCAT44(uVar45,uVar43);
        *(float *)(puVar36 + 0x28) = (float)(double)CONCAT44(uVar52,uVar51);
        *(float *)((longlong)puVar36 + 0x144) = (float)(double)CONCAT44(uVar50,uVar49);
        *(float *)(puVar36 + 0x29) = (float)dVar10;
        *(float *)((longlong)puVar36 + 0x14c) = (float)(double)CONCAT44(uVar47,uVar46);
        *(float *)(puVar36 + 0x2a) = (float)local_1f8;
        *(float *)((longlong)puVar36 + 0x154) = (float)(double)CONCAT44(uStack_1ec,uStack_1f0);
        *(float *)(puVar36 + 0x2b) = (float)local_1e8;
        *(float *)((longlong)puVar36 + 0x15c) = (float)local_1e0;
        *(float *)(puVar36 + 0x2c) = (float)local_1d8;
        *(float *)((longlong)puVar36 + 0x164) = (float)local_1d0;
        *(float *)(puVar36 + 0x2d) = (float)local_1c8;
        *(float *)((longlong)puVar36 + 0x16c) = (float)local_1c0;
        *(float *)(puVar36 + 0x2e) = (float)local_1b8;
        *(float *)((longlong)puVar36 + 0x174) = (float)local_1b0;
        *(float *)(puVar36 + 0x2f) = (float)local_1a8;
        *(float *)((longlong)puVar36 + 0x17c) = (float)local_1a0;
        *(float *)(puVar36 + 0x30) = (float)local_198;
        *(float *)((longlong)puVar36 + 0x184) = (float)local_190;
        *(float *)(puVar36 + 0x31) = (float)local_188;
        *(float *)((longlong)puVar36 + 0x18c) = (float)local_180;
        FUN_1447fea8d(&local_278,local_2f8,&local_178);
        FUN_1447fea8d(&local_3f8,&local_1f8);
        *(float *)(puVar36 + 2) = (float)(double)local_278;
        *(float *)((longlong)puVar36 + 0x14) = (float)dStack_270;
        *(float *)(puVar36 + 3) = (float)local_268;
        *(float *)((longlong)puVar36 + 0x1c) = (float)dStack_260;
        *(float *)(puVar36 + 4) = (float)local_258;
        *(float *)((longlong)puVar36 + 0x24) = (float)uStack_250;
        *(float *)(puVar36 + 5) = (float)local_248;
        *(float *)((longlong)puVar36 + 0x2c) = (float)uStack_240;
        *(float *)(puVar36 + 6) = (float)local_238;
        *(float *)((longlong)puVar36 + 0x34) = (float)local_230;
        *(float *)(puVar36 + 7) = (float)local_228;
        *(float *)((longlong)puVar36 + 0x3c) = (float)local_220;
        *(float *)(puVar36 + 8) = (float)local_218;
        *(float *)((longlong)puVar36 + 0x44) = (float)local_210;
        *(float *)(puVar36 + 9) = (float)local_208;
        *(float *)((longlong)puVar36 + 0x4c) = (float)local_200;
        *(float *)(puVar36 + 10) = (float)local_3f8;
        *(float *)((longlong)puVar36 + 0x54) = (float)dStack_3f0;
        *(float *)(puVar36 + 0xb) = (float)local_3e8;
        *(float *)((longlong)puVar36 + 0x5c) = (float)dStack_3e0;
        *(float *)(puVar36 + 0xc) = (float)local_3d8;
        *(float *)((longlong)puVar36 + 100) = (float)local_3d0;
        *(float *)(puVar36 + 0xd) = (float)local_3c8;
        *(float *)((longlong)puVar36 + 0x6c) = (float)local_3c0;
        *(float *)(puVar36 + 0xe) = (float)local_3b8;
        *(float *)((longlong)puVar36 + 0x74) = (float)dStack_3b0;
        *(float *)(puVar36 + 0xf) = (float)local_3a8;
        *(float *)((longlong)puVar36 + 0x7c) = (float)dStack_3a0;
        *(float *)(puVar36 + 0x10) = (float)local_398;
        *(float *)((longlong)puVar36 + 0x84) = (float)local_390;
        *(float *)(puVar36 + 0x11) = (float)local_388;
        *(float *)((longlong)puVar36 + 0x8c) = (float)local_380;
        *(float *)(puVar36 + 0x12) = (float)local_2f8[0];
        *(float *)((longlong)puVar36 + 0x94) = (float)local_2f8[1];
        *(float *)(puVar36 + 0x13) = (float)local_2f8[2];
        *(float *)((longlong)puVar36 + 0x9c) = (float)local_2f8[3];
        *(float *)(puVar36 + 0x14) = (float)local_2d8;
        *(float *)((longlong)puVar36 + 0xa4) = (float)local_2d0;
        *(float *)(puVar36 + 0x15) = (float)local_2c8;
        *(float *)((longlong)puVar36 + 0xac) = (float)local_2c0;
        *(float *)(puVar36 + 0x16) = (float)local_2b8;
        *(float *)((longlong)puVar36 + 0xb4) = (float)local_2b0;
        *(float *)(puVar36 + 0x17) = (float)local_2a8;
        *(float *)((longlong)puVar36 + 0xbc) = (float)local_2a0;
        *(float *)(puVar36 + 0x18) = (float)local_298;
        *(float *)((longlong)puVar36 + 0xc4) = (float)local_290;
        *(float *)(puVar36 + 0x19) = (float)local_288;
        *(float *)((longlong)puVar36 + 0xcc) = (float)local_280;
        fVar67 = (float)local_330;
        fVar68 = (float)local_320;
        fVar70 = (float)local_318;
        *(float *)(puVar36 + 0x1a) = (float)local_378[0];
        *(float *)((longlong)puVar36 + 0xd4) = (float)local_378[1];
        *(float *)(puVar36 + 0x1b) = (float)local_378[2];
        *(float *)((longlong)puVar36 + 0xdc) = (float)local_378[3];
        *(float *)(puVar36 + 0x1c) = (float)local_358;
        *(float *)((longlong)puVar36 + 0xe4) = (float)local_350;
        *(float *)(puVar36 + 0x1d) = (float)local_348;
        *(float *)((longlong)puVar36 + 0xec) = (float)local_340;
        *(float *)(puVar36 + 0x1e) = (float)local_338;
        *(float *)((longlong)puVar36 + 0xf4) = fVar67;
        *(float *)(puVar36 + 0x1f) = (float)local_328;
        *(float *)((longlong)puVar36 + 0xfc) = fVar68;
        *(float *)(puVar36 + 0x20) = fVar70;
        *(float *)((longlong)puVar36 + 0x104) = (float)local_310;
        *(float *)(puVar36 + 0x21) = (float)local_308;
        *(float *)((longlong)puVar36 + 0x10c) = (float)local_300;
        fVar58 = SUB84(local_440,0);
        fVar61 = (float)(local_458 - local_440);
        fVar66 = (float)(local_460 - local_448);
        *(float *)(puVar36 + 0x32) = fVar66;
        *(float *)((longlong)puVar36 + 0x194) = fVar61;
        *(float *)(puVar36 + 0x33) = (float)(local_450 - local_438);
        *(float *)(puVar36 + 0x34) = (float)(local_460 + local_448);
        *(float *)((longlong)puVar36 + 0x1a4) = (float)(local_458 + local_440);
        *(float *)(puVar36 + 0x35) = (float)(local_450 + local_438);
        *(uint *)(puVar36 + 0x37) = local_470;
        puVar36[0x36] = CONCAT44(uStack_474,local_478);
        puVar36[0x38] = CONCAT44(uStack_474,local_478);
        *(uint *)(puVar36 + 0x39) = local_470;
        *(uint *)((longlong)puVar36 + 0x1cc) = (uint)(*(int *)(DAT_14c9e2538 + 4) != 0);
        *(float *)(puVar36 + 0x3a) = local_468;
        *(float *)((longlong)puVar36 + 0x1d4) = local_46c;
        dVar8 = tan((double)*(float *)(param_3 + 0x1de8) * 0.5 * 0.017453292519943295);
        puVar1 = local_5b0;
        *(float *)(puVar36 + 0x3b) = (float)dVar8;
        fVar44 = SUB84(local_148 * local_148,0);
        dVar8 = (double)puStack_168 * (double)puStack_168 + local_148 * local_148;
        fVar48 = SUB84(dVar8,0);
        dVar8 = local_128 * local_128 + dVar8;
        if (9.999999439624929e-11 < dVar8) {
          dVar8 = 1.0 / SQRT(dVar8);
          fVar44 = (float)(local_108 * dVar8);
          fVar48 = (float)(-local_128 * dVar8);
          fVar58 = (float)(-local_148 * dVar8);
          fVar61 = (float)(-(double)puStack_168 * dVar8);
        }
        *(float *)(puVar36 + 0x3c) = fVar61;
        *(float *)((longlong)puVar36 + 0x1e4) = fVar58;
        *(float *)(puVar36 + 0x3d) = fVar48;
        *(float *)((longlong)puVar36 + 0x1ec) = fVar44;
        dVar8 = local_120 - local_128;
        dVar56 = dStack_140 - local_148;
        dVar54 = local_160 - (double)puStack_168;
        fVar44 = SUB84(dVar56 * dVar56,0);
        dVar19 = dVar54 * dVar54 + dVar56 * dVar56;
        fVar48 = SUB84(dVar19,0);
        dVar19 = dVar8 * dVar8 + dVar19;
        if (9.999999439624929e-11 < dVar19) {
          dVar19 = 1.0 / SQRT(dVar19);
          fVar44 = (float)((local_100 - local_108) * dVar19);
          fVar48 = (float)(-dVar8 * dVar19);
          fVar66 = (float)(-dVar56 * dVar19);
          fVar67 = (float)(-dVar54 * dVar19);
        }
        *(float *)(puVar36 + 0x3e) = fVar67;
        *(float *)((longlong)puVar36 + 500) = fVar66;
        *(float *)(puVar36 + 0x3f) = fVar48;
        *(float *)((longlong)puVar36 + 0x1fc) = fVar44;
        dVar8 = local_120 + local_138;
        dVar56 = dStack_140 + dStack_158;
        dVar19 = local_160 + (double)local_178;
        fVar44 = SUB84(dVar19,0);
        fVar48 = SUB84(dVar56 * dVar56,0);
        dVar54 = dVar19 * dVar19 + dVar56 * dVar56;
        fVar58 = SUB84(dVar54,0);
        dVar54 = dVar8 * dVar8 + dVar54;
        fVar61 = SUB84(dVar54,0);
        if (9.999999439624929e-11 < dVar54) {
          dVar54 = 1.0 / SQRT(dVar54);
          fVar44 = SUB84(-dVar19 * dVar54,0);
          fVar48 = (float)((local_100 + local_118) * dVar54);
          fVar58 = (float)(-dVar8 * dVar54);
          fVar68 = (float)(-dVar56 * dVar54);
          fVar70 = (float)(-dVar19 * dVar54);
        }
        *(float *)(puVar36 + 0x40) = fVar70;
        *(float *)((longlong)puVar36 + 0x204) = fVar68;
        *(float *)(puVar36 + 0x41) = fVar58;
        *(float *)((longlong)puVar36 + 0x20c) = fVar48;
        dVar56 = local_120 - local_138;
        dVar54 = dStack_140 - dStack_158;
        dVar8 = local_160 - (double)local_178;
        fVar48 = SUB84(dVar54 * dVar54,0);
        dVar19 = dVar8 * dVar8 + dVar54 * dVar54;
        fVar66 = SUB84(dVar19,0);
        dVar19 = dVar56 * dVar56 + dVar19;
        if (9.999999439624929e-11 < dVar19) {
          dVar19 = 1.0 / SQRT(dVar19);
          fVar48 = (float)((local_100 - local_118) * dVar19);
          fVar66 = (float)(-dVar56 * dVar19);
          fVar44 = (float)(-dVar54 * dVar19);
          fVar58 = (float)(-dVar8 * dVar19);
        }
        *(float *)(puVar36 + 0x42) = fVar58;
        *(float *)((longlong)puVar36 + 0x214) = fVar44;
        *(float *)(puVar36 + 0x43) = fVar66;
        *(float *)((longlong)puVar36 + 0x21c) = fVar48;
        dVar8 = local_120 - dStack_130;
        fVar44 = SUB84(local_150,0);
        dVar56 = dStack_140 - local_150;
        fVar48 = SUB84(dVar56,0);
        dVar19 = local_160 - (double)CONCAT44(uStack_16c,uStack_170);
        fVar58 = SUB84(dVar56 * dVar56,0);
        dVar54 = dVar19 * dVar19 + dVar56 * dVar56;
        fVar66 = SUB84(dVar54,0);
        dVar54 = dVar8 * dVar8 + dVar54;
        if (9.999999439624929e-11 < dVar54) {
          dVar54 = 1.0 / SQRT(dVar54);
          fVar48 = SUB84(-dVar56 * dVar54,0);
          fVar58 = (float)((local_100 - dStack_110) * dVar54);
          fVar66 = (float)(-dVar8 * dVar54);
          fVar68 = (float)(-dVar56 * dVar54);
          fVar61 = (float)(-dVar19 * dVar54);
        }
        *(float *)(puVar36 + 0x44) = fVar61;
        *(float *)((longlong)puVar36 + 0x224) = fVar68;
        *(float *)(puVar36 + 0x45) = fVar66;
        *(float *)((longlong)puVar36 + 0x22c) = fVar58;
        dVar8 = local_120 + dStack_130;
        dVar19 = dStack_140 + local_150;
        dVar56 = local_160 + (double)CONCAT44(uStack_16c,uStack_170);
        fVar58 = SUB84(dVar19 * dVar19,0);
        dVar55 = dVar56 * dVar56 + dVar19 * dVar19;
        dVar54 = dVar8 * dVar8 + dVar55;
        if (9.999999439624929e-11 < dVar54) {
          dVar54 = 1.0 / SQRT(dVar54);
          fVar58 = (float)((local_100 + dStack_110) * dVar54);
          dVar55 = (double)(ulonglong)(uint)(float)(-dVar8 * dVar54);
          fVar44 = (float)(-dVar19 * dVar54);
          fVar48 = (float)(-dVar56 * dVar54);
        }
        *(float *)(puVar36 + 0x46) = fVar48;
        *(float *)((longlong)puVar36 + 0x234) = fVar44;
        *(int *)(puVar36 + 0x47) = SUB84(dVar55,0);
        *(float *)((longlong)puVar36 + 0x23c) = fVar58;
        cVar21 = *(char *)(local_598 + 0x68);
        puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar39 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x50);
          puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar39 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar39[1] = *(undefined8 *)(local_598 + 8);
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 3;
        *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
        *puVar39 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar39 + 5) = cVar21 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
        puVar39[7] = 0;
        puVar39[8] = local_598;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        puVar1 = local_5b0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar39;
        *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar36[0x48] = puVar39;
        cVar21 = *(char *)(local_570 + 0x68);
        puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar39 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x50);
          puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar39 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar39[1] = *(undefined8 *)(local_570 + 8);
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 3;
        *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
        *puVar39 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar39 + 5) = cVar21 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
        puVar39[7] = 0;
        puVar39[8] = local_570;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        puVar1 = local_5b0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar39;
        *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar36[0x49] = puVar39;
        cVar21 = *(char *)(local_578 + 0x68);
        puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar39 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x50);
          puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar39 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar39[1] = *(undefined8 *)(local_578 + 8);
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 3;
        *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
        *puVar39 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar39 + 5) = cVar21 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
        puVar39[7] = 0;
        puVar39[8] = local_578;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        puVar1 = local_5b0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar39;
        *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar36[0x4a] = puVar39;
        cVar21 = *(char *)(local_580 + 0x68);
        puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar29 = puVar39 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
          FUN_140023dd8(local_5b0,0x50);
          puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar39 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar29;
        puVar39[1] = *(undefined8 *)(local_580 + 8);
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 3;
        *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
        *puVar39 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar39 + 5) = cVar21 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
        puVar39[7] = 0;
        puVar39[8] = local_580;
        iVar23 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
          FUN_1447568fc(local_5a0,iVar23);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar39;
        *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar36[0x4b] = puVar39;
        local_178 = puVar36 + 2;
        FUN_1403f28ae();
        local_1f8 = DAT_14c9e2938;
        uVar24 = FUN_1403f2a56(param_1 + 0x1a8,local_5b0,&local_178);
        goto LAB_142cae194;
      }
    }
  }
  uVar24 = FUN_1403f21f6(param_1);
LAB_142cae194:
  *param_5 = uVar24;
  if ((local_f0 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cb1f2a FUN_142cb1f2a body=21093 status=ok
// SIG undefined FUN_142cb1f2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cb1f2a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  double *pdVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong *plVar28;
  double dVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  uint *puVar35;
  int iVar36;
  uint uVar37;
  longlong lVar38;
  undefined8 *puVar39;
  double dVar40;
  undefined4 uVar41;
  ulonglong uVar42;
  undefined8 *puVar44;
  ulonglong uVar45;
  double dVar46;
  uint uVar47;
  longlong lVar48;
  ulonglong uVar49;
  longlong lVar50;
  bool bVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_588 [32];
  undefined1 **local_568;
  longlong *local_560;
  longlong *local_558;
  ulonglong *local_550;
  longlong local_548;
  ulonglong local_540;
  longlong local_538;
  ulonglong local_530;
  undefined8 *local_528;
  longlong local_520;
  double local_518;
  double dStack_510;
  longlong *local_500;
  longlong local_4f8;
  ulonglong local_4f0;
  uint local_4e4;
  float local_4e0;
  float local_4dc;
  double local_4d8;
  undefined8 uStack_4d0;
  ulonglong local_4c0;
  longlong local_4b8;
  ulonglong local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  ulonglong local_498;
  ulonglong local_490;
  longlong local_488;
  longlong local_480;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  uint local_460;
  int local_45c;
  float local_458;
  float local_454;
  ulonglong local_450;
  longlong local_448;
  longlong local_440;
  double local_438;
  double dStack_430;
  longlong local_420;
  longlong local_418;
  ulonglong local_410;
  ulonglong local_408;
  ulonglong local_400;
  double local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  uint local_3e0;
  uint local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  double local_388;
  uint local_380;
  uint uStack_37c;
  uint local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  double local_340;
  undefined8 local_338;
  int local_330;
  undefined4 local_32c;
  longlong local_328;
  undefined8 local_320;
  undefined1 *local_314;
  undefined4 local_30c;
  undefined1 local_308 [16];
  undefined1 *local_2f8;
  undefined4 local_2f0;
  undefined1 *local_2c8;
  undefined8 uStack_2c0;
  uint local_2b8 [4];
  uint *local_2a8;
  int local_2a0;
  undefined8 local_29c;
  int local_294;
  longlong local_288;
  undefined4 local_280;
  undefined8 local_278;
  double dStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined8 local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_178;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined *local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  ulonglong local_f0;
  int6 iVar43;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_500 = param_3;
  local_4a8 = param_2;
  cVar17 = FUN_142c8d8f7(param_2);
  if (((cVar17 == '\0') || (*(int *)(DAT_14c9e25c8 + 4) == 0)) || (*(char *)(param_5 + 0xc) == '\0')
     ) {
    uVar21 = FUN_140424efc(param_1);
    *param_6 = uVar21;
    goto LAB_142cb2001;
  }
  local_2a8 = (uint *)0x0;
  local_2a0 = 0;
  local_2c8 = (undefined1 *)0x0;
  uStack_2c0 = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = 0;
  local_280 = 0;
  local_338 = 0;
  iVar36 = *(int *)(param_4 + 1);
  uVar21 = *param_4;
  local_330 = iVar36;
  if (iVar36 == 0) {
    local_32c = 0;
  }
  else {
    FUN_1471cc74c(&local_338,iVar36);
    FUN_1471cc77c(local_338,uVar21,iVar36);
  }
  plVar28 = local_500;
  local_568 = &local_2c8;
  FUN_1471b92c9(param_5,local_4a8,local_500,&local_338);
  if ((int)uStack_2c0 == local_294) {
LAB_142cb2187:
    uVar21 = FUN_140424efc(param_1);
    *param_6 = uVar21;
  }
  else {
    local_568 = (undefined1 **)&local_374;
    FUN_1471b7856(plVar28,&local_2c8,param_5,&local_370);
    if ((local_340 == 0.0) && (!NAN(local_340))) goto LAB_142cb2187;
    local_3b8 = local_370;
    uStack_3b4 = uStack_36c;
    uStack_3b0 = uStack_368;
    uStack_3ac = uStack_364;
    local_3a8 = local_360;
    uStack_3a4 = uStack_35c;
    uStack_3a0 = uStack_358;
    uStack_39c = uStack_354;
    local_398 = local_350;
    uStack_394 = uStack_34c;
    uStack_390 = uStack_348;
    uStack_38c = uStack_344;
    local_388 = local_340;
    FUN_1471b8695(&local_3b8,local_374,&local_380);
    local_518 = (double)(ulonglong)local_380;
    local_530 = (ulonglong)uStack_37c;
    local_4d8 = (double)(ulonglong)local_378;
    dVar46 = (double)CONCAT44(uStack_36c,local_370);
    dVar40 = (double)CONCAT44(uStack_364,uStack_368);
    dVar29 = (double)CONCAT44(uStack_35c,local_360);
    dVar7 = (double)CONCAT44(uStack_354,uStack_358);
    dVar8 = (double)CONCAT44(uStack_34c,local_350);
    dVar9 = (double)CONCAT44(uStack_344,uStack_348);
    uVar18 = uStack_37c * local_380 * local_378;
    uVar31 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar31 = DAT_14ca84e48;
    }
    uStack_170 = 0x10109;
    local_178._0_4_ = uVar31 + (uVar31 == 0);
    local_168 = (undefined *)0x0;
    if (DAT_14ca84e48 <= uVar18) {
      uVar18 = DAT_14ca84e48;
    }
    local_178._4_4_ = uVar18 + (uVar18 == 0);
    puVar1 = (ulonglong *)(param_1 + 0x70);
    uVar34 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar49 = uVar34 + 0x150;
    local_550 = puVar1;
    if (*(ulonglong *)(param_1 + 0x78) < uVar49) {
      FUN_140023dd8(puVar1,0x160);
      uVar34 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar49 = uVar34 + 0x150;
    }
    local_520 = param_1 + 0x188;
    *(ulonglong *)(param_1 + 0x70) = uVar49;
    FUN_1456bd266(uVar34,L"HeterogeneousVolumes.TopLevelGridBuffer",&local_178,0);
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar34;
    *(int *)(uVar34 + 0x7c) = *(int *)(param_1 + 400) + -1;
    cVar17 = *(char *)(uVar34 + 0x68);
    puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar44 + 8;
    local_540 = uVar34;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      puVar44 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar44 + 8;
    }
    local_548 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar44[1] = *(undefined8 *)(local_540 + 8);
    puVar44[2] = 0;
    *(undefined1 *)(puVar44 + 3) = 2;
    *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar44 + 5) = 0;
    *puVar44 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar44 + 6) = cVar17 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar44 + 0x31) = 0;
    puVar44[7] = local_540;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar44;
    *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar44,0xfffffff8,2);
    local_538 = param_1;
    if (0 < (int)local_500[1]) {
      local_480 = param_1 + 0x98;
      iVar19 = SUB84(local_518,0) + 3;
      iVar36 = SUB84(local_518,0) + 6;
      if (-1 < iVar19) {
        iVar36 = iVar19;
      }
      local_438 = (double)CONCAT44(local_438._4_4_,iVar36 >> 2);
      iVar19 = (int)local_530 + 3;
      iVar36 = (int)local_530 + 6;
      if (-1 < iVar19) {
        iVar36 = iVar19;
      }
      local_4dc = (float)(iVar36 >> 2);
      iVar19 = SUB84(local_4d8,0) + 3;
      iVar36 = SUB84(local_4d8,0) + 6;
      if (-1 < iVar19) {
        iVar36 = iVar19;
      }
      local_4e0 = (float)(iVar36 >> 2);
      lVar48 = 0;
      iVar36 = local_2a0;
      do {
        local_528 = (undefined8 *)(lVar48 * 0x13c10 + *local_500);
        local_488 = lVar48;
        if (iVar36 == 0) {
          uVar34 = 1;
          uVar49 = 0;
          iVar19 = 0;
          iVar30 = 0;
        }
        else {
          puVar35 = local_2a8;
          if (local_2a8 == (uint *)0x0) {
            puVar35 = local_2b8;
          }
          uVar18 = *puVar35;
          if (uVar18 == 0) {
            iVar19 = iVar36 + 0x1e;
            if (-1 < iVar36 + -1) {
              iVar19 = iVar36 + -1;
            }
            uVar49 = 0;
            uVar34 = (ulonglong)(uint)(iVar19 >> 5);
            if (iVar19 >> 5 < 1) {
              uVar34 = uVar49;
            }
            iVar19 = 0;
            do {
              if (uVar34 == uVar49) goto LAB_142cb2a57;
              iVar19 = iVar19 + 0x20;
              uVar18 = puVar35[uVar49 + 1];
              uVar49 = uVar49 + 1;
            } while (uVar18 == 0);
          }
          else {
            uVar49 = 0;
            iVar19 = 0;
          }
          uVar34 = (ulonglong)(-uVar18 & uVar18);
          uVar45 = uVar34 * 2 + 1;
          lVar48 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar48 == 0; lVar48 = lVar48 + -1) {
            }
          }
          iVar30 = (iVar19 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
          if (iVar36 <= iVar30) {
            iVar30 = iVar36;
          }
        }
        if (iVar30 != iVar36) {
          uVar18 = 0xffffffff;
          do {
            lVar48 = *(longlong *)(local_2c8 + (longlong)iVar30 * 0x18);
            iVar30 = *(int *)(lVar48 + 0xb0);
            if (0 < iVar30) {
              local_4a0 = CONCAT44(local_4a0._4_4_,uVar18);
              local_4b8 = CONCAT44(local_4b8._4_4_,iVar19);
              lVar50 = 0x38;
              lVar38 = 0;
              local_4f0 = uVar49;
              do {
                lVar23 = *(longlong *)(lVar48 + 0xa8);
                if (*(longlong *)(lVar48 + 0xa8) == 0) {
                  lVar23 = lVar48;
                }
                plVar28 = *(longlong **)(lVar23 + lVar50);
                if (plVar28 != (longlong *)0x0) {
                  pdVar22 = (double *)(**(code **)(*plVar28 + 0x10))(plVar28);
                  puVar1 = local_550;
                  puVar44 = (undefined8 *)
                            (*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar25 = puVar44 + 0x12;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0xa0);
                    puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar25 = puVar44 + 0x12;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar25;
                  *puVar44 = &PTR_FUN_14a240938;
                  puVar44[2] = 0;
                  *(undefined1 *)(puVar44 + 3) = 1;
                  puVar44[0x11] = 0;
                  iVar36 = *(int *)(param_1 + 0xa0);
                  *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
                  if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
                    FUN_1448cfae8(local_480,iVar36);
                  }
                  *(undefined8 **)(*(longlong *)(local_538 + 0x98) + (longlong)iVar36 * 8) = puVar44
                  ;
                  lVar23 = FUN_1447e4f80();
                  cVar17 = *(char *)(lVar23 + 0x41);
                  if (*(char *)(lVar23 + 0x41) == '\x03') {
                    cVar17 = '\x02';
                  }
                  puVar44[2] = local_528[3];
                  *(char *)(puVar44 + 3) = cVar17;
                  *(int *)(puVar44 + 4) = SUB84(local_518,0);
                  *(int *)((longlong)puVar44 + 0x24) = (int)local_530;
                  *(int *)(puVar44 + 5) = SUB84(local_4d8,0);
                  *(float *)(puVar44 + 6) = (float)(dVar46 - dVar7);
                  *(float *)((longlong)puVar44 + 0x34) = (float)(dVar40 - dVar8);
                  *(float *)(puVar44 + 7) = (float)(dVar29 - dVar9);
                  *(float *)(puVar44 + 8) = (float)(dVar46 + dVar7);
                  *(float *)((longlong)puVar44 + 0x44) = (float)(dVar40 + dVar8);
                  *(float *)(puVar44 + 9) = (float)(dVar29 + dVar9);
                  dVar3 = pdVar22[2];
                  dVar4 = pdVar22[5];
                  dVar5 = pdVar22[1];
                  dVar6 = pdVar22[4];
                  *(float *)(puVar44 + 10) = (float)(*pdVar22 - pdVar22[3]);
                  *(float *)((longlong)puVar44 + 0x54) = (float)(dVar5 - dVar6);
                  *(float *)(puVar44 + 0xb) = (float)(dVar3 - dVar4);
                  dVar3 = pdVar22[2];
                  dVar4 = pdVar22[5];
                  dVar5 = pdVar22[1];
                  dVar6 = pdVar22[4];
                  *(float *)(puVar44 + 0xc) = (float)(*pdVar22 + pdVar22[3]);
                  *(float *)((longlong)puVar44 + 100) = (float)(dVar5 + dVar6);
                  *(float *)(puVar44 + 0xd) = (float)(dVar3 + dVar4);
                  *(undefined4 *)((longlong)puVar44 + 0x6c) = *(undefined4 *)(param_5 + 4);
                  *(undefined4 *)(puVar44 + 0xe) = *(undefined4 *)(param_5 + 8);
                  fVar53 = *(float *)(DAT_14c9e2688 + 4);
                  if (fVar53 <= 0.01) {
                    fVar53 = 0.01;
                  }
                  fVar52 = (float)(**(code **)(*plVar28 + 0x40))(plVar28);
                  param_1 = local_538;
                  puVar1 = local_550;
                  if (fVar52 <= fVar53) {
                    fVar52 = fVar53;
                  }
                  *(float *)((longlong)puVar44 + 0x74) = fVar52;
                  fVar53 = *(float *)(DAT_14c9e26a0 + 4);
                  if (fVar53 <= 0.01) {
                    fVar53 = 0.01;
                  }
                  *(float *)(puVar44 + 0xf) = fVar53;
                  fVar53 = *(float *)(DAT_14c9de1a8 + 4);
                  if (8.0 <= fVar53) {
                    fVar53 = 8.0;
                  }
                  if (fVar53 <= 1.0) {
                    fVar53 = 1.0;
                  }
                  *(float *)((longlong)puVar44 + 0x7c) = (float)(int)fVar53;
                  *(uint *)(puVar44 + 0x10) = (uint)*(byte *)(param_5 + 0xe);
                  cVar17 = *(char *)(local_540 + 0x68);
                  puVar39 = (undefined8 *)
                            (*(longlong *)(local_538 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 8;
                  if (*(undefined8 **)(local_538 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x48);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 8;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_540 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 2;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar39 + 5) = 0;
                  *puVar39 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
                  puVar39[7] = local_540;
                  iVar36 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  puVar44[0x11] = puVar39;
                  uVar21 = local_528[0x2703];
                  FUN_145f47c04();
                  FUN_1448e935e(uVar21,&local_178,&DAT_14c9e2d08,0);
                  FUN_145f47c04();
                  local_1f8 = (undefined1 *)CONCAT44(local_178._4_4_,(int)local_178);
                  uStack_1f0 = uStack_170;
                  uStack_1ec = uStack_16c;
                  local_278 = (undefined1 *)CONCAT44(local_4dc,SUB84(local_438,0));
                  dStack_270 = (double)CONCAT44(dStack_270._4_4_,local_4e0);
                  local_568 = (undefined1 **)&local_278;
                  FUN_1471b879e(param_1,&local_178,&local_1f8);
                  iVar30 = *(int *)(lVar48 + 0xb0);
                }
                lVar38 = lVar38 + 1;
                lVar50 = lVar50 + 0xa8;
              } while (lVar38 < iVar30);
              uVar49 = local_4f0;
              iVar36 = local_2a0;
              uVar18 = (uint)local_4a0;
              iVar19 = (uint)local_4b8;
            }
            uVar18 = uVar18 & ~(uint)uVar34;
            puVar35 = local_2a8;
            if (local_2a8 == (uint *)0x0) {
              puVar35 = local_2b8;
            }
            iVar30 = (int)uVar49;
            lVar48 = (longlong)iVar30;
            uVar31 = puVar35[lVar48] & uVar18;
            if (uVar31 == 0) {
              iVar32 = iVar36 + 0x1e;
              if (-1 < iVar36 + -1) {
                iVar32 = iVar36 + -1;
              }
              iVar32 = iVar32 >> 5;
              iVar33 = iVar32;
              if (iVar32 < iVar30) {
                iVar33 = iVar30;
              }
              if (iVar32 <= iVar30) break;
              lVar38 = 0;
              while( true ) {
                iVar19 = iVar19 + 0x20;
                uVar31 = puVar35[lVar48 + lVar38 + 1];
                if (uVar31 != 0) break;
                lVar38 = lVar38 + 1;
                if (iVar33 - lVar48 == lVar38) goto LAB_142cb2a57;
              }
              uVar49 = (ulonglong)(iVar30 + (int)lVar38 + 1);
              uVar18 = 0xffffffff;
            }
            uVar34 = (ulonglong)(-uVar31 & uVar31);
            uVar45 = uVar34 * 2 + 1;
            lVar48 = 0x3f;
            if (uVar45 != 0) {
              for (; uVar45 >> lVar48 == 0; lVar48 = lVar48 + -1) {
              }
            }
            iVar30 = (iVar19 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
          } while (iVar30 < iVar36);
        }
LAB_142cb2a57:
        lVar48 = local_488 + 1;
      } while (lVar48 < (int)local_500[1]);
      local_518 = (double)(ulonglong)local_380;
      local_530 = (ulonglong)uStack_37c;
      local_4d8 = (double)(ulonglong)local_378;
    }
    puVar1 = local_550;
    dVar46 = (double)CONCAT44(uStack_36c,local_370);
    dVar40 = (double)CONCAT44(uStack_364,uStack_368);
    dVar29 = (double)CONCAT44(uStack_35c,local_360);
    dVar7 = (double)CONCAT44(uStack_354,uStack_358);
    dVar8 = (double)CONCAT44(uStack_34c,local_350);
    uVar31 = SUB84(local_518,0) * (int)local_530 * SUB84(local_4d8,0) * 0x40;
    uVar18 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar18 = DAT_14ca84e48;
    }
    dVar9 = (double)CONCAT44(uStack_344,uStack_348);
    local_178._0_4_ = uVar18 + (uVar18 == 0);
    uStack_170 = 0x10109;
    uVar18 = DAT_14ca84e48;
    if (uVar31 < DAT_14ca84e48) {
      uVar18 = uVar31;
    }
    local_168 = (undefined *)0x0;
    local_178._4_4_ = uVar18 + (uVar18 == 0);
    uVar34 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar49 = uVar34 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar49) {
      FUN_140023dd8(local_550,0x160);
      uVar34 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar49 = uVar34 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar49;
    FUN_1456bd266(uVar34,L"HeterogeneousVolumes.OrthoGrid.IndirectionGridBuffer",&local_178,0);
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar34;
    *(int *)(uVar34 + 0x7c) = *(int *)(param_1 + 400) + -1;
    cVar17 = *(char *)(uVar34 + 0x68);
    puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar44 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      puVar44 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar44 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar44[1] = *(undefined8 *)(uVar34 + 8);
    puVar44[2] = 0;
    *(undefined1 *)(puVar44 + 3) = 2;
    *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar44 + 5) = 0;
    *puVar44 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar44 + 6) = cVar17 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar44 + 0x31) = 0;
    puVar44[7] = uVar34;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar44;
    *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar44,0xfffffff8,2);
    puVar1 = local_550;
    uStack_170 = 0x4109;
    uVar18 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar18 = DAT_14ca84e48;
    }
    local_168 = (undefined *)0x0;
    local_178._0_4_ = uVar18 + (uVar18 == 0);
    local_178._4_4_ = 2 - (uint)(DAT_14ca84e48 < 2);
    uVar45 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar49 = uVar45 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar49) {
      FUN_140023dd8(local_550,0x160);
      uVar45 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar49 = uVar45 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar49;
    FUN_1456bd266(uVar45,L"HeterogeneousVolume.OrthoGrid.IndirectionGridAllocatorBuffer",&local_178,
                  0);
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar45;
    *(int *)(uVar45 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar44 + 8;
    local_4c0 = uVar34;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      puVar44 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar44 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar44[1] = *(undefined8 *)(uVar45 + 8);
    puVar44[2] = 0;
    *(undefined1 *)(puVar44 + 3) = 2;
    *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar44 + 5) = 0;
    *puVar44 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar44 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar44 + 0x32) = 0;
    puVar44[7] = uVar45;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar44;
    *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar44,0,2);
    puVar1 = local_550;
    puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar25 = puVar44 + 0x10;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x90);
      puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar25 = puVar44 + 0x10;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    *puVar44 = &PTR_FUN_14a240958;
    puVar44[2] = 0;
    *(undefined1 *)(puVar44 + 3) = 1;
    local_4f8 = param_1 + 0x98;
    puVar44[0xb] = 0;
    puVar44[0xc] = 0;
    puVar44[0xe] = 0;
    puVar44[0xf] = 0;
    iVar36 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
      FUN_1448cfae8(local_4f8,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar36 * 8) = puVar44;
    iVar36 = SUB84(local_518,0);
    *(int *)(puVar44 + 4) = iVar36;
    *(int *)((longlong)puVar44 + 0x24) = (int)local_530;
    *(int *)(puVar44 + 5) = SUB84(local_4d8,0);
    *(float *)(puVar44 + 6) = (float)(dVar46 - dVar7);
    *(float *)((longlong)puVar44 + 0x34) = (float)(dVar40 - dVar8);
    *(float *)(puVar44 + 7) = (float)(dVar29 - dVar9);
    *(float *)(puVar44 + 8) = (float)(dVar46 + dVar7);
    *(float *)((longlong)puVar44 + 0x44) = (float)(dVar40 + dVar8);
    *(float *)(puVar44 + 9) = (float)(dVar29 + dVar9);
    iVar19 = 4;
    if (*(int *)(DAT_14c9e2658 + 4) < 4) {
      iVar19 = *(int *)(DAT_14c9e2658 + 4);
    }
    iVar30 = 1;
    if (1 < iVar19) {
      iVar30 = iVar19;
    }
    *(int *)((longlong)puVar44 + 0x4c) = iVar30;
    *(undefined4 *)(puVar44 + 10) = 0;
    cVar17 = *(char *)(local_540 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      iVar36 = SUB84(local_518,0);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(local_540 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 2;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar39 + 5) = 0;
    *puVar39 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
    puVar39[7] = local_540;
    iVar19 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar19 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar19 + 1U) {
      FUN_1447568fc(local_548,iVar19);
      iVar36 = SUB84(local_518,0);
    }
    uVar49 = local_4c0;
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar19 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[0xb] = puVar39;
    *(uint *)(puVar44 + 0xd) = uVar31;
    cVar17 = *(char *)(local_4c0 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      iVar36 = SUB84(local_518,0);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(uVar49 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 2;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar39 + 5) = 0;
    *puVar39 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
    puVar39[7] = uVar49;
    iVar19 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar19 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar19 + 1U) {
      FUN_1447568fc(local_548,iVar19);
      iVar36 = SUB84(local_518,0);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar19 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[0xe] = puVar39;
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      iVar36 = SUB84(local_518,0);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 8;
    }
    local_528 = puVar44 + 2;
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(uVar45 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 2;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar39 + 5) = 0;
    *puVar39 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar39 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar39 + 0x32) = 0;
    puVar39[7] = uVar45;
    iVar19 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar19 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar19 + 1U) {
      FUN_1447568fc(local_548,iVar19);
      iVar36 = SUB84(local_518,0);
    }
    lVar48 = local_4a8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar19 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    iVar19 = iVar36 + 6;
    if (-1 < iVar36 + 3) {
      iVar19 = iVar36 + 3;
    }
    iVar30 = (int)local_530 + 3;
    iVar36 = (int)local_530 + 6;
    if (-1 < iVar30) {
      iVar36 = iVar30;
    }
    iVar32 = SUB84(local_4d8,0) + 3;
    iVar30 = SUB84(local_4d8,0) + 6;
    if (-1 < iVar32) {
      iVar30 = iVar32;
    }
    puVar44[0xf] = puVar39;
    uVar21 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_4a8 + 8) * 2) * 8);
    iVar32 = *(int *)(DAT_14c9e2700 + 4);
    FUN_145f481fa();
    FUN_1448e935e(uVar21,&local_178,&DAT_14c9e2e30,iVar32 != 0);
    FUN_145f481fa();
    local_1f8 = (undefined1 *)CONCAT44(local_178._4_4_,(int)local_178);
    uStack_1f0 = uStack_170;
    uStack_1ec = uStack_16c;
    local_568 = (undefined1 **)&local_178;
    local_178._0_4_ = iVar19 >> 2;
    local_178._4_4_ = iVar36 >> 2;
    uStack_170 = iVar30 >> 2;
    FUN_1471b8850(param_1,&local_278,&local_1f8,local_528);
    local_3d0 = local_378;
    local_558 = &local_3c8;
    local_560 = &local_3c0;
    local_568 = (undefined1 **)local_540;
    FUN_142cad97c(param_1,lVar48,*(int *)(DAT_14c9e2700 + 4) != 0);
    puVar1 = local_550;
    local_3e0 = local_378;
    local_3e8 = CONCAT44(uStack_37c,local_380);
    dVar46 = (double)CONCAT44(uStack_36c,local_370);
    dVar40 = (double)CONCAT44(uStack_364,uStack_368);
    dVar29 = (double)CONCAT44(uStack_35c,local_360);
    dVar7 = (double)CONCAT44(uStack_354,uStack_358);
    dVar8 = (double)CONCAT44(uStack_34c,local_350);
    dVar9 = (double)CONCAT44(uStack_344,uStack_348);
    local_448 = local_3c8;
    local_440 = local_3c0;
    local_460 = (uint)*(byte *)(param_5 + 0xf);
    local_168 = (undefined *)0x0;
    uVar18 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar18 = DAT_14ca84e48;
    }
    local_178._0_4_ = uVar18 + (uVar18 == 0);
    local_178._4_4_ = 1;
    uStack_170 = 0x4189;
    uVar34 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar49 = uVar34 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar49) {
      FUN_140023dd8(local_550,0x160);
      uVar34 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar49 = uVar34 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar49;
    FUN_1456bd266(uVar34,L"HeterogeneousVolume.RasterizeBottomLevelGridIndirectArgs",&local_178,0);
    uVar49 = local_4c0;
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar34;
    *(int *)(uVar34 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar25 = puVar44 + 6;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x40);
      puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar25 = puVar44 + 6;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    *puVar44 = &PTR_FUN_14a2409b8;
    puVar44[4] = 0;
    puVar44[5] = 0;
    iVar36 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
    local_450 = uVar34;
    if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
      FUN_1448cfae8(local_4f8,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar36 * 8) = puVar44;
    *(undefined4 *)(puVar44 + 3) = DAT_14ca84f2c;
    puVar44[2] = _DAT_14ca84f24;
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(local_448 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar39 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = local_448;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[4] = puVar39;
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(local_450 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 2;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar39 + 5) = 0;
    *puVar39 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar39 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar39 + 0x32) = 0;
    puVar39[7] = local_450;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[5] = puVar39;
    FUN_1471b8cde(*(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_4a8 + 8) * 2) *
                   8),local_308);
    local_568 = &local_314;
    local_314 = &DAT_100000001;
    local_30c = 1;
    FUN_1471b8d4b(param_1,&local_178,local_308,puVar44 + 2);
    puVar1 = local_550;
    iVar36 = *(int *)(DAT_14c9e2610 + 4);
    if (iVar36 < 2) {
      iVar36 = 1;
    }
    local_4e4 = (uint)((double)iVar36 * 1000000.0 * 0.125);
    uVar18 = 8;
    if (DAT_14ca84e48 < 8) {
      uVar18 = DAT_14ca84e48;
    }
    local_178._0_4_ = uVar18 + (uVar18 == 0);
    uStack_170 = 0x10109;
    uVar18 = DAT_14ca84e48;
    if (local_4e4 < DAT_14ca84e48) {
      uVar18 = local_4e4;
    }
    local_168 = (undefined *)0x0;
    local_178._4_4_ = uVar18 + (uVar18 == 0);
    uVar45 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar34 = uVar45 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar34) {
      FUN_140023dd8(local_550,0x160);
      uVar45 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar34 = uVar45 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar34;
    FUN_1456bd266(uVar45,L"HeterogeneousVolumes.OrthoGrid.ExtinctionGridBuffer",&local_178,0);
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar45;
    *(int *)(uVar45 + 0x7c) = *(int *)(param_1 + 400) + -1;
    uVar18 = 8;
    if (DAT_14ca84e48 < 8) {
      uVar18 = DAT_14ca84e48;
    }
    local_178._0_4_ = uVar18 + (uVar18 == 0);
    uStack_170 = 0x10109;
    uVar18 = DAT_14ca84e48;
    if (local_4e4 < DAT_14ca84e48) {
      uVar18 = local_4e4;
    }
    local_168 = (undefined *)0x0;
    local_178._4_4_ = uVar18 + (uVar18 == 0);
    uVar42 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar34 = uVar42 + 0x150;
    local_4b0 = uVar45;
    if (*(ulonglong *)(param_1 + 0x78) < uVar34) {
      FUN_140023dd8(local_550,0x160);
      uVar42 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar34 = uVar42 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar34;
    FUN_1456bd266(uVar42,L"HeterogeneousVolumes.OrthoGrid.EmissionGridBuffer",&local_178,0);
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar42;
    *(int *)(uVar42 + 0x7c) = *(int *)(param_1 + 400) + -1;
    uVar18 = 8;
    if (DAT_14ca84e48 < 8) {
      uVar18 = DAT_14ca84e48;
    }
    local_178._0_4_ = uVar18 + (uVar18 == 0);
    uStack_170 = 0x10109;
    uVar18 = DAT_14ca84e48;
    if (local_4e4 < DAT_14ca84e48) {
      uVar18 = local_4e4;
    }
    local_168 = (undefined *)0x0;
    local_178._4_4_ = uVar18 + (uVar18 == 0);
    uVar45 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar34 = uVar45 + 0x150;
    local_490 = uVar42;
    if (*(ulonglong *)(param_1 + 0x78) < uVar34) {
      FUN_140023dd8(local_550,0x160);
      uVar45 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar34 = uVar45 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar34;
    FUN_1456bd266(uVar45,L"HeterogeneousVolumes.OrthoGrid.ScatteringGridBuffer",&local_178,0);
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar45;
    *(int *)(uVar45 + 0x7c) = *(int *)(param_1 + 400) + -1;
    uStack_170 = 0x4109;
    uVar18 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar18 = DAT_14ca84e48;
    }
    local_168 = (undefined *)0x0;
    local_178._0_4_ = uVar18 + (uVar18 == 0);
    local_178._4_4_ = 2 - (uint)(DAT_14ca84e48 < 2);
    uVar42 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar34 = uVar42 + 0x150;
    local_498 = uVar45;
    if (*(ulonglong *)(param_1 + 0x78) < uVar34) {
      FUN_140023dd8(local_550,0x160);
      uVar42 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar34 = uVar42 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar34;
    FUN_1456bd266(uVar42,L"HeterogeneousVolume.OrthoGrid.BottomLevelGridAllocatorBuffer",&local_178,
                  0);
    iVar36 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
      FUN_144737178(local_520,iVar36);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar42;
    *(int *)(uVar42 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar44 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x48);
      puVar44 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar44 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar44[1] = *(undefined8 *)(uVar42 + 8);
    puVar44[2] = 0;
    *(undefined1 *)(puVar44 + 3) = 2;
    *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar44 + 5) = 0;
    *puVar44 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar44 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar44 + 0x32) = 0;
    puVar44[7] = uVar42;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    local_410 = uVar42;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar44;
    *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar44,0);
    if (0 < (int)local_500[1]) {
      local_418 = param_1 + 0x168;
      local_464 = (float)(dVar29 - dVar9);
      local_468 = (float)(dVar40 - dVar8);
      local_46c = (float)(dVar46 - dVar7);
      local_470 = (float)(dVar29 + dVar9);
      local_474 = (float)(dVar40 + dVar8);
      local_478 = (float)(dVar46 + dVar7);
      lVar48 = 0;
      iVar36 = local_2a0;
      do {
        lVar38 = lVar48 * 0x13c10 + *local_500;
        uVar45 = 0;
        uVar34 = 1;
        iVar19 = 0;
        iVar30 = 0;
        local_420 = lVar48;
        if (iVar36 != 0) {
          puVar35 = local_2a8;
          if (local_2a8 == (uint *)0x0) {
            puVar35 = local_2b8;
          }
          uVar18 = *puVar35;
          if (uVar18 == 0) {
            iVar19 = iVar36 + 0x1e;
            if (-1 < iVar36 + -1) {
              iVar19 = iVar36 + -1;
            }
            uVar45 = 0;
            uVar34 = (ulonglong)(uint)(iVar19 >> 5);
            if (iVar19 >> 5 < 1) {
              uVar34 = 0;
            }
            iVar19 = 0;
            do {
              if (uVar34 == uVar45) goto LAB_142cb3ad4;
              iVar19 = iVar19 + 0x20;
              uVar18 = puVar35[uVar45 + 1];
              uVar45 = uVar45 + 1;
            } while (uVar18 == 0);
          }
          else {
            uVar45 = 0;
          }
          uVar34 = (ulonglong)(-uVar18 & uVar18);
          uVar42 = uVar34 * 2 + 1;
          lVar48 = 0x3f;
          if (uVar42 != 0) {
            for (; uVar42 >> lVar48 == 0; lVar48 = lVar48 + -1) {
            }
          }
          iVar30 = (iVar19 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
          if (iVar36 <= iVar30) {
            iVar30 = iVar36;
          }
        }
        if (iVar30 != iVar36) {
          uVar18 = 0xffffffff;
          local_4b8 = lVar38;
          do {
            local_528 = (undefined8 *)CONCAT44(local_528._4_4_,uVar18);
            lVar48 = *(longlong *)(local_2c8 + (longlong)iVar30 * 0x18);
            local_4f0 = *(ulonglong *)(local_2c8 + (longlong)iVar30 * 0x18 + 8);
            local_320 = *(undefined8 *)(lVar48 + 0xc0);
            cVar17 = FUN_1404d4df8(lVar48,local_4f0,*(undefined4 *)(lVar38 + 0x3090));
            if ((cVar17 != '\0') && (iVar36 = *(int *)(lVar48 + 0xb0), 0 < iVar36)) {
              lVar50 = 0;
              local_45c = iVar19;
              local_408 = uVar34;
              local_400 = uVar45;
              do {
                lVar23 = *(longlong *)(lVar48 + 0xa8);
                if (*(longlong *)(lVar48 + 0xa8) == 0) {
                  lVar23 = lVar48;
                }
                plVar28 = *(longlong **)(lVar23 + 0x38 + lVar50 * 0xa8);
                if (plVar28 != (longlong *)0x0) {
                  local_530 = CONCAT44(local_530._4_4_,
                                       *(undefined4 *)(*(longlong *)(local_4f0 + 0x218) + 0x158));
                  local_438 = *(double *)(local_4f0 + 0x1b8);
                  dStack_430 = *(double *)(local_4f0 + 0x1c0);
                  local_3f8 = *(double *)(local_4f0 + 0x1c8);
                  uStack_3f0 = 0;
                  local_518 = *(double *)(local_4f0 + 0x1d0);
                  dStack_510 = *(double *)(local_4f0 + 0x1d8);
                  local_4d8 = *(double *)(local_4f0 + 0x1e0);
                  uStack_4d0 = 0;
                  dVar46 = *(double *)(local_4f0 + 0x180);
                  dVar40 = *(double *)(local_4f0 + 0x188);
                  dVar29 = *(double *)(local_4f0 + 400);
                  dVar7 = *(double *)(local_4f0 + 0x198);
                  dVar8 = *(double *)(local_4f0 + 0x1a0);
                  dVar9 = *(double *)(local_4f0 + 0x1a8);
                  local_4a0 = FUN_1449cbe5c(local_320,*(undefined4 *)(lVar38 + 0x3090),&local_320);
                  puVar1 = local_550;
                  puVar44 = (undefined8 *)
                            (*(longlong *)(local_538 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar25 = puVar44 + 0x3a;
                  if (*(undefined8 **)(local_538 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x1e0);
                    puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar25 = puVar44 + 0x3a;
                  }
                  *(undefined8 **)(local_538 + 0x70) = puVar25;
                  *puVar44 = &PTR_FUN_14a240a08;
                  puVar44[2] = 0;
                  *(undefined1 *)(puVar44 + 3) = 1;
                  puVar44[4] = 0;
                  *(undefined1 *)(puVar44 + 5) = 1;
                  puVar44[6] = 0;
                  puVar44[0x26] = 0;
                  *(undefined1 *)(puVar44 + 0x27) = 1;
                  puVar44[0x29] = 0;
                  puVar44[0x2a] = 0;
                  puVar44[0x2b] = 0;
                  *(undefined4 *)(puVar44 + 0x2c) = 4;
                  puVar44[0x2d] = 0;
                  puVar44[0x2e] = 0;
                  puVar44[0x2f] = 0;
                  puVar44[0x30] = 0;
                  puVar44[0x31] = 0;
                  puVar44[0x32] = 0;
                  puVar44[0x34] = 0;
                  puVar44[0x35] = 0;
                  puVar44[0x36] = 0;
                  puVar44[0x37] = 0;
                  iVar36 = *(int *)(local_538 + 0xa0);
                  *(uint *)(local_538 + 0xa0) = iVar36 + 1U;
                  if (*(uint *)(local_538 + 0xa4) < iVar36 + 1U) {
                    FUN_1448cfae8(local_4f8,iVar36);
                  }
                  lVar38 = local_538;
                  *(undefined8 **)(*(longlong *)(local_538 + 0x98) + (longlong)iVar36 * 8) = puVar44
                  ;
                  lVar24 = FUN_1447e4f80();
                  lVar23 = local_4b8;
                  cVar17 = *(char *)(lVar24 + 0x41);
                  if (*(char *)(lVar24 + 0x41) == '\x03') {
                    cVar17 = '\x02';
                  }
                  puVar44[2] = *(undefined8 *)(local_4b8 + 0x18);
                  *(char *)(puVar44 + 3) = cVar17;
                  uVar21 = (**(code **)(**(longlong **)(*(longlong *)(local_4b8 + 8) + 0x178) + 8))
                                     ();
                  uVar21 = FUN_1448c569e(uVar21,lVar38);
                  if (*(int *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x110) < DAT_14ca4b328) {
                    FUN_144b3d300(&DAT_14ca4b328);
                    if (DAT_14ca4b328 == -1) {
                      DAT_14ca4b320 = FUN_145900d44();
                      _Init_thread_footer(&DAT_14ca4b328);
                    }
                  }
                  cVar17 = *(char *)(DAT_14ca4b320 + 0x41);
                  if (cVar17 == '\x03') {
                    cVar17 = '\x02';
                  }
                  puVar44[4] = uVar21;
                  *(char *)(puVar44 + 5) = cVar17;
                  plVar27 = *(longlong **)(lVar23 + 0x30d8);
                  if ((plVar27 == (longlong *)0x0) || ((*(byte *)(plVar27 + 1) & 2) == 0)) {
                    local_178._0_4_ = 0x3f800000;
                    local_178._4_4_ = 0x3f800000;
                    uStack_170 = 0x3f800000;
                    uStack_16c = 0x3f800000;
                    local_560 = &local_178;
                    local_568 = (undefined1 **)CONCAT44(local_568._4_4_,1);
                    lVar38 = FUN_1449cc94d(local_538,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
                  }
                  else {
                    if (*(code **)(*plVar27 + 0x80) == (code *)&LAB_144b15db6) {
                      lVar38 = plVar27[(ulonglong)*(uint *)(plVar27 + 0xcd) + 0xd1];
                    }
                    else {
                      lVar38 = (**(code **)(*plVar27 + 0x80))();
                    }
                    local_178._0_4_ = (int)lVar38;
                    local_178._4_4_ = (int)((ulonglong)lVar38 >> 0x20);
                    if (lVar38 != 0) {
                      LOCK();
                      *(int *)(lVar38 + 8) = *(int *)(lVar38 + 8) + 1;
                      UNLOCK();
                    }
                    lVar38 = FUN_144735dd8(local_538,&local_178,1);
                    puVar25 = (undefined8 *)CONCAT44(local_178._4_4_,(int)local_178);
                    if (puVar25 != (undefined8 *)0x0) {
                      LOCK();
                      piVar2 = (int *)(puVar25 + 1);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)*puVar25)(puVar25,1);
                      }
                    }
                  }
                  lVar23 = local_538;
                  puVar1 = local_550;
                  cVar17 = *(char *)(lVar38 + 0x68);
                  puVar39 = (undefined8 *)
                            (*(longlong *)(local_538 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 9;
                  if (*(undefined8 **)(local_538 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x50);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 9;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(lVar38 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 3;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *puVar39 = &PTR_FUN_14a1fb168;
                  *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
                  *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
                  puVar39[7] = 0;
                  puVar39[8] = lVar38;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[6] = puVar39;
                  local_4dc = (float)(dVar29 - dVar9);
                  local_4e0 = (float)(dVar40 - dVar8);
                  fVar53 = (float)(dVar46 - dVar7);
                  local_480 = CONCAT44(local_480._4_4_,fVar53);
                  *(float *)(puVar44 + 8) = fVar53;
                  *(float *)((longlong)puVar44 + 0x44) = local_4e0;
                  *(float *)(puVar44 + 9) = local_4dc;
                  fVar53 = (float)(dVar29 + dVar9);
                  local_454 = (float)(dVar40 + dVar8);
                  local_458 = (float)(dVar46 + dVar7);
                  *(float *)(puVar44 + 10) = local_458;
                  *(float *)((longlong)puVar44 + 0x54) = local_454;
                  local_488 = CONCAT44(local_488._4_4_,fVar53);
                  *(float *)(puVar44 + 0xb) = fVar53;
                  puVar25 = (undefined8 *)(**(code **)(*plVar28 + 0x28))(plVar28);
                  puVar39 = &local_178;
                  for (lVar38 = 0x10; lVar38 != 0; lVar38 = lVar38 + -1) {
                    *puVar39 = *puVar25;
                    puVar25 = puVar25 + 1;
                    puVar39 = puVar39 + 1;
                  }
                  puVar25 = (undefined8 *)(**(code **)(*plVar28 + 0x20))(plVar28);
                  puVar39 = &local_1f8;
                  for (lVar38 = 0x10; lVar38 != 0; lVar38 = lVar38 + -1) {
                    *puVar39 = *puVar25;
                    puVar25 = puVar25 + 1;
                    puVar39 = puVar39 + 1;
                  }
                  FUN_1447fea8d(&local_278,&local_178);
                  *(float *)(puVar44 + 0xc) = (float)(double)local_278;
                  *(float *)((longlong)puVar44 + 100) = (float)dStack_270;
                  *(float *)(puVar44 + 0xd) = (float)local_268;
                  *(float *)((longlong)puVar44 + 0x6c) = (float)uStack_260;
                  *(float *)(puVar44 + 0xe) = (float)local_258;
                  *(float *)((longlong)puVar44 + 0x74) = (float)uStack_250;
                  *(float *)(puVar44 + 0xf) = (float)local_248;
                  *(float *)((longlong)puVar44 + 0x7c) = (float)uStack_240;
                  *(float *)(puVar44 + 0x10) = (float)local_238;
                  *(float *)((longlong)puVar44 + 0x84) = (float)dStack_230;
                  *(float *)(puVar44 + 0x11) = (float)local_228;
                  *(float *)((longlong)puVar44 + 0x8c) = (float)local_220;
                  *(float *)(puVar44 + 0x12) = (float)local_218;
                  *(float *)((longlong)puVar44 + 0x94) = (float)local_210;
                  *(float *)(puVar44 + 0x13) = (float)local_208;
                  *(float *)((longlong)puVar44 + 0x9c) = (float)local_200;
                  if ((((((1e-08 < ABS(*(float *)(puVar44 + 0xc))) ||
                         (1e-08 < ABS(*(float *)((longlong)puVar44 + 100)))) ||
                        (1e-08 < ABS(*(float *)(puVar44 + 0xd)))) ||
                       ((1e-08 < ABS(*(float *)(puVar44 + 0xe)) ||
                        (1e-08 < ABS(*(float *)((longlong)puVar44 + 0x74)))))) ||
                      (1e-08 < ABS(*(float *)(puVar44 + 0xf)))) ||
                     (((1e-08 < ABS((float)local_238) || (1e-08 < ABS((float)dStack_230))) ||
                      (1e-08 < ABS((float)local_228))))) {
                    FUN_144906c86(&local_278,puVar44 + 0xc);
                  }
                  else {
                    local_248 = _DAT_14c846280;
                    uStack_240 = _DAT_14c846288;
                    local_258 = _DAT_14c846270;
                    uStack_250 = _DAT_14c846278;
                    local_268 = _DAT_14c846260;
                    uStack_260 = _DAT_14c846268;
                    local_278 = _DAT_14c846250;
                    dStack_270 = DAT_14c846258;
                  }
                  dVar46 = local_3f8;
                  uVar49 = local_4c0;
                  lVar23 = local_538;
                  *(undefined4 *)(puVar44 + 0x1a) = (undefined4)local_248;
                  *(undefined4 *)((longlong)puVar44 + 0xd4) = local_248._4_4_;
                  *(undefined4 *)(puVar44 + 0x1b) = (undefined4)uStack_240;
                  *(undefined4 *)((longlong)puVar44 + 0xdc) = uStack_240._4_4_;
                  *(undefined4 *)(puVar44 + 0x18) = (undefined4)local_258;
                  *(undefined4 *)((longlong)puVar44 + 0xc4) = local_258._4_4_;
                  *(undefined4 *)(puVar44 + 0x19) = (undefined4)uStack_250;
                  *(undefined4 *)((longlong)puVar44 + 0xcc) = uStack_250._4_4_;
                  *(undefined4 *)(puVar44 + 0x16) = (undefined4)local_268;
                  *(undefined4 *)((longlong)puVar44 + 0xb4) = local_268._4_4_;
                  *(undefined4 *)(puVar44 + 0x17) = (undefined4)uStack_260;
                  *(undefined4 *)((longlong)puVar44 + 0xbc) = uStack_260._4_4_;
                  puVar44[0x14] = local_278;
                  puVar44[0x15] = dStack_270;
                  if (((((9.99999993922529e-09 <
                          ABS((double)CONCAT44(local_178._4_4_,(int)local_178))) ||
                        (9.99999993922529e-09 < ABS((double)CONCAT44(uStack_16c,uStack_170)))) ||
                       (9.99999993922529e-09 < ABS((double)local_168))) ||
                      ((9.99999993922529e-09 < ABS(local_158) ||
                       (9.99999993922529e-09 < ABS(local_150))))) ||
                     (((9.99999993922529e-09 < ABS(local_148) ||
                       ((9.99999993922529e-09 < ABS(local_138) ||
                        (9.99999993922529e-09 < ABS(local_130))))) ||
                      (9.99999993922529e-09 < ABS(local_128))))) {
                    FUN_14007522e(&local_278,&local_178);
                  }
                  else {
                    puVar25 = &DAT_14c846400;
                    puVar39 = &local_278;
                    for (lVar38 = 0x10; lVar38 != 0; lVar38 = lVar38 + -1) {
                      *puVar39 = *puVar25;
                      puVar25 = puVar25 + 1;
                      puVar39 = puVar39 + 1;
                    }
                  }
                  dVar16 = local_228;
                  dVar15 = dStack_230;
                  dVar14 = local_238;
                  dVar13 = local_248;
                  dVar6 = uStack_250;
                  dVar5 = local_258;
                  dVar4 = local_268;
                  dVar3 = dStack_270;
                  puVar12 = local_278;
                  dVar8 = dVar46 * local_238 +
                          dStack_430 * local_258 + local_438 * (double)local_278 + local_218;
                  dVar9 = dVar46 * dStack_230 + dStack_430 * uStack_250 + local_438 * dStack_270 +
                          local_210;
                  dVar7 = dVar46 * local_228 + dStack_430 * local_248 + local_438 * local_268 +
                          local_208;
                  dVar46 = local_238 * local_238 +
                           local_258 * local_258 + (double)local_278 * (double)local_278;
                  dVar40 = dStack_230 * dStack_230 +
                           uStack_250 * uStack_250 + dStack_270 * dStack_270;
                  dVar29 = local_228 * local_228 + local_268 * local_268 + local_248 * local_248;
                  if (dVar46 <= dVar40) {
                    dVar46 = dVar40;
                  }
                  if (dVar46 <= dVar29) {
                    dVar46 = dVar29;
                  }
                  if (dVar46 < 0.0) {
                    sqrt(dVar46);
                  }
                  *(float *)(puVar44 + 0x1c) = (float)dVar8;
                  *(float *)((longlong)puVar44 + 0xe4) = (float)dVar9;
                  *(float *)(puVar44 + 0x1d) = (float)dVar7;
                  *(float *)(puVar44 + 0x1e) =
                       (float)(ABS(local_4d8 * dVar14) +
                              ABS(dVar5 * dStack_510) + ABS(local_518 * (double)puVar12));
                  *(float *)((longlong)puVar44 + 0xf4) =
                       (float)(ABS(local_4d8 * dVar15) +
                              ABS(dVar6 * dStack_510) + ABS(local_518 * dVar3));
                  *(float *)(puVar44 + 0x1f) =
                       (float)(ABS(dVar16 * local_4d8) +
                              ABS(dStack_510 * dVar13) + ABS(dVar4 * local_518));
                  *(undefined4 *)((longlong)puVar44 + 0xfc) = (undefined4)local_530;
                  puVar44[0x20] = local_3e8;
                  *(uint *)(puVar44 + 0x21) = local_3e0;
                  *(float *)(puVar44 + 0x22) = local_46c;
                  *(float *)((longlong)puVar44 + 0x114) = local_468;
                  *(float *)(puVar44 + 0x23) = local_464;
                  *(float *)(puVar44 + 0x24) = local_478;
                  *(float *)((longlong)puVar44 + 0x124) = local_474;
                  *(float *)(puVar44 + 0x25) = local_470;
                  FUN_1448a862c(&local_2f8);
                  FUN_14019e00e(&local_328,&local_2f8,0,1);
                  lVar24 = FUN_1448a8484();
                  lVar38 = local_328;
                  cVar17 = *(char *)(lVar24 + 0x41);
                  if (*(char *)(lVar24 + 0x41) == '\x03') {
                    cVar17 = '\x02';
                  }
                  puVar44[0x26] = local_328;
                  *(char *)(puVar44 + 0x27) = cVar17;
                  if (local_328 != 0) {
                    LOCK();
                    puVar35 = (uint *)(local_328 + 8);
                    uVar18 = *puVar35;
                    *puVar35 = *puVar35 - 1;
                    UNLOCK();
                    if ((uVar18 & 0x3fffffff) == 1) {
                      puVar35 = (uint *)(local_328 + 8);
                      LOCK();
                      uVar18 = *puVar35;
                      *puVar35 = *puVar35 | 0x40000000;
                      UNLOCK();
                      if ((uVar18 >> 0x1e & 1) == 0) {
                        bVar10 = *(byte *)(local_328 + 0xd);
                        plVar26 = (longlong *)FUN_14001cc68(0x10);
                        plVar26[1] = lVar38;
                        plVar28 = DAT_14ca843c0;
                        plVar27 = DAT_14ca843c8;
                        if ((bVar10 & 2) == 0) {
                          do {
                            *plVar26 = (longlong)plVar28;
                            LOCK();
                            bVar51 = plVar28 != DAT_14ca843c0;
                            plVar27 = plVar26;
                            if (bVar51) {
                              plVar28 = DAT_14ca843c0;
                              plVar27 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar27;
                            UNLOCK();
                          } while (bVar51);
                        }
                        else {
                          do {
                            *plVar26 = (longlong)plVar27;
                            LOCK();
                            bVar51 = plVar27 != DAT_14ca843c8;
                            plVar28 = plVar26;
                            if (bVar51) {
                              plVar27 = DAT_14ca843c8;
                              plVar28 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar28;
                            UNLOCK();
                          } while (bVar51);
                        }
                      }
                    }
                  }
                  puVar1 = local_550;
                  *(undefined4 *)(puVar44 + 8) = (undefined4)local_480;
                  *(float *)((longlong)puVar44 + 0x44) = local_4e0;
                  *(float *)(puVar44 + 9) = local_4dc;
                  *(float *)(puVar44 + 10) = local_458;
                  *(float *)((longlong)puVar44 + 0x54) = local_454;
                  *(undefined4 *)(puVar44 + 0xb) = (undefined4)local_488;
                  *(uint *)((longlong)puVar44 + 300) = local_4e4;
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 9;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 9;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_448 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 3;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *puVar39 = &PTR_FUN_14a1fb168;
                  *(undefined1 *)(puVar39 + 5) = 0x1c;
                  *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
                  puVar39[7] = 0;
                  puVar39[8] = local_448;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  uVar18 = iVar36 + 1;
                  *(uint *)(lVar23 + 0x1a0) = uVar18;
                  if (*(uint *)(lVar23 + 0x1a4) < uVar18) {
                    FUN_1447568fc(local_548);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x29] = puVar39;
                  cVar17 = *(char *)(local_440 + 0x68);
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 9;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 9;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_440 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 3;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *puVar39 = &PTR_FUN_14a1fb168;
                  *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
                  *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
                  puVar39[7] = 0;
                  puVar39[8] = local_440;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x2a] = puVar39;
                  puVar44[0x2b] = local_450;
                  *(undefined4 *)(puVar44 + 0x2c) = 4;
                  *(uint *)(puVar44 + 0x28) = local_460;
                  *(undefined4 *)((longlong)puVar44 + 0x144) = 0;
                  cVar17 = *(char *)(local_540 + 0x68);
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 9;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x50);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 9;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_540 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 3;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *puVar39 = &PTR_FUN_14a1fb168;
                  *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
                  *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
                  puVar39[7] = 0;
                  puVar39[8] = local_540;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x2d] = puVar39;
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 8;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x48);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 8;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_410 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 2;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar39 + 5) = 0;
                  *puVar39 = &PTR_FUN_14a1fb3e8;
                  *(undefined2 *)(puVar39 + 6) = 0x1c;
                  *(undefined1 *)((longlong)puVar39 + 0x32) = 0;
                  puVar39[7] = local_410;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x2e] = puVar39;
                  cVar17 = *(char *)(local_540 + 0x68);
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 8;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x48);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 8;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_540 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 2;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar39 + 5) = 0;
                  *puVar39 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
                  puVar39[7] = local_540;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x2f] = puVar39;
                  cVar17 = *(char *)(local_4b0 + 0x68);
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 8;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x48);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 8;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_4b0 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 2;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar39 + 5) = 0;
                  *puVar39 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
                  puVar39[7] = local_4b0;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x30] = puVar39;
                  cVar17 = *(char *)(local_490 + 0x68);
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 8;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x48);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 8;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_490 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 2;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar39 + 5) = 0;
                  *puVar39 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
                  puVar39[7] = local_490;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x31] = puVar39;
                  cVar17 = *(char *)(local_498 + 0x68);
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 8;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x48);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 8;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(local_498 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 2;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar39 + 5) = 0;
                  *puVar39 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
                  puVar39[7] = local_498;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  puVar1 = local_550;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x32] = puVar39;
                  iVar36 = *(int *)(DAT_14c9e2658 + 4);
                  if (3 < iVar36) {
                    iVar36 = 4;
                  }
                  if (iVar36 < 2) {
                    iVar36 = 1;
                  }
                  *(int *)((longlong)puVar44 + 0x19c) = iVar36;
                  cVar17 = *(char *)(uVar49 + 0x68);
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 8;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x48);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 8;
                  }
                  *(undefined8 **)(lVar23 + 0x70) = puVar25;
                  puVar39[1] = *(undefined8 *)(uVar49 + 8);
                  puVar39[2] = 0;
                  *(undefined1 *)(puVar39 + 3) = 2;
                  *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar39 + 5) = 0;
                  *puVar39 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
                  puVar39[7] = uVar49;
                  iVar36 = *(int *)(lVar23 + 0x1a0);
                  *(uint *)(lVar23 + 0x1a0) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x1a4) < iVar36 + 1U) {
                    FUN_1447568fc(local_548,iVar36);
                  }
                  uVar21 = local_320;
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
                  puVar44[0x34] = puVar39;
                  *(undefined4 *)((longlong)puVar44 + 0x1c4) = *(undefined4 *)(DAT_14c9e26e8 + 4);
                  FUN_1471c2374();
                  FUN_140069376(lVar23);
                  puVar1 = local_550;
                  iVar43 = (int6)(short)((uint)iVar36 >> 0x10);
                  uVar41 = (undefined4)CONCAT62(iVar43,2);
                  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2))
                     && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
                    uVar41 = (undefined4)CONCAT62(iVar43,4);
                  }
                  puVar39 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar25 = puVar39 + 0x3c;
                  if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
                    FUN_140023dd8(local_550,0x1e8);
                    puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar39 + 0x3c;
                  }
                  *local_550 = (ulonglong)puVar25;
                  uStack_170 = (uint)DAT_14c9e5fa0;
                  uStack_16c = (undefined4)((ulonglong)DAT_14c9e5fa0 >> 0x20);
                  if (DAT_14c9e5fa0 != 0) {
                    LOCK();
                    *(int *)(DAT_14c9e5fa0 + 8) = *(int *)(DAT_14c9e5fa0 + 8) + 1;
                    UNLOCK();
                  }
                  local_168 = &DAT_14c9e5f58;
                  local_568 = (undefined1 **)CONCAT71(local_568._1_7_,2);
                  local_178 = puVar44 + 2;
                  FUN_140068f1a(puVar39,&local_1f8,&local_178,uVar41);
                  lVar38 = local_4b8;
                  *puVar39 = &PTR_FUN_14a240a10;
                  puVar39[0x37] = puVar44 + 2;
                  puVar39[0x38] = local_4a8;
                  puVar39[0x39] = local_4b8;
                  puVar39[0x3a] = uVar21;
                  puVar39[0x3b] = local_4a0;
                  iVar36 = *(int *)(lVar23 + 0x170);
                  *(uint *)(lVar23 + 0x170) = iVar36 + 1U;
                  if (*(uint *)(lVar23 + 0x174) < iVar36 + 1U) {
                    FUN_14470e57a(local_418,iVar36);
                  }
                  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar36 * 8) = puVar39;
                  *(int *)((longlong)puVar39 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
                  FUN_140069100(lVar23,puVar39);
                  iVar36 = *(int *)(lVar48 + 0xb0);
                  uVar34 = local_408;
                  uVar45 = local_400;
                  iVar19 = local_45c;
                }
                lVar50 = lVar50 + 1;
              } while (lVar50 < iVar36);
            }
            uVar18 = (uint)local_528 & ~(uint)uVar34;
            puVar35 = local_2a8;
            if (local_2a8 == (uint *)0x0) {
              puVar35 = local_2b8;
            }
            iVar30 = (int)uVar45;
            lVar48 = (longlong)iVar30;
            uVar31 = puVar35[lVar48] & uVar18;
            param_1 = local_538;
            iVar36 = local_2a0;
            if (uVar31 == 0) {
              iVar32 = local_2a0 + 0x1e;
              if (-1 < local_2a0 + -1) {
                iVar32 = local_2a0 + -1;
              }
              iVar32 = iVar32 >> 5;
              iVar33 = iVar32;
              if (iVar32 < iVar30) {
                iVar33 = iVar30;
              }
              if (iVar32 <= iVar30) break;
              lVar50 = 0;
              while( true ) {
                iVar19 = iVar19 + 0x20;
                uVar31 = puVar35[lVar48 + lVar50 + 1];
                if (uVar31 != 0) break;
                lVar50 = lVar50 + 1;
                if (iVar33 - lVar48 == lVar50) goto LAB_142cb3ad4;
              }
              uVar45 = (ulonglong)(iVar30 + (int)lVar50 + 1);
              uVar18 = 0xffffffff;
            }
            uVar34 = (ulonglong)(-uVar31 & uVar31);
            uVar42 = uVar34 * 2 + 1;
            lVar48 = 0x3f;
            if (uVar42 != 0) {
              for (; uVar42 >> lVar48 == 0; lVar48 = lVar48 + -1) {
              }
            }
            iVar30 = (iVar19 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
          } while (iVar30 < local_2a0);
        }
LAB_142cb3ad4:
        lVar48 = local_420 + 1;
      } while (lVar48 < (int)local_500[1]);
    }
    uVar31 = local_378;
    uVar18 = local_380;
    puVar1 = local_550;
    if (*(int *)(DAT_14c9e2748 + 4) == 0) {
      local_4d8 = (double)FUN_144735828(&DAT_14ca63b10,param_1,8);
    }
    else {
      local_4f0 = (ulonglong)uStack_37c;
      iVar36 = local_378 + 6;
      if (-1 < (int)(local_378 + 3)) {
        iVar36 = local_378 + 3;
      }
      iVar19 = uStack_37c + 6;
      if (-1 < (int)(uStack_37c + 3)) {
        iVar19 = uStack_37c + 3;
      }
      iVar30 = local_380 + 6;
      if (-1 < (int)(local_380 + 3)) {
        iVar30 = local_380 + 3;
      }
      local_528 = (undefined8 *)CONCAT44(local_528._4_4_,iVar36 >> 2);
      uVar20 = (iVar19 >> 2) * (iVar30 >> 2) * (iVar36 >> 2);
      uVar47 = 8;
      if (DAT_14ca84e48 < 8) {
        uVar47 = DAT_14ca84e48;
      }
      local_178._0_4_ = uVar47 + (uVar47 == 0);
      uStack_170 = 0x10109;
      if (DAT_14ca84e48 <= uVar20) {
        uVar20 = DAT_14ca84e48;
      }
      local_168 = (undefined *)0x0;
      local_178._4_4_ = uVar20 + (uVar20 == 0);
      uVar34 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar49 = uVar34 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar49) {
        FUN_140023dd8(local_550,0x160);
        uVar34 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar49 = uVar34 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar49;
      FUN_1456bd266(uVar34,L"HeterogeneousVolumes.BottomLevelGridBuffer",&local_178,0);
      iVar36 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
        FUN_144737178(local_520,iVar36);
      }
      puVar1 = local_550;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar34;
      *(int *)(uVar34 + 0x7c) = *(int *)(param_1 + 400) + -1;
      cVar17 = *(char *)(uVar34 + 0x68);
      puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar44 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x48);
        puVar44 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar44 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      puVar44[1] = *(undefined8 *)(uVar34 + 8);
      puVar44[2] = 0;
      *(undefined1 *)(puVar44 + 3) = 2;
      *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar44 + 5) = 0;
      *puVar44 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar44 + 6) = cVar17 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar44 + 0x31) = 0;
      puVar44[7] = uVar34;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      local_4d8 = (double)uVar34;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(local_548,iVar36);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar44;
      *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_1405bfba3(param_1,puVar44,0,2);
      puVar1 = local_550;
      puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar25 = puVar44 + 6;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x40);
        puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar25 = puVar44 + 6;
      }
      *(undefined8 **)(local_538 + 0x70) = puVar25;
      *puVar44 = &PTR_FUN_14a2408a8;
      puVar44[4] = 0;
      puVar44[5] = 0;
      iVar36 = *(int *)(local_538 + 0xa0);
      *(uint *)(local_538 + 0xa0) = iVar36 + 1U;
      if (*(uint *)(local_538 + 0xa4) < iVar36 + 1U) {
        FUN_1448cfae8(local_4f8,iVar36);
      }
      param_1 = local_538;
      puVar1 = local_550;
      *(undefined8 **)(*(longlong *)(local_538 + 0x98) + (longlong)iVar36 * 8) = puVar44;
      *(uint *)(puVar44 + 2) = uVar18;
      *(int *)((longlong)puVar44 + 0x14) = (int)local_4f0;
      *(uint *)(puVar44 + 3) = uVar31;
      cVar17 = *(char *)(local_540 + 0x68);
      puVar39 = (undefined8 *)(*(longlong *)(local_538 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
      if (*(undefined8 **)(local_538 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x50);
        puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar39 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      puVar39[1] = *(undefined8 *)(local_540 + 8);
      puVar39[2] = 0;
      *(undefined1 *)(puVar39 + 3) = 3;
      *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
      *puVar39 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
      puVar39[7] = 0;
      puVar39[8] = local_540;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(local_548,iVar36);
      }
      dVar46 = local_4d8;
      puVar1 = local_550;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
      *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar44[4] = puVar39;
      cVar17 = *(char *)((longlong)local_4d8 + 0x68);
      puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar39 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x48);
        puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar39 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      puVar39[1] = *(undefined8 *)((longlong)dVar46 + 8);
      puVar39[2] = 0;
      *(undefined1 *)(puVar39 + 3) = 2;
      *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar39 + 5) = 0;
      *puVar39 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
      puVar39[7] = dVar46;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(local_548,iVar36);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
      *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar44[5] = puVar39;
      FUN_1471b6cfc(*(undefined8 *)(*local_500 + 0x13818),&local_178);
      local_1f8 = (undefined1 *)CONCAT44(iVar19 >> 2,iVar30 >> 2);
      uStack_1f0 = (uint)local_528;
      local_568 = (undefined1 **)&local_1f8;
      FUN_1471b6d69(param_1,&local_278,&local_178,puVar44 + 2);
      uVar49 = local_4c0;
    }
    uVar31 = local_378;
    uVar18 = local_380;
    puVar1 = local_550;
    if (*(int *)(DAT_14c9e2760 + 4) == 0) {
      dVar29 = (double)FUN_144735828(&DAT_14ca63b10,param_1,8);
    }
    else {
      local_528 = (undefined8 *)(ulonglong)uStack_37c;
      uVar20 = uStack_37c * local_380 * local_378;
      uVar47 = 8;
      if (DAT_14ca84e48 < 8) {
        uVar47 = DAT_14ca84e48;
      }
      local_178._0_4_ = uVar47 + (uVar47 == 0);
      uStack_170 = 0x10109;
      if (DAT_14ca84e48 <= uVar20) {
        uVar20 = DAT_14ca84e48;
      }
      local_168 = (undefined *)0x0;
      local_178._4_4_ = uVar20 + (uVar20 == 0);
      dVar46 = (double)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      uVar34 = (longlong)dVar46 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar34) {
        FUN_140023dd8(local_550,0x160);
        dVar46 = (double)(*puVar1 + 0xf & 0xfffffffffffffff0);
        uVar34 = (longlong)dVar46 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar34;
      FUN_1456bd266(dVar46,L"HeterogeneousVolumes.MajorantVoxelGridBuffer",&local_178,0);
      iVar36 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
        FUN_144737178(local_520,iVar36);
      }
      puVar1 = local_550;
      *(double *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = dVar46;
      *(int *)((longlong)dVar46 + 0x7c) = *(int *)(param_1 + 400) + -1;
      local_530 = *(ulonglong *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_4a8 + 8) * 2) *
                   8);
      puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar25 = puVar44 + 8;
      local_518 = dVar46;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x50);
        puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar25 = puVar44 + 8;
      }
      *(undefined8 **)(local_538 + 0x70) = puVar25;
      *puVar44 = &PTR_FUN_14a2408c8;
      puVar44[4] = 0;
      puVar44[5] = 0;
      puVar44[6] = 0;
      puVar44[7] = 0;
      iVar36 = *(int *)(local_538 + 0xa0);
      *(uint *)(local_538 + 0xa0) = iVar36 + 1U;
      if (*(uint *)(local_538 + 0xa4) < iVar36 + 1U) {
        FUN_1448cfae8(local_4f8,iVar36);
      }
      param_1 = local_538;
      puVar1 = local_550;
      *(undefined8 **)(*(longlong *)(local_538 + 0x98) + (longlong)iVar36 * 8) = puVar44;
      *(uint *)(puVar44 + 3) = local_378;
      puVar44[2] = CONCAT44(uStack_37c,local_380);
      cVar17 = *(char *)(local_540 + 0x68);
      puVar39 = (undefined8 *)(*(longlong *)(local_538 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
      if (*(undefined8 **)(local_538 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x50);
        puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar39 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      puVar39[1] = *(undefined8 *)(local_540 + 8);
      puVar39[2] = 0;
      *(undefined1 *)(puVar39 + 3) = 3;
      *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
      *puVar39 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
      puVar39[7] = 0;
      puVar39[8] = local_540;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(local_548,iVar36);
      }
      puVar1 = local_550;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
      *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar44[4] = puVar39;
      cVar17 = *(char *)(uVar49 + 0x68);
      puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x50);
        puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar39 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      puVar39[1] = *(undefined8 *)(uVar49 + 8);
      puVar39[2] = 0;
      *(undefined1 *)(puVar39 + 3) = 3;
      *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
      *puVar39 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
      puVar39[7] = 0;
      puVar39[8] = uVar49;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(local_548,iVar36);
      }
      uVar49 = local_4b0;
      puVar1 = local_550;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
      *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar44[5] = puVar39;
      cVar17 = *(char *)(local_4b0 + 0x68);
      puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x50);
        puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar39 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      puVar39[1] = *(undefined8 *)(uVar49 + 8);
      puVar39[2] = 0;
      *(undefined1 *)(puVar39 + 3) = 3;
      *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
      *puVar39 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
      puVar39[7] = 0;
      puVar39[8] = uVar49;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(local_548,iVar36);
      }
      dVar46 = local_518;
      puVar1 = local_550;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
      *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar44[6] = puVar39;
      cVar17 = *(char *)((longlong)local_518 + 0x68);
      puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar39 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_550,0x48);
        puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar39 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      puVar39[1] = *(undefined8 *)((longlong)dVar46 + 8);
      puVar39[2] = 0;
      *(undefined1 *)(puVar39 + 3) = 2;
      *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar39 + 5) = 0;
      *puVar39 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
      puVar39[7] = dVar46;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(local_548,iVar36);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
      *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar44[7] = puVar39;
      iVar36 = *(int *)(DAT_14c9e2700 + 4);
      FUN_145e84916();
      FUN_1448e935e(local_530,&local_178,&DAT_14c9e33f8,iVar36 != 0);
      FUN_145e84916();
      local_1f8 = (undefined1 *)CONCAT44(local_178._4_4_,(int)local_178);
      uStack_1f0 = uStack_170;
      uStack_1ec = uStack_16c;
      iVar36 = uVar31 + 3;
      iVar19 = uVar31 + 6;
      if (-1 < iVar36) {
        iVar19 = iVar36;
      }
      iVar30 = (int)local_528 + 3;
      iVar36 = (int)local_528 + 6;
      if (-1 < iVar30) {
        iVar36 = iVar30;
      }
      iVar30 = uVar18 + 3;
      iVar32 = uVar18 + 6;
      if (-1 < iVar30) {
        iVar32 = iVar30;
      }
      local_278 = (undefined1 *)CONCAT44(iVar36 >> 2,iVar32 >> 2);
      dStack_270 = (double)CONCAT44(dStack_270._4_4_,iVar19 >> 2);
      local_568 = (undefined1 **)&local_278;
      FUN_1471b7122(param_1,&local_178,&local_1f8,puVar44 + 2);
      if ((*(int *)(DAT_14c9e2778 + 4) != 0) &&
         (dVar46 = local_518, param_1 = local_538, uVar31 = uStack_37c, uVar20 = local_378,
         uVar18 = local_380, (local_378 != 0 && uStack_37c != 0) && 1 < (int)local_380)) {
        do {
          lVar48 = local_538;
          puVar1 = local_550;
          iVar36 = uVar20 + 6;
          if (-1 < (int)(uVar20 + 3)) {
            iVar36 = uVar20 + 3;
          }
          iVar19 = uVar31 + 6;
          if (-1 < (int)(uVar31 + 3)) {
            iVar19 = uVar31 + 3;
          }
          uVar47 = uVar18 + 3 >> 2;
          local_4b8 = CONCAT44(local_4b8._4_4_,iVar19 >> 2);
          local_4f0 = CONCAT44(local_4f0._4_4_,iVar36 >> 2);
          local_4a0 = CONCAT44(local_4a0._4_4_,uVar47);
          uVar47 = (iVar19 >> 2) * (iVar36 >> 2) * uVar47;
          uVar37 = 8;
          if (DAT_14ca84e48 < 8) {
            uVar37 = DAT_14ca84e48;
          }
          local_178._0_4_ = uVar37 + (uVar37 == 0);
          uStack_170 = 0x10109;
          if (DAT_14ca84e48 <= uVar47) {
            uVar47 = DAT_14ca84e48;
          }
          local_168 = (undefined *)0x0;
          local_178._4_4_ = uVar47 + (uVar47 == 0);
          dVar40 = (double)(*(longlong *)(local_538 + 0x70) + 0xfU & 0xfffffffffffffff0);
          uVar49 = (longlong)dVar40 + 0x150;
          if (*(ulonglong *)(local_538 + 0x78) < uVar49) {
            FUN_140023dd8(local_550,0x160);
            dVar40 = (double)(*puVar1 + 0xf & 0xfffffffffffffff0);
            uVar49 = (longlong)dVar40 + 0x150;
          }
          *(ulonglong *)(lVar48 + 0x70) = uVar49;
          FUN_1456bd266(dVar40,L"HeterogeneousVolumes.DownsampledBuffer",&local_178,0);
          iVar36 = *(int *)(lVar48 + 400);
          *(uint *)(lVar48 + 400) = iVar36 + 1U;
          if (*(uint *)(lVar48 + 0x194) < iVar36 + 1U) {
            FUN_144737178(local_520,iVar36);
          }
          puVar1 = local_550;
          *(double *)(*(longlong *)(lVar48 + 0x188) + (longlong)iVar36 * 8) = dVar40;
          *(int *)((longlong)dVar40 + 0x7c) = *(int *)(lVar48 + 400) + -1;
          puVar44 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar25 = puVar44 + 6;
          if (*(undefined8 **)(lVar48 + 0x78) < puVar25) {
            FUN_140023dd8(local_550,0x40);
            puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar25 = puVar44 + 6;
          }
          *(undefined8 **)(local_538 + 0x70) = puVar25;
          *puVar44 = &PTR_FUN_14a2408e8;
          puVar44[4] = 0;
          puVar44[5] = 0;
          iVar36 = *(int *)(local_538 + 0xa0);
          *(uint *)(local_538 + 0xa0) = iVar36 + 1U;
          if (*(uint *)(local_538 + 0xa4) < iVar36 + 1U) {
            FUN_1448cfae8(local_4f8,iVar36);
          }
          lVar48 = local_538;
          puVar1 = local_550;
          *(undefined8 **)(*(longlong *)(local_538 + 0x98) + (longlong)iVar36 * 8) = puVar44;
          *(uint *)(puVar44 + 2) = uVar18;
          *(uint *)((longlong)puVar44 + 0x14) = uVar31;
          *(uint *)(puVar44 + 3) = uVar20;
          cVar17 = *(char *)((longlong)dVar46 + 0x68);
          puVar39 = (undefined8 *)(*(longlong *)(local_538 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar25 = puVar39 + 9;
          local_528 = (undefined8 *)(ulonglong)uVar18;
          if (*(undefined8 **)(local_538 + 0x78) < puVar25) {
            FUN_140023dd8(local_550,0x50);
            puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar25 = puVar39 + 9;
          }
          *(undefined8 **)(lVar48 + 0x70) = puVar25;
          puVar39[1] = *(undefined8 *)((longlong)dVar46 + 8);
          puVar39[2] = 0;
          *(undefined1 *)(puVar39 + 3) = 3;
          *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
          *puVar39 = &PTR_FUN_14a1fb168;
          *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
          *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
          puVar39[7] = 0;
          puVar39[8] = dVar46;
          iVar36 = *(int *)(lVar48 + 0x1a0);
          *(uint *)(lVar48 + 0x1a0) = iVar36 + 1U;
          if (*(uint *)(lVar48 + 0x1a4) < iVar36 + 1U) {
            FUN_1447568fc(local_548,iVar36);
          }
          puVar1 = local_550;
          *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar36 * 8) = puVar39;
          *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
          puVar44[4] = puVar39;
          cVar17 = *(char *)((longlong)dVar40 + 0x68);
          puVar39 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar25 = puVar39 + 8;
          if (*(undefined8 **)(lVar48 + 0x78) < puVar25) {
            FUN_140023dd8(local_550,0x48);
            puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar25 = puVar39 + 8;
          }
          puVar11 = local_528;
          *(undefined8 **)(lVar48 + 0x70) = puVar25;
          puVar39[1] = *(undefined8 *)((longlong)dVar40 + 8);
          puVar39[2] = 0;
          *(undefined1 *)(puVar39 + 3) = 2;
          *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar39 + 5) = 0;
          *puVar39 = &PTR_FUN_14a1fb3e8;
          *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
          *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
          puVar39[7] = dVar40;
          iVar36 = *(int *)(lVar48 + 0x1a0);
          *(uint *)(lVar48 + 0x1a0) = iVar36 + 1U;
          if (*(uint *)(lVar48 + 0x1a4) < iVar36 + 1U) {
            FUN_1447568fc(local_548,iVar36);
          }
          *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar36 * 8) = puVar39;
          *(int *)((longlong)puVar39 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
          puVar44[5] = puVar39;
          FUN_1471b71d4(local_530,&local_178);
          uStack_1f0 = local_378;
          local_1f8 = (undefined1 *)CONCAT44(uStack_37c,local_380);
          local_568 = (undefined1 **)&local_1f8;
          FUN_1471b7241(lVar48,&local_2f8,&local_178);
          dVar29 = local_518;
          param_1 = local_538;
          puVar1 = local_550;
          if (((uint)puVar11 < 5) || (0xfffffff8 < uVar31 - 1)) break;
          uVar47 = uVar20 - 1;
          dVar46 = dVar40;
          uVar31 = (uint)local_4b8;
          uVar20 = (uint)local_4f0;
          uVar18 = (uint)local_4a0;
        } while (uVar47 < 0xfffffff9);
        if (dVar40 != 0.0) {
          puVar44 = (undefined8 *)(*(longlong *)(local_538 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar25 = puVar44 + 4;
          if (*(undefined8 **)(local_538 + 0x78) < puVar25) {
            FUN_140023dd8(local_550,0x30);
            puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar25 = puVar44 + 4;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar25;
          *puVar44 = &PTR_FUN_14a240908;
          puVar44[2] = 0;
          puVar44[3] = 0;
          iVar36 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
            FUN_1448cfae8(local_4f8,iVar36);
          }
          puVar1 = local_550;
          *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar36 * 8) = puVar44;
          cVar17 = *(char *)((longlong)dVar40 + 0x68);
          puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar25 = puVar39 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
            FUN_140023dd8(local_550,0x50);
            puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar25 = puVar39 + 9;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar25;
          puVar39[1] = *(undefined8 *)((longlong)dVar40 + 8);
          puVar39[2] = 0;
          *(undefined1 *)(puVar39 + 3) = 3;
          *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
          *puVar39 = &PTR_FUN_14a1fb168;
          *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
          *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
          puVar39[7] = 0;
          puVar39[8] = dVar40;
          iVar36 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
            FUN_1447568fc(local_548,iVar36);
          }
          puVar1 = local_550;
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
          *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar44[2] = puVar39;
          cVar17 = *(char *)((longlong)dVar29 + 0x68);
          puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar25 = puVar39 + 8;
          if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
            FUN_140023dd8(local_550,0x48);
            puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar25 = puVar39 + 8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar25;
          puVar39[1] = *(undefined8 *)((longlong)dVar29 + 8);
          puVar39[2] = 0;
          *(undefined1 *)(puVar39 + 3) = 2;
          *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar39 + 5) = 0;
          *puVar39 = &PTR_FUN_14a1fb3e8;
          *(byte *)(puVar39 + 6) = cVar17 >> 7 & 0x1c;
          *(undefined2 *)((longlong)puVar39 + 0x31) = 0;
          puVar39[7] = dVar29;
          iVar36 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
            FUN_1447568fc(local_548,iVar36);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
          *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar44[3] = puVar39;
          FUN_1471b72f4(local_530,&local_178);
          local_2f8 = &DAT_100000001;
          local_2f0 = 1;
          local_568 = &local_2f8;
          FUN_1471b7361(param_1,local_308,&local_178,puVar44 + 2);
          goto LAB_142cb6069;
        }
      }
      dVar29 = local_518;
    }
LAB_142cb6069:
    puVar1 = local_550;
    puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar25 = puVar44 + 0x10;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x90);
      puVar44 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar25 = puVar44 + 0x10;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    *puVar44 = &PTR_FUN_14a2409f8;
    puVar44[9] = 0;
    puVar44[10] = 0;
    puVar44[0xb] = 0;
    puVar44[0xc] = 0;
    puVar44[0xd] = 0;
    puVar44[0xe] = 0;
    puVar44[0xf] = 0;
    iVar36 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
      FUN_1448cfae8(local_4f8,iVar36);
    }
    dVar46 = local_4d8;
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar36 * 8) = puVar44;
    *(float *)(puVar44 + 2) =
         (float)((double)CONCAT44(uStack_36c,local_370) - (double)CONCAT44(uStack_354,uStack_358));
    *(float *)((longlong)puVar44 + 0x14) =
         (float)((double)CONCAT44(uStack_364,uStack_368) - (double)CONCAT44(uStack_34c,local_350));
    *(float *)(puVar44 + 3) =
         (float)((double)CONCAT44(uStack_35c,local_360) - (double)CONCAT44(uStack_344,uStack_348));
    *(float *)(puVar44 + 4) =
         (float)((double)CONCAT44(uStack_36c,local_370) + (double)CONCAT44(uStack_354,uStack_358));
    *(float *)((longlong)puVar44 + 0x24) =
         (float)((double)CONCAT44(uStack_364,uStack_368) + (double)CONCAT44(uStack_34c,local_350));
    *(float *)(puVar44 + 5) =
         (float)((double)CONCAT44(uStack_35c,local_360) + (double)CONCAT44(uStack_344,uStack_348));
    *(uint *)(puVar44 + 7) = local_378;
    puVar44[6] = CONCAT44(uStack_37c,local_380);
    cVar17 = *(char *)((longlong)local_4d8 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)((longlong)dVar46 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = dVar46;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[9] = puVar39;
    cVar17 = *(char *)(local_540 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    uVar49 = local_4c0;
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(local_540 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = local_540;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[10] = puVar39;
    cVar17 = *(char *)(uVar49 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(uVar49 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = uVar49;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[0xb] = puVar39;
    cVar17 = *(char *)(local_4b0 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(local_4b0 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = local_4b0;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[0xc] = puVar39;
    cVar17 = *(char *)(local_490 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(local_490 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = local_490;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[0xd] = puVar39;
    cVar17 = *(char *)(local_498 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)(local_498 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = local_498;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[0xe] = puVar39;
    *(uint *)((longlong)puVar44 + 0x3c) = (uint)(*(int *)(DAT_14c9e25c8 + 4) != 0);
    *(uint *)(puVar44 + 8) = (uint)(*(int *)(DAT_14c9e2760 + 4) != 0);
    *(uint *)((longlong)puVar44 + 0x44) = (uint)(*(int *)(DAT_14c9e2700 + 4) != 0);
    cVar17 = *(char *)((longlong)dVar29 + 0x68);
    puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar39 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
      FUN_140023dd8(local_550,0x50);
      puVar39 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar39 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar25;
    puVar39[1] = *(undefined8 *)((longlong)dVar29 + 8);
    puVar39[2] = 0;
    *(undefined1 *)(puVar39 + 3) = 3;
    *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
    *puVar39 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar39 + 5) = cVar17 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
    puVar39[7] = 0;
    puVar39[8] = dVar29;
    iVar36 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
      FUN_1447568fc(local_548,iVar36);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
    *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar44[0xf] = puVar39;
    local_178 = puVar44 + 2;
    FUN_1404256ca();
    local_1f8 = DAT_14c9e28a0;
    uVar21 = FUN_140425872(param_1 + 0x1a8,local_550,&local_178);
    *param_6 = uVar21;
  }
  local_280 = 0;
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  FUN_1471b34f6(&local_2c8);
LAB_142cb2001:
  if ((local_f0 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cb7190 FUN_142cb7190 body=1493 status=ok
// SIG undefined FUN_142cb7190(void)

void FUN_142cb7190(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_108 [32];
  int *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar9 = (int)*(undefined8 *)(param_4 + 0x3100) - (int)*(undefined8 *)(param_4 + 0x30f8);
  fVar19 = *(float *)(DAT_14c9de1a8 + 4);
  if (8.0 <= fVar19) {
    fVar19 = 8.0;
  }
  if (fVar19 <= 1.0) {
    fVar19 = 1.0;
  }
  iVar16 = (int)fVar19;
  iVar15 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x3100) >> 0x20) -
           (int)((ulonglong)*(undefined8 *)(param_4 + 0x30f8) >> 0x20);
  iVar13 = (iVar15 + iVar16 + -1) / iVar16;
  iVar16 = (iVar9 + iVar16 + -1) / iVar16;
  iVar5 = iVar13 + 7;
  iVar13 = iVar13 + 0xe;
  if (-1 < iVar5) {
    iVar13 = iVar5;
  }
  iVar5 = iVar16 + 7;
  iVar16 = iVar16 + 0xe;
  if (-1 < iVar5) {
    iVar16 = iVar5;
  }
  uVar10 = iVar9 * iVar15;
  uVar11 = 0xc0;
  if (DAT_14ca84e48 < 0xc0) {
    uVar11 = DAT_14ca84e48;
  }
  uStack_a0 = 0x10109;
  local_a8 = uVar11 + (uVar11 == 0);
  local_98 = 0;
  if (DAT_14ca84e48 <= uVar10) {
    uVar10 = DAT_14ca84e48;
  }
  iStack_a4 = uVar10 + (uVar10 == 0);
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar17 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar6 = uVar17 + 0x150;
  local_d0 = param_4;
  if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
    FUN_140023dd8(plVar1,0x160);
    uVar17 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar6 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar6;
  FUN_1456bd266(uVar17,L"HeterogeneousVolumes.RenderDebugData",&local_a8,0);
  iVar9 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar9 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar9);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar9 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar18 + 0x1a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0xe0);
    puVar18 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar18 + 0x1a;
  }
  local_d8 = (ulonglong)(uint)(iVar13 >> 3);
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  *puVar18 = &PTR_FUN_14a240a28;
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 1;
  puVar18[0x12] = 0;
  puVar18[4] = 0;
  puVar18[5] = 0;
  puVar18[6] = 0;
  puVar18[7] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[10] = 0;
  puVar18[0xb] = 0;
  puVar18[0xc] = 0;
  puVar18[0xd] = 0;
  puVar18[0xe] = 0;
  puVar18[0xf] = 0;
  *(undefined1 *)(puVar18 + 0x13) = 1;
  puVar18[0x14] = 0;
  *(undefined1 *)(puVar18 + 0x15) = 1;
  puVar18[0x18] = 0;
  puVar18[0x19] = 0;
  iVar9 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar9 + 1U;
  local_e0 = plVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar9 * 8) = puVar18;
  lVar7 = FUN_1447e4f80();
  cVar4 = *(char *)(lVar7 + 0x41);
  if (cVar4 == '\x03') {
    cVar4 = '\x02';
  }
  puVar18[2] = *(undefined8 *)(local_d0 + 0x18);
  *(char *)(puVar18 + 3) = cVar4;
  FUN_14494b062(&local_a8,param_1,param_2);
  piVar14 = &local_a8;
  puVar8 = puVar18 + 4;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *(undefined8 *)piVar14;
    piVar14 = piVar14 + 2;
    puVar8 = puVar8 + 1;
  }
  *(uint *)(puVar18 + 0x10) = (uint)(*(int *)(DAT_14c9de250 + 4) != 0);
  *(undefined4 *)((longlong)puVar18 + 0x84) = *(undefined4 *)(DAT_14c9de280 + 4);
  uVar3 = *param_5;
  FUN_1404256ca();
  cVar4 = DAT_14c9e28c9;
  if (DAT_14c9e28c9 == '\x03') {
    cVar4 = '\x02';
  }
  puVar18[0x12] = uVar3;
  *(char *)(puVar18 + 0x13) = cVar4;
  uVar3 = *param_6;
  FUN_1403f28ae();
  plVar1 = local_e0;
  cVar4 = DAT_14c9e2961;
  if (DAT_14c9e2961 == '\x03') {
    cVar4 = '\x02';
  }
  puVar18[0x14] = uVar3;
  *(char *)(puVar18 + 0x15) = cVar4;
  *(int *)(puVar18 + 0x16) = iVar16 >> 3;
  *(int *)((longlong)puVar18 + 0xb4) = (int)local_d8;
  *(undefined4 *)(puVar18 + 0x17) = 1;
  lVar7 = *param_7;
  uVar2 = *(undefined1 *)(lVar7 + 0x94);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar12 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x50);
    puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar12[1] = *(undefined8 *)(lVar7 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar12 + 6) = uVar2;
  *(undefined1 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x35) = 0;
  puVar12[8] = lVar7;
  iVar9 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar9);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar18[0x18] = puVar12;
  cVar4 = *(char *)(uVar17 + 0x68);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar12 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x48);
    puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar12[1] = *(undefined8 *)(uVar17 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 2;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar12 + 6) = cVar4 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar12 + 0x31) = 0;
  puVar12[7] = uVar17;
  iVar9 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar18[0x19] = puVar12;
  iVar9 = 9;
  if (*(int *)(DAT_14c9de1f0 + 4) < 9) {
    iVar9 = *(int *)(DAT_14c9de1f0 + 4);
  }
  iVar13 = 1;
  if (1 < iVar9) {
    iVar13 = iVar9;
  }
  uVar3 = *(undefined8 *)(local_d0 + 0x13818);
  FUN_145f487f0();
  FUN_1448e935e(uVar3,&local_a8,&DAT_14c9e3770,iVar13 + -1);
  FUN_145f487f0();
  local_b8 = local_a8;
  iStack_b4 = iStack_a4;
  uStack_b0 = uStack_a0;
  uStack_ac = uStack_9c;
  local_e8 = &local_c4;
  local_c0 = (undefined4)local_d8;
  local_bc = 1;
  local_c4 = iVar16 >> 3;
  FUN_1471b9796(param_1,&local_a8,&local_b8,puVar18 + 2);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cb778a FUN_142cb778a body=2251 status=ok
// SIG undefined FUN_142cb778a(void)

void FUN_142cb778a(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  uint param_5,longlong param_6,ulonglong *param_7,ulonglong *param_8)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar11 = (int)((ulonglong)param_4 >> 0x20);
  uVar8 = iVar11 * (int)param_4 * *(int *)(param_3 + 1);
  local_50 = 0;
  uVar7 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar7 = DAT_14ca84e48;
  }
  local_60 = uVar7 + (uVar7 == 0);
  uStack_5c = 0x410900000001;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar10 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar10 + 0x150;
  local_b0 = plVar1;
  local_98 = param_4;
  local_90 = param_2;
  local_88 = param_3;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(plVar1,0x160);
    uVar10 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar10 + 0x150;
  }
  local_a0 = param_1 + 0x188;
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bd266(uVar10,L"HeterogeneousVolume.VolumetricShadowIndirectionAllocatorBuffer",&local_60,0
               );
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(local_a0,iVar3);
  }
  plVar1 = local_b0;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar12 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_b0,0x48);
    puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar12 + 8;
  }
  local_a8 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar12[1] = *(undefined8 *)(uVar10 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 2;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar12 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar12 + 0x32) = 0;
  puVar12[7] = uVar10;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_a8,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar12,0,2);
  plVar1 = local_b0;
  uVar7 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar7 = DAT_14ca84e48;
  }
  local_60 = uVar7 + (uVar7 == 0);
  uVar7 = DAT_14ca84e48;
  if (uVar8 < DAT_14ca84e48) {
    uVar7 = uVar8;
  }
  local_50 = 0;
  uStack_5c = CONCAT44(0x10109,uVar7 + (uVar7 == 0));
  uVar13 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar13 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(local_b0,0x160);
    uVar13 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar13 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bd266(uVar13,L"HeterogeneousVolume.VolumetricShadowIndirectionBuffer",&local_60,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(local_a0,iVar3);
  }
  plVar1 = local_b0;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar13;
  *(int *)(uVar13 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_7 = uVar13;
  uVar8 = ((param_5 + 3 & 0xfffffffc) +
          (3U - (int)((ulonglong)
                      (longlong)ROUND(-0.5 - ((double)param_5 * 0.25 + (double)param_5 * 0.25)) >> 1
                     ) & 0xfffffffc)) * uVar8;
  uVar7 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar7 = DAT_14ca84e48;
  }
  local_60 = uVar7 + (uVar7 == 0);
  if (DAT_14ca84e48 <= uVar8) {
    uVar8 = DAT_14ca84e48;
  }
  local_50 = 0;
  uStack_5c = CONCAT44(0x10109,uVar8 + (uVar8 == 0));
  uVar13 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar13 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(local_b0,0x160);
    uVar13 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar13 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bd266(uVar13,L"HeterogeneousVolume.VolumetricShadowTransmittanceBuffer",&local_60,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(local_a0,iVar3);
  }
  plVar1 = local_b0;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar13;
  *(int *)(uVar13 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_8 = uVar13;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar12 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_b0,0x50);
    puVar12 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar12 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar12 = &PTR_FUN_14a240a58;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  plVar1 = local_b0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar12;
  *(int *)(puVar12 + 2) = (int)local_98;
  *(int *)((longlong)puVar12 + 0x14) = iVar11;
  *(uint *)(puVar12 + 3) = param_5;
  cVar2 = *(char *)(param_6 + 0x68);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_b0,0x50);
    puVar9 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar9[1] = *(undefined8 *)(param_6 + 8);
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 3;
  *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
  *puVar9 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar9 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000000;
  puVar9[7] = 0;
  puVar9[8] = param_6;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_a8,iVar11);
  }
  plVar1 = local_b0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[4] = puVar9;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_b0,0x48);
    puVar9 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar9[1] = *(undefined8 *)(uVar10 + 8);
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 2;
  *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar9 + 5) = 0;
  *puVar9 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar9 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar9 + 0x32) = 0;
  puVar9[7] = uVar10;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_a8,iVar11);
  }
  plVar1 = local_b0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[5] = puVar9;
  uVar5 = *param_7;
  cVar2 = *(char *)(uVar5 + 0x68);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_b0,0x48);
    puVar9 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar9[1] = *(undefined8 *)(uVar5 + 8);
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 2;
  *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar9 + 5) = 0;
  *puVar9 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar9 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar9 + 0x31) = 0;
  puVar9[7] = uVar5;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_a8,iVar11);
  }
  plVar1 = local_b0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[6] = puVar9;
  uVar5 = *param_8;
  cVar2 = *(char *)(uVar5 + 0x68);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_b0,0x48);
    puVar9 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar9[1] = *(undefined8 *)(uVar5 + 8);
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 2;
  *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar9 + 5) = 0;
  *puVar9 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar9 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar9 + 0x31) = 0;
  puVar9[7] = uVar5;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_a8,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[7] = puVar9;
  uVar4 = *(undefined8 *)(local_90 + 0x13818);
  FUN_145e70240();
  FUN_1448e935e(uVar4,&local_60,&DAT_14c9e39c0,0);
  FUN_145e70240();
  local_70 = local_60;
  uStack_6c = (undefined4)uStack_5c;
  uStack_68 = uStack_5c._4_4_;
  uStack_64 = uStack_54;
  local_80 = *local_88;
  local_b8 = &local_80;
  local_78 = *(undefined4 *)(local_88 + 1);
  FUN_1471b9e90(param_1,&local_60,&local_70,puVar12 + 2);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cb8056 FUN_142cb8056 body=1481 status=ok
// SIG undefined FUN_142cb8056(void)

void FUN_142cb8056(longlong param_1,longlong param_2,int *param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,longlong param_8,ulonglong *param_9)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  int local_a4;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  int *local_88;
  undefined8 local_80;
  int local_78;
  int local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = (int)param_5;
  iVar12 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar12 = iVar3 + 7;
  }
  iVar5 = (int)((ulonglong)param_5 >> 0x20);
  iVar6 = iVar5 + 0xe;
  if (-1 < iVar5 + 7) {
    iVar6 = iVar5 + 7;
  }
  *param_3 = iVar12 >> 3;
  param_3[1] = iVar6 >> 3;
  param_3[2] = (uint)((param_4 & 0xfffffffd) == 1) * 5 + 1;
  iVar12 = 0x40;
  if (*(int *)(DAT_14c9e27d8 + 4) < 0x40) {
    iVar12 = *(int *)(DAT_14c9e27d8 + 4);
  }
  local_a4 = 2;
  if (2 < iVar12) {
    local_a4 = iVar12;
  }
  uVar8 = iVar5 * iVar3 * local_a4;
  uVar7 = uVar8 * 6;
  if ((param_4 & 0xfffffffd) != 1) {
    uVar7 = uVar8;
  }
  uVar8 = 8;
  if (DAT_14ca84e48 < 8) {
    uVar8 = DAT_14ca84e48;
  }
  uStack_58 = 0x10109;
  local_60 = uVar8 + (uVar8 == 0);
  local_50 = 0;
  if (DAT_14ca84e48 <= uVar7) {
    uVar7 = DAT_14ca84e48;
  }
  iStack_5c = uVar7 + (uVar7 == 0);
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar15 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar9 = uVar15 + 0x150;
  local_90 = param_2;
  local_88 = param_3;
  if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
    FUN_140023dd8(plVar1,0x160);
    uVar15 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar9 = uVar15 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar9;
  FUN_1456bd266(uVar15,L"HeterogeneousVolume.VolumetricShadowLinkedListBuffer",&local_60,0);
  iVar12 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar12 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar12);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar12 * 8) = uVar15;
  *(int *)(uVar15 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *param_9 = uVar15;
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar14 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(plVar1,0x50);
    puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar14 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar14 = &PTR_FUN_14a240a78;
  puVar14[7] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  iVar12 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar14;
  *(int *)(puVar14 + 2) = iVar3;
  *(int *)((longlong)puVar14 + 0x14) = iVar5;
  cVar2 = *(char *)(param_7 + 0x68);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(plVar1,0x50);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 9;
  }
  lVar11 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar13[1] = *(undefined8 *)(param_7 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 3;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *puVar13 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar13 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
  puVar13[7] = 0;
  puVar13[8] = param_7;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  local_98 = plVar1;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    local_a0 = lVar11;
    FUN_1447568fc(lVar11,iVar3);
    lVar11 = local_a0;
  }
  plVar1 = local_98;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[3] = puVar13;
  cVar2 = *(char *)(param_8 + 0x68);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_98,0x50);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar13[1] = *(undefined8 *)(param_8 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 3;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *puVar13 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar13 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
  puVar13[7] = 0;
  puVar13[8] = param_8;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar11,iVar3);
  }
  plVar1 = local_98;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[4] = puVar13;
  *(int *)(puVar14 + 5) = local_a4;
  fVar16 = *(float *)(DAT_14c9e27f0 + 4);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  *(float *)((longlong)puVar14 + 0x2c) = fVar16;
  fVar16 = *(float *)(DAT_14c9e2808 + 4);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  *(float *)(puVar14 + 6) = fVar16;
  uVar9 = *param_9;
  cVar2 = *(char *)(uVar9 + 0x68);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_98,0x48);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar13[1] = *(undefined8 *)(uVar9 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 2;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar13 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar13 + 0x31) = 0;
  puVar13[7] = uVar9;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar11,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[7] = puVar13;
  iVar3 = *(int *)(DAT_14c9e2820 + 4);
  uVar4 = *(undefined8 *)(local_90 + 0x13818);
  FUN_145f03a14();
  FUN_1448e935e(uVar4,&local_60,&DAT_14c9e3ae8,iVar3 != 0);
  FUN_145f03a14();
  local_70 = local_60;
  iStack_6c = iStack_5c;
  uStack_68 = uStack_58;
  uStack_64 = uStack_54;
  local_80 = *(undefined8 *)local_88;
  local_b8 = &local_80;
  local_78 = local_88[2];
  FUN_1471b9f42(param_1,&local_60,&local_70,puVar14 + 2);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cb8620 FUN_142cb8620 body=14038 status=ok
// SIG undefined FUN_142cb8620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cb8620(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,undefined8 param_6,longlong *param_7,longlong *param_8)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double _Y;
  double _Y_00;
  double _X;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  char cVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong *plVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint *puVar38;
  longlong lVar39;
  ulonglong uVar40;
  byte bVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  int iVar45;
  longlong lVar46;
  undefined8 *puVar47;
  double *pdVar48;
  float *pfVar49;
  double *pdVar50;
  longlong lVar51;
  double *pdVar52;
  ulonglong uVar53;
  longlong lVar54;
  uint uVar55;
  ulonglong uVar56;
  undefined4 *puVar57;
  bool bVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  double dVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auStack_1d98 [32];
  undefined8 *local_1d78;
  ulonglong local_1d70;
  undefined8 *local_1d68;
  undefined4 *local_1d60;
  ulonglong local_1d58;
  undefined8 local_1d50;
  undefined8 local_1d48;
  undefined8 *local_1d40;
  undefined8 *local_1d30;
  longlong *local_1d28;
  longlong local_1d20;
  int local_1d14;
  longlong local_1d10;
  longlong local_1d08;
  undefined4 local_1cfc;
  double local_1cf8;
  undefined8 uStack_1cf0;
  longlong local_1ce0;
  double local_1cd8;
  undefined8 uStack_1cd0;
  ulonglong local_1cc0;
  double local_1cb8;
  ulonglong local_1cb0;
  longlong local_1ca8;
  double local_1ca0;
  ulonglong local_1c98;
  longlong local_1c90;
  ulonglong local_1c88;
  longlong local_1c80;
  double local_1c78;
  undefined8 uStack_1c70;
  double local_1c68;
  undefined8 uStack_1c60;
  double local_1c58;
  undefined8 uStack_1c50;
  double local_1c48;
  undefined8 uStack_1c40;
  double local_1c38;
  double local_1c30;
  ulonglong local_1c28;
  ulonglong local_1c20;
  longlong local_1c18;
  longlong local_1c10;
  double *local_1c08;
  double *local_1c00;
  undefined8 *local_1bf8;
  undefined8 *local_1bf0;
  undefined4 local_1be4;
  undefined4 local_1be0;
  undefined4 local_1bdc;
  undefined8 local_1bd8;
  ulonglong uStack_1bd0;
  undefined8 local_1bc8;
  float local_1bc0;
  undefined8 local_1bb8;
  longlong local_1bb0 [11];
  undefined1 local_1b58 [48];
  undefined4 local_1b28;
  undefined4 uStack_1b24;
  undefined4 uStack_1b20;
  undefined4 uStack_1b1c;
  undefined4 local_1b18;
  undefined4 uStack_1b14;
  undefined4 uStack_1b10;
  undefined4 uStack_1b0c;
  undefined4 local_1b08;
  undefined4 uStack_1b04;
  undefined4 uStack_1b00;
  undefined4 uStack_1afc;
  double local_1af8;
  double dStack_1af0;
  undefined4 local_1ae8;
  undefined4 uStack_1ae4;
  undefined4 uStack_1ae0;
  undefined4 uStack_1adc;
  undefined4 local_1ad8;
  undefined4 uStack_1ad4;
  undefined4 uStack_1ad0;
  undefined4 uStack_1acc;
  undefined4 local_1ac8;
  undefined4 uStack_1ac4;
  undefined4 uStack_1ac0;
  undefined4 uStack_1abc;
  double local_1ab8;
  double dStack_1ab0;
  undefined8 local_1aa8 [8];
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  double local_1a38;
  double dStack_1a30;
  undefined8 local_1a28 [8];
  undefined4 local_19e8;
  undefined4 uStack_19e4;
  undefined4 uStack_19e0;
  undefined4 uStack_19dc;
  undefined8 local_19d8;
  undefined8 uStack_19d0;
  undefined8 local_19c8;
  undefined8 uStack_19c0;
  double local_19b8;
  double dStack_19b0;
  undefined1 local_19a8 [4096];
  undefined1 *local_9a8;
  undefined8 local_998;
  double local_988 [15];
  undefined8 local_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  float afStack_8f0 [4];
  float fStack_8e0;
  float fStack_8dc;
  float local_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  double local_8a8;
  double local_8a0;
  double local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  double local_878 [42];
  undefined1 local_728 [16];
  double local_718;
  undefined8 local_710;
  double local_708 [15];
  undefined8 local_690;
  undefined8 local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined8 uStack_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  int iStack_664;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 local_630;
  double local_628;
  double local_620;
  double local_618;
  undefined8 local_610;
  double adStack_608 [16];
  double adStack_588 [16];
  undefined8 local_508 [16];
  undefined8 local_488 [16];
  double local_408 [16];
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
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
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  double local_1f8 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  double dStack_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  double dStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142cb8636;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d98;
  if ((*(int *)(param_4 + 0x3100) != *(int *)(param_4 + 0x30f8)) ||
     (local_1cfc = (undefined4)CONCAT71((int7)((ulonglong)param_4 >> 8),1),
     *(int *)(param_4 + 0x3104) != *(int *)(param_4 + 0x30fc))) {
    if (*(int *)(*(longlong *)(*param_7 + 0x18) + 0x2c) == 0) {
      local_1cfc = (undefined4)
                   CONCAT71((int7)((ulonglong)*(longlong *)(*param_8 + 0x18) >> 8),
                            *(int *)(*(longlong *)(*param_8 + 0x18) + 0x1bc) == 0);
    }
    else {
      local_1cfc = 0;
    }
  }
  local_9a8 = (undefined1 *)0x0;
  local_998 = 0x4000000000;
  iVar28 = *(int *)(param_3 + 0x3578);
  local_1d20 = param_4;
  local_1d08 = param_1;
  local_1c80 = param_2;
  if (iVar28 == 0) {
    uVar40 = 1;
    uVar53 = 0;
    iVar45 = 0;
    iVar35 = 0;
  }
  else {
    puVar38 = *(uint **)(param_3 + 0x3570);
    if (*(uint **)(param_3 + 0x3570) == (uint *)0x0) {
      puVar38 = (uint *)(param_3 + 0x3560);
    }
    uVar55 = *puVar38;
    if (uVar55 == 0) {
      iVar35 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar35 = iVar28 + -1;
      }
      uVar53 = 0;
      uVar40 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar40 = uVar53;
      }
      iVar45 = 0;
      do {
        if (uVar40 == uVar53) goto LAB_142cbbc55;
        iVar45 = iVar45 + 0x20;
        uVar55 = puVar38[uVar53 + 1];
        uVar53 = uVar53 + 1;
      } while (uVar55 == 0);
    }
    else {
      uVar53 = 0;
      iVar45 = 0;
    }
    uVar40 = (ulonglong)(-uVar55 & uVar55);
    uVar56 = uVar40 * 2 + 1;
    lVar51 = 0x3f;
    if (uVar56 != 0) {
      for (; uVar56 >> lVar51 == 0; lVar51 = lVar51 + -1) {
      }
    }
    iVar35 = (iVar45 - ((uint)lVar51 ^ 0x3f)) + 0x3e;
    if (iVar28 <= iVar35) {
      iVar35 = iVar28;
    }
  }
  if (iVar35 < iVar28) {
    uVar55 = 0xffffffff;
    do {
      uVar56 = local_998;
      puVar57 = (undefined4 *)((longlong)iVar35 * 0x40 + *(longlong *)(param_3 + 0x3550));
      lVar51 = (longlong)(int)local_998;
      uVar27 = (int)local_998 + 1;
      local_998 = CONCAT44(local_998._4_4_,uVar27);
      if (local_998._4_4_ < uVar27) {
        FUN_1471b2d6e(local_19a8,uVar56 & 0xffffffff);
      }
      puVar30 = local_9a8;
      if (local_9a8 == (undefined1 *)0x0) {
        puVar30 = local_19a8;
      }
      lVar51 = lVar51 * 0x40;
      uVar60 = *puVar57;
      uVar61 = puVar57[1];
      uVar63 = puVar57[2];
      uVar64 = puVar57[3];
      uVar65 = puVar57[4];
      uVar66 = puVar57[5];
      uVar17 = puVar57[6];
      uVar18 = puVar57[7];
      uVar19 = puVar57[8];
      uVar20 = puVar57[9];
      uVar21 = puVar57[10];
      uVar22 = puVar57[0xb];
      uVar23 = puVar57[0xd];
      uVar24 = puVar57[0xe];
      uVar25 = puVar57[0xf];
      puVar1 = (undefined4 *)(puVar30 + lVar51 + 0x30);
      *puVar1 = puVar57[0xc];
      puVar1[1] = uVar23;
      puVar1[2] = uVar24;
      puVar1[3] = uVar25;
      puVar57 = (undefined4 *)(puVar30 + lVar51 + 0x20);
      *puVar57 = uVar19;
      puVar57[1] = uVar20;
      puVar57[2] = uVar21;
      puVar57[3] = uVar22;
      puVar57 = (undefined4 *)(puVar30 + lVar51 + 0x10);
      *puVar57 = uVar65;
      puVar57[1] = uVar66;
      puVar57[2] = uVar17;
      puVar57[3] = uVar18;
      puVar57 = (undefined4 *)(puVar30 + lVar51);
      *puVar57 = uVar60;
      puVar57[1] = uVar61;
      puVar57[2] = uVar63;
      puVar57[3] = uVar64;
      uVar55 = uVar55 & ~(uint)uVar40;
      puVar38 = *(uint **)(param_3 + 0x3570);
      if (*(uint **)(param_3 + 0x3570) == (uint *)0x0) {
        puVar38 = (uint *)(param_3 + 0x3560);
      }
      iVar28 = *(int *)(param_3 + 0x3578);
      iVar35 = (int)uVar53;
      lVar51 = (longlong)iVar35;
      uVar27 = puVar38[lVar51] & uVar55;
      if (uVar27 == 0) {
        iVar36 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar36 = iVar28 + -1;
        }
        iVar36 = iVar36 >> 5;
        iVar37 = iVar36;
        if (iVar36 < iVar35) {
          iVar37 = iVar35;
        }
        if (iVar36 <= iVar35) break;
        lVar43 = 0;
        while( true ) {
          iVar45 = iVar45 + 0x20;
          uVar27 = puVar38[lVar51 + lVar43 + 1];
          if (uVar27 != 0) break;
          lVar43 = lVar43 + 1;
          if (iVar37 - lVar51 == lVar43) goto LAB_142cb890f;
        }
        uVar53 = (ulonglong)(iVar35 + (int)lVar43 + 1);
        uVar55 = 0xffffffff;
      }
      uVar40 = (ulonglong)(-uVar27 & uVar27);
      uVar56 = uVar40 * 2 + 1;
      lVar51 = 0x3f;
      if (uVar56 != 0) {
        for (; uVar56 >> lVar51 == 0; lVar51 = lVar51 + -1) {
        }
      }
      iVar35 = (iVar45 - ((uint)lVar51 ^ 0x3f)) + 0x3e;
    } while (iVar35 < iVar28);
LAB_142cb890f:
    lVar51 = (longlong)(int)local_998;
    if (0 < lVar51) {
      lVar43 = local_1d08 + 0x178;
      local_1d28 = (longlong *)(local_1d08 + 0x70);
      local_1ce0 = local_1d08 + 0x198;
      local_1bf0 = local_1aa8;
      local_1bf8 = local_1a28;
      local_1ca8 = local_1d08 + 0x188;
      local_1c10 = local_1d08 + 0x98;
      local_1c00 = adStack_608;
      local_1c08 = adStack_588;
      lVar54 = 0;
      do {
        lVar44 = local_1d08;
        if ((int)local_998 != 0) {
          puVar30 = local_9a8;
          if (local_9a8 == (undefined1 *)0x0) {
            puVar30 = local_19a8;
          }
          lVar39 = lVar54 * 0x40;
          lVar8 = *(longlong *)(puVar30 + lVar39 + 0x30);
          if (lVar8 == 0) {
LAB_142cb8a83:
            local_1bb8 = FUN_1448f5828(lVar44);
          }
          else {
            if (*(longlong *)(lVar8 + 0x28) == 0) {
              bVar41 = 0;
            }
            else {
              bVar41 = *(byte *)(*(longlong *)(lVar8 + 0x28) + 0x1d1) & 1;
            }
            lVar46 = (longlong)*(int *)(lVar8 + 0x34) * 0x68 + *param_5;
            if ((lVar46 == 0) ||
               ((bVar41 != 1 || (char)local_1cfc != '\0') || *(int *)(lVar46 + 0x18) == 0))
            goto LAB_142cb8a83;
            uVar55 = *(uint *)(puVar30 + lVar39 + 0x38);
            cVar26 = FUN_1471d23bd(*(undefined8 *)(local_1d20 + 8),puVar30 + lVar39);
            uVar9 = local_658;
            plVar34 = local_1d28;
            if (cVar26 != '\0') goto LAB_142cb8a83;
            lVar39 = *(longlong *)(local_1c80 + 0x1b0);
            uStack_680 = *(undefined4 *)(lVar39 + 0x68);
            uStack_67c = *(undefined4 *)(lVar39 + 0x6c);
            uStack_678 = *(undefined8 *)(lVar39 + 0x70);
            uStack_670 = *(undefined4 *)(lVar39 + 0x78);
            uVar40 = *(ulonglong *)(lVar39 + 0x60) & 0xffffffffffdfffff;
            local_688._0_4_ = (int)uVar40;
            local_688._4_4_ = (int)(uVar40 >> 0x20);
            local_658._6_2_ = SUB82(uVar9,6);
            local_658._0_6_ =
                 CONCAT24(*(undefined2 *)(lVar39 + 0x94),
                          CONCAT13(10,(uint3)*(byte *)(lVar39 + 0x92) << 0x10));
            local_658 = CONCAT62(local_658._2_6_,*(undefined2 *)(lVar39 + 0x90));
            iVar28 = (int)*(undefined8 *)(lVar39 + 0x84);
            iStack_664 = DAT_14ca84e40;
            if (iVar28 < DAT_14ca84e40) {
              iStack_664 = iVar28;
            }
            if (iStack_664 < 2) {
              iStack_664 = 1;
            }
            iVar35 = (int)((ulonglong)*(undefined8 *)(lVar39 + 0x84) >> 0x20);
            iVar28 = DAT_14ca84e40;
            if (iVar35 < DAT_14ca84e40) {
              iVar28 = iVar35;
            }
            uStack_66c = (undefined4)*(undefined8 *)(lVar39 + 0x7c);
            uStack_668 = (undefined4)((ulonglong)*(undefined8 *)(lVar39 + 0x7c) >> 0x20);
            if (iVar28 < 2) {
              iVar28 = 1;
            }
            local_660 = CONCAT44(*(undefined4 *)(lVar39 + 0x8c),iVar28);
            uVar53 = *(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8;
            uVar40 = uVar53 + 0x120;
            local_1cd8 = (double)(ulonglong)uVar55;
            local_1c90 = lVar43;
            if (*(ulonglong *)(lVar44 + 0x78) < uVar40) {
              FUN_140023dd8(local_1d28,0x128);
              uVar53 = *plVar34 + 7U & 0xfffffffffffffff8;
              uVar40 = uVar53 + 0x120;
            }
            *(ulonglong *)(lVar44 + 0x70) = uVar40;
            local_1c18 = lVar51;
            FUN_1456bbb8c(uVar53,L"BeerShadowMapTexture",&local_688,0);
            iVar28 = *(int *)(lVar44 + 0x180);
            *(uint *)(lVar44 + 0x180) = iVar28 + 1U;
            if (*(uint *)(lVar44 + 0x184) < iVar28 + 1U) {
              FUN_14472c0f6(local_1c90,iVar28);
            }
            plVar34 = local_1d28;
            *(ulonglong *)(*(longlong *)(lVar44 + 0x178) + (longlong)iVar28 * 8) = uVar53;
            *(int *)(uVar53 + 0x9c) = *(int *)(lVar44 + 0x180) + -1;
            uVar7 = *(undefined1 *)(uVar53 + 0x94);
            puVar47 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar31 = puVar47 + 9;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar31) {
              FUN_140023dd8(local_1d28,0x50);
              puVar47 = (undefined8 *)(*plVar34 + 7U & 0xfffffffffffffff8);
              puVar31 = puVar47 + 9;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar31;
            puVar47[1] = *(undefined8 *)(uVar53 + 8);
            puVar47[2] = 0;
            *(undefined1 *)(puVar47 + 3) = 0;
            *(undefined8 *)((longlong)puVar47 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar47 + 5) = 0;
            *puVar47 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar47 + 6) = uVar7;
            *(undefined1 *)(puVar47 + 7) = 0;
            *(undefined4 *)((longlong)puVar47 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar47 + 0x35) = 0;
            puVar47[8] = uVar53;
            iVar28 = *(int *)(lVar44 + 0x1a0);
            *(uint *)(lVar44 + 0x1a0) = iVar28 + 1U;
            local_1c98 = uVar53;
            if (*(uint *)(lVar44 + 0x1a4) < iVar28 + 1U) {
              FUN_1447568fc(local_1ce0,iVar28);
            }
            *(undefined8 **)(*(longlong *)(lVar44 + 0x198) + (longlong)iVar28 * 8) = puVar47;
            *(int *)((longlong)puVar47 + 0x1c) = *(int *)(lVar44 + 0x1a0) + -1;
            local_688._0_4_ = 0;
            local_688._4_4_ = 0;
            uStack_680 = 0;
            uStack_67c = 0;
            FUN_140c4fe69(lVar44,puVar47,&local_688,2);
            plVar34 = local_1d28;
            local_1bc0 = (float)DAT_14c846338;
            local_1bc8 = DAT_14c846330;
            local_1bd8 = 0;
            uStack_1bd0 = 0;
            local_1af8 = _DAT_14c846280;
            dStack_1af0 = _DAT_14c846288;
            local_1b08 = DAT_14c846270;
            uStack_1b04 = DAT_14c846274;
            uStack_1b00 = DAT_14c846278;
            uStack_1afc = DAT_14c84627c;
            local_1b18 = DAT_14c846260;
            uStack_1b14 = DAT_14c846264;
            uStack_1b10 = DAT_14c846268;
            uStack_1b0c = DAT_14c84626c;
            local_1b28 = DAT_14c846250;
            uStack_1b24 = DAT_14c846254;
            uStack_1b20 = (undefined4)DAT_14c846258;
            uStack_1b1c = DAT_14c846258._4_4_;
            local_1ab8 = _DAT_14c846280;
            dStack_1ab0 = _DAT_14c846288;
            local_1ac8 = DAT_14c846270;
            uStack_1ac4 = DAT_14c846274;
            uStack_1ac0 = DAT_14c846278;
            uStack_1abc = DAT_14c84627c;
            local_1ad8 = DAT_14c846260;
            uStack_1ad4 = DAT_14c846264;
            uStack_1ad0 = DAT_14c846268;
            uStack_1acc = DAT_14c84626c;
            local_1ae8 = DAT_14c846250;
            uStack_1ae4 = DAT_14c846254;
            uStack_1ae0 = (undefined4)DAT_14c846258;
            uStack_1adc = DAT_14c846258._4_4_;
            local_1bf0[6] = _DAT_14c846280;
            local_1bf0[7] = _DAT_14c846288;
            local_1bf0[4] = CONCAT44(DAT_14c846274,DAT_14c846270);
            local_1bf0[5] = CONCAT44(DAT_14c84627c,DAT_14c846278);
            local_1bf0[2] = CONCAT44(DAT_14c846264,DAT_14c846260);
            local_1bf0[3] = CONCAT44(DAT_14c84626c,DAT_14c846268);
            *local_1bf0 = CONCAT44(DAT_14c846254,DAT_14c846250);
            local_1bf0[1] = CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
            local_1a38 = _DAT_14c846280;
            dStack_1a30 = _DAT_14c846288;
            local_1a48 = CONCAT44(DAT_14c846274,DAT_14c846270);
            uStack_1a40 = CONCAT44(DAT_14c84627c,DAT_14c846278);
            local_1a58 = CONCAT44(DAT_14c846264,DAT_14c846260);
            uStack_1a50 = CONCAT44(DAT_14c84626c,DAT_14c846268);
            local_1a68 = CONCAT44(DAT_14c846254,DAT_14c846250);
            uStack_1a60 = CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
            local_1bf8[6] = _DAT_14c846280;
            local_1bf8[7] = _DAT_14c846288;
            local_1bf8[4] = CONCAT44(DAT_14c846274,DAT_14c846270);
            local_1bf8[5] = CONCAT44(DAT_14c84627c,DAT_14c846278);
            local_1bf8[2] = CONCAT44(DAT_14c846264,DAT_14c846260);
            local_1bf8[3] = CONCAT44(DAT_14c84626c,DAT_14c846268);
            *local_1bf8 = CONCAT44(DAT_14c846254,DAT_14c846250);
            local_1bf8[1] = CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
            local_19b8 = _DAT_14c846280;
            dStack_19b0 = _DAT_14c846288;
            local_19c8 = CONCAT44(DAT_14c846274,DAT_14c846270);
            uStack_19c0 = CONCAT44(DAT_14c84627c,DAT_14c846278);
            local_19d8 = CONCAT44(DAT_14c846264,DAT_14c846260);
            uStack_19d0 = CONCAT44(DAT_14c84626c,DAT_14c846268);
            local_19e8 = DAT_14c846250;
            uStack_19e4 = DAT_14c846254;
            uStack_19e0 = (undefined4)DAT_14c846258;
            uStack_19dc = DAT_14c846258._4_4_;
            if (*(int *)(lVar46 + 0x18) < 1) {
              local_1cf8 = 0.0;
            }
            else {
              local_1cf8 = (double)**(ulonglong **)(lVar46 + 0x10);
            }
            uVar27 = SUB84(local_1cd8,0) & 3;
            local_1cd8 = (double)(ulonglong)uVar27;
            uVar55 = *(uint *)(DAT_14c9e27a8 + 4);
            if (0x7ff < (int)uVar55) {
              uVar55 = 0x800;
            }
            if ((int)uVar55 < 2) {
              uVar55 = 1;
            }
            local_1cc0 = (ulonglong)uVar55;
            local_1d10 = CONCAT71(local_1d10._1_7_,(uVar27 - 1 & 0xfffffffd) == 0);
            uVar55 = uVar55 * uVar55;
            uVar29 = uVar55;
            if ((uVar27 | 2) == 3) {
              uVar29 = uVar55 * 6;
            }
            uVar42 = 0x38;
            if (DAT_14ca84e48 < 0x38) {
              uVar42 = DAT_14ca84e48;
            }
            local_688._0_4_ = uVar42 + (uVar42 == 0);
            uStack_680 = 0x10109;
            uVar42 = DAT_14ca84e48;
            if (uVar29 < DAT_14ca84e48) {
              uVar42 = uVar29;
            }
            uStack_678 = 0;
            local_688._4_4_ = uVar42 + (uVar42 == 0);
            uVar53 = *(longlong *)(lVar44 + 0x70) + 0xfU & 0xfffffffffffffff0;
            uVar40 = uVar53 + 0x150;
            if (*(ulonglong *)(lVar44 + 0x78) < uVar40) {
              FUN_140023dd8(local_1d28,0x160);
              uVar53 = *plVar34 + 0xfU & 0xfffffffffffffff0;
              uVar40 = uVar53 + 0x150;
            }
            *(ulonglong *)(lVar44 + 0x70) = uVar40;
            FUN_1456bd266(uVar53,L"HeterogeneousVolume.RenderDebugData",&local_688,0);
            iVar28 = *(int *)(lVar44 + 400);
            *(uint *)(lVar44 + 400) = iVar28 + 1U;
            if (*(uint *)(lVar44 + 0x194) < iVar28 + 1U) {
              FUN_144737178(local_1ca8,iVar28);
            }
            plVar34 = local_1d28;
            *(ulonglong *)(*(longlong *)(lVar44 + 0x188) + (longlong)iVar28 * 8) = uVar53;
            *(int *)(uVar53 + 0x7c) = *(int *)(lVar44 + 400) + -1;
            uVar29 = DAT_14ca84e48;
            if (3 < DAT_14ca84e48) {
              uVar29 = 4;
            }
            uStack_678 = 0;
            local_688._0_4_ = uVar29 + (uVar29 == 0);
            local_688._4_4_ = 1;
            uStack_680 = 0x4109;
            uVar56 = *(longlong *)(lVar44 + 0x70) + 0xfU & 0xfffffffffffffff0;
            uVar40 = uVar56 + 0x150;
            local_1c20 = uVar53;
            if (*(ulonglong *)(lVar44 + 0x78) < uVar40) {
              FUN_140023dd8(local_1d28,0x160);
              uVar56 = *plVar34 + 0xfU & 0xfffffffffffffff0;
              uVar40 = uVar56 + 0x150;
            }
            *(ulonglong *)(lVar44 + 0x70) = uVar40;
            FUN_1456bd266(uVar56,L"HeterogeneousVolume.VolumetricShadowLinkedListAllocatorBuffer",
                          &local_688,0);
            iVar28 = *(int *)(lVar44 + 400);
            *(uint *)(lVar44 + 400) = iVar28 + 1U;
            if (*(uint *)(lVar44 + 0x194) < iVar28 + 1U) {
              FUN_144737178(local_1ca8,iVar28);
            }
            plVar34 = local_1d28;
            *(ulonglong *)(*(longlong *)(lVar44 + 0x188) + (longlong)iVar28 * 8) = uVar56;
            *(int *)(uVar56 + 0x7c) = *(int *)(lVar44 + 400) + -1;
            iVar28 = *(int *)(DAT_14c9e27d8 + 4);
            if (0x3f < iVar28) {
              iVar28 = 0x40;
            }
            if (iVar28 < 3) {
              iVar28 = 2;
            }
            uVar29 = uVar55 * iVar28;
            if ((uVar27 | 2) == 3) {
              uVar29 = uVar29 * 6;
            }
            uVar27 = 8;
            if (DAT_14ca84e48 < 8) {
              uVar27 = DAT_14ca84e48;
            }
            local_688._0_4_ = uVar27 + (uVar27 == 0);
            uStack_680 = 0x10109;
            uVar27 = DAT_14ca84e48;
            if (uVar29 < DAT_14ca84e48) {
              uVar27 = uVar29;
            }
            uStack_678 = 0;
            local_688._4_4_ = uVar27 + (uVar27 == 0);
            uVar53 = *(longlong *)(lVar44 + 0x70) + 0xfU & 0xfffffffffffffff0;
            uVar40 = uVar53 + 0x150;
            local_1c88 = uVar56;
            if (*(ulonglong *)(lVar44 + 0x78) < uVar40) {
              FUN_140023dd8(local_1d28,0x160);
              uVar53 = *plVar34 + 0xfU & 0xfffffffffffffff0;
              uVar40 = uVar53 + 0x150;
            }
            *(ulonglong *)(lVar44 + 0x70) = uVar40;
            FUN_1456bd266(uVar53,L"HeterogeneousVolume.VolumetricShadowLinkedListBuffer",&local_688,
                          0);
            iVar35 = *(int *)(lVar44 + 400);
            uVar27 = iVar35 + 1;
            *(uint *)(lVar44 + 400) = uVar27;
            if (*(uint *)(lVar44 + 0x194) < uVar27) {
              FUN_144737178(local_1ca8);
            }
            plVar34 = local_1d28;
            *(ulonglong *)(*(longlong *)(lVar44 + 0x188) + (longlong)iVar35 * 8) = uVar53;
            *(int *)(uVar53 + 0x7c) = *(int *)(lVar44 + 400) + -1;
            local_1cb0 = CONCAT44(local_1cb0._4_4_,*(undefined4 *)(DAT_14c9e2808 + 4));
            puVar47 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar31 = puVar47 + 8;
            local_1c28 = uVar53;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar31) {
              FUN_140023dd8(local_1d28);
              puVar47 = (undefined8 *)(*plVar34 + 7U & 0xfffffffffffffff8);
              puVar31 = puVar47 + 8;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar31;
            puVar47[1] = *(undefined8 *)(local_1c88 + 8);
            puVar47[2] = 0;
            *(undefined1 *)(puVar47 + 3) = 2;
            *(undefined8 *)((longlong)puVar47 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar47 + 5) = 0;
            *puVar47 = &PTR_FUN_14a1fb3e8;
            *(undefined2 *)(puVar47 + 6) = 0x1c;
            *(undefined1 *)((longlong)puVar47 + 0x32) = 0;
            puVar47[7] = local_1c88;
            iVar35 = *(int *)(lVar44 + 0x1a0);
            *(uint *)(lVar44 + 0x1a0) = iVar35 + 1U;
            if (*(uint *)(lVar44 + 0x1a4) < iVar35 + 1U) {
              FUN_1447568fc(local_1ce0,iVar35);
            }
            *(undefined8 **)(*(longlong *)(lVar44 + 0x198) + (longlong)iVar35 * 8) = puVar47;
            *(int *)((longlong)puVar47 + 0x1c) = *(int *)(lVar44 + 0x1a0) + -1;
            FUN_1405bfba3(lVar44,puVar47,uVar55,2);
            local_388 = 0;
            uStack_384 = 0;
            uStack_380 = 0;
            uStack_37c = 0x3f800000;
            local_308 = 0;
            uStack_304 = 0;
            uStack_300 = 0;
            uStack_2fc = 0x3f800000;
            local_2f8 = 0;
            uStack_2f4 = 0;
            uStack_2f0 = 0;
            uStack_2ec = 0x3f800000;
            local_2e8 = 0;
            uStack_2e4 = 0;
            uStack_2e0 = 0;
            uStack_2dc = 0x3f800000;
            local_2d8 = 0;
            uStack_2d4 = 0;
            uStack_2d0 = 0;
            uStack_2cc = 0x3f800000;
            local_1d78 = (undefined8 *)((ulonglong)local_1d78 & 0xffffffff00000000);
            FUN_1449e488f(&local_688,local_1d20,lVar8,0);
            memcpy(&local_388,&local_688,0x108);
            FUN_142ca69a4(local_1bb0,&local_388,0,1);
            plVar34 = local_1d28;
            puVar47 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar31 = puVar47 + 0x86;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar31) {
              FUN_140023dd8(local_1d28);
              puVar47 = (undefined8 *)(*plVar34 + 0xfU & 0xfffffffffffffff0);
              puVar31 = puVar47 + 0x86;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar31;
            *puVar47 = &PTR_FUN_14a240a98;
            puVar47[2] = 0;
            *(undefined1 *)(puVar47 + 3) = 1;
            puVar47[4] = 0;
            puVar47[5] = 0;
            puVar47[6] = 0;
            puVar47[7] = 0;
            puVar47[8] = 0;
            puVar47[9] = 0;
            puVar47[10] = 0;
            puVar47[0xb] = 0;
            puVar47[0xc] = 0;
            puVar47[0xd] = 0;
            puVar47[0xe] = 0;
            puVar47[0xf] = 0;
            puVar47[0x10] = 0;
            *(undefined1 *)(puVar47 + 0x11) = 1;
            puVar47[0x7a] = 0;
            *(undefined1 *)(puVar47 + 0x7b) = 1;
            puVar47[0x7c] = 0;
            *(undefined1 *)(puVar47 + 0x7d) = 1;
            puVar47[0x82] = 0;
            puVar47[0x83] = 0;
            puVar47[0x84] = 0;
            puVar47[0x85] = 0;
            iVar35 = *(int *)(lVar44 + 0xa0);
            *(uint *)(lVar44 + 0xa0) = iVar35 + 1U;
            local_1d30 = puVar47;
            local_1d14 = iVar28;
            if (*(uint *)(lVar44 + 0xa4) < iVar35 + 1U) {
              FUN_1448cfae8(local_1c10,iVar35);
            }
            puVar31 = local_1d30 + 4;
            *(undefined8 **)(*(longlong *)(lVar44 + 0x98) + (longlong)iVar35 * 8) = local_1d30;
            lVar51 = FUN_1447e4f80();
            cVar26 = *(char *)(lVar51 + 0x41);
            if (*(char *)(lVar51 + 0x41) == '\x03') {
              cVar26 = '\x02';
            }
            local_1d30[2] = *(undefined8 *)(local_1d20 + 0x18);
            *(char *)(local_1d30 + 3) = cVar26;
            FUN_14494b062(&local_688,lVar44,local_1c80);
            puVar47 = &local_688;
            for (lVar51 = 0xc; lVar51 != 0; lVar51 = lVar51 + -1) {
              *puVar31 = *puVar47;
              puVar47 = puVar47 + 1;
              puVar31 = puVar31 + 1;
            }
            FUN_1448a862c(local_1b58);
            FUN_14019e00e(&local_688,local_1b58,0,1);
            lVar51 = FUN_1448a8484();
            iVar28 = local_1d14;
            cVar26 = *(char *)(lVar51 + 0x41);
            if (cVar26 == '\x03') {
              cVar26 = '\x02';
            }
            lVar51 = CONCAT44(local_688._4_4_,(int)local_688);
            local_1d30[0x10] = lVar51;
            *(char *)(local_1d30 + 0x11) = cVar26;
            if (lVar51 != 0) {
              LOCK();
              puVar38 = (uint *)(lVar51 + 8);
              uVar55 = *puVar38;
              *puVar38 = *puVar38 - 1;
              UNLOCK();
              if ((uVar55 & 0x3fffffff) == 1) {
                puVar38 = (uint *)(lVar51 + 8);
                LOCK();
                uVar55 = *puVar38;
                *puVar38 = *puVar38 | 0x40000000;
                UNLOCK();
                if ((uVar55 >> 0x1e & 1) == 0) {
                  bVar41 = *(byte *)(lVar51 + 0xd);
                  plVar32 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar32[1] = lVar51;
                  plVar34 = DAT_14ca843c0;
                  plVar33 = DAT_14ca843c8;
                  lVar44 = local_1d08;
                  if ((bVar41 & 2) == 0) {
                    do {
                      *plVar32 = (longlong)plVar34;
                      LOCK();
                      bVar58 = plVar34 != DAT_14ca843c0;
                      plVar33 = plVar32;
                      if (bVar58) {
                        plVar34 = DAT_14ca843c0;
                        plVar33 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar33;
                      UNLOCK();
                    } while (bVar58);
                  }
                  else {
                    do {
                      *plVar32 = (longlong)plVar33;
                      LOCK();
                      bVar58 = plVar33 != DAT_14ca843c8;
                      plVar34 = plVar32;
                      if (bVar58) {
                        plVar33 = DAT_14ca843c8;
                        plVar34 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar34;
                      UNLOCK();
                    } while (bVar58);
                  }
                }
              }
            }
            puVar31 = local_1d30;
            fVar59 = *(float *)(DAT_14c9e27c0 + 4);
            if (fVar59 <= 0.01) {
              fVar59 = 0.01;
            }
            *(float *)(local_1d30 + 0x12) = fVar59;
            *(undefined4 *)((longlong)local_1d30 + 0x94) = 0x3f800000;
            *(undefined4 *)(local_1d30 + 0x7e) = *(undefined4 *)(DAT_14c9de280 + 4);
            *(int *)((longlong)local_1d30 + 0x3f4) = (int)(float)*(int *)(DAT_14c9de268 + 4);
            *(uint *)(local_1d30 + 0x7f) = (uint)(*(int *)(DAT_14c9de250 + 4) != 0);
            *(undefined4 *)((longlong)local_1d30 + 0xbc) = *(undefined4 *)(DAT_14c9de238 + 4);
            iVar35 = *(int *)((longlong)local_1cf8 + 0x9b8);
            *(int *)(local_1d30 + 0x19) = iVar35;
            if (iVar35 < 1) {
              dVar2 = *(double *)(local_1d20 + 0x1030);
              dVar62 = *(double *)(local_1d20 + 0x1038);
              dVar3 = *(double *)(local_1d20 + 0x1040);
              dVar10 = -dVar3;
              dVar12 = -dVar62;
              dVar13 = -dVar2;
              if (local_1cd8._0_4_ == 0) {
                local_708[0] = 1.0;
                local_708[3] = 0.0;
                local_708[4] = 0.0;
                local_708[1] = 0.0;
                local_708[2] = 0.0;
                local_708[5] = 1.0;
                local_708[8] = 0.0;
                local_708[9] = 0.0;
                local_708[6] = 0.0;
                local_708[7] = 0.0;
                local_708[10] = 1.0;
                local_708[0xb] = 0.0;
                local_690 = 0x3ff0000000000000;
                pfVar49 = *(float **)(*param_7 + 0x18);
                dVar14 = ((double)pfVar49[6] - (double)pfVar49[2]) * 0.5;
                dVar16 = ((double)pfVar49[5] - (double)pfVar49[1]) * 0.5;
                dVar15 = ((double)pfVar49[4] - (double)*pfVar49) * 0.5;
                local_1c78 = (double)pfVar49[2] + dVar14;
                local_1c68 = (double)pfVar49[1] + dVar16;
                local_1cf8 = (double)*pfVar49 + dVar15;
                uStack_1c70 = 0;
                local_718 = -local_1c78;
                local_878[0x1e] = 1.0;
                local_878[0x21] = 0.0;
                local_878[0x22] = 0.0;
                local_878[0x1f] = 0.0;
                local_878[0x20] = 0.0;
                local_878[0x23] = 1.0;
                local_878[0x26] = 0.0;
                local_878[0x27] = 0.0;
                local_878[0x24] = 0.0;
                local_878[0x25] = 0.0;
                local_878[0x28] = 1.0;
                local_878[0x29] = 0.0;
                uStack_1cf0 = 0;
                uStack_1c60 = 0;
                local_728._8_4_ = SUB84(local_1c68,0);
                local_728._0_8_ = -local_1cf8;
                local_728._12_4_ = (uint)((ulonglong)local_1c68 >> 0x20) ^ 0x80000000;
                local_710 = 0x3ff0000000000000;
                lVar51 = *(longlong *)(lVar8 + 0x28);
                dVar4 = *(double *)(lVar51 + 0x90);
                dVar5 = *(double *)(lVar51 + 0x50);
                dVar6 = *(double *)(lVar51 + 0x70);
                dVar11 = dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
                uStack_1c40 = 0;
                uStack_1c50 = 0;
                if (((dVar11 != 1.0) || (_Y = dVar4, _Y_00 = dVar6, _X = dVar5, NAN(dVar11))) &&
                   (_Y = DAT_14c8464f0, _Y_00 = DAT_14c8464e8, _X = DAT_14c8464e0,
                   9.99999993922529e-09 <= dVar11)) {
                  dVar11 = 1.0 / SQRT(dVar11);
                  _Y = dVar4 * dVar11;
                  _Y_00 = dVar6 * dVar11;
                  _X = dVar5 * dVar11;
                }
                dVar4 = 0.0;
                local_1c58 = dVar3;
                local_1c48 = dVar62;
                local_708[0xc] = dVar13;
                local_708[0xd] = dVar12;
                local_708[0xe] = dVar10;
                if (((_Y_00 != 0.0) || (NAN(_Y_00))) || ((_X != 0.0 || (NAN(_X))))) {
                  dVar4 = atan2(_Y_00,_X);
                  dVar4 = dVar4 * 57.29577951308232;
                }
                uStack_1cd0 = 0;
                dVar3 = SQRT(_X * _X + _Y_00 * _Y_00);
                dVar62 = 0.0;
                local_1cd8 = dVar2;
                local_1cb8 = _X;
                local_1ca0 = _Y_00;
                if (((_Y != 0.0) || (NAN(_Y))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
                  dVar62 = atan2(_Y,dVar3);
                  dVar62 = dVar62 * 57.29577951308232;
                }
                dVar12 = SQRT(dVar14 * dVar14 + dVar15 * dVar15 + dVar16 * dVar16);
                dVar13 = (dVar4 * 3.1415927410125732) / 180.0;
                local_1c30 = _Y;
                dVar2 = cos(dVar13);
                dVar3 = sin(dVar13);
                dVar10 = sin(dVar13);
                local_178 = cos(dVar13);
                uStack_168 = 0;
                uStack_160 = 0;
                local_148 = 0;
                uStack_140 = 0;
                local_138 = 0;
                uStack_130 = 0;
                local_128 = 1.0;
                local_120 = 0;
                uStack_118 = 0;
                uStack_110 = 0;
                dStack_108 = 0.0;
                local_100 = 0x3ff0000000000000;
                dVar13 = (dVar62 * 3.1415927410125732) / 180.0;
                uStack_170 = -dVar10;
                dStack_158 = dVar3;
                local_150 = dVar2;
                dVar2 = cos(dVar13);
                dVar62 = sin(dVar13);
                dVar3 = sin(dVar13);
                local_1f8[0] = cos(dVar13);
                local_1f8[1] = 0.0;
                local_1f8[3] = 0.0;
                local_1f8[4] = 0.0;
                local_1f8[5] = 1.0;
                local_1f8[6] = 0.0;
                local_1f8[7] = 0.0;
                local_1f8[9] = 0.0;
                local_1f8[0xd] = 0.0;
                local_1f8[0xe] = 0.0;
                local_1f8[0xb] = 0.0;
                local_1f8[0xc] = 0.0;
                local_1f8[0xf] = 1.0;
                local_1f8[2] = -dVar3;
                local_1f8[8] = dVar62;
                local_1f8[10] = dVar2;
                FUN_1447fea8d(&local_688,&local_178,local_1f8);
                local_278 = 1.0;
                uStack_260 = 0;
                uStack_258 = 0.0;
                uStack_270 = 0.0;
                uStack_268 = 0.0;
                local_250 = 1.0;
                local_238 = 0.0;
                local_248 = 0.0;
                uStack_240 = 0;
                local_230 = -0.0;
                local_228 = 1.0;
                local_210 = 0.0;
                dStack_208 = 0.0;
                local_220 = 0;
                dStack_218 = 0.0;
                local_200 = 0x3ff0000000000000;
                pdVar48 = local_878 + 0xe;
                FUN_1447fea8d(pdVar48,&local_688,&local_278);
                pdVar50 = pdVar48;
                pdVar52 = (double *)&local_688;
                for (lVar51 = 0x10; lVar51 != 0; lVar51 = lVar51 + -1) {
                  *pdVar52 = *pdVar50;
                  pdVar50 = pdVar50 + 1;
                  pdVar52 = pdVar52 + 1;
                }
                local_178 = 1.0 / dVar12;
                uStack_160 = 0;
                dStack_158 = 0.0;
                uStack_170 = 0.0;
                uStack_168 = 0;
                local_138 = 0;
                uStack_130 = 0;
                local_148 = 0;
                uStack_140 = 0;
                uStack_110 = 0;
                dStack_108 = 0.0;
                local_120 = 0;
                uStack_118 = 0;
                local_100 = 0x3ff0000000000000;
                local_1f8[0] = 0.0;
                local_1f8[1] = 0.0;
                local_1f8[2] = 1.0;
                local_1f8[3] = 0.0;
                local_1f8[4] = 0.0;
                local_1f8[5] = 1.0;
                local_1f8[6] = 0.0;
                local_1f8[7] = 0.0;
                local_1f8[8] = -1.0;
                local_1f8[0xd] = 0.0;
                local_1f8[0xe] = 0.0;
                local_1f8[0xb] = 0.0;
                local_1f8[0xc] = 0.0;
                local_1f8[9] = 0.0;
                local_1f8[10] = 0.0;
                local_1f8[0xf] = 1.0;
                local_878[0xe] = 0.5;
                local_878[0x11] = 0.0;
                local_878[0x12] = 0.0;
                local_878[0xf] = 0.0;
                local_878[0x10] = 0.0;
                local_878[0x13] = -0.5;
                local_878[0x16] = 0.0;
                local_878[0x17] = 0.0;
                local_878[0x14] = 0.0;
                local_878[0x15] = 0.0;
                local_878[0x18] = -0.5;
                local_878[0x1b] = 0.0;
                local_878[0x1c] = 0.0;
                local_878[0x19] = 0.0;
                local_878[0x1a] = 0.0;
                local_878[0x1d] = 1.0;
                local_888 = 1.0;
                local_878[1] = 0.0;
                local_878[2] = 0.0;
                uStack_880 = 0.0;
                local_878[0] = 0.0;
                local_878[3] = 1.0;
                local_878[6] = 0.0;
                local_878[7] = 0.0;
                local_878[4] = 0.0;
                local_878[5] = 0.0;
                local_878[8] = 1.0;
                local_878[9] = 0.0;
                local_878[10] = 0.5;
                local_878[0xb] = 0.5;
                local_878[0xc] = 0.5;
                local_878[0xd] = 1.0;
                local_1c38 = dVar12;
                local_150 = local_178;
                local_128 = local_178;
                FUN_1447fea8d(&local_278,pdVar48,&local_888);
                FUN_1447fea8d(local_988,local_878 + 0x1e,&local_688);
                FUN_1447fea8d(&local_908,local_988,&local_178);
                FUN_1447fea8d(&local_888,&local_908,local_1f8);
                FUN_1447fea8d(local_878 + 0xe,&local_888,&local_278);
                FUN_1447fea8d(&local_888,local_708,local_878 + 0xe);
                local_908 = CONCAT44((float)uStack_880,(float)local_888);
                uStack_900 = CONCAT44((float)local_878[1],(float)local_878[0]);
                local_8f8 = CONCAT44((float)local_878[3],(float)local_878[2]);
                afStack_8f0[0] = (float)local_878[4];
                afStack_8f0[1] = (float)local_878[5];
                afStack_8f0[2] = (float)local_878[6];
                afStack_8f0[3] = (float)local_878[7];
                fStack_8e0 = (float)local_878[8];
                fStack_8dc = (float)local_878[9];
                local_8d8 = (float)local_878[10];
                fStack_8d4 = (float)local_878[0xb];
                fStack_8d0 = (float)local_878[0xc];
                fStack_8cc = (float)local_878[0xd];
                *(undefined4 *)(local_1d30 + 0x19) = 1;
                local_1d30[0x1a] = local_908;
                local_1d30[0x1b] = uStack_900;
                local_1d30[0x1c] = local_8f8;
                local_1d30[0x1d] = CONCAT44(afStack_8f0[1],afStack_8f0[0]);
                local_1d30[0x1e] = CONCAT44(afStack_8f0[3],afStack_8f0[2]);
                local_1d30[0x1f] = CONCAT44(fStack_8dc,fStack_8e0);
                local_1d30[0x20] = CONCAT44(fStack_8d4,local_8d8);
                local_1d30[0x21] = CONCAT44(fStack_8cc,fStack_8d0);
                if (((((((1e-08 < ABS((float)local_888)) || (1e-08 < ABS((float)uStack_880))) ||
                       (1e-08 < ABS((float)local_878[0]))) ||
                      ((1e-08 < ABS((float)local_878[2]) || (1e-08 < ABS((float)local_878[3]))))) ||
                     (1e-08 < ABS(afStack_8f0[0]))) ||
                    ((1e-08 < ABS(afStack_8f0[2]) || (1e-08 < ABS(afStack_8f0[3]))))) ||
                   (1e-08 < ABS(fStack_8e0))) {
                  puVar31 = (undefined8 *)FUN_144906c86(&local_888,&local_908);
                }
                else {
                  local_878[4] = _DAT_14c846280;
                  local_878[5] = _DAT_14c846288;
                  local_878[2] = (double)CONCAT44(DAT_14c846274,DAT_14c846270);
                  local_878[3] = (double)CONCAT44(DAT_14c84627c,DAT_14c846278);
                  local_878[0] = (double)CONCAT44(DAT_14c846264,DAT_14c846260);
                  local_878[1] = (double)CONCAT44(DAT_14c84626c,DAT_14c846268);
                  local_888 = (double)CONCAT44(DAT_14c846254,DAT_14c846250);
                  uStack_880 = (double)CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
                  puVar31 = local_1d30;
                }
                local_1d30[0x50] = local_878[4];
                local_1d30[0x51] = local_878[5];
                local_1d30[0x4e] = local_878[2];
                local_1d30[0x4f] = local_878[3];
                local_1d30[0x4c] = local_878[0];
                local_1d30[0x4d] = local_878[1];
                local_1d30[0x4a] = local_888;
                local_1d30[0x4b] = uStack_880;
                *(float *)(local_1d30 + 0x14) =
                     (float)((local_1cd8 + local_1cf8) - local_1cb8 * local_1c38);
                *(float *)((longlong)local_1d30 + 0xa4) =
                     (float)((local_1c48 + local_1c68) - local_1ca0 * local_1c38);
                *(float *)(local_1d30 + 0x15) =
                     (float)((local_1c58 + local_1c78) - local_1c30 * local_1c38);
                local_1cf8 = (double)CONCAT44(local_1cf8._4_4_,
                                              (int)CONCAT71((int7)((ulonglong)puVar31 >> 8),1));
                iVar28 = local_1d14;
                bVar41 = (byte)local_1d10;
              }
              else {
                local_688._0_4_ = 0;
                local_688._4_4_ = 0x3ff00000;
                uStack_670 = 0;
                uStack_66c = 0;
                uStack_668 = 0;
                iStack_664 = 0;
                uStack_680 = 0;
                uStack_67c = 0;
                uStack_678 = 0;
                local_660 = 0x3ff0000000000000;
                local_648 = 0;
                uStack_640 = 0;
                local_658 = 0;
                uStack_650 = 0;
                local_638 = 0x3ff0000000000000;
                local_630 = 0;
                local_610 = 0x3ff0000000000000;
                local_708[0] = 0.0;
                local_708[1] = 0.0;
                local_628 = dVar13;
                local_620 = dVar12;
                local_618 = dVar10;
                FUN_14030f5be(local_1cf8,&local_178,local_708,0);
                FUN_1447fea8d(local_1f8,&local_688,&local_178);
                local_278 = (double)CONCAT44((float)local_1f8[1],(float)local_1f8[0]);
                uStack_270 = (double)CONCAT44((float)local_1f8[3],(float)local_1f8[2]);
                uStack_268 = (double)CONCAT44((float)local_1f8[5],(float)local_1f8[4]);
                uStack_260 = CONCAT44((float)local_1f8[7],(float)local_1f8[6]);
                uStack_258 = (double)CONCAT44((float)local_1f8[9],(float)local_1f8[8]);
                local_250 = (double)CONCAT44((float)local_1f8[0xb],(float)local_1f8[10]);
                local_248 = (double)CONCAT44((float)local_1f8[0xd],(float)local_1f8[0xc]);
                uStack_240 = CONCAT44((float)local_1f8[0xf],(float)local_1f8[0xe]);
                *(undefined4 *)(puVar31 + 0x19) = 1;
                puVar31[0x1a] = local_278;
                puVar31[0x1b] = uStack_270;
                puVar31[0x1c] = uStack_268;
                puVar31[0x1d] = uStack_260;
                puVar31[0x1e] = uStack_258;
                puVar31[0x1f] = local_250;
                puVar31[0x20] = local_248;
                puVar31[0x21] = uStack_240;
                if ((((1e-08 < ABS((float)local_1f8[0])) || (1e-08 < ABS((float)local_1f8[1]))) ||
                    (1e-08 < ABS((float)local_1f8[2]))) ||
                   ((((1e-08 < ABS((float)local_1f8[4]) || (1e-08 < ABS((float)local_1f8[5]))) ||
                     ((1e-08 < ABS((float)local_1f8[6]) ||
                      ((1e-08 < ABS((float)local_1f8[8]) || (1e-08 < ABS((float)local_1f8[9])))))))
                    || (1e-08 < ABS((float)local_1f8[10]))))) {
                  FUN_144906c86(local_1f8,&local_278);
                }
                else {
                  local_1f8[6] = _DAT_14c846280;
                  local_1f8[7] = _DAT_14c846288;
                  local_1f8[4] = (double)CONCAT44(DAT_14c846274,DAT_14c846270);
                  local_1f8[5] = (double)CONCAT44(DAT_14c84627c,DAT_14c846278);
                  local_1f8[2] = (double)CONCAT44(DAT_14c846264,DAT_14c846260);
                  local_1f8[3] = (double)CONCAT44(DAT_14c84626c,DAT_14c846268);
                  local_1f8[0] = (double)CONCAT44(DAT_14c846254,DAT_14c846250);
                  local_1f8[1] = (double)CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
                }
                local_1d30[0x50] = local_1f8[6];
                local_1d30[0x51] = local_1f8[7];
                local_1d30[0x4e] = local_1f8[4];
                local_1d30[0x4f] = local_1f8[5];
                local_1d30[0x4c] = local_1f8[2];
                local_1d30[0x4d] = local_1f8[3];
                local_1d30[0x4a] = local_1f8[0];
                local_1d30[0x4b] = local_1f8[1];
                dVar2 = *(double *)(local_1d20 + 0x1040);
                dVar62 = *(double *)((longlong)local_1cf8 + 0x58);
                dVar3 = *(double *)(local_1d20 + 0x1038);
                dVar10 = *(double *)((longlong)local_1cf8 + 0x50);
                *(float *)(local_1d30 + 0x14) =
                     (float)(*(double *)(local_1d20 + 0x1030) -
                            *(double *)((longlong)local_1cf8 + 0x48));
                *(float *)((longlong)local_1d30 + 0xa4) = (float)(dVar3 - dVar10);
                *(float *)(local_1d30 + 0x15) = (float)(dVar2 - dVar62);
                local_1cf8 = (double)((ulonglong)local_1cf8 & 0xffffffff00000000);
                bVar41 = (byte)local_1d10;
              }
            }
            else {
              local_1cf8 = *(double *)(local_1d20 + 0x1030);
              local_1c48 = *(double *)(local_1d20 + 0x1038);
              local_1c58 = *(double *)(local_1d20 + 0x1040);
              uStack_1c50 = 0;
              local_178 = 1.0;
              uStack_160 = 0;
              dStack_158 = 0.0;
              uStack_170 = 0.0;
              uStack_168 = 0;
              local_150 = 1.0;
              local_138 = 0;
              uStack_130 = 0;
              local_148 = 0;
              uStack_140 = 0;
              local_128 = 1.0;
              local_120 = 0;
              uStack_118 = *(ulonglong *)(local_1d20 + 0x1030) ^ 0x8000000000000000;
              uStack_110 = *(ulonglong *)(local_1d20 + 0x1038) ^ 0x8000000000000000;
              dStack_108 = -local_1c58;
              local_100 = 0x3ff0000000000000;
              lVar51 = *(longlong *)(lVar8 + 0x28);
              local_1c68 = *(double *)(lVar51 + 0x20);
              local_1c78 = *(double *)(lVar51 + 0x28);
              local_1cb8 = *(double *)(lVar51 + 0x30);
              pdVar48 = (double *)(lVar51 + 0x50);
              pdVar50 = local_1f8;
              for (lVar43 = 0x10; lVar43 != 0; lVar43 = lVar43 + -1) {
                *pdVar50 = *pdVar48;
                pdVar48 = pdVar48 + 1;
                pdVar50 = pdVar50 + 1;
              }
              puVar31 = &DAT_14c846400;
              puVar47 = &local_278;
              for (lVar43 = 0x10; lVar43 != 0; lVar43 = lVar43 + -1) {
                *puVar47 = *puVar31;
                puVar31 = puVar31 + 1;
                puVar47 = puVar47 + 1;
              }
              if (local_1cd8._0_4_ == 3) {
                dVar2 = *(double *)(lVar51 + 0x90);
                dVar62 = *(double *)(lVar51 + 0x50);
                dVar3 = *(double *)(lVar51 + 0x70);
                dVar10 = dVar2 * dVar2 + dVar62 * dVar62 + dVar3 * dVar3;
                if (((dVar10 != 1.0) ||
                    (dVar12 = dVar2, dVar13 = dVar3, dVar4 = dVar62, NAN(dVar10))) &&
                   (dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e8, dVar4 = DAT_14c8464e0,
                   9.99999993922529e-09 <= dVar10)) {
                  dVar10 = 1.0 / SQRT(dVar10);
                  dVar12 = dVar2 * dVar10;
                  dVar13 = dVar3 * dVar10;
                  dVar4 = dVar62 * dVar10;
                }
                dVar2 = 0.0;
                if (((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
                  dVar2 = atan2(dVar13,dVar4);
                  dVar2 = dVar2 * 57.29577951308232;
                }
                dVar3 = SQRT(dVar4 * dVar4 + dVar13 * dVar13);
                dVar62 = 0.0;
                if (((dVar12 != 0.0) || (NAN(dVar12))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
                  dVar62 = atan2(dVar12,dVar3);
                  dVar62 = dVar62 * 57.29577951308232;
                }
                dVar3 = sin(dVar62 * 0.01745329238474369);
                dVar10 = sin(dVar2 * 0.01745329238474369);
                dVar62 = cos(dVar62 * 0.01745329238474369);
                dVar2 = cos(dVar2 * 0.01745329238474369);
                uVar63 = SUB84(DAT_14c8464e0,0);
                uVar64 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
                uVar60 = SUB84(DAT_14c8464e8,0);
                uVar61 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
                uVar65 = SUB84(DAT_14c8464f0,0);
                uVar66 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                local_278 = dVar62 * dVar2;
                uStack_270 = dVar10 * dVar62;
                uStack_268 = dVar3;
                uStack_260 = 0;
                uStack_258 = dVar3 * 0.0 * dVar2 - dVar10;
                local_250 = dVar3 * 0.0 * dVar10 + dVar2;
                local_248 = dVar62 * -0.0;
                uStack_240 = 0;
                local_238 = -(dVar3 * dVar2 + dVar10 * 0.0);
                local_230 = dVar2 * 0.0 - dVar10 * dVar3;
                local_228 = dVar62;
                local_220 = 0;
                dStack_218 = DAT_14c8464e0;
                local_210 = DAT_14c8464e8;
                dStack_208 = DAT_14c8464f0;
                local_200 = 0x3ff0000000000000;
              }
              else {
                uVar63 = SUB84(DAT_14c8464e0,0);
                uVar64 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
                uVar60 = SUB84(DAT_14c8464e8,0);
                uVar61 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
                uVar65 = SUB84(DAT_14c8464f0,0);
                uVar66 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              }
              local_878[0x1e] = -1.0;
              local_878[0x1f] = 0.0;
              local_878[0x20] = 0.0;
              local_878[0xe] = 0.0;
              local_878[0xf] = -1.0;
              local_878[0x10] = 0.0;
              local_888 = 0.0;
              uStack_880 = 0.0;
              local_878[0] = 1.0;
              lVar51 = 0;
              do {
                *(undefined8 *)((longlong)local_708 + lVar51 * 4) =
                     *(undefined8 *)((longlong)local_878 + lVar51 + 0x70);
                *(undefined8 *)((longlong)local_708 + lVar51 * 4 + 8) =
                     *(undefined8 *)((longlong)&local_888 + lVar51);
                *(undefined8 *)((longlong)local_708 + lVar51 * 4 + 0x10) =
                     *(undefined8 *)((longlong)local_878 + lVar51 + 0xf0);
                *(undefined8 *)((longlong)local_708 + lVar51 * 4 + 0x18) = 0;
                lVar51 = lVar51 + 8;
              } while (lVar51 != 0x18);
              dVar2 = -(double)CONCAT44(uVar66,uVar65);
              dVar62 = (double)CONCAT44(uVar64,uVar63) * -0.0;
              local_708[0xe] = (double)CONCAT44(uVar66,uVar65) * -0.0;
              local_708[0xc] = dVar62 + (double)CONCAT44(uVar61,uVar60) + local_708[0xe];
              local_878[0x1a] = (double)CONCAT44(uVar61,uVar60) * -0.0;
              dVar62 = dVar62 + local_878[0x1a];
              local_1cd8 = (double)CONCAT44(uVar66,uVar65);
              uStack_1cd0 = 0;
              local_708[0xd] = dVar62 - (double)CONCAT44(uVar66,uVar65);
              local_708[0xe] = local_878[0x1a] + (double)CONCAT44(uVar64,uVar63) + local_708[0xe];
              local_690 = 0x3ff0000000000000;
              pdVar48 = local_708;
              pdVar50 = (double *)&local_688;
              for (lVar51 = 0x10; lVar51 != 0; lVar51 = lVar51 + -1) {
                *pdVar50 = *pdVar48;
                pdVar48 = pdVar48 + 1;
                pdVar50 = pdVar50 + 1;
              }
              local_878[0xe] = 1.0;
              local_878[0xf] = 0.0;
              local_878[0x10] = 0.0;
              local_888 = 0.0;
              uStack_880 = 1.0;
              local_878[0] = 0.0;
              local_908 = 0;
              uStack_900 = 0;
              local_8f8 = 0x3ff0000000000000;
              lVar51 = 0;
              do {
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0xf0) =
                     *(undefined8 *)((longlong)&local_888 + lVar51);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0xf8) =
                     *(undefined8 *)((longlong)&local_908 + lVar51);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0x100) =
                     *(undefined8 *)((longlong)local_878 + lVar51 + 0x70);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0x108) = 0;
                lVar51 = lVar51 + 8;
              } while (lVar51 != 0x18);
              dVar3 = -(double)CONCAT44(uVar64,uVar63) * 0.0;
              dVar10 = dVar2 * 0.0;
              local_728._0_8_ = (dVar3 - (double)CONCAT44(uVar61,uVar60)) + dVar10;
              local_728._8_8_ = local_708[0xd];
              local_878[0x1a] = local_878[0x1a] - (double)CONCAT44(uVar64,uVar63);
              local_718 = dVar10 + local_878[0x1a];
              local_710 = 0x3ff0000000000000;
              pdVar48 = local_878 + 0x1e;
              pdVar50 = local_1c00;
              for (lVar51 = 0x10; lVar51 != 0; lVar51 = lVar51 + -1) {
                *pdVar50 = *pdVar48;
                pdVar48 = pdVar48 + 1;
                pdVar50 = pdVar50 + 1;
              }
              local_888 = 0.0;
              uStack_880 = -1.0;
              local_878[0] = 0.0;
              local_908 = 0x3ff0000000000000;
              uStack_900 = 0;
              local_8f8 = 0x8000000000000000;
              local_988[0] = 0.0;
              local_988[1] = 0.0;
              local_988[2] = 1.0;
              lVar51 = 0;
              do {
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0x70) =
                     *(undefined8 *)((longlong)&local_908 + lVar51);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0x78) =
                     *(undefined8 *)((longlong)local_988 + lVar51);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0x80) =
                     *(undefined8 *)((longlong)&local_888 + lVar51);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 0x88) = 0;
                lVar51 = lVar51 + 8;
              } while (lVar51 != 0x18);
              local_878[0x1a] = dVar2 * -0.0 + local_878[0x1a];
              local_878[0x1b] = local_708[0xd];
              local_878[0x1c] = local_708[0xc];
              local_878[0x1d] = 1.0;
              pdVar48 = local_878 + 0xe;
              pdVar50 = local_1c08;
              for (lVar51 = 0x10; lVar51 != 0; lVar51 = lVar51 + -1) {
                *pdVar50 = *pdVar48;
                pdVar48 = pdVar48 + 1;
                pdVar50 = pdVar50 + 1;
              }
              local_908 = 0;
              uStack_900 = 0x3ff0000000000000;
              local_8f8 = 0;
              local_988[0] = -1.0;
              local_988[1] = 0.0;
              local_988[2] = 0.0;
              local_1bb0[7] = 0;
              local_1bb0[8] = 0x8000000000000000;
              local_1bb0[9] = 0x3ff0000000000000;
              lVar51 = 0;
              do {
                *(undefined8 *)((longlong)&local_888 + lVar51 * 4) =
                     *(undefined8 *)((longlong)local_988 + lVar51);
                *(undefined8 *)((longlong)&uStack_880 + lVar51 * 4) =
                     *(undefined8 *)((longlong)local_1bb0 + lVar51 + 0x38);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4) =
                     *(undefined8 *)((longlong)&local_908 + lVar51);
                *(undefined8 *)((longlong)local_878 + lVar51 * 4 + 8) = 0;
                lVar51 = lVar51 + 8;
              } while (lVar51 != 0x18);
              local_878[10] = local_708[0xe];
              local_878[0xb] = (dVar3 + (double)CONCAT44(uVar61,uVar60) * 0.0) - local_1cd8;
              local_878[0xc] = (double)local_728._0_8_;
              local_878[0xd] = 1.0;
              puVar31 = &local_888;
              puVar47 = local_508;
              for (lVar51 = 0x10; lVar51 != 0; lVar51 = lVar51 + -1) {
                *puVar47 = *puVar31;
                puVar31 = puVar31 + 1;
                puVar47 = puVar47 + 1;
              }
              local_988[0] = 0.0;
              local_988[1] = 0.0;
              local_988[2] = -1.0;
              local_1bb0[7] = 0x8000000000000000;
              local_1bb0[8] = 0x3ff0000000000000;
              local_1bb0[9] = 0;
              local_1bb0[4] = 0x3ff0000000000000;
              local_1bb0[5] = 0;
              local_1bb0[6] = 0;
              lVar51 = 0;
              do {
                *(undefined8 *)((longlong)&local_908 + lVar51 * 4) =
                     *(undefined8 *)((longlong)local_1bb0 + lVar51 + 0x38);
                *(undefined8 *)((longlong)&uStack_900 + lVar51 * 4) =
                     *(undefined8 *)((longlong)local_1bb0 + lVar51 + 0x20);
                *(undefined8 *)((longlong)&local_8f8 + lVar51 * 4) =
                     *(undefined8 *)((longlong)local_988 + lVar51);
                (afStack_8f0 + lVar51)[0] = 0.0;
                (afStack_8f0 + lVar51)[1] = 0.0;
                lVar51 = lVar51 + 8;
              } while (lVar51 != 0x18);
              local_8a8 = dVar10 + -(double)CONCAT44(uVar64,uVar63) * -0.0 +
                                   -(double)CONCAT44(uVar61,uVar60);
              local_8a0 = local_718;
              local_898 = dVar62 - dVar2;
              local_890 = 0x3ff0000000000000;
              puVar31 = &local_908;
              puVar47 = local_488;
              for (lVar51 = 0x10; lVar51 != 0; lVar51 = lVar51 + -1) {
                *puVar47 = *puVar31;
                puVar31 = puVar31 + 1;
                puVar47 = puVar47 + 1;
              }
              local_1bb0[7] = 0;
              local_1bb0[8] = 0;
              local_1bb0[9] = 0x3ff0000000000000;
              local_1bb0[4] = 0;
              local_1bb0[5] = 0xbff0000000000000;
              local_1bb0[6] = 0;
              local_1bb0[1] = 0x3ff0000000000000;
              local_1bb0[2] = 0;
              local_1bb0[3] = 0x8000000000000000;
              lVar51 = 0;
              do {
                *(undefined8 *)((longlong)local_988 + lVar51 * 4) =
                     *(undefined8 *)((longlong)local_1bb0 + lVar51 + 0x20);
                *(undefined8 *)((longlong)local_988 + lVar51 * 4 + 8) =
                     *(undefined8 *)((longlong)local_1bb0 + lVar51 + 8);
                *(undefined8 *)((longlong)local_988 + lVar51 * 4 + 0x10) =
                     *(undefined8 *)((longlong)local_1bb0 + lVar51 + 0x38);
                *(undefined8 *)((longlong)local_988 + lVar51 * 4 + 0x18) = 0;
                lVar51 = lVar51 + 8;
              } while (lVar51 != 0x18);
              local_988[0xc] = local_708[0xc];
              local_988[0xd] = local_878[0x1a];
              local_988[0xe] = local_708[0xd];
              local_910 = 0x3ff0000000000000;
              pdVar48 = local_988;
              pdVar50 = local_408;
              for (lVar51 = 0x10; lVar51 != 0; lVar51 = lVar51 + -1) {
                *pdVar50 = *pdVar48;
                pdVar48 = pdVar48 + 1;
                pdVar50 = pdVar50 + 1;
              }
              fVar59 = (float)(**(code **)(**(longlong **)(lVar8 + 0x28) + 0x18))();
              local_708[10] = (double)fVar59 / ((double)fVar59 + -1.0);
              if ((fVar59 == 1.0) && (!NAN(fVar59))) {
                local_708[10] = 1.0;
              }
              local_708[5] = ((double)(int)local_1cc0 / 1.000000043711391) / (double)(int)local_1cc0
              ;
              local_708[0] = 0.9999999562886109;
              local_708[1] = 0.0;
              local_708[2] = 0.0;
              local_708[3] = 0.0;
              local_708[4] = 0.0;
              local_708[8] = 0.0;
              local_708[9] = 0.0;
              local_708[6] = 0.0;
              local_708[7] = 0.0;
              local_708[0xe] = -local_708[10];
              local_708[0xb] = 1.0;
              local_708[0xc] = 0.0;
              local_708[0xd] = 0.0;
              local_690 = 0;
              local_878[0xe] = 0.5;
              local_878[0x11] = 0.0;
              local_878[0x12] = 0.0;
              local_878[0xf] = 0.0;
              local_878[0x10] = 0.0;
              local_878[0x13] = -0.5;
              local_878[0x16] = 0.0;
              local_878[0x17] = 0.0;
              local_878[0x14] = 0.0;
              local_878[0x15] = 0.0;
              local_878[0x18] = -0.5;
              local_878[0x1b] = 0.0;
              local_878[0x1c] = 0.0;
              local_878[0x19] = 0.0;
              local_878[0x1a] = 0.0;
              local_878[0x1d] = 1.0;
              local_888 = 1.0;
              local_878[1] = 0.0;
              local_878[2] = 0.0;
              uStack_880 = 0.0;
              local_878[0] = 0.0;
              local_878[3] = 1.0;
              local_878[6] = 0.0;
              local_878[7] = 0.0;
              local_878[4] = 0.0;
              local_878[5] = 0.0;
              local_878[8] = 1.0;
              local_878[9] = 0.0;
              local_878[10] = 0.5;
              local_878[0xb] = 0.5;
              local_878[0xc] = 0.5;
              local_878[0xd] = 1.0;
              FUN_1447fea8d(local_878 + 0x1e,local_878 + 0xe,&local_888);
              if (0 < *(int *)(local_1d30 + 0x19)) {
                pfVar49 = (float *)(local_1d30 + 0x1a);
                puVar31 = &local_688;
                lVar51 = 0;
                do {
                  FUN_1447fea8d(local_988,local_1f8,&local_278);
                  FUN_1447fea8d(&local_908,local_988,puVar31);
                  FUN_1447fea8d(&local_888,&local_908,local_708);
                  FUN_1447fea8d(local_878 + 0xe,&local_888,local_878 + 0x1e);
                  FUN_1447fea8d(&local_888,&local_178,local_878 + 0xe);
                  *pfVar49 = (float)local_888;
                  pfVar49[1] = (float)uStack_880;
                  pfVar49[2] = (float)local_878[0];
                  pfVar49[3] = (float)local_878[1];
                  pfVar49[4] = (float)local_878[2];
                  pfVar49[5] = (float)local_878[3];
                  pfVar49[6] = (float)local_878[4];
                  pfVar49[7] = (float)local_878[5];
                  pfVar49[8] = (float)local_878[6];
                  pfVar49[9] = (float)local_878[7];
                  pfVar49[10] = (float)local_878[8];
                  pfVar49[0xb] = (float)local_878[9];
                  pfVar49[0xc] = (float)local_878[10];
                  pfVar49[0xd] = (float)local_878[0xb];
                  pfVar49[0xe] = (float)local_878[0xc];
                  pfVar49[0xf] = (float)local_878[0xd];
                  if (((((1e-08 < ABS(*pfVar49)) || (1e-08 < ABS(pfVar49[1]))) ||
                       (1e-08 < ABS(pfVar49[2]))) ||
                      (((1e-08 < ABS(pfVar49[4]) || (1e-08 < ABS(pfVar49[5]))) ||
                       ((1e-08 < ABS(pfVar49[6]) ||
                        ((1e-08 < ABS(pfVar49[8]) || (1e-08 < ABS(pfVar49[9]))))))))) ||
                     (1e-08 < ABS(pfVar49[10]))) {
                    FUN_144906c86(&local_888,pfVar49);
                  }
                  else {
                    local_878[4] = _DAT_14c846280;
                    local_878[5] = _DAT_14c846288;
                    local_878[2] = (double)CONCAT44(DAT_14c846274,DAT_14c846270);
                    local_878[3] = (double)CONCAT44(DAT_14c84627c,DAT_14c846278);
                    local_878[0] = (double)CONCAT44(DAT_14c846264,DAT_14c846260);
                    local_878[1] = (double)CONCAT44(DAT_14c84626c,DAT_14c846268);
                    local_888 = (double)CONCAT44(DAT_14c846254,DAT_14c846250);
                    uStack_880 = (double)CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
                  }
                  *(double *)(pfVar49 + 0x6c) = local_878[4];
                  *(double *)(pfVar49 + 0x6e) = local_878[5];
                  *(double *)(pfVar49 + 0x68) = local_878[2];
                  *(double *)(pfVar49 + 0x6a) = local_878[3];
                  *(double *)(pfVar49 + 100) = local_878[0];
                  *(double *)(pfVar49 + 0x66) = local_878[1];
                  pfVar49[0x60] = (float)local_888;
                  pfVar49[0x61] = local_888._4_4_;
                  pfVar49[0x62] = (float)uStack_880;
                  pfVar49[99] = uStack_880._4_4_;
                  lVar51 = lVar51 + 1;
                  pfVar49 = pfVar49 + 0x10;
                  puVar31 = puVar31 + 0x10;
                } while (lVar51 < *(int *)(local_1d30 + 0x19));
              }
              *(float *)(local_1d30 + 0x14) = (float)(local_1cf8 + local_1c68);
              *(float *)((longlong)local_1d30 + 0xa4) = (float)(local_1c48 + local_1c78);
              *(float *)(local_1d30 + 0x15) = (float)(local_1c58 + local_1cb8);
              local_1cf8 = (double)((ulonglong)local_1cf8 & 0xffffffff00000000);
              lVar44 = local_1d08;
              iVar28 = local_1d14;
              bVar41 = (byte)local_1d10;
            }
            local_1bc0 = *(float *)(local_1d30 + 0x15);
            local_1bc8 = local_1d30[0x14];
            lVar51 = (longlong)*(int *)(local_1d30 + 0x19);
            if (0 < lVar51) {
              memcpy(&local_1b28,local_1d30 + 0x1a,lVar51 << 6);
            }
            lVar43 = *(longlong *)(lVar8 + 0x28);
            dVar2 = *(double *)(lVar43 + 0x90);
            dVar62 = *(double *)(lVar43 + 0x50);
            dVar3 = *(double *)(lVar43 + 0x70);
            dVar10 = dVar2 * dVar2 + dVar62 * dVar62 + dVar3 * dVar3;
            if (((dVar10 != 1.0) || (dVar12 = dVar2, dVar13 = dVar3, dVar4 = dVar62, NAN(dVar10)))
               && (dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e8, dVar4 = DAT_14c8464e0,
                  9.99999993922529e-09 <= dVar10)) {
              dVar10 = 1.0 / SQRT(dVar10);
              dVar12 = dVar2 * dVar10;
              dVar13 = dVar3 * dVar10;
              dVar4 = dVar62 * dVar10;
            }
            uVar55 = (int)local_1cc0 + 7U >> 3;
            iVar35 = (uint)bVar41 * 5 + 1;
            if ((float)local_1cb0 <= 0.0) {
              local_1cb0._0_4_ = 0.0;
            }
            local_1bd8 = CONCAT44((float)dVar13,(float)dVar4);
            uStack_1bd0 = CONCAT44(local_1bc0 * (float)dVar12 +
                                   (float)local_1bc8 * (float)dVar4 +
                                   local_1bc8._4_4_ * (float)dVar13,(float)dVar12) ^
                          0x8000000000000000;
            uVar40 = local_1cc0 << 0x20 | local_1cc0 & 0xffffffff;
            local_1d30[0x16] = uVar40;
            *(int *)(local_1d30 + 0x17) = iVar28;
            fVar59 = *(float *)(DAT_14c9e27f0 + 4);
            if (fVar59 <= 0.0) {
              fVar59 = 0.0;
            }
            *(float *)(local_1d30 + 0x18) = fVar59;
            *(float *)((longlong)local_1d30 + 0xc4) = (float)local_1cb0;
            lVar43 = *param_7;
            local_1d10 = lVar51;
            local_1cb0 = uVar40;
            FUN_1404256ca();
            cVar26 = DAT_14c9e28c9;
            if (DAT_14c9e28c9 == '\x03') {
              cVar26 = '\x02';
            }
            local_1d30[0x7a] = lVar43;
            *(char *)(local_1d30 + 0x7b) = cVar26;
            lVar51 = *param_8;
            FUN_1403f28ae();
            plVar34 = local_1d28;
            cVar26 = DAT_14c9e2961;
            if (DAT_14c9e2961 == '\x03') {
              cVar26 = '\x02';
            }
            local_1d30[0x7c] = lVar51;
            *(char *)(local_1d30 + 0x7d) = cVar26;
            *(uint *)(local_1d30 + 0x80) = uVar55;
            local_1cd8 = (double)CONCAT44(local_1cd8._4_4_,uVar55);
            *(uint *)((longlong)local_1d30 + 0x404) = uVar55;
            local_1cc0 = CONCAT44(local_1cc0._4_4_,iVar35);
            *(int *)(local_1d30 + 0x81) = iVar35;
            *(undefined4 *)((longlong)local_1d30 + 0x40c) = *(undefined4 *)(DAT_14c9e2838 + 4);
            puVar47 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar31 = puVar47 + 8;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar31) {
              FUN_140023dd8(local_1d28);
              puVar47 = (undefined8 *)(*plVar34 + 7U & 0xfffffffffffffff8);
              puVar31 = puVar47 + 8;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar31;
            puVar47[1] = *(undefined8 *)(local_1c88 + 8);
            puVar47[2] = 0;
            *(undefined1 *)(puVar47 + 3) = 2;
            *(undefined8 *)((longlong)puVar47 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar47 + 5) = 0;
            *puVar47 = &PTR_FUN_14a1fb3e8;
            *(undefined2 *)(puVar47 + 6) = 0x1c;
            *(undefined1 *)((longlong)puVar47 + 0x32) = 0;
            puVar47[7] = local_1c88;
            iVar28 = *(int *)(lVar44 + 0x1a0);
            *(uint *)(lVar44 + 0x1a0) = iVar28 + 1U;
            if (*(uint *)(lVar44 + 0x1a4) < iVar28 + 1U) {
              FUN_1447568fc(local_1ce0,iVar28);
            }
            uVar40 = local_1c28;
            plVar34 = local_1d28;
            *(undefined8 **)(*(longlong *)(lVar44 + 0x198) + (longlong)iVar28 * 8) = puVar47;
            *(int *)((longlong)puVar47 + 0x1c) = *(int *)(lVar44 + 0x1a0) + -1;
            local_1d30[0x82] = puVar47;
            cVar26 = *(char *)(local_1c28 + 0x68);
            puVar47 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar31 = puVar47 + 8;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar31) {
              FUN_140023dd8(local_1d28,0x48);
              puVar47 = (undefined8 *)(*plVar34 + 7U & 0xfffffffffffffff8);
              puVar31 = puVar47 + 8;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar31;
            puVar47[1] = *(undefined8 *)(uVar40 + 8);
            puVar47[2] = 0;
            *(undefined1 *)(puVar47 + 3) = 2;
            *(undefined8 *)((longlong)puVar47 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar47 + 5) = 0;
            *puVar47 = &PTR_FUN_14a1fb3e8;
            *(byte *)(puVar47 + 6) = cVar26 >> 7 & 0x1c;
            *(undefined2 *)((longlong)puVar47 + 0x31) = 0;
            puVar47[7] = uVar40;
            iVar28 = *(int *)(lVar44 + 0x1a0);
            *(uint *)(lVar44 + 0x1a0) = iVar28 + 1U;
            if (*(uint *)(lVar44 + 0x1a4) < iVar28 + 1U) {
              FUN_1447568fc(local_1ce0,iVar28);
            }
            plVar34 = local_1d28;
            *(undefined8 **)(*(longlong *)(lVar44 + 0x198) + (longlong)iVar28 * 8) = puVar47;
            *(int *)((longlong)puVar47 + 0x1c) = *(int *)(lVar44 + 0x1a0) + -1;
            local_1d30[0x83] = puVar47;
            uVar7 = *(undefined1 *)(local_1c98 + 0x94);
            puVar47 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar31 = puVar47 + 9;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar31) {
              FUN_140023dd8(local_1d28,0x50);
              puVar47 = (undefined8 *)(*plVar34 + 7U & 0xfffffffffffffff8);
              puVar31 = puVar47 + 9;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar31;
            puVar47[1] = *(undefined8 *)(local_1c98 + 8);
            puVar47[2] = 0;
            *(undefined1 *)(puVar47 + 3) = 0;
            *(undefined8 *)((longlong)puVar47 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar47 + 5) = 0;
            *puVar47 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar47 + 6) = uVar7;
            *(undefined1 *)(puVar47 + 7) = 0;
            *(undefined4 *)((longlong)puVar47 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar47 + 0x35) = 0;
            puVar47[8] = local_1c98;
            iVar28 = *(int *)(lVar44 + 0x1a0);
            *(uint *)(lVar44 + 0x1a0) = iVar28 + 1U;
            if (*(uint *)(lVar44 + 0x1a4) < iVar28 + 1U) {
              FUN_1447568fc(local_1ce0,iVar28);
            }
            uVar53 = local_1c20;
            plVar34 = local_1d28;
            *(undefined8 **)(*(longlong *)(lVar44 + 0x198) + (longlong)iVar28 * 8) = puVar47;
            *(int *)((longlong)puVar47 + 0x1c) = *(int *)(lVar44 + 0x1a0) + -1;
            local_1d30[0x84] = puVar47;
            cVar26 = *(char *)(local_1c20 + 0x68);
            puVar47 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar31 = puVar47 + 8;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar31) {
              FUN_140023dd8(local_1d28,0x48);
              puVar47 = (undefined8 *)(*plVar34 + 7U & 0xfffffffffffffff8);
              puVar31 = puVar47 + 8;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar31;
            puVar47[1] = *(undefined8 *)(uVar53 + 8);
            puVar47[2] = 0;
            *(undefined1 *)(puVar47 + 3) = 2;
            *(undefined8 *)((longlong)puVar47 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar47 + 5) = 0;
            *puVar47 = &PTR_FUN_14a1fb3e8;
            *(byte *)(puVar47 + 6) = cVar26 >> 7 & 0x1c;
            *(undefined2 *)((longlong)puVar47 + 0x31) = 0;
            puVar47[7] = uVar53;
            iVar28 = *(int *)(lVar44 + 0x1a0);
            *(uint *)(lVar44 + 0x1a0) = iVar28 + 1U;
            if (*(uint *)(lVar44 + 0x1a4) < iVar28 + 1U) {
              FUN_1447568fc(local_1ce0,iVar28);
            }
            *(undefined8 **)(*(longlong *)(lVar44 + 0x198) + (longlong)iVar28 * 8) = puVar47;
            *(int *)((longlong)puVar47 + 0x1c) = *(int *)(lVar44 + 0x1a0) + -1;
            local_1d30[0x85] = puVar47;
            puVar31 = local_1d30 + 2;
            iVar28 = *(int *)(DAT_14c9e2820 + 4);
            bVar41 = *(byte *)(local_1d20 + 0x23ee);
            uVar9 = *(undefined8 *)(local_1d20 + 0x13818);
            FUN_145f48de6();
            FUN_1448e935e(uVar9,&local_688,&DAT_14c9e3898,(uint)(iVar28 != 0) + (uint)bVar41 * 2);
            FUN_145f48de6();
            local_178 = (double)CONCAT44(local_688._4_4_,(int)local_688);
            uStack_170 = (double)CONCAT44(uStack_67c,uStack_680);
            local_688._0_4_ = local_1cd8._0_4_;
            local_688._4_4_ = local_1cd8._0_4_;
            uStack_680 = (int)local_1cc0;
            local_1d78 = &local_688;
            FUN_1471b9ff4(lVar44,local_1f8,&local_178,puVar31);
            lVar51 = local_1bb0[0];
            lVar43 = local_1c90;
            if (local_1bb0[0] != 0) {
              LOCK();
              puVar38 = (uint *)(local_1bb0[0] + 8);
              uVar55 = *puVar38;
              *puVar38 = *puVar38 - 1;
              UNLOCK();
              if ((uVar55 & 0x3fffffff) == 1) {
                puVar38 = (uint *)(local_1bb0[0] + 8);
                LOCK();
                uVar55 = *puVar38;
                *puVar38 = *puVar38 | 0x40000000;
                UNLOCK();
                if ((uVar55 >> 0x1e & 1) == 0) {
                  bVar41 = *(byte *)(local_1bb0[0] + 0xd);
                  plVar32 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar32[1] = lVar51;
                  plVar34 = DAT_14ca843c0;
                  plVar33 = DAT_14ca843c8;
                  lVar44 = local_1d08;
                  if ((bVar41 & 2) == 0) {
                    do {
                      *plVar32 = (longlong)plVar34;
                      LOCK();
                      bVar58 = plVar34 != DAT_14ca843c0;
                      plVar33 = plVar32;
                      if (bVar58) {
                        plVar34 = DAT_14ca843c0;
                        plVar33 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar33;
                      UNLOCK();
                    } while (bVar58);
                  }
                  else {
                    do {
                      *plVar32 = (longlong)plVar33;
                      LOCK();
                      bVar58 = plVar33 != DAT_14ca843c8;
                      plVar34 = plVar32;
                      if (bVar58) {
                        plVar33 = DAT_14ca843c8;
                        plVar34 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar34;
                      UNLOCK();
                    } while (bVar58);
                  }
                }
              }
            }
            uVar53 = local_1cb0;
            iVar28 = local_1d14;
            local_1be4 = local_1cd8._0_4_;
            local_1be0 = local_1cd8._0_4_;
            local_1bdc = (int)local_1cc0;
            local_1d68 = &local_688;
            local_1d70 = uVar40;
            local_1d78 = (undefined8 *)CONCAT44(local_1d78._4_4_,local_1d14);
            local_1d60 = &local_388;
            FUN_142cb778a(lVar44,local_1d20,&local_1be4,local_1cb0);
            local_1d48 = CONCAT44(uStack_384,local_388);
            local_1d50 = CONCAT44(local_688._4_4_,(int)local_688);
            local_1d40 = &local_1bb8;
            local_1d58 = uVar40;
            local_1d60 = (undefined4 *)CONCAT71(local_1d60._1_7_,SUB81(local_1cf8,0));
            local_1d68 = (undefined8 *)CONCAT44(local_1d68._4_4_,iVar28);
            local_1d70 = CONCAT44(local_1d70._4_4_,(int)local_1d10);
            local_1d78 = (undefined8 *)uVar53;
            FUN_1471b9b4e(lVar44,&local_1bc8,&local_1bd8,&local_1b28);
            lVar51 = local_1c18;
          }
          if (*(longlong *)(local_1d20 + 0x3108) != 0) {
            puVar31 = (undefined8 *)
                      FUN_1471b35ae(*(longlong *)(local_1d20 + 0x3108) + 0x1c68,
                                    *(undefined4 *)(lVar8 + 0x34),lVar8 + 0x34);
            *puVar31 = local_1bb8;
          }
        }
        lVar54 = lVar54 + 1;
      } while (lVar54 != lVar51);
    }
  }
LAB_142cbbc55:
  if (local_9a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1d98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cbbcf7 FUN_142cbbcf7 body=5768 status=ok
// SIG undefined FUN_142cbbcf7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbbcf7(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong *param_6)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  double dVar5;
  double _X;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  ulonglong local_480;
  undefined8 *local_478;
  undefined8 *local_470;
  ulonglong local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 *local_450;
  longlong *local_440;
  longlong local_438;
  ulonglong local_430;
  float local_428;
  int local_424;
  ulonglong local_420;
  ulonglong local_418;
  ulonglong local_410;
  ulonglong local_408;
  int local_3fc;
  int iStack_3f8;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined1 local_3c9;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_280;
  undefined1 local_278 [128];
  undefined8 local_1f8 [16];
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (*(longlong *)(param_4 + 0x3108) != 0) {
    local_3d0 = DAT_14c846338;
    local_3d8 = DAT_14c846330;
    local_388 = _DAT_14c846280;
    uStack_380 = _DAT_14c846288;
    local_398 = _DAT_14c846270;
    uStack_390 = _DAT_14c846278;
    local_3a8 = _DAT_14c846260;
    uStack_3a0 = _DAT_14c846268;
    local_3b8 = DAT_14c846250;
    fStack_3b4 = DAT_14c846254;
    fStack_3b0 = (float)DAT_14c846258;
    fStack_3ac = DAT_14c846258._4_4_;
    FUN_144735828(&DAT_14ca63b10,param_1,8);
    local_3e0 = FUN_144735828(&DAT_14ca63b10,param_1,0x10);
    local_3e8 = FUN_144735828(&DAT_14ca63b10,param_1,4);
    uVar4 = local_148;
    if (((*(int *)(param_4 + 0x3100) == *(int *)(param_4 + 0x30f8)) &&
        (*(int *)(param_4 + 0x3104) == *(int *)(param_4 + 0x30fc))) ||
       ((*(int *)(*(longlong *)(*param_5 + 0x18) + 0x2c) == 0 &&
        (*(int *)(*(longlong *)(*param_6 + 0x18) + 0x1bc) == 0)))) {
      local_3f0 = FUN_1448f5828(param_1);
    }
    else {
      lVar11 = *(longlong *)(param_2 + 0x1b0);
      uStack_170 = *(undefined4 *)(lVar11 + 0x68);
      uStack_16c = *(undefined4 *)(lVar11 + 0x6c);
      uStack_168 = *(undefined8 *)(lVar11 + 0x70);
      uStack_160 = *(undefined4 *)(lVar11 + 0x78);
      uVar19 = *(ulonglong *)(lVar11 + 0x60) & 0xffffffffffdfffff;
      local_178._0_4_ = (int)uVar19;
      local_178._4_4_ = (int)(uVar19 >> 0x20);
      local_148._6_2_ = SUB82(uVar4,6);
      local_148._0_6_ =
           CONCAT24(*(undefined2 *)(lVar11 + 0x94),
                    CONCAT13(10,(uint3)*(byte *)(lVar11 + 0x92) << 0x10));
      local_148 = CONCAT62(local_148._2_6_,*(undefined2 *)(lVar11 + 0x90));
      uStack_15c = (undefined4)*(undefined8 *)(lVar11 + 0x7c);
      uStack_158 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x7c) >> 0x20);
      iVar9 = (int)*(undefined8 *)(lVar11 + 0x84);
      iStack_154 = DAT_14ca84e40;
      if (iVar9 < DAT_14ca84e40) {
        iStack_154 = iVar9;
      }
      if (iStack_154 < 2) {
        iStack_154 = 1;
      }
      iVar10 = (int)((ulonglong)*(undefined8 *)(lVar11 + 0x84) >> 0x20);
      iVar9 = DAT_14ca84e40;
      if (iVar10 < DAT_14ca84e40) {
        iVar9 = iVar10;
      }
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      local_150 = (double)CONCAT44(*(undefined4 *)(lVar11 + 0x8c),iVar9);
      plVar15 = (longlong *)(param_1 + 0x70);
      uVar21 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar19 = uVar21 + 0x120;
      local_440 = plVar15;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(plVar15,0x128);
        uVar21 = *plVar15 + 7U & 0xfffffffffffffff8;
        uVar19 = uVar21 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bbb8c(uVar21,L"CameraShadowMapTexture",&local_178,0);
      iVar9 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar9 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar9);
      }
      plVar15 = local_440;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar9 * 8) = uVar21;
      *(int *)(uVar21 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      uVar2 = *(undefined1 *)(uVar21 + 0x94);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar18 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_440,0x50);
        puVar18 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar18 + 9;
      }
      local_438 = param_1 + 0x198;
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar18[1] = *(undefined8 *)(uVar21 + 8);
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 0;
      *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar18 + 5) = 0;
      *puVar18 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar18 + 6) = uVar2;
      *(undefined1 *)(puVar18 + 7) = 0;
      *(undefined4 *)((longlong)puVar18 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar18 + 0x35) = 0;
      puVar18[8] = uVar21;
      iVar9 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
        FUN_1447568fc(local_438,iVar9);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar18;
      *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      local_178._0_4_ = 0;
      local_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      local_408 = uVar21;
      FUN_140c4fe69(param_1,puVar18,&local_178,2);
      plVar15 = local_440;
      iVar9 = 1;
      if (1 < *(int *)(DAT_14c9e2790 + 4)) {
        iVar9 = *(int *)(DAT_14c9e2790 + 4);
      }
      fVar26 = (float)(*(int *)(param_4 + 0x3100) - *(int *)(param_4 + 0x30f8)) / (float)iVar9;
      if (fVar26 <= 1.0) {
        fVar26 = 1.0;
      }
      uVar16 = (uint)fVar26;
      local_418 = (ulonglong)uVar16;
      fVar26 = (float)(*(int *)(param_4 + 0x3104) - *(int *)(param_4 + 0x30fc)) / (float)iVar9;
      if (fVar26 <= 1.0) {
        fVar26 = 1.0;
      }
      uVar20 = (uint)fVar26;
      local_420 = (ulonglong)uVar20;
      local_3fc = uVar16 + 0xe;
      if (-1 < (int)(uVar16 + 7)) {
        local_3fc = uVar16 + 7;
      }
      local_3f4 = 1;
      local_3fc = local_3fc >> 3;
      iStack_3f8 = uVar20 + 0xe;
      if (-1 < (int)(uVar20 + 7)) {
        iStack_3f8 = uVar20 + 7;
      }
      iStack_3f8 = iStack_3f8 >> 3;
      uVar20 = uVar20 * uVar16;
      uVar16 = 0x38;
      if (DAT_14ca84e48 < 0x38) {
        uVar16 = DAT_14ca84e48;
      }
      local_178._0_4_ = uVar16 + (uVar16 == 0);
      uStack_170 = 0x10109;
      uVar16 = DAT_14ca84e48;
      if (uVar20 < DAT_14ca84e48) {
        uVar16 = uVar20;
      }
      uStack_168 = 0;
      local_178._4_4_ = uVar16 + (uVar16 == 0);
      uVar21 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar21 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_440,0x160);
        uVar21 = *plVar15 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar21 + 0x150;
      }
      lVar11 = param_1 + 0x188;
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar21,L"HeterogeneousVolume.RenderDebugData",&local_178,0);
      iVar9 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar9 + 1U) {
        FUN_144737178(lVar11,iVar9);
      }
      plVar15 = local_440;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar9 * 8) = uVar21;
      *(int *)(uVar21 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uStack_168 = 0;
      uVar16 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar16 = DAT_14ca84e48;
      }
      local_178._0_4_ = uVar16 + (uVar16 == 0);
      local_178._4_4_ = 1;
      uStack_170 = 0x4109;
      uVar17 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar17 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_440,0x160);
        uVar17 = *plVar15 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar17 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar17,L"HeterogeneousVolume.CameraAVSM.LinkedListAllocatorBuffer",&local_178,0)
      ;
      iVar9 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar9 + 1U) {
        FUN_144737178(lVar11,iVar9);
      }
      plVar15 = local_440;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar9 * 8) = uVar17;
      *(int *)(uVar17 + 0x7c) = *(int *)(param_1 + 400) + -1;
      iVar9 = 0x40;
      if (*(int *)(DAT_14c9e27d8 + 4) < 0x40) {
        iVar9 = *(int *)(DAT_14c9e27d8 + 4);
      }
      local_424 = 2;
      if (2 < iVar9) {
        local_424 = iVar9;
      }
      uVar16 = 8;
      if (DAT_14ca84e48 < 8) {
        uVar16 = DAT_14ca84e48;
      }
      local_178._0_4_ = uVar16 + (uVar16 == 0);
      uStack_170 = 0x10109;
      uVar16 = uVar20 * local_424;
      if (DAT_14ca84e48 <= uVar20 * local_424) {
        uVar16 = DAT_14ca84e48;
      }
      uStack_168 = 0;
      local_178._4_4_ = uVar16 + (uVar16 == 0);
      uVar22 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar22 + 0x150;
      local_430 = lVar11;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_440,0x160);
        uVar22 = *plVar15 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar22 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar22,L"HeterogeneousVolume.CameraAVSM.LinkedListBuffer",&local_178,0);
      iVar9 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar9 + 1U) {
        FUN_144737178(local_430,iVar9);
      }
      plVar15 = local_440;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar9 * 8) = uVar22;
      *(int *)(uVar22 + 0x7c) = *(int *)(param_1 + 400) + -1;
      fVar26 = *(float *)(DAT_14c9e2808 + 4);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar18 + 8;
      local_430 = uVar22;
      local_410 = uVar21;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_440,0x48);
        puVar18 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar18 + 8;
      }
      uVar19 = local_418;
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar18[1] = *(undefined8 *)(uVar17 + 8);
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 2;
      *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar18 + 5) = 0;
      *puVar18 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar18 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
      puVar18[7] = uVar17;
      iVar9 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
        FUN_1447568fc(local_438,iVar9);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar18;
      *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_1405bfba3(param_1,puVar18,uVar20,2);
      fVar25 = *(float *)(DAT_14c9de280 + 4);
      dVar7 = (double)(int)local_420;
      _X = (double)*(float *)(param_4 + 0x1de8) * 0.5 * 0.017453292519943295;
      dVar6 = (double)fVar25 / ((double)fVar25 + -1.0);
      local_128 = dVar6;
      if ((fVar25 == 1.0) && (!NAN(fVar25))) {
        local_128 = 1.0;
      }
      dVar5 = tan(_X);
      dVar7 = ((double)(int)uVar19 / dVar5) / dVar7;
      local_178 = tan(_X);
      local_178 = 1.0 / local_178;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      iStack_154 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_120 = 0x3ff0000000000000;
      local_118 = 0;
      uStack_110 = 0;
      local_100 = 0;
      local_428 = fVar26;
      local_150 = dVar7;
      local_108 = -local_128;
      if (((9.99999993922529e-09 < ABS(local_178)) ||
          (((fVar25 == 1.0 && (!NAN(fVar25))) || (9.99999993922529e-09 < ABS(dVar6))))) ||
         (9.99999993922529e-09 < ABS(dVar7))) {
        FUN_14007522e(local_1f8,&local_178);
      }
      else {
        puVar14 = &DAT_14c846400;
        puVar18 = local_1f8;
        for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar18 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      local_2f8 = 0.5;
      uStack_2f0 = 0.0;
      dStack_2e8 = 0.0;
      local_2e0 = 0.0;
      dStack_2d8 = 0.0;
      local_2d0 = -0.5;
      local_2c8 = 0.0;
      dStack_2c0 = 0.0;
      local_2b8 = 0.0;
      dStack_2b0 = 0.0;
      local_2a8 = -0.5;
      local_2a0 = 0.0;
      dStack_298 = 0.0;
      local_290 = 0.0;
      dStack_288 = 0.0;
      local_280 = 1.0;
      local_378 = 0x3ff0000000000000;
      uStack_370 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_358 = 0;
      local_350 = 0x3ff0000000000000;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0x3ff0000000000000;
      local_320 = 0;
      local_318 = 0x3fe0000000000000;
      local_310 = 0x3fe0000000000000;
      local_308 = 0x3fe0000000000000;
      local_300 = 0x3ff0000000000000;
      FUN_1447fea8d(local_278);
      FUN_1447fea8d(&local_378,param_4 + 0xc30,&local_178);
      FUN_1447fea8d(&local_2f8,&local_378,local_278);
      local_3b8 = (float)local_2f8;
      fStack_3b4 = (float)uStack_2f0;
      fStack_3b0 = (float)dStack_2e8;
      fStack_3ac = (float)local_2e0;
      local_3a8 = CONCAT44((float)local_2d0,(float)dStack_2d8);
      uStack_3a0 = CONCAT44((float)dStack_2c0,(float)local_2c8);
      local_398 = CONCAT44((float)dStack_2b0,(float)local_2b8);
      uStack_390 = CONCAT44((float)local_2a0,(float)local_2a8);
      local_388 = CONCAT44((float)local_290,(float)dStack_298);
      uStack_380 = CONCAT44((float)local_280,(float)dStack_288);
      if ((((1e-08 < ABS(local_3b8)) || (1e-08 < ABS(fStack_3b4))) ||
          ((1e-08 < ABS(fStack_3b0) ||
           ((1e-08 < ABS((float)dStack_2d8) || (1e-08 < ABS((float)local_2d0))))))) ||
         ((1e-08 < ABS((float)local_2c8) ||
          (((1e-08 < ABS((float)local_2b8) || (1e-08 < ABS((float)dStack_2b0))) ||
           (1e-08 < ABS((float)local_2a8))))))) {
        FUN_144906c86(&local_378,&local_3b8);
      }
      else {
        local_348 = _DAT_14c846280;
        uStack_340 = _DAT_14c846288;
        uStack_358 = _DAT_14c846270;
        local_350 = _DAT_14c846278;
        uStack_368 = _DAT_14c846260;
        uStack_360 = _DAT_14c846268;
        local_378 = CONCAT44(DAT_14c846254,DAT_14c846250);
        uStack_370 = CONCAT44(DAT_14c846258._4_4_,(float)DAT_14c846258);
      }
      fVar26 = local_428;
      plVar15 = local_440;
      local_3d8 = local_348;
      local_3d0 = (undefined4)uStack_340;
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar18 + 0x86;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_440,0x440);
        puVar18 = (undefined8 *)(*plVar15 + 0xfU & 0xfffffffffffffff0);
        puVar14 = puVar18 + 0x86;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar18 = &PTR_FUN_14a240a98;
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 1;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
      puVar18[10] = 0;
      puVar18[0xb] = 0;
      puVar18[0xc] = 0;
      puVar18[0xd] = 0;
      puVar18[0xe] = 0;
      puVar18[0xf] = 0;
      puVar18[0x10] = 0;
      *(undefined1 *)(puVar18 + 0x11) = 1;
      puVar18[0x7a] = 0;
      *(undefined1 *)(puVar18 + 0x7b) = 1;
      puVar18[0x7c] = 0;
      *(undefined1 *)(puVar18 + 0x7d) = 1;
      puVar18[0x82] = 0;
      puVar18[0x83] = 0;
      puVar18[0x84] = 0;
      puVar18[0x85] = 0;
      iVar9 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar9 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar9);
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar9 * 8) = puVar18;
      lVar11 = FUN_1447e4f80();
      cVar8 = *(char *)(lVar11 + 0x41);
      if (*(char *)(lVar11 + 0x41) == '\x03') {
        cVar8 = '\x02';
      }
      puVar18[2] = *(undefined8 *)(param_4 + 0x18);
      *(char *)(puVar18 + 3) = cVar8;
      FUN_14494b062(&local_2f8,param_1,param_2);
      puVar14 = &local_2f8;
      puVar23 = puVar18 + 4;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar23 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar23 = puVar23 + 1;
      }
      FUN_1448a862c(&local_2f8);
      FUN_14019e00e(&local_3c8,&local_2f8,0,1);
      lVar11 = FUN_1448a8484();
      cVar8 = *(char *)(lVar11 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      lVar11 = CONCAT44(uStack_3c4,local_3c8);
      puVar18[0x10] = lVar11;
      *(char *)(puVar18 + 0x11) = cVar8;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar16 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar16 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar16 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar16 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = lVar11;
            plVar15 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar15;
                LOCK();
                bVar24 = plVar15 != DAT_14ca843c0;
                plVar13 = plVar12;
                if (bVar24) {
                  plVar15 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar24);
            }
            else {
              do {
                *plVar12 = (longlong)plVar13;
                LOCK();
                bVar24 = plVar13 != DAT_14ca843c8;
                plVar15 = plVar12;
                if (bVar24) {
                  plVar13 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar24);
            }
          }
        }
      }
      fVar25 = *(float *)(DAT_14c9e27c0 + 4);
      if (fVar25 <= 0.01) {
        fVar25 = 0.01;
      }
      *(float *)(puVar18 + 0x12) = fVar25;
      *(undefined4 *)((longlong)puVar18 + 0x94) = 0x3f800000;
      *(undefined4 *)(puVar18 + 0x7e) = *(undefined4 *)(DAT_14c9de280 + 4);
      *(int *)((longlong)puVar18 + 0x3f4) = (int)(float)*(int *)(DAT_14c9de268 + 4);
      *(uint *)(puVar18 + 0x7f) = (uint)(*(int *)(DAT_14c9de250 + 4) != 0);
      uVar19 = uVar19 & 0xffffffff | local_420 << 0x20;
      puVar18[0x16] = uVar19;
      *(undefined4 *)(puVar18 + 0x19) = 1;
      puVar18[0x1a] = CONCAT44(fStack_3b4,local_3b8);
      puVar18[0x1b] = CONCAT44(fStack_3ac,fStack_3b0);
      puVar18[0x1c] = local_3a8;
      puVar18[0x1d] = uStack_3a0;
      puVar18[0x1e] = local_398;
      puVar18[0x1f] = uStack_390;
      puVar18[0x20] = local_388;
      puVar18[0x21] = uStack_380;
      puVar18[0x4a] = local_378;
      puVar18[0x4b] = uStack_370;
      puVar18[0x4c] = uStack_368;
      puVar18[0x4d] = uStack_360;
      *(undefined4 *)(puVar18 + 0x4e) = (undefined4)uStack_358;
      *(undefined4 *)((longlong)puVar18 + 0x274) = uStack_358._4_4_;
      *(undefined4 *)(puVar18 + 0x4f) = (undefined4)local_350;
      *(undefined4 *)((longlong)puVar18 + 0x27c) = local_350._4_4_;
      *(undefined4 *)(puVar18 + 0x50) = (undefined4)local_348;
      *(undefined4 *)((longlong)puVar18 + 0x284) = local_348._4_4_;
      *(undefined4 *)(puVar18 + 0x51) = (undefined4)uStack_340;
      *(undefined4 *)((longlong)puVar18 + 0x28c) = uStack_340._4_4_;
      *(int *)(puVar18 + 0x17) = local_424;
      fVar25 = *(float *)(DAT_14c9e27f0 + 4);
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      *(float *)(puVar18 + 0x18) = fVar25;
      *(float *)((longlong)puVar18 + 0xc4) = fVar26;
      lVar11 = *param_5;
      FUN_1404256ca();
      cVar8 = DAT_14c9e28c9;
      if (DAT_14c9e28c9 == '\x03') {
        cVar8 = '\x02';
      }
      puVar18[0x7a] = lVar11;
      *(char *)(puVar18 + 0x7b) = cVar8;
      lVar11 = *param_6;
      FUN_1403f28ae();
      plVar15 = local_440;
      cVar8 = DAT_14c9e2961;
      if (DAT_14c9e2961 == '\x03') {
        cVar8 = '\x02';
      }
      puVar18[0x7c] = lVar11;
      *(char *)(puVar18 + 0x7d) = cVar8;
      *(undefined4 *)(puVar18 + 0x81) = local_3f4;
      puVar18[0x80] = CONCAT44(iStack_3f8,local_3fc);
      puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar23 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_440,0x48);
        puVar23 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar23 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar23[1] = *(undefined8 *)(uVar17 + 8);
      puVar23[2] = 0;
      *(undefined1 *)(puVar23 + 3) = 2;
      *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar23 + 5) = 0;
      *puVar23 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar23 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar23 + 0x32) = 0;
      puVar23[7] = uVar17;
      iVar9 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
        FUN_1447568fc(local_438,iVar9);
      }
      plVar15 = local_440;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar23;
      *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar18[0x82] = puVar23;
      cVar8 = *(char *)(local_430 + 0x68);
      puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar23 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_440,0x48);
        puVar23 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar23 + 8;
      }
      uVar21 = local_408;
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar23[1] = *(undefined8 *)(local_430 + 8);
      puVar23[2] = 0;
      *(undefined1 *)(puVar23 + 3) = 2;
      *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar23 + 5) = 0;
      *puVar23 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar23 + 6) = cVar8 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar23 + 0x31) = 0;
      puVar23[7] = local_430;
      iVar9 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
        FUN_1447568fc(local_438,iVar9);
      }
      plVar15 = local_440;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar23;
      *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar18[0x83] = puVar23;
      uVar2 = *(undefined1 *)(uVar21 + 0x94);
      puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar23 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_440,0x50);
        puVar23 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar23 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar23[1] = *(undefined8 *)(uVar21 + 8);
      puVar23[2] = 0;
      *(undefined1 *)(puVar23 + 3) = 0;
      *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar23 + 5) = 0;
      *puVar23 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar23 + 6) = uVar2;
      *(undefined1 *)(puVar23 + 7) = 0;
      *(undefined4 *)((longlong)puVar23 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar23 + 0x35) = 0;
      puVar23[8] = uVar21;
      iVar9 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
        FUN_1447568fc(local_438,iVar9);
      }
      uVar21 = local_410;
      plVar15 = local_440;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar23;
      *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar18[0x84] = puVar23;
      cVar8 = *(char *)(local_410 + 0x68);
      puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar23 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_440,0x48);
        puVar23 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar23 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar23[1] = *(undefined8 *)(uVar21 + 8);
      puVar23[2] = 0;
      *(undefined1 *)(puVar23 + 3) = 2;
      *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar23 + 5) = 0;
      *puVar23 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar23 + 6) = cVar8 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar23 + 0x31) = 0;
      puVar23[7] = uVar21;
      iVar9 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
        FUN_1447568fc(local_438,iVar9);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar23;
      *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar18[0x85] = puVar23;
      iVar9 = *(int *)(DAT_14c9e2820 + 4);
      uVar4 = *(undefined8 *)(param_4 + 0x13818);
      FUN_145f48de6();
      FUN_1448e935e(uVar4,&local_2f8,&DAT_14c9e3898,iVar9 != 0);
      FUN_145f48de6();
      local_3c8 = (undefined4)local_2f8;
      uStack_3c4 = local_2f8._4_4_;
      uStack_3c0 = (undefined4)uStack_2f0;
      uStack_3bc = uStack_2f0._4_4_;
      local_2f8 = (double)CONCAT44(iStack_3f8,local_3fc);
      uStack_2f0 = (double)CONCAT44(uStack_2f0._4_4_,local_3f4);
      local_488 = &local_2f8;
      FUN_1471b9ff4(param_1,&local_3c9,&local_3c8,puVar18 + 2);
      iVar9 = local_424;
      uVar21 = local_430;
      local_470 = &local_3e8;
      local_478 = &local_3e0;
      local_480 = local_430;
      local_488 = (undefined8 *)CONCAT44(local_488._4_4_,local_424);
      FUN_142cb778a(param_1,param_4,&local_3fc,uVar19);
      local_178._0_4_ = 0;
      local_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      local_450 = &local_3f0;
      local_458 = local_3e8;
      local_460 = local_3e0;
      local_468 = uVar21;
      local_478 = (undefined8 *)CONCAT44(local_478._4_4_,iVar9);
      local_470 = (undefined8 *)((ulonglong)local_470 & 0xffffffffffffff00);
      local_480 = CONCAT44(local_480._4_4_,1);
      local_488 = (undefined8 *)uVar19;
      FUN_1471b9b4e(param_1,&local_3d8,&local_178,&local_3b8);
    }
    *(undefined8 *)(*(longlong *)(param_4 + 0x3108) + 0x1c60) = local_3f0;
  }
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cbd380 FUN_142cbd380 body=69 status=ok
// SIG undefined FUN_142cbd380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbd380(void)

{
  _DAT_14c9e3ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbd3c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e3bb0,1);
  return;
}



// FUNCTION 142cbd3c5 FUN_142cbd3c5 body=69 status=ok
// SIG undefined FUN_142cbd3c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbd3c5(void)

{
  _DAT_14c9e3bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbd407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e3bc8,1);
  return;
}



// FUNCTION 142cbd40a FUN_142cbd40a body=69 status=ok
// SIG undefined FUN_142cbd40a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbd40a(void)

{
  _DAT_14c9e3bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbd44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e3be0,1);
  return;
}



// FUNCTION 142cbd44f FUN_142cbd44f body=69 status=ok
// SIG undefined FUN_142cbd44f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbd44f(void)

{
  _DAT_14c9e3bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbd491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e3bf8,1);
  return;
}



// FUNCTION 142cbd494 FUN_142cbd494 body=47 status=ok
// SIG undefined FUN_142cbd494(void)

void FUN_142cbd494(void)

{
  DAT_14c9e3c10 = &PTR_FUN_14a240ac0;
  FUN_144725486(&DAT_14c9e3c10);
  FUN_145e3a4dc(&DAT_14c9e3c10);
  return;
}



// FUNCTION 142cbd4e7 FUN_142cbd4e7 body=1461 status=ok
// SIG undefined FUN_142cbd4e7(void)

void FUN_142cbd4e7(longlong param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  uint local_ac;
  ulonglong *local_a8;
  longlong *local_a0;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(&DAT_14ca814b0 + (param_2 & 0xffff) * 0x3c) == DAT_14ca81490) {
    FUN_145e55694();
    FUN_1448e935e(param_3,local_80,&DAT_14c9e3f28,0);
    FUN_145e55694();
    local_ac = *(uint *)(param_4 + 1);
    if (local_ac != 0) {
      local_a8 = (ulonglong *)(param_1 + 0x70);
      local_a0 = (longlong *)(param_1 + 0x98);
      uVar15 = 0;
      do {
        puVar5 = local_a8;
        lVar14 = (longlong)(int)uVar15 * 0x28 + *param_4;
        local_88 = *(undefined8 *)(*param_5 + 0x84);
        local_90 = 0;
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar13 + 0x26;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(local_a8,0x140);
          puVar13 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
          puVar8 = puVar13 + 0x26;
        }
        *local_a8 = (ulonglong)puVar8;
        *puVar13 = &PTR_FUN_14a23f888;
        puVar13[2] = 0;
        puVar13[3] = 0;
        lVar7 = 0x42;
        do {
          puVar8 = (undefined8 *)((longlong)puVar13 + lVar7 + -0x12);
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined4 *)((longlong)puVar13 + lVar7 + -2) = 0xffff0000;
          lVar7 = lVar7 + 0x18;
        } while (lVar7 != 0x102);
        *(undefined4 *)((longlong)puVar13 + 0x104) = 0;
        puVar13[0x1e] = 0;
        puVar13[0x1f] = 0;
        *(undefined2 *)(puVar13 + 0x20) = 0;
        *(undefined4 *)(puVar13 + 0x21) = 0xffffffff;
        *(undefined4 *)((longlong)puVar13 + 0x10c) = 0xffffffff;
        *(undefined4 *)(puVar13 + 0x22) = 0xffffffff;
        *(undefined4 *)((longlong)puVar13 + 0x114) = 0xffffffff;
        *(undefined4 *)(puVar13 + 0x23) = 0;
        *(undefined2 *)((longlong)puVar13 + 0x11c) = 0;
        puVar13[0x24] = 0;
        iVar12 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
          FUN_1448cfae8(local_a0,iVar12);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar13;
        puVar13[2] = *(undefined8 *)(*(longlong *)(lVar14 + 0x18) + 0x60);
        puVar13[3] = DAT_14c9c0de0;
        puVar13[4] = *(undefined8 *)(*param_5 + 0x84);
        uVar3 = *(undefined2 *)(lVar14 + 4);
        puVar13[6] = *param_5;
        puVar13[7] = 0;
        *(undefined2 *)(puVar13 + 8) = 0;
        *(undefined2 *)((longlong)puVar13 + 0x42) = uVar3;
        local_c0 = &local_90;
        local_c8 = puVar13 + 2;
        FUN_1471c5008(param_1,param_3,&local_91,local_80);
        uVar15 = uVar15 + 1;
      } while (uVar15 != local_ac);
    }
  }
  else {
    lVar14 = *param_5;
    uVar2 = *(undefined1 *)(lVar14 + 0x94);
    plVar1 = (longlong *)(param_1 + 0x70);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 9;
    local_a0 = plVar1;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8(plVar1,0x50);
      puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar13 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    puVar13[1] = *(undefined8 *)(lVar14 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar2;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = lVar14;
    iVar12 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar12);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_145f2cd4c();
    uVar11 = 0;
    FUN_1448e935e(param_3,local_80,&DAT_14c9e3e00,0);
    FUN_145f2cd4c();
    uVar15 = (int)param_4[1] + 7;
    if (7 < uVar15) {
      local_ac = uVar15 >> 3;
      local_a8 = (ulonglong *)(param_1 + 0x98);
      iVar12 = 0;
      do {
        plVar1 = local_a0;
        uVar15 = *(uint *)(param_4 + 1) + uVar11 * -8;
        if (uVar11 * 8 + 8 <= *(uint *)(param_4 + 1)) {
          uVar15 = 8;
        }
        puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar16 + 0x26;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(local_a0,0x140);
          puVar16 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
          puVar8 = puVar16 + 0x26;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar8;
        *puVar16 = &PTR_FUN_14a23f868;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        puVar16[7] = 0;
        puVar16[8] = 0;
        puVar16[9] = 0;
        puVar16[0x1a] = 0;
        puVar16[0x1b] = 0;
        puVar16[0x1c] = 0;
        puVar16[0x1d] = 0;
        puVar16[0x1e] = 0;
        puVar16[0x1f] = 0;
        puVar16[0x20] = 0;
        puVar16[0x21] = 0;
        puVar16[0x24] = 0;
        iVar4 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
          FUN_1448cfae8(local_a8,iVar4);
        }
        uVar11 = uVar11 + 1;
        *(undefined8 **)(*local_a8 + (longlong)iVar4 * 8) = puVar16;
        puVar16[0x24] = puVar13;
        puVar16[0x22] = *(undefined8 *)(*param_5 + 0x84);
        *(uint *)(puVar16 + 0x23) = (uint)*(ushort *)(*param_5 + 0x8e);
        *(uint *)((longlong)puVar16 + 0x11c) = uVar15;
        puVar8 = puVar16 + 10;
        lVar14 = -0x40;
        do {
          *(undefined8 *)((longlong)puVar16 + lVar14 + 0x50) = *(undefined8 *)(DAT_14ca63b28 + 8);
          *(undefined4 *)((longlong)puVar16 + lVar14 * 2 + 0xd0) = 0xffffffff;
          *(undefined8 *)((longlong)puVar16 + lVar14 + 0x110) = DAT_14c9c0de0;
          lVar14 = lVar14 + 8;
        } while (lVar14 != 0);
        if (uVar15 != 0) {
          lVar14 = 0;
          do {
            lVar7 = *param_4;
            lVar10 = (longlong)(iVar12 + (int)lVar14);
            puVar16[lVar14 + 2] =
                 *(undefined8 *)(*(longlong *)(lVar7 + 0x18 + lVar10 * 0x28) + 0x60);
            *(undefined4 *)puVar8 = *(undefined4 *)(lVar7 + 4 + lVar10 * 0x28);
            lVar14 = lVar14 + 1;
            puVar8 = puVar8 + 2;
          } while ((uint)lVar14 < uVar15);
        }
        iVar4 = *(int *)((longlong)puVar16 + 0x114) + 7;
        iVar9 = *(int *)((longlong)puVar16 + 0x114) + 0xe;
        if (-1 < iVar4) {
          iVar9 = iVar4;
        }
        iVar4 = *(int *)(puVar16 + 0x22) + 7;
        iVar6 = *(int *)(puVar16 + 0x22) + 0xe;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        local_90 = CONCAT44(iVar9 >> 3,iVar6 >> 3);
        local_88 = CONCAT44(local_88._4_4_,uVar15);
        local_c8 = &local_90;
        FUN_1471c4b76(param_1,&local_91,local_80);
        iVar12 = iVar12 + 8;
      } while (uVar11 != local_ac);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cbdac1 FUN_142cbdac1 body=69 status=ok
// SIG undefined FUN_142cbdac1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdac1(void)

{
  _DAT_14c9e4380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdb03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4388,1);
  return;
}



// FUNCTION 142cbdb06 FUN_142cbdb06 body=69 status=ok
// SIG undefined FUN_142cbdb06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdb06(void)

{
  _DAT_14c9e4398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e43a0,1);
  return;
}



// FUNCTION 142cbdb4b FUN_142cbdb4b body=69 status=ok
// SIG undefined FUN_142cbdb4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdb4b(void)

{
  _DAT_14c9e43b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e43b8,1);
  return;
}



// FUNCTION 142cbdb90 FUN_142cbdb90 body=69 status=ok
// SIG undefined FUN_142cbdb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdb90(void)

{
  _DAT_14c9e43c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdbd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e43d0,1);
  return;
}



// FUNCTION 142cbdbd5 FUN_142cbdbd5 body=69 status=ok
// SIG undefined FUN_142cbdbd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdbd5(void)

{
  _DAT_14c9e43d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdc17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e43e0,1);
  return;
}



// FUNCTION 142cbdc1a FUN_142cbdc1a body=69 status=ok
// SIG undefined FUN_142cbdc1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdc1a(void)

{
  _DAT_14c9e43e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e43f0,1);
  return;
}



// FUNCTION 142cbdc5f FUN_142cbdc5f body=69 status=ok
// SIG undefined FUN_142cbdc5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdc5f(void)

{
  _DAT_14c9e43f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4400,1);
  return;
}



// FUNCTION 142cbdca4 FUN_142cbdca4 body=69 status=ok
// SIG undefined FUN_142cbdca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdca4(void)

{
  _DAT_14c9e4408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4410,1);
  return;
}



// FUNCTION 142cbdce9 FUN_142cbdce9 body=69 status=ok
// SIG undefined FUN_142cbdce9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdce9(void)

{
  _DAT_14c9e4418 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdd2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4420,1);
  return;
}



// FUNCTION 142cbdd2e FUN_142cbdd2e body=69 status=ok
// SIG undefined FUN_142cbdd2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdd2e(void)

{
  _DAT_14c9e4428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbdd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4430,1);
  return;
}



// FUNCTION 142cbdd73 FUN_142cbdd73 body=69 status=ok
// SIG undefined FUN_142cbdd73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbdd73(void)

{
  _DAT_14c9e4438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbddb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4440,1);
  return;
}



// FUNCTION 142cbddb8 FUN_142cbddb8 body=106 status=ok
// SIG undefined FUN_142cbddb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbddb8(void)

{
  _DAT_14c9e4468 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4470,1);
  if (DAT_14c9e4458 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9e4448 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142cbde22 FUN_142cbde22 body=914 status=ok
// SIG undefined FUN_142cbde22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbde22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_78 [46];
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar7 = (uint *)*puVar2;
  local_4a = param_4;
  if (puVar7 != (uint *)0x0) goto LAB_142cbdf0a;
  do {
    uVar5 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar5 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar5 | 1;
      __tlregdtor(&LAB_142ccd8d1);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = *(undefined4 **)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x310) = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar6 = 0xffffffff;
    *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
    puVar6[0x12] = 0;
    *puVar2 = puVar6;
    FUN_140217a48(puVar2);
    puVar7 = (uint *)*puVar2;
LAB_142cbdf0a:
    uVar10 = *(longlong *)(puVar7 + 0x10) + 7;
    while( true ) {
      puVar11 = (undefined8 *)(uVar10 & 0xfffffffffffffff8);
      if (puVar11 + 0x1c <= puVar7 + 0x4000) {
        *(undefined8 **)(puVar7 + 0x10) = puVar11 + 0x1c;
        puVar7[0x12] = puVar7[0x12] + 1;
        FUN_1447247dc(puVar11,0);
        *puVar11 = &PTR_FUN_14a240b20;
        puVar11[0x15] = param_1;
        puVar11[0x16] = param_2;
        puVar11[0x17] = param_3;
        puVar11[0x18] = param_5 + 1;
        puVar11[0x19] = param_5 + 0xb;
        puVar11[0x1a] = param_5 + 0xd;
        *(undefined1 *)(puVar11 + 0x1b) = local_4a;
        uVar5 = DAT_14c9e4480;
        if (((DAT_14c9e4478 != 0x400) || (DAT_14c7585d8 != 0)) &&
           ((DAT_14c9e4478 != 0x800 || (DAT_14c7585dc != 0)))) {
          uVar5 = DAT_14c9e4478 | _DAT_14c9e447c;
        }
        uVar9 = uVar5 >> 10 & 3;
        if ((uVar5 >> 9 & 1) == 0 || uVar9 < 2) {
          uVar10 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
        }
        else {
          uVar10 = 2;
        }
        if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
        }
        puVar11[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar11[9] = puVar11;
        puVar11[10] = puVar11;
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar3 == 0) {
          uVar4 = 1;
          if ((char)uVar10 != '\x06') {
            uVar4 = uVar10;
          }
          uVar10 = uVar4;
          uVar8 = 0;
        }
        else {
          if ((char)uVar10 == '\x06') {
            uVar10 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar3 + 0x30);
        }
        puVar11[0xf] = uVar8;
        puVar11[0x10] = uVar10 << 0x3b | 0xc00000527800b400;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
          UNLOCK();
        }
        local_49 = 1;
        FUN_1447439e4(puVar11);
        puVar2 = (undefined8 *)*param_5;
        *param_5 = (longlong)puVar11;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
        if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar5 = *puVar7;
      *puVar7 = *puVar7 + puVar7[0x12] + 1;
      UNLOCK();
      if ((uVar5 ^ puVar7[0x12]) != 0xffffffff) break;
      puVar7 = (uint *)*puVar2;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar2 = puVar7;
      uVar10 = (longlong)puVar7 + 0x5f;
    }
  } while( true );
}



// FUNCTION 142cbe1b6 FUN_142cbe1b6 body=4042 status=ok
// SIG undefined FUN_142cbe1b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbe1b6(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  undefined1 auStack_258 [32];
  double *local_238;
  int local_230;
  int local_228;
  undefined8 local_220;
  uint local_20c;
  longlong *local_208;
  longlong local_200;
  int local_1f4;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  uint *local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined1 *puStack_1b0;
  undefined1 local_1a8 [12];
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int local_190;
  int local_18c;
  int local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  cVar8 = FUN_1471bb6bc();
  if (cVar8 != '\0') {
    local_200 = *(longlong *)(param_3 + 1000);
    if ((*(int *)((longlong)param_4 + 0x34) < (int)param_4[1]) && ((int)param_1[1] == -1)) {
      (**(code **)(*param_1 + 0x18))();
    }
    iVar18 = (int)param_4[5];
    local_1e8 = param_2;
    local_1d8 = param_3;
    if (iVar18 == 0) {
      uVar21 = 1;
      uVar22 = 0;
      iVar17 = 0;
      iVar13 = 0;
    }
    else {
      puVar14 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_4 + 2);
      }
      uVar19 = *puVar14;
      if (uVar19 == 0) {
        iVar17 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar17 = iVar18 + -1;
        }
        uVar22 = 0;
        uVar16 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar16 = uVar22;
        }
        iVar17 = 0;
        do {
          if (uVar16 == uVar22) goto LAB_142cbf0d4;
          iVar17 = iVar17 + 0x20;
          uVar19 = puVar14[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar22 = 0;
        iVar17 = 0;
      }
      uVar21 = (ulonglong)(-uVar19 & uVar19);
      uVar16 = uVar21 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar13 = (iVar17 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar18 <= iVar13) {
        iVar13 = iVar18;
      }
    }
    if (iVar13 < iVar18) {
      local_1d0 = local_200 + 0x37a0;
      uVar19 = 0xffffffff;
      local_208 = param_1;
      local_1e0 = param_4;
      local_1c8 = (uint *)(param_4 + 2);
      do {
        lVar24 = *param_4;
        lVar25 = (longlong)iVar13 * 0x68;
        puVar23 = (undefined4 *)(lVar24 + lVar25 + 0x10);
        iVar18 = *(int *)(lVar24 + lVar25 + 0x1c);
        local_20c = uVar19;
        local_1f4 = iVar17;
        local_1c0 = uVar22;
        memset(&local_158,0,0x90);
        local_15c = 0x3f800000;
        local_178 = 0.0;
        dStack_170 = 0.0;
        local_168 = 1.0;
        local_238 = &local_178;
        FUN_1471bc6dc(local_1e8,puVar23,&local_15c,&local_158);
        uVar19 = local_20c;
        uVar10 = (uint)*(byte *)((longlong)param_1 + 0xc);
        if (*(byte *)((longlong)param_1 + 0xc) == 5) {
          uVar10 = DAT_14c760db4;
        }
        if ((((int)uVar10 < 3) || (DAT_14ca84e15 != '\x01')) ||
           (*(char *)(*(longlong *)(lVar24 + 0x58 + lVar25) + 0x1d1) != '\0')) {
          if ((local_200 != 0) && (DAT_14c9e43a8 != 0)) {
            uVar6 = *(undefined8 *)(lVar24 + 0x30 + lVar25);
            uStack_198 = (undefined4)uVar6;
            uStack_194 = (undefined4)((ulonglong)uVar6 >> 0x20);
            puVar23 = (undefined4 *)(lVar24 + 0x20 + lVar25);
            local_1a8._0_4_ = *puVar23;
            local_1a8._4_8_ = *(undefined8 *)(puVar23 + 1);
            uStack_19c = puVar23[3];
            local_1b8 = 0;
            puStack_1b0 = &DAT_3f8000003f800000;
            fVar26 = 10.0;
            if (1.0 < *(double *)(local_200 + 0x8a8) || *(double *)(local_200 + 0x8a8) == 1.0) {
              fVar26 = (float)*(double *)(local_200 + 0x830);
              if (*(double *)(local_200 + 0x858) <= (double)fVar26) {
                fVar26 = (float)*(double *)(local_200 + 0x858);
              }
              fVar26 = 10.0 / fVar26;
            }
            local_238 = (double *)CONCAT44(local_238._4_4_,0xffffffff);
            FUN_14797c942(local_1d0,local_1a8,fVar26,&local_1b8);
          }
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9e4498) && (FUN_144b3d300(&DAT_14c9e4498), DAT_14c9e4498 == -1)) {
            DAT_14c9e4488 = 0;
            _DAT_14c9e4490 = 0;
            atexit((_func_5014 *)&LAB_142cbf72a);
            _Init_thread_footer(&DAT_14c9e4498);
          }
          uVar19 = iVar18 * iVar18 * iVar18;
          FUN_14005ea14(&DAT_14c9e4488);
          iVar18 = DAT_14c9e4490;
          lVar15 = (longlong)DAT_14c9e4490;
          _DAT_14c9e4490 = CONCAT44(DAT_14c9e4494,uVar19 + DAT_14c9e4490);
          if ((uint)(DAT_14c9e4494 - iVar18) < uVar19) {
            FUN_14475e4ac(&DAT_14c9e4488);
          }
          memset((void *)(lVar15 * 4 + DAT_14c9e4488),0,(longlong)(int)uVar19 * 4);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9e44b0) && (FUN_144b3d300(&DAT_14c9e44b0), DAT_14c9e44b0 == -1)) {
            DAT_14c9e44a0 = 0;
            _DAT_14c9e44a8 = 0;
            atexit((_func_5014 *)&LAB_142cbf73b);
            _Init_thread_footer(&DAT_14c9e44b0);
          }
          FUN_1471bcf6c(uVar19);
          uVar22 = _DAT_14c9e44a8;
          iVar18 = DAT_14c9e44a8;
          lVar15 = (longlong)DAT_14c9e44a8;
          _DAT_14c9e44a8 = CONCAT44(DAT_14c9e44ac,uVar19 + DAT_14c9e44a8);
          if ((uint)(DAT_14c9e44ac - iVar18) < uVar19) {
            FUN_1471cf408(uVar22 & 0xffffffff);
          }
          memset((void *)(lVar15 * 0x30 + DAT_14c9e44a0),0,(longlong)(int)uVar19 * 0x30);
          FUN_1471bcf9c(local_1e8,puVar23);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9e44c8) && (FUN_144b3d300(&DAT_14c9e44c8), DAT_14c9e44c8 == -1)) {
            DAT_14c9e44b8 = 0;
            _DAT_14c9e44c0 = 0;
            atexit((_func_5014 *)&LAB_142cbf74c);
            _Init_thread_footer(&DAT_14c9e44c8);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9e44e0) && (FUN_144b3d300(&DAT_14c9e44e0), DAT_14c9e44e0 == -1)) {
            DAT_14c9e44d0 = 0;
            _DAT_14c9e44d8 = 0;
            atexit((_func_5014 *)&LAB_142cbf75d);
            _Init_thread_footer(&DAT_14c9e44e0);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9e44f8) && (FUN_144b3d300(&DAT_14c9e44f8), DAT_14c9e44f8 == -1)) {
            DAT_14c9e44e8 = 0;
            _DAT_14c9e44f0 = 0;
            atexit((_func_5014 *)&LAB_142cbf76e);
            _Init_thread_footer(&DAT_14c9e44f8);
          }
          FUN_1471bd5f2(&DAT_14c9e44b8,uVar19);
          FUN_1471bd5f2(&DAT_14c9e44d0,uVar19);
          FUN_1471bd5f2(&DAT_14c9e44e8,uVar19);
          iVar18 = DAT_14c9e44c0;
          _DAT_14c9e44c0 = CONCAT44(DAT_14c9e44c4,DAT_14c9e44c0 + uVar19);
          if ((uint)(DAT_14c9e44c4 - iVar18) < uVar19) {
            FUN_145ee9c2c(&DAT_14c9e44b8);
          }
          iVar18 = DAT_14c9e44d8;
          _DAT_14c9e44d8 = CONCAT44(DAT_14c9e44dc,DAT_14c9e44d8 + uVar19);
          if ((uint)(DAT_14c9e44dc - iVar18) < uVar19) {
            FUN_145ee9c2c(&DAT_14c9e44d0);
          }
          iVar18 = DAT_14c9e44f0;
          _DAT_14c9e44f0 = CONCAT44(DAT_14c9e44f4,DAT_14c9e44f0 + uVar19);
          if ((uint)(DAT_14c9e44f4 - iVar18) < uVar19) {
            FUN_145ee9c2c(&DAT_14c9e44e8);
          }
          iVar18 = DAT_14c873608;
          piVar20 = (int *)(lVar24 + lVar25 + 0x1c);
          FUN_1471bd61c(local_200,puVar23);
          uVar6 = DAT_14c9e44b8;
          local_190 = *piVar20;
          local_1a8._4_8_ = *(undefined8 *)(lVar24 + lVar25 + 0x14);
          local_1a8._0_4_ = *puVar23;
          uStack_19c = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          iVar17 = local_190 * iVar18;
          iVar13 = local_190 * iVar17;
          local_18c = local_190;
          local_188 = local_190;
          if (DAT_14ca85169 == '\0') {
            local_1f0 = *(undefined8 *)(local_208[3] + 8);
            FUN_14002049c(&DAT_14ca85100,1);
            local_220 = uVar6;
            local_238 = (double *)local_1a8;
            local_230 = iVar17;
            local_228 = iVar13;
            (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,&DAT_14ca85100,local_1f0,0);
            FUN_14002049c(&DAT_14ca85100,0);
          }
          else {
            local_220 = DAT_14c9e44b8;
            local_238 = (double *)local_1a8;
            local_230 = iVar17;
            local_228 = iVar13;
            (**(code **)(*DAT_14ca83900 + 0x220))
                      (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(local_208[3] + 8),0);
          }
          uVar6 = DAT_14c9e44d0;
          iVar13 = *piVar20 * iVar18;
          iVar17 = *piVar20 * iVar13;
          if (DAT_14ca85169 == '\0') {
            local_1f0 = *(undefined8 *)(local_208[4] + 8);
            FUN_14002049c(&DAT_14ca85100,1);
            local_220 = uVar6;
            local_238 = (double *)local_1a8;
            local_230 = iVar13;
            local_228 = iVar17;
            (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,&DAT_14ca85100,local_1f0,0);
            FUN_14002049c(&DAT_14ca85100,0);
          }
          else {
            local_220 = DAT_14c9e44d0;
            local_238 = (double *)local_1a8;
            local_230 = iVar13;
            local_228 = iVar17;
            (**(code **)(*DAT_14ca83900 + 0x220))
                      (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(local_208[4] + 8),0);
          }
          uVar7 = DAT_14c9e44e8;
          iVar18 = iVar18 * *piVar20;
          iVar17 = *piVar20 * iVar18;
          uVar6 = *(undefined8 *)(local_208[5] + 8);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,1);
            local_220 = uVar7;
            local_238 = (double *)local_1a8;
            local_230 = iVar18;
            local_228 = iVar17;
            (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,&DAT_14ca85100,uVar6,0);
            FUN_14002049c(&DAT_14ca85100,0);
            param_1 = local_208;
            param_4 = local_1e0;
            uVar19 = local_20c;
          }
          else {
            local_220 = DAT_14c9e44e8;
            local_238 = (double *)local_1a8;
            local_230 = iVar18;
            local_228 = iVar17;
            (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,&DAT_14ca85100,uVar6,0);
            param_1 = local_208;
            param_4 = local_1e0;
            uVar19 = local_20c;
          }
        }
        dVar28 = *(double *)(lVar24 + 0x48 + lVar25);
        dVar3 = *(double *)(lVar24 + 0x40 + lVar25);
        dVar4 = *(double *)(lVar24 + 0x30 + lVar25);
        dVar5 = *(double *)(lVar24 + 0x28 + lVar25);
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(double *)(lVar15 + 0x70) =
             *(double *)(lVar24 + 0x38 + lVar25) * 0.5 + *(double *)(lVar24 + 0x20 + lVar25);
        *(double *)(lVar15 + 0x78) = dVar3 * 0.5 + dVar5;
        *(double *)(lVar15 + 0x80) = dVar28 * 0.5 + dVar4;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0x90) = (float)local_158 * 0.31830987;
        *(float *)(lVar15 + 0x94) = local_158._4_4_ * 0.31830987;
        *(float *)(lVar15 + 0x98) = (float)local_150 * 0.31830987;
        *(float *)(lVar15 + 0x9c) = local_150._4_4_ * 0.31830987;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0xa0) = local_128 * 0.31830987;
        *(float *)(lVar15 + 0xa4) = local_124 * 0.31830987;
        *(float *)(lVar15 + 0xa8) = local_120 * 0.31830987;
        *(float *)(lVar15 + 0xac) = local_11c * 0.31830987;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0xb0) = local_f8 * 0.31830987;
        *(float *)(lVar15 + 0xb4) = local_f4 * 0.31830987;
        *(float *)(lVar15 + 0xb8) = local_f0 * 0.31830987;
        *(float *)(lVar15 + 0xbc) = local_ec * 0.31830987;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0xc0) = (float)local_148 * 0.31830987;
        *(float *)(lVar15 + 0xc4) = local_148._4_4_ * 0.31830987;
        *(float *)(lVar15 + 200) = (float)local_140 * 0.31830987;
        *(float *)(lVar15 + 0xcc) = local_140._4_4_ * 0.31830987;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0xd0) = local_118 * 0.31830987;
        *(float *)(lVar15 + 0xd4) = local_114 * 0.31830987;
        *(float *)(lVar15 + 0xd8) = local_110 * 0.31830987;
        *(float *)(lVar15 + 0xdc) = local_10c * 0.31830987;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0xe0) = local_e8 * 0.31830987;
        *(float *)(lVar15 + 0xe4) = local_e4 * 0.31830987;
        *(float *)(lVar15 + 0xe8) = local_e0 * 0.31830987;
        *(float *)(lVar15 + 0xec) = local_dc * 0.31830987;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0xf0) = (float)uStack_138 * 0.31830987;
        *(float *)(lVar15 + 0xf4) = local_108 * 0.31830987;
        *(float *)(lVar15 + 0xf8) = local_d8 * 0.31830987;
        *(undefined4 *)(lVar15 + 0xfc) = 0;
        *(undefined4 *)(*(longlong *)(lVar24 + 0x58 + lVar25) + 0x100) = local_15c;
        fVar27 = (float)SQRT(local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170
                            );
        fVar26 = fVar27;
        if (fVar27 <= 0.0001) {
          fVar26 = 0.0001;
        }
        dVar28 = 1.0 / (double)fVar26;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        *(float *)(lVar15 + 0x110) = (float)(dVar28 * local_178);
        *(float *)(lVar15 + 0x114) = (float)(dStack_170 * dVar28);
        *(float *)(lVar15 + 0x118) = (float)(local_168 * dVar28);
        *(float *)(lVar15 + 0x11c) = fVar27;
        lVar15 = *(longlong *)(lVar24 + 0x58 + lVar25);
        if (*(char *)(lVar15 + 0x1d0) == '\0') {
          plVar9 = (longlong *)(lVar24 + lVar25 + 0x58);
          *(undefined8 *)(lVar15 + 0x130) = *(undefined8 *)(lVar15 + 0x80);
          *(undefined8 *)(lVar15 + 0x120) = *(undefined8 *)(lVar15 + 0x70);
          *(undefined8 *)(lVar15 + 0x128) = *(undefined8 *)(lVar15 + 0x78);
          lVar15 = 0;
          do {
            puVar1 = (undefined8 *)(*plVar9 + 0x90 + lVar15);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(*plVar9 + 0x140 + lVar15);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar1 = (undefined8 *)(*plVar9 + 0xc0 + lVar15);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(*plVar9 + 0x170 + lVar15);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            lVar15 = lVar15 + 0x10;
          } while (lVar15 != 0x30);
          lVar15 = *plVar9;
          *(undefined8 *)(lVar15 + 0x1a0) = *(undefined8 *)(lVar15 + 0xf0);
          *(undefined8 *)(lVar15 + 0x1a8) = *(undefined8 *)(lVar15 + 0xf8);
          *(undefined4 *)(*plVar9 + 0x1b0) = *(undefined4 *)(*plVar9 + 0x100);
          lVar15 = *plVar9;
          *(undefined4 *)(lVar15 + 0x1c0) = *(undefined4 *)(lVar15 + 0x110);
          *(undefined4 *)(lVar15 + 0x1c4) = *(undefined4 *)(lVar15 + 0x114);
          *(undefined4 *)(lVar15 + 0x1c8) = *(undefined4 *)(lVar15 + 0x118);
          *(undefined4 *)(lVar15 + 0x1cc) = *(undefined4 *)(lVar15 + 0x11c);
          *(undefined1 *)(*plVar9 + 0x1d0) = 1;
        }
        *(undefined1 *)(lVar24 + 0x50 + lVar25) = 1;
        uVar19 = uVar19 & ~(uint)uVar21;
        puVar14 = (uint *)param_4[4];
        if ((uint *)param_4[4] == (uint *)0x0) {
          puVar14 = local_1c8;
        }
        iVar18 = (int)param_4[5];
        iVar13 = (int)local_1c0;
        lVar24 = (longlong)iVar13;
        uVar10 = puVar14[lVar24] & uVar19;
        uVar22 = local_1c0;
        iVar17 = local_1f4;
        if (uVar10 == 0) {
          iVar11 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar11 = iVar18 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar12 = iVar11;
          if (iVar11 < iVar13) {
            iVar12 = iVar13;
          }
          if (iVar11 <= iVar13) break;
          lVar25 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar10 = puVar14[lVar25 + lVar24 + 1];
            if (uVar10 != 0) break;
            lVar25 = lVar25 + 1;
            if (iVar12 - lVar24 == lVar25) goto LAB_142cbf0d4;
          }
          uVar19 = 0xffffffff;
          uVar22 = (ulonglong)(iVar13 + (int)lVar25 + 1);
        }
        uVar21 = (ulonglong)(-uVar10 & uVar10);
        uVar16 = uVar21 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar13 = (iVar17 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      } while (iVar13 < iVar18);
    }
LAB_142cbf0d4:
    param_3 = local_1d8;
    FUN_1471bbb3a(param_5,*(undefined4 *)(local_1d8 + 0x134));
    iVar18 = (int)param_6[1];
    param_2 = local_1e8;
    if (0 < iVar18) {
      lVar24 = 0;
      do {
        lVar25 = *(longlong *)(*param_6 + lVar24 * 8);
        uVar19 = *(uint *)(lVar25 + 0x158);
        if ((~uVar19 & 0x7fffffff) != 0) {
          lVar25 = *(longlong *)(lVar25 + 0x148);
          lVar15 = *(longlong *)(lVar25 + 0x3500);
          lVar25 = lVar25 + 0x34f0;
          if (lVar15 != 0) {
            lVar25 = lVar15;
          }
          uVar10 = uVar19 + 0x1f;
          if (-1 < (int)uVar19) {
            uVar10 = uVar19;
          }
          puVar14 = (uint *)(lVar25 + (longlong)((int)uVar10 >> 5) * 4);
          *puVar14 = *puVar14 | 1 << ((byte)uVar19 & 0x1f);
          iVar18 = (int)param_6[1];
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < iVar18);
    }
  }
  if (DAT_14c9e4390 != 0 || _DAT_14c9e4378 != 0) {
    local_150 = *(longlong *)(param_3 + 1000);
    local_130 = local_150 + 0x13b98;
    local_158 = &PTR_FUN_14a217cb0;
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    local_148 = local_150;
    if (0 < *(int *)(param_2 + 0x3928)) {
      lVar24 = 0;
      do {
        FUN_147caca10(*(undefined8 *)(*(longlong *)(param_2 + 0x3920) + lVar24 * 8),&local_158,
                      DAT_14c9e4390 != 0);
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(param_2 + 0x3928));
      local_158 = &PTR_FUN_14a217cb0;
      if (local_140 != (undefined8 *)0x0) {
        piVar20 = (int *)(local_140 + 1);
        *piVar20 = *piVar20 + -1;
        if (*piVar20 == 0) {
          (**(code **)*local_140)(local_140,1);
        }
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cbf182 FUN_142cbf182 body=270 status=ok
// SIG undefined FUN_142cbf182(void)

void FUN_142cbf182(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_a8 [8];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_60 = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_c8 = local_a8 + 4;
  local_c0 = local_a8 + 2;
  local_b8 = local_a8;
  FUN_142cbf292(param_1);
  local_c8 = local_a8 + 2;
  local_c0 = local_a8;
  FUN_142cbe1b6(param_1,param_2,param_3,local_a8 + 4);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1471c577e(local_a8 + 4);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cbf292 FUN_142cbf292 body=1176 status=ok
// SIG undefined FUN_142cbf292(void)

void FUN_142cbf292(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  int iVar19;
  
  cVar3 = FUN_1471bb6bc(param_2,param_3);
  if (cVar3 != '\0') {
    if ((longlong)*(int *)(param_3 + 0x3f0) != 0) {
      lVar13 = (longlong)*(int *)(param_3 + 0x3f0) * 0x13c10;
      pcVar18 = (char *)(*(longlong *)(param_3 + 1000) + 0x3368);
      do {
        LOCK();
        cVar3 = *pcVar18;
        if (cVar3 == '\0') {
          *pcVar18 = '\x01';
        }
        UNLOCK();
        if (cVar3 != '\0') {
          FUN_1447d2058(pcVar18);
        }
        pcVar18 = pcVar18 + 0x13c10;
        lVar13 = lVar13 + -0x13c10;
      } while (lVar13 != 0);
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar4 = *(int *)(param_3 + 0x3f0);
      if (0 < iVar4) {
        lVar13 = 0;
        do {
          lVar5 = *(longlong *)(param_3 + 1000) + lVar13 * 0x13c10;
          lVar9 = *(longlong *)(param_3 + 1000) + lVar13 * 0x13c10;
          puVar16 = (uint *)(lVar9 + 0x3118);
          iVar4 = *(int *)(lVar9 + 0x3130);
          if (iVar4 == 0) {
            uVar14 = 1;
            iVar15 = 0;
            uVar17 = 0;
            iVar19 = 0;
          }
          else {
            puVar10 = *(uint **)(lVar5 + 0x3128);
            if (*(uint **)(lVar5 + 0x3128) == (uint *)0x0) {
              puVar10 = puVar16;
            }
            uVar12 = *puVar10;
            if (uVar12 == 0) {
              iVar19 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar19 = iVar4 + -1;
              }
              uVar17 = 0;
              uVar14 = (ulonglong)(uint)(iVar19 >> 5);
              if (iVar19 >> 5 < 1) {
                uVar14 = uVar17;
              }
              iVar15 = 0;
              do {
                if (uVar14 == uVar17) goto LAB_142cbf608;
                iVar15 = iVar15 + 0x20;
                uVar12 = puVar10[uVar17 + 1];
                uVar17 = uVar17 + 1;
              } while (uVar12 == 0);
            }
            else {
              iVar15 = 0;
              uVar17 = 0;
            }
            uVar14 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar14 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar19 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar19) {
              iVar19 = iVar4;
            }
          }
          if (iVar19 < iVar4) {
            uVar12 = 0xffffffff;
            do {
              FUN_1471bb71e(param_1,param_2,lVar5,(longlong)iVar19,param_4,
                            (*(byte *)(*(longlong *)(lVar5 + 0x31d8) + 4 + (longlong)iVar19 * 0x18)
                            & 2) >> 1,param_5,param_6,param_7);
              uVar12 = ~(uint)uVar14 & uVar12;
              puVar10 = *(uint **)(lVar5 + 0x3128);
              if (*(uint **)(lVar5 + 0x3128) == (uint *)0x0) {
                puVar10 = puVar16;
              }
              iVar4 = *(int *)(lVar5 + 0x3130);
              iVar19 = (int)uVar17;
              lVar9 = (longlong)iVar19;
              uVar6 = puVar10[lVar9] & uVar12;
              if (uVar6 == 0) {
                iVar7 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar7 = iVar4 + -1;
                }
                iVar7 = iVar7 >> 5;
                iVar8 = iVar7;
                if (iVar7 < iVar19) {
                  iVar8 = iVar19;
                }
                if (iVar7 <= iVar19) break;
                lVar11 = 0;
                while( true ) {
                  iVar15 = iVar15 + 0x20;
                  uVar6 = puVar10[lVar9 + lVar11 + 1];
                  if (uVar6 != 0) break;
                  lVar11 = lVar11 + 1;
                  if (iVar8 - lVar9 == lVar11) goto LAB_142cbf608;
                }
                uVar17 = (ulonglong)(iVar19 + (int)lVar11 + 1);
                uVar12 = 0xffffffff;
              }
              uVar14 = (ulonglong)(-uVar6 & uVar6);
              uVar1 = uVar14 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              iVar19 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            } while (iVar19 < iVar4);
          }
LAB_142cbf608:
          iVar4 = *(int *)(lVar5 + 0x13848);
          if (0 < iVar4) {
            lVar9 = 0;
            do {
              uVar12 = *(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0x13840) + lVar9 * 8) + 0x158);
              puVar10 = *(uint **)(lVar5 + 0x3128);
              if (*(uint **)(lVar5 + 0x3128) == (uint *)0x0) {
                puVar10 = puVar16;
              }
              uVar6 = uVar12 + 0x1f;
              if (-1 < (int)uVar12) {
                uVar6 = uVar12;
              }
              if ((puVar10[(int)uVar6 >> 5] >> (uVar12 & 0x1f) & 1) == 0) {
                FUN_1471bb71e(param_1,param_2,lVar5,uVar12,param_4,1,param_5,param_6,param_7);
                iVar4 = *(int *)(lVar5 + 0x13848);
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < iVar4);
          }
          lVar13 = lVar13 + 1;
          iVar4 = *(int *)(param_3 + 0x3f0);
        } while (lVar13 < iVar4);
      }
    }
    else {
      iVar4 = *(int *)(param_2 + 0x3338);
      if (iVar4 != 0) {
        iVar19 = 0;
        do {
          lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x3330) + (longlong)iVar19 * 8);
          bVar2 = *(byte *)(lVar13 + 0x171);
          FUN_1471bb7c8(param_1,param_2 + 0x4e38,lVar13,0,1,param_5,param_6,param_7);
          if ((bVar2 & 2) == 0) {
            if ((*(byte *)(lVar13 + 0x171) & 2) == 0) {
              *(byte *)(lVar13 + 0x171) = *(byte *)(lVar13 + 0x171) | 2;
            }
            lVar5 = (longlong)*(int *)(param_3 + 0x3f0);
            if (0 < lVar5) {
              iVar15 = iVar19 + 0x1f;
              if (-1 < iVar19) {
                iVar15 = iVar19;
              }
              lVar9 = *(longlong *)(param_3 + 1000) + 0x3118;
              do {
                lVar11 = *(longlong *)(lVar9 + 0x10);
                if (*(longlong *)(lVar9 + 0x10) == 0) {
                  lVar11 = lVar9;
                }
                if ((*(uint *)(lVar11 + (longlong)(iVar15 >> 5) * 4) & 1 << ((byte)iVar19 & 0x1f))
                    != 0) {
                  iVar15 = *(int *)(lVar9 + 0x248);
                  *(uint *)(lVar9 + 0x248) = iVar15 + 1U;
                  if (*(uint *)(lVar9 + 0x24c) < iVar15 + 1U) {
                    FUN_14175e8cc((longlong *)(lVar9 + 0x240),iVar15);
                  }
                  *(longlong *)(*(longlong *)(lVar9 + 0x240) + (longlong)iVar15 * 8) = lVar13;
                  break;
                }
                lVar9 = lVar9 + 0x13c10;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != iVar4);
      }
      iVar4 = *(int *)(param_3 + 0x3f0);
    }
    if (iVar4 != 0) {
      lVar13 = (longlong)iVar4 * 0x13c10;
      pcVar18 = (char *)(*(longlong *)(param_3 + 1000) + 0x3368);
      do {
        LOCK();
        cVar3 = *pcVar18;
        if (cVar3 == '\x01') {
          *pcVar18 = '\0';
        }
        UNLOCK();
        if (cVar3 != '\x01') {
          FUN_14008cdb0(pcVar18);
        }
        pcVar18 = pcVar18 + 0x13c10;
        lVar13 = lVar13 + -0x13c10;
      } while (lVar13 != 0);
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 142cbf77f FUN_142cbf77f body=69 status=ok
// SIG undefined FUN_142cbf77f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf77f(void)

{
  _DAT_14c9e4500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4508,1);
  return;
}



// FUNCTION 142cbf7c4 FUN_142cbf7c4 body=69 status=ok
// SIG undefined FUN_142cbf7c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf7c4(void)

{
  _DAT_14c9e4518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4520,1);
  return;
}



// FUNCTION 142cbf809 FUN_142cbf809 body=69 status=ok
// SIG undefined FUN_142cbf809(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf809(void)

{
  _DAT_14c9e4530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf84b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4538,1);
  return;
}



// FUNCTION 142cbf84e FUN_142cbf84e body=69 status=ok
// SIG undefined FUN_142cbf84e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf84e(void)

{
  _DAT_14c9e4548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4550,1);
  return;
}



// FUNCTION 142cbf893 FUN_142cbf893 body=69 status=ok
// SIG undefined FUN_142cbf893(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf893(void)

{
  _DAT_14c9e4560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4568,1);
  return;
}



// FUNCTION 142cbf8d8 FUN_142cbf8d8 body=69 status=ok
// SIG undefined FUN_142cbf8d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf8d8(void)

{
  _DAT_14c9e4578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf91a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4580,1);
  return;
}



// FUNCTION 142cbf91d FUN_142cbf91d body=69 status=ok
// SIG undefined FUN_142cbf91d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf91d(void)

{
  _DAT_14c9e4590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf95f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e4598,1);
  return;
}



// FUNCTION 142cbf962 FUN_142cbf962 body=69 status=ok
// SIG undefined FUN_142cbf962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf962(void)

{
  _DAT_14c9e45a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e45b0,1);
  return;
}



// FUNCTION 142cbf9a7 FUN_142cbf9a7 body=69 status=ok
// SIG undefined FUN_142cbf9a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf9a7(void)

{
  _DAT_14c9e45c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbf9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e45c8,1);
  return;
}



// FUNCTION 142cbf9ec FUN_142cbf9ec body=69 status=ok
// SIG undefined FUN_142cbf9ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf9ec(void)

{
  _DAT_14c9e45d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbfa2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e45e0,1);
  return;
}



// FUNCTION 142cbfa31 FUN_142cbfa31 body=69 status=ok
// SIG undefined FUN_142cbfa31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbfa31(void)

{
  _DAT_14c9e45f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cbfa73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e45f8,1);
  return;
}



// FUNCTION 142cbfa76 FUN_142cbfa76 body=486 status=ok
// SIG undefined FUN_142cbfa76(void)

undefined4 * FUN_142cbfa76(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar2 = 0x3f800000;
  if (param_2 == 0) {
    fVar3 = 0.01;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 0x3f800000;
  }
  else {
    fVar3 = *(float *)(param_2 + 0xc4);
    if (2.0 <= fVar3) {
      fVar3 = 2.0;
    }
    uVar2 = 0;
    if (*(char *)(param_2 + 0x23) != '\0') {
      uVar2 = 0x3f800000;
    }
    uVar4 = *(undefined4 *)(param_2 + 200);
    if (fVar3 <= 0.01) {
      fVar3 = 0.01;
    }
    uVar5 = *(undefined4 *)(param_2 + 0xd0);
    uVar6 = *(undefined4 *)(param_2 + 0xd4);
    uVar7 = *(undefined4 *)(param_2 + 0xd8);
    uVar8 = *(undefined4 *)(param_2 + 0xcc);
  }
  fVar1 = expf(fVar3 * 5.0);
  fVar9 = 1.0 / (fVar1 + 1.0);
  fVar1 = expf(fVar3 * -5.0);
  fVar1 = 1.0 / (fVar1 + 1.0) - fVar9;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = fVar3;
  param_1[5] = 1.0 / fVar1;
  param_1[6] = -fVar9 / fVar1;
  param_1[9] = uVar4;
  param_1[10] = uVar2;
  param_1[7] = param_3;
  fVar3 = *(float *)(DAT_14c9e45a0 + 4);
  if (fVar3 <= 0.1) {
    fVar3 = 0.1;
  }
  param_1[8] = 1.0 / fVar3;
  return param_1;
}



// FUNCTION 142cbfc74 FUN_142cbfc74 body=301 status=ok
// SIG undefined FUN_142cbfc74(void)

ulonglong FUN_142cbfc74(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  lVar4 = DAT_14ca97170;
  uVar9 = 0;
  if (2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) {
    iVar1 = *(int *)(param_1 + 2);
    iVar5 = iVar1 + 7;
    iVar2 = iVar1 + 0xf;
    iVar3 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar5 = iVar1;
      iVar2 = iVar1;
      iVar3 = iVar1;
    }
    bVar13 = (iVar2 >> 4 & 0x80000001U) == 1;
    iVar2 = iVar1 >> 0x1f;
    iVar1 = iVar1 / 0xc0 + iVar2;
    uVar11 = iVar1 - iVar2;
    uVar10 = (iVar1 - iVar2) + 3;
    if (-1 < (int)uVar11) {
      uVar10 = uVar11;
    }
    uVar12 = (ulonglong)bVar13;
    if ((iVar5 >> 3 & 0x80000001U) != 1) {
      uVar12 = uVar9;
    }
    uVar11 = uVar11 - (uVar10 & 0xfffffffc);
    if (uVar11 != 0) {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar8 = 0;
      }
      else if (iVar1 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar8 = 1;
      }
      uVar9 = 0;
      if (0 < *(int *)(lVar4 + uVar8 * 4)) {
        uVar9 = (ulonglong)uVar11;
      }
    }
    uVar9 = CONCAT71((int7)(uVar9 >> 8),
                     uVar11 == (uint)uVar9 &
                     ((iVar3 >> 5 & 0x80000001U) != 1 | SUB81(uVar12,0)) & SUB81(uVar12,0) == bVar13
                    );
  }
  return uVar9;
}



// FUNCTION 142cbfdba FUN_142cbfdba body=1362 status=ok
// SIG undefined FUN_142cbfdba(void)

void FUN_142cbfdba(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,undefined4 *param_8,
                  undefined1 param_9,longlong param_10)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined4 *puStack_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined2 local_c8;
  uint local_b4;
  longlong local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined4 *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = param_1 + 0x98;
  local_b0 = param_2;
  local_a0 = param_4;
  cVar4 = FUN_140083a05(lVar5);
  if (cVar4 == '\0') {
    bVar16 = false;
  }
  else {
    bVar16 = *(int *)(DAT_14c9ece20 + 4) != 0;
  }
  cVar4 = FUN_140083a05(lVar5);
  if (cVar4 == '\0') {
    local_b4 = 0;
  }
  else {
    local_b4 = (uint)CONCAT71((int7)((ulonglong)DAT_14c9f3c78 >> 8),*(int *)(DAT_14c9f3c78 + 4) != 0
                             );
  }
  cVar4 = FUN_140083a05(lVar5);
  if ((cVar4 != '\0') && ((bool)(bVar16 & DAT_14ca085ac == 0))) {
    local_108 = *(longlong *)(param_1 + 8) + 0x5168;
    FUN_142b87c26(param_3,local_b0,param_5,0);
    *(undefined1 *)(param_10 + 0x334) = 1;
    if ((param_7 != 0) && ((longlong)*(int *)(param_1 + 0x3f0) != 0)) {
      lVar5 = *(longlong *)(param_1 + 1000);
      lVar9 = (longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 + lVar5;
      lVar7 = param_1 + 0xe38;
      if (*(longlong *)(param_1 + 0xe58) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xe58);
      }
      do {
        iVar12 = -1;
        if (0 < (int)*(uint *)(param_1 + 0x410)) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x408) + uVar13 * 8) == lVar5) {
              iVar12 = (int)uVar13;
              break;
            }
            uVar13 = uVar13 + 1;
          } while (*(uint *)(param_1 + 0x410) != uVar13);
        }
        if (*(int *)(lVar7 + (longlong)iVar12 * 0x20) == 2) {
          FUN_14307a998(param_1);
          break;
        }
        lVar5 = lVar5 + 0x13c10;
      } while (lVar5 != lVar9);
    }
    *(uint *)(param_10 + 0x330) =
         *(uint *)(param_10 + 0x330) & ((uint)(byte)~(byte)local_b4 * 2 | 0xfffffffc);
    iVar12 = *(int *)(param_1 + 0x3f0);
    iVar1 = *(int *)(param_10 + 800);
    if (iVar1 < iVar12) {
      *(int *)(param_10 + 800) = iVar12;
      if ((uint)(*(int *)(param_10 + 0x324) - iVar1) < (uint)(iVar12 - iVar1)) {
        FUN_1471c7074(param_10);
      }
      lVar5 = *(longlong *)(param_10 + 0x310);
      if (*(longlong *)(param_10 + 0x310) == 0) {
        lVar5 = param_10;
      }
      memset((void *)((longlong)iVar1 * 0x310 + lVar5),0,(longlong)(iVar12 - iVar1) * 0x310);
    }
    else {
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar12);
      }
      if (iVar12 < iVar1) {
        *(int *)(param_10 + 800) = iVar12;
        FUN_1471c71a0(param_10);
      }
    }
    if (0 < *(int *)(param_1 + 0x3f0)) {
      local_90 = param_1 + 0xe38;
      lVar5 = 0;
      local_b4 = local_b4 ^ 1;
      do {
        lVar7 = *(longlong *)(param_1 + 1000);
        puVar3 = *(ulonglong **)(local_b0 + 0x18);
        iVar12 = *(int *)(lVar7 + 0x1de0 + lVar5 * 0x13c10);
        local_a4 = *(int *)((longlong)puVar3 + 0x17c);
        if (local_a4 != iVar12) {
          *(int *)((longlong)puVar3 + 0x17c) = iVar12;
          puVar6 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar6 + 3;
          if ((undefined8 *)puVar3[1] < puVar10) {
            FUN_140023dd8(puVar3,0x20);
            puVar6 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
            puVar10 = puVar6 + 3;
          }
          *puVar3 = (ulonglong)puVar10;
          *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
          *(undefined8 **)puVar3[6] = puVar6;
          puVar3[6] = (ulonglong)(puVar6 + 1);
          uVar2 = *(undefined4 *)((longlong)puVar3 + 0x17c);
          puVar6[1] = 0;
          *puVar6 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar6 + 2) = uVar2;
        }
        puVar14 = (undefined4 *)(lVar7 + lVar5 * 0x13c10);
        lVar7 = -1;
        if (0 < (longlong)*(int *)(param_1 + 0x410)) {
          lVar9 = 0;
          do {
            lVar7 = lVar9;
            if (*(undefined4 **)(*(longlong *)(param_1 + 0x408) + lVar9 * 8) == puVar14) break;
            lVar9 = lVar9 + 1;
            lVar7 = -1;
          } while (*(int *)(param_1 + 0x410) != lVar9);
        }
        lVar9 = *(longlong *)(param_1 + 0xe58);
        if (*(longlong *)(param_1 + 0xe58) == 0) {
          lVar9 = local_90;
        }
        lVar11 = (longlong)(int)lVar7 * 0x20;
        lVar7 = *(longlong *)(param_10 + 0x310);
        if (*(longlong *)(param_10 + 0x310) == 0) {
          lVar7 = param_10;
        }
        if (*(int *)(lVar9 + lVar11) == 2) {
          puVar15 = (undefined4 *)(lVar7 + lVar5 * 0x310);
          local_d0 = puVar15 + 0xc0;
          puStack_e0 = puVar15 + 8;
          local_f0 = puVar14 + 0x4970;
          local_e8 = CONCAT71(local_e8._1_7_,param_9);
          local_100 = param_8;
          local_108 = param_6;
          local_c8 = 4;
          local_f8 = puVar14;
          local_d8 = puVar15 + 100;
          local_98 = puStack_e0;
          FUN_142d8eb6a(param_1,&local_88,local_b0,local_a0);
          puVar15[4] = local_78;
          puVar15[5] = uStack_74;
          puVar15[6] = uStack_70;
          puVar15[7] = uStack_6c;
          *puVar15 = local_88;
          puVar15[1] = uStack_84;
          puVar15[2] = uStack_80;
          puVar15[3] = uStack_7c;
          if (*(int *)(lVar9 + 0xc + lVar11) == 2 && (char)local_b4 == '\0') {
            local_e8 = 0;
            puStack_e0 = (undefined4 *)0x0;
            local_100 = local_98;
            local_108 = param_6;
            local_d8 = (undefined4 *)CONCAT62(local_d8._2_6_,4);
            local_f0 = (undefined4 *)((ulonglong)local_f0 & 0xffffffff00000000);
            local_f8 = puVar15 + 100;
            uVar8 = FUN_142d404f6(param_1,local_b0,puVar14,local_a0);
            *(undefined8 *)(puVar15 + 6) = uVar8;
          }
        }
        if (*(int *)((longlong)puVar3 + 0x17c) != local_a4) {
          *(int *)((longlong)puVar3 + 0x17c) = local_a4;
          puVar6 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar6 + 3;
          if ((undefined8 *)puVar3[1] < puVar10) {
            FUN_140023dd8(puVar3,0x20);
            puVar6 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
            puVar10 = puVar6 + 3;
          }
          *puVar3 = (ulonglong)puVar10;
          *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
          *(undefined8 **)puVar3[6] = puVar6;
          puVar3[6] = (ulonglong)(puVar6 + 1);
          uVar2 = *(undefined4 *)((longlong)puVar3 + 0x17c);
          puVar6[1] = 0;
          *puVar6 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar6 + 2) = uVar2;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x3f0));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cc030e FUN_142cc030e body=6324 status=ok
// SIG undefined FUN_142cc030e(void)

void FUN_142cc030e(longlong param_1,undefined **param_2,longlong param_3,undefined ***param_4,
                  longlong *param_5,undefined1 param_6,byte param_7,char param_8,longlong param_9)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined **ppuVar10;
  longlong *plVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined ***pppuVar18;
  int *piVar19;
  undefined ***pppuVar20;
  longlong *plVar21;
  undefined **ppuVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_6a8 [32];
  undefined ***local_688;
  longlong *local_680;
  undefined ***local_678;
  undefined ***local_670;
  undefined ***local_668;
  undefined8 *puStack_660;
  undefined ***local_658;
  longlong *local_650;
  undefined2 local_648;
  undefined **local_638;
  longlong local_630;
  longlong local_628;
  longlong *local_620;
  int *local_618;
  int local_60c;
  longlong local_608;
  undefined ***local_600;
  undefined **local_5f8;
  undefined **local_5f0;
  longlong local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c9;
  ulonglong local_5c8;
  undefined1 local_5b9;
  undefined **local_5b8;
  undefined **ppuStack_5b0;
  undefined **local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  longlong local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined **local_578;
  undefined **ppuStack_570;
  ulonglong local_568;
  ulonglong local_560;
  int local_550;
  int local_54c;
  int local_548;
  undefined4 local_544;
  int local_540;
  int local_53c;
  longlong local_538 [12];
  undefined **local_4d8;
  char local_4d0;
  undefined *local_4c0;
  longlong local_4b8 [13];
  char local_449;
  undefined **local_448;
  undefined **ppuStack_440;
  undefined **local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined **local_418;
  undefined ***local_410;
  longlong *local_408;
  undefined ***local_400;
  longlong *local_3f8;
  undefined **local_3f0;
  longlong local_3e8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 auStack_398 [30];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  int iStack_280;
  undefined4 uStack_27c;
  undefined2 uStack_278;
  undefined1 uStack_276;
  undefined1 uStack_275;
  undefined2 uStack_274;
  undefined2 uStack_272;
  longlong *plStack_270;
  int *local_268;
  undefined ***pppuStack_260;
  longlong *local_258;
  char *pcStack_250;
  longlong **local_248;
  longlong **local_240;
  undefined ***local_238;
  undefined1 *local_230;
  undefined ***local_228;
  ulonglong *local_220;
  longlong local_218;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined **local_138;
  undefined **ppuStack_130;
  undefined **local_128;
  undefined **local_118;
  undefined **ppuStack_110;
  undefined **local_108;
  ulonglong *puStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  local_449 = param_8;
  local_600 = param_4;
  if ((DAT_14ca085ac == 0) != (bool)param_8) {
    FUN_1448e94e7(local_4b8);
    local_4c0 = *(undefined **)(param_3 + 0x1b0);
    local_638 = param_2;
    local_630 = param_1;
    local_628 = param_3;
    if (DAT_14c760a84 == -1) {
      FUN_145fdab76(&local_2a8,L"FRDGSystemTextures",
                    L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
      DAT_14c760a84 = FUN_145d12cf0(&local_2a8);
      if (local_2a8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    if ((DAT_14c760a84 < *(int *)(local_638 + 0x26)) &&
       (*(longlong *)(local_638[0x25] + (longlong)DAT_14c760a84 * 8) != 0)) {
      local_620 = (longlong *)(*(longlong *)(local_638[0x25] + (longlong)DAT_14c760a84 * 8) + 8);
    }
    else {
      local_620 = (longlong *)0x0;
    }
    if (0 < *(int *)(local_630 + 0x3f0)) {
      local_5e8 = local_630 + 0xe38;
      local_608 = local_630 + 0x98;
      local_5f0 = local_638 + 0x2f;
      local_5f8 = local_638 + 0xe;
      local_618 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
      lVar28 = 0;
      ppuVar10 = local_638;
      lVar27 = local_630;
      do {
        lVar30 = *(longlong *)(lVar27 + 1000);
        puVar2 = (ulonglong *)ppuVar10[3];
        iVar25 = *(int *)(lVar30 + 0x1de0 + lVar28 * 0x13c10);
        local_60c = *(int *)((longlong)puVar2 + 0x17c);
        if (local_60c != iVar25) {
          *(int *)((longlong)puVar2 + 0x17c) = iVar25;
          puVar8 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar8 + 3;
          if ((undefined8 *)puVar2[1] < puVar15) {
            FUN_140023dd8(puVar2,0x20);
            puVar8 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar15 = puVar8 + 3;
          }
          *puVar2 = (ulonglong)puVar15;
          *(int *)(puVar2 + 0xc) = (int)puVar2[0xc] + 1;
          *(undefined8 **)puVar2[6] = puVar8;
          puVar2[6] = (ulonglong)(puVar8 + 1);
          uVar1 = *(undefined4 *)((longlong)puVar2 + 0x17c);
          puVar8[1] = 0;
          *puVar8 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar8 + 2) = uVar1;
        }
        pppuVar18 = (undefined ***)(lVar30 + lVar28 * 0x13c10);
        lVar9 = (longlong)*(int *)(lVar27 + 0x410);
        lVar30 = -1;
        if (0 < lVar9) {
          lVar26 = 0;
          do {
            lVar30 = lVar26;
            if (*(undefined ****)(*(longlong *)(lVar27 + 0x408) + lVar26 * 8) == pppuVar18) break;
            lVar26 = lVar26 + 1;
            lVar30 = -1;
          } while (lVar9 != lVar26);
        }
        lVar26 = *(longlong *)(lVar27 + 0xe58);
        if (*(longlong *)(lVar27 + 0xe58) == 0) {
          lVar26 = local_5e8;
        }
        lVar30 = (longlong)(int)lVar30 * 0x20;
        if ((*(int *)(lVar26 + lVar30) != 2 || *(int *)(param_9 + 0x330) != 8) == (bool)param_7)
        goto LAB_142cc17da;
        local_538[10] = 0;
        local_538[0xb] = 0;
        local_538[8] = 0;
        local_538[9] = 0;
        local_538[6] = 0;
        local_538[7] = 0;
        local_538[4] = 0;
        local_538[5] = 0;
        local_538[2] = 0;
        local_538[3] = 0;
        local_538[0] = 0;
        local_538[1] = 0;
        local_4d8 = (undefined **)0x0;
        local_4d0 = 1;
        if (*(int *)(lVar27 + 0x410) < 1) {
          lVar9 = -1;
        }
        else {
          lVar13 = 0;
          do {
            if (*(undefined ****)(*(longlong *)(lVar27 + 0x408) + lVar13 * 8) == pppuVar18)
            goto LAB_142cc0649;
            lVar13 = lVar13 + 1;
          } while (lVar9 != lVar13);
          lVar13 = -1;
LAB_142cc0649:
          lVar9 = (longlong)(int)lVar13;
        }
        iVar25 = *(int *)(DAT_14c9e4540 + 4);
        iVar29 = *(int *)(DAT_14c9e4558 + 4);
        if (7 < iVar29) {
          iVar29 = 8;
        }
        if (iVar29 < 2) {
          iVar29 = 1;
        }
        if (*(int *)(lVar26 + lVar9 * 0x20) == 1) {
          iVar29 = FUN_1472e9d90();
        }
        fVar34 = (float)iVar29;
        fVar33 = SQRT(fVar34);
        fVar32 = fVar33;
        if (fVar34 < 0.0) {
          fVar32 = sqrtf(fVar34);
        }
        iVar4 = -((int)ROUND(-0.5 - (fVar32 + fVar32)) >> 1);
        uVar14 = (ulonglong)(iVar4 + -1 + (uint)(iVar4 == 0)) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_2a8 = (undefined **)CONCAT44(local_2a8._4_4_,1 << ((byte)lVar9 & 0x1f));
        fVar32 = fVar33;
        if (fVar34 < 0.0) {
          fVar32 = sqrtf(fVar34);
        }
        iVar4 = (int)ROUND(fVar32 + fVar32 + -0.5) >> 1;
        uVar14 = (ulonglong)(iVar4 + -1 + (uint)(iVar4 == 0)) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uStack_2a0 = (undefined **)CONCAT44(uStack_2a0._4_4_,1 << ((byte)lVar9 & 0x1f));
        if (fVar34 < 0.0) {
          fVar33 = sqrtf(fVar34);
        }
        piVar19 = (int *)(lVar26 + lVar30);
        iVar4 = -((int)ROUND(-0.5 - (fVar33 + fVar33)) >> 1);
        uVar14 = (ulonglong)(iVar4 + -1 + (uint)(iVar4 == 0)) * 2 + 1;
        lVar30 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        local_298 = (undefined **)CONCAT44(local_298._4_4_,(uint)(1 << ((byte)lVar30 & 0x1f)) >> 1);
        lVar30 = 0;
        do {
          iVar4 = *(int *)(&local_2a8 + lVar30) + (uint)(*(int *)(&local_2a8 + lVar30) == 0);
          *(int *)(&local_2a8 + lVar30) = iVar4;
          *(int *)((longlong)&local_2a8 + lVar30 * 8 + 4) = (iVar29 + -1 + iVar4) / iVar4;
          lVar30 = lVar30 + 1;
        } while (lVar30 != 3);
        uVar5 = 0xffffffff;
        lVar30 = 0;
        iVar4 = iVar29;
        do {
          iVar23 = *(int *)((longlong)&local_2a8 + lVar30 * 8 + 4) * *(int *)(&local_2a8 + lVar30);
          uVar24 = (uint)lVar30;
          if (iVar4 <= iVar23 - iVar29) {
            uVar24 = uVar5;
          }
          uVar5 = uVar24;
          iVar23 = iVar23 - iVar29;
          if (iVar23 == 0) break;
          if (iVar23 < iVar4) {
            iVar4 = iVar23;
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 != 3);
        uVar24 = (uint)(iVar25 == 0);
        local_550 = 2 - uVar24;
        local_548 = *(int *)(&local_2a8 + uVar5);
        local_544 = *(undefined4 *)((longlong)&local_2a8 + (ulonglong)uVar5 * 8 + 4);
        uVar24 = uVar24 ^ 1;
        local_568 = (longlong)
                    (int)((*(int *)(pppuVar18 + 0x620) + uVar24) - *(int *)(pppuVar18 + 0x61f)) /
                    (longlong)local_550 & 0xffffffffU |
                    (longlong)
                    (int)((*(int *)((longlong)pppuVar18 + 0x3104) + uVar24) -
                         *(int *)((longlong)pppuVar18 + 0x30fc)) / (longlong)local_550 << 0x20;
        local_560 = (longlong)(int)((int)*(undefined8 *)(local_4b8[0] + 0x84) + uVar24) /
                    (longlong)local_550 & 0xffffffffU |
                    (longlong)
                    (int)((int)((ulonglong)*(undefined8 *)(local_4b8[0] + 0x84) >> 0x20) + uVar24) /
                    (longlong)local_550 << 0x20;
        local_540 = local_548 + -1;
        local_54c = iVar29;
        fVar32 = logf((float)local_548);
        local_53c = (int)(fVar32 * 1.442695);
        plVar11 = local_4b8;
        plVar21 = local_538;
        for (lVar30 = 0xc; lVar30 != 0; lVar30 = lVar30 + -1) {
          *plVar21 = *plVar11;
          plVar11 = plVar11 + 1;
          plVar21 = plVar21 + 1;
        }
        ppuVar10 = pppuVar18[0x231a];
        lVar30 = FUN_144a2c9be();
        ppuVar22 = local_638;
        local_4d0 = *(char *)(lVar30 + 0x41);
        if (local_4d0 == '\x03') {
          local_4d0 = '\x02';
        }
        fVar32 = (float)local_54c;
        fVar33 = (float)local_550;
        local_578 = (undefined **)0x0;
        ppuStack_570 = (undefined **)0x0;
        local_4d8 = ppuVar10;
        if ((*piVar19 == 1) && (pppuVar18[0x263b] != (undefined **)0x0)) {
          FUN_1430387db(&local_2a8,local_638,local_4b8,pppuVar18);
          local_578 = local_2a8;
          ppuStack_570 = uStack_2a0;
        }
        local_108 = (undefined **)0x0;
        puStack_100 = (ulonglong *)0x0;
        local_118 = (undefined **)0x0;
        ppuStack_110 = (undefined **)0x0;
        local_128 = (undefined **)0x0;
        local_138 = (undefined **)0x0;
        ppuStack_130 = (undefined **)0x0;
        local_588 = 0;
        local_5a8 = (undefined **)0x0;
        local_5b8 = (undefined **)0x0;
        ppuStack_5b0 = (undefined **)0x0;
        uStack_5a0 = 8;
        local_598 = 0;
        uStack_590 = 0;
        local_5b9 = 0;
        iVar25 = *piVar19;
        if (iVar25 == 1) {
          local_688 = pppuVar18;
          FUN_14303c367(&local_2a8,ppuVar22,&local_568,&local_578);
          local_128 = local_298;
          local_138 = local_2a8;
          ppuStack_130 = uStack_2a0;
        }
        else if (iVar25 == 2) {
          local_2a8 = (undefined **)0x0;
          uStack_2a0 = (undefined **)0x0;
          uStack_290 = (ulonglong *)0x0;
          local_288._0_4_ = 0;
          local_288._4_4_ = 0;
          local_258 = (longlong *)0x0;
          pcStack_250 = (char *)0x0;
          local_268 = (int *)0x0;
          pppuStack_260 = (undefined ***)0x0;
          uStack_278 = 0;
          uStack_276 = 0;
          uStack_275 = 0;
          uStack_274 = 0;
          uStack_272 = 0;
          plStack_270 = (longlong *)0x0;
          local_198 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_148 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_3c8 = 0;
          uStack_3c0 = 0;
          lVar30 = 0x8c;
          do {
            *(undefined8 *)((longlong)&uStack_424 + lVar30) = 0;
            *(undefined8 *)((longlong)&uStack_41c + lVar30) = 0x3f80000000000000;
            lVar30 = lVar30 + 0x10;
          } while (lVar30 != 0xec);
          lVar30 = 0xec;
          do {
            *(undefined8 *)((longlong)&uStack_424 + lVar30) = 0;
            *(undefined8 *)((longlong)&uStack_41c + lVar30) = 0x3f80000000000000;
            lVar30 = lVar30 + 0x10;
          } while (lVar30 != 0x14c);
          uVar5 = *(uint *)(param_9 + 0x330);
          if ((uVar5 & 1) != 0) {
            local_670 = pppuVar18 + 0x24b8;
            local_650 = &local_588;
            local_658 = &local_418;
            puStack_660 = &local_2a8;
            local_668 = (undefined ***)CONCAT71(local_668._1_7_,param_6);
            local_680 = param_5;
            local_688 = local_600;
            local_648 = 2;
            local_678 = pppuVar18;
            FUN_142d8eb6a(lVar27,&local_448,local_638,local_628);
            puStack_100 = (ulonglong *)CONCAT44(uStack_42c,uStack_430);
            local_108 = local_438;
            local_118 = local_448;
            ppuStack_110 = ppuStack_440;
          }
          pppuVar20 = &local_118;
          if ((uVar5 != 8) && (uVar5 != 0xb)) {
            lVar30 = *(longlong *)(param_9 + 0x310);
            if (*(longlong *)(param_9 + 0x310) == 0) {
              lVar30 = param_9;
            }
            pppuVar20 = (undefined ***)(lVar28 * 0x310 + lVar30);
          }
          if (piVar19[3] == 1) {
            iVar25 = *(int *)(DAT_14ca4cb38 + 4);
            fVar34 = *(float *)((longlong)pppuVar18 + 0x294c);
            if (((iVar25 < 4) || (iVar29 = 4, fVar34 < 80.0)) &&
               ((iVar25 < 3 || (iVar29 = 3, fVar34 < 60.0)))) {
              iVar29 = (1 < iVar25 && 40.0 <= fVar34) + 1;
            }
            local_5c8 = 0;
            local_688 = (undefined ***)&local_5c8;
            FUN_14303cdd5(&local_448,local_638,pppuVar18,local_628);
            local_598 = CONCAT44(uStack_424,local_428);
            uStack_590 = CONCAT44(uStack_41c,uStack_420);
            local_5a8 = local_438;
            uStack_5a0 = uStack_430;
            uStack_59c = uStack_42c;
            local_5b8 = local_448;
            ppuStack_5b0 = ppuStack_440;
            if ((int)(&DAT_14ca814b8)
                     [(ulonglong)
                      *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(pppuVar18 + 0x612) * 2) * 0xf]
                < 3) {
              local_5b9 = false;
              local_668 = (undefined ***)0x0;
            }
            else {
              local_5b9 = *(int *)(DAT_14ca4cce0 + 4) != 0;
              local_668 = (undefined ***)0x0;
              if ((bool)local_5b9) {
                local_668 = &local_5b8;
              }
            }
            local_448 = (undefined **)0x0;
            ppuStack_440 = (undefined **)0x0;
            local_438 = (undefined **)0x0;
            local_670 = (undefined ***)((ulonglong)local_670 & 0xffffffffffffff00);
            local_678 = &local_448;
            local_680 = (longlong *)((ulonglong)local_680 & 0xffffffffffffff00);
            local_688 = (undefined ***)CONCAT44(local_688._4_4_,iVar29);
            FUN_14303a042(local_638,local_4b8,local_4c0,pppuVar18);
            ppuVar10 = local_448;
LAB_142cc0ee1:
            pppuVar20[3] = ppuVar10;
          }
          else {
            if (piVar19[3] != 2) {
              ppuVar10 = (undefined **)local_620[1];
              pppuVar20[2] = ppuVar10;
              goto LAB_142cc0ee1;
            }
            if ((uVar5 & 2) != 0) {
              local_680 = &local_2a8;
              if ((uVar5 != 8) && (uVar5 != 0xb)) {
                lVar30 = *(longlong *)(param_9 + 0x310);
                if (*(longlong *)(param_9 + 0x310) == 0) {
                  lVar30 = param_9;
                }
                local_680 = (longlong *)(lVar30 + lVar28 * 0x310 + 0x20);
              }
              local_678 = &local_418;
              if ((uVar5 != 8) && (uVar5 != 0xb)) {
                lVar30 = *(longlong *)(param_9 + 0x310);
                if (*(longlong *)(param_9 + 0x310) == 0) {
                  lVar30 = param_9;
                }
                local_678 = (undefined ***)(lVar30 + lVar28 * 0x310 + 400);
              }
              local_668 = (undefined ***)0x0;
              puStack_660 = (undefined8 *)0x0;
              local_688 = local_600;
              local_658 = (undefined ***)CONCAT62(local_658._2_6_,2);
              local_670 = (undefined ***)((ulonglong)local_670 & 0xffffffff00000000);
              ppuVar10 = (undefined **)FUN_142d404f6(lVar27,local_638,pppuVar18,local_628);
              goto LAB_142cc0ee1;
            }
          }
          if (((uVar5 == 0xb) || (uVar5 == 8)) && (param_7 != 0)) {
            lVar30 = *(longlong *)(param_9 + 0x310);
            if (*(longlong *)(param_9 + 0x310) == 0) {
              lVar30 = param_9;
            }
            plVar11 = (longlong *)(lVar30 + lVar28 * 0x310);
            local_118 = (undefined **)*plVar11;
            ppuStack_110 = (undefined **)plVar11[1];
            local_108 = (undefined **)plVar11[2];
            puStack_100 = (ulonglong *)plVar11[3];
            memcpy(&local_2a8,plVar11 + 4,0x168);
            lVar30 = lVar30 + lVar28 * 0x310;
            memcpy(&local_418,(void *)(lVar30 + 400),0x168);
            local_588 = *(longlong *)(lVar30 + 0x300);
            uStack_580 = *(undefined4 *)(lVar30 + 0x308);
            uStack_57c = *(undefined4 *)(lVar30 + 0x30c);
          }
          if ((uVar5 != 8) && (ppuVar10 = local_638, uVar5 != 0xb)) goto LAB_142cc17da;
        }
        else if (iVar25 == 3) {
          uStack_2a0 = (undefined **)CONCAT17(uStack_2a0._7_1_,0x105ffffffff);
          local_2a8 = &PTR_FUN_14a23fff0;
          local_298 = *(undefined ***)(local_628 + 0x2a8);
          uStack_290 = *(ulonglong **)(local_628 + 0x2b0);
          local_288._0_4_ = (undefined4)*(undefined8 *)(local_628 + 0x2b8);
          local_288._4_4_ = (int)((ulonglong)*(undefined8 *)(local_628 + 0x2b8) >> 0x20);
          plStack_270 = param_5;
          iStack_280 = (int)*(undefined8 *)(local_628 + 0x1c0);
          uStack_27c = (undefined4)((ulonglong)*(undefined8 *)(local_628 + 0x1c0) >> 0x20);
          uVar17 = *(undefined8 *)(local_628 + 0x1b0);
          uStack_278 = (undefined2)uVar17;
          uStack_276 = (undefined1)((ulonglong)uVar17 >> 0x10);
          uStack_275 = (undefined1)((ulonglong)uVar17 >> 0x18);
          uStack_274 = (undefined2)((ulonglong)uVar17 >> 0x20);
          uStack_272 = (undefined2)((ulonglong)uVar17 >> 0x30);
          local_688 = (undefined ***)&local_2a8;
          FUN_1471cf9f8(&DAT_14c9c2ea0,*(undefined8 *)(lVar27 + 8),pppuVar18,local_638);
          uVar17 = uStack_2a0;
          local_2a8 = &PTR_FUN_14a38cd70;
          uStack_2a0._0_7_ = CONCAT16(2,(undefined6)uStack_2a0);
          ppuVar10 = uStack_2a0;
          uStack_2a0._0_4_ = (int)uVar17;
          bVar31 = (int)uStack_2a0 != -1;
          uStack_2a0 = ppuVar10;
          local_288 = (undefined ***)CONCAT44(local_288._4_4_,(undefined4)local_288);
          if ((bVar31) &&
             (local_288 = (undefined ***)CONCAT44(local_288._4_4_,(undefined4)local_288),
             DAT_14c868880 == '\0')) {
            FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp");
          }
        }
        if (pppuVar18[0x621] != (undefined **)0x0) {
          iVar25 = *piVar19;
          iVar29 = piVar19[3];
          if ((*(byte *)(**(longlong **)(lVar27 + 0xa0) + 0x2954) & 1) == 0) {
            cVar3 = '\0';
          }
          else {
            cVar3 = '\0';
            lVar27 = local_630;
            if ((*(int *)(DAT_14ca046e8 + 4) != 0) && (*(int *)(local_630 + 0xe4) < 0)) {
              piVar16 = (int *)(*(longlong *)(local_630 + 0xd8) + 8);
              if (*(longlong *)(local_630 + 0xd8) == 0) {
                piVar16 = &DAT_14c760db4;
              }
              if (((int)(&DAT_14ca814b8)
                        [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar16 * 2) * 0xf] < 4)
                 || (((&DAT_14ca814cd)
                      [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar16 * 2) * 0x3c] & 3)
                     == 0)) {
                cVar3 = '\0';
              }
              else {
                cVar3 = FUN_1472390ef(local_608);
                lVar27 = local_630;
                if (cVar3 != '\0') {
                  if (iVar29 == 2 && iVar25 != 2) {
                    FUN_1471be18c(pppuVar18[0x621] + 0x30e);
                  }
                  goto LAB_142cc0fe2;
                }
                cVar3 = FUN_1472390cb(local_608);
                lVar27 = local_630;
              }
            }
          }
          if (iVar29 == 2 && iVar25 != 2) {
            FUN_1471be18c(pppuVar18[0x621] + 0x30e);
            if (cVar3 == '\0') {
              FUN_142cc1bc4(pppuVar18[0x621] + 0x37a);
              ppuVar10 = pppuVar18[0x621];
              plVar11 = (longlong *)ppuVar10[0x388];
              if (plVar11 != (longlong *)0x0) {
                ppuVar10[0x388] = (undefined *)0x0;
                (**(code **)(*plVar11 + 0x38))();
              }
              plVar11 = (longlong *)ppuVar10[0x389];
              if (plVar11 != (longlong *)0x0) {
                ppuVar10[0x389] = (undefined *)0x0;
                (**(code **)(*plVar11 + 0x38))();
              }
            }
          }
          else if (cVar3 == '\0') {
            FUN_142cc1bc4(pppuVar18[0x621] + 0x37a);
          }
        }
LAB_142cc0fe2:
        ppuVar10 = local_638;
        local_448 = ppuStack_130;
        if (*piVar19 != 2) {
          if (piVar19[1] == 0) {
            local_118 = local_138;
            ppuStack_110 = (undefined **)*local_620;
          }
          else {
            plVar11 = (longlong *)FUN_141508108();
            if (*piVar19 == 1) {
              if (piVar19[1] != 1) {
                plVar11 = DAT_14ca4cb10;
              }
              local_670 = (undefined ***)CONCAT44(fVar32,1.0 / fVar33);
              local_688 = pppuVar18 + 0x24b8;
              local_678 = &local_138;
              local_680 = local_4b8;
              (**(code **)(*plVar11 + 0x60))(plVar11,&local_2a8,ppuVar10,pppuVar18);
              local_108 = local_298;
              puStack_100 = uStack_290;
              local_118 = local_2a8;
              local_448 = uStack_2a0;
              ppuStack_110 = local_448;
            }
          }
        }
        switch(piVar19[2]) {
        case 0:
          local_448 = (undefined **)0x0;
          break;
        case 1:
          local_448 = *(undefined ***)(local_628 + 0x308);
          if ((local_448 != (undefined **)0x0) && ((*(byte *)((longlong)local_448 + 0x24) & 4) != 0)
             ) goto switchD_142cc10ed_caseD_2;
          local_448 = (undefined **)*local_620;
          break;
        case 2:
          goto switchD_142cc10ed_caseD_2;
        case 3:
          local_688 = &local_448;
          FUN_142f64da4(lVar27,ppuVar10,pppuVar18,local_4b8);
          goto switchD_142cc10ed_caseD_2;
        }
        bVar31 = true;
LAB_142cc115d:
        if ((local_448 != (undefined **)0x0) && (piVar19[2] != 1)) {
          *(undefined ***)(local_628 + 0x308) = local_448;
        }
        if ((*(char *)(pppuVar18 + 0x2341) == '\x01') && (!bVar31 && 0xfffffffd < piVar19[2] - 3U))
        {
          FUN_142c3990b(ppuVar10);
        }
        lVar30 = DAT_14ca97170;
        if ((local_448 == (undefined **)0x0 && local_118 == (undefined **)0x0) ||
           (((local_449 == '\x01' && (piVar19[1] == 0)) && (*piVar19 != 2)))) {
          bVar31 = false;
        }
        else {
          bVar31 = true;
          if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)*(ushort *)(lVar27 + 0x8a8) * 0x3c) ==
              DAT_14ca838f8) {
            bVar31 = (&DAT_14ca814b8)[(ulonglong)*(ushort *)(lVar27 + 0x8a8) * 0xf] - 3 < 2;
          }
        }
        iVar25 = *local_618;
        if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
          uVar14 = 0;
        }
        else if (iVar25 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar14 = (ulonglong)(DVar6 != DVar7);
        }
        else {
          uVar14 = 1;
        }
        ppuVar22 = local_638;
        if ((0 < *(int *)(lVar30 + uVar14 * 4)) && (local_449 == '\x01')) {
          local_288._4_4_ = 0;
          iStack_280 = 1;
          uStack_27c = 0;
          uStack_278 = 1;
          uStack_276 = 0;
          uStack_275 = 0;
          local_2a8 = (undefined **)0x0;
          uStack_2a0 = (undefined **)0x0;
          local_298 = (undefined **)0x0;
          uStack_290 = (ulonglong *)0x3f80000000000000;
          local_288._0_4_ = CONCAT31(local_288._1_3_,1);
          FUN_1401a4871(local_638);
        }
        ppuVar10 = local_5f8;
        if (((*(uint *)((longlong)&DAT_14ca814d0 + (ulonglong)*(ushort *)(lVar27 + 0x8a8) * 0x3c) &
             0x800008) == 8) && (*(char *)(DAT_14c9e4600 + 1) != '\x01')) {
          local_5c9 = 0;
        }
        else {
          local_5c9 = local_118 != (undefined **)0x0;
          if ((bool)local_5c9) {
            uStack_2a0 = (undefined **)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
            local_298 = (undefined **)CONCAT44(DAT_14ca85094,DAT_14ca85090);
            iVar25 = (int)*(undefined8 *)(local_4c0 + 0x84);
            local_288._4_4_ = DAT_14ca84e40;
            if (iVar25 < DAT_14ca84e40) {
              local_288._4_4_ = iVar25;
            }
            if (local_288._4_4_ < 2) {
              local_288._4_4_ = 1;
            }
            iVar25 = (int)((ulonglong)*(undefined8 *)(local_4c0 + 0x84) >> 0x20);
            iStack_280 = DAT_14ca84e40;
            if (iVar25 < DAT_14ca84e40) {
              iStack_280 = iVar25;
            }
            uStack_275 = local_4c0[0x93];
            uStack_276 = 0;
            local_2a8 = (undefined **)0x9;
            uStack_274 = 0xff00;
            uStack_27c = 0x10001;
            uStack_278 = 0x101;
            local_288._0_4_ = 0;
            uStack_290 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
            if (iStack_280 < 2) {
              iStack_280 = 1;
            }
            uVar14 = (ulonglong)(ppuVar22[0xe] + 7) & 0xfffffffffffffff8;
            puVar12 = (undefined *)(uVar14 + 0x120);
            if (ppuVar22[0xf] < puVar12) {
              FUN_140023dd8(local_5f8,0x128);
              uVar14 = (ulonglong)(*ppuVar10 + 7) & 0xfffffffffffffff8;
              puVar12 = (undefined *)(uVar14 + 0x120);
            }
            ppuVar22[0xe] = puVar12;
            FUN_1456bbb8c(uVar14,L"SceneCopyTextureCopy0",&local_2a8,0);
            iVar25 = *(int *)(ppuVar22 + 0x30);
            uVar5 = iVar25 + 1;
            *(uint *)(ppuVar22 + 0x30) = uVar5;
            if (*(uint *)((longlong)ppuVar22 + 0x184) < uVar5) {
              FUN_14472c0f6(local_5f0);
            }
            *(ulonglong *)(ppuVar22[0x2f] + (longlong)iVar25 * 8) = uVar14;
            *(int *)(uVar14 + 0x9c) = *(int *)(ppuVar22 + 0x30) + -1;
            lVar27 = local_630;
            local_5c8 = uVar14;
          }
        }
        lVar30 = DAT_14ca97170;
        local_2a8 = (undefined **)&local_5c9;
        uStack_2a0 = &local_4c0;
        local_298 = ppuVar22;
        uStack_290 = &local_5c8;
        iStack_280 = (int)local_628;
        uStack_27c = (undefined4)((ulonglong)local_628 >> 0x20);
        uStack_278 = SUB82(local_4b8,0);
        uStack_276 = (undefined1)((ulonglong)local_4b8 >> 0x10);
        uStack_275 = (undefined1)((ulonglong)local_4b8 >> 0x18);
        uStack_274 = (undefined2)((ulonglong)local_4b8 >> 0x20);
        uStack_272 = (undefined2)((ulonglong)local_4b8 >> 0x30);
        plStack_270 = &local_588;
        local_5d8 = local_620;
        local_5e0 = local_620;
        pppuStack_260 = &local_118;
        local_258 = local_620;
        pcStack_250 = &local_449;
        local_248 = &local_5d8;
        local_240 = &local_5e0;
        local_238 = &local_448;
        local_230 = &local_5b9;
        local_228 = &local_5b8;
        local_220 = &local_568;
        local_268 = piVar19;
        local_218 = lVar27;
        local_288 = pppuVar18;
        if (bVar31) {
          iVar25 = *local_618;
          if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
            uVar14 = 0;
          }
          else if (iVar25 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            uVar14 = (ulonglong)(DVar6 != DVar7);
          }
          else {
            uVar14 = 1;
          }
          lVar9 = DAT_14ca97170;
          if (*(int *)(lVar30 + uVar14 * 4) < 1) {
            uVar17 = 9;
          }
          else {
            iVar25 = *local_618;
            if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
              uVar14 = 0;
            }
            else if (iVar25 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              uVar14 = (ulonglong)(DVar6 != DVar7);
            }
            else {
              uVar14 = 1;
            }
            if ((0 < *(int *)(lVar9 + uVar14 * 4)) && (((ulonglong)pppuVar18[0x2306] & 1) != 0)) {
              FUN_142cc1c68(&local_2a8,3);
            }
            FUN_142cc1c68(&local_2a8,2);
            FUN_142cc1c68(&local_2a8,1);
            uVar17 = 0;
          }
          ppuVar22 = local_638;
          FUN_142cc1c68(&local_2a8,uVar17);
        }
        cVar3 = FUN_142b861f9();
        lVar30 = DAT_14ca97170;
        ppuVar10 = local_638;
        if ((cVar3 != '\0') && (local_449 == '\0')) {
          local_410 = &local_448;
          local_408 = local_620;
          local_3f8 = local_4b8;
          local_3f0 = &local_4c0;
          iVar25 = *local_618;
          local_418 = ppuVar22;
          local_400 = pppuVar18;
          local_3e8 = lVar27;
          if ((iVar25 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar25 == 2)))) {
            uVar14 = 0;
          }
          else if (iVar25 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            uVar14 = (ulonglong)(DVar6 != DVar7);
          }
          else {
            uVar14 = 1;
          }
          lVar9 = DAT_14ca97170;
          if (*(int *)(lVar30 + uVar14 * 4) < 1) {
            uVar17 = 9;
          }
          else {
            iVar25 = *local_618;
            if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
              uVar14 = 0;
            }
            else if (iVar25 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              uVar14 = (ulonglong)(DVar6 != DVar7);
            }
            else {
              uVar14 = 1;
            }
            if ((0 < *(int *)(lVar9 + uVar14 * 4)) && (((ulonglong)pppuVar18[0x2306] & 1) != 0)) {
              FUN_142cc326a(&local_418,3);
            }
            FUN_142cc326a(&local_418,2);
            FUN_142cc326a(&local_418,1);
            uVar17 = 0;
          }
          FUN_142cc326a(&local_418,uVar17);
          ppuVar10 = local_638;
        }
LAB_142cc17da:
        if (*(int *)((longlong)puVar2 + 0x17c) != local_60c) {
          *(int *)((longlong)puVar2 + 0x17c) = local_60c;
          puVar8 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar8 + 3;
          if ((undefined8 *)puVar2[1] < puVar15) {
            FUN_140023dd8(puVar2,0x20);
            puVar8 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar15 = puVar8 + 3;
          }
          *puVar2 = (ulonglong)puVar15;
          *(int *)(puVar2 + 0xc) = (int)puVar2[0xc] + 1;
          *(undefined8 **)puVar2[6] = puVar8;
          puVar2[6] = (ulonglong)(puVar8 + 1);
          uVar1 = *(undefined4 *)((longlong)puVar2 + 0x17c);
          puVar8[1] = 0;
          *puVar8 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar8 + 2) = uVar1;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 < *(int *)(lVar27 + 0x3f0));
    }
    *(uint *)(param_9 + 0x330) = (uint)(~param_7 & *(int *)(param_9 + 0x330) != 0xb) << 3;
  }
  if ((local_f0 ^ (ulonglong)auStack_6a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
switchD_142cc10ed_caseD_2:
  bVar31 = false;
  goto LAB_142cc115d;
}



// FUNCTION 142cc1bc4 FUN_142cc1bc4 body=164 status=ok
// SIG undefined FUN_142cc1bc4(void)

void FUN_142cc1bc4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    param_1[1] = 0;
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar2 + 0x38))();
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[3] = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[4] = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142cc1c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 142cc1c68 FUN_142cc1c68 body=5633 status=ok
// SIG undefined FUN_142cc1c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc1c68(undefined8 *param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  DWORD DVar16;
  DWORD DVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined8 **ppuVar29;
  int iVar30;
  undefined1 uVar31;
  undefined8 *puVar32;
  bool bVar33;
  float fVar34;
  undefined1 in_XMM0 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 **local_140;
  undefined8 local_130;
  longlong *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong local_108;
  undefined8 *local_100;
  undefined1 local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined3 uStack_dc;
  undefined8 *local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined6 uStack_a2;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_108 = param_1[0x12];
  if (*(char *)*param_1 == '\x01') {
    uStack_cc = (undefined4)DAT_14c9a5298;
    uStack_c8 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_c4 = DAT_14c9a52a0;
    local_c0 = DAT_14c9a5298;
    local_b8 = DAT_14c9a52a0;
    auVar35 = pmovsxbq(in_XMM0,0x100);
    local_b4 = auVar35._0_4_;
    iStack_b0 = auVar35._4_4_;
    uStack_ac = auVar35._8_4_;
    uStack_a8 = auVar35._12_2_;
    uStack_a6 = auVar35[0xe];
    uStack_a5 = auVar35[0xf];
    uStack_a4 = 0;
    uStack_a3 = 0;
    uStack_a2 = 0x10000;
    lVar19 = *(longlong *)param_1[1];
    local_d8 = *(undefined8 **)(lVar19 + 0x84);
    uStack_d0 = (uint)*(ushort *)(lVar19 + 0x8c);
    FUN_1400e8d41(param_1[2],*(longlong *)param_1[1],*(undefined8 *)param_1[3]);
  }
  local_118 = (undefined8 *)CONCAT44(local_118._4_4_,param_2);
  lVar19 = param_1[2];
  puVar1 = (ulonglong *)(lVar19 + 0x70);
  puVar32 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar20 = puVar32 + 0x70;
  if (*(undefined8 **)(lVar19 + 0x78) < puVar20) {
    FUN_140023dd8(puVar1,0x390);
    puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar20 = puVar32 + 0x70;
  }
  *puVar1 = (ulonglong)puVar20;
  *puVar32 = &PTR_FUN_14a240098;
  local_100 = puVar32 + 6;
  puVar32[6] = 0;
  local_128 = puVar32 + 0xb;
  puVar20 = puVar32 + 0x10;
  puVar32[0x1c] = 0;
  *(undefined1 (*) [16])(puVar32 + 0xb) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0xd) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x16) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x18) = (undefined1  [16])0x0;
  puVar32[0x1a] = 0;
  *(undefined1 *)(puVar32 + 0x1d) = 1;
  puVar32[0x1e] = 0;
  *(undefined1 *)(puVar32 + 0x1f) = 1;
  *(undefined4 *)(puVar32 + 0x22) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x114) = 0;
  *(undefined4 *)(puVar32 + 0x23) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x11c) = 0x3f800000;
  *(undefined4 *)(puVar32 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x124) = 0;
  *(undefined4 *)(puVar32 + 0x25) = 0;
  *(undefined4 *)((longlong)puVar32 + 300) = 0x3f800000;
  puVar32[0x2e] = 0;
  puVar32[0x30] = 0;
  *(undefined4 *)(puVar32 + 0x31) = 4;
  local_110 = puVar32 + 0x32;
  *(undefined4 *)(puVar32 + 0x32) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x194) = 0;
  *(undefined4 *)(puVar32 + 0x33) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x19c) = 0x3f800000;
  *(undefined4 *)(puVar32 + 0x34) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x1a4) = 0;
  *(undefined4 *)(puVar32 + 0x35) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(puVar32 + 0x36) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x1b4) = 0;
  *(undefined4 *)(puVar32 + 0x37) = 0;
  *(undefined4 *)((longlong)puVar32 + 0x1bc) = 0x3f800000;
  local_120 = puVar32 + 0x38;
  puVar32[0x44] = 0;
  *(undefined1 (*) [16])(puVar32 + 0x42) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x3e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x3c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x3a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar32 + 0x45) = 1;
  local_130 = puVar32 + 0x46;
  puVar32[0x4a] = 0;
  *(undefined1 (*) [16])(puVar32 + 0x46) = (undefined1  [16])0x0;
  puVar32[0x48] = 0;
  puVar32[0x4e] = 0;
  *(undefined1 (*) [16])(puVar32 + 0x4c) = (undefined1  [16])0x0;
  lVar18 = 0x280;
  do {
    *(undefined1 (*) [16])((longlong)puVar32 + lVar18) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar32 + lVar18 + 0x10) = 0xffff0000;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x340);
  *(undefined4 *)((longlong)puVar32 + 0x354) = 0;
  *(undefined1 (*) [16])(puVar32 + 0x68) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar32 + 0x6a) = 0;
  *(undefined4 *)(puVar32 + 0x6b) = 0xffffffff;
  *(undefined4 *)((longlong)puVar32 + 0x35c) = 0xffffffff;
  *(undefined4 *)(puVar32 + 0x6c) = 0xffffffff;
  *(undefined4 *)((longlong)puVar32 + 0x364) = 0xffffffff;
  *(undefined4 *)(puVar32 + 0x6d) = 0;
  *(undefined2 *)((longlong)puVar32 + 0x36c) = 0;
  puVar32[0x6e] = 0;
  iVar14 = *(int *)(lVar19 + 0xa0);
  *(uint *)(lVar19 + 0xa0) = iVar14 + 1U;
  if (*(uint *)(lVar19 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8((longlong *)(lVar19 + 0x98),iVar14);
  }
  *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar14 * 8) = puVar32;
  uVar5 = *(undefined8 *)(param_1[4] + 0x118d0);
  lVar19 = FUN_144a2c9be();
  cVar11 = *(char *)(lVar19 + 0x41);
  if (*(char *)(lVar19 + 0x41) == '\x03') {
    cVar11 = '\x02';
  }
  puVar32[0x1e] = uVar5;
  *(char *)(puVar32 + 0x1f) = cVar11;
  uVar5 = *(undefined8 *)(param_1[5] + 0x198);
  lVar19 = FUN_14482e3b2();
  cVar11 = *(char *)(lVar19 + 0x41);
  if (cVar11 == '\x03') {
    cVar11 = '\x02';
  }
  puVar32[0x1c] = uVar5;
  *(char *)(puVar32 + 0x1d) = cVar11;
  fVar34 = *(float *)(param_1[4] + 0x2af4);
  if (1.0 <= fVar34) {
    fVar34 = 1.0;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  *(float *)(puVar32 + 2) = fVar34;
  uVar5 = *(undefined8 *)(*(longlong *)param_1[6] + 0x84);
  uStack_d0 = (uint)_DAT_14ca83a30;
  uStack_cc = (undefined4)((ulonglong)_DAT_14ca83a30 >> 0x20);
  uStack_c8 = (undefined4)_DAT_14ca83a38;
  uStack_c4 = (undefined4)((ulonglong)_DAT_14ca83a38 >> 0x20);
  lVar19 = param_1[2];
  uStack_a6 = 0;
  local_d8 = (undefined8 *)0x8;
  uStack_a5 = 0x1c;
  uStack_a4 = 0;
  uStack_ac = 0x10001;
  uStack_a8 = 0x101;
  local_b8 = 0;
  uStack_a3 = 0xff;
  local_c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  local_b4 = 1;
  iStack_b0 = 1;
  uVar26 = *(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar23 = uVar26 + 0x120;
  if (*(ulonglong *)(lVar19 + 0x78) < uVar23) {
    FUN_140023dd8((longlong *)(lVar19 + 0x70),0x128);
    uVar26 = *(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar23 = uVar26 + 0x120;
  }
  *(ulonglong *)(lVar19 + 0x70) = uVar23;
  FUN_1456bbb8c(uVar26,L"CompressedMetadataPlaceholder",&local_d8,0);
  iVar14 = *(int *)(lVar19 + 0x180);
  *(uint *)(lVar19 + 0x180) = iVar14 + 1U;
  if (*(uint *)(lVar19 + 0x184) < iVar14 + 1U) {
    FUN_14472c0f6(lVar19 + 0x178,iVar14);
  }
  *(ulonglong *)(*(longlong *)(lVar19 + 0x178) + (longlong)iVar14 * 8) = uVar26;
  *(int *)(uVar26 + 0x9c) = *(int *)(lVar19 + 0x180) + -1;
  puVar32[0x4d] = uVar26;
  puVar32[0x4e] = uVar26;
  *(float *)(puVar32 + 0x4b) = (float)(int)uVar5;
  *(float *)((longlong)puVar32 + 0x25c) = (float)(int)((ulonglong)uVar5 >> 0x20);
  lVar19 = param_1[2];
  plVar6 = *(longlong **)(param_1[4] + 0x30d8);
  if ((plVar6 == (longlong *)0x0) || ((*(byte *)(plVar6 + 1) & 2) == 0)) {
    local_d8 = (undefined8 *)&DAT_3f8000003f800000;
    uStack_d0 = 0x3f800000;
    uStack_cc = 0x3f800000;
    local_148 = (undefined8 *)CONCAT44(local_148._4_4_,1);
    local_140 = &local_d8;
    lVar18 = FUN_1449cc94d(lVar19,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar6 + 0x80) == (code *)&LAB_144b15db6) {
      local_d8 = (undefined8 *)plVar6[(ulonglong)*(uint *)(plVar6 + 0xcd) + 0xd1];
    }
    else {
      local_d8 = (undefined8 *)(**(code **)(*plVar6 + 0x80))();
    }
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = *(int *)(local_d8 + 1) + 1;
      UNLOCK();
    }
    lVar18 = FUN_144735dd8(lVar19,&local_d8,1);
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_d8 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_d8)(local_d8,1);
      }
    }
  }
  cVar11 = *(char *)(lVar18 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar25 = puVar28 + 9;
  if (*(undefined8 **)(lVar19 + 0x78) < puVar25) {
    FUN_140023dd8((longlong *)(lVar19 + 0x70),0x50);
    puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar28 + 9;
  }
  *(undefined8 **)(lVar19 + 0x70) = puVar25;
  puVar28[1] = *(undefined8 *)(lVar18 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar11 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = lVar18;
  iVar14 = *(int *)(lVar19 + 0x1a0);
  *(uint *)(lVar19 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(lVar19 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(lVar19 + 0x198,iVar14);
  }
  *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar14 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
  puVar32[0x4c] = puVar28;
  FUN_142d3fd2b(param_1[4],puVar32 + 4);
  uVar5 = ((undefined8 *)param_1[7])[1];
  *local_100 = *(undefined8 *)param_1[7];
  local_100[1] = uVar5;
  if (*(int *)param_1[8] == 2) {
    bVar33 = *(longlong *)(param_1[9] + 8) != *(longlong *)(param_1[10] + 8);
  }
  else {
    bVar33 = false;
  }
  *(uint *)(puVar32 + 8) = (uint)bVar33;
  if (*(int *)param_1[8] == 2) {
    bVar33 = ((int *)param_1[8])[3] == 1;
  }
  else {
    bVar33 = false;
  }
  *(uint *)((longlong)puVar32 + 0x44) = (uint)bVar33;
  *(undefined4 *)(puVar32 + 9) = DAT_14c760810;
  *(undefined4 *)((longlong)puVar32 + 0x4c) = DAT_14c760814;
  fVar34 = DAT_14c7605d8;
  if (DAT_14c7605d8 <= 0.0) {
    fVar34 = 0.0;
  }
  *(float *)(puVar32 + 10) = fVar34;
  fVar34 = DAT_14c7605dc;
  if (1.0 <= DAT_14c7605dc) {
    fVar34 = 1.0;
  }
  if (fVar34 <= 0.001) {
    fVar34 = 0.001;
  }
  *(float *)((longlong)puVar32 + 0x54) = fVar34;
  *(uint *)((longlong)puVar32 + 0x14) = (uint)*(byte *)param_1[0xb];
  lVar19 = *(longlong *)param_1[9];
  if (lVar19 == 0) {
    lVar19 = 0;
  }
  else if (*(char *)(lVar19 + 0x92) != '\x01') {
    lVar19 = *(longlong *)(*(longlong *)param_1[0xc] + 0x18);
  }
  *local_128 = lVar19;
  lVar19 = *(longlong *)(param_1[9] + 8);
  if (lVar19 == 0) {
    lVar19 = 0;
  }
  else if (*(char *)(lVar19 + 0x92) != '\x01') {
    lVar19 = *(longlong *)(*(longlong *)param_1[0xc] + 0x18);
  }
  puVar32[0xc] = lVar19;
  lVar19 = *(longlong *)(param_1[9] + 0x10);
  if (lVar19 == 0) {
    lVar19 = 0;
  }
  else if (*(char *)(lVar19 + 0x92) != '\x01') {
    lVar19 = *(longlong *)(*(longlong *)param_1[0xc] + 0x18);
  }
  puVar32[0xd] = lVar19;
  lVar19 = *(longlong *)(param_1[9] + 0x18);
  if (lVar19 == 0) {
    lVar19 = 0;
  }
  else if (*(char *)(lVar19 + 0x92) != '\x01') {
    lVar19 = *(longlong *)(*(longlong *)param_1[0xc] + 0x18);
  }
  local_128 = puVar32 + 2;
  puVar32[0xe] = lVar19;
  puVar25 = (undefined8 *)param_1[9];
  uVar5 = *puVar25;
  uVar7 = puVar25[1];
  uVar15 = *(undefined4 *)((longlong)puVar25 + 0x14);
  uVar8 = *(undefined4 *)(puVar25 + 3);
  uVar9 = *(undefined4 *)((longlong)puVar25 + 0x1c);
  *(undefined4 *)(puVar32 + 0x12) = *(undefined4 *)(puVar25 + 2);
  *(undefined4 *)((longlong)puVar32 + 0x94) = uVar15;
  *(undefined4 *)(puVar32 + 0x13) = uVar8;
  *(undefined4 *)((longlong)puVar32 + 0x9c) = uVar9;
  *puVar20 = uVar5;
  puVar32[0x11] = uVar7;
  lVar19 = 0;
  do {
    lVar18 = puVar20[lVar19];
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else if (*(char *)(lVar18 + 0x92) != '\0') {
      lVar18 = *(longlong *)(*(longlong *)param_1[0xd] + 8);
    }
    puVar20[lVar19] = lVar18;
    uVar5 = DAT_14c9c0d80;
    lVar19 = lVar19 + 1;
  } while (lVar19 != 4);
  puVar32[0x14] = DAT_14c9c0d80;
  puVar32[0x19] = *(undefined8 *)(DAT_14ca63b68 + 8);
  puVar32[0x1a] = DAT_14c9c0de0;
  puVar32[0x15] = *(undefined8 *)param_1[0xe];
  puVar32[0x16] = uVar5;
  if (*(char *)param_1[0xf] != '\0') {
    puVar32[0x49] = *(undefined8 *)(param_1[0x10] + 0x28);
    lVar19 = param_1[2];
    lVar18 = *(longlong *)(param_1[0x10] + 0x20);
    cVar11 = *(char *)(lVar18 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar25 + 9;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar20) {
      FUN_140023dd8((longlong *)(lVar19 + 0x70),0x50);
      puVar25 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar25 + 9;
    }
    *(undefined8 **)(lVar19 + 0x70) = puVar20;
    puVar25[1] = *(undefined8 *)(lVar18 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 3;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *puVar25 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar25 + 5) = cVar11 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
    puVar25[7] = 0;
    puVar25[8] = lVar18;
    iVar14 = *(int *)(lVar19 + 0x1a0);
    *(uint *)(lVar19 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(lVar19 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(lVar19 + 0x198,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar14 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
    puVar32[0x4a] = puVar25;
  }
  if (*(char *)*param_1 == '\x01') {
    puVar32[0x17] = *(undefined8 *)param_1[3];
    puVar32[0x18] = DAT_14c9c0d80;
  }
  if ((puVar32[0x15] == 0) || (*(char *)param_1[0xb] == '\x01')) {
    puVar32[0x15] = *(undefined8 *)param_1[10];
  }
  lVar19 = param_1[4];
  local_f0 = *(undefined8 *)(lVar19 + 0x30f8);
  local_e8 = *(undefined8 *)(lVar19 + 0x3100);
  local_148 = local_110;
  FUN_14301b210(lVar19,param_1[6],&local_f0,1.0 / (float)*(int *)(param_1[0x11] + 0x18));
  puVar20 = (undefined8 *)param_1[6];
  puVar25 = local_120;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar25 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar25 = puVar25 + 1;
  }
  lVar19 = param_1[4];
  lVar18 = FUN_1447e4f80();
  cVar11 = '\x02';
  if (*(char *)(lVar18 + 0x41) != '\x03') {
    cVar11 = *(char *)(lVar18 + 0x41);
  }
  puVar32[0x44] = *(undefined8 *)(lVar19 + 0x18);
  *(char *)(puVar32 + 0x45) = cVar11;
  puVar32[0x50] = *(undefined8 *)param_1[1];
  puVar32[0x51] = 0;
  *(undefined4 *)(puVar32 + 0x52) = 0xffff0001;
  lVar19 = param_1[2];
  uStack_a6 = 0;
  uStack_a5 = 10;
  uStack_a4 = 0;
  uStack_a3 = 0xff;
  local_d8 = (undefined8 *)&DAT_00020008;
  uStack_ac = 0x10001;
  uStack_a8 = 0x101;
  uStack_d0 = (uint)_DAT_14ca85088;
  uStack_cc = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
  uStack_c8 = (undefined4)_DAT_14ca85090;
  uStack_c4 = (undefined4)((ulonglong)_DAT_14ca85090 >> 0x20);
  local_b8 = 0;
  local_c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
  iVar14 = (int)*(undefined8 *)(*(longlong *)param_1[1] + 0x84);
  local_b4 = DAT_14ca84e40;
  if (iVar14 < DAT_14ca84e40) {
    local_b4 = iVar14;
  }
  if (local_b4 < 2) {
    local_b4 = 1;
  }
  iVar14 = (int)((ulonglong)*(undefined8 *)(*(longlong *)param_1[1] + 0x84) >> 0x20);
  iStack_b0 = DAT_14ca84e40;
  if (iVar14 < DAT_14ca84e40) {
    iStack_b0 = iVar14;
  }
  if (iStack_b0 < 2) {
    iStack_b0 = 1;
  }
  plVar6 = (longlong *)(lVar19 + 0x70);
  uVar26 = *(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar23 = uVar26 + 0x120;
  if (*(ulonglong *)(lVar19 + 0x78) < uVar23) {
    FUN_140023dd8(plVar6,0x128);
    uVar26 = *plVar6 + 7U & 0xfffffffffffffff8;
    uVar23 = uVar26 + 0x120;
  }
  *(ulonglong *)(lVar19 + 0x70) = uVar23;
  ppuVar29 = &local_d8;
  FUN_1456bbb8c(uVar26,L"DebugDiffuseIndirectComposite",ppuVar29,0);
  iVar14 = *(int *)(lVar19 + 0x180);
  *(uint *)(lVar19 + 0x180) = iVar14 + 1U;
  if (*(uint *)(lVar19 + 0x184) < iVar14 + 1U) {
    FUN_14472c0f6(lVar19 + 0x178,iVar14);
  }
  *(ulonglong *)(*(longlong *)(lVar19 + 0x178) + (longlong)iVar14 * 8) = uVar26;
  *(int *)(uVar26 + 0x9c) = *(int *)(lVar19 + 0x180) + -1;
  uVar31 = *(undefined1 *)(uVar26 + 0x94);
  puVar25 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar20 = puVar25 + 9;
  if (*(undefined8 **)(lVar19 + 0x78) < puVar20) {
    FUN_140023dd8(plVar6,0x50);
    puVar25 = (undefined8 *)(*plVar6 + 7U & 0xfffffffffffffff8);
    puVar20 = puVar25 + 9;
  }
  *(undefined8 **)(lVar19 + 0x70) = puVar20;
  puVar25[1] = *(undefined8 *)(uVar26 + 8);
  puVar25[2] = 0;
  iVar30 = 0;
  *(undefined1 *)(puVar25 + 3) = 0;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar25 + 6) = uVar31;
  *(undefined1 *)(puVar25 + 7) = 0;
  *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
  puVar25[8] = uVar26;
  iVar14 = *(int *)(lVar19 + 0x1a0);
  *(uint *)(lVar19 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(lVar19 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(lVar19 + 0x198,iVar14);
  }
  *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar14 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
  *local_130 = puVar25;
  lVar18 = DAT_14ca97170;
  lVar19 = *(longlong *)param_1[9];
  if (lVar19 == 0) {
    local_120 = (undefined8 *)CONCAT71(local_120._1_7_,1);
    iVar14 = 2;
    local_130 = (undefined8 *)((ulonglong)local_130._4_4_ << 0x20);
    uVar27 = 0;
  }
  else {
    local_120 = (undefined8 *)CONCAT71(local_120._1_7_,*(int *)param_1[8] != 2);
    if (*(int *)param_1[8] == 2) {
      iVar14 = *(int *)(param_1[7] + 8);
      iVar30 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar30 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar30 == 2)) {
        uVar23 = 0;
      }
      else if (iVar30 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        uVar23 = (ulonglong)(DVar16 != DVar17);
      }
      else {
        uVar23 = 1;
      }
      uVar27 = (uint)(iVar14 != 0);
      iVar30 = 2;
      iVar14 = 2;
      if (0 < *(int *)(lVar18 + uVar23 * 4)) {
        iVar14 = (int)local_118;
      }
      if ((int)local_118 == 9) {
        iVar14 = 2;
      }
      local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffff00000000);
    }
    else {
      local_130 = (undefined8 *)
                  CONCAT44(local_130._4_4_,(int)CONCAT71((int7)((ulonglong)ppuVar29 >> 8),1));
      iVar14 = 2;
      uVar27 = 0;
      iVar30 = 1;
      if (*(int *)(lVar19 + 0x84) == *(int *)(*(longlong *)param_1[1] + 0x84)) {
        local_130 = (undefined8 *)
                    CONCAT44(local_130._4_4_,
                             CONCAT31((int3)((uint)*(int *)(lVar19 + 0x88) >> 8),
                                      *(int *)(lVar19 + 0x88) !=
                                      *(int *)(*(longlong *)param_1[1] + 0x88)));
      }
    }
  }
  cVar11 = *(char *)*param_1;
  cVar3 = *(char *)param_1[0xf];
  cVar12 = FUN_14494b654();
  lVar19 = DAT_14ca43230;
  if (cVar12 == '\0') {
    bVar13 = 0;
  }
  else {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar23 = 0;
    }
    else if (iVar4 == 1) {
      uVar15 = FUN_140ad26c0();
      local_110 = (undefined8 *)CONCAT44(local_110._4_4_,uVar15);
      DVar16 = GetCurrentThreadId();
      uVar23 = (ulonglong)((DWORD)local_110 != DVar16);
    }
    else {
      uVar23 = 1;
    }
    bVar13 = *(byte *)(lVar19 + uVar23) ^ 1;
  }
  iVar4 = *(int *)(param_1[4] + 0x3d48);
  uVar5 = *(undefined8 *)(param_1[4] + 0x13818);
  uVar22 = (uint)(byte)local_130;
  FUN_141594b78();
  FUN_1448e935e(uVar5,&local_d8,&DAT_14c9e4670,
                (uVar27 * 2 +
                 (iVar14 + (uint)(byte)((cVar11 << 2 | cVar3 << 3 | bVar13 << 5 | (0 < iVar4) << 4)
                                       ^ 4)) * 4 | uVar22) * 3 + iVar30);
  FUN_141594b78();
  puVar20 = local_d8;
  lVar19 = DAT_14ca97170;
  puVar25 = &DAT_14c9c0d50;
  iVar14 = (int)local_118;
  if (*(char *)*param_1 == '\0') {
    if (iVar30 == 0) {
      puVar25 = &DAT_14c9e5978;
    }
    else {
      puVar24 = &DAT_14c9c0ed8;
      if ((char)local_120 != '\0') {
        puVar24 = &DAT_14c9c0cf8;
      }
      puVar25 = (undefined8 *)(puVar24 + 0x10);
    }
  }
  local_120 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
  if (*(char *)param_1[0xb] != '\0') {
    puVar25 = &DAT_14c9c0d50;
  }
  uVar5 = *puVar25;
  if ((int)local_118 == 9) {
    FUN_141594c9a();
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_cc = 0;
    FUN_1448f70da(puVar20,&DAT_14c9e6750,local_128);
    if (((*(char *)(DAT_14c9e45e8 + 1) == '\x01') && ((byte)local_130 == '\0')) &&
       ((*(longlong *)param_1[0xe] != 0 && (*(int *)param_1[8] == 0)))) {
      puVar32[0x68] = *(undefined8 *)(param_1[5] + 0x1c0);
      puVar32[0x69] = 0;
      *(undefined2 *)(puVar32 + 0x6a) = 0x101;
      *(undefined4 *)((longlong)puVar32 + 0x354) = 0x11;
      uVar31 = 1;
    }
    else {
      uVar31 = 0;
    }
    lVar19 = param_1[2];
    uVar7 = param_1[4];
    FUN_141594c9a();
    FUN_140069376(lVar19);
    puVar1 = (ulonglong *)(lVar19 + 0x70);
    puVar25 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar32 = puVar25 + 0x3d;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar32) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar32 = puVar25 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar32;
    local_d8 = local_128;
    uStack_d0 = (uint)DAT_14c9e6798;
    uStack_cc = (undefined4)((ulonglong)DAT_14c9e6798 >> 0x20);
    if (DAT_14c9e6798 != 0) {
      LOCK();
      *(int *)(DAT_14c9e6798 + 8) = *(int *)(DAT_14c9e6798 + 8) + 1;
      UNLOCK();
    }
    uStack_c8 = 0x4c9e6750;
    uStack_c4 = 1;
    local_148 = (undefined8 *)CONCAT71(local_148._1_7_,2);
    FUN_140068f1a(puVar25,&local_f1,&local_d8,1);
    *puVar25 = &PTR_FUN_14a2400a0;
    puVar25[0x37] = uVar7;
    puVar25[0x38] = local_128;
    puVar25[0x39] = puVar20;
    puVar25[0x3a] = local_120;
    puVar25[0x3b] = uVar5;
    *(undefined1 *)(puVar25 + 0x3c) = uVar31;
    *(undefined4 *)((longlong)puVar25 + 0x1e1) = local_e0;
    *(uint *)((longlong)puVar25 + 0x1e4) = CONCAT31(uStack_dc,local_e0._3_1_);
    iVar14 = *(int *)(lVar19 + 0x170);
    *(uint *)(lVar19 + 0x170) = iVar14 + 1U;
    if (*(uint *)(lVar19 + 0x174) < iVar14 + 1U) {
      FUN_14470e57a(lVar19 + 0x168,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x168) + (longlong)iVar14 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x2c) = *(int *)(lVar19 + 0x170) + -1;
  }
  else {
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar30 = *(int *)(lVar18 + 0xc60);
    if (((iVar30 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar30 == 2)) {
      uVar23 = 0;
    }
    else if (iVar30 == 1) {
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      uVar23 = (ulonglong)(DVar16 != DVar17);
    }
    else {
      uVar23 = 1;
    }
    lVar10 = DAT_14ca971d0;
    if (0 < *(int *)(lVar19 + uVar23 * 4)) {
      iVar14 = *(int *)(lVar18 + 0xc60);
      if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
        uVar23 = 0;
      }
      else if (iVar14 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        uVar23 = (ulonglong)(DVar16 != DVar17);
      }
      else {
        uVar23 = 1;
      }
      iVar14 = (int)local_118;
      if (0 < *(int *)(lVar10 + uVar23 * 4)) {
        lVar19 = param_1[2];
        lVar18 = *(longlong *)(*(longlong *)(local_108 + 8) + 0x51f0);
        uVar31 = *(undefined1 *)(lVar18 + 0x94);
        puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar25 = puVar28 + 9;
        if (*(undefined8 **)(lVar19 + 0x78) < puVar25) {
          FUN_140023dd8((longlong *)(lVar19 + 0x70),0x50);
          puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar25 = puVar28 + 9;
        }
        *(undefined8 **)(lVar19 + 0x70) = puVar25;
        puVar28[1] = *(undefined8 *)(lVar18 + 8);
        puVar28[2] = 0;
        *(undefined1 *)(puVar28 + 3) = 0;
        *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar28 + 5) = 0;
        *puVar28 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar28 + 6) = uVar31;
        *(undefined1 *)(puVar28 + 7) = 0;
        *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
        puVar28[8] = lVar18;
        iVar14 = *(int *)(lVar19 + 0x1a0);
        *(uint *)(lVar19 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(lVar19 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(lVar19 + 0x198,iVar14);
        }
        *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar14 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
        puVar32[0x47] = puVar28;
        lVar19 = param_1[2];
        lVar18 = *(longlong *)(*(longlong *)(local_108 + 8) + 0x51e8);
        uVar31 = *(undefined1 *)(lVar18 + 0x94);
        puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar25 = puVar28 + 9;
        if (*(undefined8 **)(lVar19 + 0x78) < puVar25) {
          FUN_140023dd8((longlong *)(lVar19 + 0x70),0x50);
          puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar25 = puVar28 + 9;
        }
        *(undefined8 **)(lVar19 + 0x70) = puVar25;
        puVar28[1] = *(undefined8 *)(lVar18 + 8);
        puVar28[2] = 0;
        *(undefined1 *)(puVar28 + 3) = 0;
        *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar28 + 5) = 0;
        *puVar28 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar28 + 6) = uVar31;
        *(undefined1 *)(puVar28 + 7) = 0;
        *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
        puVar28[8] = lVar18;
        iVar14 = *(int *)(lVar19 + 0x1a0);
        *(uint *)(lVar19 + 0x1a0) = iVar14 + 1U;
        if (*(uint *)(lVar19 + 0x1a4) < iVar14 + 1U) {
          FUN_1447568fc(lVar19 + 0x198,iVar14);
        }
        *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar14 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
        puVar32[0x48] = puVar28;
        iVar14 = (int)local_118;
      }
    }
    uVar7 = *(undefined8 *)(param_1[4] + 0x13818);
    uVar21 = FUN_1415d23c0();
    FUN_1448e935e(uVar7,&local_d8,uVar21,0);
    FUN_1415d23c0();
    local_118 = local_d8;
    local_130 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
    FUN_141594c9a();
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_cc = 0;
    FUN_1448f70da(puVar20,&DAT_14c9e6750,local_128,&local_d8);
    local_148 = (undefined8 *)&local_e0;
    local_e0 = 0;
    FUN_14731799c(&local_d8,param_1[2],param_1[4],iVar14);
    memcpy(puVar32 + 0x20,&local_d8,0x90);
    uVar15 = local_e0;
    lVar19 = param_1[2];
    uVar7 = param_1[4];
    FUN_141594c9a();
    FUN_140069376(lVar19);
    puVar1 = (ulonglong *)(lVar19 + 0x70);
    puVar25 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar32 = puVar25 + 0x40;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar32) {
      FUN_140023dd8(puVar1,0x208);
      puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar32 = puVar25 + 0x40;
    }
    *puVar1 = (ulonglong)puVar32;
    local_d8 = local_128;
    uStack_d0 = (uint)DAT_14c9e6798;
    uStack_cc = (undefined4)((ulonglong)DAT_14c9e6798 >> 0x20);
    if (DAT_14c9e6798 != 0) {
      LOCK();
      *(int *)(DAT_14c9e6798 + 8) = *(int *)(DAT_14c9e6798 + 8) + 1;
      UNLOCK();
    }
    uStack_c8 = 0x4c9e6750;
    uStack_c4 = 1;
    local_148 = (undefined8 *)CONCAT71(local_148._1_7_,2);
    FUN_140068f1a(puVar25,&local_f1,&local_d8,1);
    *puVar25 = &PTR_FUN_14a2400c0;
    puVar25[0x37] = uVar7;
    puVar25[0x38] = local_118;
    puVar25[0x39] = local_130;
    puVar25[0x3a] = puVar20;
    puVar25[0x3b] = local_120;
    puVar25[0x3c] = local_128;
    *(int *)(puVar25 + 0x3d) = iVar14;
    puVar25[0x3e] = uVar5;
    *(undefined4 *)(puVar25 + 0x3f) = uVar15;
    iVar14 = *(int *)(lVar19 + 0x170);
    *(uint *)(lVar19 + 0x170) = iVar14 + 1U;
    if (*(uint *)(lVar19 + 0x174) < iVar14 + 1U) {
      FUN_14470e57a(lVar19 + 0x168,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x168) + (longlong)iVar14 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x2c) = *(int *)(lVar19 + 0x170) + -1;
  }
  FUN_140069100(lVar19,puVar25);
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cc326a FUN_142cc326a body=2407 status=ok
// SIG undefined FUN_142cc326a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc326a(longlong *param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  wchar_t *local_170;
  undefined4 local_168;
  undefined4 local_160;
  code *local_158;
  code *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined8 local_120;
  bool local_111;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined4 local_df;
  undefined3 uStack_db;
  undefined8 *local_d8;
  longlong local_d0;
  undefined *local_c8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar11 = *param_1;
  lVar3 = param_1[6];
  puVar1 = (ulonglong *)(lVar11 + 0x70);
  puVar18 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar18 + 0x4e;
  if (*(undefined8 **)(lVar11 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x280);
    puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar13 = puVar18 + 0x4e;
  }
  *puVar1 = (ulonglong)puVar13;
  *puVar18 = &PTR_FUN_14a2400d8;
  local_f0 = puVar18 + 2;
  *(undefined1 (*) [16])(puVar18 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 4) = (undefined1  [16])0x0;
  puVar18[6] = 0;
  *(undefined1 *)(puVar18 + 7) = 1;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0;
  *(undefined4 *)(puVar18 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x5c) = 0x3f800000;
  *(undefined4 *)(puVar18 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar18 + 100) = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0x3f800000;
  puVar18[0x16] = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 4;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xe4) = 0;
  *(undefined4 *)(puVar18 + 0x1d) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xec) = 0x3f800000;
  *(undefined1 (*) [16])(puVar18 + 0x1e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 0x2a) = (undefined1  [16])0x0;
  puVar18[0x2c] = 0;
  *(undefined1 *)(puVar18 + 0x2d) = 1;
  lVar10 = 0x170;
  do {
    *(undefined1 (*) [16])((longlong)puVar18 + lVar10) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar18 + lVar10 + 0x10) = 0xffff0000;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0x230);
  *(undefined4 *)((longlong)puVar18 + 0x244) = 0;
  *(undefined1 (*) [16])(puVar18 + 0x46) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar18 + 0x48) = 0;
  *(undefined4 *)(puVar18 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x24c) = 0xffffffff;
  *(undefined4 *)(puVar18 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x254) = 0xffffffff;
  *(undefined4 *)(puVar18 + 0x4b) = 0;
  *(undefined2 *)((longlong)puVar18 + 0x25c) = 0;
  puVar18[0x4c] = 0;
  iVar7 = *(int *)(lVar11 + 0xa0);
  *(uint *)(lVar11 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(lVar11 + 0xa4) < iVar7 + 1U) {
    FUN_1448cfae8((longlong *)(lVar11 + 0x98),iVar7);
  }
  *(undefined8 **)(*(longlong *)(lVar11 + 0x98) + (longlong)iVar7 * 8) = puVar18;
  puVar18[2] = *(undefined8 *)(DAT_14ca63b68 + 8);
  puVar18[3] = DAT_14c9c0de0;
  lVar11 = *(longlong *)param_1[1];
  puVar18[4] = lVar11;
  puVar18[5] = DAT_14c9c0d80;
  if (lVar11 == 0) {
    puVar18[4] = *(undefined8 *)param_1[2];
  }
  uVar4 = *(undefined8 *)(param_1[3] + 0x118d0);
  lVar11 = FUN_144a2c9be();
  cVar6 = *(char *)(lVar11 + 0x41);
  if (*(char *)(lVar11 + 0x41) == '\x03') {
    cVar6 = '\x02';
  }
  puVar18[6] = uVar4;
  *(char *)(puVar18 + 7) = cVar6;
  puVar13 = (undefined8 *)param_1[4];
  puVar17 = puVar18 + 0x20;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar17 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar17 = puVar17 + 1;
  }
  lVar11 = param_1[3];
  lVar10 = FUN_1447e4f80();
  cVar6 = *(char *)(lVar10 + 0x41);
  if (cVar6 == '\x03') {
    cVar6 = '\x02';
  }
  puVar18[0x2c] = *(undefined8 *)(lVar11 + 0x18);
  *(char *)(puVar18 + 0x2d) = cVar6;
  puVar18[0x2e] = *(undefined8 *)param_1[5];
  puVar18[0x2f] = 0;
  *(undefined4 *)(puVar18 + 0x30) = 0xffff0001;
  piVar16 = DAT_14ca97170;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar11 + 0xc60);
  if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
    uVar14 = 0;
  }
  else if (iVar7 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar14 = 1;
  }
  lVar10 = DAT_14ca971d0;
  piVar2 = (int *)(lVar11 + 0xc60);
  if (0 < piVar16[uVar14]) {
    iVar7 = *piVar2;
    if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
      uVar14 = 0;
    }
    else if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar14 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar14 = 1;
    }
    if (0 < *(int *)(lVar10 + uVar14 * 4)) {
      puVar18[0x31] = *(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x51f0);
      puVar18[0x32] = 0;
      *(undefined4 *)(puVar18 + 0x33) = 0xffff0001;
      puVar18[0x34] = *(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x51e8);
      puVar18[0x35] = 0;
      *(undefined4 *)(puVar18 + 0x36) = 0xffff0001;
    }
  }
  uVar4 = *(undefined8 *)(param_1[3] + 0x13818);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_130 = &LAB_14712ac08;
    local_138 = &LAB_14712ac0c;
    local_140 = &LAB_1472e3912;
    local_148 = &LAB_1472e3916;
    local_150 = FUN_1472e391a;
    local_158 = FUN_1472e3942;
    local_170 = L"ScreenPassVS";
    local_178 = L"/Engine/Private/ScreenPass.usf";
    local_120 = 0;
    local_128 = 0xe0;
    local_160 = 1;
    local_168 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar4,&local_d8,&DAT_14ca4b6d8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_130 = &LAB_14712ac08;
    local_138 = &LAB_14712ac0c;
    local_140 = &LAB_1472e3912;
    local_148 = &LAB_1472e3916;
    local_150 = FUN_1472e391a;
    local_158 = FUN_1472e3942;
    local_170 = L"ScreenPassVS";
    local_178 = L"/Engine/Private/ScreenPass.usf";
    local_120 = 0;
    local_128 = 0xe0;
    local_160 = 1;
    local_168 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  lVar11 = local_d0;
  puVar13 = local_d8;
  uVar4 = *(undefined8 *)(param_1[3] + 0x13818);
  uVar12 = FUN_1415d23c0();
  FUN_1448e935e(uVar4,&local_d8,uVar12,0);
  FUN_1415d23c0();
  piVar16 = DAT_14ca97170;
  local_110 = local_d8;
  local_108 = local_d0;
  iVar7 = *piVar2;
  local_f8 = lVar11;
  local_100 = puVar13;
  if (iVar7 == 0x40000002) {
    local_111 = 0 < *DAT_14ca97170;
  }
  else {
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
      uVar14 = 1;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar8 != DVar9);
        iVar7 = *piVar2;
      }
      local_111 = 0 < piVar16[uVar14];
      local_e4 = 0;
      if (iVar7 == 0x40000002) {
        uVar14 = 0;
        piVar16 = DAT_14ca97170;
        goto LAB_142cc3693;
      }
    }
    else {
      local_111 = 0 < *DAT_14ca97170;
    }
    piVar16 = DAT_14ca97170;
    local_e4 = 0;
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar14 = 1;
      }
      goto LAB_142cc3693;
    }
  }
  local_e4 = 0;
  uVar14 = 0;
  piVar16 = DAT_14ca97170;
LAB_142cc3693:
  uVar15 = 0;
  if (0 < piVar16[uVar14]) {
    local_178 = (wchar_t *)&local_e4;
    FUN_14731799c(&local_d8,*param_1,param_1[3],param_2);
    memcpy(puVar18 + 8,&local_d8,0x90);
    uVar15 = local_e4;
  }
  uVar4 = *(undefined8 *)(param_1[3] + 0x13818);
  FUN_14159c82a();
  FUN_1448e935e(uVar4,&local_d8,&DAT_14c9e4798,0);
  FUN_14159c82a();
  lVar10 = local_d0;
  puVar18 = local_d8;
  lVar11 = *param_1;
  lVar3 = param_1[3];
  FUN_14159c94c();
  FUN_140069376(lVar11);
  puVar1 = (ulonglong *)(lVar11 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar17 + 0x41;
  if (*(undefined8 **)(lVar11 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar17 + 0x41;
  }
  puVar5 = local_f0;
  *puVar1 = (ulonglong)puVar13;
  local_d8 = local_f0;
  local_d0 = DAT_14c9e6820;
  if (DAT_14c9e6820 != 0) {
    LOCK();
    *(int *)(DAT_14c9e6820 + 8) = *(int *)(DAT_14c9e6820 + 8) + 1;
    UNLOCK();
  }
  local_c8 = &DAT_14c9e67d8;
  local_178 = (wchar_t *)CONCAT71(local_178._1_7_,2);
  FUN_140068f1a(puVar17,&local_e5,&local_d8,1);
  *puVar17 = &PTR_FUN_14a2400e0;
  puVar17[0x37] = puVar5;
  puVar17[0x38] = lVar3;
  puVar17[0x39] = local_100;
  puVar17[0x3a] = local_f8;
  puVar17[0x3b] = local_110;
  puVar17[0x3c] = local_108;
  puVar17[0x3d] = puVar18;
  puVar17[0x3e] = lVar10;
  *(undefined4 *)(puVar17 + 0x3f) = uVar15;
  *(undefined4 *)((longlong)puVar17 + 0x1fc) = param_2;
  *(bool *)(puVar17 + 0x40) = local_111;
  *(undefined4 *)((longlong)puVar17 + 0x201) = local_df;
  *(uint *)((longlong)puVar17 + 0x204) = CONCAT31(uStack_db,local_df._3_1_);
  iVar7 = *(int *)(lVar11 + 0x170);
  *(uint *)(lVar11 + 0x170) = iVar7 + 1U;
  if (*(uint *)(lVar11 + 0x174) < iVar7 + 1U) {
    FUN_14470e57a(lVar11 + 0x168,iVar7);
  }
  *(undefined8 **)(*(longlong *)(lVar11 + 0x168) + (longlong)iVar7 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x2c) = *(int *)(lVar11 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140069100(lVar11,puVar17);
  return;
}



// FUNCTION 142cc3bd2 FUN_142cc3bd2 body=3170 status=ok
// SIG undefined FUN_142cc3bd2(void)

void FUN_142cc3bd2(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 ***param_4,
                  undefined8 ***param_5)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  DWORD DVar6;
  undefined8 uVar7;
  undefined7 uVar11;
  longlong lVar8;
  undefined8 ***pppuVar9;
  longlong *plVar10;
  undefined1 uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined1 uVar16;
  longlong *plVar17;
  int iVar18;
  byte bVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  undefined1 auStack_518 [32];
  undefined8 ***local_4f8;
  undefined8 **local_4f0;
  undefined8 ***local_4e8;
  undefined8 ***local_4e0;
  undefined8 ***local_4d8;
  undefined8 uStack_4d0;
  undefined2 local_4c8;
  bool local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined8 local_4a0;
  longlong local_498;
  uint local_48c;
  undefined8 ***local_488;
  longlong *local_480;
  longlong local_478;
  undefined4 *local_470;
  undefined8 ***local_468;
  int *local_460;
  longlong local_458;
  undefined4 local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 **local_438 [3];
  undefined8 **local_420;
  undefined8 **local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 **local_3e8 [10];
  undefined1 auStack_394 [8];
  undefined1 auStack_38c [4];
  undefined8 **local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 auStack_308 [30];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined8 **local_1e8;
  undefined8 uStack_1e0;
  undefined8 **local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_498 = param_3;
  if ((((*(byte *)(param_1 + 0x1f) & 2) != 0) || ((*(byte *)((longlong)param_1 + 0xed) & 0x80) == 0)
      ) || (DAT_14ca085ac != 0)) goto LAB_142cc47c0;
  if ((longlong)(int)param_1[0x7e] < 1) {
LAB_142cc3ca8:
    bVar2 = false;
  }
  else {
    lVar15 = 0;
    bVar19 = 0;
    do {
      bVar19 = bVar19 | *(byte *)(param_1[0x7d] + 0x23eb + lVar15);
      lVar15 = lVar15 + 0x13c10;
    } while ((longlong)(int)param_1[0x7e] * 0x13c10 - lVar15 != 0);
    if ((bVar19 & 1) == 0) goto LAB_142cc3ca8;
    bVar2 = true;
    if (*(int *)(DAT_14c9e45b8 + 4) == 0) goto LAB_142cc47c0;
  }
  lVar15 = *(longlong *)(param_1[1] + 0x3608);
  if ((lVar15 == 0) || ((*(longlong *)(lVar15 + 8) == 0 && (*(char *)(lVar15 + 0xf8) != '\x01')))) {
    local_4ac = 0;
  }
  else {
    local_4ac = (undefined4)
                CONCAT71((int7)((ulonglong)lVar15 >> 8),(*(byte *)(lVar15 + 0x20) & 4) == 0);
  }
  cVar4 = FUN_142bcede5(param_1[1],param_1 + 0x13);
  if ((cVar4 == '\0') || (cVar4 = (**(code **)(*param_1 + 0x68))(param_1), cVar4 == '\0')) {
    local_4a8 = 0;
LAB_142cc3e25:
    local_4b0 = 0;
  }
  else {
    local_4b0 = 0;
    local_4a8 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(param_1[1] + 0x3608) >> 8),1);
    if (((*(byte *)(*(longlong *)(param_1[1] + 0x3608) + 0x20) & 1) != 0) && (DAT_14c9c9d1c == 0)) {
      cVar4 = FUN_14175ffe0(param_1);
      if ((cVar4 == '\0') ||
         ((cVar4 = FUN_140b3b680(param_1), cVar4 == '\0' ||
          (bVar2 || (*(byte *)((longlong)param_1 + 0xe2) & 0x80) == 0)))) goto LAB_142cc3e25;
      fVar24 = *(float *)(*(longlong *)(param_1[1] + 0x3608) + 0xc0);
      fVar25 = *(float *)(*(longlong *)(param_1[1] + 0x3608) + 0xc4);
      if (2.0 <= fVar25) {
        fVar25 = 2.0;
      }
      if (fVar25 <= 0.01) {
        fVar25 = 0.01;
      }
      if (3000.0 <= fVar24) {
        fVar24 = 3000.0;
      }
      uStack_210 = CONCAT44(uStack_210._4_4_,fVar25);
      if (fVar24 <= 2.0) {
        fVar24 = 2.0;
      }
      if (DAT_14c760280 == 0) {
        uVar26 = 0;
      }
      else {
        fVar25 = fVar24;
        if (DAT_14c760284 <= fVar24) {
          fVar25 = DAT_14c760284;
        }
        uVar26 = -(uint)(DAT_14c760284 <= fVar24) & (uint)fVar24;
        fVar24 = fVar25;
      }
      local_218 = (undefined8 ***)CONCAT44(fVar24,uVar26);
      local_4e8 = (undefined8 ***)((ulonglong)local_4e8 & 0xffffffffffffff00);
      local_4f0 = (undefined8 **)((ulonglong)local_4f0 & 0xffffffffffffff00);
      local_4f8 = param_5;
      uVar7 = FUN_142bcf154(param_1,param_2,local_498);
      uVar11 = (undefined7)((ulonglong)uVar7 >> 8);
      local_4a8 = (undefined4)CONCAT71(uVar11,1);
      local_4b0 = (undefined4)CONCAT71(uVar11,1);
    }
  }
  lVar15 = param_1[1];
  uVar7 = FUN_14019f353(*(undefined4 *)(lVar15 + 8));
  lVar8 = local_498;
  local_450 = 0;
  if (((char)uVar7 == '\0') || (*(int *)(lVar15 + 0x3748) == 0)) {
    local_48c = 0;
  }
  else {
    local_48c = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),(char)param_1[0x1d]) & 0xffffff01;
  }
  local_468 = param_4;
  FUN_14494b062(local_3e8,param_2);
  lVar15 = param_1[0x7d];
  puVar14 = (undefined4 *)(lVar8 + 0x1b0);
  if ((longlong)(int)param_1[0x7e] != 0) {
    lVar22 = lVar15 + (longlong)(int)param_1[0x7e] * 0x13c10;
    plVar10 = param_1 + 0x1c7;
    local_460 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    iVar18 = 0;
    local_4a0 = param_2;
    local_480 = plVar10;
    local_478 = lVar22;
    local_470 = (undefined4 *)(lVar8 + 0x1b0);
    do {
      lVar8 = -1;
      if (0 < (longlong)(int)param_1[0x82]) {
        lVar20 = 0;
        do {
          lVar8 = lVar20;
          if (*(longlong *)(param_1[0x81] + lVar20 * 8) == lVar15) break;
          lVar20 = lVar20 + 1;
          lVar8 = -1;
        } while ((int)param_1[0x82] != lVar20);
      }
      plVar17 = (longlong *)param_1[0x1cb];
      if ((longlong *)param_1[0x1cb] == (longlong *)0x0) {
        plVar17 = plVar10;
      }
      lVar20 = (longlong)(int)lVar8 * 0x20;
      FUN_140443fc4(param_1,lVar15);
      local_408 = 0;
      local_418 = (undefined8 ***)0x0;
      uStack_410 = 0;
      uStack_400 = 8;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_420 = (undefined8 ***)0x0;
      iVar1 = *(int *)((longlong)plVar17 + lVar20 + 0xc);
      if ((int)plVar17[(longlong)(int)lVar8 * 4] != 2 || 1 < iVar1 - 1U) {
        if (iVar1 == 1) {
          local_388 = (undefined8 ***)0x0;
          uStack_380 = 0;
          local_378 = 0;
          local_488 = (undefined8 ***)CONCAT44(local_488._4_4_,*(int *)(DAT_14ca4b930 + 4));
          if ((*(int *)(DAT_14ca4b930 + 4) == 0) || (*(int *)(DAT_14c9e4588 + 4) == 0)) {
            if ((*(longlong *)(lVar15 + 0x3108) == 0) || (*(longlong *)(lVar15 + 0x10) == 0)) {
              cVar4 = '\0';
              goto LAB_142cc4126;
            }
            iVar1 = *(int *)(lVar15 + 0x3020);
            if ((iVar1 == 2) || (iVar1 == 4)) {
              local_4a4 = (undefined4)
                          CONCAT71((int7)((ulonglong)DAT_14ca4cb68 >> 8),
                                   *(int *)(DAT_14ca4cb68 + 4) != 0);
            }
            else {
              local_4a4 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
            }
            cVar4 = '\0';
          }
          else {
            cVar4 = '\x01';
LAB_142cc4126:
            local_4a4 = 0;
          }
          iVar1 = *(int *)(DAT_14ca4cb38 + 4);
          fVar24 = *(float *)(lVar15 + 0x294c);
          if (iVar1 < 4) {
LAB_142cc415b:
            if (2 < iVar1) {
              iVar21 = 3;
              pppuVar9 = (undefined8 ***)0x43f800000;
              if (60.0 <= fVar24) goto LAB_142cc4196;
            }
            iVar21 = (1 < iVar1 && 40.0 <= fVar24) + 1;
            pppuVar9 = (undefined8 ***)0x13f800000;
          }
          else {
            iVar21 = 4;
            pppuVar9 = (undefined8 ***)0xc3f800000;
            if (fVar24 < 80.0) goto LAB_142cc415b;
          }
LAB_142cc4196:
          local_438[0] = (undefined8 ***)0x0;
          local_4f8 = local_438;
          FUN_14303cdd5(&local_218,local_4a0,lVar15,local_498);
          local_3f8 = uStack_1f8;
          uStack_3f0 = CONCAT44(uStack_1ec,local_1f0);
          local_408 = local_208;
          uStack_400 = (undefined4)local_200;
          uStack_3fc = local_200._4_4_;
          local_418 = local_218;
          uStack_410 = uStack_210;
          if ((int)(&DAT_14ca814b8)
                   [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar15 + 0x3090) * 2)
                    * 0xf] < 3) {
            local_4d8 = (undefined8 ***)0x0;
          }
          else {
            local_4d8 = &local_418;
            if (*(int *)(DAT_14ca4cce0 + 4) == 0) {
              local_4d8 = (undefined8 ***)0x0;
            }
          }
          local_4e8 = &local_388;
          local_4f0 = (undefined8 **)CONCAT71(local_4f0._1_7_,cVar4);
          local_4f8 = (undefined8 ***)CONCAT44(local_4f8._4_4_,iVar21);
          local_4e0 = (undefined8 ***)((ulonglong)local_4e0 & 0xffffffffffffff00);
          FUN_14303a042(local_4a0,local_3e8,*(undefined8 *)(local_498 + 0x1b8),lVar15);
          lVar22 = local_478;
          param_2 = local_4a0;
          if (cVar4 == '\0') {
            plVar10 = local_480;
            pppuVar9 = (undefined8 ***)local_388;
            if ((char)local_4a4 != '\0') {
              uStack_210 = *(undefined8 *)(lVar15 + 0x30f8);
              local_208 = *(undefined8 *)(lVar15 + 0x3100);
              local_1f0 = 1;
              uStack_1d0 = 0;
              local_1e8 = local_3e8[0];
              uStack_1e0 = stack0xfffffffffffffc70;
              local_1d8 = local_388;
              local_218 = (undefined8 ***)
                          (ulonglong)
                          CONCAT15(*(int *)((longlong)plVar17 + lVar20 + 0xc) == 2 |
                                   *(byte *)((longlong)plVar17 + lVar20 + 0x14),0x200000003);
              local_4f0 = (undefined8 **)(*(longlong *)(lVar15 + 0x3108) + 0x1418);
              local_4f8 = (undefined8 ***)(lVar15 + 0x132e8);
              local_200 = uStack_210;
              uStack_1f8 = local_208;
              FUN_1401f4547(local_438,local_4a0,lVar15,&local_218);
              plVar10 = local_480;
              pppuVar9 = (undefined8 ***)local_438[0];
            }
          }
          else {
            plVar10 = (longlong *)FUN_141508108();
            lVar22 = local_478;
            param_2 = local_4a0;
            if ((DWORD)local_488 != 1) {
              plVar10 = DAT_14ca4cb10;
            }
            local_4f8 = (undefined8 ***)(lVar15 + 0x125c0);
            local_4e8 = &local_388;
            local_4f0 = local_3e8;
            local_4e0 = pppuVar9;
            (**(code **)(*plVar10 + 0x28))(plVar10,&local_218,local_4a0,lVar15);
            plVar10 = local_480;
            pppuVar9 = local_218;
          }
        }
        else {
          pppuVar9 = (undefined8 ***)local_420;
          if (iVar1 == 2) {
            local_218 = (undefined8 ***)0x0;
            uStack_210 = 0;
            local_200 = 0;
            uStack_1f8 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1d8 = (undefined8 ***)0x0;
            uStack_1d0 = 0;
            local_1e8 = (undefined8 **)0x0;
            uStack_1e0 = 0;
            local_108 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_b8 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_318 = 0;
            uStack_310 = 0;
            local_328 = 0;
            uStack_320 = 0;
            local_338 = 0;
            uStack_330 = 0;
            lVar8 = 0x8c;
            do {
              *(undefined8 *)(auStack_394 + lVar8) = 0;
              *(undefined8 *)(auStack_38c + lVar8) = 0x3f80000000000000;
              lVar8 = lVar8 + 0x10;
            } while (lVar8 != 0xec);
            lVar8 = 0xec;
            do {
              *(undefined8 *)(auStack_394 + lVar8) = 0;
              *(undefined8 *)(auStack_38c + lVar8) = 0x3f80000000000000;
              lVar8 = lVar8 + 0x10;
            } while (lVar8 != 0x14c);
            local_4d8 = (undefined8 ***)0x0;
            uStack_4d0 = 0;
            local_4e8 = &local_388;
            local_4f0 = (undefined8 **)&local_218;
            local_4f8 = local_468;
            local_4c8 = 2;
            local_4e0 = (undefined8 ***)((ulonglong)local_4e0 & 0xffffffff00000000);
            pppuVar9 = (undefined8 ***)FUN_142d404f6(param_1,param_2,lVar15,local_498);
          }
        }
        local_420 = pppuVar9;
        if (*(char *)((longlong)plVar17 + lVar20 + 0x14) == '\x01') {
          local_4f8 = &local_420;
          FUN_142e8834e(param_1,param_2,local_3e8,lVar15);
        }
        lVar8 = DAT_14ca97170;
        if ((((byte)local_48c | (byte)local_4ac | (byte)local_4a8) & 1) != 0 ||
            (undefined8 ***)local_420 != (undefined8 ***)0x0) {
          if (*(int *)(param_5 + 1) == 0) {
            pppuVar9 = (undefined8 ***)0x0;
          }
          else {
            pppuVar9 = (undefined8 ***)(*param_5)[iVar18];
          }
          iVar1 = *(int *)((longlong)plVar17 + lVar20 + 0xc);
          iVar21 = *local_460;
          if (((iVar21 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar21 == 2)) {
            uVar13 = 0;
          }
          else if (iVar21 == 1) {
            uVar5 = FUN_140ad26c0();
            local_488 = (undefined8 ***)CONCAT44(local_488._4_4_,uVar5);
            DVar6 = GetCurrentThreadId();
            uVar13 = (ulonglong)((DWORD)local_488 != DVar6);
          }
          else {
            uVar13 = 1;
          }
          lVar3 = local_498;
          uVar5 = local_4b0;
          lVar20 = param_1[1];
          uVar12 = (undefined1)local_4b0;
          uVar23 = (undefined1)local_4a8;
          uVar16 = (undefined1)local_4ac;
          local_4f8 = pppuVar9;
          if (*(int *)(lVar8 + uVar13 * 4) < 1) {
            local_4c8 = CONCAT11(local_4c8._1_1_,uVar12);
            local_4d8 = (undefined8 ***)CONCAT71(local_4d8._1_7_,uVar16);
            local_4b8 = 9;
          }
          else {
            local_4c0 = iVar1 == 2;
            local_4e0 = &local_418;
            local_4e8 = local_3e8;
            local_4b8 = 3;
            local_4f0 = local_420;
            local_488 = pppuVar9;
            local_4c8._0_1_ = uVar12;
            uStack_4d0._0_1_ = uVar23;
            local_4d8._0_1_ = uVar16;
            FUN_142cc4835(local_4a0,lVar15,lVar20,local_498);
            pppuVar9 = local_488;
            local_4c0 = iVar1 == 2;
            local_4e0 = &local_418;
            local_4e8 = local_3e8;
            local_4f0 = local_420;
            local_4f8 = local_488;
            local_4b8 = 2;
            local_4b0 = uVar5;
            local_4c8._0_1_ = uVar12;
            uStack_4d0._0_1_ = uVar23;
            local_4d8._0_1_ = uVar16;
            FUN_142cc4835(local_4a0,lVar15,param_1[1],lVar3);
            local_4c0 = iVar1 == 2;
            uVar16 = (undefined1)local_4ac;
            local_4e0 = &local_418;
            local_4e8 = local_3e8;
            local_4f0 = local_420;
            local_4f8 = pppuVar9;
            local_4b8 = 1;
            local_4c8._0_1_ = uVar12;
            uStack_4d0._0_1_ = uVar23;
            local_4d8._0_1_ = uVar16;
            FUN_142cc4835(local_4a0,lVar15,param_1[1],lVar3);
            lVar20 = param_1[1];
            local_4c8 = CONCAT11(local_4c8._1_1_,(char)local_4b0);
            local_4d8 = (undefined8 ***)CONCAT71(local_4d8._1_7_,uVar16);
            local_4f8 = pppuVar9;
            local_4b8 = 0;
            lVar22 = local_478;
            param_2 = local_4a0;
          }
          local_4c0 = iVar1 == 2;
          local_4e0 = &local_418;
          local_4e8 = local_3e8;
          uStack_4d0 = CONCAT71(uStack_4d0._1_7_,uVar23);
          local_4f0 = local_420;
          FUN_142cc4835(param_2,lVar15,lVar20,lVar3);
          plVar10 = local_480;
        }
        if (*(char *)(lVar15 + 0x11a08) == '\x01') {
          FUN_142c39847(param_2,param_1[1],lVar15,1);
        }
      }
      iVar18 = iVar18 + 1;
      lVar15 = lVar15 + 0x13c10;
    } while (lVar15 != lVar22);
    lVar15 = param_1[0x7d];
    local_450 = (undefined4)param_1[0x7e];
    puVar14 = local_470;
  }
  local_448 = *puVar14;
  uStack_444 = puVar14[1];
  uStack_440 = puVar14[2];
  uStack_43c = puVar14[3];
  local_458 = lVar15;
  FUN_14034d3d3(param_2);
LAB_142cc47c0:
  if ((local_a0 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cc4835 FUN_142cc4835 body=4397 status=ok
// SIG undefined FUN_142cc4835(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc4835(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,longlong param_8,
                  byte param_9,byte param_10,byte param_11,byte param_12,int param_13)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char cVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined7 uVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  uint *puVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  int iVar33;
  longlong lVar34;
  bool bVar35;
  float fVar36;
  undefined4 uVar37;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  char *local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined8 **local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  uint *local_150;
  longlong local_148;
  DWORD local_13c;
  longlong *local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  ulonglong *local_118;
  undefined1 local_109;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined2 local_fe;
  undefined1 local_fc;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined8 *local_f8;
  longlong lStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_5 == 0) {
    uVar37 = 0;
  }
  else {
    uVar37 = 0x3f800000;
  }
  local_128 = CONCAT44(local_128._4_4_,*(undefined4 *)(param_2 + 0x13700));
  local_13c = *(DWORD *)(param_2 + 0x13704);
  local_130 = *(longlong *)(param_8 + 0x20);
  local_148 = param_2;
  local_138 = param_3;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_f8,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_f8);
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar23 != 0)) {
    plVar28 = (longlong *)(lVar23 + 8);
  }
  else {
    plVar28 = (longlong *)0x0;
  }
  lVar23 = *(longlong *)(param_4 + 0x308);
  if ((lVar23 == 0) || ((*(byte *)(lVar23 + 0x24) & 4) == 0)) {
    lVar23 = *plVar28;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar16 = puVar31 + 0x6e;
  local_120 = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(puVar1,0x380);
    puVar31 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar16 = puVar31 + 0x6e;
  }
  *puVar1 = (ulonglong)puVar16;
  *puVar31 = &PTR_FUN_14a2400f8;
  puVar31[0x1a] = 0;
  puVar31[0x1c] = 0;
  puVar31[0x1d] = 0x3f80000000000000;
  *(undefined1 (*) [16])(puVar31 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 0xe) = (undefined1  [16])0x0;
  local_150 = (uint *)(puVar31 + 0x22);
  *(undefined1 (*) [16])(puVar31 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 0x2a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar31 + 0x2c) = (undefined1  [16])0x0;
  puVar31[0x2e] = 0;
  *(undefined1 *)(puVar31 + 0x2f) = 1;
  puVar31[0x30] = 0;
  *(undefined1 *)(puVar31 + 0x31) = 1;
  puVar31[0x32] = 0;
  *(undefined1 *)(puVar31 + 0x33) = 1;
  puVar31[0x34] = 0;
  *(undefined1 *)(puVar31 + 0x35) = 1;
  puVar31[0x36] = 0;
  *(undefined1 *)(puVar31 + 0x37) = 1;
  puVar31[0x3a] = 0;
  *(undefined1 *)(puVar31 + 0x3b) = 1;
  *(undefined4 *)(puVar31 + 0x3e) = 0;
  *(undefined4 *)((longlong)puVar31 + 500) = 0;
  *(undefined4 *)(puVar31 + 0x3f) = 0;
  *(undefined4 *)((longlong)puVar31 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(puVar31 + 0x40) = 0;
  *(undefined4 *)((longlong)puVar31 + 0x204) = 0;
  *(undefined4 *)(puVar31 + 0x41) = 0;
  *(undefined4 *)((longlong)puVar31 + 0x20c) = 0x3f800000;
  puVar31[0x4a] = 0;
  puVar31[0x4c] = 0;
  *(undefined4 *)(puVar31 + 0x4d) = 4;
  lVar15 = 0x270;
  do {
    *(undefined1 (*) [16])((longlong)puVar31 + lVar15) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar31 + lVar15 + 0x10) = 0xffff0000;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x330);
  *(undefined4 *)((longlong)puVar31 + 0x344) = 0;
  *(undefined1 (*) [16])(puVar31 + 0x66) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar31 + 0x68) = 0;
  *(undefined4 *)(puVar31 + 0x69) = 0xffffffff;
  *(undefined4 *)((longlong)puVar31 + 0x34c) = 0xffffffff;
  *(undefined4 *)(puVar31 + 0x6a) = 0xffffffff;
  *(undefined4 *)((longlong)puVar31 + 0x354) = 0xffffffff;
  *(undefined4 *)(puVar31 + 0x6b) = 0;
  *(undefined2 *)((longlong)puVar31 + 0x35c) = 0;
  puVar31[0x6c] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  local_118 = puVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar31;
  FUN_142cbfa76(&local_f8,local_138[0x6c1],uVar37);
  puVar1 = local_118;
  lVar15 = local_148;
  puVar31[0x20] = local_d8;
  puVar31[0x21] = uStack_d0;
  puVar31[0x1e] = local_e8;
  puVar31[0x1f] = uStack_e0;
  puVar31[0x1c] = local_f8;
  puVar31[0x1d] = lStack_f0;
  puVar26 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(local_148 + 8) + 0xd0) != '\0') {
    puVar26 = (undefined *)(*(longlong *)(local_148 + 8) + 0x1b8);
  }
  uVar24 = *(ulonglong *)(puVar26 + 0x10);
  iVar3 = *(int *)(local_148 + 0x3104);
  iVar33 = *(int *)(local_148 + 0x30fc);
  *(float *)(puVar31 + 2) =
       ((float)((*(int *)(local_148 + 0x3100) - *(int *)(local_148 + 0x30f8)) / 2) + -0.51) /
       (float)((int)(((uint)(uVar24 >> 0x1f) & 1) + (int)uVar24) >> 1);
  *(float *)((longlong)puVar31 + 0x14) =
       ((float)((iVar3 - iVar33) / 2) + -0.51) / (float)((int)(uVar24 >> 0x20) / 2);
  fVar36 = DAT_14c76021c;
  if (65000.0 <= DAT_14c76021c) {
    fVar36 = 65000.0;
  }
  *(float *)((longlong)puVar31 + 0x1c) = fVar36;
  *(float *)(puVar31 + 3) = 1.0 / ((1.0 - _DAT_14c760218) * fVar36);
  puVar31[4] = param_5;
  puVar31[5] = DAT_14c9c0de0;
  puVar31[6] = lVar23;
  uVar18 = DAT_14c9c0d80;
  puVar31[7] = DAT_14c9c0d80;
  uVar24 = (ulonglong)param_12;
  if (param_6 == 0) {
    param_6 = plVar28[uVar24 * 2 + 1];
  }
  puVar31[uVar24 * 2 + 8] = param_6;
  puVar31[uVar24 * 2 + 9] = uVar18;
  if (local_130 != 0) {
    puVar31[0x19] = *(undefined8 *)(param_8 + 0x28);
    lVar23 = *(longlong *)(param_8 + 0x20);
    cVar12 = *(char *)(lVar23 + 0x68);
    puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar27 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
      FUN_140023dd8(local_118,0x50);
      puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar27 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar16;
    puVar27[1] = *(undefined8 *)(lVar23 + 8);
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 3;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *puVar27 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar27 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
    puVar27[7] = 0;
    puVar27[8] = lVar23;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar31[0x1a] = puVar27;
  }
  if (local_138[0x9a7] == 0) {
    puVar31[0xe] = plVar28[1];
    uVar37 = 0;
  }
  else {
    lVar17 = (**(code **)(*local_138 + 0x340))();
    lVar23 = *(longlong *)(lVar15 + 0x13748);
    if (lVar23 == 0) {
      lVar23 = plVar28[1];
    }
    puVar31[0xe] = lVar23;
    uVar18 = *(undefined8 *)(lVar17 + 0x2f8);
    uVar21 = *(undefined8 *)(lVar17 + 0x300);
    uVar5 = *(undefined8 *)(lVar17 + 0x308);
    uVar6 = *(undefined8 *)(lVar17 + 0x310);
    uVar7 = *(undefined8 *)(lVar17 + 0x318);
    uVar8 = *(undefined8 *)(lVar17 + 800);
    uVar9 = *(undefined8 *)(lVar17 + 0x328);
    puVar31[0x10] = *(undefined8 *)(lVar17 + 0x2f0);
    puVar31[0x11] = uVar18;
    puVar31[0x12] = uVar21;
    puVar31[0x13] = uVar5;
    puVar31[0x14] = uVar6;
    puVar31[0x15] = uVar7;
    puVar31[0x16] = uVar8;
    puVar31[0x17] = uVar9;
    *(undefined4 *)(puVar31 + 0x18) = *(undefined4 *)(lVar17 + 0x2d0);
    uVar37 = 1;
  }
  *(undefined4 *)((longlong)puVar31 + 0xc4) = uVar37;
  uVar18 = DAT_14c9c0de0;
  puVar31[0xf] = DAT_14c9c0de0;
  puVar31[0xc] = *(undefined8 *)(DAT_14ca63b68 + 8);
  puVar31[0xd] = uVar18;
  puVar29 = local_150;
  for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined8 *)puVar29 = *param_7;
    param_7 = param_7 + 1;
    puVar29 = (uint *)((longlong)puVar29 + 8);
  }
  lVar23 = FUN_1447e4f80();
  cVar12 = *(char *)(lVar23 + 0x41);
  if (cVar12 == '\x03') {
    cVar12 = '\x02';
  }
  puVar31[0x2e] = *(undefined8 *)(lVar15 + 0x18);
  *(char *)(puVar31 + 0x2f) = cVar12;
  lVar23 = FUN_144a888ee();
  cVar12 = *(char *)(lVar23 + 0x41);
  if (cVar12 == '\x03') {
    cVar12 = '\x02';
  }
  puVar31[0x32] = *(undefined8 *)(lVar15 + 0x13710);
  *(char *)(puVar31 + 0x33) = cVar12;
  uVar18 = FUN_144886931(param_1,lVar15);
  FUN_144a89262();
  cVar12 = DAT_14c9e49c1;
  if (DAT_14c9e49c1 == '\x03') {
    cVar12 = '\x02';
  }
  puVar31[0x30] = uVar18;
  *(char *)(puVar31 + 0x31) = cVar12;
  uVar18 = *(undefined8 *)(lVar15 + 0x13780);
  lVar23 = FUN_144a12b9e();
  cVar12 = *(char *)(lVar23 + 0x41);
  if (cVar12 == '\x03') {
    cVar12 = '\x02';
  }
  puVar31[0x34] = uVar18;
  *(char *)(puVar31 + 0x35) = cVar12;
  uVar18 = *(undefined8 *)(lVar15 + 0x118d0);
  lVar23 = FUN_144a2c9be();
  cVar12 = *(char *)(lVar23 + 0x41);
  if (cVar12 == '\x03') {
    cVar12 = '\x02';
  }
  puVar31[0x36] = uVar18;
  *(char *)(puVar31 + 0x37) = cVar12;
  cVar12 = FUN_14178fb38(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar15 + 0x3090) * 2));
  if (cVar12 != '\0') {
    FUN_1448a862c(&local_f8);
    FUN_14019e00e(&local_108,&local_f8,0,1);
    lVar23 = FUN_1448a8484();
    cVar12 = '\x02';
    if (*(char *)(lVar23 + 0x41) != '\x03') {
      cVar12 = *(char *)(lVar23 + 0x41);
    }
    lVar23 = CONCAT44(uStack_104,local_108);
    puVar31[0x3a] = lVar23;
    *(char *)(puVar31 + 0x3b) = cVar12;
    if (lVar23 != 0) {
      LOCK();
      puVar29 = (uint *)(lVar23 + 8);
      uVar30 = *puVar29;
      *puVar29 = *puVar29 - 1;
      UNLOCK();
      if ((uVar30 & 0x3fffffff) == 1) {
        puVar29 = (uint *)(lVar23 + 8);
        LOCK();
        uVar30 = *puVar29;
        *puVar29 = *puVar29 | 0x40000000;
        UNLOCK();
        if ((uVar30 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar23 + 0xd);
          plVar19 = (longlong *)FUN_14001cc68(0x10,8);
          plVar19[1] = lVar23;
          plVar28 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar19 = (longlong)plVar28;
              LOCK();
              bVar35 = plVar28 != DAT_14ca843c0;
              plVar20 = plVar19;
              if (bVar35) {
                plVar28 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar19 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar28 = plVar19;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar28 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar28;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  FUN_142d3fd2b(lVar15,puVar31 + 0x38);
  lVar34 = local_120;
  puVar31[0x4e] = *(undefined8 *)(local_120 + 0x1b0);
  puVar31[0x4f] = 0;
  *(undefined4 *)(puVar31 + 0x50) = 0xffff0001;
  lVar17 = DAT_14ca97170;
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar23 + 0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar24 = 0;
  }
  else if (iVar3 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar24 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar24 = 1;
  }
  lVar10 = DAT_14ca971d0;
  local_150 = (uint *)(lVar23 + 0xc60);
  if (0 < *(int *)(lVar17 + uVar24 * 4)) {
    uVar30 = *local_150;
    if (uVar30 == 0x40000002) {
      uVar24 = 0;
    }
    else {
      bVar35 = true;
      if ((DAT_14c86a9f8 == '\x01') && (uVar30 != 2)) {
        if (uVar30 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar35 = DVar13 == DVar14;
        }
        else {
          bVar35 = false;
        }
      }
      uVar24 = (ulonglong)(bVar35 ^ 1);
    }
    lVar15 = local_148;
    lVar34 = local_120;
    if (0 < *(int *)(lVar10 + uVar24 * 4)) {
      puVar31[0x51] = local_138[0xa3e];
      puVar31[0x52] = 0;
      *(undefined4 *)(puVar31 + 0x53) = 0xffff0001;
      puVar31[0x54] = local_138[0xa3d];
      puVar31[0x55] = 0;
      *(undefined4 *)(puVar31 + 0x56) = 0xffff0001;
    }
  }
  lVar23 = DAT_14ca97170;
  cVar12 = *(char *)(*(longlong *)(lVar34 + 0x1b0) + 0x93);
  uVar30 = *local_150;
  if (((uVar30 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar30 == 2)) {
    uVar24 = 0;
  }
  else if (uVar30 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar24 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar24 = 1;
  }
  lVar17 = DAT_14ca971d0;
  if (0 < *(int *)(lVar23 + uVar24 * 4)) {
    uVar30 = *local_150;
    uVar24 = (ulonglong)uVar30;
    if (uVar30 == 0x40000002) {
      uVar22 = 0;
    }
    else {
      bVar35 = true;
      if ((DAT_14c86a9f8 == '\x01') && (uVar30 != 2)) {
        if (uVar30 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar35 = DVar13 == DVar14;
        }
        else {
          bVar35 = false;
        }
      }
      uVar22 = (ulonglong)(bVar35 ^ 1);
    }
    lVar15 = local_148;
    if (0 < *(int *)(lVar17 + uVar22 * 4)) {
      uVar37 = 0;
      goto LAB_142cc50ff;
    }
  }
  uVar25 = (undefined7)(uVar24 >> 8);
  if (*(int *)(DAT_14ca2f800 + 4) == 2) {
    uVar37 = (undefined4)CONCAT71(uVar25,cVar12 != '\n' && cVar12 != '\x01');
  }
  else {
    lVar15 = local_148;
    if (*(int *)(DAT_14ca2f800 + 4) == 0) {
      uVar37 = 0;
    }
    else {
      uVar37 = (undefined4)CONCAT71(uVar25,1);
    }
  }
LAB_142cc50ff:
  lVar23 = DAT_14ca97170;
  iVar3 = *(int *)(lVar15 + 0x3d48);
  uVar30 = *local_150;
  local_138 = (longlong *)CONCAT44(local_138._4_4_,uVar37);
  if (((uVar30 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar30 == 2)) {
    uVar24 = 0;
  }
  else if (uVar30 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar24 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar24 = 1;
  }
  lVar17 = DAT_14ca97170;
  puVar16 = puVar31 + 2;
  iVar33 = 0;
  if ((param_13 != 0) && (iVar33 = 0, 0 < *(int *)(lVar23 + uVar24 * 4))) {
    uVar30 = *local_150;
    if ((uVar30 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (uVar30 == 2)))) {
      uVar24 = 0;
    }
    else if (uVar30 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      uVar24 = (ulonglong)(DVar13 != DVar14);
    }
    else {
      uVar24 = 1;
    }
    lVar15 = local_148;
    iVar33 = 0;
    if (0 < *(int *)(lVar17 + uVar24 * 4)) {
      iVar33 = param_13;
    }
  }
  bVar35 = 0 < (int)local_13c;
  bVar4 = 0 < (int)local_128;
  uVar30 = 2;
  if (param_12 == 0) {
    uVar30 = (uint)(local_130 != 0);
  }
  uVar18 = *(undefined8 *)(lVar15 + 0x13818);
  FUN_14156a154();
  FUN_1448e935e(uVar18,&local_f8,&DAT_14c9e48c0,
                (uint)bVar35 * 2 +
                ((uint)param_9 * 2 +
                 ((uint)(param_11 & param_10 & param_9) * 2 +
                  ((iVar33 + (uint)(0 < iVar3) * 4) * 3 + uVar30) * 4 | (uint)(param_10 & param_9))
                 * 4 | (uint)(param_5 != 0)) * 4 | (uint)bVar4);
  FUN_14156a154();
  puVar27 = local_f8;
  local_130 = lStack_f0;
  FUN_14156a276();
  local_f8 = (undefined8 *)0x0;
  lStack_f0 = 0;
  FUN_1448f70da(puVar27,&DAT_14c9e6860,puVar16,&local_f8);
  local_108 = 0;
  uVar18 = *(undefined8 *)(lVar15 + 0x13818);
  uVar21 = FUN_1415d23c0();
  FUN_1448e935e(uVar18,&local_f8,uVar21,0);
  FUN_1415d23c0();
  puVar11 = local_f8;
  local_128 = lStack_f0;
  puVar31[0x4c] = 0;
  *(undefined4 *)(puVar31 + 0x4d) = 4;
  puVar31[0x4a] = 0;
  lVar23 = DAT_14ca97170;
  uVar30 = *local_150;
  uVar24 = 0;
  if (uVar30 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (uVar30 != 2)) {
      if (uVar30 == 1) {
        local_13c = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        uVar24 = (ulonglong)(local_13c != DVar13);
      }
      else {
        uVar24 = 1;
      }
    }
    else {
      uVar24 = 0;
    }
  }
  iVar3 = *(int *)(lVar23 + uVar24 * 4);
  uVar37 = 0;
  if (0 < iVar3) {
    local_1a8 = (wchar_t *)&local_108;
    FUN_14731799c(&local_f8,param_1,local_148,param_13);
    memcpy(puVar31 + 0x3c,&local_f8,0x90);
    uVar18 = FUN_145cf4068();
    local_f8 = (undefined8 *)0x0;
    lStack_f0 = 0;
    FUN_1448f70da(puVar11,uVar18,puVar31 + 0x3c,&local_f8);
    uVar37 = local_108;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e6968) && (FUN_144b3d300(&DAT_14c9e6968), DAT_14c9e6968 == -1)) {
    FUN_145dcbf36(&local_f8);
    local_160 = 0;
    local_170 = 0;
    local_190 = "Unknown";
    local_1a0 = 0;
    uStack_198 = 0;
    local_1a8 = L"FReflectionEnvironmentSkyLightingParameters";
    local_168 = 0;
    local_180 = 0x360;
    local_188 = 0x1cb;
    local_178 = &local_f8;
    FUN_140b49562(&DAT_14c9e68e8,0,1);
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142ccf606);
    _Init_thread_footer(&DAT_14c9e6968);
  }
  FUN_140069376(param_1);
  puVar1 = local_118;
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar31 = puVar32 + 0x3f;
  if (*(undefined8 **)(param_1 + 0x78) < puVar31) {
    FUN_140023dd8(local_118,0x200);
    puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar31 = puVar32 + 0x3f;
  }
  *puVar1 = (ulonglong)puVar31;
  lStack_f0 = DAT_14c9e6930;
  if (DAT_14c9e6930 != 0) {
    LOCK();
    *(int *)(DAT_14c9e6930 + 8) = *(int *)(DAT_14c9e6930 + 8) + 1;
    UNLOCK();
  }
  local_e8 = &DAT_14c9e68e8;
  local_1a8 = (wchar_t *)CONCAT71(local_1a8._1_7_,2);
  local_f8 = puVar16;
  FUN_140068f1a(puVar32,&local_109,&local_f8,1);
  *puVar32 = &PTR_FUN_14a240100;
  puVar32[0x37] = puVar16;
  puVar32[0x38] = local_148;
  puVar32[0x39] = puVar27;
  puVar32[0x3a] = local_130;
  *(char *)(puVar32 + 0x3b) = (char)local_138;
  *(undefined2 *)((longlong)puVar32 + 0x1d9) = local_fb;
  *(undefined1 *)((longlong)puVar32 + 0x1db) = local_f9;
  *(int *)((longlong)puVar32 + 0x1dc) = param_13;
  puVar32[0x3c] = puVar11;
  puVar32[0x3d] = local_128;
  *(bool *)(puVar32 + 0x3e) = 0 < iVar3;
  *(undefined2 *)((longlong)puVar32 + 0x1f1) = local_fe;
  *(undefined1 *)((longlong)puVar32 + 499) = local_fc;
  *(undefined4 *)((longlong)puVar32 + 500) = uVar37;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar32);
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cc5964 FUN_142cc5964 body=112 status=ok
// SIG undefined FUN_142cc5964(void)

void FUN_142cc5964(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0xed) & 0x80) != 0) && ((longlong)*(int *)(param_1 + 0x3f0) != 0)) {
    lVar1 = *(longlong *)(param_1 + 1000);
    lVar2 = (longlong)*(int *)(param_1 + 0x3f0) * 0x13c10;
    do {
      if ((*(char *)(lVar1 + 0x23eb) == '\0') && (*(char *)(lVar1 + 0x11a08) == '\x01')) {
        FUN_142c39847(param_2,*(undefined8 *)(param_1 + 8),lVar1,1);
      }
      lVar1 = lVar1 + 0x13c10;
      lVar2 = lVar2 + -0x13c10;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 142cc59d4 FUN_142cc59d4 body=69 status=ok
// SIG undefined FUN_142cc59d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc59d4(void)

{
  _DAT_14c9e5320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cc5a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e5328,1);
  return;
}



// FUNCTION 142cc5a19 FUN_142cc5a19 body=69 status=ok
// SIG undefined FUN_142cc5a19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc5a19(void)

{
  _DAT_14c9e5338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cc5a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e5340,1);
  return;
}



// FUNCTION 142cc5a5e FUN_142cc5a5e body=69 status=ok
// SIG undefined FUN_142cc5a5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc5a5e(void)

{
  _DAT_14c9e5350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cc5aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e5358,1);
  return;
}



// FUNCTION 142cc5aa3 FUN_142cc5aa3 body=69 status=ok
// SIG undefined FUN_142cc5aa3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc5aa3(void)

{
  _DAT_14c9e5368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cc5ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e5370,1);
  return;
}



// FUNCTION 142cc5b00 FUN_142cc5b00 body=48 status=ok
// SIG undefined FUN_142cc5b00(void)

undefined8 FUN_142cc5b00(ushort param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) &&
     (uVar1 = 0x200, ((uint)(&DAT_14ca814d8)[(ulonglong)param_1 * 0xf] >> 0xc & 1) == 0)) {
    uVar1 = 4;
  }
  return uVar1;
}



// FUNCTION 142cc5c1e FUN_142cc5c1e body=3752 status=ok
// SIG undefined FUN_142cc5c1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc5c1e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  wchar_t *local_110;
  undefined8 uStack_108;
  char *local_100;
  code *local_f8;
  code *local_f0;
  undefined8 **local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  longlong *local_b8;
  longlong local_b0;
  ulonglong *local_a8;
  undefined8 *local_a0;
  undefined1 local_91;
  undefined8 *local_90;
  longlong local_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong lStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar16 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8(puVar1,0x30);
    puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar2 = puVar16 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  *puVar16 = &PTR_FUN_14a241240;
  puVar16[2] = 0;
  iVar7 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 8) = puVar16;
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar8 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8(puVar1,0x48);
    puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar8 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  puVar8[1] = *(undefined8 *)(param_3 + 8);
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 2;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar8 + 5) = 0;
  *puVar8 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar8 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar8 + 0x32) = 0;
  puVar8[7] = param_3;
  iVar7 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar7 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar7 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar16[2] = puVar8;
  *(uint *)(puVar16 + 3) = *(uint *)(param_3 + 100) / 5;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  local_b8 = param_4;
  local_a8 = puVar1;
  if (iVar7 < DAT_14c9e5950) {
    FUN_144b3d300(&DAT_14c9e5950);
    iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    if (DAT_14c9e5950 == -1) {
      if ((iVar7 < DAT_14c9e6b88) && (FUN_144b3d300(&DAT_14c9e6b88), DAT_14c9e6b88 == -1)) {
        FUN_14603f8e4(&local_78);
        local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffffffffff00);
        local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
        local_100 = "Unknown";
        local_110 = (wchar_t *)0x0;
        uStack_108 = 0;
        local_118 = L"FParameters";
        local_d8 = (undefined1 *)0x0;
        local_f0 = (code *)CONCAT44(local_f0._4_4_,0x10);
        local_f8 = (code *)CONCAT44(local_f8._4_4_,0x572);
        local_e8 = &local_78;
        FUN_140b49562(&DAT_14c9e6b08,0,1);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142ccf636);
        _Init_thread_footer(&DAT_14c9e6b88);
      }
      FUN_14610b994();
      local_c0 = &DAT_14c9e6b08;
      local_d0 = &LAB_14712ac08;
      local_d8 = &LAB_14712ac0c;
      local_e0 = &LAB_1471be848;
      local_e8 = (undefined8 **)&LAB_1462d12e0;
      local_f0 = FUN_1471be84c;
      local_f8 = FUN_1471be8ac;
      local_110 = L"ClearIndirectArgInstanceCountCS";
      local_118 = L"/Engine/Private/InstanceCulling/BuildInstanceDrawCommands.usf";
      local_c8 = 0xe0;
      local_100 = (char *)CONCAT44(local_100._4_4_,1);
      uStack_108 = CONCAT44(uStack_108._4_4_,5);
      FUN_140db5666(&DAT_14c9e58a8,0,&DAT_14c9e5840,L"FClearIndirectArgInstanceCountCs");
      _DAT_14c9e58a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ccceaa);
      _Init_thread_footer(&DAT_14c9e5950);
      iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110);
    }
  }
  plVar3 = local_b8;
  if ((iVar7 < DAT_14c9e5950) && (FUN_144b3d300(&DAT_14c9e5950), DAT_14c9e5950 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e6b88) && (FUN_144b3d300(&DAT_14c9e6b88), DAT_14c9e6b88 == -1)) {
      FUN_14603f8e4(&local_78);
      local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffffffffff00);
      local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_100 = "Unknown";
      local_110 = (wchar_t *)0x0;
      uStack_108 = 0;
      local_118 = L"FParameters";
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)CONCAT44(local_f0._4_4_,0x10);
      local_f8 = (code *)CONCAT44(local_f8._4_4_,0x572);
      local_e8 = &local_78;
      FUN_140b49562(&DAT_14c9e6b08,0,1);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf636);
      _Init_thread_footer(&DAT_14c9e6b88);
    }
    FUN_14610b994();
    local_c0 = &DAT_14c9e6b08;
    local_d0 = &LAB_14712ac08;
    local_d8 = &LAB_14712ac0c;
    local_e0 = &LAB_1471be848;
    local_e8 = (undefined8 **)&LAB_1462d12e0;
    local_f0 = FUN_1471be84c;
    local_f8 = FUN_1471be8ac;
    local_110 = L"ClearIndirectArgInstanceCountCS";
    local_118 = L"/Engine/Private/InstanceCulling/BuildInstanceDrawCommands.usf";
    local_c8 = 0xe0;
    local_100 = (char *)CONCAT44(local_100._4_4_,1);
    uStack_108 = CONCAT44(uStack_108._4_4_,5);
    FUN_140db5666(&DAT_14c9e58a8,0,&DAT_14c9e5840,L"FClearIndirectArgInstanceCountCs");
    _DAT_14c9e58a8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142ccceaa);
    _Init_thread_footer(&DAT_14c9e5950);
    plVar3 = local_b8;
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)DAT_14c9e58d8 + (int)((ulonglong)DAT_14c9e58d8 >> 0x20) * 0x17) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
        if (*plVar4 == DAT_14c9e58d8) {
          uVar5 = 0;
          if (plVar4 != (longlong *)0x0) {
            lVar17 = 0;
            if (plVar4 + 1 == (longlong *)0x0) goto LAB_142cc5f35;
            lVar17 = plVar4[1];
            puVar1 = *(ulonglong **)(lVar17 + 0x28);
            lVar10 = ((ulonglong)(DAT_14c9e58d0 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14c9e58d0 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar5 = puVar1[3];
            if ((uVar5 & 1) != 0) {
              uVar5 = (longlong)puVar1 + ((longlong)uVar5 >> 0x18) + 0x18;
            }
            uVar9 = puVar1[5];
            if ((uVar9 & 1) != 0) {
              uVar9 = (longlong)puVar1 + ((longlong)uVar9 >> 0x18) + 0x28;
            }
            uVar11 = puVar1[1];
            if ((uVar11 & 1) != 0) {
              uVar11 = (longlong)puVar1 + ((longlong)uVar11 >> 0x18) + 8;
            }
            uVar14 = *puVar1;
            if ((uVar14 & 1) != 0) {
              uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)puVar1;
            }
            uVar13 = *(uint *)(uVar14 + (ulonglong)
                                        ((uint)puVar1[2] &
                                         ((uint)((ulonglong)lVar10 >> 0x2f) ^ (uint)lVar10) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar13 != 0xffffffff) {
              goto LAB_142cc5ee3;
            }
          }
          break;
        }
        iVar7 = (int)plVar4[2];
      } while (iVar7 != -1);
    }
  }
  goto LAB_142cc5f00;
  while (uVar13 = *(uint *)(uVar11 + uVar14 * 4), uVar13 != 0xffffffff) {
LAB_142cc5ee3:
    uVar14 = (ulonglong)uVar13;
    if ((*(longlong *)(uVar5 + uVar14 * 8) == DAT_14c9e58d0) && (*(int *)(uVar9 + uVar14 * 4) == 0))
    {
      uVar9 = puVar1[7];
      if ((uVar9 & 1) != 0) {
        uVar9 = (longlong)(puVar1 + 7) + ((longlong)uVar9 >> 0x18);
      }
      uVar5 = *(ulonglong *)(uVar9 + (longlong)(int)uVar13 * 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = ((longlong)uVar5 >> 0x18) + uVar9 + (longlong)(int)uVar13 * 8;
      }
      if (uVar5 != 0) goto LAB_142cc5f35;
      break;
    }
  }
LAB_142cc5f00:
  uVar5 = 0;
  lVar17 = 0;
LAB_142cc5f35:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e5950) && (FUN_144b3d300(&DAT_14c9e5950), DAT_14c9e5950 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e6b88) && (FUN_144b3d300(&DAT_14c9e6b88), DAT_14c9e6b88 == -1)) {
      FUN_14603f8e4(&local_78);
      local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffffffffff00);
      local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_100 = "Unknown";
      local_110 = (wchar_t *)0x0;
      uStack_108 = 0;
      local_118 = L"FParameters";
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)CONCAT44(local_f0._4_4_,0x10);
      local_f8 = (code *)CONCAT44(local_f8._4_4_,0x572);
      local_e8 = &local_78;
      FUN_140b49562(&DAT_14c9e6b08,0,1);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf636);
      _Init_thread_footer(&DAT_14c9e6b88);
    }
    FUN_14610b994();
    local_c0 = &DAT_14c9e6b08;
    local_d0 = &LAB_14712ac08;
    local_d8 = &LAB_14712ac0c;
    local_e0 = &LAB_1471be848;
    local_e8 = (undefined8 **)&LAB_1462d12e0;
    local_f0 = FUN_1471be84c;
    local_f8 = FUN_1471be8ac;
    local_110 = L"ClearIndirectArgInstanceCountCS";
    local_118 = L"/Engine/Private/InstanceCulling/BuildInstanceDrawCommands.usf";
    local_c8 = 0xe0;
    local_100 = (char *)CONCAT44(local_100._4_4_,1);
    uStack_108 = CONCAT44(uStack_108._4_4_,5);
    FUN_140db5666(&DAT_14c9e58a8,0,&DAT_14c9e5840,L"FClearIndirectArgInstanceCountCs");
    _DAT_14c9e58a8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142ccceaa);
    _Init_thread_footer(&DAT_14c9e5950);
    plVar3 = local_b8;
  }
  puVar2 = puVar16 + 2;
  if (*plVar3 == 0) {
    iVar7 = *(int *)(puVar16 + 3) + 0x3f;
    iVar6 = *(int *)(puVar16 + 3) + 0x7e;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    iVar6 = iVar6 >> 6;
    if (DAT_14ca84f24 < iVar6) {
      iVar7 = iVar6 + 0xfe;
      if (-1 < iVar6 + 0x7f) {
        iVar7 = iVar6 + 0x7f;
      }
      iVar7 = iVar7 >> 7;
      iVar6 = 0x80;
    }
    else {
      iVar7 = 1;
    }
    if (DAT_14ca84f28 < iVar7) {
      iVar15 = iVar7 + 0xfe;
      if (-1 < iVar7 + 0x7f) {
        iVar15 = iVar7 + 0x7f;
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar15 >> 7);
      iVar7 = 0x80;
    }
    else {
      local_b0 = CONCAT44(local_b0._4_4_,1);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e6b88) && (FUN_144b3d300(&DAT_14c9e6b88), DAT_14c9e6b88 == -1)) {
      FUN_14603f8e4(&local_78);
      local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffffffffff00);
      local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_100 = "Unknown";
      local_110 = (wchar_t *)0x0;
      uStack_108 = 0;
      local_118 = L"FParameters";
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)CONCAT44(local_f0._4_4_,0x10);
      local_f8 = (code *)CONCAT44(local_f8._4_4_,0x572);
      local_e8 = &local_78;
      FUN_140b49562(&DAT_14c9e6b08,0,1);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf636);
      _Init_thread_footer(&DAT_14c9e6b88);
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_1448f70da(uVar5,&DAT_14c9e6b08,puVar2);
    FUN_140069376(param_1);
    puVar1 = local_a8;
    uVar12 = 2;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar12 = 4;
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar8 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
      local_a0 = puVar2;
      FUN_140023dd8(local_a8,0x1f0);
      puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar8 + 0x3d;
      puVar2 = local_a0;
    }
    *local_a8 = (ulonglong)puVar16;
    uStack_70 = DAT_14c9e6b50;
    if (DAT_14c9e6b50 != 0) {
      LOCK();
      *(int *)(DAT_14c9e6b50 + 8) = *(int *)(DAT_14c9e6b50 + 8) + 1;
      UNLOCK();
    }
    local_68 = &DAT_14c9e6b08;
    local_118 = (wchar_t *)CONCAT71(local_118._1_7_,2);
    local_78 = puVar2;
    FUN_140068f1a(puVar8,&local_90,&local_78,uVar12);
    *puVar8 = &PTR_FUN_14a241270;
    puVar8[0x37] = &DAT_14c9e6b08;
    puVar8[0x38] = puVar2;
    puVar8[0x39] = uVar5;
    puVar8[0x3a] = lVar17;
    *(int *)(puVar8 + 0x3b) = iVar6;
    *(int *)((longlong)puVar8 + 0x1dc) = iVar7;
    *(undefined4 *)(puVar8 + 0x3c) = (undefined4)local_b0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e6b88) && (FUN_144b3d300(&DAT_14c9e6b88), DAT_14c9e6b88 == -1)) {
      FUN_14603f8e4(&local_78);
      local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffffffffff00);
      local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_100 = "Unknown";
      local_110 = (wchar_t *)0x0;
      uStack_108 = 0;
      local_118 = L"FParameters";
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)CONCAT44(local_f0._4_4_,0x10);
      local_f8 = (code *)CONCAT44(local_f8._4_4_,0x572);
      local_e8 = &local_78;
      FUN_140b49562(&DAT_14c9e6b08,0,1);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf636);
      _Init_thread_footer(&DAT_14c9e6b88);
      plVar3 = local_b8;
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_1448f70da(uVar5,&DAT_14c9e6b08,puVar2,&local_78);
    lVar10 = *plVar3;
    local_b0 = plVar3[2];
    plVar3[2] = 0;
    local_60 = plVar3[6];
    lStack_58 = plVar3[7];
    uStack_70 = plVar3[4];
    local_68 = (undefined *)plVar3[5];
    if (lVar10 != 0) {
      *plVar3 = 0;
    }
    FUN_140069376(param_1);
    puVar1 = local_a8;
    uVar12 = 2;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar12 = 4;
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar16 = puVar8 + 0x44;
    if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
      FUN_140023dd8(local_a8,0x230);
      puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar16 = puVar8 + 0x44;
    }
    *local_a8 = (ulonglong)puVar16;
    local_88 = DAT_14c9e6b50;
    if (DAT_14c9e6b50 != 0) {
      LOCK();
      *(int *)(DAT_14c9e6b50 + 8) = *(int *)(DAT_14c9e6b50 + 8) + 1;
      UNLOCK();
    }
    local_80 = &DAT_14c9e6b08;
    local_118 = (wchar_t *)CONCAT71(local_118._1_7_,2);
    local_90 = puVar2;
    FUN_140068f1a(puVar8,&local_91,&local_90,uVar12);
    *puVar8 = &PTR_FUN_14a241250;
    puVar8[0x38] = &DAT_14c9e6b08;
    puVar8[0x39] = puVar2;
    puVar8[0x3a] = uVar5;
    puVar8[0x3b] = lVar17;
    puVar8[0x3c] = lVar10;
    puVar8[0x3e] = local_b0;
    *(undefined4 *)(puVar8 + 0x40) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar8 + 0x204) = uStack_70._4_4_;
    *(undefined4 *)(puVar8 + 0x41) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar8 + 0x20c) = local_68._4_4_;
    puVar8[0x42] = local_60;
    puVar8[0x43] = lStack_58;
  }
  iVar7 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar7 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar7 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar8);
  if (*local_b8 != 0) {
    plVar3 = local_b8 + 4;
    if ((longlong *)local_b8[2] != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8[2];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cc6ac8 FUN_142cc6ac8 body=160 status=ok
// SIG undefined FUN_142cc6ac8(void)

void FUN_142cc6ac8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x160) == '\0') {
    FUN_144756e2c();
    *(undefined1 *)(param_1 + 0x160) = 1;
    if (*(int *)(param_1 + 0x98) != 0) {
      uVar1 = 0;
      do {
        lVar2 = (longlong)(int)uVar1;
        *(undefined4 *)(*(longlong *)(*param_2 + lVar2 * 8) + 0xe8) =
             *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(*(longlong *)(*param_2 + lVar2 * 8) + 0x50) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 8 + lVar2 * 0x38);
        *(undefined4 *)(*(longlong *)(*param_2 + lVar2 * 8) + 0x54) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x18 + lVar2 * 0x38);
        *(undefined4 *)(*(longlong *)(*param_2 + lVar2 * 8) + 0x58) = 1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x98));
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142cc6b68 FUN_142cc6b68 body=25409 status=ok
// SIG undefined FUN_142cc6b68(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x000142cc8acf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined *** FUN_142cc6b68(longlong param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  char cVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined6 uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ulonglong *puVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  undefined8 *puVar32;
  longlong lVar33;
  undefined8 *puVar34;
  bool bVar35;
  undefined1 auStack_428 [32];
  code **local_408;
  code **local_400;
  undefined8 uStack_3f8;
  char *local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e0;
  code **local_3d8;
  undefined1 local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined ***local_3b0;
  ulonglong *local_3a8;
  longlong local_3a0;
  ulonglong local_398;
  undefined8 *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  longlong local_360;
  ulonglong *local_358;
  code *local_350;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  ulonglong local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  int local_2dc;
  longlong local_2d8;
  int *local_2d0;
  undefined8 local_2c8;
  int *local_2c0;
  undefined8 *local_2b8;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined ***local_298;
  undefined8 local_290;
  undefined8 *local_288;
  undefined1 local_279;
  undefined ***local_278;
  undefined8 uStack_270;
  undefined ***local_268;
  undefined4 local_260;
  undefined ***local_258;
  undefined8 uStack_250;
  undefined ***local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  void *local_228;
  ulonglong uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined ***local_208;
  undefined4 local_200;
  undefined ***local_1f8;
  undefined8 uStack_1f0;
  undefined ***local_1e8;
  undefined4 local_1e0;
  undefined **local_1d8;
  void *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  undefined ***local_1c0;
  code *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  code *local_190;
  int local_188;
  undefined4 local_184;
  undefined ***local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined ***pppuStack_120;
  int local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined ***local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined ***pppuStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  iVar21 = (int)param_3[6];
  iVar31 = 1;
  if (1 < iVar21) {
    iVar31 = iVar21;
  }
  uVar20 = iVar31 + 1;
  local_360 = (longlong)*(int *)(param_2 + 0x38c);
  uVar23 = (ulonglong)*(ushort *)(&DAT_14ca85070 + local_360 * 2);
  puVar28 = (ulonglong *)(param_1 + 0x70);
  puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar26 + 0x2e;
  local_330 = (undefined8 *)param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(puVar28,0x180);
    puVar26 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar26 + 0x2e;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  *puVar26 = &PTR_FUN_14a240bf8;
  local_3b0 = (undefined ***)(puVar26 + 1);
  FUN_1400c16e4(local_3b0,uVar23,0,uVar20);
  puVar26[0x28] = param_3;
  plVar14 = (longlong *)(param_1 + 0x98);
  puVar26[0x29] = 0;
  puVar26[0x2a] = 0;
  puVar26[0x2b] = 0;
  puVar26[0x2c] = 0;
  *(undefined1 *)(puVar26 + 0x2d) = 0;
  iVar31 = *(int *)(param_1 + 0xa0);
  uVar7 = iVar31 + 1;
  *(uint *)(param_1 + 0xa0) = uVar7;
  local_380 = param_3;
  if (*(uint *)(param_1 + 0xa4) < uVar7) {
    FUN_1448cfae8(plVar14);
  }
  *(undefined8 **)(*plVar14 + (longlong)iVar31 * 8) = puVar26;
  local_2dc = *(int *)(DAT_14c9e5330 + 4);
  local_228 = (void *)0x0;
  uStack_220 = 0;
  local_338 = (undefined8 *)uVar23;
  if (iVar21 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(0x80000000);
  }
  local_358 = puVar26 + 0x29;
  uStack_220 = (ulonglong)uVar20;
  uVar23 = 0;
  FUN_141765bae(&local_228);
  memset(local_228,0,(longlong)(int)uVar20 << 3);
  local_328 = (ulonglong)uVar20;
  do {
    puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar32 + 0x22;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8();
      puVar32 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar32 + 0x22;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    *puVar32 = &PTR_FUN_14a240b98;
    puVar32[2] = 0;
    puVar32[3] = 0;
    puVar32[4] = 0;
    puVar32[5] = 0;
    puVar32[10] = 0;
    puVar32[0xb] = 0;
    puVar32[0xe] = 0;
    puVar32[0xf] = 0;
    puVar32[0x10] = 0;
    puVar32[0x11] = 0;
    puVar32[0x12] = 0;
    puVar32[0x13] = 0;
    puVar32[0x14] = 0;
    puVar32[0x15] = 0;
    puVar32[0x16] = 0;
    puVar32[0x17] = 0;
    puVar32[0x18] = 0;
    puVar32[0x19] = 0;
    puVar32[0x1a] = 0;
    puVar32[0x1b] = 0;
    puVar32[0x1c] = 0;
    puVar32[0x1d] = 0;
    iVar21 = *(int *)(param_1 + 0xa0);
    uVar20 = iVar21 + 1;
    *(uint *)(param_1 + 0xa0) = uVar20;
    if (*(uint *)(param_1 + 0xa4) < uVar20) {
      FUN_1448cfae8();
    }
    pvVar3 = local_228;
    *(undefined8 **)(*plVar14 + (longlong)iVar21 * 8) = puVar32;
    *(undefined8 **)((longlong)local_228 + uVar23 * 8) = puVar32 + 2;
    uVar23 = uVar23 + 1;
  } while (local_328 != uVar23);
  iVar21 = 0;
  local_3a8 = puVar28;
  local_378 = plVar14;
  local_370 = puVar26;
  if ((DAT_14c760434 == 0) || (uVar23 = 0, (&DAT_14ca814b8)[(longlong)local_338 * 0xf] == 1)) {
    uVar12 = 0;
    puVar26 = (undefined8 *)0x0;
    local_318 = 0;
    local_300 = (undefined8 *)0x0;
    local_310 = 0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    local_1f8 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_1f0._0_4_ = (int)uStack_220;
    if (lVar33 == 0) {
      uVar8 = 0;
      iVar31 = 0;
    }
    else {
      FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
      memcpy(local_1f8,pvVar3,lVar33 << 3);
      uVar23 = uStack_220 & 0xffffffff;
      iVar31 = (int)uStack_1f0;
      uVar8 = uStack_1f0._4_4_;
    }
    uStack_a0 = local_1f8;
    pvVar3 = local_228;
    local_1e8 = local_3b0;
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_FUN_14a240c40;
    local_1f8 = (undefined ***)0x0;
    uStack_1f0 = 0;
    local_98 = (undefined ***)CONCAT44(uVar8,iVar31);
    uStack_90 = local_3b0;
    local_c8 = FUN_142cd471c;
    local_258 = (undefined ***)0x0;
    iVar31 = (int)uVar23;
    if (iVar31 == 0) {
      iVar31 = 0;
      uStack_d4 = 0;
      local_d8 = 0;
    }
    else {
      uStack_250._0_4_ = iVar31;
      FUN_144aae0d2(&local_258,uVar23);
      memcpy(local_258,pvVar3,(longlong)iVar31 << 3);
      local_d8 = (int)uStack_250;
      uStack_d4 = uStack_250._4_4_;
      iVar31 = (int)uStack_220;
    }
    pvVar3 = local_228;
    uStack_e0 = local_258;
    local_248 = local_3b0;
    local_f8 = (undefined ***)0x0;
    local_e8 = &PTR_FUN_14a240c20;
    local_258 = (undefined ***)0x0;
    uStack_250 = 0;
    pppuStack_d0 = local_3b0;
    local_108 = FUN_142cd45bc;
    local_278 = (undefined ***)0x0;
    local_118 = 0;
    uStack_114 = 0;
    if (iVar31 != 0) {
      uStack_270._0_4_ = iVar31;
      FUN_144aae0d2(&local_278,iVar31);
      memcpy(local_278,pvVar3,(longlong)iVar31 << 3);
      local_118 = (int)uStack_270;
      uStack_114 = uStack_270._4_4_;
    }
    pppuStack_120 = local_278;
    local_268 = local_3b0;
    local_138 = (undefined ***)0x0;
    local_128 = &PTR_FUN_14a240c00;
    local_278 = (undefined ***)0x0;
    uStack_270 = 0;
    uStack_110 = local_3b0;
    local_148 = FUN_142cd445e;
    local_400 = &local_c8;
    local_408 = &local_108;
    lVar33 = FUN_144ada887(param_1,L"InstanceCulling.DrawCommandCompactionData",0x14);
    cVar2 = *(char *)(lVar33 + 0x68);
    puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar26 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(puVar28);
      puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar26 + 9;
    }
    lVar27 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar26[1] = *(undefined8 *)(lVar33 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar26 + 5) = cVar2 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar26 + 0x29) = (undefined2)local_218;
    *(undefined1 *)((longlong)puVar26 + 0x2b) = local_218._2_1_;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = lVar33;
    iVar31 = *(int *)(param_1 + 0x1a0);
    uVar20 = iVar31 + 1;
    *(uint *)(param_1 + 0x1a0) = uVar20;
    if (*(uint *)(param_1 + 0x1a4) < uVar20) {
      FUN_1447568fc(lVar27);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    if (local_148 != (code *)0x0) {
      plVar14 = (longlong *)local_138;
      if (local_138 == (undefined ***)0x0) {
        plVar14 = &local_128;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_278 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != (code *)0x0) {
      pppuVar16 = local_f8;
      if (local_f8 == (undefined ***)0x0) {
        pppuVar16 = &local_e8;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    local_388 = (longlong *)lVar27;
    if (local_258 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar16 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar16 = (undefined ***)&local_a8;
      }
      (**(code **)((longlong)*pppuVar16 + 0x10))();
    }
    local_368 = puVar26;
    if (local_1f8 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    pvVar3 = local_228;
    local_1f8 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uVar23 = 0;
    uStack_1f0._0_4_ = (int)uStack_220;
    if (lVar33 == 0) {
      iVar30 = 0;
      uVar8 = 0;
      iVar31 = 0;
    }
    else {
      FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
      memcpy(local_1f8,pvVar3,lVar33 << 3);
      iVar31 = (int)uStack_1f0;
      uVar8 = uStack_1f0._4_4_;
      iVar30 = (int)uStack_220;
    }
    uStack_a0 = local_1f8;
    pvVar3 = local_228;
    local_1e8 = local_3b0;
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_FUN_14a240ca0;
    local_1f8 = (undefined ***)0x0;
    uStack_1f0 = 0;
    local_98 = (undefined ***)CONCAT44(uVar8,iVar31);
    uStack_90 = local_3b0;
    local_c8 = FUN_142cd4b3e;
    local_258 = (undefined ***)0x0;
    if (iVar30 == 0) {
      uStack_d4 = 0;
      local_d8 = 0;
    }
    else {
      uStack_250._0_4_ = iVar30;
      FUN_144aae0d2(&local_258,iVar30);
      memcpy(local_258,pvVar3,(longlong)iVar30 << 3);
      uVar23 = uStack_220 & 0xffffffff;
      local_d8 = (int)uStack_250;
      uStack_d4 = uStack_250._4_4_;
    }
    pvVar3 = local_228;
    uStack_e0 = local_258;
    local_248 = local_3b0;
    local_f8 = (undefined ***)0x0;
    local_e8 = &PTR_FUN_14a240c80;
    local_258 = (undefined ***)0x0;
    uStack_250 = 0;
    pppuStack_d0 = local_3b0;
    local_108 = FUN_142cd49ec;
    local_278 = (undefined ***)0x0;
    iVar30 = (int)uVar23;
    iVar31 = 0;
    uVar8 = 0;
    if (iVar30 != 0) {
      uStack_270._0_4_ = iVar30;
      FUN_144aae0d2(&local_278,uVar23);
      memcpy(local_278,pvVar3,(longlong)iVar30 << 3);
      iVar31 = (int)uStack_270;
      uVar8 = uStack_270._4_4_;
    }
    pppuStack_120 = local_278;
    local_268 = local_3b0;
    local_138 = (undefined ***)0x0;
    local_128 = &PTR_FUN_14a240c60;
    local_278 = (undefined ***)0x0;
    uStack_270 = 0;
    uStack_110 = local_3b0;
    local_148 = FUN_142cd4880;
    local_400 = &local_c8;
    local_408 = &local_108;
    local_118 = iVar31;
    uStack_114 = uVar8;
    lVar33 = FUN_144ada887(param_1,L"InstanceCulling.Compaction.TempInstanceIdsBuffer",4,&local_148)
    ;
    if (local_148 != (code *)0x0) {
      plVar14 = (longlong *)local_138;
      if (local_138 == (undefined ***)0x0) {
        plVar14 = &local_128;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_278 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != (code *)0x0) {
      pppuVar16 = local_f8;
      if (local_f8 == (undefined ***)0x0) {
        pppuVar16 = &local_e8;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    if (local_258 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar16 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar16 = (undefined ***)&local_a8;
      }
      (**(code **)((longlong)*pppuVar16 + 0x10))();
    }
    if (local_1f8 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    puVar28 = local_3a8;
    cVar2 = *(char *)(lVar33 + 0x68);
    local_300 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = local_300 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_3a8);
      local_300 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar11 = local_300 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    local_300[1] = *(undefined8 *)(lVar33 + 8);
    local_300[2] = 0;
    *(undefined1 *)(local_300 + 3) = 2;
    *(undefined8 *)((longlong)local_300 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_300 + 5) = 0;
    *local_300 = &PTR_FUN_14a1fb3e8;
    *(byte *)(local_300 + 6) = cVar2 >> 7 & 0x1c;
    *(undefined2 *)((longlong)local_300 + 0x31) = 0;
    local_300[7] = lVar33;
    iVar31 = *(int *)(param_1 + 0x1a0);
    uVar20 = iVar31 + 1;
    *(uint *)(param_1 + 0x1a0) = uVar20;
    local_310 = lVar33;
    if (*(uint *)(param_1 + 0x1a4) < uVar20) {
      FUN_1447568fc();
    }
    pvVar3 = local_228;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = local_300;
    *(int *)((longlong)local_300 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_1f8 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uVar23 = 0;
    uStack_1f0._0_4_ = (int)uStack_220;
    if (lVar33 == 0) {
      iVar30 = 0;
      uVar8 = 0;
      iVar31 = 0;
    }
    else {
      FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
      memcpy(local_1f8,pvVar3,lVar33 << 3);
      iVar31 = (int)uStack_1f0;
      uVar8 = uStack_1f0._4_4_;
      iVar30 = (int)uStack_220;
    }
    uStack_a0 = local_1f8;
    pvVar3 = local_228;
    local_1e8 = local_3b0;
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_FUN_14a240d00;
    local_1f8 = (undefined ***)0x0;
    uStack_1f0 = 0;
    local_98 = (undefined ***)CONCAT44(uVar8,iVar31);
    uStack_90 = local_3b0;
    local_c8 = FUN_142cd4f4e;
    local_258 = (undefined ***)0x0;
    if (iVar30 == 0) {
      uStack_d4 = 0;
      local_d8 = 0;
    }
    else {
      uStack_250._0_4_ = iVar30;
      FUN_144aae0d2(&local_258,iVar30);
      memcpy(local_258,pvVar3,(longlong)iVar30 << 3);
      uVar23 = uStack_220 & 0xffffffff;
      local_d8 = (int)uStack_250;
      uStack_d4 = uStack_250._4_4_;
    }
    pvVar3 = local_228;
    uStack_e0 = local_258;
    local_248 = local_3b0;
    local_f8 = (undefined ***)0x0;
    local_e8 = &PTR_FUN_14a240ce0;
    local_258 = (undefined ***)0x0;
    uStack_250 = 0;
    pppuStack_d0 = local_3b0;
    local_108 = FUN_142cd4dfc;
    local_278 = (undefined ***)0x0;
    iVar30 = (int)uVar23;
    iVar31 = 0;
    uVar8 = 0;
    if (iVar30 != 0) {
      uStack_270._0_4_ = iVar30;
      FUN_144aae0d2(&local_278,uVar23);
      memcpy(local_278,pvVar3,(longlong)iVar30 << 3);
      iVar31 = (int)uStack_270;
      uVar8 = uStack_270._4_4_;
    }
    pppuStack_120 = local_278;
    local_268 = local_3b0;
    local_138 = (undefined ***)0x0;
    local_128 = &PTR_FUN_14a240cc0;
    local_278 = (undefined ***)0x0;
    uStack_270 = 0;
    uStack_110 = local_3b0;
    local_148 = FUN_142cd4c90;
    local_400 = &local_c8;
    local_408 = &local_108;
    local_118 = iVar31;
    uStack_114 = uVar8;
    lVar33 = FUN_144ada887(param_1,L"InstanceCulling.Compaction.BlockInstanceCounts",4,&local_148);
    if (local_148 != (code *)0x0) {
      plVar14 = &local_128;
      if (local_138 != (undefined ***)0x0) {
        plVar14 = (longlong *)local_138;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_278 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != (code *)0x0) {
      pppuVar16 = &local_e8;
      if (local_f8 != (undefined ***)0x0) {
        pppuVar16 = local_f8;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    if (local_258 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar16 = (undefined ***)&local_a8;
      if (local_b8 != (undefined ***)0x0) {
        pppuVar16 = local_b8;
      }
      (**(code **)((longlong)*pppuVar16 + 0x10))(pppuVar16);
    }
    if (local_1f8 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    puVar28 = local_3a8;
    uVar23 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),*(char *)(lVar33 + 0x68) >> 7) &
             0xffffffffffffff1c;
    puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar26 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_3a8,0x48);
      puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar26 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar26[1] = *(undefined8 *)(lVar33 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 2;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb3e8;
    *(char *)(puVar26 + 6) = (char)uVar23;
    *(undefined2 *)((longlong)puVar26 + 0x31) = 0;
    puVar26[7] = lVar33;
    iVar31 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar31 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar31 + 1U) {
      FUN_1447568fc(local_388,iVar31);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_318 = lVar33;
    FUN_1405bfba3(param_1,puVar26,0,2);
    uVar12 = CONCAT71((int7)(uVar23 >> 8),1);
    puVar11 = local_368;
  }
  pvVar3 = local_228;
  local_1f8 = (undefined ***)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uStack_1f0._0_4_ = (int)uStack_220;
  if (lVar33 == 0) {
    uVar8 = 0;
    iVar31 = 0;
  }
  else {
    FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
    memcpy(local_1f8,pvVar3,lVar33 << 3);
    iVar31 = (int)uStack_1f0;
    uVar8 = uStack_1f0._4_4_;
    iVar21 = (int)uStack_220;
  }
  uStack_a0 = local_1f8;
  pvVar3 = local_228;
  local_1e8 = local_3b0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_FUN_14a240d60;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  local_98 = (undefined ***)CONCAT44(uVar8,iVar31);
  uStack_90 = local_3b0;
  local_c8 = FUN_142cd535e;
  local_258 = (undefined ***)0x0;
  if (iVar21 == 0) {
    iVar21 = 0;
    uStack_d4 = 0;
    local_d8 = 0;
  }
  else {
    uStack_250._0_4_ = iVar21;
    FUN_144aae0d2(&local_258,iVar21);
    memcpy(local_258,pvVar3,(longlong)iVar21 << 3);
    local_d8 = (int)uStack_250;
    uStack_d4 = uStack_250._4_4_;
    iVar21 = (int)uStack_220;
  }
  pvVar3 = local_228;
  uStack_e0 = local_258;
  local_248 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240d40;
  local_258 = (undefined ***)0x0;
  uStack_250 = 0;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd51fe;
  local_278 = (undefined ***)0x0;
  iVar31 = 0;
  uVar8 = 0;
  if (iVar21 != 0) {
    uStack_270._0_4_ = iVar21;
    FUN_144aae0d2(&local_278,iVar21);
    memcpy(local_278,pvVar3,(longlong)iVar21 << 3);
    iVar31 = (int)uStack_270;
    uVar8 = uStack_270._4_4_;
  }
  pppuStack_120 = local_278;
  local_268 = local_3b0;
  local_138 = (undefined ***)0x0;
  local_128 = &PTR_FUN_14a240d20;
  local_278 = (undefined ***)0x0;
  uStack_270 = 0;
  uStack_110 = local_3b0;
  local_148 = FUN_142cd50a0;
  local_400 = &local_c8;
  local_408 = &local_108;
  local_118 = iVar31;
  uStack_114 = uVar8;
  lVar33 = FUN_144ada887(param_1,L"InstanceCulling.DrawCommandDescs",4,&local_148);
  if (local_148 != (code *)0x0) {
    plVar14 = (longlong *)local_138;
    if (local_138 == (undefined ***)0x0) {
      plVar14 = &local_128;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_278 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_258 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar16 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar16 = (undefined ***)&local_a8;
    }
    (**(code **)((longlong)*pppuVar16 + 0x10))();
  }
  local_340 = (undefined8 *)lVar33;
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_1f8 = (undefined ***)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uVar23 = 0;
  uStack_1f0._0_4_ = (int)uStack_220;
  local_368 = puVar11;
  local_2c8 = uVar12;
  local_288 = puVar26;
  if (lVar33 == 0) {
    iVar31 = 0;
    uVar8 = 0;
    iVar21 = 0;
  }
  else {
    FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
    memcpy(local_1f8,pvVar3,lVar33 << 3);
    iVar21 = (int)uStack_1f0;
    uVar8 = uStack_1f0._4_4_;
    iVar31 = (int)uStack_220;
  }
  uStack_a0 = local_1f8;
  pvVar3 = local_228;
  local_1e8 = local_3b0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_FUN_14a240dc0;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  local_98 = (undefined ***)CONCAT44(uVar8,iVar21);
  uStack_90 = local_3b0;
  local_c8 = FUN_142cd577e;
  local_258 = (undefined ***)0x0;
  if (iVar31 == 0) {
    uStack_d4 = 0;
    local_d8 = 0;
  }
  else {
    uStack_250._0_4_ = iVar31;
    FUN_144aae0d2(&local_258,iVar31);
    memcpy(local_258,pvVar3,(longlong)iVar31 << 3);
    uVar23 = uStack_220 & 0xffffffff;
    local_d8 = (int)uStack_250;
    uStack_d4 = uStack_250._4_4_;
  }
  pvVar3 = local_228;
  uStack_e0 = local_258;
  local_248 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240da0;
  local_258 = (undefined ***)0x0;
  uStack_250 = 0;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd561e;
  local_278 = (undefined ***)0x0;
  iVar31 = (int)uVar23;
  iVar21 = 0;
  uVar8 = 0;
  if (iVar31 != 0) {
    uStack_270._0_4_ = iVar31;
    FUN_144aae0d2(&local_278,uVar23);
    memcpy(local_278,pvVar3,(longlong)iVar31 << 3);
    iVar21 = (int)uStack_270;
    uVar8 = uStack_270._4_4_;
  }
  pppuStack_120 = local_278;
  local_268 = local_3b0;
  local_138 = (undefined ***)0x0;
  local_128 = &PTR_FUN_14a240d80;
  local_278 = (undefined ***)0x0;
  uStack_270 = 0;
  uStack_110 = local_3b0;
  local_148 = FUN_142cd54c0;
  local_400 = &local_c8;
  local_408 = &local_108;
  local_118 = iVar21;
  uStack_114 = uVar8;
  lVar33 = FUN_144ada887(param_1,L"InstanceCulling.PayloadData",0x10,&local_148);
  if (local_148 != (code *)0x0) {
    plVar14 = (longlong *)local_138;
    if (local_138 == (undefined ***)0x0) {
      plVar14 = &local_128;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_278 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_258 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar16 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar16 = (undefined ***)&local_a8;
    }
    (**(code **)((longlong)*pppuVar16 + 0x10))();
  }
  local_348 = (undefined8 *)lVar33;
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_1f8 = (undefined ***)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uVar23 = 0;
  uStack_1f0._0_4_ = (int)uStack_220;
  if (lVar33 == 0) {
    iVar31 = 0;
    uVar8 = 0;
    iVar21 = 0;
  }
  else {
    FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
    memcpy(local_1f8,pvVar3,lVar33 << 3);
    iVar21 = (int)uStack_1f0;
    uVar8 = uStack_1f0._4_4_;
    iVar31 = (int)uStack_220;
  }
  uStack_a0 = local_1f8;
  pvVar3 = local_228;
  local_1e8 = local_3b0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_FUN_14a240e20;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  local_98 = (undefined ***)CONCAT44(uVar8,iVar21);
  uStack_90 = local_3b0;
  local_c8 = FUN_142cd5b9e;
  local_258 = (undefined ***)0x0;
  if (iVar31 == 0) {
    uStack_d4 = 0;
    local_d8 = 0;
  }
  else {
    uStack_250._0_4_ = iVar31;
    FUN_144aae0d2(&local_258,iVar31);
    memcpy(local_258,pvVar3,(longlong)iVar31 << 3);
    uVar23 = uStack_220 & 0xffffffff;
    local_d8 = (int)uStack_250;
    uStack_d4 = uStack_250._4_4_;
  }
  pvVar3 = local_228;
  uStack_e0 = local_258;
  local_248 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240e00;
  local_258 = (undefined ***)0x0;
  uStack_250 = 0;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd5a3e;
  local_278 = (undefined ***)0x0;
  iVar31 = (int)uVar23;
  iVar21 = 0;
  uVar8 = 0;
  if (iVar31 != 0) {
    uStack_270._0_4_ = iVar31;
    FUN_144aae0d2(&local_278,uVar23);
    memcpy(local_278,pvVar3,(longlong)iVar31 << 3);
    iVar21 = (int)uStack_270;
    uVar8 = uStack_270._4_4_;
  }
  pppuStack_120 = local_278;
  local_268 = local_3b0;
  local_138 = (undefined ***)0x0;
  local_128 = &PTR_FUN_14a240de0;
  local_278 = (undefined ***)0x0;
  uStack_270 = 0;
  uStack_110 = local_3b0;
  local_148 = FUN_142cd58e0;
  local_400 = &local_c8;
  local_408 = &local_108;
  local_118 = iVar21;
  uStack_114 = uVar8;
  lVar33 = FUN_144ada887(param_1,L"InstanceCulling.ViewIds",4,&local_148);
  if (local_148 != (code *)0x0) {
    plVar14 = (longlong *)local_138;
    if (local_138 == (undefined ***)0x0) {
      plVar14 = &local_128;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_278 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_258 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar16 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar16 = (undefined ***)&local_a8;
    }
    (**(code **)((longlong)*pppuVar16 + 0x10))();
  }
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_1f8 = (undefined ***)0x0;
  lVar27 = (longlong)(int)uStack_220;
  uVar23 = 0;
  uStack_1f0._0_4_ = (int)uStack_220;
  local_308 = (undefined8 *)lVar33;
  if (lVar27 == 0) {
    iVar31 = 0;
    uVar8 = 0;
    iVar21 = 0;
  }
  else {
    FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
    memcpy(local_1f8,pvVar3,lVar27 << 3);
    iVar21 = (int)uStack_1f0;
    uVar8 = uStack_1f0._4_4_;
    iVar31 = (int)uStack_220;
  }
  uStack_a0 = local_1f8;
  pvVar3 = local_228;
  puVar28 = local_3a8;
  local_1e8 = local_3b0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_FUN_14a240e80;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  local_98 = (undefined ***)CONCAT44(uVar8,iVar21);
  uStack_90 = local_3b0;
  local_c8 = FUN_142cd5fc4;
  local_258 = (undefined ***)0x0;
  if (iVar31 == 0) {
    uStack_d4 = 0;
    local_d8 = 0;
  }
  else {
    uStack_250._0_4_ = iVar31;
    FUN_144aae0d2(&local_258,iVar31);
    memcpy(local_258,pvVar3,(longlong)iVar31 << 3);
    uVar23 = uStack_220 & 0xffffffff;
    local_d8 = (int)uStack_250;
    uStack_d4 = uStack_250._4_4_;
  }
  pvVar3 = local_228;
  uStack_e0 = local_258;
  local_248 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240e60;
  local_258 = (undefined ***)0x0;
  uStack_250 = 0;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd5e62;
  local_278 = (undefined ***)0x0;
  iVar31 = (int)uVar23;
  iVar21 = 0;
  uVar8 = 0;
  if (iVar31 != 0) {
    uStack_270._0_4_ = iVar31;
    FUN_144aae0d2(&local_278,uVar23);
    memcpy(local_278,pvVar3,(longlong)iVar31 << 3);
    iVar21 = (int)uStack_270;
    uVar8 = uStack_270._4_4_;
  }
  pppuStack_120 = local_278;
  local_268 = local_3b0;
  local_138 = (undefined ***)0x0;
  local_128 = &PTR_FUN_14a240e40;
  local_278 = (undefined ***)0x0;
  uStack_270 = 0;
  uStack_110 = local_3b0;
  local_148 = FUN_142cd5d00;
  local_400 = &local_c8;
  local_408 = &local_108;
  local_118 = iVar21;
  uStack_114 = uVar8;
  lVar33 = FUN_144ada887(param_1,L"InstanceCulling.BatchInfos",0x28,&local_148);
  if (local_148 != (code *)0x0) {
    plVar14 = (longlong *)local_138;
    if (local_138 == (undefined ***)0x0) {
      plVar14 = &local_128;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_278 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_258 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar16 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar16 = (undefined ***)&local_a8;
    }
    (**(code **)((longlong)*pppuVar16 + 0x10))();
  }
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_1f8 = (undefined ***)0x0;
  lVar27 = (longlong)(int)uStack_220;
  uStack_1f0._0_4_ = (int)uStack_220;
  local_390 = (undefined8 *)lVar33;
  if (lVar27 == 0) {
    uStack_d4 = 0;
    local_d8 = 0;
  }
  else {
    FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
    memcpy(local_1f8,pvVar3,lVar27 << 3);
    local_d8 = (int)uStack_1f0;
    uStack_d4 = uStack_1f0._4_4_;
  }
  uStack_e0 = local_1f8;
  local_1e8 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240ea0;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd612c;
  local_148 = (code *)&DAT_100000004;
  uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,0x4189);
  local_138 = (undefined ***)0x0;
  uVar22 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar23 = uVar22 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
    FUN_140023dd8(puVar28,0x160);
    uVar22 = *puVar28 + 0xf & 0xfffffffffffffff0;
    uVar23 = uVar22 + 0x150;
  }
  local_350 = (code *)(param_1 + 0x188);
  *(ulonglong *)(param_1 + 0x70) = uVar23;
  FUN_1456bd266(uVar22,L"InstanceCulling.DrawIndirectArgsBuffer",&local_148,0);
  local_c8 = *(code **)(uVar22 + 0xf0);
  uStack_c0 = *(undefined ****)(uVar22 + 0xf8);
  local_b8 = *(undefined ****)(uVar22 + 0x100);
  uStack_b0 = *(undefined8 *)(uVar22 + 0x108);
  local_a8 = *(undefined ***)(uVar22 + 0x110);
  uStack_a0 = *(undefined ****)(uVar22 + 0x118);
  local_98 = *(undefined ****)(uVar22 + 0x120);
  uStack_90 = *(undefined ****)(uVar22 + 0x128);
  uVar6 = local_98;
  uVar5 = uStack_b0;
  uVar12 = uStack_c0;
  *(ulonglong *)(uVar22 + 0x120) = CONCAT44(uStack_d4,local_d8);
  *(undefined ****)(uVar22 + 0x128) = pppuStack_d0;
  *(undefined ***)(uVar22 + 0x110) = local_e8;
  *(undefined ****)(uVar22 + 0x118) = uStack_e0;
  *(undefined ****)(uVar22 + 0x100) = local_f8;
  *(ulonglong *)(uVar22 + 0x108) = CONCAT44(uStack_ec,uStack_f0);
  *(code **)(uVar22 + 0xf0) = local_108;
  *(ulonglong *)(uVar22 + 0xf8) = CONCAT44(uStack_fc,uStack_100);
  uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  pppuStack_d0 = uStack_90;
  local_e8 = local_a8;
  uStack_e0 = uStack_a0;
  local_f8 = local_b8;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = (int)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  iVar21 = *(int *)(param_1 + 400);
  uVar20 = iVar21 + 1;
  *(uint *)(param_1 + 400) = uVar20;
  uStack_c0 = (undefined ***)uVar12;
  uStack_b0 = uVar5;
  local_98 = (undefined ***)uVar6;
  if (*(uint *)(param_1 + 0x194) < uVar20) {
    FUN_144737178(local_350);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar22;
  *(int *)(uVar22 + 0x7c) = *(int *)(param_1 + 400) + -1;
  plVar14 = (longlong *)(param_1 + 0x2c8);
  iVar21 = *(int *)(param_1 + 0x2d0);
  uVar20 = iVar21 + 1;
  *(uint *)(param_1 + 0x2d0) = uVar20;
  if (*(uint *)(param_1 + 0x2d4) < uVar20) {
    FUN_144737178(plVar14);
  }
  *(ulonglong *)(*plVar14 + (longlong)iVar21 * 8) = uVar22;
  *local_358 = uVar22;
  if (local_108 != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  local_388 = plVar14;
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_148 = (void *)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uStack_140._0_4_ = (int)uStack_220;
  if (lVar33 == 0) {
    iVar31 = 0;
    uVar8 = 0;
    iVar21 = 0;
  }
  else {
    FUN_144aae0d2(&local_148,uStack_220 & 0xffffffff);
    memcpy(local_148,pvVar3,lVar33 << 3);
    iVar21 = (int)uStack_140;
    uVar8 = uStack_140._4_4_;
    iVar31 = (int)uStack_220;
  }
  pvVar3 = local_228;
  local_138 = local_3b0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_FUN_14a240ee0;
  uStack_a0 = (undefined ***)local_148;
  local_148 = (code *)0x0;
  uStack_140 = (undefined **)0x0;
  local_98 = (undefined ***)CONCAT44(uVar8,iVar21);
  uStack_90 = local_3b0;
  local_c8 = FUN_142cd63ee;
  local_1f8 = (undefined ***)0x0;
  iVar21 = 0;
  uVar8 = 0;
  if (iVar31 != 0) {
    uStack_1f0._0_4_ = iVar31;
    FUN_144aae0d2(&local_1f8,iVar31);
    memcpy(local_1f8,pvVar3,(longlong)iVar31 << 3);
    iVar21 = (int)uStack_1f0;
    uVar8 = uStack_1f0._4_4_;
  }
  local_1e8 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240ec0;
  uStack_e0 = local_1f8;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  local_d8 = iVar21;
  uStack_d4 = uVar8;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd628e;
  uVar23 = *local_358;
  plVar14 = (longlong *)(param_1 + 0x588);
  iVar21 = *(int *)(param_1 + 0x590);
  *(uint *)(param_1 + 0x590) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x594) < iVar21 + 1U) {
    FUN_144775ac8(plVar14,iVar21);
  }
  lVar27 = *plVar14;
  lVar17 = (longlong)iVar21 * 0x120;
  lVar33 = lVar27 + lVar17;
  *(undefined2 *)(lVar27 + lVar17) = 1;
  *(ulonglong *)(lVar27 + 8 + lVar17) = uVar23;
  puVar11 = (undefined8 *)(lVar27 + 0x10 + lVar17);
  *puVar11 = 0;
  puVar11[1] = 0;
  *(code **)(lVar27 + 0x20 + lVar17) = local_108;
  *(undefined ****)(lVar27 + 0x30 + lVar17) = local_f8;
  local_f8 = (undefined ***)0x0;
  puVar11 = (undefined8 *)(lVar27 + 0x50 + lVar17);
  *puVar11 = CONCAT44(uStack_d4,local_d8);
  puVar11[1] = pppuStack_d0;
  puVar11 = (undefined8 *)(lVar27 + 0x40 + lVar17);
  *puVar11 = local_e8;
  puVar11[1] = uStack_e0;
  if (*(longlong *)(lVar27 + 0x20 + lVar17) != 0) {
    local_108 = (code *)0x0;
  }
  *(code **)(lVar33 + 0x60) = local_c8;
  *(undefined ****)(lVar33 + 0x70) = local_b8;
  local_b8 = (undefined ***)0x0;
  *(undefined4 *)(lVar33 + 0x90) = (undefined4)local_98;
  *(undefined4 *)(lVar33 + 0x94) = local_98._4_4_;
  *(undefined4 *)(lVar33 + 0x98) = (undefined4)uStack_90;
  *(undefined4 *)(lVar33 + 0x9c) = uStack_90._4_4_;
  *(undefined4 *)(lVar33 + 0x80) = (undefined4)local_a8;
  *(undefined4 *)(lVar33 + 0x84) = local_a8._4_4_;
  *(undefined4 *)(lVar33 + 0x88) = (undefined4)uStack_a0;
  *(undefined4 *)(lVar33 + 0x8c) = uStack_a0._4_4_;
  if (*(longlong *)(lVar33 + 0x60) != 0) {
    local_c8 = (code *)0x0;
  }
  *(undefined8 *)(lVar33 + 0xa0) = 0;
  *(undefined8 *)(lVar33 + 0xb0) = 0;
  *(undefined8 *)(lVar33 + 0xe0) = 0;
  *(undefined8 *)(lVar33 + 0xf0) = 0;
  pbVar1 = (byte *)(uVar23 + 0x24);
  *pbVar1 = *pbVar1 | 0x80;
  if (local_108 != (code *)0x0) {
    (*(code *)local_e8[2])();
  }
  plVar15 = local_388;
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar16 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar16 = (undefined ***)&local_a8;
    }
    (**(code **)((longlong)*pppuVar16 + 0x10))();
  }
  if (local_148 != (code *)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_360 = *(longlong *)
               (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_360 * 2) * 8);
  local_c8 = (code *)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uStack_c0._0_4_ = (int)uStack_220;
  if (lVar33 == 0) {
    local_184 = 0;
    local_188 = 0;
  }
  else {
    FUN_144aae0d2(&local_c8,uStack_220 & 0xffffffff);
    memcpy(local_c8,pvVar3,lVar33 << 3);
    local_188 = (int)uStack_c0;
    local_184 = uStack_c0._4_4_;
  }
  local_190 = local_c8;
  local_b8 = local_3b0;
  local_1a8 = 0;
  local_198 = &PTR_FUN_14a240f00;
  local_c8 = (code *)0x0;
  uStack_c0 = (undefined ***)0x0;
  local_180 = local_3b0;
  local_1b8 = FUN_142cd6554;
  FUN_142cc5c1e(param_1);
  if (local_c8 != (code *)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_1f8 = (undefined ***)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uStack_1f0._0_4_ = (int)uStack_220;
  if (lVar33 == 0) {
    uStack_d4 = 0;
    local_d8 = 0;
  }
  else {
    FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
    memcpy(local_1f8,pvVar3,lVar33 << 3);
    local_d8 = (int)uStack_1f0;
    uStack_d4 = uStack_1f0._4_4_;
  }
  uStack_e0 = local_1f8;
  puVar28 = local_3a8;
  local_1e8 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240f20;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd66b2;
  local_148 = (code *)&DAT_100000004;
  uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,0x4109);
  local_138 = (undefined ***)0x0;
  uVar22 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar23 = uVar22 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
    FUN_140023dd8(local_3a8,0x160);
    uVar22 = *puVar28 + 0xf & 0xfffffffffffffff0;
    uVar23 = uVar22 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar23;
  FUN_1456bd266(uVar22,L"InstanceCulling.InstanceIdOffsetBuffer",&local_148,0);
  local_c8 = *(code **)(uVar22 + 0xf0);
  uStack_c0 = *(undefined ****)(uVar22 + 0xf8);
  local_b8 = *(undefined ****)(uVar22 + 0x100);
  uStack_b0 = *(undefined8 *)(uVar22 + 0x108);
  local_a8 = *(undefined ***)(uVar22 + 0x110);
  uStack_a0 = *(undefined ****)(uVar22 + 0x118);
  local_98 = *(undefined ****)(uVar22 + 0x120);
  uStack_90 = *(undefined ****)(uVar22 + 0x128);
  uVar6 = local_98;
  uVar5 = uStack_b0;
  uVar12 = uStack_c0;
  *(ulonglong *)(uVar22 + 0x120) = CONCAT44(uStack_d4,local_d8);
  *(undefined ****)(uVar22 + 0x128) = pppuStack_d0;
  *(undefined ***)(uVar22 + 0x110) = local_e8;
  *(undefined ****)(uVar22 + 0x118) = uStack_e0;
  *(undefined ****)(uVar22 + 0x100) = local_f8;
  *(ulonglong *)(uVar22 + 0x108) = CONCAT44(uStack_ec,uStack_f0);
  *(code **)(uVar22 + 0xf0) = local_108;
  *(ulonglong *)(uVar22 + 0xf8) = CONCAT44(uStack_fc,uStack_100);
  uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  pppuStack_d0 = uStack_90;
  local_e8 = local_a8;
  uStack_e0 = uStack_a0;
  local_f8 = local_b8;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = (int)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  iVar21 = *(int *)(param_1 + 400);
  uVar20 = iVar21 + 1;
  *(uint *)(param_1 + 400) = uVar20;
  uStack_c0 = (undefined ***)uVar12;
  uStack_b0 = uVar5;
  local_98 = (undefined ***)uVar6;
  if (*(uint *)(param_1 + 0x194) < uVar20) {
    FUN_144737178(local_350);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar22;
  *(int *)(uVar22 + 0x7c) = *(int *)(param_1 + 400) + -1;
  iVar21 = *(int *)(param_1 + 0x2d0);
  uVar20 = iVar21 + 1;
  *(uint *)(param_1 + 0x2d0) = uVar20;
  if (*(uint *)(param_1 + 0x2d4) < uVar20) {
    FUN_144737178(plVar15);
  }
  *(ulonglong *)(*plVar15 + (longlong)iVar21 * 8) = uVar22;
  if (local_108 != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_148 = (void *)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uStack_140._0_4_ = (int)uStack_220;
  if (lVar33 == 0) {
    iVar31 = 0;
    uVar8 = 0;
    iVar21 = 0;
  }
  else {
    FUN_144aae0d2(&local_148,uStack_220 & 0xffffffff);
    memcpy(local_148,pvVar3,lVar33 << 3);
    iVar21 = (int)uStack_140;
    uVar8 = uStack_140._4_4_;
    iVar31 = (int)uStack_220;
  }
  pvVar3 = local_228;
  local_138 = local_3b0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_FUN_14a240f60;
  uStack_a0 = (undefined ***)local_148;
  local_148 = (code *)0x0;
  uStack_140 = (undefined **)0x0;
  local_98 = (undefined ***)CONCAT44(uVar8,iVar21);
  uStack_90 = local_3b0;
  local_c8 = FUN_142cd6970;
  local_1f8 = (undefined ***)0x0;
  iVar21 = 0;
  uVar8 = 0;
  if (iVar31 != 0) {
    uStack_1f0._0_4_ = iVar31;
    FUN_144aae0d2(&local_1f8,iVar31);
    memcpy(local_1f8,pvVar3,(longlong)iVar31 << 3);
    iVar21 = (int)uStack_1f0;
    uVar8 = uStack_1f0._4_4_;
  }
  local_1e8 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240f40;
  uStack_e0 = local_1f8;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  local_d8 = iVar21;
  uStack_d4 = uVar8;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd6810;
  iVar21 = *(int *)(param_1 + 0x590);
  *(uint *)(param_1 + 0x590) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x594) < iVar21 + 1U) {
    FUN_144775ac8(plVar14,iVar21);
  }
  puVar26 = local_308;
  lVar27 = *plVar14;
  lVar17 = (longlong)iVar21 * 0x120;
  lVar33 = lVar27 + lVar17;
  *(undefined2 *)(lVar27 + lVar17) = 1;
  *(ulonglong *)(lVar27 + 8 + lVar17) = uVar22;
  puVar11 = (undefined8 *)(lVar27 + 0x10 + lVar17);
  *puVar11 = 0;
  puVar11[1] = 0;
  *(code **)(lVar27 + 0x20 + lVar17) = local_108;
  *(undefined ****)(lVar27 + 0x30 + lVar17) = local_f8;
  local_f8 = (undefined ***)0x0;
  puVar11 = (undefined8 *)(lVar27 + 0x50 + lVar17);
  *puVar11 = CONCAT44(uStack_d4,local_d8);
  puVar11[1] = pppuStack_d0;
  puVar11 = (undefined8 *)(lVar27 + 0x40 + lVar17);
  *puVar11 = local_e8;
  puVar11[1] = uStack_e0;
  if (*(longlong *)(lVar27 + 0x20 + lVar17) != 0) {
    local_108 = (code *)0x0;
  }
  *(code **)(lVar33 + 0x60) = local_c8;
  *(undefined ****)(lVar33 + 0x70) = local_b8;
  local_b8 = (undefined ***)0x0;
  *(undefined4 *)(lVar33 + 0x90) = (undefined4)local_98;
  *(undefined4 *)(lVar33 + 0x94) = local_98._4_4_;
  *(undefined4 *)(lVar33 + 0x98) = (undefined4)uStack_90;
  *(undefined4 *)(lVar33 + 0x9c) = uStack_90._4_4_;
  *(undefined4 *)(lVar33 + 0x80) = (undefined4)local_a8;
  *(undefined4 *)(lVar33 + 0x84) = local_a8._4_4_;
  *(undefined4 *)(lVar33 + 0x88) = (undefined4)uStack_a0;
  *(undefined4 *)(lVar33 + 0x8c) = uStack_a0._4_4_;
  if (*(longlong *)(lVar33 + 0x60) != 0) {
    local_c8 = (code *)0x0;
  }
  *(undefined8 *)(lVar33 + 0xa0) = 0;
  *(undefined8 *)(lVar33 + 0xb0) = 0;
  *(undefined8 *)(lVar33 + 0xe0) = 0;
  *(undefined8 *)(lVar33 + 0xf0) = 0;
  *(byte *)(uVar22 + 0x24) = *(byte *)(uVar22 + 0x24) | 0x80;
  if (local_108 != (code *)0x0) {
    (*(code *)local_e8[2])();
  }
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar16 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar16 = (undefined ***)&local_a8;
    }
    (**(code **)((longlong)*pppuVar16 + 0x10))();
  }
  if (local_148 != (code *)0x0) {
    FUN_1400020a8();
  }
  pvVar3 = local_228;
  local_1f8 = (undefined ***)0x0;
  lVar33 = (longlong)(int)uStack_220;
  uStack_1f0._0_4_ = (int)uStack_220;
  if (lVar33 == 0) {
    uStack_d4 = 0;
    local_d8 = 0;
  }
  else {
    FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
    memcpy(local_1f8,pvVar3,lVar33 << 3);
    local_d8 = (int)uStack_1f0;
    uStack_d4 = uStack_1f0._4_4_;
  }
  uStack_e0 = local_1f8;
  puVar34 = local_340;
  puVar32 = local_370;
  puVar11 = local_390;
  puVar28 = local_3a8;
  local_1e8 = local_3b0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_FUN_14a240f80;
  local_1f8 = (undefined ***)0x0;
  uStack_1f0 = 0;
  pppuStack_d0 = local_3b0;
  local_108 = FUN_142cd6ad2;
  local_2d8 = (longlong)local_338 * 0x3c;
  if ((&DAT_14ca814b8)[(longlong)local_338 * 0xf] == 1) {
    uVar8 = 0x10;
    if (((&DAT_14ca814d8)[(longlong)local_338 * 0xf] & 0x1000) == 0) {
      uVar8 = 4;
    }
    uVar20 = ((&DAT_14ca814d8)[(longlong)local_338 * 0xf] & 0x1000) << 9 | 0x10109;
  }
  else {
    uVar20 = 0x10109;
    uVar8 = 4;
  }
  local_148 = (code *)CONCAT44(1,uVar8);
  uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,uVar20);
  local_138 = (undefined ***)0x0;
  local_398 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar23 = local_398 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
    FUN_140023dd8(local_3a8,0x160);
    local_398 = *puVar28 + 0xf & 0xfffffffffffffff0;
    uVar23 = local_398 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar23;
  FUN_1456bd266(local_398,L"InstanceCulling.InstanceIdsBuffer",&local_148,0);
  local_c8 = *(code **)(local_398 + 0xf0);
  uStack_c0 = *(undefined ****)(local_398 + 0xf8);
  local_b8 = *(undefined ****)(local_398 + 0x100);
  uStack_b0 = *(longlong *)(local_398 + 0x108);
  local_a8 = *(undefined ***)(local_398 + 0x110);
  uStack_a0 = *(undefined ****)(local_398 + 0x118);
  local_98 = *(undefined ****)(local_398 + 0x120);
  uStack_90 = *(undefined ****)(local_398 + 0x128);
  pppuVar13 = local_98;
  lVar33 = uStack_b0;
  pppuVar16 = uStack_c0;
  *(ulonglong *)(local_398 + 0x120) = CONCAT44(uStack_d4,local_d8);
  *(undefined ****)(local_398 + 0x128) = pppuStack_d0;
  *(undefined ***)(local_398 + 0x110) = local_e8;
  *(undefined ****)(local_398 + 0x118) = uStack_e0;
  *(undefined ****)(local_398 + 0x100) = local_f8;
  *(ulonglong *)(local_398 + 0x108) = CONCAT44(uStack_ec,uStack_f0);
  *(code **)(local_398 + 0xf0) = local_108;
  *(ulonglong *)(local_398 + 0xf8) = CONCAT44(uStack_fc,uStack_100);
  uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  pppuStack_d0 = uStack_90;
  local_e8 = local_a8;
  uStack_e0 = uStack_a0;
  local_f8 = local_b8;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = (int)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  iVar21 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar21 + 1U;
  uStack_c0 = pppuVar16;
  uStack_b0 = lVar33;
  local_98 = pppuVar13;
  if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
    FUN_144737178(local_350,iVar21);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = local_398;
  *(int *)(local_398 + 0x7c) = *(int *)(param_1 + 400) + -1;
  iVar21 = *(int *)(param_1 + 0x2d0);
  *(uint *)(param_1 + 0x2d0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x2d4) < iVar21 + 1U) {
    FUN_144737178(local_388,iVar21);
  }
  *(ulonglong *)(*local_388 + (longlong)iVar21 * 8) = local_398;
  if (local_108 != (code *)0x0) {
    pppuVar16 = &local_e8;
    if (local_f8 != (undefined ***)0x0) {
      pppuVar16 = local_f8;
    }
    (*(code *)(*pppuVar16)[2])(pppuVar16);
  }
  if (local_1f8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  puVar28 = local_3a8;
  cVar2 = *(char *)(local_398 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar29 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
    FUN_140023dd8(local_3a8,0x48);
    puVar29 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar29 + 8;
    puVar32 = local_370;
  }
  local_3a0 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar18;
  puVar29[1] = *(undefined8 *)(local_398 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 2;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar29 + 5) = 1;
  *puVar29 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar29 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar29 + 0x31) = 0;
  puVar29[7] = local_398;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
  }
  puVar18 = local_330;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar32[0x2a] = uVar22;
  FUN_1449b4134(local_330,&local_108,param_1);
  puVar28 = local_3a8;
  local_350 = local_108;
  local_290 = CONCAT44(uStack_fc,uStack_100);
  local_298 = local_f8;
  local_2a0 = CONCAT44(uStack_ec,uStack_f0);
  local_2e0 = *(undefined4 *)((longlong)puVar18 + 0x38);
  local_2e4 = uStack_e0._4_4_;
  local_2e8 = local_d8;
  local_2ec = uStack_d4;
  local_2f0 = *(undefined4 *)
               ((longlong)puVar18 + 0x134 + (ulonglong)*(byte *)((longlong)puVar18 + 0x200) * 4);
  cVar2 = *(char *)((longlong)puVar34 + 0x68);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar32 = puVar18 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
    FUN_140023dd8(local_3a8,0x50);
    puVar18 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar32 = puVar18 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar32;
  puVar18[1] = *(undefined8 *)((longlong)puVar34 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar18 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = puVar34;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
  }
  puVar34 = local_348;
  puVar28 = local_3a8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar2 = *(char *)((longlong)local_348 + 0x68);
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar32 = puVar24 + 9;
  local_390 = puVar18;
  if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
    FUN_140023dd8(local_3a8,0x50);
    puVar24 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar32 = puVar24 + 9;
  }
  puVar18 = local_390;
  *(undefined8 **)(param_1 + 0x70) = puVar32;
  puVar24[1] = *(undefined8 *)((longlong)puVar34 + 8);
  puVar24[2] = 0;
  *(undefined1 *)(puVar24 + 3) = 3;
  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
  *puVar24 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar24 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
  puVar24[7] = 0;
  puVar24[8] = puVar34;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
  }
  puVar28 = local_3a8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar2 = *(char *)((longlong)puVar11 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar32 = puVar34 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar32) {
    FUN_140023dd8(local_3a8,0x50);
    puVar34 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar32 = puVar34 + 9;
    puVar18 = local_390;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar32;
  puVar34[1] = *(undefined8 *)((longlong)puVar11 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 3;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar34 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
  puVar34[7] = 0;
  puVar34[8] = puVar11;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
  }
  puVar28 = local_3a8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar2 = *(char *)((longlong)puVar26 + 0x68);
  puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar32 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_3a8,0x50);
    puVar32 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar32 + 9;
    puVar18 = local_390;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar32[1] = *(undefined8 *)((longlong)puVar26 + 8);
  puVar32[2] = 0;
  *(undefined1 *)(puVar32 + 3) = 3;
  *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
  *puVar32 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar32 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
  puVar32[7] = 0;
  puVar32[8] = puVar26;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
  }
  puVar28 = local_3a8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  uVar23 = *local_358;
  puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar26 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_3a8,0x48);
    puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar26 + 8;
    puVar18 = local_390;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar26[1] = *(undefined8 *)(uVar23 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 1;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar26 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
  puVar26[7] = uVar23;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
    puVar18 = local_390;
  }
  puVar28 = local_3a8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar25 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_3a8,0x50);
    puVar25 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar25 + 9;
    puVar18 = local_390;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar25[1] = *(undefined8 *)(uVar22 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar25 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = uVar22;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  local_338 = puVar29;
  local_330 = puVar26;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  lVar33 = *local_380;
  cVar2 = *(char *)(lVar33 + 0x68);
  puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar26 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_3a8,0x50);
    puVar26 = (undefined8 *)(*local_3a8 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar26 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar26[1] = *(undefined8 *)(lVar33 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 3;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *puVar26 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar26 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
  puVar26[7] = 0;
  puVar26[8] = lVar33;
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_3a0,iVar21);
  }
  puVar28 = local_3a8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_2f4 = (undefined4)local_380[1];
  lVar33 = local_380[3];
  local_348 = puVar32;
  local_340 = puVar26;
  if (lVar33 == 0) {
    lVar33 = FUN_144aba046(&DAT_14ca63b10,param_1,4,0);
    local_2b8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = local_2b8 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(puVar28,0x50);
      local_2b8 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar11 = local_2b8 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    local_2b8[1] = *(undefined8 *)(lVar33 + 8);
    local_2b8[2] = 0;
    *(undefined1 *)(local_2b8 + 3) = 3;
    *(undefined8 *)((longlong)local_2b8 + 0x1c) = 0xffffffffffffffff;
    *local_2b8 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(local_2b8 + 5) = 0x1c;
    *(undefined8 *)((longlong)local_2b8 + 0x2c) = 0xffffffff00000000;
    local_2b8[7] = 0;
    local_2b8[8] = lVar33;
    iVar21 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
    puVar26 = local_340;
    if (iVar21 + 1U <= *(uint *)(param_1 + 0x1a4)) goto LAB_142cc9aa4;
  }
  else {
    lVar27 = local_380[4];
    local_2b8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = local_2b8 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_3a8,0x50);
      local_2b8 = (undefined8 *)(*local_3a8 + 7 & 0xfffffffffffffff8);
      puVar11 = local_2b8 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    local_2b8[1] = *(undefined8 *)(lVar33 + 8);
    local_2b8[2] = 0;
    *(undefined1 *)(local_2b8 + 3) = 3;
    *(undefined8 *)((longlong)local_2b8 + 0x1c) = 0xffffffffffffffff;
    *local_2b8 = &PTR_FUN_14a1fb168;
    *(char *)(local_2b8 + 5) = (char)lVar27;
    *(undefined8 *)((longlong)local_2b8 + 0x2c) = 0xffffffff00000000;
    local_2b8[7] = 0;
    local_2b8[8] = lVar33;
    iVar21 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
    puVar32 = local_348;
    if (iVar21 + 1U <= *(uint *)(param_1 + 0x1a4)) goto LAB_142cc9aa4;
  }
  FUN_1447568fc(local_3a0,iVar21);
  puVar18 = local_390;
  puVar32 = local_348;
LAB_142cc9aa4:
  local_2c0 = (int *)((longlong)&DAT_14ca814b8 + local_2d8);
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = local_2b8;
  *(int *)((longlong)local_2b8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(int *)((longlong)local_370 + 0x13c) = (int)local_380[1];
  local_2d0 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  local_320 = param_1 + 0x168;
  local_388 = (longlong *)0xfffffffffffffff8;
  uVar23 = 0;
  pppuVar16 = local_3b0;
  local_308 = puVar25;
  local_2b0 = puVar34;
  local_2a8 = puVar24;
  do {
    pvVar3 = local_228;
    puVar11 = *(undefined8 **)((longlong)local_228 + uVar23 * 8);
    *puVar11 = local_350;
    puVar11[1] = local_290;
    puVar11[2] = local_298;
    puVar11[3] = local_2a0;
    *(undefined4 *)(puVar11 + 4) = local_2e0;
    *(undefined4 *)((longlong)puVar11 + 0x24) = local_2e4;
    *(undefined4 *)(puVar11 + 5) = local_2e8;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = local_2ec;
    *(undefined4 *)(puVar11 + 6) = local_2f0;
    *(undefined8 *)((longlong)puVar11 + 0x34) = local_154;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = local_14c;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = local_168;
    puVar11[0xb] = uStack_160;
    puVar11[0xc] = puVar18;
    puVar11[0xd] = local_2a8;
    puVar11[0xe] = puVar32;
    puVar11[0xf] = puVar26;
    puVar11[0x10] = puVar34;
    puVar11[0x11] = 0;
    puVar11[0x12] = local_308;
    puVar11[0x13] = local_2b8;
    puVar11[0x14] = local_338;
    puVar11[0x15] = local_338;
    puVar11[0x16] = local_330;
    puVar11[0x17] = local_368;
    puVar11[0x18] = local_300;
    puVar11[0x19] = local_288;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = local_238;
    *(undefined4 *)(puVar11 + 0x1d) = local_230;
    *(undefined4 *)((longlong)puVar11 + 0xec) = local_2f4;
    *(undefined4 *)(puVar11 + 0x1e) = local_178;
    *(undefined4 *)((longlong)puVar11 + 0xf4) = uStack_174;
    *(undefined4 *)(puVar11 + 0x1f) = uStack_170;
    *(undefined4 *)((longlong)puVar11 + 0xfc) = uStack_16c;
    local_258 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_250 = CONCAT44(uStack_250._4_4_,(int)uStack_220);
    if (lVar33 == 0) {
      uStack_250 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_258,uStack_220 & 0xffffffff);
      memcpy(local_258,pvVar3,lVar33 << 3);
    }
    uVar8 = (undefined4)uVar23;
    local_c8 = (code *)0x0;
    local_b8 = (undefined ***)0x0;
    local_248 = pppuVar16;
    local_240 = uVar8;
    local_b8 = (undefined ***)FUN_14001cc68(0x28,8);
    pvVar3 = local_228;
    *local_b8 = &PTR_FUN_14a240fe0;
    local_b8[1] = (undefined **)local_258;
    local_258 = (undefined ***)0x0;
    *(int *)(local_b8 + 2) = (int)uStack_250;
    *(undefined4 *)((longlong)local_b8 + 0x14) = uStack_250._4_4_;
    uStack_250 = 0;
    *(undefined4 *)(local_b8 + 4) = local_240;
    local_b8[3] = (undefined **)local_248;
    if (local_b8 + 1 != (undefined ***)0x0) {
      local_c8 = FUN_142cd6f92;
    }
    local_278 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_270 = CONCAT44(uStack_270._4_4_,(int)uStack_220);
    if (lVar33 == 0) {
      uStack_270 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_278,uStack_220 & 0xffffffff);
      memcpy(local_278,pvVar3,lVar33 << 3);
    }
    local_148 = (code *)0x0;
    local_138 = (undefined ***)0x0;
    local_268 = pppuVar16;
    local_260 = uVar8;
    local_138 = (undefined ***)FUN_14001cc68(0x28,8);
    pvVar3 = local_228;
    *local_138 = &PTR_FUN_14a240fc0;
    local_138[1] = (undefined **)local_278;
    local_278 = (undefined ***)0x0;
    *(int *)(local_138 + 2) = (int)uStack_270;
    *(undefined4 *)((longlong)local_138 + 0x14) = uStack_270._4_4_;
    uStack_270 = 0;
    *(undefined4 *)(local_138 + 4) = local_260;
    local_138[3] = (undefined **)local_268;
    if (local_138 + 1 != (undefined ***)0x0) {
      local_148 = FUN_142cd6df8;
    }
    local_218 = (undefined **)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_210 = CONCAT44(uStack_210._4_4_,(int)uStack_220);
    if (lVar33 == 0) {
      uStack_210 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_218,uStack_220 & 0xffffffff);
      memcpy(local_218,pvVar3,lVar33 << 3);
    }
    local_1f8 = (undefined ***)0x0;
    local_1e8 = (undefined ***)0x0;
    local_208 = pppuVar16;
    local_200 = uVar8;
    local_1e8 = (undefined ***)FUN_14001cc68(0x28,8);
    *local_1e8 = &PTR_FUN_14a240fa0;
    local_1e8[1] = local_218;
    local_218 = (undefined **)0x0;
    *(int *)(local_1e8 + 2) = (int)uStack_210;
    *(undefined4 *)((longlong)local_1e8 + 0x14) = uStack_210._4_4_;
    uStack_210 = 0;
    *(undefined4 *)(local_1e8 + 4) = local_200;
    local_1e8[3] = (undefined **)local_208;
    if (local_1e8 + 1 != (undefined ***)0x0) {
      local_1f8 = (undefined ***)FUN_142cd6c5e;
    }
    local_400 = &local_c8;
    local_408 = (code **)&local_148;
    lVar33 = FUN_144ada887(param_1,L"InstanceCulling.BatchInds",4,&local_1f8);
    if (local_1f8 != (undefined ***)0x0) {
      pppuVar13 = local_1e8;
      if (local_1e8 == (undefined ***)0x0) {
        pppuVar13 = &local_1d8;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_218 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_148 != (code *)0x0) {
      plVar14 = (longlong *)local_138;
      if (local_138 == (undefined ***)0x0) {
        plVar14 = &local_128;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_278 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar13 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar13 = (undefined ***)&local_a8;
      }
      (**(code **)((longlong)*pppuVar13 + 0x10))();
    }
    if (local_258 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    puVar28 = local_3a8;
    cVar2 = *(char *)(lVar33 + 0x68);
    puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar26 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_3a8,0x50);
      puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar26 + 9;
      pppuVar16 = local_3b0;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar26[1] = *(undefined8 *)(lVar33 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar26 + 5) = cVar2 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = lVar33;
    iVar21 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
      FUN_1447568fc(local_3a0,iVar21);
    }
    pvVar3 = local_228;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *(undefined8 **)(*(longlong *)((longlong)local_228 + uVar23 * 8) + 0x88) = puVar26;
    local_358 = (ulonglong *)CONCAT71(local_358._1_7_,uVar23 == 0);
    local_258 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_250 = CONCAT44(uStack_250._4_4_,(int)uStack_220);
    if (lVar33 == 0) {
      uStack_250 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_258,uStack_220 & 0xffffffff);
      memcpy(local_258,pvVar3,lVar33 << 3);
    }
    local_c8 = (code *)0x0;
    local_b8 = (undefined ***)0x0;
    local_248 = pppuVar16;
    local_240 = uVar8;
    local_b8 = (undefined ***)FUN_14001cc68(0x28,8);
    pvVar3 = local_228;
    *local_b8 = &PTR_FUN_14a241040;
    local_b8[1] = (undefined **)local_258;
    local_258 = (undefined ***)0x0;
    *(int *)(local_b8 + 2) = (int)uStack_250;
    *(undefined4 *)((longlong)local_b8 + 0x14) = uStack_250._4_4_;
    uStack_250 = 0;
    *(undefined4 *)(local_b8 + 4) = local_240;
    local_b8[3] = (undefined **)local_248;
    if (local_b8 + 1 != (undefined ***)0x0) {
      local_c8 = FUN_142cd7464;
    }
    local_278 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_270 = CONCAT44(uStack_270._4_4_,(int)uStack_220);
    if (lVar33 == 0) {
      uStack_270 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_278,uStack_220 & 0xffffffff);
      memcpy(local_278,pvVar3,lVar33 << 3);
    }
    local_148 = (code *)0x0;
    local_138 = (undefined ***)0x0;
    local_268 = pppuVar16;
    local_260 = uVar8;
    local_138 = (undefined ***)FUN_14001cc68(0x28,8);
    pvVar3 = local_228;
    *local_138 = &PTR_FUN_14a241020;
    local_138[1] = (undefined **)local_278;
    local_278 = (undefined ***)0x0;
    *(int *)(local_138 + 2) = (int)uStack_270;
    *(undefined4 *)((longlong)local_138 + 0x14) = uStack_270._4_4_;
    uStack_270 = 0;
    *(undefined4 *)(local_138 + 4) = local_260;
    local_138[3] = (undefined **)local_268;
    if (local_138 + 1 != (undefined ***)0x0) {
      local_148 = FUN_142cd72ca;
    }
    local_218 = (undefined **)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_210 = CONCAT44(uStack_210._4_4_,(int)uStack_220);
    if (lVar33 == 0) {
      uStack_210 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_218,uStack_220 & 0xffffffff);
      memcpy(local_218,pvVar3,lVar33 << 3);
    }
    local_1f8 = (undefined ***)0x0;
    local_1e8 = (undefined ***)0x0;
    local_208 = pppuVar16;
    local_200 = uVar8;
    local_1e8 = (undefined ***)FUN_14001cc68(0x28,8);
    *local_1e8 = &PTR_FUN_14a241000;
    local_1e8[1] = local_218;
    local_218 = (undefined **)0x0;
    *(int *)(local_1e8 + 2) = (int)uStack_210;
    *(undefined4 *)((longlong)local_1e8 + 0x14) = uStack_210._4_4_;
    uStack_210 = 0;
    *(undefined4 *)(local_1e8 + 4) = local_200;
    local_1e8[3] = (undefined **)local_208;
    if (local_1e8 + 1 != (undefined ***)0x0) {
      local_1f8 = (undefined ***)FUN_142cd7130;
    }
    local_400 = &local_c8;
    local_408 = (code **)&local_148;
    lVar33 = FUN_144ada887(param_1,L"InstanceCullingLoadBalancer.Batches",4,&local_1f8);
    if (local_1f8 != (undefined ***)0x0) {
      pppuVar13 = local_1e8;
      if (local_1e8 == (undefined ***)0x0) {
        pppuVar13 = &local_1d8;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_218 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_148 != (code *)0x0) {
      plVar14 = (longlong *)local_138;
      if (local_138 == (undefined ***)0x0) {
        plVar14 = &local_128;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_278 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar13 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar13 = (undefined ***)&local_a8;
      }
      (**(code **)((longlong)*pppuVar13 + 0x10))();
    }
    if (local_258 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    pvVar3 = local_228;
    local_258 = (undefined ***)0x0;
    lVar27 = (longlong)(int)uStack_220;
    uStack_250 = CONCAT44(uStack_250._4_4_,(int)uStack_220);
    if (lVar27 == 0) {
      uStack_250 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_258,uStack_220 & 0xffffffff);
      memcpy(local_258,pvVar3,lVar27 << 3);
    }
    local_c8 = (code *)0x0;
    local_b8 = (undefined ***)0x0;
    local_248 = pppuVar16;
    local_240 = uVar8;
    local_b8 = (undefined ***)FUN_14001cc68(0x28,8);
    pvVar3 = local_228;
    *local_b8 = &PTR_FUN_14a2410a0;
    local_b8[1] = (undefined **)local_258;
    local_258 = (undefined ***)0x0;
    *(int *)(local_b8 + 2) = (int)uStack_250;
    *(undefined4 *)((longlong)local_b8 + 0x14) = uStack_250._4_4_;
    uStack_250 = 0;
    *(undefined4 *)(local_b8 + 4) = local_240;
    local_b8[3] = (undefined **)local_248;
    if (local_b8 + 1 != (undefined ***)0x0) {
      local_c8 = FUN_142cd793a;
    }
    local_278 = (undefined ***)0x0;
    lVar27 = (longlong)(int)uStack_220;
    uStack_270 = CONCAT44(uStack_270._4_4_,(int)uStack_220);
    if (lVar27 == 0) {
      uStack_270 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_278,uStack_220 & 0xffffffff);
      memcpy(local_278,pvVar3,lVar27 << 3);
    }
    local_148 = (code *)0x0;
    local_138 = (undefined ***)0x0;
    local_268 = pppuVar16;
    local_260 = uVar8;
    local_138 = (undefined ***)FUN_14001cc68(0x28,8);
    pvVar3 = local_228;
    *local_138 = &PTR_FUN_14a241080;
    local_138[1] = (undefined **)local_278;
    local_278 = (undefined ***)0x0;
    *(int *)(local_138 + 2) = (int)uStack_270;
    *(undefined4 *)((longlong)local_138 + 0x14) = uStack_270._4_4_;
    uStack_270 = 0;
    *(undefined4 *)(local_138 + 4) = local_260;
    local_138[3] = (undefined **)local_268;
    if (local_138 + 1 != (undefined ***)0x0) {
      local_148 = FUN_142cd779e;
    }
    local_218 = (undefined **)0x0;
    lVar27 = (longlong)(int)uStack_220;
    uStack_210 = CONCAT44(uStack_210._4_4_,(int)uStack_220);
    if (lVar27 == 0) {
      uStack_210 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_218,uStack_220 & 0xffffffff);
      memcpy(local_218,pvVar3,lVar27 << 3);
    }
    local_1f8 = (undefined ***)0x0;
    local_1e8 = (undefined ***)0x0;
    local_208 = pppuVar16;
    local_200 = uVar8;
    local_1e8 = (undefined ***)FUN_14001cc68(0x28,8);
    *local_1e8 = &PTR_FUN_14a241060;
    local_1e8[1] = local_218;
    local_218 = (undefined **)0x0;
    *(int *)(local_1e8 + 2) = (int)uStack_210;
    *(undefined4 *)((longlong)local_1e8 + 0x14) = uStack_210._4_4_;
    uStack_210 = 0;
    *(undefined4 *)(local_1e8 + 4) = local_200;
    local_1e8[3] = (undefined **)local_208;
    if (local_1e8 + 1 != (undefined ***)0x0) {
      local_1f8 = (undefined ***)FUN_142cd7604;
    }
    local_400 = &local_c8;
    local_408 = (code **)&local_148;
    lVar27 = FUN_144ada887(param_1,L"InstanceCullingLoadBalancer.Items",8,&local_1f8);
    if (local_1f8 != (undefined ***)0x0) {
      pppuVar16 = local_1e8;
      if (local_1e8 == (undefined ***)0x0) {
        pppuVar16 = &local_1d8;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    if (local_218 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_148 != (code *)0x0) {
      plVar14 = (longlong *)local_138;
      if (local_138 == (undefined ***)0x0) {
        plVar14 = &local_128;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_278 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar16 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar16 = (undefined ***)&local_a8;
      }
      (**(code **)((longlong)*pppuVar16 + 0x10))();
    }
    if (local_258 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    puVar28 = local_3a8;
    cVar2 = *(char *)(lVar33 + 0x68);
    puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar26 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_3a8,0x50);
      puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar26 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar26[1] = *(undefined8 *)(lVar33 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar26 + 5) = cVar2 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = lVar33;
    iVar21 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
      FUN_1447568fc(local_3a0,iVar21);
    }
    puVar28 = local_3a8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *(undefined8 **)(*(longlong *)((longlong)local_228 + uVar23 * 8) + 0x40) = puVar26;
    cVar2 = *(char *)(lVar27 + 0x68);
    puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar26 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_3a8,0x50);
      puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar26 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar26[1] = *(undefined8 *)(lVar27 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar26 + 5) = cVar2 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = lVar27;
    iVar21 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
      FUN_1447568fc(local_3a0,iVar21);
    }
    pppuVar16 = local_3b0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar26;
    uVar22 = 0;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *(undefined8 **)(*(longlong *)((longlong)local_228 + uVar23 * 8) + 0x48) = puVar26;
    *(undefined4 *)(*(longlong *)((longlong)local_228 + uVar23 * 8) + 0x58) = 1;
    *(uint *)(*(longlong *)((longlong)local_228 + uVar23 * 8) + 0xf0) = (uint)(byte)local_358;
    if ((uVar23 != 0) && ((longlong)uVar23 <= (longlong)(int)local_380[6])) {
      uVar22 = 0;
      lVar27 = FUN_14473c272(param_1,local_380[5] + (longlong)local_388,0);
      lVar33 = DAT_14c9e5330;
      if (lVar27 != 0) {
        iVar21 = *local_2d0;
        if (iVar21 == 0x40000002) {
          uVar10 = 0;
        }
        else {
          bVar35 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar21 != 2)) {
            if (iVar21 == 1) {
              uVar20 = FUN_140ad26c0();
              uVar22 = (ulonglong)uVar20;
              DVar9 = GetCurrentThreadId();
              bVar35 = uVar20 == DVar9;
            }
            else {
              bVar35 = false;
            }
          }
          uVar10 = (ulonglong)(bVar35 ^ 1);
        }
        lVar17 = DAT_14c9e5348;
        if (*(int *)(lVar33 + uVar10 * 4) != 0) {
          iVar21 = *local_2d0;
          if (iVar21 == 0x40000002) {
            uVar10 = 0;
          }
          else {
            bVar35 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar21 != 2)) {
              if (iVar21 == 1) {
                uVar20 = FUN_140ad26c0();
                uVar22 = (ulonglong)uVar20;
                DVar9 = GetCurrentThreadId();
                bVar35 = uVar20 == DVar9;
              }
              else {
                bVar35 = false;
              }
            }
            uVar10 = (ulonglong)(bVar35 ^ 1);
          }
          if (*(int *)(lVar17 + uVar10 * 4) != 0) {
            *(longlong *)(*(longlong *)((longlong)local_228 + uVar23 * 8) + 0xd0) = lVar27;
            uVar12 = *(undefined8 *)(lVar27 + 0x84);
            lVar33 = *(longlong *)((longlong)local_228 + uVar23 * 8);
            *(float *)(lVar33 + 0xe0) = (float)(int)uVar12;
            *(float *)(lVar33 + 0xe4) = (float)(int)((ulonglong)uVar12 >> 0x20);
            *(undefined8 *)(*(longlong *)((longlong)local_228 + uVar23 * 8) + 0xd8) = DAT_14c9c0d80;
            uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
            goto LAB_142ccab91;
          }
        }
        uVar22 = 0;
      }
    }
LAB_142ccab91:
    lVar33 = (longlong)local_218;
    local_218._0_2_ = CONCAT11(uVar23 != 0 && local_2dc != 0,uVar23 == 0);
    local_218 = (undefined **)
                CONCAT44(0x100,CONCAT13((char)uVar22,CONCAT12(1,(undefined2)local_218)));
    uVar12 = local_218;
    local_218._7_1_ = SUB81(lVar33,7);
    local_218._0_7_ = CONCAT16((char)local_2c8,(int6)uVar12);
    FUN_144a945ca(local_360,&local_278,&local_218);
    pvVar3 = local_228;
    local_1f8 = (undefined ***)0x0;
    lVar33 = (longlong)(int)uStack_220;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uStack_220);
    if (lVar33 == 0) {
      uStack_1f0 = uStack_220 & 0xffffffff;
    }
    else {
      FUN_144aae0d2(&local_1f8,uStack_220 & 0xffffffff);
      memcpy(local_1f8,pvVar3,lVar33 << 3);
    }
    local_1e8 = pppuVar16;
    local_148 = (code *)0x0;
    local_138 = (undefined ***)0x0;
    local_1e0 = uVar8;
    local_138 = (undefined ***)FUN_14001cc68(0x28,8);
    *local_138 = &PTR_FUN_14a2410e0;
    local_138[1] = (undefined **)local_1f8;
    local_1f8 = (undefined ***)0x0;
    *(int *)(local_138 + 2) = (int)uStack_1f0;
    *(undefined4 *)((longlong)local_138 + 0x14) = uStack_1f0._4_4_;
    uStack_1f0 = 0;
    *(undefined4 *)(local_138 + 4) = local_1e0;
    local_138[3] = (undefined **)local_1e8;
    if (local_138 + 1 != (undefined ***)0x0) {
      local_148 = FUN_142cd7d0a;
    }
    pppuVar13 = *(undefined ****)((longlong)local_228 + uVar23 * 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e6b00) && (FUN_144b3d300(&DAT_14c9e6b00), DAT_14c9e6b00 == -1)) {
      FUN_1415dd832(&local_c8);
      local_3c0 = 0;
      local_3d0 = 0;
      local_3f0 = "Unknown";
      local_400 = (code **)0x0;
      uStack_3f8 = 0;
      local_408 = (code **)0x14a1fb178;
      local_3c8 = 0;
      local_3e0 = 0x100;
      local_3e8 = 0x234;
      local_3d8 = &local_c8;
      FUN_140b49562(&DAT_14c9e6a80,0,1);
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf62a);
      _Init_thread_footer(&DAT_14c9e6b00);
      pppuVar16 = local_3b0;
    }
    local_c8 = (code *)0x0;
    uStack_c0 = (undefined ***)0x0;
    FUN_1448f70da(local_278,&DAT_14c9e6a80,pppuVar13,&local_c8);
    local_c8 = (code *)&DAT_14c9e6a80;
    local_b8 = local_278;
    uStack_b0 = uStack_270;
    local_a8 = (undefined **)local_148;
    local_98 = local_138;
    local_138 = (undefined ***)0x0;
    local_88 = (undefined ***)local_128;
    uStack_80 = pppuStack_120;
    local_78 = local_118;
    uStack_74 = uStack_114;
    uStack_70 = (undefined4)uStack_110;
    uStack_6c = uStack_110._4_4_;
    if ((undefined **)local_148 != (undefined **)0x0) {
      local_148 = (code *)0x0;
    }
    uStack_c0 = pppuVar13;
    FUN_140069376(param_1);
    puVar28 = local_3a8;
    uVar19 = (undefined6)(uVar22 >> 0x10);
    uVar8 = (undefined4)CONCAT62(uVar19,2);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar8 = (undefined4)CONCAT62(uVar19,4);
    }
    puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar26 + 0x44;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_3a8,0x230);
      puVar26 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar26 + 0x44;
      pppuVar16 = local_3b0;
    }
    *local_3a8 = (ulonglong)puVar11;
    uStack_250 = DAT_14c9e6ac8;
    if (DAT_14c9e6ac8 != 0) {
      LOCK();
      *(int *)(DAT_14c9e6ac8 + 8) = *(int *)(DAT_14c9e6ac8 + 8) + 1;
      UNLOCK();
    }
    local_248 = (undefined ***)&DAT_14c9e6a80;
    local_408 = (code **)CONCAT71(local_408._1_7_,2);
    local_258 = pppuVar13;
    FUN_140068f1a(puVar26,&local_279,&local_258,uVar8);
    plVar14 = local_378;
    *puVar26 = &PTR_FUN_14a2410c0;
    puVar26[0x38] = local_c8;
    puVar26[0x39] = uStack_c0;
    puVar26[0x3a] = local_b8;
    puVar26[0x3b] = uStack_b0;
    puVar26[0x3c] = local_a8;
    puVar26[0x3e] = local_98;
    local_98 = (undefined ***)0x0;
    *(int *)(puVar26 + 0x42) = local_78;
    *(undefined4 *)((longlong)puVar26 + 0x214) = uStack_74;
    *(undefined4 *)(puVar26 + 0x43) = uStack_70;
    *(undefined4 *)((longlong)puVar26 + 0x21c) = uStack_6c;
    *(undefined4 *)(puVar26 + 0x40) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar26 + 0x204) = local_88._4_4_;
    *(undefined4 *)(puVar26 + 0x41) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar26 + 0x20c) = uStack_80._4_4_;
    if (local_a8 != (undefined **)0x0) {
      local_a8 = (undefined **)0x0;
    }
    iVar21 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar21 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar21 + 1U) {
      FUN_14470e57a(local_320,iVar21);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar21 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar26);
    if (local_a8 != (undefined **)0x0) {
      pppuVar13 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar13 = (undefined ***)&local_88;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    puVar34 = local_2b0;
    puVar32 = local_348;
    if ((undefined **)local_148 != (undefined **)0x0) {
      pppuVar13 = local_138;
      if (local_138 == (undefined ***)0x0) {
        pppuVar13 = (undefined ***)&local_128;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_1f8 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    pvVar3 = local_228;
    uVar23 = uVar23 + 1;
    local_388 = (longlong *)((longlong)local_388 + 8);
    puVar18 = local_390;
    puVar26 = local_340;
    if (local_328 == uVar23) {
      puVar28 = local_3a8;
      if ((char)local_2c8 != '\0') {
        local_258 = (undefined ***)0x0;
        lVar33 = (longlong)(int)uStack_220;
        uVar23 = 0;
        uStack_250._0_4_ = (int)uStack_220;
        if (lVar33 == 0) {
          iVar31 = 0;
          uVar8 = 0;
          iVar21 = 0;
        }
        else {
          FUN_144aae0d2(&local_258,uStack_220 & 0xffffffff);
          memcpy(local_258,pvVar3,lVar33 << 3);
          iVar21 = (int)uStack_250;
          uVar8 = uStack_250._4_4_;
          iVar31 = (int)uStack_220;
        }
        pvVar3 = local_228;
        uStack_a0 = local_258;
        puVar28 = local_3a8;
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_FUN_14a241140;
        local_258 = (undefined ***)0x0;
        uStack_250 = 0;
        local_98 = (undefined ***)CONCAT44(uVar8,iVar21);
        local_c8 = FUN_142cd81ca;
        local_278 = (undefined ***)0x0;
        local_248 = pppuVar16;
        uStack_90 = pppuVar16;
        if (iVar31 == 0) {
          uStack_114 = 0;
          local_118 = 0;
        }
        else {
          uStack_270._0_4_ = iVar31;
          FUN_144aae0d2(&local_278,iVar31);
          memcpy(local_278,pvVar3,(longlong)iVar31 << 3);
          uVar23 = uStack_220 & 0xffffffff;
          local_118 = (int)uStack_270;
          uStack_114 = uStack_270._4_4_;
        }
        pvVar3 = local_228;
        pppuStack_120 = local_278;
        puVar11 = local_368;
        plVar14 = local_378;
        local_138 = (undefined ***)0x0;
        local_128 = &PTR_FUN_14a241120;
        local_278 = (undefined ***)0x0;
        uStack_270 = 0;
        local_148 = FUN_142cd8078;
        local_218 = (void *)0x0;
        iVar21 = (int)uVar23;
        local_1c8 = 0;
        local_1c4 = 0;
        local_268 = pppuVar16;
        uStack_110 = pppuVar16;
        if (iVar21 != 0) {
          uStack_210._0_4_ = iVar21;
          FUN_144aae0d2(&local_218,uVar23);
          memcpy(local_218,pvVar3,(longlong)iVar21 << 3);
          puVar28 = local_3a8;
          local_1c8 = (int)uStack_210;
          local_1c4 = uStack_210._4_4_;
        }
        local_1d0 = local_218;
        local_1e8 = (undefined ***)0x0;
        local_1d8 = &PTR_FUN_14a241100;
        local_218 = (undefined **)0x0;
        uStack_210 = 0;
        local_1f8 = (undefined ***)FUN_142cd7f10;
        local_400 = &local_c8;
        local_408 = (code **)&local_148;
        local_208 = pppuVar16;
        local_1c0 = pppuVar16;
        uVar23 = FUN_144ada887(param_1,L"InstanceCulling.Compaction.BlockDestInstanceOffsets",4,
                               &local_1f8);
        if (local_1f8 != (undefined ***)0x0) {
          pppuVar16 = local_1e8;
          if (local_1e8 == (undefined ***)0x0) {
            pppuVar16 = &local_1d8;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        if (local_218 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (local_148 != (code *)0x0) {
          plVar15 = (longlong *)local_138;
          if (local_138 == (undefined ***)0x0) {
            plVar15 = &local_128;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_278 != (undefined ***)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (code *)0x0) {
          pppuVar16 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar16 = (undefined ***)&local_a8;
          }
          (**(code **)((longlong)*pppuVar16 + 0x10))();
        }
        if (local_258 != (undefined ***)0x0) {
          FUN_1400020a8();
        }
        puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar26 = puVar32 + 6;
        if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
          FUN_140023dd8(puVar28,0x40);
          puVar32 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
          puVar26 = puVar32 + 6;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar26;
        *puVar32 = &PTR_FUN_14a240bb8;
        puVar32[2] = 0;
        puVar32[3] = 0;
        puVar32[4] = 0;
        puVar32[5] = 0;
        iVar21 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar21 + 1U) {
          FUN_1448cfae8(plVar14,iVar21);
        }
        lVar33 = local_318;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar21 * 8) = puVar32;
        puVar32[2] = puVar11;
        cVar2 = *(char *)(local_318 + 0x68);
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar26 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(puVar28,0x50);
          puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar26 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        puVar26[1] = *(undefined8 *)(lVar33 + 8);
        puVar26[2] = 0;
        *(undefined1 *)(puVar26 + 3) = 3;
        *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
        *puVar26 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar26 + 5) = cVar2 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
        puVar26[7] = 0;
        puVar26[8] = lVar33;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_3a0,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar26;
        *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar32[3] = puVar26;
        cVar2 = *(char *)(uVar23 + 0x68);
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar26 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(puVar28,0x48);
          puVar26 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar26 + 8;
        }
        pppuVar16 = (undefined ***)(puVar32 + 2);
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        puVar26[1] = *(undefined8 *)(uVar23 + 8);
        puVar26[2] = 0;
        *(undefined1 *)(puVar26 + 3) = 2;
        *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar26 + 5) = 0;
        *puVar26 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar26 + 6) = cVar2 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar26 + 0x31) = 0;
        puVar26[7] = uVar23;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_3a0,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar26;
        *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar32[4] = puVar26;
        puVar32[5] = local_330;
        FUN_1401afad2(local_360,&local_258);
        local_138 = (undefined ***)0x0;
        local_128 = &PTR_LAB_14a241180;
        pppuStack_120 = local_3b0;
        local_148 = (code *)&LAB_142cd854c;
        FUN_1401afc62();
        local_c8 = (code *)0x0;
        uStack_c0 = (undefined ***)0x0;
        FUN_1448f70da(local_258,&DAT_14c9e6970,pppuVar16,&local_c8);
        local_c8 = (code *)&DAT_14c9e6970;
        local_b8 = local_258;
        uStack_b0 = uStack_250;
        local_a8 = (undefined **)local_148;
        local_98 = local_138;
        local_138 = (undefined ***)0x0;
        local_88 = (undefined ***)local_128;
        uStack_80 = pppuStack_120;
        local_78 = local_118;
        uStack_74 = uStack_114;
        uStack_70 = (undefined4)uStack_110;
        uStack_6c = uStack_110._4_4_;
        if ((undefined **)local_148 != (undefined **)0x0) {
          local_148 = (code *)0x0;
        }
        uStack_c0 = pppuVar16;
        FUN_140069376(param_1);
        puVar28 = local_3a8;
        uVar19 = (undefined6)((ulonglong)&local_258 >> 0x10);
        uVar22 = CONCAT62(uVar19,2);
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
          uVar22 = CONCAT62(uVar19,4);
        }
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar11 = puVar26 + 0x44;
        local_328 = uVar23;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(local_3a8,0x230);
          puVar26 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
          puVar11 = puVar26 + 0x44;
        }
        *local_3a8 = (ulonglong)puVar11;
        uStack_1f0 = DAT_14c9e69b8;
        if (DAT_14c9e69b8 != 0) {
          LOCK();
          *(int *)(DAT_14c9e69b8 + 8) = *(int *)(DAT_14c9e69b8 + 8) + 1;
          UNLOCK();
        }
        local_1e8 = (undefined ***)&DAT_14c9e6970;
        local_408 = (code **)CONCAT71(local_408._1_7_,2);
        local_1f8 = pppuVar16;
        FUN_140068f1a(puVar26,&local_278,&local_1f8,uVar22 & 0xffffffff);
        *puVar26 = &PTR_FUN_14a241160;
        puVar26[0x38] = local_c8;
        puVar26[0x39] = uStack_c0;
        puVar26[0x3a] = local_b8;
        puVar26[0x3b] = uStack_b0;
        puVar26[0x3c] = local_a8;
        puVar26[0x3e] = local_98;
        local_98 = (undefined ***)0x0;
        *(int *)(puVar26 + 0x42) = local_78;
        *(undefined4 *)((longlong)puVar26 + 0x214) = uStack_74;
        *(undefined4 *)(puVar26 + 0x43) = uStack_70;
        *(undefined4 *)((longlong)puVar26 + 0x21c) = uStack_6c;
        *(undefined4 *)(puVar26 + 0x40) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar26 + 0x204) = local_88._4_4_;
        *(undefined4 *)(puVar26 + 0x41) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar26 + 0x20c) = uStack_80._4_4_;
        if (local_a8 != (undefined **)0x0) {
          local_a8 = (undefined **)0x0;
        }
        iVar21 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar21 + 1U) {
          FUN_14470e57a(local_320,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar21 * 8) = puVar26;
        *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100();
        if (local_a8 != (undefined **)0x0) {
          plVar14 = &local_88;
          if (local_98 != (undefined ***)0x0) {
            plVar14 = (longlong *)local_98;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if ((undefined **)local_148 != (undefined **)0x0) {
          plVar14 = (longlong *)local_138;
          if (local_138 == (undefined ***)0x0) {
            plVar14 = &local_128;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        pvVar3 = local_228;
        local_258 = (undefined ***)0x0;
        lVar33 = (longlong)(int)uStack_220;
        uVar23 = 0;
        uStack_250._0_4_ = (int)uStack_220;
        if (lVar33 == 0) {
          iVar31 = 0;
          uVar8 = 0;
          iVar21 = 0;
        }
        else {
          FUN_144aae0d2(&local_258,uStack_220 & 0xffffffff);
          memcpy(local_258,pvVar3,lVar33 << 3);
          iVar21 = (int)uStack_250;
          uVar8 = uStack_250._4_4_;
          iVar31 = (int)uStack_220;
        }
        pvVar3 = local_228;
        uStack_a0 = local_258;
        local_248 = local_3b0;
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_FUN_14a2411e0;
        local_258 = (undefined ***)0x0;
        uStack_250 = 0;
        local_98 = (undefined ***)CONCAT44(uVar8,iVar21);
        uStack_90 = local_3b0;
        local_c8 = FUN_142cd88c2;
        local_278 = (undefined ***)0x0;
        if (iVar31 == 0) {
          uStack_114 = 0;
          local_118 = 0;
        }
        else {
          uStack_270._0_4_ = iVar31;
          FUN_144aae0d2(&local_278,iVar31);
          memcpy(local_278,pvVar3,(longlong)iVar31 << 3);
          uVar23 = uStack_220 & 0xffffffff;
          local_118 = (int)uStack_270;
          uStack_114 = uStack_270._4_4_;
        }
        pvVar3 = local_228;
        pppuStack_120 = local_278;
        plVar14 = local_378;
        local_268 = local_3b0;
        local_138 = (undefined ***)0x0;
        local_128 = &PTR_FUN_14a2411c0;
        local_278 = (undefined ***)0x0;
        uStack_270 = 0;
        uStack_110 = local_3b0;
        local_148 = FUN_142cd8760;
        local_218 = (void *)0x0;
        iVar31 = (int)uVar23;
        iVar21 = 0;
        uVar8 = 0;
        if (iVar31 != 0) {
          uStack_210._0_4_ = iVar31;
          FUN_144aae0d2(&local_218,uVar23);
          memcpy(local_218,pvVar3,(longlong)iVar31 << 3);
          iVar21 = (int)uStack_210;
          uVar8 = uStack_210._4_4_;
        }
        local_1d0 = local_218;
        local_208 = local_3b0;
        local_1e8 = (undefined ***)0x0;
        local_1d8 = &PTR_FUN_14a2411a0;
        local_218 = (undefined **)0x0;
        uStack_210 = 0;
        local_1c0 = local_3b0;
        local_1f8 = (undefined ***)FUN_142cd85fe;
        local_408 = (code **)&local_148;
        local_400 = &local_c8;
        local_1c8 = iVar21;
        local_1c4 = uVar8;
        lVar33 = FUN_144ada887(param_1,L"InstanceCulling.CompactionBlockDataIndices",4,&local_1f8);
        if (local_1f8 != (undefined ***)0x0) {
          pppuVar16 = &local_1d8;
          if (local_1e8 != (undefined ***)0x0) {
            pppuVar16 = local_1e8;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        lVar27 = local_310;
        puVar28 = local_3a8;
        if (local_218 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (local_148 != (code *)0x0) {
          plVar15 = &local_128;
          if (local_138 != (undefined ***)0x0) {
            plVar15 = (longlong *)local_138;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_278 != (undefined ***)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (code *)0x0) {
          pppuVar16 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar16 = (undefined ***)&local_a8;
          }
          (**(code **)((longlong)*pppuVar16 + 0x10))();
        }
        if (local_258 != (undefined ***)0x0) {
          FUN_1400020a8();
        }
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar11 = puVar26 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(puVar28,0x50);
          puVar26 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
          puVar11 = puVar26 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        *puVar26 = &PTR_FUN_14a240bd8;
        puVar26[2] = 0;
        puVar26[3] = 0;
        puVar26[4] = 0;
        puVar26[5] = 0;
        puVar26[6] = 0;
        puVar26[7] = 0;
        iVar21 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar21 + 1U) {
          FUN_1448cfae8(plVar14,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar21 * 8) = puVar26;
        puVar26[2] = local_368;
        cVar2 = *(char *)(lVar33 + 0x68);
        puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar32 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(puVar28,0x50);
          puVar32 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar32 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        puVar32[1] = *(undefined8 *)(lVar33 + 8);
        puVar32[2] = 0;
        *(undefined1 *)(puVar32 + 3) = 3;
        *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
        *puVar32 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar32 + 5) = cVar2 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
        puVar32[7] = 0;
        puVar32[8] = lVar33;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_3a0,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar32;
        *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar26[3] = puVar32;
        cVar2 = *(char *)(lVar27 + 0x68);
        puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar32 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(puVar28,0x50);
          puVar32 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar32 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        puVar32[1] = *(undefined8 *)(lVar27 + 8);
        puVar32[2] = 0;
        *(undefined1 *)(puVar32 + 3) = 3;
        *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
        *puVar32 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar32 + 5) = cVar2 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
        puVar32[7] = 0;
        puVar32[8] = lVar27;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_3a0,iVar21);
        }
        uVar23 = local_328;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar32;
        *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar26[4] = puVar32;
        cVar2 = *(char *)(local_328 + 0x68);
        puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar32 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(puVar28,0x50);
          puVar32 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar32 + 9;
        }
        pppuVar16 = (undefined ***)(puVar26 + 2);
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        puVar32[1] = *(undefined8 *)(uVar23 + 8);
        puVar32[2] = 0;
        *(undefined1 *)(puVar32 + 3) = 3;
        *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
        *puVar32 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar32 + 5) = cVar2 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
        puVar32[7] = 0;
        puVar32[8] = uVar23;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_3a0,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar32;
        *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar26[5] = puVar32;
        puVar26[6] = local_338;
        puVar26[7] = local_338;
        FUN_1401b122a(local_360,&local_278);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14a241220;
        local_98 = local_3b0;
        local_c8 = (code *)&LAB_142cd8c56;
        uStack_a0 = pppuVar16;
        FUN_1401b13ba();
        local_148 = (code *)0x0;
        uStack_140 = (undefined **)0x0;
        FUN_1448f70da(local_278,&DAT_14c9e69f8,pppuVar16,&local_148);
        pppuVar13 = local_b8;
        pcVar4 = local_c8;
        local_258 = local_278;
        uStack_250 = uStack_270;
        local_b8 = (undefined ***)0x0;
        uStack_140 = local_a8;
        local_138 = uStack_a0;
        uStack_130 = (undefined4)local_98;
        uStack_12c = local_98._4_4_;
        local_128 = (undefined **)uStack_90;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        FUN_140069376(param_1);
        puVar28 = local_3a8;
        uVar8 = 2;
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar8 = 4;
        }
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar11 = puVar26 + 0x44;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(local_3a8,0x230);
          puVar26 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
          puVar11 = puVar26 + 0x44;
        }
        *local_3a8 = (ulonglong)puVar11;
        uStack_1f0 = DAT_14c9e6a40;
        if (DAT_14c9e6a40 != 0) {
          LOCK();
          *(int *)(DAT_14c9e6a40 + 8) = *(int *)(DAT_14c9e6a40 + 8) + 1;
          UNLOCK();
        }
        local_1e8 = (undefined ***)&DAT_14c9e69f8;
        local_408 = (code **)CONCAT71(local_408._1_7_,2);
        local_1f8 = pppuVar16;
        FUN_140068f1a(puVar26,&local_218,&local_1f8,uVar8);
        *puVar26 = &PTR_FUN_14a241200;
        puVar26[0x38] = &DAT_14c9e69f8;
        puVar26[0x39] = pppuVar16;
        puVar26[0x3a] = local_258;
        puVar26[0x3b] = uStack_250;
        puVar26[0x3c] = pcVar4;
        puVar26[0x3e] = pppuVar13;
        *(undefined4 *)(puVar26 + 0x42) = uStack_130;
        *(undefined4 *)((longlong)puVar26 + 0x214) = uStack_12c;
        *(undefined4 *)(puVar26 + 0x43) = (undefined4)local_128;
        *(undefined4 *)((longlong)puVar26 + 0x21c) = local_128._4_4_;
        *(int *)(puVar26 + 0x40) = (int)uStack_140;
        *(undefined4 *)((longlong)puVar26 + 0x204) = uStack_140._4_4_;
        *(undefined4 *)(puVar26 + 0x41) = (undefined4)local_138;
        *(undefined4 *)((longlong)puVar26 + 0x20c) = local_138._4_4_;
        iVar21 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar21 + 1U) {
          FUN_14470e57a(local_320,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar21 * 8) = puVar26;
        *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100(param_1,puVar26);
        plVar14 = local_378;
        puVar28 = local_3a8;
        if (local_c8 != (code *)0x0) {
          pppuVar16 = (undefined ***)&local_a8;
          if (local_b8 != (undefined ***)0x0) {
            pppuVar16 = local_b8;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar26 + 6;
      if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
        FUN_140023dd8(puVar28,0x40);
        puVar26 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
        puVar11 = puVar26 + 6;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar11;
      *puVar26 = &PTR_FUN_14a240b70;
      puVar26[2] = 0;
      puVar26[3] = 0;
      iVar21 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar21 + 1U) {
        FUN_1448cfae8(plVar14,iVar21);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar21 * 8) = puVar26;
      cVar2 = *(char *)(local_398 + 0x68);
      puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar32 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
        FUN_140023dd8(puVar28,0x50);
        puVar32 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar32 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar11;
      puVar32[1] = *(undefined8 *)(local_398 + 8);
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 3;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *puVar32 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar32 + 5) = cVar2 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
      puVar32[7] = 0;
      puVar32[8] = local_398;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_3a0,iVar21);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar26[2] = puVar32;
      cVar2 = *(char *)(local_398 + 0x68);
      puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar32 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
        FUN_140023dd8(puVar28,0x50);
        puVar32 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar32 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar11;
      puVar32[1] = *(undefined8 *)(local_398 + 8);
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 3;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *puVar32 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar32 + 5) = cVar2 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
      puVar32[7] = 0;
      puVar32[8] = local_398;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_3a0,iVar21);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar26[3] = puVar32;
      *(undefined4 *)(puVar26 + 4) = 0;
      local_c8 = (code *)(puVar26 + 2);
      FUN_1449865da();
      local_148 = (code *)DAT_14c9e5398;
      uVar12 = FUN_14498678e(param_1 + 0x1a8,puVar28,&local_c8);
      puVar28 = local_3a8;
      local_370[0x2b] = uVar12;
      if ((*local_2c0 == 1) && ((*(byte *)((longlong)&DAT_14ca814d8 + local_2d8 + 1) & 0x10) != 0))
      {
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar11 = puVar26 + 4;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(local_3a8,0x30);
          puVar26 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
          puVar11 = puVar26 + 4;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        *puVar26 = &PTR_FUN_14a241850;
        puVar26[2] = 0;
        iVar21 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar21 + 1U) {
          FUN_1448cfae8(local_378,iVar21);
        }
        puVar28 = local_3a8;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar21 * 8) = puVar26;
        cVar2 = *(char *)(local_398 + 0x68);
        puVar32 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar32 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
          FUN_140023dd8(local_3a8,0x50);
          puVar32 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar32 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar11;
        puVar32[1] = *(undefined8 *)(local_398 + 8);
        puVar32[2] = 0;
        *(undefined1 *)(puVar32 + 3) = 3;
        *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
        *puVar32 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar32 + 5) = cVar2 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
        puVar32[7] = 0;
        puVar32[8] = local_398;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_3a0,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar32;
        *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar26[2] = puVar32;
        local_c8 = (code *)(puVar26 + 2);
        FUN_144a92736();
        local_148 = (code *)DAT_14c9e5438;
        uVar12 = FUN_1471cffa6(param_1 + 0x1a8,local_3a8,&local_c8);
        local_370[0x2c] = uVar12;
      }
      if (local_228 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_428) == DAT_14c707940) {
        return local_3b0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 142ccd006 FUN_142ccd006 body=481 status=ok
// SIG undefined FUN_142ccd006(void)

void FUN_142ccd006(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471c4dee(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ccd1e8 FUN_142ccd1e8 body=232 status=ok
// SIG undefined FUN_142ccd1e8(void)

void FUN_142ccd1e8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ccd2d0 FUN_142ccd2d0 body=81 status=ok
// SIG undefined FUN_142ccd2d0(void)

void FUN_142ccd2d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471c4e91(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ccd322 FUN_142ccd322 body=1418 status=ok
// SIG undefined FUN_142ccd322(void)

void FUN_142ccd322(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e55902();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9e6530);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ccd958 FUN_142ccd958 body=31 status=ok
// SIG undefined FUN_142ccd958(void)

undefined8 FUN_142ccd958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ccd978 FUN_142ccd978 body=38 status=ok
// SIG undefined FUN_142ccd978(void)

undefined8 FUN_142ccd978(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ccd99e FUN_142ccd99e body=1700 status=ok
// SIG undefined FUN_142ccd99e(void)

void FUN_142ccd99e(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *_Dst;
  longlong lVar9;
  ulonglong *_Src;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar7 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar7 = uStack_150;
    }
    FUN_1446fe144(puVar10 + 2,(int)local_148,0);
    _Dst = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      _Dst = puVar10 + 2;
    }
    memcpy(_Dst,puVar7,(longlong)(int)local_148);
  }
  puVar10[0xd] = 0;
  _Src = (ulonglong *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar10 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    if (_Src == (ulonglong *)0x0) {
      _Src = &uStack_140;
    }
    FUN_1446fe1b8(puVar10 + 5,iStack_f8,0);
    puVar7 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 5;
    }
    memcpy(puVar7,_Src,(longlong)iStack_f8 << 3);
    _Src = (ulonglong *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar10 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar10 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x84) = (undefined4)uStack_e4;
  if (_Src != (ulonglong *)0x0) {
    FUN_1400020a8(_Src);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)(param_1 + 0x1b8);
  iVar1 = *(int *)(lVar8 + 0x3104);
  iVar2 = *(int *)(lVar8 + 0x3100);
  iVar3 = *(int *)(lVar8 + 0x30fc);
  iVar4 = *(int *)(lVar8 + 0x30f8);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar10 + 2) = (float)iVar4;
  *(float *)((longlong)puVar10 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(float *)((longlong)puVar10 + 0x1c) = (float)iVar2;
  *(float *)(puVar10 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined1  [8])0x0;
  local_90 = 1;
  local_88 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x1c8);
  local_160 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x13818),&local_168,
                &local_158);
  local_128 = *(undefined8 *)(param_1 + 0x1d8);
  local_98[5] = 0;
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    local_98[5] = 1;
    lVar8 = *(longlong *)(param_1 + 0x1b8);
    fVar11 = (float)(*(double *)(lVar8 + 0x860) * 0.0 + *(double *)(lVar8 + 0x840) * 0.0 +
                     (double)*(float *)(lVar8 + 0x2b00) * *(double *)(lVar8 + 0x880) +
                    *(double *)(lVar8 + 0x8a0)) /
             (float)(*(double *)(lVar8 + 0x868) * 0.0 + *(double *)(lVar8 + 0x848) * 0.0 +
                     (double)*(float *)(lVar8 + 0x2b00) * *(double *)(lVar8 + 0x888) +
                    *(double *)(lVar8 + 0x8a8));
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 3;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x20);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar10 + 3;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a1fbb10;
    *(float *)(puVar10 + 2) = fVar11;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0x3f800000;
  }
  lVar8 = FUN_140028f18(param_2,&local_158);
  if ((lVar8 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    param_2[0x33] = local_148;
    param_2[0x34] = uStack_140;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d348;
    puVar10[2] = lVar8;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_141594c9a();
  local_178 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9e6750);
  uVar5 = DAT_14ca89240;
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = uVar5;
  *(undefined4 *)(puVar10 + 4) = 0;
  uVar5 = DAT_14ca89258;
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb5b0;
  puVar10[2] = uVar5;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 3;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 6;
  puVar10[5] = &DAT_100000001;
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 3;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x20);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar10 + 3;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a1fbb10;
    puVar10[2] = 0x3f80000000000000;
  }
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cce044 FUN_142cce044 body=38 status=ok
// SIG undefined FUN_142cce044(void)

undefined8 FUN_142cce044(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cce06a FUN_142cce06a body=1460 status=ok
// SIG undefined FUN_142cce06a(void)

void FUN_142cce06a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint6 local_98;
  undefined2 uStack_92;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_148,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar5,(longlong)(int)local_148);
  }
  puVar12[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar12 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_f8,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar12 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  _local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2);
  lVar6 = *(longlong *)(param_1 + 0x1b8);
  iVar1 = *(int *)(lVar6 + 0x3104);
  iVar2 = *(int *)(lVar6 + 0x3100);
  iVar3 = *(int *)(lVar6 + 0x30fc);
  iVar4 = *(int *)(lVar6 + 0x30f8);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar4;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar2;
  *(float *)(puVar12 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_128 = *(undefined8 *)(param_1 + 0x1f0);
  local_100 = *(undefined4 *)(param_1 + 0x1f8);
  local_98 = (uint6)(uint5)local_98;
  uStack_120 = DAT_14c9c0db0;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar8,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar8,1);
    }
  }
  local_118 = DAT_14c9c0d98;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar6;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar8,1);
    }
  }
  FUN_141594c9a();
  local_168 = uVar9;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9e6750);
  lVar6 = *(longlong *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uVar9 = FUN_145cf4068();
  local_168 = lVar6 + 0xf0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),uVar9);
  iVar1 = *(int *)(param_1 + 0x1e8);
  uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x170) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e78c8;
  puVar12[2] = uVar9;
  *(int *)(puVar12 + 3) = iVar1 << 4;
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cce620 FUN_142cce620 body=31 status=ok
// SIG undefined FUN_142cce620(void)

undefined8 FUN_142cce620(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cce640 FUN_142cce640 body=38 status=ok
// SIG undefined FUN_142cce640(void)

undefined8 FUN_142cce640(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cce666 FUN_142cce666 body=1849 status=ok
// SIG undefined FUN_142cce666(void)

void FUN_142cce666(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  float local_420;
  float local_418;
  float local_410;
  float local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 *local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [8];
  undefined1 *local_3c0;
  int local_3b8;
  undefined1 local_3b0 [64];
  undefined1 *local_370;
  int local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 local_308 [416];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_144b1c6fa(param_1 + 0x10,local_3c8);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = local_3b8;
  if ((longlong)local_3b8 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar14 = local_3c0;
    if (local_3c0 == (undefined1 *)0x0) {
      puVar14 = local_3c8;
    }
    FUN_1446fe144(puVar12 + 2,local_3b8,0);
    puVar4 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar4 = puVar12 + 2;
    }
    memcpy(puVar4,puVar14,(longlong)local_3b8);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_368;
  if ((longlong)local_368 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar14 = local_370;
    if (local_370 == (undefined1 *)0x0) {
      puVar14 = local_3b0;
    }
    FUN_1446fe1b8(puVar12 + 5,local_368,0);
    puVar4 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar12 + 5;
    }
    memcpy(puVar4,puVar14,(longlong)local_368 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_360;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_35c;
  *(undefined4 *)(puVar12 + 0x10) = uStack_358;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_354;
  if (local_370 != (undefined1 *)0x0) {
    FUN_1400020a8(local_370);
  }
  if (local_3c0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x1c0);
  iVar8 = *(int *)(lVar6 + 0x3104);
  iVar13 = *(int *)(lVar6 + 0x3100);
  iVar1 = *(int *)(lVar6 + 0x30fc);
  iVar2 = *(int *)(lVar6 + 0x30f8);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar2;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar13;
  *(float *)(puVar12 + 4) = (float)iVar8;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2,&local_168);
  local_138 = DAT_14c9e74a8;
  uStack_130 = DAT_14c9c0db0;
  local_128 = DAT_14c9c0d98;
  local_168 = DAT_14ca94df8;
  if (*(char *)(param_1 + 0x200) == '\x01') {
    lVar6 = *(longlong *)(param_1 + 0x1d8);
    if (lVar6 == 0) {
LAB_142cce9a4:
      lVar5 = 0;
      goto LAB_142cce9a6;
    }
    lVar15 = *(longlong *)(param_1 + 0x1e0);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x1c8);
    if (lVar6 == 0) goto LAB_142cce9a4;
    lVar15 = *(longlong *)(param_1 + 0x1d0);
  }
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 8) + 0x50) + (longlong)*(int *)(lVar6 + 0xd4) * 8);
  if (lVar5 == 0) {
    lVar5 = FUN_1400bafc2(*(longlong *)(lVar15 + 8),(longlong)*(int *)(lVar6 + 0xd4),1);
  }
LAB_142cce9a6:
  uStack_160 = lVar5;
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    lVar6 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8);
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar5 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar15,lVar5,1);
    }
  }
  local_110 = *(undefined4 *)(param_1 + 0x1f8);
  local_158 = lVar6;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x33) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar6;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  lVar6 = *(longlong *)(param_1 + 0x1c0);
  lVar15 = lVar6 + 0x2dd0;
  if (*(longlong *)(lVar6 + 0x2e90) != 0) {
    lVar15 = *(longlong *)(lVar6 + 0x2e90);
  }
  if ((longlong)*(int *)(lVar6 + 0x2e98) != 0) {
    lVar6 = (longlong)*(int *)(lVar6 + 0x2e98) * 0x18;
    do {
      memcpy(local_3c8,*(void **)(param_1 + 0x1b8),0x260);
      FUN_14175e6ed(lVar15,local_308);
      if (*(longlong *)(param_1 + 0x1e8) == 0) {
        lVar5 = 0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8);
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0xd4);
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar9 * 8);
        if (lVar5 == 0) {
          lVar5 = FUN_1400bafc2(lVar3,lVar9,1);
        }
      }
      FUN_14159c94c();
      local_428 = local_3c8;
      FUN_1449cc26b(param_2,lVar5,*(undefined8 *)(param_1 + 0x1e8),&DAT_14c9e67d8);
      if (*(char *)(param_1 + 0x200) == '\x01') {
        lVar5 = *(longlong *)(param_1 + 0x1b8);
        if (*(longlong *)(param_1 + 0x1d8) == 0) {
          lVar9 = 0;
        }
        else {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
          lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar11 * 8);
          if (lVar9 == 0) {
            lVar9 = FUN_1400bafc2(lVar3,lVar11,1);
          }
        }
        uVar7 = FUN_145cf4068();
        local_428 = (undefined1 *)(lVar5 + 0x30);
        FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1d8),uVar7);
        iVar8 = *(int *)(param_1 + 0x1fc);
        uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0xb0) + 0x10);
        puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar12 + 4;
        if ((undefined8 *)param_2[1] < puVar4) {
          FUN_140023dd8(param_2,0x28);
          puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar4 = puVar12 + 4;
        }
        *param_2 = (ulonglong)puVar4;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar12;
        param_2[6] = (ulonglong)(puVar12 + 1);
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_14a1e78c8;
        puVar12[2] = uVar7;
        *(int *)(puVar12 + 3) = iVar8 << 4;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x1c0);
        local_3d8 = *(undefined8 *)(param_1 + 0x1c8);
        local_3d0 = *(undefined8 *)(param_1 + 0x1d0);
        puVar10 = (undefined *)(*(longlong *)(lVar5 + 8) + 0x1b8);
        if (*(char *)(*(longlong *)(lVar5 + 8) + 0xd0) == '\0') {
          puVar10 = &DAT_14cb05410;
        }
        iVar8 = *(int *)(lVar5 + 0x3104) - *(int *)(lVar5 + 0x30fc);
        local_408 = (float)iVar8;
        iVar13 = *(int *)(lVar5 + 0x3100) - *(int *)(lVar5 + 0x30f8);
        local_410 = (float)iVar13;
        local_418 = (float)*(int *)(lVar5 + 0x30fc);
        local_420 = (float)*(int *)(lVar5 + 0x30f8);
        local_3f8 = *(undefined8 *)(puVar10 + 0x10);
        local_400 = CONCAT44(iVar8,iVar13);
        local_3e0 = 1;
        local_3e8 = 1;
        local_3f0 = &local_3d8;
        local_428 = (undefined1 *)CONCAT44(local_428._4_4_,local_408);
        FUN_140094833(param_2,0,0);
      }
      lVar15 = lVar15 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  if ((local_90 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cceda0 FUN_142cceda0 body=31 status=ok
// SIG undefined FUN_142cceda0(void)

undefined8 FUN_142cceda0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ccedc0 FUN_142ccedc0 body=38 status=ok
// SIG undefined FUN_142ccedc0(void)

undefined8 FUN_142ccedc0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ccede6 FUN_142ccede6 body=2079 status=ok
// SIG undefined FUN_142ccede6(void)

void FUN_142ccede6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar11 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar11 = uStack_150;
    }
    FUN_1446fe144(puVar16 + 2,(int)local_148,0);
    puVar10 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar10 = puVar16 + 2;
    }
    memcpy(puVar10,puVar11,(longlong)(int)local_148);
  }
  puVar16[0xd] = 0;
  puVar11 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar16 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = &uStack_140;
    }
    FUN_1446fe1b8(puVar16 + 5,iStack_f8,0);
    puVar10 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar16 + 5;
    }
    memcpy(puVar10,puVar11,(longlong)iStack_f8 << 3);
    puVar11 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar16 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar16 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar16 + 0x84) = (undefined4)uStack_e4;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar11);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x1c0);
  iVar4 = *(int *)(lVar7 + 0x3104);
  iVar1 = *(int *)(lVar7 + 0x3100);
  iVar2 = *(int *)(lVar7 + 0x30fc);
  iVar3 = *(int *)(lVar7 + 0x30f8);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar16 + 2) = (float)iVar3;
  *(float *)((longlong)puVar16 + 0x14) = (float)iVar2;
  *(undefined4 *)(puVar16 + 3) = 0;
  *(float *)((longlong)puVar16 + 0x1c) = (float)iVar1;
  *(float *)(puVar16 + 4) = (float)iVar4;
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x1c8);
  local_160 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818));
  iVar4 = FUN_142f84365();
  lVar7 = DAT_14ca97170;
  puVar11 = &DAT_14c9c0d50;
  if ((iVar4 != 2) && (DAT_14c9c9d20 == 0)) {
    if (*(char *)(param_1 + 0x1d8) == '\0') {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar4 = *(int *)(lVar8 + 0xc60);
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar12 = 0;
      }
      else if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar12 = 1;
      }
      lVar14 = DAT_14ca971d0;
      if (*(int *)(lVar7 + uVar12 * 4) < 1) {
        puVar11 = &DAT_14c9c0ee8;
      }
      else {
        iVar4 = *(int *)(lVar8 + 0xc60);
        if (iVar4 == 0x40000002) {
          uVar12 = 0;
        }
        else {
          bVar17 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
            if (iVar4 == 1) {
              DVar5 = FUN_140ad26c0();
              DVar6 = GetCurrentThreadId();
              bVar17 = DVar5 == DVar6;
            }
            else {
              bVar17 = false;
            }
          }
          uVar12 = (ulonglong)(bVar17 ^ 1);
        }
        puVar13 = &DAT_14c9c0ed8;
        if (0 < *(int *)(lVar14 + uVar12 * 4)) {
          puVar13 = &DAT_14c9c0ec0;
        }
        puVar11 = (undefined8 *)(puVar13 + 0x10);
      }
    }
    else {
      puVar11 = &DAT_14c9e72f8;
    }
  }
  local_128 = *puVar11;
  if (DAT_14ca84e1e == '\x01') {
    local_98._0_6_ = CONCAT15(1,(undefined5)local_98);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 3;
    if ((undefined8 *)param_2[1] < puVar11) {
      FUN_140023dd8(param_2,0x20);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 3;
    }
    *param_2 = (ulonglong)puVar11;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar16;
    param_2[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a1fbb10;
    puVar16[2] = 0x3f80000033800001;
  }
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar7 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + 8);
      lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + 0xd4);
      lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar14 * 8);
      if (lVar7 == 0) {
        lVar7 = FUN_1400bafc2(lVar8,lVar14,1);
      }
    }
    local_100 = *(undefined4 *)(param_1 + 500);
    uStack_150 = (undefined8 *)lVar7;
  }
  lVar7 = FUN_140028f18(param_2,&local_158);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 4;
    if ((undefined8 *)param_2[1] < puVar11) {
      FUN_140023dd8(param_2,0x28);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 4;
    }
    *param_2 = (ulonglong)puVar11;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar16;
    param_2[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a37d348;
    puVar16[2] = lVar7;
    *(undefined4 *)(puVar16 + 3) = 0;
    *(undefined1 *)((longlong)puVar16 + 0x1c) = 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar14 + 0x50) + lVar15 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar14,lVar15,1);
    }
  }
  FUN_14156a276();
  local_178 = lVar7;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9e6860);
  uVar9 = DAT_14ca89240;
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    lVar7 = *(longlong *)(param_1 + 0x1b8);
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar14 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + 8);
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + 0xd4);
      lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar15 * 8);
      if (lVar14 == 0) {
        lVar14 = FUN_1400bafc2(lVar8,lVar15,1);
      }
    }
    uVar9 = FUN_145cf4068();
    local_178 = lVar7 + 0x1d0;
    FUN_1449cc26b(param_2,lVar14,*(undefined8 *)(param_1 + 0x1e0),uVar9);
    iVar4 = *(int *)(param_1 + 0x1dc);
    uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x250) + 0x10);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 4;
    if ((undefined8 *)param_2[1] < puVar11) {
      FUN_140023dd8(param_2,0x28);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 4;
    }
    *param_2 = (ulonglong)puVar11;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar16;
    param_2[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a1e78c8;
    puVar16[2] = uVar9;
    *(int *)(puVar16 + 3) = iVar4 << 4;
  }
  else {
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 5;
    if ((undefined8 *)param_2[1] < puVar11) {
      FUN_140023dd8(param_2,0x30);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 5;
    }
    *param_2 = (ulonglong)puVar11;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar16;
    param_2[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a1fb5a8;
    *(undefined4 *)(puVar16 + 2) = 0;
    puVar16[3] = uVar9;
    *(undefined4 *)(puVar16 + 4) = 0;
    uVar9 = DAT_14ca89258;
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 6;
    if ((undefined8 *)param_2[1] < puVar11) {
      FUN_140023dd8(param_2,0x38);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 6;
    }
    *param_2 = (ulonglong)puVar11;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar16;
    param_2[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1fb5b0;
    puVar16[2] = uVar9;
    *(undefined4 *)(puVar16 + 3) = 0;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
    *(undefined4 *)(puVar16 + 4) = 3;
    *(undefined4 *)((longlong)puVar16 + 0x24) = 6;
    puVar16[5] = &DAT_100000001;
  }
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ccf642 FUN_142ccf642 body=481 status=ok
// SIG undefined FUN_142ccf642(void)

void FUN_142ccf642(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471c8738(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ccf824 FUN_142ccf824 body=232 status=ok
// SIG undefined FUN_142ccf824(void)

void FUN_142ccf824(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ccf90c FUN_142ccf90c body=81 status=ok
// SIG undefined FUN_142ccf90c(void)

void FUN_142ccf90c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471c87db(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ccf95e FUN_142ccf95e body=481 status=ok
// SIG undefined FUN_142ccf95e(void)

void FUN_142ccf95e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471c8b18(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ccfb40 FUN_142ccfb40 body=232 status=ok
// SIG undefined FUN_142ccfb40(void)

void FUN_142ccfb40(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ccfc28 FUN_142ccfc28 body=81 status=ok
// SIG undefined FUN_142ccfc28(void)

void FUN_142ccfc28(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471c8bbb(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ccfc7a FUN_142ccfc7a body=481 status=ok
// SIG undefined FUN_142ccfc7a(void)

void FUN_142ccfc7a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471c8ef8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ccfe5c FUN_142ccfe5c body=232 status=ok
// SIG undefined FUN_142ccfe5c(void)

void FUN_142ccfe5c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ccff44 FUN_142ccff44 body=81 status=ok
// SIG undefined FUN_142ccff44(void)

void FUN_142ccff44(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471c8f9b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ccff96 FUN_142ccff96 body=450 status=ok
// SIG undefined FUN_142ccff96(void)

void FUN_142ccff96(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1471c9370(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd0159 FUN_142cd0159 body=81 status=ok
// SIG undefined FUN_142cd0159(void)

void FUN_142cd0159(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471c946b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd01aa FUN_142cd01aa body=229 status=ok
// SIG undefined FUN_142cd01aa(void)

void FUN_142cd01aa(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9e5ba0,param_3);
  return;
}



// FUNCTION 142cd0290 FUN_142cd0290 body=481 status=ok
// SIG undefined FUN_142cd0290(void)

void FUN_142cd0290(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471c97a8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd0472 FUN_142cd0472 body=232 status=ok
// SIG undefined FUN_142cd0472(void)

void FUN_142cd0472(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd055a FUN_142cd055a body=81 status=ok
// SIG undefined FUN_142cd055a(void)

void FUN_142cd055a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471c984b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd05ac FUN_142cd05ac body=481 status=ok
// SIG undefined FUN_142cd05ac(void)

void FUN_142cd05ac(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471c9b88(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd078e FUN_142cd078e body=232 status=ok
// SIG undefined FUN_142cd078e(void)

void FUN_142cd078e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd0876 FUN_142cd0876 body=81 status=ok
// SIG undefined FUN_142cd0876(void)

void FUN_142cd0876(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471c9c2b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd08c8 FUN_142cd08c8 body=481 status=ok
// SIG undefined FUN_142cd08c8(void)

void FUN_142cd08c8(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471c9f68(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd0aaa FUN_142cd0aaa body=232 status=ok
// SIG undefined FUN_142cd0aaa(void)

void FUN_142cd0aaa(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd0b92 FUN_142cd0b92 body=81 status=ok
// SIG undefined FUN_142cd0b92(void)

void FUN_142cd0b92(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471ca00b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd0be4 FUN_142cd0be4 body=481 status=ok
// SIG undefined FUN_142cd0be4(void)

void FUN_142cd0be4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471ca348(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd0dc6 FUN_142cd0dc6 body=232 status=ok
// SIG undefined FUN_142cd0dc6(void)

void FUN_142cd0dc6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd0eae FUN_142cd0eae body=81 status=ok
// SIG undefined FUN_142cd0eae(void)

void FUN_142cd0eae(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471ca3eb(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd0f00 FUN_142cd0f00 body=481 status=ok
// SIG undefined FUN_142cd0f00(void)

void FUN_142cd0f00(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471ca728(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd10e2 FUN_142cd10e2 body=232 status=ok
// SIG undefined FUN_142cd10e2(void)

void FUN_142cd10e2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd11ca FUN_142cd11ca body=81 status=ok
// SIG undefined FUN_142cd11ca(void)

void FUN_142cd11ca(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471ca7cb(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd121c FUN_142cd121c body=31 status=ok
// SIG undefined FUN_142cd121c(void)

undefined8 FUN_142cd121c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd123c FUN_142cd123c body=481 status=ok
// SIG undefined FUN_142cd123c(void)

void FUN_142cd123c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471cab08(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd141e FUN_142cd141e body=232 status=ok
// SIG undefined FUN_142cd141e(void)

void FUN_142cd141e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd1506 FUN_142cd1506 body=81 status=ok
// SIG undefined FUN_142cd1506(void)

void FUN_142cd1506(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cabab(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd1558 FUN_142cd1558 body=481 status=ok
// SIG undefined FUN_142cd1558(void)

void FUN_142cd1558(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471caee8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd173a FUN_142cd173a body=232 status=ok
// SIG undefined FUN_142cd173a(void)

void FUN_142cd173a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd1822 FUN_142cd1822 body=81 status=ok
// SIG undefined FUN_142cd1822(void)

void FUN_142cd1822(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471caf8b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd1874 FUN_142cd1874 body=481 status=ok
// SIG undefined FUN_142cd1874(void)

void FUN_142cd1874(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471cb2c8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd1a56 FUN_142cd1a56 body=232 status=ok
// SIG undefined FUN_142cd1a56(void)

void FUN_142cd1a56(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd1b3e FUN_142cd1b3e body=81 status=ok
// SIG undefined FUN_142cd1b3e(void)

void FUN_142cd1b3e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cb36b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd1b90 FUN_142cd1b90 body=481 status=ok
// SIG undefined FUN_142cd1b90(void)

void FUN_142cd1b90(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471cb6a8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd1d72 FUN_142cd1d72 body=232 status=ok
// SIG undefined FUN_142cd1d72(void)

void FUN_142cd1d72(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd1e5a FUN_142cd1e5a body=81 status=ok
// SIG undefined FUN_142cd1e5a(void)

void FUN_142cd1e5a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cb74b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd1eac FUN_142cd1eac body=481 status=ok
// SIG undefined FUN_142cd1eac(void)

void FUN_142cd1eac(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471cba88(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd208e FUN_142cd208e body=232 status=ok
// SIG undefined FUN_142cd208e(void)

void FUN_142cd208e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd2176 FUN_142cd2176 body=81 status=ok
// SIG undefined FUN_142cd2176(void)

void FUN_142cd2176(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cbb2b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd21c8 FUN_142cd21c8 body=38 status=ok
// SIG undefined FUN_142cd21c8(void)

undefined8 FUN_142cd21c8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd21ee FUN_142cd21ee body=810 status=ok
// SIG undefined FUN_142cd21ee(void)

void FUN_142cd21ee(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  longlong *_Src;
  undefined8 *puVar3;
  size_t _Size;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 *local_100;
  longlong *local_f8;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  _Size = (size_t)(int)local_b8;
  *(int *)(puVar3 + 4) = (int)local_b8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    _Src = &local_c8;
    if (plStack_c0 != (longlong *)0x0) {
      _Src = plStack_c0;
    }
    FUN_1446fe144(puVar3 + 2,local_b8 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 2;
    }
    memcpy(puVar2,_Src,_Size);
  }
  puVar3[0xd] = 0;
  lVar4 = (longlong)(int)local_68;
  *(int *)(puVar3 + 0xe) = (int)local_68;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = puStack_70;
    if (puStack_70 == (undefined8 *)0x0) {
      puVar2 = &local_b0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_68 & 0xffffffff,0);
    _Dst = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      _Dst = puVar3 + 5;
    }
    memcpy(_Dst,puVar2,lVar4 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_60._4_4_;
  *(uint *)(puVar3 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_54;
  if (puStack_70 != (undefined8 *)0x0) {
    FUN_1400020a8(puStack_70);
  }
  if (plStack_c0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  FUN_1460895f4();
  local_100 = (undefined8 *)((ulonglong)local_100 & 0xffffffffffffff00);
  local_108 = (ulonglong)local_108._4_4_ << 0x20;
  FUN_14357db7e(uVar1,&local_c8,&DAT_14c9e2be0,&DAT_14cae9e78);
  lVar4 = local_c8;
  local_e8 = local_c8;
  local_e0 = plStack_c0;
  if (local_c8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b8);
    FUN_1471c0c16();
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_1448f70da(lVar4,&DAT_14c9e5cb0,uVar1,&local_c8);
    local_b8 = 0;
    local_b0 = 0x200000000;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    puStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    local_108 = *(undefined8 *)(param_1 + 0x1d8);
    local_100 = &local_d8;
    local_d8 = DAT_14ca44d40;
    local_d0 = DAT_14ca44d68;
    local_f8 = &local_c8;
    FUN_1471cbd4b(&local_e8,*(longlong *)(param_1 + 0x1c0),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 8),
                  *(undefined8 *)(param_1 + 0x1d0));
    local_108 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 400) + 0x10);
    FUN_1471cbcbf(param_2,&local_e8,&local_c8);
    if ((0x50 < uStack_58._2_2_) && (local_a8 != 0)) {
      FUN_1400020a8();
    }
    uStack_58 = uStack_58 & 0xffff;
    local_a8 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd2519 FUN_142cd2519 body=459 status=ok
// SIG undefined FUN_142cd2519(void)

void FUN_142cd2519(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (*param_2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar11 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar11 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar11,1);
    }
  }
  lVar11 = FUN_144821ef4(param_1);
  FUN_1448a2d16(param_3,lVar11,0);
  FUN_1471c0c16();
  FUN_1471cbf3d(lVar11,param_2,param_4);
  uVar12 = FUN_140029432(param_1,uVar10,0);
  param_1[0x37] = uVar10;
  puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar13 + 3;
  if ((undefined8 *)param_1[1] < puVar14) {
    FUN_140023dd8(param_1,0x20);
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 3;
  }
  *param_1 = (ulonglong)puVar14;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar13;
  param_1[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a37d340;
  puVar13[2] = uVar12;
  iVar8 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar9 = iVar8 + *(int *)(lVar11 + 0x40);
  if (iVar9 != 0 && SCARRY4(iVar8,*(int *)(lVar11 + 0x40)) == iVar9 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar12 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar5 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar6 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar7 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fa8;
    puVar13[2] = uVar10;
    puVar13[3] = uVar7;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar6;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar5;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar12;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 142cd26e4 FUN_142cd26e4 body=81 status=ok
// SIG undefined FUN_142cd26e4(void)

void FUN_142cd26e4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cbf61(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd2736 FUN_142cd2736 body=31 status=ok
// SIG undefined FUN_142cd2736(void)

undefined8 FUN_142cd2736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd2756 FUN_142cd2756 body=38 status=ok
// SIG undefined FUN_142cd2756(void)

undefined8 FUN_142cd2756(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd277c FUN_142cd277c body=843 status=ok
// SIG undefined FUN_142cd277c(void)

void FUN_142cd277c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *_Dst;
  longlong *_Src;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 *local_110;
  longlong *local_108;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_d8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  _Size = (size_t)(int)local_c8;
  *(int *)(puVar5 + 4) = (int)local_c8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    _Src = &local_d8;
    if (plStack_d0 != (longlong *)0x0) {
      _Src = plStack_d0;
    }
    FUN_1446fe144(puVar5 + 2,local_c8 & 0xffffffff,0);
    puVar4 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar4 = puVar5 + 2;
    }
    memcpy(puVar4,_Src,_Size);
  }
  puVar5[0xd] = 0;
  lVar6 = (longlong)(int)local_78;
  *(int *)(puVar5 + 0xe) = (int)local_78;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    puVar4 = puStack_80;
    if (puStack_80 == (undefined8 *)0x0) {
      puVar4 = &local_c0;
    }
    FUN_1446fe1b8(puVar5 + 5,local_78 & 0xffffffff,0);
    _Dst = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      _Dst = puVar5 + 5;
    }
    memcpy(_Dst,puVar4,lVar6 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_70._4_4_;
  *(uint *)(puVar5 + 0x10) = uStack_68;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_64;
  if (puStack_80 != (undefined8 *)0x0) {
    FUN_1400020a8(puStack_80);
  }
  if (plStack_d0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(DAT_14c9e2700 + 4);
  iVar2 = *(int *)(DAT_14c9e26d0 + 4);
  uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  FUN_14608985e();
  local_118 = CONCAT44(local_118._4_4_,(uint)(iVar1 != 0) + (uint)(iVar2 != 0) * 2);
  local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
  FUN_14357db7e(uVar3,&local_d8,&DAT_14c9e31a8,&DAT_14cae9e78);
  lVar6 = local_d8;
  local_f8 = local_d8;
  local_f0 = plStack_d0;
  if (local_d8 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1b8);
    FUN_1471c2374();
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    FUN_1448f70da(lVar6,&DAT_14c9e5f58,uVar3,&local_d8);
    local_c8 = 0;
    local_c0 = 0x200000000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    puStack_80 = (undefined8 *)0x0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    local_118 = *(undefined8 *)(param_1 + 0x1d8);
    local_110 = &local_e8;
    local_e8 = DAT_14ca44d40;
    local_e0 = DAT_14ca44d68;
    local_108 = &local_d8;
    FUN_1471cc181(&local_f8,*(longlong *)(param_1 + 0x1c0),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 8),
                  *(undefined8 *)(param_1 + 0x1d0));
    local_118 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x148) + 0x10);
    FUN_1471cc0f5(param_2,&local_f8,&local_d8);
    if ((0x50 < uStack_68._2_2_) && (local_b8 != 0)) {
      FUN_1400020a8();
    }
    uStack_68 = uStack_68 & 0xffff;
    local_b8 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd2ac8 FUN_142cd2ac8 body=459 status=ok
// SIG undefined FUN_142cd2ac8(void)

void FUN_142cd2ac8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (*param_2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar11 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar11 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar11,1);
    }
  }
  lVar11 = FUN_144821ef4(param_1);
  FUN_1448a2d16(param_3,lVar11,0);
  FUN_1471c2374();
  FUN_1471cc373(lVar11,param_2,param_4);
  uVar12 = FUN_140029432(param_1,uVar10,0);
  param_1[0x37] = uVar10;
  puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar13 + 3;
  if ((undefined8 *)param_1[1] < puVar14) {
    FUN_140023dd8(param_1,0x20);
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 3;
  }
  *param_1 = (ulonglong)puVar14;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar13;
  param_1[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a37d340;
  puVar13[2] = uVar12;
  iVar8 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar9 = iVar8 + *(int *)(lVar11 + 0x40);
  if (iVar9 != 0 && SCARRY4(iVar8,*(int *)(lVar11 + 0x40)) == iVar9 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar12 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar5 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar6 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar7 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fa8;
    puVar13[2] = uVar10;
    puVar13[3] = uVar7;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar6;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar5;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar12;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 142cd2c93 FUN_142cd2c93 body=81 status=ok
// SIG undefined FUN_142cd2c93(void)

void FUN_142cd2c93(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cc397(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd2ce4 FUN_142cd2ce4 body=469 status=ok
// SIG undefined FUN_142cd2ce4(void)

void FUN_142cd2ce4(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142cd2e14:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_142cd2e51:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142cd2d4e;
LAB_142cd2d43:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142cd2d4e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000142cd2d7b;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142cd2dd1:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142cd2e51;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142cd2e14;
code_r0x000142cd2d7b:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142cd2dd1;
    }
  }
  goto LAB_142cd2d43;
}



// FUNCTION 142cd2eba FUN_142cd2eba body=481 status=ok
// SIG undefined FUN_142cd2eba(void)

void FUN_142cd2eba(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471ccc1c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd309c FUN_142cd309c body=232 status=ok
// SIG undefined FUN_142cd309c(void)

void FUN_142cd309c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd3184 FUN_142cd3184 body=81 status=ok
// SIG undefined FUN_142cd3184(void)

void FUN_142cd3184(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cccbf(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd31d6 FUN_142cd31d6 body=481 status=ok
// SIG undefined FUN_142cd31d6(void)

void FUN_142cd31d6(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471cd1f4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd33b8 FUN_142cd33b8 body=232 status=ok
// SIG undefined FUN_142cd33b8(void)

void FUN_142cd33b8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd34a0 FUN_142cd34a0 body=81 status=ok
// SIG undefined FUN_142cd34a0(void)

void FUN_142cd34a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cd297(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd34f2 FUN_142cd34f2 body=481 status=ok
// SIG undefined FUN_142cd34f2(void)

void FUN_142cd34f2(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471cd5d4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd36d4 FUN_142cd36d4 body=232 status=ok
// SIG undefined FUN_142cd36d4(void)

void FUN_142cd36d4(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd37bc FUN_142cd37bc body=81 status=ok
// SIG undefined FUN_142cd37bc(void)

void FUN_142cd37bc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cd677(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd380e FUN_142cd380e body=481 status=ok
// SIG undefined FUN_142cd380e(void)

void FUN_142cd380e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471cd9b4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd39f0 FUN_142cd39f0 body=232 status=ok
// SIG undefined FUN_142cd39f0(void)

void FUN_142cd39f0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142cd3ad8 FUN_142cd3ad8 body=81 status=ok
// SIG undefined FUN_142cd3ad8(void)

void FUN_142cd3ad8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471cda57(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cd3b2a FUN_142cd3b2a body=31 status=ok
// SIG undefined FUN_142cd3b2a(void)

undefined8 FUN_142cd3b2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd3b56 FUN_142cd3b56 body=518 status=ok
// SIG undefined FUN_142cd3b56(void)

void FUN_142cd3b56(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_1404e1be5(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd3d5e FUN_142cd3d5e body=282 status=ok
// SIG undefined FUN_142cd3d5e(void)

undefined8 * FUN_142cd3d5e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ccd8d1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142cd3e78 FUN_142cd3e78 body=481 status=ok
// SIG undefined FUN_142cd3e78(void)

void FUN_142cd3e78(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_144aad62b(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd405a FUN_142cd405a body=31 status=ok
// SIG undefined FUN_142cd405a(void)

undefined8 FUN_142cd405a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd407a FUN_142cd407a body=481 status=ok
// SIG undefined FUN_142cd407a(void)

void FUN_142cd407a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_144aad9b8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd425c FUN_142cd425c body=31 status=ok
// SIG undefined FUN_142cd425c(void)

undefined8 FUN_142cd425c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd427c FUN_142cd427c body=481 status=ok
// SIG undefined FUN_142cd427c(void)

void FUN_142cd427c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_144aadd45(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd445e FUN_142cd445e body=155 status=ok
// SIG undefined FUN_142cd445e(void)

undefined4 FUN_142cd445e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd44fa FUN_142cd44fa body=118 status=ok
// SIG undefined FUN_142cd44fa(void)

undefined8 * FUN_142cd44fa(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240c00;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd4576 FUN_142cd4576 body=12 status=ok
// SIG undefined FUN_142cd4576(void)

void FUN_142cd4576(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd457f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd4582 FUN_142cd4582 body=57 status=ok
// SIG undefined FUN_142cd4582(void)

undefined8 * FUN_142cd4582(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd45bc FUN_142cd45bc body=156 status=ok
// SIG undefined FUN_142cd45bc(void)

undefined8 FUN_142cd45bc(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd465a FUN_142cd465a body=118 status=ok
// SIG undefined FUN_142cd465a(void)

undefined8 * FUN_142cd465a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240c20;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd46d6 FUN_142cd46d6 body=12 status=ok
// SIG undefined FUN_142cd46d6(void)

void FUN_142cd46d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd46df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd46e2 FUN_142cd46e2 body=57 status=ok
// SIG undefined FUN_142cd46e2(void)

undefined8 * FUN_142cd46e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240c20;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd471c FUN_142cd471c body=161 status=ok
// SIG undefined FUN_142cd471c(void)

int FUN_142cd471c(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0x78) * 0x14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd47be FUN_142cd47be body=118 status=ok
// SIG undefined FUN_142cd47be(void)

undefined8 * FUN_142cd47be(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240c40;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd483a FUN_142cd483a body=12 status=ok
// SIG undefined FUN_142cd483a(void)

void FUN_142cd483a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd4843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd4846 FUN_142cd4846 body=57 status=ok
// SIG undefined FUN_142cd4846(void)

undefined8 * FUN_142cd4846(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240c40;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd4880 FUN_142cd4880 body=169 status=ok
// SIG undefined FUN_142cd4880(void)

int FUN_142cd4880(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar3 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  iVar2 = 1;
  if (1 < *(int *)(param_1[2] + 0x130)) {
    iVar2 = *(int *)(param_1[2] + 0x130);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd492a FUN_142cd492a body=118 status=ok
// SIG undefined FUN_142cd492a(void)

undefined8 * FUN_142cd492a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240c60;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd49a6 FUN_142cd49a6 body=12 status=ok
// SIG undefined FUN_142cd49a6(void)

void FUN_142cd49a6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd49af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd49b2 FUN_142cd49b2 body=57 status=ok
// SIG undefined FUN_142cd49b2(void)

undefined8 * FUN_142cd49b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240c60;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd49ec FUN_142cd49ec body=143 status=ok
// SIG undefined FUN_142cd49ec(void)

undefined8 FUN_142cd49ec(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[2];
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144aae0d2(&local_38,local_30);
    memcpy(local_38,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd4a7c FUN_142cd4a7c body=118 status=ok
// SIG undefined FUN_142cd4a7c(void)

undefined8 * FUN_142cd4a7c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240c80;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd4af8 FUN_142cd4af8 body=12 status=ok
// SIG undefined FUN_142cd4af8(void)

void FUN_142cd4af8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd4b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd4b04 FUN_142cd4b04 body=57 status=ok
// SIG undefined FUN_142cd4b04(void)

undefined8 * FUN_142cd4b04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240c80;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd4b3e FUN_142cd4b3e body=143 status=ok
// SIG undefined FUN_142cd4b3e(void)

undefined8 FUN_142cd4b3e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[2];
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144aae0d2(&local_38,local_30);
    memcpy(local_38,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd4bce FUN_142cd4bce body=118 status=ok
// SIG undefined FUN_142cd4bce(void)

undefined8 * FUN_142cd4bce(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240ca0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd4c4a FUN_142cd4c4a body=12 status=ok
// SIG undefined FUN_142cd4c4a(void)

void FUN_142cd4c4a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd4c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd4c56 FUN_142cd4c56 body=57 status=ok
// SIG undefined FUN_142cd4c56(void)

undefined8 * FUN_142cd4c56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240ca0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd4c90 FUN_142cd4c90 body=169 status=ok
// SIG undefined FUN_142cd4c90(void)

int FUN_142cd4c90(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar3 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  iVar2 = 1;
  if (1 < *(int *)(param_1[2] + 300)) {
    iVar2 = *(int *)(param_1[2] + 300);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd4d3a FUN_142cd4d3a body=118 status=ok
// SIG undefined FUN_142cd4d3a(void)

undefined8 * FUN_142cd4d3a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240cc0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd4db6 FUN_142cd4db6 body=12 status=ok
// SIG undefined FUN_142cd4db6(void)

void FUN_142cd4db6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd4dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd4dc2 FUN_142cd4dc2 body=57 status=ok
// SIG undefined FUN_142cd4dc2(void)

undefined8 * FUN_142cd4dc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240cc0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd4dfc FUN_142cd4dfc body=143 status=ok
// SIG undefined FUN_142cd4dfc(void)

undefined8 FUN_142cd4dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[2];
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144aae0d2(&local_38,local_30);
    memcpy(local_38,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd4e8c FUN_142cd4e8c body=118 status=ok
// SIG undefined FUN_142cd4e8c(void)

undefined8 * FUN_142cd4e8c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240ce0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd4f08 FUN_142cd4f08 body=12 status=ok
// SIG undefined FUN_142cd4f08(void)

void FUN_142cd4f08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd4f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd4f14 FUN_142cd4f14 body=57 status=ok
// SIG undefined FUN_142cd4f14(void)

undefined8 * FUN_142cd4f14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240ce0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd4f4e FUN_142cd4f4e body=143 status=ok
// SIG undefined FUN_142cd4f4e(void)

undefined8 FUN_142cd4f4e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[2];
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144aae0d2(&local_38,local_30);
    memcpy(local_38,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd4fde FUN_142cd4fde body=118 status=ok
// SIG undefined FUN_142cd4fde(void)

undefined8 * FUN_142cd4fde(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240d00;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd505a FUN_142cd505a body=12 status=ok
// SIG undefined FUN_142cd505a(void)

void FUN_142cd505a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5066 FUN_142cd5066 body=57 status=ok
// SIG undefined FUN_142cd5066(void)

undefined8 * FUN_142cd5066(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240d00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd50a0 FUN_142cd50a0 body=155 status=ok
// SIG undefined FUN_142cd50a0(void)

undefined4 FUN_142cd50a0(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0x48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd513c FUN_142cd513c body=118 status=ok
// SIG undefined FUN_142cd513c(void)

undefined8 * FUN_142cd513c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240d20;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd51b8 FUN_142cd51b8 body=12 status=ok
// SIG undefined FUN_142cd51b8(void)

void FUN_142cd51b8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd51c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd51c4 FUN_142cd51c4 body=57 status=ok
// SIG undefined FUN_142cd51c4(void)

undefined8 * FUN_142cd51c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240d20;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd51fe FUN_142cd51fe body=156 status=ok
// SIG undefined FUN_142cd51fe(void)

undefined8 FUN_142cd51fe(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd529c FUN_142cd529c body=118 status=ok
// SIG undefined FUN_142cd529c(void)

undefined8 * FUN_142cd529c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240d40;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd5318 FUN_142cd5318 body=12 status=ok
// SIG undefined FUN_142cd5318(void)

void FUN_142cd5318(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5324 FUN_142cd5324 body=57 status=ok
// SIG undefined FUN_142cd5324(void)

undefined8 * FUN_142cd5324(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240d40;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd535e FUN_142cd535e body=158 status=ok
// SIG undefined FUN_142cd535e(void)

int FUN_142cd535e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0x48) << 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd53fe FUN_142cd53fe body=118 status=ok
// SIG undefined FUN_142cd53fe(void)

undefined8 * FUN_142cd53fe(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240d60;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd547a FUN_142cd547a body=12 status=ok
// SIG undefined FUN_142cd547a(void)

void FUN_142cd547a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5486 FUN_142cd5486 body=57 status=ok
// SIG undefined FUN_142cd5486(void)

undefined8 * FUN_142cd5486(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240d60;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd54c0 FUN_142cd54c0 body=155 status=ok
// SIG undefined FUN_142cd54c0(void)

undefined4 FUN_142cd54c0(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0x58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd555c FUN_142cd555c body=118 status=ok
// SIG undefined FUN_142cd555c(void)

undefined8 * FUN_142cd555c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240d80;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd55d8 FUN_142cd55d8 body=12 status=ok
// SIG undefined FUN_142cd55d8(void)

void FUN_142cd55d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd55e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd55e4 FUN_142cd55e4 body=57 status=ok
// SIG undefined FUN_142cd55e4(void)

undefined8 * FUN_142cd55e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240d80;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd561e FUN_142cd561e body=156 status=ok
// SIG undefined FUN_142cd561e(void)

undefined8 FUN_142cd561e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd56bc FUN_142cd56bc body=118 status=ok
// SIG undefined FUN_142cd56bc(void)

undefined8 * FUN_142cd56bc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240da0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd5738 FUN_142cd5738 body=12 status=ok
// SIG undefined FUN_142cd5738(void)

void FUN_142cd5738(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5744 FUN_142cd5744 body=57 status=ok
// SIG undefined FUN_142cd5744(void)

undefined8 * FUN_142cd5744(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240da0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


