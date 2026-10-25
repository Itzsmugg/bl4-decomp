// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e931f0 FUN_144e931f0 body=85 status=ok
// SIG undefined FUN_144e931f0(void)

void FUN_144e931f0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  if (0 < param_2) {
    puVar3 = (undefined1 *)(param_1 + 6);
    do {
      param_2 = param_2 + -1;
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      puVar3[1] = puVar3[-6];
      *puVar3 = puVar3[-5];
      puVar3[-5] = uVar1;
      uVar1 = puVar3[-1];
      puVar3[-1] = puVar3[-4];
      puVar3[-4] = uVar1;
      uVar1 = puVar3[-2];
      puVar3[-2] = puVar3[-3];
      puVar3[-6] = uVar2;
      puVar3[-3] = uVar1;
      puVar3 = puVar3 + 8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 144e93250 FUN_144e93250 body=168 status=ok
// SIG undefined FUN_144e93250(void)

void FUN_144e93250(byte *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (8 < param_2) {
    lVar1 = (param_2 - 9U >> 3) + 1;
    param_2 = param_2 + lVar1 * -8;
    do {
      *param_1 = (&DAT_149bcbb00)[*param_1];
      param_1[1] = (&DAT_149bcbb00)[param_1[1]];
      param_1[2] = (&DAT_149bcbb00)[param_1[2]];
      param_1[3] = (&DAT_149bcbb00)[param_1[3]];
      param_1[4] = (&DAT_149bcbb00)[param_1[4]];
      param_1[5] = (&DAT_149bcbb00)[param_1[5]];
      param_1[6] = (&DAT_149bcbb00)[param_1[6]];
      param_1[7] = (&DAT_149bcbb00)[param_1[7]];
      param_1 = param_1 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  for (; 0 < param_2; param_2 = param_2 + -1) {
    *param_1 = (&DAT_149bcbb00)[*param_1];
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 144e93300 FUN_144e93300 body=21 status=ok
// SIG undefined FUN_144e93300(void)

undefined * FUN_144e93300(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149bcbc00;
  if (param_1 != 0) {
    puVar1 = &DAT_149bcbb00;
  }
  return puVar1;
}



// FUNCTION 144e93320 FUN_144e93320 body=74 status=ok
// SIG undefined FUN_144e93320(void)

undefined ** FUN_144e93320(short param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  for (puVar1 = DAT_14c796728; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    if (*(short *)((undefined **)puVar1[1] + 1) == param_1) {
      return (undefined **)puVar1[1];
    }
  }
  ppuVar3 = &PTR_DAT_14c731780;
  puVar2 = PTR_DAT_14c731780;
  while( true ) {
    if (puVar2 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
    if (*(short *)(ppuVar3 + 1) == param_1) break;
    ppuVar3 = ppuVar3 + 3;
    puVar2 = *ppuVar3;
  }
  return ppuVar3;
}



// FUNCTION 144e933e0 FUN_144e933e0 body=33 status=ok
// SIG undefined FUN_144e933e0(void)

undefined8 FUN_144e933e0(undefined8 *param_1)

{
  FUN_144e92fd0(param_1[0x87],*param_1,"Compression algorithm does not support random access");
  return 0;
}



// FUNCTION 144e93410 FUN_144e93410 body=238 status=ok
// SIG undefined FUN_144e93410(void)

void FUN_144e93410(longlong param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffdfeff;
  *(undefined1 **)(param_1 + 0x350) = &LAB_144e933d0;
  *(undefined1 **)(param_1 + 0x368) = &LAB_144e933d0;
  *(undefined1 **)(param_1 + 0x340) = &LAB_144e937a0;
  *(undefined4 *)(param_1 + 0x338) = 1;
  *(undefined1 **)(param_1 + 0x378) = &LAB_144e933a0;
  *(undefined1 **)(param_1 + 0x388) = &LAB_144e933b0;
  *(undefined1 **)(param_1 + 0x398) = &LAB_144e933c0;
  *(undefined1 **)(param_1 + 0x380) = &LAB_144e93370;
  *(undefined1 **)(param_1 + 0x390) = &LAB_144e93380;
  *(undefined1 **)(param_1 + 0x3a0) = &LAB_144e93390;
  *(code **)(param_1 + 0x3b0) = FUN_144e933e0;
  *(code **)(param_1 + 0x3c0) = FUN_144b77dd0;
  *(undefined1 **)(param_1 + 0x3c8) = &LAB_144b7b130;
  *(undefined1 **)(param_1 + 0x348) = &LAB_144e937b0;
  *(undefined4 *)(param_1 + 0x360) = 1;
  *(undefined1 **)(param_1 + 0x358) = &LAB_144e937b0;
  *(undefined1 **)(param_1 + 0x370) = &LAB_144e937b0;
  *(undefined **)(param_1 + 0x3a8) = &DAT_144e937c0;
  *(undefined **)(param_1 + 0x3b8) = &DAT_144e937c0;
  return;
}



// FUNCTION 144e93500 FUN_144e93500 body=321 status=ok
// SIG undefined FUN_144e93500(void)

undefined8 FUN_144e93500(longlong param_1,short param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  for (puVar1 = DAT_14c796728; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    ppuVar3 = (undefined **)puVar1[1];
    if (*(short *)(ppuVar3 + 1) == param_2) goto LAB_144e93545;
  }
  ppuVar3 = &PTR_DAT_14c731780;
  puVar2 = PTR_DAT_14c731780;
  while (puVar2 != (undefined *)0x0) {
    if (*(short *)(ppuVar3 + 1) == param_2) goto LAB_144e93545;
    ppuVar3 = ppuVar3 + 3;
    puVar2 = *ppuVar3;
  }
  ppuVar3 = (undefined **)0x0;
LAB_144e93545:
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffdfeff;
  *(undefined1 **)(param_1 + 0x350) = &LAB_144e933d0;
  *(undefined1 **)(param_1 + 0x368) = &LAB_144e933d0;
  *(undefined1 **)(param_1 + 0x340) = &LAB_144e937a0;
  *(undefined1 **)(param_1 + 0x378) = &LAB_144e933a0;
  *(undefined1 **)(param_1 + 0x388) = &LAB_144e933b0;
  *(undefined1 **)(param_1 + 0x398) = &LAB_144e933c0;
  *(undefined1 **)(param_1 + 0x380) = &LAB_144e93370;
  *(undefined1 **)(param_1 + 0x390) = &LAB_144e93380;
  *(undefined1 **)(param_1 + 0x3a0) = &LAB_144e93390;
  *(code **)(param_1 + 0x3b0) = FUN_144e933e0;
  *(code **)(param_1 + 0x3c0) = FUN_144b77dd0;
  *(undefined4 *)(param_1 + 0x338) = 1;
  *(undefined1 **)(param_1 + 0x3c8) = &LAB_144b7b130;
  *(undefined1 **)(param_1 + 0x348) = &LAB_144e937b0;
  *(undefined4 *)(param_1 + 0x360) = 1;
  *(undefined1 **)(param_1 + 0x358) = &LAB_144e937b0;
  *(undefined1 **)(param_1 + 0x370) = &LAB_144e937b0;
  *(undefined **)(param_1 + 0x3a8) = &DAT_144e937c0;
  *(undefined **)(param_1 + 0x3b8) = &DAT_144e937c0;
  if (ppuVar3 == (undefined **)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144e93637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)ppuVar3[2])();
  return uVar4;
}



// FUNCTION 144e93650 FUN_144e93650 body=166 status=ok
// SIG undefined FUN_144e93650(void)

undefined8 FUN_144e93650(undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  sVar1 = *(short *)(param_1 + 0xd);
  for (puVar2 = DAT_14c796728; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    ppuVar4 = (undefined **)puVar2[1];
    if (*(short *)(ppuVar4 + 1) == sVar1) goto LAB_144e936c9;
  }
  ppuVar4 = &PTR_DAT_14c731780;
  puVar3 = PTR_DAT_14c731780;
  while (puVar3 != (undefined *)0x0) {
    if (*(short *)(ppuVar4 + 1) == sVar1) goto LAB_144e936c9;
    ppuVar4 = ppuVar4 + 3;
    puVar3 = *ppuVar4;
  }
LAB_144e936a1:
  FUN_144e92fd0(param_1[0x87],*param_1,"Compression scheme %u %s encoding is not implemented",sVar1,
                param_2);
  return 0xffffffff;
LAB_144e936c9:
  if (ppuVar4 != (undefined **)0x0) {
    FUN_144e92fd0(param_1[0x87],*param_1,"%s %s encoding is not implemented",*ppuVar4,param_2);
    return 0xffffffff;
  }
  goto LAB_144e936a1;
}



// FUNCTION 144e93700 FUN_144e93700 body=160 status=ok
// SIG undefined FUN_144e93700(void)

undefined8 FUN_144e93700(undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  sVar1 = *(short *)(param_1 + 0xd);
  for (puVar2 = DAT_14c796728; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    ppuVar4 = (undefined **)puVar2[1];
    if (*(short *)(ppuVar4 + 1) == sVar1) goto LAB_144e93776;
  }
  ppuVar4 = &PTR_DAT_14c731780;
  puVar3 = PTR_DAT_14c731780;
  while (puVar3 != (undefined *)0x0) {
    if (*(short *)(ppuVar4 + 1) == sVar1) goto LAB_144e93776;
    ppuVar4 = ppuVar4 + 3;
    puVar3 = *ppuVar4;
  }
LAB_144e93751:
  FUN_144e92fd0(param_1[0x87],*param_1,"Compression scheme %u %s decoding is not implemented",sVar1,
                param_2);
  return 0;
LAB_144e93776:
  if (ppuVar4 != (undefined **)0x0) {
    FUN_144e92fd0(param_1[0x87],*param_1,"%s %s decoding is not implemented",*ppuVar4,param_2);
    return 0;
  }
  goto LAB_144e93751;
}



// FUNCTION 144e937d0 FUN_144e937d0 body=514 status=ok
// SIG undefined FUN_144e937d0(void)

undefined8 FUN_144e937d0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 0x40) != 0) {
    if ((uVar1 >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 2) = uVar1 & 0xffffefff;
      iVar2 = (*(code *)param_1[0x6e])();
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar2 = FUN_144e94730(param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((((*(uint *)(param_1 + 2) >> 0x15 & 1) == 0) || ((*(uint *)(param_1 + 2) & 8) != 0)) ||
     (*(int *)((longlong)param_1 + 0xc) != 2)) goto LAB_144e9384a;
  iVar2 = FUN_144b76e70(param_1);
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    pcVar4 = (char *)*param_1;
    pcVar6 = "File opened in read-only mode";
  }
  else if (param_1[3] == 0) {
    pcVar6 = "Directory has not yet been written";
    pcVar4 = "TIFFForceStrileArrayWriting";
  }
  else {
    if ((*(uint *)(param_1 + 2) & 8) == 0) {
      if ((*(uint *)(param_1 + 2) >> 0x15 & 1) == 0) {
        if (((((*(short *)(param_1 + 0x1e) == 0) || (param_1[0x1f] != 0)) ||
             ((*(short *)((longlong)param_1 + 0xf2) != 0 ||
              ((param_1[0x20] != 0 || (*(short *)(param_1 + 0x22) == 0)))))) || (param_1[0x23] != 0)
            ) || ((*(short *)((longlong)param_1 + 0x112) != 0 || (param_1[0x24] != 0)))) {
          pcVar6 = "Function not called together with TIFFDeferStrileArrayWriting()";
          pcVar4 = "TIFFForceStrileArrayWriting";
          goto LAB_144e9383e;
        }
        if ((param_1[0x1b] == 0) && (iVar3 = FUN_144e945e0(param_1), iVar3 == 0))
        goto LAB_144e9384a;
      }
      uVar5 = 0x111;
      if (iVar2 != 0) {
        uVar5 = 0x144;
      }
      iVar3 = FUN_14525a070(param_1,uVar5,0x10,*(undefined4 *)((longlong)param_1 + 0xd4),
                            param_1[0x1b]);
      if (iVar3 != 0) {
        uVar5 = 0x117;
        if (iVar2 != 0) {
          uVar5 = 0x145;
        }
        iVar2 = FUN_14525a070(param_1,uVar5,0x10,*(undefined4 *)((longlong)param_1 + 0xd4),
                              param_1[0x1c]);
        if (iVar2 != 0) {
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffdfffbf;
          return 1;
        }
      }
      goto LAB_144e9384a;
    }
    pcVar6 = 
    "Directory has changes other than the strile arrays. TIFFRewriteDirectory() should be called instead"
    ;
    pcVar4 = "TIFFForceStrileArrayWriting";
  }
LAB_144e9383e:
  FUN_144e92fd0(param_1[0x87],pcVar4,pcVar6);
LAB_144e9384a:
  if (((*(uint *)(param_1 + 2) & 0x200008) != 0) && (iVar2 = FUN_145259d00(param_1), iVar2 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 144e939e0 FUN_144e939e0 body=179 status=ok
// SIG undefined FUN_144e939e0(void)

int * FUN_144e939e0(longlong param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int *local_res8;
  int local_38;
  longlong local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_2c = 0;
  local_24 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_res8 = &local_38;
  piVar2 = *(int **)(param_1 + 0x480);
  if (((piVar2 == (int *)0x0) || (*piVar2 != param_2)) || ((param_3 != 0 && (param_3 != piVar2[2])))
     ) {
    if (*(void **)(param_1 + 0x470) == (void *)0x0) {
      return (int *)0x0;
    }
    local_34 = (ulonglong)param_3 << 0x20;
    local_38 = param_2;
    puVar1 = bsearch(&local_res8,*(void **)(param_1 + 0x470),*(size_t *)(param_1 + 0x478),8,
                     (_PtFuncCompare *)&LAB_144e94540);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      piVar2 = (int *)*puVar1;
    }
    *(int **)(param_1 + 0x480) = piVar2;
  }
  return piVar2;
}



// FUNCTION 144e93aa0 FUN_144e93aa0 body=84 status=ok
// SIG undefined FUN_144e93aa0(void)

longlong FUN_144e93aa0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144e939e0(param_1,param_2,0);
  if (lVar1 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFieldWithTag",
                  "Internal error, unknown tag 0x%x",param_2 & 0xffffffff);
  }
  return lVar1;
}



// FUNCTION 144e93b00 FUN_144e93b00 body=3 status=ok
// SIG undefined FUN_144e93b00(void)

undefined4 FUN_144e93b00(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144e93b10 FUN_144e93b10 body=54 status=ok
// SIG undefined FUN_144e93b10(void)

undefined8 FUN_144e93b10(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
    return 1;
  case 3:
  case 8:
    return 2;
  case 4:
  case 9:
  case 0xb:
  case 0xd:
    return 4;
  case 5:
  case 10:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x12:
    return 8;
  default:
    return 0;
  }
}



// FUNCTION 144e93ba0 FUN_144e93ba0 body=8 status=ok
// SIG undefined FUN_144e93ba0(void)

undefined * FUN_144e93ba0(void)

{
  return &DAT_149bcbf30;
}



// FUNCTION 144e93bb0 FUN_144e93bb0 body=629 status=ok
// SIG undefined FUN_144e93bb0(void)

void FUN_144e93bb0(longlong param_1,longlong param_2)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  size_t _NumOfElements;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *local_res8;
  int local_58 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar2 = *(longlong *)(param_1 + 0x470);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x478) == 0)) {
    uVar5 = *(uint *)(param_2 + 8);
    uVar6 = (ulonglong)uVar5;
    piVar9 = *(int **)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x480) = 0;
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x478) != 0)) {
      lVar2 = FUN_144b7aa10(param_1,lVar2,*(longlong *)(param_1 + 0x478) + uVar6,8,
                            "for fields array");
      goto LAB_144e93c7b;
    }
  }
  else {
    uVar6 = 0;
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x470) + uVar6 * 8);
      if ((*(short *)((longlong)_Memory + 0x18) == 0x41) &&
         (iVar1 = strncmp("Tag ",*(char **)((longlong)_Memory + 0x20),4), iVar1 == 0)) {
        free(*(void **)((longlong)_Memory + 0x20));
        free(_Memory);
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < *(ulonglong *)(param_1 + 0x478));
    free(*(void **)(param_1 + 0x470));
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    uVar6 = (ulonglong)*(uint *)(param_2 + 8);
    piVar9 = *(int **)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x480) = 0;
  }
  uVar5 = (uint)uVar6;
  lVar2 = FUN_144b7a970(param_1,uVar6,8,"for fields array");
LAB_144e93c7b:
  *(longlong *)(param_1 + 0x470) = lVar2;
  if (lVar2 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFMergeFields",
                  "Failed to allocate fields array");
  }
  else {
    uVar6 = 0;
    piVar8 = piVar9;
    if (uVar5 == 0) {
      _NumOfElements = *(size_t *)(param_1 + 0x478);
    }
    else {
      do {
        local_res8 = local_58;
        local_58[0] = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = 0;
        local_58[6] = 0;
        local_38 = 0;
        uStack_30 = 0;
        if ((*(int **)(param_1 + 0x480) == (int *)0x0) || (**(int **)(param_1 + 0x480) != *piVar8))
        {
          if (*(void **)(param_1 + 0x470) != (void *)0x0) {
            local_58[0] = *piVar8;
            puVar3 = bsearch(&local_res8,*(void **)(param_1 + 0x470),*(size_t *)(param_1 + 0x478),8,
                             (_PtFuncCompare *)&LAB_144e94540);
            uVar4 = 0;
            if (puVar3 != (ulonglong *)0x0) {
              uVar4 = *puVar3;
            }
            *(ulonglong *)(param_1 + 0x480) = uVar4;
            if (uVar4 != 0) goto LAB_144e93db7;
          }
          *(int **)(*(longlong *)(param_1 + 0x470) + *(longlong *)(param_1 + 0x478) * 8) =
               piVar9 + uVar6 * 0xc;
          *(longlong *)(param_1 + 0x478) = *(longlong *)(param_1 + 0x478) + 1;
        }
LAB_144e93db7:
        _NumOfElements = *(size_t *)(param_1 + 0x478);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
        piVar8 = piVar8 + 0xc;
      } while (uVar7 < uVar5);
    }
    qsort(*(void **)(param_1 + 0x470),_NumOfElements,8,(_PtFuncCompare *)&LAB_144e94540);
    if (uVar5 != 0) {
      return;
    }
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFSetupFields","Setting up field info failed");
  return;
}



// FUNCTION 144e93e30 FUN_144e93e30 body=465 status=ok
// SIG undefined FUN_144e93e30(void)

uint FUN_144e93e30(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  size_t _NumOfElements;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  int *local_res8;
  int local_58 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  *(undefined8 *)(param_1 + 0x480) = 0;
  if ((*(longlong *)(param_1 + 0x470) == 0) || (*(longlong *)(param_1 + 0x478) == 0)) {
    lVar1 = FUN_144b7a970(param_1,(ulonglong)param_3,8,"for fields array");
  }
  else {
    lVar1 = FUN_144b7aa10(param_1,*(longlong *)(param_1 + 0x470),
                          *(longlong *)(param_1 + 0x478) + (ulonglong)param_3,8,"for fields array");
  }
  *(longlong *)(param_1 + 0x470) = lVar1;
  if (lVar1 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFMergeFields",
                  "Failed to allocate fields array");
    return 0;
  }
  piVar4 = param_2;
  uVar6 = 0;
  if (param_3 == 0) {
    _NumOfElements = *(size_t *)(param_1 + 0x478);
  }
  else {
    do {
      local_res8 = local_58;
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_38 = 0;
      uStack_30 = 0;
      if ((*(int **)(param_1 + 0x480) == (int *)0x0) || (**(int **)(param_1 + 0x480) != *piVar4)) {
        if (*(void **)(param_1 + 0x470) != (void *)0x0) {
          local_58[0] = *piVar4;
          puVar2 = bsearch(&local_res8,*(void **)(param_1 + 0x470),*(size_t *)(param_1 + 0x478),8,
                           (_PtFuncCompare *)&LAB_144e94540);
          uVar3 = 0;
          if (puVar2 != (ulonglong *)0x0) {
            uVar3 = *puVar2;
          }
          *(ulonglong *)(param_1 + 0x480) = uVar3;
          if (uVar3 != 0) goto LAB_144e93fab;
        }
        *(int **)(*(longlong *)(param_1 + 0x470) + *(longlong *)(param_1 + 0x478) * 8) =
             param_2 + uVar6 * 0xc;
        *(longlong *)(param_1 + 0x478) = *(longlong *)(param_1 + 0x478) + 1;
      }
LAB_144e93fab:
      _NumOfElements = *(size_t *)(param_1 + 0x478);
      uVar5 = (int)uVar6 + 1;
      piVar4 = piVar4 + 0xc;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_3);
  }
  qsort(*(void **)(param_1 + 0x470),_NumOfElements,8,(_PtFuncCompare *)&LAB_144e94540);
  return param_3;
}



// FUNCTION 144e94010 FUN_144e94010 body=420 status=ok
// SIG undefined FUN_144e94010(void)

undefined4 * FUN_144e94010(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *_Memory;
  longlong lVar1;
  
  _Memory = (undefined4 *)FUN_144e92f50(0x30);
  if (_Memory != (undefined4 *)0x0) {
    FUN_144e92f90(_Memory,0,0x30);
    *_Memory = param_2;
    _Memory[1] = 0xfffdfffd;
    _Memory[2] = param_3;
    _Memory[3] = 0;
    switch(param_3) {
    case 1:
    case 7:
      _Memory[4] = 0x28;
      _Memory[5] = 0x28;
      break;
    case 2:
      _Memory[4] = 0x27;
      _Memory[5] = 0x27;
      break;
    case 3:
      _Memory[4] = 0x2a;
      _Memory[5] = 0x2a;
      break;
    case 4:
      _Memory[4] = 0x2c;
      _Memory[5] = 0x2c;
      break;
    case 5:
    case 10:
    case 0xb:
      _Memory[4] = 0x30;
      _Memory[5] = 0x30;
      break;
    case 6:
      _Memory[4] = 0x29;
      _Memory[5] = 0x29;
      break;
    case 8:
      _Memory[4] = 0x2b;
      _Memory[5] = 0x2b;
      break;
    case 9:
      _Memory[4] = 0x2d;
      _Memory[5] = 0x2d;
      break;
    case 0xc:
      _Memory[4] = 0x31;
      _Memory[5] = 0x31;
      break;
    case 0xd:
    case 0x12:
      _Memory[4] = 0x32;
      _Memory[5] = 0x32;
      break;
    default:
      *(undefined8 *)(_Memory + 4) = 0;
      break;
    case 0x10:
      _Memory[4] = 0x2e;
      _Memory[5] = 0x2e;
      break;
    case 0x11:
      _Memory[4] = 0x2f;
      _Memory[5] = 0x2f;
    }
    _Memory[6] = 0x1010041;
    lVar1 = FUN_144e92f50(0x20);
    *(longlong *)(_Memory + 8) = lVar1;
    if (lVar1 == 0) {
      free(_Memory);
      _Memory = (undefined4 *)0x0;
    }
    else {
      *(undefined8 *)(_Memory + 10) = 0;
      FUN_14626ea25(lVar1,0x20,"Tag %d",param_2);
    }
    return _Memory;
  }
  return (undefined4 *)0x0;
}



// FUNCTION 144e94200 FUN_144e94200 body=245 status=ok
// SIG undefined FUN_144e94200(void)

undefined8 FUN_144e94200(longlong param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  
  if (0xc5f2 < param_2) {
    return 1;
  }
  if (param_2 != 0xc5f2) {
    switch(param_2) {
    case 0x124:
    case 0x125:
    case 0x13d:
    case 0x146:
    case 0x147:
    case 0x148:
    case 0x15b:
    case 0x200:
    case 0x201:
    case 0x202:
    case 0x203:
    case 0x207:
    case 0x208:
    case 0x209:
      break;
    default:
      goto switchD_144e94235_caseD_126;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x68);
  if (uVar1 < 0x8004) {
    if (uVar1 != 0x8003) {
      switch(uVar1) {
      case 2:
      case 3:
      case 4:
        break;
      case 5:
      case 8:
        goto switchD_144e94264_caseD_5;
      case 6:
        switch(param_2) {
        case 0x200:
        case 0x201:
        case 0x202:
        case 0x203:
        case 0x207:
        case 0x208:
        case 0x209:
          goto switchD_144e94235_caseD_126;
        default:
          return 0;
        }
      case 7:
        bVar2 = param_2 == 0x15b;
        goto LAB_144e9426c;
      default:
        return 0;
      }
    }
    if (param_2 == 0x124) {
      bVar2 = uVar1 == 3;
    }
    else {
      if (param_2 != 0x125) {
        if (param_2 == 0x146) {
          return 1;
        }
        if (param_2 == 0x147) {
          return 1;
        }
        bVar2 = param_2 == 0x148;
LAB_144e942f0:
        if (!bVar2) {
          return 0;
        }
        return 1;
      }
      bVar2 = uVar1 == 4;
    }
  }
  else {
    if (uVar1 == 0x808d) {
      bVar2 = param_2 == 0x13d;
      goto LAB_144e942f0;
    }
    if (uVar1 != 0x80b2) {
      if (uVar1 == 0x8847) {
        bVar2 = param_2 == 0xc5f2;
        goto LAB_144e9426c;
      }
      if ((uVar1 != 0x886d) && (uVar1 != 50000)) {
        return 0;
      }
    }
switchD_144e94264_caseD_5:
    bVar2 = param_2 == 0x13d;
  }
LAB_144e9426c:
  if (!bVar2) {
    return 0;
  }
switchD_144e94235_caseD_126:
  return 1;
}



// FUNCTION 144e94430 FUN_144e94430 body=56 status=ok
// SIG undefined FUN_144e94430(void)

undefined8 FUN_144e94430(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 6:
  case 7:
    return 1;
  case 3:
  case 8:
    return 2;
  case 4:
  case 5:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
    return 4;
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x12:
    return 8;
  default:
    return 0;
  }
}



// FUNCTION 144e944b0 FUN_144e944b0 body=62 status=ok
// SIG undefined FUN_144e944b0(void)

undefined8 FUN_144e944b0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 2:
  case 3:
  case 0x10:
  case 0x11:
  case 0x1c:
  case 0x1d:
  case 0x28:
  case 0x29:
    return 1;
  case 4:
  case 5:
  case 0x12:
  case 0x13:
  case 0x1e:
  case 0x1f:
  case 0x2a:
  case 0x2b:
    return 2;
  case 6:
  case 7:
  case 10:
  case 0xd:
  case 0xe:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x20:
  case 0x21:
  case 0x24:
  case 0x2c:
  case 0x2d:
  case 0x30:
    return 4;
  case 8:
  case 9:
  case 0xb:
  case 0xc:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x22:
  case 0x23:
  case 0x25:
  case 0x26:
  case 0x2e:
  case 0x2f:
  case 0x31:
  case 0x32:
    return 8;
  }
}



// FUNCTION 144e94570 FUN_144e94570 body=101 status=ok
// SIG undefined FUN_144e94570(void)

void FUN_144e94570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  if (PTR_FUN_14c70a798 != (undefined *)0x0) {
    (*(code *)PTR_FUN_14c70a798)(param_2,param_3,&local_res20);
  }
  if (DAT_14c796738 != (code *)0x0) {
    (*DAT_14c796738)(param_1,param_2,param_3,&local_res20);
  }
  return;
}



// FUNCTION 144e945e0 FUN_144e945e0 body=332 status=ok
// SIG undefined FUN_144e945e0(void)

undefined8 FUN_144e945e0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    if (((*(uint *)(param_1 + 0x38) >> 0x11 & 1) == 0) || (*(int *)(param_1 + 0x4c) != 0)) {
      uVar1 = FUN_144b77d80();
    }
    else {
      uVar1 = (uint)*(ushort *)(param_1 + 0x72);
    }
  }
  else if (((*(uint *)(param_1 + 0x38) & 4) == 0) || (*(int *)(param_1 + 0x4c) != 0)) {
    uVar1 = FUN_144b7b020();
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x72);
  }
  *(uint *)(param_1 + 0xd0) = uVar1;
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar4 = 4;
  if ((*(uint *)(param_1 + 0x10) & 0x80000) != 0) {
    uVar4 = 8;
  }
  if (uVar1 < 0x80000000 / uVar4) {
    if (*(short *)(param_1 + 0x9a) == 2) {
      *(uint *)(param_1 + 0xd0) = uVar1 / *(ushort *)(param_1 + 0x72);
    }
    uVar2 = FUN_144b7a970(param_1,uVar1,8,"for \"StripOffsets\" array");
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    lVar3 = FUN_144b7a970(param_1,*(undefined4 *)(param_1 + 0xd4),8,"for \"StripByteCounts\" array")
    ;
    *(longlong *)(param_1 + 0xe0) = lVar3;
    if ((*(longlong *)(param_1 + 0xd8) != 0) && (lVar3 != 0)) {
      FUN_144e92f90(*(longlong *)(param_1 + 0xd8),0,(ulonglong)*(uint *)(param_1 + 0xd4) << 3);
      FUN_144e92f90(*(undefined8 *)(param_1 + 0xe0),0,(ulonglong)*(uint *)(param_1 + 0xd4) << 3);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x3000000;
      return 1;
    }
  }
  else {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFSetupStrips",
                  "Too large Strip/Tile Offsets/ByteCounts arrays");
  }
  return 0;
}



// FUNCTION 144e94730 FUN_144e94730 body=155 status=ok
// SIG undefined FUN_144e94730(void)

undefined8 FUN_144e94730(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x410);
  if ((0 < lVar4) && (uVar3 = *(uint *)(param_1 + 0x10), (uVar3 >> 0x14 & 1) != 0)) {
    if (((uVar3 & *(ushort *)(param_1 + 0x6e)) == 0) && ((uVar3 >> 8 & 1) == 0)) {
      FUN_144e93250(*(undefined8 *)(param_1 + 1000),lVar4,uVar3,lVar4);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar4 = *(longlong *)(param_1 + 0x410);
    }
    if ((uVar3 >> 10 & 1) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x304);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x32c);
    }
    uVar2 = FUN_144e947d0(param_1,uVar1,*(undefined8 *)(param_1 + 1000),lVar4);
    *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 1000);
    *(undefined8 *)(param_1 + 0x410) = 0;
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 144e947d0 FUN_144e947d0 body=423 status=ok
// SIG undefined FUN_144e947d0(void)

undefined8 FUN_144e947d0(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = -1;
  lVar2 = (param_2 & 0xffffffff) * 8;
  lVar3 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0xd8));
  if ((lVar3 == 0) || (uVar6 = *(ulonglong *)(param_1 + 0x308), uVar6 == 0)) {
    uVar6 = *(ulonglong *)(lVar2 + *(longlong *)(param_1 + 0xe0));
    if ((uVar6 == 0) || ((lVar3 == 0 || (uVar6 < param_4)))) {
      uVar5 = (**(code **)(param_1 + 0x450))(*(undefined8 *)(param_1 + 0x438),0,2);
      *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0xd8)) = uVar5;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
    }
    else {
      iVar4 = FUN_144b7aaf0(param_1);
      if (iVar4 == 0) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFAppendToStrip",
                      "Seek error at scanline %lu",*(undefined4 *)(param_1 + 0x2fc));
        return 0;
      }
    }
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0xd8));
    lVar7 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0xe0));
    *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0xe0)) = 0;
    uVar6 = *(ulonglong *)(param_1 + 0x308);
  }
  uVar8 = uVar6 + param_4;
  if ((*(uint *)(param_1 + 0x10) & 0x80000) == 0) {
    uVar8 = uVar8 & 0xffffffff;
  }
  if ((uVar8 < uVar6) || (uVar8 < param_4)) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFAppendToStrip",
                  "Maximum TIFF file size exceeded");
  }
  else {
    uVar6 = (**(code **)(param_1 + 0x448))(*(undefined8 *)(param_1 + 0x438),param_3,param_4);
    if (uVar6 == param_4) {
      *(ulonglong *)(param_1 + 0x308) = uVar8;
      plVar1 = (longlong *)(lVar2 + *(longlong *)(param_1 + 0xe0));
      *plVar1 = *plVar1 + param_4;
      if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 0xe0)) != lVar7) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
      }
      return 1;
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFAppendToStrip","Write error at scanline %lu"
                  ,*(undefined4 *)(param_1 + 0x2fc));
  }
  return 0;
}



// FUNCTION 144e94980 FUN_144e94980 body=584 status=ok
// SIG undefined FUN_144e94980(void)

undefined8 FUN_144e94980(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  
  iVar1 = FUN_144e93e30(param_1,&DAT_149bd0050,4);
  if (iVar1 == 0) {
    pcVar4 = "Merging JPEG codec-specific tags failed";
  }
  else {
    lVar2 = FUN_144e92f50(0x540);
    *(longlong *)(param_1 + 0x3d0) = lVar2;
    if (lVar2 != 0) {
      FUN_144e92f90(lVar2,0,0x540);
      lVar2 = *(longlong *)(param_1 + 0x3d0);
      *(longlong *)(lVar2 + 0x488) = param_1;
      *(undefined8 *)(lVar2 + 0x4f8) = *(undefined8 *)(param_1 + 0x490);
      *(undefined1 **)(param_1 + 0x490) = &LAB_144e97a90;
      *(undefined8 *)(lVar2 + 0x500) = *(undefined8 *)(param_1 + 0x488);
      *(code **)(param_1 + 0x488) = FUN_144e97910;
      *(undefined8 *)(lVar2 + 0x508) = *(undefined8 *)(param_1 + 0x498);
      *(code **)(param_1 + 0x498) = FUN_144e97b10;
      *(undefined8 *)(lVar2 + 0x520) = 0;
      *(undefined4 *)(lVar2 + 0x528) = 0;
      *(undefined8 *)(lVar2 + 0x52c) = 0x4b;
      *(undefined8 *)(lVar2 + 0x534) = 3;
      *(code **)(param_1 + 0x340) = FUN_144e967a0;
      *(code **)(param_1 + 0x348) = FUN_144e968b0;
      *(code **)(param_1 + 0x350) = FUN_144e96a50;
      *(code **)(param_1 + 0x378) = FUN_144e94bd0;
      *(code **)(param_1 + 0x388) = FUN_144e94bd0;
      *(code **)(param_1 + 0x398) = FUN_144e94bd0;
      *(code **)(param_1 + 0x358) = FUN_144e96ef0;
      *(code **)(param_1 + 0x368) = FUN_144e973b0;
      *(code **)(param_1 + 0x370) = FUN_144e976d0;
      *(code **)(param_1 + 0x380) = FUN_144e95010;
      *(code **)(param_1 + 0x390) = FUN_144e95010;
      *(code **)(param_1 + 0x3a0) = FUN_144e95010;
      *(code **)(param_1 + 0x3b8) = FUN_144e977f0;
      *(undefined8 *)(lVar2 + 0x510) = *(undefined8 *)(param_1 + 0x3c0);
      *(code **)(param_1 + 0x3c0) = FUN_144e97b90;
      *(undefined8 *)(lVar2 + 0x518) = *(undefined8 *)(param_1 + 0x3c8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
      *(code **)(param_1 + 0x3c8) = FUN_144e97bf0;
      *(undefined4 *)(lVar2 + 600) = 0;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        *(undefined4 *)(lVar2 + 0x528) = 2000;
        lVar3 = FUN_144e92f50(2000);
        *(longlong *)(lVar2 + 0x520) = lVar3;
        if (lVar3 == 0) {
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFInitJPEG",
                        "Failed to allocate memory for JPEG tables");
          return 0;
        }
        FUN_144e92f90(lVar3,0,2000);
      }
      return 1;
    }
    pcVar4 = "No space for JPEG state block";
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFInitJPEG",pcVar4);
  return 0;
}



// FUNCTION 144e94bd0 FUN_144e94bd0 body=271 status=ok
// SIG undefined FUN_144e94bd0(void)

undefined8 FUN_144e94bd0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong local_res8;
  
  lVar1 = param_1[0x7a];
  *(undefined8 *)(lVar1 + 0x450) = param_1[0x81];
  lVar2 = *(longlong *)(lVar1 + 0x498);
  *(undefined8 *)(lVar1 + 0x458) = param_1[0x82];
  if (lVar2 == 0) {
LAB_144e94cca:
    uVar5 = 0;
  }
  else {
    if (param_3 % lVar2 != 0) {
      FUN_144e94570(param_1[0x87],*param_1,"fractional scanline not read");
    }
    uVar4 = (ulonglong)*(uint *)(lVar1 + 0x34);
    if (param_3 / lVar2 <= (longlong)(ulonglong)*(uint *)(lVar1 + 0x34)) {
      uVar4 = param_3 / lVar2;
    }
    uVar5 = 1;
    if (uVar4 != 0) {
      do {
        local_res8 = param_2;
        iVar3 = FUN_144e95a80(lVar1,&local_res8,1);
        if (iVar3 != 1) goto LAB_144e94cca;
        *(int *)((longlong)param_1 + 0x2fc) = *(int *)((longlong)param_1 + 0x2fc) + 1;
        uVar4 = uVar4 - 1;
        param_2 = param_2 + *(longlong *)(lVar1 + 0x498);
      } while (0 < (longlong)uVar4);
    }
    param_1[0x81] = *(undefined8 *)(lVar1 + 0x450);
    param_1[0x82] = *(undefined8 *)(lVar1 + 0x458);
    if ((*(uint *)(lVar1 + 0x78) <= *(uint *)(lVar1 + 0x98)) &&
       (iVar3 = FUN_144e95b20(lVar1), iVar3 == 0)) {
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 144e94ce0 FUN_144e94ce0 body=809 status=ok
// SIG undefined FUN_144e94ce0(void)

ulonglong FUN_144e94ce0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  uint local_54;
  ulonglong local_50;
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  uVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x2fc);
  local_50 = (ulonglong)*(uint *)(lVar3 + 0x34);
  if ((uVar5 < *(uint *)(lVar3 + 0x34)) && ((*(uint *)(param_1 + 0x10) & 0x400) == 0)) {
    local_50 = (ulonglong)uVar5;
  }
  uVar14 = 0;
  if (local_50 == 0) {
LAB_144e94fc0:
    if ((*(uint *)(lVar3 + 0x98) < *(uint *)(lVar3 + 0x78)) ||
       (iVar7 = FUN_144e95b20(lVar3), iVar7 != 0)) {
      uVar14 = 1;
    }
  }
  else {
    iVar7 = *(int *)(lVar3 + 0x4f4);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0x120) + 0x88);
    if (*(longlong *)(lVar3 + 0x498) <= param_3) {
      do {
        if (7 < *(int *)(lVar3 + 0x4f0)) {
          iVar12 = *(int *)(lVar3 + 0x17c) << 3;
          iVar6 = FUN_144e95ad0(lVar3,lVar3 + 0x4a0,iVar12);
          if (iVar6 != iVar12) goto LAB_144e94fbc;
          *(undefined4 *)(lVar3 + 0x4f0) = 0;
        }
        local_54 = 0;
        if (0 < *(int *)(lVar3 + 0x38)) {
          piVar8 = (int *)(*(longlong *)(lVar3 + 0x120) + 0xc);
          plVar17 = (longlong *)(lVar3 + 0x4a0);
          uVar10 = uVar14;
          uVar9 = uVar14;
          do {
            iVar6 = *piVar8;
            iVar12 = piVar8[-1];
            uVar5 = (uint)uVar10;
            if (0 < iVar6) {
              lVar16 = (longlong)iVar7;
              uVar10 = uVar14;
              do {
                puVar11 = *(undefined1 **)
                           (*plVar17 + (longlong)(iVar6 * *(int *)(lVar3 + 0x4f0) + (int)uVar10) * 8
                           );
                iVar18 = (int)uVar9;
                puVar15 = (undefined1 *)(param_2 + iVar18);
                if (param_3 < (longlong)
                              ((longlong)iVar18 + (ulonglong)(iVar2 - 1) * lVar16 + (longlong)iVar12
                              )) {
                  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGDecodeRaw",
                                "application buffer not large enough for all data, possible subsampling issue"
                               );
                  return 0;
                }
                iVar4 = iVar2;
                if (iVar12 == 1) {
                  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                    uVar1 = *puVar11;
                    puVar11 = puVar11 + 1;
                    *puVar15 = uVar1;
                    puVar15 = puVar15 + lVar16;
                  }
                }
                else {
                  while (iVar4 != 0) {
                    uVar9 = uVar14;
                    if (0 < iVar12) {
                      do {
                        uVar1 = *puVar11;
                        puVar11 = puVar11 + 1;
                        puVar15[uVar9] = uVar1;
                        uVar9 = uVar9 + 1;
                      } while ((longlong)uVar9 < (longlong)iVar12);
                    }
                    puVar15 = puVar15 + lVar16;
                    iVar4 = iVar4 + -1;
                  }
                }
                uVar9 = (ulonglong)(uint)(iVar18 + iVar12);
                uVar13 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar13;
                uVar5 = local_54;
              } while ((int)uVar13 < iVar6);
            }
            local_54 = uVar5 + 1;
            uVar10 = (ulonglong)local_54;
            piVar8 = piVar8 + 0x18;
            plVar17 = plVar17 + 1;
          } while ((int)local_54 < *(int *)(lVar3 + 0x38));
        }
        *(int *)(lVar3 + 0x4f0) = *(int *)(lVar3 + 0x4f0) + 1;
        *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + (uint)*(ushort *)(lVar3 + 0x494);
        lVar16 = *(longlong *)(lVar3 + 0x498);
        param_2 = param_2 + lVar16;
        param_3 = param_3 - lVar16;
        local_50 = local_50 - *(ushort *)(lVar3 + 0x494);
        if ((longlong)local_50 < 1) goto LAB_144e94fc0;
      } while (lVar16 <= param_3);
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGDecodeRaw",
                  "application buffer not large enough for all data.");
LAB_144e94fbc:
    uVar14 = 0;
  }
  return uVar14;
}



// FUNCTION 144e95010 FUN_144e95010 body=420 status=ok
// SIG undefined FUN_144e95010(void)

undefined8 FUN_144e95010(undefined8 *param_1,void *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  void *_Memory;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  void *local_res8;
  
  lVar1 = param_1[0x7a];
  _Memory = (void *)0x0;
  iVar6 = 0;
  uVar3 = param_3 / *(longlong *)(lVar1 + 0x498);
  if (param_3 % *(longlong *)(lVar1 + 0x498) != 0) {
    FUN_144e94570(param_1[0x87],*param_1);
  }
  if ((*(uint *)(param_1 + 2) & 0x400) == 0) {
    if ((longlong)(ulonglong)*(uint *)((longlong)param_1 + 0x4c) <
        (longlong)(uVar3 + *(uint *)((longlong)param_1 + 0x2fc))) {
      uVar3 = (ulonglong)
              (*(uint *)((longlong)param_1 + 0x4c) - *(uint *)((longlong)param_1 + 0x2fc));
    }
  }
  if (*(int *)(lVar1 + 0x48) == 0xc) {
    iVar6 = (int)((*(longlong *)(lVar1 + 0x498) * 2) / 3);
    _Memory = (void *)FUN_144e92f50((longlong)iVar6 * 2);
    if (_Memory == (void *)0x0) {
      FUN_144e92fd0(param_1[0x87],"JPEGEncode","Failed to allocate memory");
      return 0;
    }
  }
  while( true ) {
    if ((longlong)uVar3 < 1) {
      if (*(int *)(lVar1 + 0x48) == 0xc) {
        free(_Memory);
      }
      return 1;
    }
    uVar3 = uVar3 - 1;
    local_res8 = param_2;
    if (*(int *)(lVar1 + 0x48) == 0xc) {
      lVar5 = 0;
      local_res8 = _Memory;
      if (0 < iVar6 / 2) {
        puVar4 = (undefined1 *)((longlong)param_2 + 2);
        do {
          *(byte *)((longlong)_Memory + lVar5 * 4) = (byte)puVar4[-1] >> 4 | puVar4[-2] << 4;
          *(undefined1 *)((longlong)_Memory + lVar5 * 4 + 1) = *puVar4;
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 3;
        } while (lVar5 < iVar6 / 2);
      }
    }
    iVar2 = FUN_144e95860(lVar1,&local_res8);
    if (iVar2 != 1) break;
    if (0 < (longlong)uVar3) {
      *(int *)((longlong)param_1 + 0x2fc) = *(int *)((longlong)param_1 + 0x2fc) + 1;
    }
    param_2 = (void *)((longlong)param_2 + *(longlong *)(lVar1 + 0x498));
  }
  return 0;
}



// FUNCTION 144e951c0 FUN_144e951c0 body=674 status=ok
// SIG undefined FUN_144e951c0(void)

undefined8 FUN_144e951c0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  int local_res18;
  
  lVar6 = param_1[0x7a];
  uVar12 = (ulonglong)*(ushort *)(lVar6 + 0x492);
  iVar3 = *(int *)(lVar6 + 0x4f4);
  lVar8 = ((longlong)(((ulonglong)*(uint *)(lVar6 + 0x30) - 1) + uVar12) / (longlong)uVar12) *
          (*(ushort *)(lVar6 + 0x494) * uVar12 + 2) * (longlong)*(int *)(lVar6 + 0x48) + 7;
  lVar11 = (longlong)((ulonglong)((uint)(lVar8 >> 0x3f) & 7) + lVar8) >> 3;
  lVar8 = (param_3 / lVar11) * (ulonglong)*(ushort *)(lVar6 + 0x494);
  if (param_3 % lVar11 != 0) {
    FUN_144e94570(param_1[0x87],*param_1,"fractional scanline discarded");
  }
  iVar4 = *(int *)(*(longlong *)(lVar6 + 0x58) + 0x88);
  do {
    if (lVar8 < 1) {
      return 1;
    }
    iVar14 = 0;
    local_res18 = 0;
    if (0 < *(int *)(lVar6 + 0x4c)) {
      piVar9 = (int *)(*(longlong *)(lVar6 + 0x58) + 0xc);
      plVar17 = (longlong *)(lVar6 + 0x4a0);
      do {
        iVar15 = *piVar9;
        iVar18 = 0;
        iVar5 = piVar9[-1];
        uVar19 = piVar9[4] * 8 - iVar5 * iVar4;
        if (0 < iVar15) {
          do {
            puVar13 = (undefined1 *)(iVar14 + param_2);
            puVar16 = *(undefined1 **)
                       (*plVar17 + (longlong)(iVar15 * *(int *)(lVar6 + 0x4f0) + iVar18) * 8);
            iVar7 = iVar4;
            if (iVar5 == 1) {
              for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                uVar2 = *puVar13;
                puVar13 = puVar13 + iVar3;
                *puVar16 = uVar2;
                puVar16 = puVar16 + 1;
              }
            }
            else {
              while (iVar7 != 0) {
                lVar10 = 0;
                if (0 < iVar5) {
                  do {
                    puVar1 = puVar13 + lVar10;
                    lVar10 = lVar10 + 1;
                    *puVar16 = *puVar1;
                    puVar16 = puVar16 + 1;
                  } while (lVar10 < iVar5);
                }
                puVar13 = puVar13 + iVar3;
                iVar7 = iVar7 + -1;
              }
            }
            if (0 < (int)uVar19) {
              puVar13 = puVar16 + -1;
              for (uVar12 = (ulonglong)uVar19; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar16 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar16 = puVar16 + 1;
              }
            }
            iVar14 = iVar14 + iVar5;
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar15);
        }
        local_res18 = local_res18 + 1;
        piVar9 = piVar9 + 0x18;
        plVar17 = plVar17 + 1;
      } while (local_res18 < *(int *)(lVar6 + 0x4c));
    }
    *(int *)(lVar6 + 0x4f0) = *(int *)(lVar6 + 0x4f0) + 1;
    if (7 < *(int *)(lVar6 + 0x4f0)) {
      iVar15 = *(int *)(lVar6 + 300) << 3;
      iVar14 = FUN_144e958b0(lVar6,lVar6 + 0x4a0,iVar15);
      if (iVar14 != iVar15) {
        return 0;
      }
      *(undefined4 *)(lVar6 + 0x4f0) = 0;
    }
    *(int *)((longlong)param_1 + 0x2fc) =
         *(int *)((longlong)param_1 + 0x2fc) + (uint)*(ushort *)(lVar6 + 0x494);
    param_2 = param_2 + lVar11;
    lVar8 = lVar8 - (ulonglong)*(ushort *)(lVar6 + 0x494);
  } while( true );
}



// FUNCTION 144e95470 FUN_144e95470 body=37 status=ok
// SIG undefined FUN_144e95470(void)

undefined8 FUN_144e95470(longlong param_1)

{
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFReadScanline",
                "scanline oriented access is not supported for downsampled JPEG compressed images, consider enabling TIFF_JPEGCOLORMODE as JPEGCOLORMODE_RGB."
               );
  return 0;
}



// FUNCTION 144e954a0 FUN_144e954a0 body=104 status=ok
// SIG undefined FUN_144e954a0(void)

void FUN_144e954a0(longlong *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x18))(param_1,local_e8);
  FUN_144e92fd0(*(undefined8 *)(param_1[0x91] + 0x438),"JPEGLib",&DAT_149972340,local_e8);
  FUN_144e8d2e0(param_1);
                    /* WARNING: Subroutine does not return */
  longjmp((_JBTYPE *)(param_1 + 0x62),1);
}



// FUNCTION 144e95510 FUN_144e95510 body=95 status=ok
// SIG undefined FUN_144e95510(void)

void FUN_144e95510(longlong *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x18))(param_1,local_e8);
  FUN_144e94570(*(undefined8 *)(param_1[0x91] + 0x438),"JPEGLib",&DAT_149972340,local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_108);
}



// FUNCTION 144e95580 FUN_144e95580 body=101 status=ok
// SIG undefined FUN_144e95580(void)

void FUN_144e95580(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(int *)(param_1 + 0x53c) <= *(int *)(param_1 + 0x9c)) {
      FUN_144e92fd0(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x438),
                    "TIFFjpeg_progress_monitor",
                    "Scan number %d exceeds maximum scans (%d). This limit can be raised through the LIBTIFF_JPEG_MAX_ALLOWED_SCAN_NUMBER environment variable."
                    ,*(int *)(param_1 + 0x9c),*(int *)(param_1 + 0x53c));
      FUN_144e8d2e0(param_1);
                    /* WARNING: Subroutine does not return */
      longjmp((_JBTYPE *)(param_1 + 0x310),1);
    }
  }
  return;
}



// FUNCTION 144e955f0 FUN_144e955f0 body=138 status=ok
// SIG undefined FUN_144e955f0(void)

undefined8 FUN_144e955f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [32];
  
  uVar2 = FUN_144e8b040(param_1 + 0x4c);
  *param_1 = uVar2;
  param_1[3] = 0;
  param_1[0x4c] = FUN_144e954a0;
  param_1[0x4e] = FUN_144e95510;
  iVar1 = __intrinsic_setjmp(param_1 + 0x62,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8b2c0(param_1,0x3e,0x1f8);
  return 1;
}



// FUNCTION 144e95680 FUN_144e95680 body=138 status=ok
// SIG undefined FUN_144e95680(void)

undefined8 FUN_144e95680(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [32];
  
  uVar2 = FUN_144e8b040(param_1 + 0x4c);
  *param_1 = uVar2;
  param_1[3] = 0;
  param_1[0x4c] = FUN_144e954a0;
  param_1[0x4e] = FUN_144e95510;
  iVar1 = __intrinsic_setjmp(param_1 + 0x62,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8b6b0(param_1,0x3e,600);
  return 1;
}



// FUNCTION 144e95710 FUN_144e95710 body=55 status=ok
// SIG undefined FUN_144e95710(void)

undefined8 FUN_144e95710(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8bcd0(param_1);
  return 1;
}



// FUNCTION 144e95750 FUN_144e95750 body=63 status=ok
// SIG undefined FUN_144e95750(void)

undefined8 FUN_144e95750(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8bec0(param_1,param_2);
  return 1;
}



// FUNCTION 144e95790 FUN_144e95790 body=74 status=ok
// SIG undefined FUN_144e95790(void)

undefined8 FUN_144e95790(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8c6d0(param_1,param_2,param_3);
  return 1;
}



// FUNCTION 144e957e0 FUN_144e957e0 body=64 status=ok
// SIG undefined FUN_144e957e0(void)

undefined8 FUN_144e957e0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8b420(param_1,param_2);
  return 1;
}



// FUNCTION 144e95820 FUN_144e95820 body=64 status=ok
// SIG undefined FUN_144e95820(void)

undefined8 FUN_144e95820(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8d370(param_1,param_2);
  return 1;
}



// FUNCTION 144e95860 FUN_144e95860 body=73 status=ok
// SIG undefined FUN_144e95860(void)

undefined8 FUN_144e95860(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_144e8d400(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144e958b0 FUN_144e958b0 body=73 status=ok
// SIG undefined FUN_144e958b0(void)

undefined8 FUN_144e958b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_144e8d500(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144e95900 FUN_144e95900 body=55 status=ok
// SIG undefined FUN_144e95900(void)

undefined8 FUN_144e95900(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8b500(param_1);
  return 1;
}



// FUNCTION 144e95940 FUN_144e95940 body=55 status=ok
// SIG undefined FUN_144e95940(void)

undefined8 FUN_144e95940(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8b640(param_1);
  return 1;
}



// FUNCTION 144e95980 FUN_144e95980 body=62 status=ok
// SIG undefined FUN_144e95980(void)

undefined8 FUN_144e95980(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_144e8b840(param_1,param_2);
  return uVar2;
}



// FUNCTION 144e959c0 FUN_144e959c0 body=53 status=ok
// SIG undefined FUN_144e959c0(void)

undefined1 FUN_144e959c0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_28 [40];
  
  iVar2 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = FUN_144e8ba90(param_1);
  return uVar1;
}



// FUNCTION 144e95a00 FUN_144e95a00 body=125 status=ok
// SIG undefined FUN_144e95a00(void)

undefined8 FUN_144e95a00(longlong param_1)

{
  int iVar1;
  char *_Str;
  undefined1 auStack_28 [32];
  
  *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x410) = FUN_144e95580;
  *(undefined4 *)(param_1 + 0x53c) = 100;
  _Str = getenv("LIBTIFF_JPEG_MAX_ALLOWED_SCAN_NUMBER");
  if (_Str != (char *)0x0) {
    iVar1 = atoi(_Str);
    *(int *)(param_1 + 0x53c) = iVar1;
  }
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8d640(param_1);
  return 1;
}



// FUNCTION 144e95a80 FUN_144e95a80 body=73 status=ok
// SIG undefined FUN_144e95a80(void)

undefined8 FUN_144e95a80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_144e8d740(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144e95ad0 FUN_144e95ad0 body=73 status=ok
// SIG undefined FUN_144e95ad0(void)

undefined8 FUN_144e95ad0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_144e8e040(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144e95b20 FUN_144e95b20 body=56 status=ok
// SIG undefined FUN_144e95b20(void)

ulonglong FUN_144e95b20(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_28 [40];
  
  iVar2 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  bVar1 = FUN_144e8b9c0(param_1);
  return (ulonglong)bVar1;
}



// FUNCTION 144e95b60 FUN_144e95b60 body=55 status=ok
// SIG undefined FUN_144e95b60(void)

undefined8 FUN_144e95b60(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8d2e0(param_1);
  return 1;
}



// FUNCTION 144e95ba0 FUN_144e95ba0 body=55 status=ok
// SIG undefined FUN_144e95ba0(void)

undefined8 FUN_144e95ba0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8d330(param_1);
  return 1;
}



// FUNCTION 144e95be0 FUN_144e95be0 body=80 status=ok
// SIG undefined FUN_144e95be0(void)

undefined8 FUN_144e95be0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x310,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 144e95c60 FUN_144e95c60 body=98 status=ok
// SIG undefined FUN_144e95c60(void)

undefined8 FUN_144e95c60(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  *(undefined8 *)(lVar1 + 0x410) = *(undefined8 *)(lVar1 + 0x3f0);
  uVar2 = FUN_144e94730(lVar1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(lVar1 + 1000);
  uVar2 = *(undefined8 *)(lVar1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x430) = uVar2;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 144e95d20 FUN_144e95d20 body=133 status=ok
// SIG undefined FUN_144e95d20(void)

undefined8 FUN_144e95d20(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = realloc((void *)param_1[0xa4],(ulonglong)((int)param_1[0xa5] + 1000));
  if (pvVar3 == (void *)0x0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 100;
    (**(code **)*param_1)(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0xa5);
  param_1[0x86] = 1000;
  param_1[0xa4] = (longlong)pvVar3;
  iVar2 = uVar1 + 1000;
  *(int *)(param_1 + 0xa5) = iVar2;
  param_1[0x85] = (longlong)pvVar3 + (ulonglong)uVar1;
  return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
}



// FUNCTION 144e95df0 FUN_144e95df0 body=63 status=ok
// SIG undefined FUN_144e95df0(void)

undefined * FUN_144e95df0(longlong *param_1)

{
  *(undefined4 *)(*param_1 + 0x28) = 0x78;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  param_1[0x8b] = 2;
  param_1[0x8a] = (longlong)&DAT_149bd0110;
  return &DAT_149bd0101;
}



// FUNCTION 144e95e30 FUN_144e95e30 body=105 status=ok
// SIG undefined FUN_144e95e30(void)

void FUN_144e95e30(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (0 < param_2) {
    uVar1 = (ulonglong)param_2;
    if ((ulonglong)param_1[0x8b] < uVar1) {
      *(undefined4 *)(*param_1 + 0x28) = 0x78;
      (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      param_1[0x8b] = 2;
      param_1[0x8a] = (longlong)&DAT_149bd0110;
      return;
    }
    param_1[0x8a] = param_1[0x8a] + uVar1;
    param_1[0x8b] = param_1[0x8b] - uVar1;
  }
  return;
}



// FUNCTION 144e95ed0 FUN_144e95ed0 body=168 status=ok
// SIG undefined FUN_144e95ed0(void)

undefined8 FUN_144e95ed0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  iVar4 = 0;
  if (0 < param_3) {
    lVar6 = 0;
    piVar3 = (int *)(param_2 + 8);
    plVar5 = (longlong *)(lVar1 + 0x4a0);
    do {
      iVar4 = iVar4 + piVar3[1] * *piVar3;
      lVar2 = FUN_144e95be0(lVar1,1,piVar3[5] << 3,piVar3[1] * 8);
      if (lVar2 == 0) {
        return 0;
      }
      *plVar5 = lVar2;
      lVar6 = lVar6 + 1;
      plVar5 = plVar5 + 1;
      piVar3 = piVar3 + 0x18;
    } while (lVar6 < param_3);
  }
  *(int *)(lVar1 + 0x4f4) = iVar4;
  return 1;
}



// FUNCTION 144e95f80 FUN_144e95f80 body=1920 status=ok
// SIG undefined FUN_144e95f80(void)

undefined8 FUN_144e95f80(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  char *pcVar11;
  byte bVar12;
  
switchD_144e96115_caseD_d8:
  uVar8 = *(uint *)(param_1 + 4);
  do {
    if (uVar8 == 0) {
      uVar4 = param_1[6];
      if (uVar4 == 0) {
        return 0;
      }
      if ((char)param_1[7] == '\0') {
        lVar3 = (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[5],0);
        if (lVar3 == -1) {
          return 0;
        }
        uVar4 = param_1[6];
        *(undefined1 *)(param_1 + 7) = 1;
      }
      uVar8 = (uint)uVar4;
      if (*(uint *)(param_1 + 2) <= uVar4) {
        uVar8 = *(uint *)(param_1 + 2);
      }
      uVar10 = (ulonglong)uVar8;
      uVar4 = (**(code **)(*param_1 + 0x440))(*(undefined8 *)(*param_1 + 0x438),param_1[1]);
      if (uVar4 != uVar10) {
        return 0;
      }
      pcVar11 = (char *)param_1[1];
      param_1[5] = param_1[5] + uVar10;
      param_1[6] = param_1[6] - uVar10;
      param_1[3] = (longlong)pcVar11;
      *(uint *)(param_1 + 4) = uVar8;
    }
    else {
      pcVar11 = (char *)param_1[3];
    }
    cVar1 = *pcVar11;
    uVar8 = uVar8 - 1;
    *(uint *)(param_1 + 4) = uVar8;
    param_1[3] = (longlong)(pcVar11 + 1);
  } while (cVar1 != -1);
  do {
    if (uVar8 == 0) {
      uVar4 = param_1[6];
      if (uVar4 == 0) {
        return 0;
      }
      if ((char)param_1[7] == '\0') {
        lVar3 = (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[5],0);
        if (lVar3 == -1) {
          return 0;
        }
        uVar4 = param_1[6];
        *(undefined1 *)(param_1 + 7) = 1;
      }
      uVar8 = (uint)uVar4;
      if (*(uint *)(param_1 + 2) <= uVar4) {
        uVar8 = *(uint *)(param_1 + 2);
      }
      uVar10 = (ulonglong)uVar8;
      uVar4 = (**(code **)(*param_1 + 0x440))(*(undefined8 *)(*param_1 + 0x438),param_1[1],uVar8);
      if (uVar4 != uVar10) {
        return 0;
      }
      pcVar11 = (char *)param_1[1];
      param_1[5] = param_1[5] + uVar10;
      param_1[6] = param_1[6] - uVar10;
      param_1[3] = (longlong)pcVar11;
      *(uint *)(param_1 + 4) = uVar8;
    }
    else {
      pcVar11 = (char *)param_1[3];
    }
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    param_1[3] = (longlong)pcVar11;
    uVar8 = uVar8 - 1;
    *(uint *)(param_1 + 4) = uVar8;
  } while (cVar1 == -1);
  switch(cVar1) {
  case -0x40:
  case -0x3f:
  case -0x3e:
  case -0x37:
  case -0x36:
    break;
  default:
    goto LAB_144e966e2;
  case -0x3c:
  case -0x26:
  case -0x25:
  case -0x23:
  case -0x20:
  case -0x1f:
  case -0x1e:
  case -0x1d:
  case -0x1c:
  case -0x1b:
  case -0x1a:
  case -0x19:
  case -0x18:
  case -0x17:
  case -0x16:
  case -0x15:
  case -0x14:
  case -0x13:
  case -0x12:
  case -0x11:
  case -2:
    if (uVar8 == 0) {
      uVar4 = param_1[6];
      if (uVar4 == 0) {
        return 0;
      }
      if ((char)param_1[7] == '\0') {
        lVar3 = (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[5],0);
        if (lVar3 == -1) {
          return 0;
        }
        uVar4 = param_1[6];
        *(undefined1 *)(param_1 + 7) = 1;
      }
      uVar8 = (uint)uVar4;
      if (*(uint *)(param_1 + 2) <= uVar4) {
        uVar8 = *(uint *)(param_1 + 2);
      }
      uVar10 = (ulonglong)uVar8;
      uVar4 = (**(code **)(*param_1 + 0x440))(*(undefined8 *)(*param_1 + 0x438),param_1[1]);
      if (uVar4 != uVar10) {
        return 0;
      }
      pcVar11 = (char *)param_1[1];
      param_1[5] = param_1[5] + uVar10;
      param_1[6] = param_1[6] - uVar10;
      param_1[3] = (longlong)pcVar11;
      *(uint *)(param_1 + 4) = uVar8;
    }
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    uVar8 = uVar8 - 1;
    param_1[3] = (longlong)pcVar11;
    *(uint *)(param_1 + 4) = uVar8;
    if (uVar8 == 0) {
      uVar4 = param_1[6];
      if (uVar4 == 0) {
        return 0;
      }
      if ((char)param_1[7] == '\0') {
        lVar3 = (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[5],0);
        if (lVar3 == -1) {
          return 0;
        }
        uVar4 = param_1[6];
        *(undefined1 *)(param_1 + 7) = 1;
      }
      uVar8 = (uint)uVar4;
      if (*(uint *)(param_1 + 2) <= uVar4) {
        uVar8 = *(uint *)(param_1 + 2);
      }
      uVar10 = (ulonglong)uVar8;
      uVar4 = (**(code **)(*param_1 + 0x440))(*(undefined8 *)(*param_1 + 0x438),param_1[1]);
      if (uVar4 != uVar10) {
        return 0;
      }
      pcVar11 = (char *)param_1[1];
      param_1[5] = param_1[5] + uVar10;
      param_1[6] = param_1[6] - uVar10;
      param_1[3] = (longlong)pcVar11;
      *(uint *)(param_1 + 4) = uVar8;
    }
    cVar2 = *pcVar11;
    param_1[3] = (longlong)(pcVar11 + 1);
    uVar8 = uVar8 - 1;
    *(uint *)(param_1 + 4) = uVar8;
    if (CONCAT11(cVar1,cVar2) < 2) {
      return 0;
    }
    uVar5 = CONCAT11(cVar1,cVar2) - 2;
    if (uVar5 != 0) {
      if (uVar8 < uVar5) {
        uVar4 = (ulonglong)(ushort)(uVar5 - (short)uVar8);
        *(undefined4 *)(param_1 + 4) = 0;
        if ((ulonglong)param_1[6] < uVar4) {
          param_1[6] = 0;
        }
        else {
          param_1[5] = param_1[5] + uVar4;
          *(undefined1 *)(param_1 + 7) = 0;
          param_1[6] = param_1[6] - uVar4;
        }
      }
      else {
        param_1[3] = (longlong)(pcVar11 + 1 + uVar5);
        *(uint *)(param_1 + 4) = uVar8 - uVar5;
      }
    }
  case -0x28:
    goto switchD_144e96115_caseD_d8;
  }
  if (uVar8 == 0) {
    uVar4 = param_1[6];
    if (uVar4 == 0) {
      return 0;
    }
    if ((char)param_1[7] == '\0') {
      lVar3 = (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[5],0);
      if (lVar3 == -1) {
        return 0;
      }
      uVar4 = param_1[6];
      *(undefined1 *)(param_1 + 7) = 1;
    }
    uVar8 = (uint)uVar4;
    if (*(uint *)(param_1 + 2) <= uVar4) {
      uVar8 = *(uint *)(param_1 + 2);
    }
    uVar10 = (ulonglong)uVar8;
    uVar4 = (**(code **)(*param_1 + 0x440))(*(undefined8 *)(*param_1 + 0x438),param_1[1],uVar8);
    if (uVar4 != uVar10) {
      return 0;
    }
    pcVar11 = (char *)param_1[1];
    param_1[5] = param_1[5] + uVar10;
    param_1[6] = param_1[6] - uVar10;
    param_1[3] = (longlong)pcVar11;
    *(uint *)(param_1 + 4) = uVar8;
  }
  cVar1 = *pcVar11;
  uVar8 = uVar8 - 1;
  pcVar11 = pcVar11 + 1;
  *(uint *)(param_1 + 4) = uVar8;
  param_1[3] = (longlong)pcVar11;
  if (uVar8 == 0) {
    uVar4 = param_1[6];
    if (uVar4 == 0) {
      return 0;
    }
    if ((char)param_1[7] == '\0') {
      lVar3 = (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[5],0);
      if (lVar3 == -1) {
        return 0;
      }
      uVar4 = param_1[6];
      *(undefined1 *)(param_1 + 7) = 1;
    }
    uVar8 = (uint)uVar4;
    if (*(uint *)(param_1 + 2) <= uVar4) {
      uVar8 = *(uint *)(param_1 + 2);
    }
    uVar10 = (ulonglong)uVar8;
    uVar4 = (**(code **)(*param_1 + 0x440))(*(undefined8 *)(*param_1 + 0x438),param_1[1],uVar8);
    if (uVar4 != uVar10) {
      return 0;
    }
    pcVar11 = (char *)param_1[1];
    param_1[5] = param_1[5] + uVar10;
    param_1[6] = param_1[6] - uVar10;
    param_1[3] = (longlong)pcVar11;
    *(uint *)(param_1 + 4) = uVar8;
  }
  cVar2 = *pcVar11;
  param_1[3] = (longlong)(pcVar11 + 1);
  *(uint *)(param_1 + 4) = uVar8 - 1;
  if ((uint)CONCAT11(cVar1,cVar2) == (uint)*(ushort *)(*param_1 + 0x72) * 3 + 8) {
    FUN_144e96750(param_1,7);
    uVar8 = *(uint *)(param_1 + 4);
    if (uVar8 != 0) {
      pbVar7 = (byte *)param_1[3];
LAB_144e9648b:
      bVar9 = *pbVar7;
      param_1[3] = (longlong)(pbVar7 + 1);
      bVar12 = bVar9 >> 4;
      *(uint *)(param_1 + 4) = uVar8 - 1;
      bVar9 = bVar9 & 0xf;
      FUN_144e96750(param_1,1);
      lVar3 = *param_1;
      uVar5 = 1;
      if (1 < *(ushort *)(lVar3 + 0x72)) {
        iVar6 = (int)param_1[4];
        do {
          if (iVar6 == 0) {
            *(undefined4 *)(param_1 + 4) = 0;
            if (param_1[6] == 0) {
              param_1[6] = 0;
            }
            else {
              param_1[5] = param_1[5] + 1;
              *(undefined1 *)(param_1 + 7) = 0;
              param_1[6] = param_1[6] + -1;
            }
LAB_144e9651a:
            uVar4 = param_1[6];
            if (uVar4 == 0) {
              return 0;
            }
            if ((char)param_1[7] == '\0') {
              lVar3 = (**(code **)(lVar3 + 0x450))(*(undefined8 *)(lVar3 + 0x438),param_1[5],0);
              if (lVar3 == -1) {
                return 0;
              }
              uVar4 = param_1[6];
              lVar3 = *param_1;
              *(undefined1 *)(param_1 + 7) = 1;
            }
            uVar8 = (uint)uVar4;
            if (*(uint *)(param_1 + 2) <= uVar4) {
              uVar8 = *(uint *)(param_1 + 2);
            }
            uVar10 = (ulonglong)uVar8;
            uVar4 = (**(code **)(lVar3 + 0x440))(*(undefined8 *)(lVar3 + 0x438),param_1[1]);
            if (uVar4 != uVar10) {
              return 0;
            }
            pcVar11 = (char *)param_1[1];
            param_1[5] = param_1[5] + uVar10;
            param_1[6] = param_1[6] - uVar10;
            param_1[3] = (longlong)pcVar11;
            *(uint *)(param_1 + 4) = uVar8;
          }
          else {
            uVar8 = iVar6 - 1;
            pcVar11 = (char *)(param_1[3] + 1);
            *(uint *)(param_1 + 4) = uVar8;
            param_1[3] = (longlong)pcVar11;
            if (uVar8 == 0) goto LAB_144e9651a;
          }
          cVar1 = *pcVar11;
          *(uint *)(param_1 + 4) = uVar8 - 1;
          param_1[3] = (longlong)(pcVar11 + 1);
          if (cVar1 != '\x11') {
            FUN_144e94570(*(undefined8 *)(*param_1 + 0x438),"JPEGFixupTagsSubsamplingSec",
                          "Subsampling values inside JPEG compressed data have no TIFF equivalent, auto-correction of TIFF subsampling values failed"
                         );
            return 1;
          }
          if (uVar8 - 1 == 0) {
            *(undefined4 *)(param_1 + 4) = 0;
            iVar6 = 0;
            if (param_1[6] == 0) {
              param_1[6] = 0;
            }
            else {
              param_1[5] = param_1[5] + 1;
              *(undefined1 *)(param_1 + 7) = 0;
              param_1[6] = param_1[6] + -1;
            }
          }
          else {
            param_1[3] = (longlong)(pcVar11 + 2);
            *(uint *)(param_1 + 4) = uVar8 - 2;
            iVar6 = uVar8 - 2;
          }
          lVar3 = *param_1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar3 + 0x72));
      }
      if (((((bVar12 - 1 & 0xfc) == 0) && (bVar12 != 3)) && ((bVar9 - 1 & 0xfc) == 0)) &&
         (bVar9 != 3)) {
        if (((ushort)bVar12 != *(ushort *)(lVar3 + 0x140)) ||
           ((ushort)bVar9 != *(ushort *)(lVar3 + 0x142))) {
          FUN_144e94570(*(undefined8 *)(lVar3 + 0x438),"JPEGFixupTagsSubsamplingSec",
                        "Auto-corrected former TIFF subsampling values [%d,%d] to match subsampling values inside JPEG compressed data [%d,%d]"
                        ,*(ushort *)(lVar3 + 0x140),*(undefined2 *)(lVar3 + 0x142),bVar12,bVar9);
          *(ushort *)(*param_1 + 0x140) = (ushort)bVar12;
          *(ushort *)(*param_1 + 0x142) = (ushort)bVar9;
        }
        return 1;
      }
      FUN_144e94570(*(undefined8 *)(lVar3 + 0x438),"JPEGFixupTagsSubsamplingSec",
                    "Subsampling values inside JPEG compressed data have no TIFF equivalent, auto-correction of TIFF subsampling values failed"
                   );
      return 1;
    }
    uVar4 = param_1[6];
    if (uVar4 != 0) {
      if ((char)param_1[7] == '\0') {
        lVar3 = (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[5],0);
        if (lVar3 == -1) {
          return 0;
        }
        uVar4 = param_1[6];
        *(undefined1 *)(param_1 + 7) = 1;
      }
      uVar8 = (uint)uVar4;
      if (*(uint *)(param_1 + 2) <= uVar4) {
        uVar8 = *(uint *)(param_1 + 2);
      }
      uVar10 = (ulonglong)uVar8;
      uVar4 = (**(code **)(*param_1 + 0x440))(*(undefined8 *)(*param_1 + 0x438),param_1[1],uVar8);
      if (uVar4 == uVar10) {
        pbVar7 = (byte *)param_1[1];
        param_1[5] = param_1[5] + uVar10;
        param_1[6] = param_1[6] - uVar10;
        param_1[3] = (longlong)pbVar7;
        *(uint *)(param_1 + 4) = uVar8;
        goto LAB_144e9648b;
      }
    }
  }
LAB_144e966e2:
  return 0;
}



// FUNCTION 144e96750 FUN_144e96750 body=76 status=ok
// SIG undefined FUN_144e96750(void)

void FUN_144e96750(longlong param_1,ushort param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= uVar1) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (ulonglong)param_2;
    *(uint *)(param_1 + 0x20) = uVar1 - param_2;
    return;
  }
  uVar2 = (ulonglong)(ushort)(param_2 - (short)uVar1);
  if (uVar2 <= *(ulonglong *)(param_1 + 0x30)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + uVar2;
    *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) - uVar2;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 144e967a0 FUN_144e967a0 body=265 status=ok
// SIG undefined FUN_144e967a0(void)

undefined8 FUN_144e967a0(longlong param_1)

{
  int iVar1;
  longlong local_48;
  void *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  if ((((*(short *)(param_1 + 0x6a) == 6) && (*(short *)(param_1 + 0x9a) == 1)) &&
      (*(short *)(param_1 + 0x72) == 3)) &&
     ((*(int *)(*(longlong *)(param_1 + 0x3d0) + 0x538) == 0 &&
      (local_20 = FUN_144b7c5b0(param_1,0), local_20 != 0)))) {
    local_38 = 0x800;
    local_48 = param_1;
    local_40 = (void *)FUN_144e92f50(0x800);
    if (local_40 == (void *)0x0) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"JPEGFixupTagsSubsampling",
                    "Unable to allocate memory for auto-correcting of subsampling values; auto-correcting skipped"
                   );
      return 1;
    }
    local_30 = 0;
    local_28 = 0;
    local_10 = 0;
    local_18 = FUN_144b7c650(param_1,0);
    iVar1 = FUN_144e95f80(&local_48);
    if (iVar1 == 0) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"JPEGFixupTagsSubsampling",
                    "Unable to auto-correct subsampling values, likely corrupt JPEG compressed data in first strip/tile; auto-correcting skipped"
                   );
    }
    free(local_40);
  }
  return 1;
}



// FUNCTION 144e968b0 FUN_144e968b0 body=401 status=ok
// SIG undefined FUN_144e968b0(void)

undefined8 FUN_144e968b0(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  undefined2 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (*(int *)(lVar2 + 600) != 0) {
    if (*(char *)(lVar2 + 0x20) != '\0') goto LAB_144e9690b;
    FUN_144e95ba0(lVar2);
    *(undefined4 *)(lVar2 + 600) = 0;
  }
  iVar3 = FUN_144e95680(lVar2);
  if (iVar3 != 0) {
    *(undefined4 *)(lVar2 + 600) = 1;
  }
LAB_144e9690b:
  if ((*(byte *)(param_1 + 0x40) & 4) != 0) {
    *(code **)(lVar2 + 0x468) = FUN_144e95df0;
    *(undefined8 **)(lVar2 + 0x28) = (undefined8 *)(lVar2 + 0x450);
    *(undefined8 *)(lVar2 + 0x450) = 0;
    *(code **)(lVar2 + 0x470) = FUN_144e95e30;
    *(undefined1 **)(lVar2 + 0x460) = &LAB_144e95eb0;
    *(code **)(lVar2 + 0x478) = FUN_145221a70;
    *(undefined **)(lVar2 + 0x480) = &DAT_144e95ea0;
    *(undefined8 *)(lVar2 + 0x458) = 0;
    iVar3 = FUN_144e95980(lVar2,0);
    if (iVar3 != 2) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGSetupDecode","Bogus JPEGTables field");
      return 0;
    }
  }
  sVar1 = *(short *)(param_1 + 0x6a);
  *(short *)(lVar2 + 0x490) = sVar1;
  if (sVar1 == 6) {
    *(undefined2 *)(lVar2 + 0x492) = *(undefined2 *)(param_1 + 0x140);
    uVar4 = *(undefined2 *)(param_1 + 0x142);
  }
  else {
    uVar4 = 1;
    *(undefined2 *)(lVar2 + 0x492) = 1;
  }
  *(undefined2 *)(lVar2 + 0x494) = uVar4;
  *(undefined8 **)(lVar2 + 0x28) = (undefined8 *)(lVar2 + 0x450);
  *(undefined8 *)(lVar2 + 0x450) = 0;
  *(undefined1 **)(lVar2 + 0x460) = &LAB_144e95dc0;
  *(code **)(lVar2 + 0x468) = FUN_144e95df0;
  *(code **)(lVar2 + 0x470) = FUN_144e95e30;
  *(code **)(lVar2 + 0x478) = FUN_145221a70;
  *(undefined **)(lVar2 + 0x480) = &DAT_144e95ea0;
  *(undefined8 *)(lVar2 + 0x458) = 0;
  *(undefined **)(param_1 + 0x468) = &DAT_144b83080;
  return 1;
}



// FUNCTION 144e96a50 FUN_144e96a50 body=1174 status=ok
// SIG undefined FUN_144e96a50(void)

undefined8 FUN_144e96a50(longlong param_1,short param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  code *pcVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  char *pcVar15;
  uint *puVar16;
  ulonglong uVar17;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (*(char *)(lVar2 + 0x20) == '\0') {
    (**(code **)(param_1 + 0x348))();
  }
  iVar4 = FUN_144e95b60(lVar2);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_144e95980(lVar2);
  if (iVar4 != 1) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar2 + 0x450);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(lVar2 + 0x458);
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    uVar12 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x2fc);
    uVar14 = *(uint *)(param_1 + 0x48);
    uVar9 = *(uint *)(param_1 + 0x74);
    uVar6 = FUN_144b77aa0(param_1);
    if (uVar12 <= uVar9) {
      uVar9 = uVar12;
    }
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x54);
    uVar9 = *(uint *)(param_1 + 0x58);
    uVar6 = FUN_144b7ac10();
  }
  uVar5 = 0;
  *(undefined8 *)(lVar2 + 0x498) = uVar6;
  uVar12 = uVar9;
  if ((*(short *)(param_1 + 0x9a) == 2) && (param_2 != 0)) {
    uVar1 = *(ushort *)(lVar2 + 0x492);
    uVar12 = uVar5;
    if (uVar14 < -(uint)uVar1) {
      uVar12 = ((uVar1 - 1) + uVar14) / (uint)uVar1;
    }
    uVar14 = uVar12;
    uVar1 = *(ushort *)(lVar2 + 0x494);
    uVar12 = uVar5;
    if (uVar9 < -(uint)uVar1) {
      uVar12 = ((uVar1 - 1) + uVar9) / (uint)uVar1;
    }
  }
  uVar9 = *(uint *)(lVar2 + 0x30);
  puVar16 = (uint *)(lVar2 + 0x34);
  if ((uVar9 < uVar14) || (*puVar16 < uVar12)) {
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"JPEGPreDecode",
                  "Improper JPEG strip/tile size, expected %dx%d, got %dx%d",uVar14,uVar12,uVar9,
                  *puVar16);
    uVar9 = *(uint *)(lVar2 + 0x30);
  }
  if (uVar9 != uVar14) {
    if (uVar9 <= uVar14) goto LAB_144e96bec;
LAB_144e96e9b:
    uVar5 = *puVar16;
    pcVar15 = "JPEG strip/tile size exceeds expected dimensions, expected %dx%d, got %dx%d";
LAB_144e96eb4:
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGPreDecode",pcVar15,uVar14,uVar12,uVar9,uVar5
                 );
    return 0;
  }
  if (((uVar12 < *puVar16) && (*(int *)(param_1 + 0x2fc) + uVar12 == *(int *)(param_1 + 0x4c))) &&
     ((*(uint *)(param_1 + 0x10) & 0x400) == 0)) {
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"JPEGPreDecode",
                  "JPEG strip size exceeds expected dimensions, expected %dx%d, got %dx%d",uVar14,
                  uVar12,uVar9,*puVar16);
  }
  else {
LAB_144e96bec:
    if (uVar12 < *puVar16) goto LAB_144e96e9b;
  }
  if (*(short *)(param_1 + 0x9a) == 1) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x72);
  }
  else {
    uVar9 = 1;
  }
  if (*(uint *)(lVar2 + 0x38) != uVar9) {
    pcVar15 = "Improper JPEG component count";
LAB_144e96c16:
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGPreDecode",pcVar15);
    return 0;
  }
  if (*(uint *)(lVar2 + 0x118) != (uint)*(ushort *)(param_1 + 100)) {
    pcVar15 = "Improper JPEG data precision";
    goto LAB_144e96c16;
  }
  iVar4 = FUN_144e959c0(lVar2);
  if (iVar4 != 0) {
    uVar13 = 0x100000;
    if (0 < (int)*(uint *)(lVar2 + 0x38)) {
      uVar17 = (ulonglong)*(uint *)(lVar2 + 0x38);
      puVar16 = (uint *)(*(longlong *)(lVar2 + 0x120) + 0xc);
      do {
        uVar9 = puVar16[-1];
        if ((0 < (int)uVar9) && (uVar14 = *puVar16, 0 < (int)uVar14)) {
          uVar13 = uVar13 + ((ulonglong)((puVar16[4] - 1) + uVar9) / (ulonglong)uVar9) *
                            ((ulonglong)((puVar16[5] - 1) + uVar14) / (ulonglong)uVar14) * 0x80;
        }
        puVar16 = puVar16 + 0x18;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    iVar4 = *(int *)(*(longlong *)(lVar2 + 8) + 0x58);
    if (((0 < iVar4) && ((ulonglong)(longlong)iVar4 < uVar13)) &&
       (pcVar15 = getenv("LIBTIFF_ALLOW_LARGE_LIBJPEG_MEM_ALLOC"), pcVar15 == (char *)0x0)) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGPreDecode",
                    "Reading this image would require libjpeg to allocate at least %u bytes. This is disabled since above the %u threshold. You may override this restriction by defining the LIBTIFF_ALLOW_LARGE_LIBJPEG_MEM_ALLOC environment variable, or setting the JPEGMEM environment variable to a value greater or equal to \'%uM\'"
                    ,uVar13 & 0xffffffff,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x58),
                    (int)((uVar13 + 999999) / 1000000));
      return 0;
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0x120);
  if (*(short *)(param_1 + 0x9a) == 1) {
    uVar14 = *(uint *)(lVar3 + 8);
    uVar9 = (uint)*(ushort *)(lVar2 + 0x492);
    if ((uVar14 != uVar9) || (*(uint *)(lVar3 + 0xc) != (uint)*(ushort *)(lVar2 + 0x494))) {
      pcVar15 = "Improper JPEG sampling factors %d,%d\nApparently should be %d,%d.";
      uVar5 = (uint)*(ushort *)(lVar2 + 0x494);
      uVar12 = *(uint *)(lVar3 + 0xc);
      goto LAB_144e96eb4;
    }
    iVar4 = 1;
    if (1 < *(int *)(lVar2 + 0x38)) {
      piVar7 = (int *)(lVar3 + 0x6c);
      do {
        if ((piVar7[-1] != 1) || (*piVar7 != 1)) goto LAB_144e96e1f;
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 0x18;
      } while (iVar4 < *(int *)(lVar2 + 0x38));
    }
    if ((*(short *)(lVar2 + 0x490) != 6) || (*(int *)(lVar2 + 0x530) != 1)) goto LAB_144e96e56;
    *(undefined4 *)(lVar2 + 0x3c) = 3;
    *(undefined4 *)(lVar2 + 0x40) = 2;
  }
  else {
    if ((*(int *)(lVar3 + 8) != 1) || (*(int *)(lVar3 + 0xc) != 1)) {
LAB_144e96e1f:
      pcVar15 = "Improper JPEG sampling factors";
      goto LAB_144e96c16;
    }
LAB_144e96e56:
    *(undefined8 *)(lVar2 + 0x3c) = 0;
    if ((*(short *)(param_1 + 0x9a) == 1) &&
       ((*(short *)(lVar2 + 0x492) != 1 || (*(short *)(lVar2 + 0x494) != 1)))) {
      pcVar8 = FUN_144e94ce0;
      uVar11 = 1;
      pcVar10 = FUN_144e95470;
      uVar5 = 1;
      goto LAB_144e96dc3;
    }
  }
  pcVar8 = FUN_144e94bd0;
  uVar11 = 0;
  pcVar10 = FUN_144e94bd0;
LAB_144e96dc3:
  *(undefined1 *)(lVar2 + 0x59) = uVar11;
  *(code **)(param_1 + 0x378) = pcVar10;
  *(code **)(param_1 + 0x388) = pcVar8;
  *(code **)(param_1 + 0x398) = pcVar8;
  iVar4 = FUN_144e95a00(lVar2);
  if (iVar4 == 0) {
    return 0;
  }
  if (uVar5 != 0) {
    iVar4 = FUN_144e95ed0(param_1,*(undefined8 *)(lVar2 + 0x120),*(undefined4 *)(lVar2 + 0x38));
    if (iVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar2 + 0x4f0) = 8;
  }
  return 1;
}



// FUNCTION 144e96ef0 FUN_144e96ef0 body=1199 status=ok
// SIG undefined FUN_144e96ef0(void)

void FUN_144e96ef0(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  if (*(int *)(lVar4 + 600) == 0) {
LAB_144e96f3e:
    iVar6 = FUN_144e955f0(lVar4);
    if (iVar6 != 0) {
      if (((0 < *(int *)(*(longlong *)(lVar4 + 8) + 0x58)) &&
          (pcVar8 = getenv("JPEGMEM"), pcVar8 == (char *)0x0)) &&
         (*(int *)(*(longlong *)(lVar4 + 8) + 0x58) < 0xa00000)) {
        *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x58) = 0xa00000;
      }
      *(undefined4 *)(lVar4 + 600) = 1;
    }
  }
  else if (*(char *)(lVar4 + 0x20) != '\0') {
    FUN_144e95ba0(lVar4);
    *(undefined4 *)(lVar4 + 600) = 0;
    goto LAB_144e96f3e;
  }
  sVar1 = *(short *)(param_1 + 0x6a);
  *(short *)(lVar4 + 0x490) = sVar1;
  if (*(short *)(param_1 + 0x9a) == 1) {
    *(uint *)(lVar4 + 0x38) = (uint)*(ushort *)(param_1 + 0x72);
    if (sVar1 == 6) {
      *(uint *)(lVar4 + 0x3c) = (*(int *)(lVar4 + 0x530) != 1) + 2;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x6a);
      if ((uVar2 < 2) && (*(short *)(param_1 + 0x72) == 1)) {
        *(undefined4 *)(lVar4 + 0x3c) = 1;
      }
      else if (uVar2 == 2) {
        if (*(short *)(param_1 + 0x72) == 3) {
          *(undefined4 *)(lVar4 + 0x3c) = 2;
        }
        else {
LAB_144e96ff8:
          *(undefined4 *)(lVar4 + 0x3c) = 0;
        }
      }
      else {
        if ((uVar2 != 5) || (*(short *)(param_1 + 0x72) != 4)) goto LAB_144e96ff8;
        *(undefined4 *)(lVar4 + 0x3c) = 4;
      }
    }
  }
  else {
    *(undefined8 *)(lVar4 + 0x38) = 1;
  }
  iVar6 = FUN_144e95710(lVar4);
  if (iVar6 == 0) goto LAB_144e9738d;
  uVar2 = *(ushort *)(lVar4 + 0x490);
  uVar10 = (ulonglong)uVar2;
  if ((uVar2 == 3) || (uVar2 == 4)) {
    pcVar8 = "PhotometricInterpretation %d not allowed for JPEG";
    goto LAB_144e97378;
  }
  if (uVar2 == 6) {
    sVar1 = *(short *)(param_1 + 0x140);
    *(short *)(lVar4 + 0x492) = sVar1;
    sVar3 = *(short *)(param_1 + 0x142);
    *(short *)(lVar4 + 0x494) = sVar3;
    if ((sVar1 == 0) || (sVar3 == 0)) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGSetupEncode",
                    "Invalig horizontal/vertical sampling value");
      goto LAB_144e9738d;
    }
    uVar7 = (uint)*(ushort *)(param_1 + 100);
    if (*(ushort *)(param_1 + 100) < 0x11) {
      iVar6 = FUN_144b77e20(param_1,0x214,local_38);
      if (iVar6 == 0) {
        local_30 = 0;
        iVar6 = 1 << (*(byte *)(param_1 + 100) & 0x1f);
        local_2c = (float)(iVar6 + -1);
        local_28 = (float)(iVar6 >> 1);
        local_24 = local_2c;
        local_20 = local_28;
        local_1c = local_2c;
        FUN_144b78170(param_1,0x214,&local_30);
      }
      goto LAB_144e970fd;
    }
LAB_144e9707f:
    uVar10 = (ulonglong)uVar7;
    pcVar8 = "BitsPerSample %d not allowed for JPEG";
  }
  else {
    *(undefined4 *)(lVar4 + 0x492) = 0x10001;
LAB_144e970fd:
    uVar7 = (uint)*(ushort *)(param_1 + 100);
    if (uVar7 != 8) goto LAB_144e9707f;
    *(undefined4 *)(lVar4 + 0x48) = 8;
    if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
      if ((*(uint *)(param_1 + 0x4c) <= *(uint *)(param_1 + 0x74)) ||
         (uVar10 = (ulonglong)*(ushort *)(lVar4 + 0x494) << 3,
         (int)((ulonglong)*(uint *)(param_1 + 0x74) % uVar10) == 0)) {
LAB_144e97187:
        if ((*(byte *)(lVar4 + 0x534) & 3) == 0) {
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffffb;
        }
        else if ((*(longlong **)(lVar4 + 0x520) == (longlong *)0x0) ||
                (**(longlong **)(lVar4 + 0x520) == 0)) {
          lVar5 = *(longlong *)(param_1 + 0x3d0);
          iVar6 = FUN_144e95790(lVar5,*(undefined4 *)(lVar5 + 0x52c),0);
          if ((iVar6 == 0) || (iVar6 = FUN_144e957e0(lVar5,1), iVar6 == 0)) goto LAB_144e9738d;
          if ((*(byte *)(lVar5 + 0x534) & 1) != 0) {
            if (*(longlong *)(lVar5 + 0x60) != 0) {
              *(undefined1 *)(*(longlong *)(lVar5 + 0x60) + 0x80) = 0;
            }
            if ((*(short *)(lVar5 + 0x490) == 6) && (*(longlong *)(lVar5 + 0x68) != 0)) {
              *(undefined1 *)(*(longlong *)(lVar5 + 0x68) + 0x80) = 0;
            }
          }
          if ((*(byte *)(lVar5 + 0x534) & 2) != 0) {
            if (*(longlong *)(lVar5 + 0x80) != 0) {
              *(undefined1 *)(*(longlong *)(lVar5 + 0x80) + 0x111) = 0;
            }
            if (*(longlong *)(lVar5 + 0xa0) != 0) {
              *(undefined1 *)(*(longlong *)(lVar5 + 0xa0) + 0x111) = 0;
            }
            if (*(short *)(lVar5 + 0x490) == 6) {
              if (*(longlong *)(lVar5 + 0x88) != 0) {
                *(undefined1 *)(*(longlong *)(lVar5 + 0x88) + 0x111) = 0;
              }
              if (*(longlong *)(lVar5 + 0xa8) != 0) {
                *(undefined1 *)(*(longlong *)(lVar5 + 0xa8) + 0x111) = 0;
              }
            }
          }
          if (*(void **)(lVar5 + 0x520) != (void *)0x0) {
            free(*(void **)(lVar5 + 0x520));
          }
          *(undefined4 *)(lVar5 + 0x528) = 1000;
          lVar9 = FUN_144e92f50(1000);
          *(longlong *)(lVar5 + 0x520) = lVar9;
          if (lVar9 == 0) {
            *(undefined4 *)(lVar5 + 0x528) = 0;
            FUN_144e92fd0(*(undefined8 *)(*(longlong *)(lVar5 + 0x488) + 0x438),
                          "TIFFjpeg_tables_dest","No space for JPEGTables");
            goto LAB_144e9738d;
          }
          *(longlong *)(lVar5 + 0x28) = lVar5 + 0x428;
          *(undefined1 **)(lVar5 + 0x438) = &LAB_144e95d00;
          *(code **)(lVar5 + 0x440) = FUN_144e95d20;
          *(undefined1 **)(lVar5 + 0x448) = &LAB_144e95db0;
          iVar6 = FUN_144e95940(lVar5);
          if (iVar6 == 0) goto LAB_144e9738d;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 4;
        }
        *(longlong *)(lVar4 + 0x28) = lVar4 + 0x428;
        *(undefined1 **)(lVar4 + 0x438) = &LAB_144e95c30;
        *(code **)(lVar4 + 0x440) = FUN_144e95c60;
        *(undefined1 **)(lVar4 + 0x448) = &LAB_144e95cd0;
        goto LAB_144e9738d;
      }
      pcVar8 = "RowsPerStrip must be multiple of %d for JPEG";
    }
    else {
      uVar10 = (ulonglong)*(ushort *)(lVar4 + 0x494) << 3;
      if ((int)((ulonglong)*(uint *)(param_1 + 0x58) % uVar10) == 0) {
        uVar10 = (ulonglong)*(ushort *)(lVar4 + 0x492) << 3;
        if ((int)((ulonglong)*(uint *)(param_1 + 0x54) % uVar10) == 0) goto LAB_144e97187;
        pcVar8 = "JPEG tile width must be multiple of %d";
      }
      else {
        pcVar8 = "JPEG tile height must be multiple of %d";
      }
    }
  }
LAB_144e97378:
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGSetupEncode",pcVar8,uVar10);
LAB_144e9738d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144e973b0 FUN_144e973b0 body=791 status=ok
// SIG undefined FUN_144e973b0(void)

undefined8 FUN_144e973b0(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (*(char *)(lVar2 + 0x20) == '\x01') {
    (**(code **)(param_1 + 0x358))();
  }
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    uVar11 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x2fc);
    uVar6 = *(uint *)(param_1 + 0x48);
    uVar7 = *(uint *)(param_1 + 0x74);
    uVar9 = FUN_144b77aa0(param_1);
    if (uVar11 <= uVar7) {
      uVar7 = uVar11;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x54);
    uVar7 = *(uint *)(param_1 + 0x58);
    uVar9 = FUN_144b7ac10();
  }
  *(undefined8 *)(lVar2 + 0x498) = uVar9;
  if ((*(short *)(param_1 + 0x9a) == 2) && (param_2 != 0)) {
    uVar1 = *(ushort *)(lVar2 + 0x492);
    if (uVar6 < -(uint)uVar1) {
      uVar6 = ((uVar1 - 1) + uVar6) / (uint)uVar1;
    }
    else {
      uVar6 = 0;
    }
    uVar1 = *(ushort *)(lVar2 + 0x494);
    if (uVar7 < -(uint)uVar1) {
      uVar7 = ((uVar1 - 1) + uVar7) / (uint)uVar1;
    }
    else {
      uVar7 = 0;
    }
  }
  if ((uVar6 < 0x10000) && (uVar7 < 0x10000)) {
    bVar4 = false;
    *(uint *)(lVar2 + 0x30) = uVar6;
    *(uint *)(lVar2 + 0x34) = uVar7;
    if (*(short *)(param_1 + 0x9a) == 1) {
      *(uint *)(lVar2 + 0x38) = (uint)*(ushort *)(param_1 + 0x72);
      if (*(short *)(lVar2 + 0x490) == 6) {
        bVar4 = false;
        if ((*(int *)(lVar2 + 0x530) != 1) &&
           ((*(short *)(lVar2 + 0x492) != 1 || (bVar4 = false, *(short *)(lVar2 + 0x494) != 1)))) {
          bVar4 = true;
        }
        iVar8 = FUN_144e95750(lVar2,3);
        if (iVar8 == 0) {
          return 0;
        }
        *(uint *)(*(longlong *)(lVar2 + 0x58) + 8) = (uint)*(ushort *)(lVar2 + 0x492);
        *(uint *)(*(longlong *)(lVar2 + 0x58) + 0xc) = (uint)*(ushort *)(lVar2 + 0x494);
      }
      else {
        iVar8 = FUN_144e95750(lVar2,*(undefined4 *)(lVar2 + 0x3c));
        bVar4 = false;
        if (iVar8 == 0) {
          return 0;
        }
      }
    }
    else {
      iVar8 = FUN_144e95750(lVar2,0);
      if (iVar8 == 0) {
        return 0;
      }
      **(uint **)(lVar2 + 0x58) = (uint)param_2;
      if ((*(short *)(lVar2 + 0x490) == 6) && (param_2 != 0)) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x58) + 0x10) = 1;
        *(undefined4 *)(*(longlong *)(lVar2 + 0x58) + 0x14) = 1;
        *(undefined4 *)(*(longlong *)(lVar2 + 0x58) + 0x18) = 1;
      }
    }
    *(undefined1 *)(lVar2 + 0x114) = 0;
    *(undefined1 *)(lVar2 + 0x11c) = 0;
    iVar8 = FUN_144e95790(lVar2,*(undefined4 *)(lVar2 + 0x52c),0);
    if (iVar8 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x60);
      if ((*(byte *)(lVar2 + 0x534) & 1) == 0) {
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x80) = 0;
        }
        if (*(longlong *)(lVar2 + 0x68) != 0) {
          *(undefined1 *)(*(longlong *)(lVar2 + 0x68) + 0x80) = 0;
        }
      }
      else {
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x80) = 1;
        }
        if (*(longlong *)(lVar2 + 0x68) != 0) {
          *(undefined1 *)(*(longlong *)(lVar2 + 0x68) + 0x80) = 1;
        }
      }
      if ((*(byte *)(lVar2 + 0x534) & 2) == 0) {
        uVar5 = 1;
      }
      else {
        if (*(longlong *)(lVar2 + 0x80) != 0) {
          *(undefined1 *)(*(longlong *)(lVar2 + 0x80) + 0x111) = 1;
        }
        if (*(longlong *)(lVar2 + 0xa0) != 0) {
          *(undefined1 *)(*(longlong *)(lVar2 + 0xa0) + 0x111) = 1;
        }
        if (*(longlong *)(lVar2 + 0x88) != 0) {
          *(undefined1 *)(*(longlong *)(lVar2 + 0x88) + 0x111) = 1;
        }
        if (*(longlong *)(lVar2 + 0xa8) != 0) {
          *(undefined1 *)(*(longlong *)(lVar2 + 0xa8) + 0x111) = 1;
        }
        uVar5 = 0;
      }
      *(undefined1 *)(lVar2 + 0x102) = uVar5;
      *(bool *)(lVar2 + 0x100) = bVar4;
      pcVar10 = FUN_144e951c0;
      if (!bVar4) {
        pcVar10 = FUN_144e95010;
      }
      *(code **)(param_1 + 0x380) = pcVar10;
      *(code **)(param_1 + 0x390) = pcVar10;
      *(code **)(param_1 + 0x3a0) = pcVar10;
      iVar8 = FUN_144e95820(lVar2,0);
      if ((iVar8 != 0) &&
         ((!bVar4 ||
          (iVar8 = FUN_144e95ed0(param_1,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x4c)
                                ), iVar8 != 0)))) {
        *(undefined4 *)(lVar2 + 0x4f0) = 0;
        return 1;
      }
    }
  }
  else {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"JPEGPreEncode","Strip/tile too large for JPEG");
  }
  return 0;
}



// FUNCTION 144e976d0 FUN_144e976d0 body=277 status=ok
// SIG undefined FUN_144e976d0(void)

undefined8 FUN_144e976d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (0 < *(int *)(lVar2 + 0x4f0)) {
    iVar6 = 0;
    if (0 < *(int *)(lVar2 + 0x4c)) {
      piVar8 = (int *)(*(longlong *)(lVar2 + 0x58) + 0x1c);
      plVar7 = (longlong *)(lVar2 + 0x4a0);
      do {
        iVar4 = piVar8[-4];
        iVar1 = *piVar8;
        for (lVar5 = (longlong)(iVar4 * *(int *)(lVar2 + 0x4f0)); lVar5 < iVar4 * 8;
            lVar5 = lVar5 + 1) {
          FUN_144e92fa0(*(undefined8 *)(*plVar7 + lVar5 * 8),
                        *(undefined8 *)(*plVar7 + -8 + lVar5 * 8),iVar1 << 3);
        }
        iVar6 = iVar6 + 1;
        plVar7 = plVar7 + 1;
        piVar8 = piVar8 + 0x18;
      } while (iVar6 < *(int *)(lVar2 + 0x4c));
    }
    iVar4 = *(int *)(lVar2 + 300) << 3;
    iVar6 = FUN_144e958b0(lVar2,lVar2 + 0x4a0,iVar4);
    if (iVar6 != iVar4) {
      return 0;
    }
  }
  uVar3 = FUN_144e95900(*(undefined8 *)(param_1 + 0x3d0));
  return uVar3;
}



// FUNCTION 144e977f0 FUN_144e977f0 body=137 status=ok
// SIG undefined FUN_144e977f0(void)

void FUN_144e977f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(lVar1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(lVar1 + 0x500);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(lVar1 + 0x508);
  if (*(int *)(lVar1 + 600) != 0) {
    FUN_144e95ba0(lVar1);
  }
  if (*(void **)(lVar1 + 0x520) != (void *)0x0) {
    free(*(void **)(lVar1 + 0x520));
  }
  free(*(void **)(param_1 + 0x3d0));
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  FUN_144e93410(param_1);
  return;
}



// FUNCTION 144e97880 FUN_144e97880 body=132 status=ok
// SIG undefined FUN_144e97880(void)

void FUN_144e97880(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10) & 0xffffbfff;
  *(uint *)(param_1 + 0x10) = uVar2;
  if (((*(short *)(param_1 + 0x9a) == 1) && (*(short *)(param_1 + 0x6a) == 6)) &&
     (*(int *)(*(longlong *)(param_1 + 0x3d0) + 0x530) == 1)) {
    uVar2 = uVar2 | 0x4000;
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  if (0 < *(longlong *)(param_1 + 0x330)) {
    if ((uVar2 >> 10 & 1) == 0) {
      uVar1 = 0xffffffffffffffff;
    }
    else {
      uVar1 = FUN_144b7ac50(param_1);
    }
    *(undefined8 *)(param_1 + 0x330) = uVar1;
  }
  if (0 < *(longlong *)(param_1 + 0x3d8)) {
    uVar1 = FUN_144b77aa0(param_1);
    *(undefined8 *)(param_1 + 0x3d8) = uVar1;
  }
  return;
}



// FUNCTION 144e97910 FUN_144e97910 body=371 status=ok
// SIG undefined FUN_144e97910(void)

ulonglong FUN_144e97910(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  uVar2 = (uint)param_2;
  if (uVar2 < 0x10002) {
    if (uVar2 == 0x10001) {
      *(int *)(lVar4 + 0x52c) = *param_3;
      return 1;
    }
    if (uVar2 == 0x106) {
      uVar2 = (**(code **)(lVar4 + 0x500))(param_1,0x106);
      FUN_144e97880(param_1);
      return (ulonglong)uVar2;
    }
    if (uVar2 == 0x15b) {
      iVar1 = *param_3;
      if (iVar1 != 0) {
        FUN_144b783a0(lVar4 + 0x520,*(undefined8 *)(param_3 + 2),iVar1);
        *(int *)(lVar4 + 0x528) = iVar1;
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 4;
        lVar4 = FUN_144e93aa0(param_1,0x15b);
        if (lVar4 != 0) {
          uVar3 = (ulonglong)(*(ushort *)(lVar4 + 0x18) >> 5);
          *(uint *)(param_1 + uVar3 * 4 + 0x38) =
               *(uint *)(param_1 + 0x38 + uVar3 * 4) | 1 << (*(ushort *)(lVar4 + 0x18) & 0x1f);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
          return 1;
        }
      }
      return 0;
    }
    if (uVar2 == 0x212) {
      *(undefined4 *)(lVar4 + 0x538) = 1;
      param_2 = 0x212;
    }
  }
  else {
    if (uVar2 == 0x10002) {
      *(int *)(lVar4 + 0x530) = *param_3;
      FUN_144e97880(param_1);
      return 1;
    }
    if (uVar2 == 0x10003) {
      *(int *)(lVar4 + 0x534) = *param_3;
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144e97977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(lVar4 + 0x500))(param_1,param_2);
  return uVar3;
}



// FUNCTION 144e97b10 FUN_144e97b10 body=113 status=ok
// SIG undefined FUN_144e97b10(void)

void FUN_144e97b10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x40) & 4) != 0) {
      FUN_146c958a0(param_2,"  JPEG Tables: (%lu bytes)\n",*(undefined4 *)(lVar1 + 0x528));
    }
    if (*(code **)(lVar1 + 0x508) != (code *)0x0) {
      (**(code **)(lVar1 + 0x508))(param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 144e97b90 FUN_144e97b90 body=87 status=ok
// SIG undefined FUN_144e97b90(void)

ulonglong FUN_144e97b90(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x510))();
  uVar2 = (uint)uVar3;
  if (uVar2 < *(uint *)(param_1 + 0x4c)) {
    uVar1 = *(ushort *)(param_1 + 0x142);
    if (uVar2 < (uint)uVar1 * -8) {
      return (ulonglong)((((uVar2 - 1) + (uint)uVar1 * 8) / ((uint)uVar1 * 8)) * (uint)uVar1 * 8);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144e97bf0 FUN_144e97bf0 body=158 status=ok
// SIG undefined FUN_144e97bf0(void)

void FUN_144e97bf0(longlong param_1,uint *param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x518))();
  uVar1 = *(ushort *)(param_1 + 0x140);
  uVar3 = 0;
  uVar2 = uVar3;
  if (*param_2 < (uint)uVar1 * -8) {
    uVar2 = ((*param_2 - 1) + (uint)uVar1 * 8) / ((uint)uVar1 * 8);
  }
  *param_2 = uVar1 * uVar2 * 8;
  uVar1 = *(ushort *)(param_1 + 0x142);
  if (*param_3 < (uint)uVar1 * -8) {
    uVar3 = ((*param_3 - 1) + (uint)uVar1 * 8) / ((uint)uVar1 * 8);
  }
  *param_3 = uVar1 * uVar3 * 8;
  return;
}



// FUNCTION 144e97c90 FUN_144e97c90 body=546 status=ok
// SIG undefined FUN_144e97c90(void)

undefined8 FUN_144e97c90(int *param_1,undefined8 param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  *param_1 = 0x5dc;
  FUN_144e92fa0(param_1 + 7);
  iVar2 = *param_1;
  iVar5 = 0;
  fVar1 = (float)param_1[0x19];
  iVar4 = 0;
  fVar7 = (float)param_1[0x10];
  fVar8 = (float)param_1[0x16];
  param_1[1] = (int)((fVar7 - fVar8) / (float)iVar2);
  if (-1 < iVar2) {
    pfVar3 = (float *)(param_1 + 0x1c);
    do {
      dVar6 = pow((double)iVar4 / (double)*param_1,1.0 / (double)fVar1);
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)dVar6 * (float)(uint)param_1[0x13];
      iVar2 = *param_1;
      pfVar3 = pfVar3 + 1;
    } while (iVar4 <= iVar2);
    fVar7 = (float)param_1[0x10];
    fVar8 = (float)param_1[0x16];
  }
  fVar1 = (float)param_1[0x1a];
  iVar4 = 0;
  param_1[2] = (int)((fVar7 - fVar8) / (float)iVar2);
  if (-1 < iVar2) {
    pfVar3 = (float *)(param_1 + 0x5f9);
    do {
      dVar6 = pow((double)iVar4 / (double)*param_1,1.0 / (double)fVar1);
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)dVar6 * (float)(uint)param_1[0x14];
      iVar2 = *param_1;
      pfVar3 = pfVar3 + 1;
    } while (iVar4 <= iVar2);
    fVar7 = (float)param_1[0x10];
    fVar8 = (float)param_1[0x16];
  }
  fVar1 = (float)param_1[0x1b];
  param_1[3] = (int)((fVar7 - fVar8) / (float)iVar2);
  if (-1 < iVar2) {
    pfVar3 = (float *)(param_1 + 0xbd6);
    do {
      dVar6 = pow((double)iVar5 / (double)*param_1,1.0 / (double)fVar1);
      iVar5 = iVar5 + 1;
      *pfVar3 = (float)dVar6 * (float)(uint)param_1[0x15];
      pfVar3 = pfVar3 + 1;
    } while (iVar5 <= *param_1);
  }
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  return 0;
}



// FUNCTION 144e97ec0 FUN_144e97ec0 body=280 status=ok
// SIG undefined FUN_144e97ec0(void)

void FUN_144e97ec0(longlong param_1,uint param_2,int param_3,int param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  
  fVar2 = ((float)param_2 * 100.0) / 255.0;
  if (8.856 <= fVar2) {
    fVar2 = (fVar2 + 16.0) / 116.0;
    *param_6 = *(float *)(param_1 + 0x14) * fVar2 * fVar2 * fVar2;
  }
  else {
    fVar2 = (*(float *)(param_1 + 0x14) * fVar2) / 903.292;
    *param_6 = fVar2;
    fVar2 = (fVar2 / *(float *)(param_1 + 0x14)) * 7.787 + 0.13793103;
  }
  fVar1 = (float)param_3 / 500.0 + fVar2;
  if (0.2069 <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x10) * fVar1 * fVar1 * fVar1;
  }
  else {
    fVar1 = ((fVar1 - 0.13793) * *(float *)(param_1 + 0x10)) / 7.787;
  }
  *param_5 = fVar1;
  fVar2 = fVar2 - (float)param_4 / 200.0;
  if (fVar2 < 0.2069) {
    *param_7 = ((fVar2 - 0.13793) * *(float *)(param_1 + 0x18)) / 7.787;
    return;
  }
  *param_7 = *(float *)(param_1 + 0x18) * fVar2 * fVar2 * fVar2;
  return;
}



// FUNCTION 144e97fe0 FUN_144e97fe0 body=389 status=ok
// SIG undefined FUN_144e97fe0(void)

void FUN_144e97fe0(int *param_1,float param_2,float param_3,float param_4,uint *param_5,
                  uint *param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = param_2 * (float)param_1[10] + param_3 * (float)param_1[0xb] +
          param_4 * (float)param_1[0xc];
  if (fVar6 <= (float)param_1[0x17]) {
    fVar6 = (float)param_1[0x17];
  }
  fVar4 = param_3 * (float)param_1[8] + param_2 * (float)param_1[7] + param_4 * (float)param_1[9];
  fVar5 = param_2 * (float)param_1[0xd] + param_3 * (float)param_1[0xe] +
          param_4 * (float)param_1[0xf];
  if ((float)param_1[0x11] <= fVar6) {
    fVar6 = (float)param_1[0x11];
  }
  if (fVar4 <= (float)param_1[0x16]) {
    fVar4 = (float)param_1[0x16];
  }
  if (fVar5 <= (float)param_1[0x18]) {
    fVar5 = (float)param_1[0x18];
  }
  if ((float)param_1[0x10] <= fVar4) {
    fVar4 = (float)param_1[0x10];
  }
  if ((float)param_1[0x12] <= fVar5) {
    fVar5 = (float)param_1[0x12];
  }
  iVar2 = (int)((fVar4 - (float)param_1[0x16]) / (float)param_1[1]);
  iVar1 = *param_1;
  if (iVar2 <= *param_1) {
    iVar1 = iVar2;
  }
  fVar4 = (float)param_1[(longlong)iVar1 + 0x1c];
  if (fVar4 <= 0.0) {
    fVar4 = fVar4 - 0.5;
  }
  else {
    fVar4 = fVar4 + 0.5;
  }
  *param_5 = (uint)(longlong)fVar4;
  iVar2 = (int)((fVar6 - (float)param_1[0x17]) / (float)param_1[2]);
  iVar1 = *param_1;
  if (iVar2 <= *param_1) {
    iVar1 = iVar2;
  }
  fVar6 = (float)param_1[(longlong)iVar1 + 0x5f9];
  if (fVar6 <= 0.0) {
    fVar6 = fVar6 - 0.5;
  }
  else {
    fVar6 = fVar6 + 0.5;
  }
  *param_6 = (uint)(longlong)fVar6;
  iVar2 = (int)((fVar5 - (float)param_1[0x18]) / (float)param_1[3]);
  iVar1 = *param_1;
  if (iVar2 <= *param_1) {
    iVar1 = iVar2;
  }
  fVar6 = (float)param_1[(longlong)iVar1 + 0xbd6];
  if (fVar6 <= 0.0) {
    fVar6 = fVar6 - 0.5;
  }
  else {
    fVar6 = fVar6 + 0.5;
  }
  *param_7 = (uint)(longlong)fVar6;
  uVar3 = *param_5;
  if ((uint)param_1[0x13] <= *param_5) {
    uVar3 = param_1[0x13];
  }
  *param_5 = uVar3;
  uVar3 = *param_6;
  if ((uint)param_1[0x14] <= *param_6) {
    uVar3 = param_1[0x14];
  }
  *param_6 = uVar3;
  uVar3 = *param_7;
  if ((uint)param_1[0x15] <= *param_7) {
    uVar3 = param_1[0x15];
  }
  *param_7 = uVar3;
  return;
}



// FUNCTION 144e98170 FUN_144e98170 body=864 status=ok
// SIG undefined FUN_144e98170(void)

undefined8 FUN_144e98170(undefined8 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_144e92f90(param_1 + 6,0,0x100);
  puVar3 = param_1 + 0x26;
  *param_1 = puVar3;
  iVar2 = 0;
  do {
    *(char *)puVar3 = (char)iVar2;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  FUN_144e92f90(param_1 + 0x46,0xff,0x200);
  fVar9 = *param_2;
  param_1[1] = param_1 + 0x86;
  param_1[2] = param_1 + 0x106;
  param_1[3] = param_1 + 0x186;
  param_1[4] = param_1 + 0x206;
  fVar10 = 2.0 - (fVar9 + fVar9);
  param_1[5] = param_1 + 0x286;
  if (0.0 <= fVar10) {
    fVar5 = 2.0;
    if (fVar10 <= 2.0) {
      fVar5 = fVar10;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar9 = (fVar9 * fVar10) / param_2[1];
  if (0.0 <= fVar9) {
    fVar10 = 2.0;
    if (fVar9 <= 2.0) {
      fVar10 = fVar9;
    }
  }
  else {
    fVar10 = 0.0;
  }
  fVar9 = param_2[2];
  fVar11 = 2.0 - (fVar9 + fVar9);
  if (0.0 <= fVar11) {
    fVar6 = 2.0;
    if (fVar11 <= 2.0) {
      fVar6 = fVar11;
    }
  }
  else {
    fVar6 = 0.0;
  }
  fVar9 = (fVar9 * fVar11) / param_2[1];
  if (0.0 <= fVar9) {
    fVar11 = 2.0;
    if (fVar9 <= 2.0) {
      fVar11 = fVar9;
    }
  }
  else {
    fVar11 = 0.0;
  }
  iVar2 = -0x80;
  do {
    fVar9 = (param_3[5] - 128.0) - (param_3[4] - 128.0);
    if (fVar9 == 0.0) {
      fVar9 = 1.0;
    }
    fVar9 = ((float)(iVar2 - (int)(param_3[4] - 128.0)) * 127.0) / fVar9;
    if (-4096.0 <= fVar9) {
      fVar7 = 4096.0;
      if (fVar9 <= 4096.0) {
        fVar7 = fVar9;
      }
    }
    else {
      fVar7 = -4096.0;
    }
    fVar9 = (param_3[3] - 128.0) - (param_3[2] - 128.0);
    if (fVar9 == 0.0) {
      fVar9 = 1.0;
    }
    fVar9 = ((float)(iVar2 - (int)(param_3[2] - 128.0)) * 127.0) / fVar9;
    if (-4096.0 <= fVar9) {
      fVar8 = 4096.0;
      if (fVar9 <= 4096.0) {
        fVar8 = fVar9;
      }
    }
    else {
      fVar8 = -4096.0;
    }
    lVar4 = (longlong)iVar2;
    *(int *)(param_1[1] + 0x200 + lVar4 * 4) =
         (int)fVar7 * (int)(fVar5 * 65536.0 + 0.5) + 0x8000 >> 0x10;
    *(int *)(param_1[2] + 0x200 + lVar4 * 4) =
         (int)fVar8 * (int)(fVar6 * 65536.0 + 0.5) + 0x8000 >> 0x10;
    *(int *)(param_1[3] + 0x200 + lVar4 * 4) = (int)fVar7 * -(int)(fVar10 * 65536.0 + 0.5);
    *(int *)(param_1[4] + 0x200 + lVar4 * 4) = (int)fVar8 * -(int)(fVar11 * 65536.0 + 0.5) + 0x8000;
    fVar9 = param_3[1] - *param_3;
    if (fVar9 == 0.0) {
      fVar9 = 1.0;
    }
    fVar9 = ((float)((iVar2 - (int)*param_3) + 0x80) * 255.0) / fVar9;
    if (-4096.0 <= fVar9) {
      fVar7 = 4096.0;
      if (fVar9 <= 4096.0) {
        fVar7 = fVar9;
      }
    }
    else {
      fVar7 = -4096.0;
    }
    *(int *)(param_1[5] + 0x200 + lVar4 * 4) = (int)fVar7;
    iVar1 = iVar2 + 0x81;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x100);
  return 0;
}



// FUNCTION 144e984d0 FUN_144e984d0 body=203 status=ok
// SIG undefined FUN_144e984d0(void)

void FUN_144e984d0(longlong param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6
                  ,int *param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (0xff < param_2) {
    param_2 = 0xff;
  }
  if ((int)param_3 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)param_3;
    if (0xff < (int)param_3) {
      uVar3 = 0xff;
    }
  }
  if ((int)param_4 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)param_4;
    if (0xff < (int)param_4) {
      uVar4 = 0xff;
    }
  }
  lVar1 = (ulonglong)param_2 * 4;
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + uVar4 * 4) +
          *(int *)(*(longlong *)(param_1 + 0x28) + lVar1);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  *param_5 = iVar2;
  iVar2 = (*(int *)(*(longlong *)(param_1 + 0x20) + uVar3 * 4) +
           *(int *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) >> 0x10) +
          *(int *)(*(longlong *)(param_1 + 0x28) + lVar1);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  *param_6 = iVar2;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar3 * 4) +
          *(int *)(*(longlong *)(param_1 + 0x28) + lVar1);
  if (iVar2 < 0) {
    *param_7 = 0;
    return;
  }
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  *param_7 = iVar2;
  return;
}



// FUNCTION 144e985a0 FUN_144e985a0 body=96 status=ok
// SIG undefined FUN_144e985a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPCRITICAL_SECTION FUN_144e985a0(void)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_144ea6670(0x28,"crypto\\threads_win.c",0x16);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar1 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,0x400);
    if (BVar1 != 0) {
      return lpCriticalSection;
    }
    FUN_144ea6530(lpCriticalSection,"crypto\\threads_win.c",0x1e);
  }
  return (LPCRITICAL_SECTION)0x0;
}



// FUNCTION 144e98600 FUN_144e98600 body=29 status=ok
// SIG undefined FUN_144e98600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e98600(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return 1;
}



// FUNCTION 144e98620 FUN_144e98620 body=29 status=ok
// SIG undefined FUN_144e98620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e98620(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return 1;
}



// FUNCTION 144e98640 FUN_144e98640 body=29 status=ok
// SIG undefined FUN_144e98640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e98640(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return 1;
}



// FUNCTION 144e98660 FUN_144e98660 body=55 status=ok
// SIG undefined FUN_144e98660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98660(LPCRITICAL_SECTION param_1)

{
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(param_1);
    FUN_144ea6530(param_1,"crypto\\threads_win.c",0x40);
  }
  return;
}



// FUNCTION 144e986a0 FUN_144e986a0 body=17 status=ok
// SIG undefined FUN_144e986a0(void)

undefined8 FUN_144e986a0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  *param_3 = iVar1 + param_2;
  return 1;
}



// FUNCTION 144e986c0 FUN_144e986c0 body=104 status=ok
// SIG undefined FUN_144e986c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144e986c0(int *param_1,code *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 2) {
    return true;
  }
  while( true ) {
    LOCK();
    iVar1 = *param_1;
    bVar2 = iVar1 == 0;
    if (bVar2) {
      *param_1 = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (bVar2) break;
    if (iVar1 != 1) {
      return *param_1 == 2;
    }
  }
  (*param_2)();
  *param_1 = 2;
  return true;
}



// FUNCTION 144e98730 FUN_144e98730 body=42 status=ok
// SIG undefined FUN_144e98730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144e98730(DWORD *param_1)

{
  DWORD DVar1;
  
  DVar1 = TlsAlloc();
  *param_1 = DVar1;
  return DVar1 != 0xffffffff;
}



// FUNCTION 144e98760 FUN_144e98760 body=63 status=ok
// SIG undefined FUN_144e98760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPVOID FUN_144e98760(DWORD *param_1)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(*param_1);
  SetLastError(dwErrCode);
  return pvVar1;
}



// FUNCTION 144e987a0 FUN_144e987a0 body=35 status=ok
// SIG undefined FUN_144e987a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144e987a0(DWORD *param_1,LPVOID param_2)

{
  BOOL BVar1;
  
  BVar1 = TlsSetValue(*param_1,param_2);
  return BVar1 != 0;
}



// FUNCTION 144e987d0 FUN_144e987d0 body=35 status=ok
// SIG undefined FUN_144e987d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144e987d0(DWORD *param_1)

{
  BOOL BVar1;
  
  BVar1 = TlsFree(*param_1);
  return BVar1 != 0;
}



// FUNCTION 144e98800 FUN_144e98800 body=24 status=ok
// SIG undefined FUN_144e98800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98800(void)

{
                    /* WARNING: Could not recover jumptable at 0x000144e98811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetCurrentThreadId();
  return;
}



// FUNCTION 144e98820 FUN_144e98820 body=8 status=ok
// SIG undefined FUN_144e98820(void)

bool FUN_144e98820(int param_1,int param_2)

{
  return param_1 == param_2;
}



// FUNCTION 144e98830 FUN_144e98830 body=3 status=ok
// SIG undefined FUN_144e98830(void)

undefined8 FUN_144e98830(void)

{
  return 0;
}



// FUNCTION 144e98840 FUN_144e98840 body=3 status=ok
// SIG undefined FUN_144e98840(void)

undefined8 FUN_144e98840(void)

{
  return 0;
}



// FUNCTION 144e98850 FUN_144e98850 body=240 status=ok
// SIG undefined FUN_144e98850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e98850(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_28 [2];
  longlong local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x144e9886b;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_144e986c0(&DAT_14c796758,FUN_144e98de0);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = DAT_14c79675c;
    }
    if (iVar3 != 0) {
      FUN_144e98600(DAT_14c796750);
      local_28[0] = param_2 & 0xffff7fff;
      local_20 = param_1;
      lVar2 = FUN_144ea8820(DAT_14c796748,local_28);
      do {
        uVar5 = 0;
        if (lVar2 == 0) {
LAB_144e98916:
          FUN_144e98640(DAT_14c796750);
          return uVar5;
        }
        if ((*(int *)(lVar2 + 4) == 0) || ((param_2 & 0x8000) != 0)) {
          uVar5 = *(undefined8 *)(lVar2 + 0x10);
          goto LAB_144e98916;
        }
        iVar4 = iVar4 + 1;
        uVar5 = 0;
        if (10 < iVar4) goto LAB_144e98916;
        local_20 = *(longlong *)(lVar2 + 0x10);
        lVar2 = FUN_144ea8820(DAT_14c796748,local_28);
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 144e98940 FUN_144e98940 body=337 status=ok
// SIG undefined FUN_144e98940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144e98940(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  iVar2 = FUN_144e986c0(&DAT_14c796758,FUN_144e98de0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_14c79675c;
  }
  if (iVar3 == 0) {
    return 0;
  }
  puVar4 = (uint *)FUN_144ea64e0(0x18,"crypto\\objects\\o_names.c",0xe1);
  uVar1 = DAT_14c796750;
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  *(undefined8 *)(puVar4 + 2) = param_1;
  *(undefined8 *)(puVar4 + 4) = param_3;
  puVar4[1] = param_2 & 0x8000;
  *puVar4 = param_2 & 0xffff7fff;
  FUN_144e98620(uVar1);
  piVar5 = (int *)FUN_144ea86c0(DAT_14c796748,puVar4);
  if (piVar5 == (int *)0x0) {
    iVar3 = FUN_144ea8520(DAT_14c796748);
    if (iVar3 != 0) {
      FUN_144ea6530(puVar4,"crypto\\objects\\o_names.c",0xfd);
      goto LAB_144e98a41;
    }
  }
  else {
    if ((DAT_14c796760 != 0) && (iVar3 = FUN_144babbf0(), *piVar5 < iVar3)) {
      lVar6 = FUN_144babc00(DAT_14c796760);
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(piVar5 + 2),*piVar5,*(undefined8 *)(piVar5 + 4));
    }
    FUN_144ea6530(piVar5,"crypto\\objects\\o_names.c",0xf9);
  }
  uVar7 = 1;
LAB_144e98a41:
  FUN_144e98640(DAT_14c796750);
  return uVar7;
}



// FUNCTION 144e98aa0 FUN_144e98aa0 body=240 status=ok
// SIG undefined FUN_144e98aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144e98aa0(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x144e98ab5;
  uVar5 = 0;
  iVar1 = FUN_144e986c0(&DAT_14c796758,FUN_144e98de0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c79675c;
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_144e98620(DAT_14c796750);
  local_28[0] = param_2 & 0xffff7fff;
  local_20 = param_1;
  piVar3 = (int *)FUN_144ea8790(DAT_14c796748,local_28);
  if (piVar3 != (int *)0x0) {
    if (DAT_14c796760 != 0) {
      iVar2 = FUN_144babbf0();
      if (*piVar3 < iVar2) {
        lVar4 = FUN_144babc00(DAT_14c796760);
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(piVar3 + 2),*piVar3,*(undefined8 *)(piVar3 + 4))
        ;
      }
    }
    FUN_144ea6530(piVar3,"crypto\\objects\\o_names.c",0x123);
    uVar5 = 1;
  }
  FUN_144e98640(DAT_14c796750);
  return uVar5;
}



// FUNCTION 144e98b90 FUN_144e98b90 body=183 status=ok
// SIG undefined FUN_144e98b90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98b90(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_14c796748 != 0) {
    DAT_14c796768 = param_1;
    uVar1 = FUN_144ea89f0();
    FUN_144ea8a00(DAT_14c796748,0);
    FUN_144ea8870(DAT_14c796748,FUN_144e98e00);
    if (param_1 < 0) {
      FUN_144ea8620();
      FUN_144babe00(DAT_14c796760,FUN_144e98e30);
      FUN_144e98660(DAT_14c796750);
      DAT_14c796748 = 0;
      DAT_14c796760 = 0;
      DAT_14c796750 = 0;
      return;
    }
    FUN_144ea8a00(DAT_14c796748,uVar1);
  }
  return;
}



// FUNCTION 144e98c50 FUN_144e98c50 body=92 status=ok
// SIG undefined FUN_144e98c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144e98c50(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (DAT_14c796760 != 0) {
    iVar1 = FUN_144babbf0();
    if ((int)*param_1 < iVar1) {
      puVar3 = (undefined8 *)FUN_144babc00(DAT_14c796760);
      uVar2 = (*(code *)*puVar3)(*(undefined8 *)(param_1 + 2));
      return *param_1 ^ uVar2;
    }
  }
  uVar2 = FUN_144ea8a10(*(undefined8 *)(param_1 + 2));
  return *param_1 ^ uVar2;
}



// FUNCTION 144e98cb0 FUN_144e98cb0 body=113 status=ok
// SIG undefined FUN_144e98cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98cb0(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == *param_2) {
    if (DAT_14c796760 != 0) {
      iVar1 = FUN_144babbf0();
      if (*param_1 < iVar1) {
        lVar2 = FUN_144babc00(DAT_14c796760);
                    /* WARNING: Could not recover jumptable at 0x000144e98d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return;
      }
    }
    _stricmp(*(char **)(param_1 + 2),*(char **)(param_2 + 2));
  }
  return;
}



// FUNCTION 144e98d30 FUN_144e98d30 body=165 status=ok
// SIG undefined FUN_144e98d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144e98d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x144e98d3a;
  FUN_14525f240(3);
  DAT_14c796748 = 0;
  DAT_14c796750 = FUN_144e985a0();
  if (DAT_14c796750 != 0) {
    DAT_14c796748 = FUN_144ea8530(FUN_144e98c50,FUN_144e98cb0,param_3,param_4,uVar1);
  }
  if (DAT_14c796748 == 0) {
    FUN_144e98660(DAT_14c796750);
    DAT_14c796750 = 0;
  }
  FUN_14525f240(2);
  if ((DAT_14c796748 != 0) && (DAT_14c796750 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144e98de0 FUN_144e98de0 body=29 status=ok
// SIG undefined FUN_144e98de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98de0(void)

{
  DAT_14c79675c = FUN_144e98d30();
  return;
}



// FUNCTION 144e98e00 FUN_144e98e00 body=48 status=ok
// SIG undefined FUN_144e98e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98e00(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 != (int *)0x0) && ((DAT_14c796768 < 0 || (DAT_14c796768 == *param_1)))) {
    FUN_144e98aa0(*(undefined8 *)(param_1 + 2),*param_1,param_3,param_4,0x144e98e0f);
  }
  return;
}



// FUNCTION 144e98e30 FUN_144e98e30 body=35 status=ok
// SIG undefined FUN_144e98e30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98e30(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\objects\\o_names.c",0x182);
  return;
}



// FUNCTION 144e98e60 FUN_144e98e60 body=30 status=ok
// SIG undefined FUN_144e98e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98e60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_14525f250(uVar1);
  return;
}



// FUNCTION 144e98e80 FUN_144e98e80 body=54 status=ok
// SIG undefined FUN_144e98e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_14525f2a0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144e98ec0 FUN_144e98ec0 body=39 status=ok
// SIG undefined FUN_144e98ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_14525f3d0(param_2,uVar1);
  return;
}



// FUNCTION 144e98ef0 FUN_144e98ef0 body=8 status=ok
// SIG undefined FUN_144e98ef0(void)

undefined * FUN_144e98ef0(void)

{
  return &DAT_149bd0bb0;
}



// FUNCTION 144e98f00 FUN_144e98f00 body=55 status=ok
// SIG undefined FUN_144e98f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98f00(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba3d50();
  iVar1 = FUN_14525f250(lVar2);
  if (iVar1 == 0) {
    return;
  }
  FUN_144edb280(lVar2 + 0x5c);
  return;
}



// FUNCTION 144e98f40 FUN_144e98f40 body=102 status=ok
// SIG undefined FUN_144e98f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba3d50();
  iVar1 = FUN_14525f2a0(lVar2,param_2,param_3);
  if (iVar1 == 0) {
    return;
  }
  FUN_144edb2d0(lVar2 + 0x5c,param_2,param_3);
  return;
}



// FUNCTION 144e98fb0 FUN_144e98fb0 body=79 status=ok
// SIG undefined FUN_144e98fb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e98fb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba3d50();
  iVar1 = FUN_14525f3d0(param_2,lVar2);
  if (iVar1 == 0) {
    return;
  }
  FUN_144edb400(param_2 + 0x10,lVar2 + 0x5c);
  return;
}



// FUNCTION 144e99000 FUN_144e99000 body=467 status=ok
// SIG undefined FUN_144e99000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e99000(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_2 == 0x1d) && (param_1 != 0)) && (lVar2 = FUN_144ba3d50(), param_3 == 0x30)) &&
     (iVar1 = FUN_144e98f40(param_1,param_4,0x30), 0 < iVar1)) {
    local_78 = 0x3636363636363636;
    local_70 = 0x3636363636363636;
    local_68 = 0x3636363636363636;
    local_60 = 0x3636363636363636;
    local_58 = 0x3636363636363636;
    local_50 = 0x3636363636363636;
    iVar1 = FUN_14525f2a0(lVar2,&local_78,0x30);
    if ((((iVar1 != 0) && (iVar1 = FUN_14525f3d0(local_48,lVar2), iVar1 != 0)) &&
        ((iVar1 = FUN_144edb2d0(lVar2 + 0x5c,&local_78,0x28), iVar1 != 0 &&
         ((iVar1 = FUN_144edb400(local_38,lVar2 + 0x5c), iVar1 != 0 &&
          (iVar1 = FUN_144e98f00(param_1), iVar1 != 0)))))) &&
       (iVar1 = FUN_144e98f40(param_1,param_4,0x30), 0 < iVar1)) {
      local_78 = 0x5c5c5c5c5c5c5c5c;
      local_70 = 0x5c5c5c5c5c5c5c5c;
      local_68 = 0x5c5c5c5c5c5c5c5c;
      local_60 = 0x5c5c5c5c5c5c5c5c;
      local_58 = 0x5c5c5c5c5c5c5c5c;
      local_50 = 0x5c5c5c5c5c5c5c5c;
      iVar1 = FUN_14525f2a0(lVar2,&local_78,0x30);
      if ((((iVar1 != 0) && (iVar1 = FUN_14525f2a0(lVar2,local_48,0x10), iVar1 != 0)) &&
          (iVar1 = FUN_144edb2d0(lVar2 + 0x5c,&local_78,0x28), iVar1 != 0)) &&
         (iVar1 = FUN_144edb2d0(lVar2 + 0x5c,local_38,0x14), iVar1 != 0)) {
        FUN_14259f0c0(local_48,0x10);
        FUN_14259f0c0(local_38,0x14);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e991e0 FUN_144e991e0 body=8 status=ok
// SIG undefined FUN_144e991e0(void)

undefined * FUN_144e991e0(void)

{
  return &DAT_149bd0c00;
}



// FUNCTION 144e991f0 FUN_144e991f0 body=76 status=ok
// SIG undefined FUN_144e991f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e991f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144ba3e90();
  *(undefined8 *)(lVar1 + 0x80) = 0;
  uVar2 = FUN_144ba3e90(param_1);
  FUN_1452631f0(param_2,uVar2);
  return 1;
}



// FUNCTION 144e99240 FUN_144e99240 body=76 status=ok
// SIG undefined FUN_144e99240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99240(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = FUN_144bac8c0(param_4,8);
  if (iVar1 < 1) {
    return 0;
  }
  FUN_145263190(param_4);
  return 1;
}



// FUNCTION 144e99290 FUN_144e99290 body=163 status=ok
// SIG undefined FUN_144e99290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99290(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_144ba3db0();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_1452630c0(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 144e99340 FUN_144e99340 body=279 status=ok
// SIG undefined FUN_144e99340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99340(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_1452636d0(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_1452636d0(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e99460 FUN_144e99460 body=303 status=ok
// SIG undefined FUN_144e99460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99460(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144e99479;
  lVar3 = FUN_144ba3e90();
  if (*(longlong *)(lVar3 + 0x80) == 0) {
    if (0x3fffffff < param_4) {
      uVar6 = param_4 >> 0x1e;
      param_4 = param_4 + uVar6 * -0x40000000;
      do {
        uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar1 = FUN_144ba3dc0(param_1);
        uVar4 = FUN_144ba3e50(param_1);
        uVar5 = FUN_144ba3e90(param_1);
        uVar7 = CONCAT44(uVar2,uVar1);
        FUN_14525f560(param_3,param_2,0x40000000,uVar5,uVar4,uVar7);
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (param_4 != 0) {
      uVar2 = FUN_144ba3dc0(param_1);
      uVar7 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      FUN_14525f560(param_3,param_2,param_4 & 0xffffffff,uVar4,uVar7,CONCAT44(uVar1,uVar2));
    }
  }
  else {
    uVar4 = FUN_144ba3e50(param_1);
    (**(code **)(lVar3 + 0x80))(param_3,param_2,param_4,lVar3,uVar4,uVar7);
  }
  return 1;
}



// FUNCTION 144e99590 FUN_144e99590 body=323 status=ok
// SIG undefined FUN_144e99590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99590(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_1452634a0(param_3,param_2,0x40000000,uVar3,uVar2,local_res20,uVar1);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    FUN_1452634a0(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e996e0 FUN_144e996e0 body=401 status=ok
// SIG undefined FUN_144e996e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e996e0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  byte local_48;
  byte local_47 [15];
  
  uVar4 = param_4;
  if (0x7ffffff < param_4) {
    uVar4 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      uVar7 = 0;
      if ((uVar4 & 0x1fffffffffffffff) != 0) {
        do {
          bVar6 = (byte)uVar7;
          uVar5 = uVar7 >> 3;
          local_48 = -(((byte)(1 << (7 - (bVar6 & 7) & 0x1f)) & *(byte *)(uVar5 + param_3)) != 0) &
                     0x80;
          uVar1 = FUN_144ba3dc0(param_1);
          uVar2 = FUN_144ba3e50(param_1);
          uVar3 = FUN_144ba3e90(param_1);
          FUN_1452629a0(&local_48,local_47,1,1,uVar3,uVar2,uVar1);
          uVar7 = uVar7 + 1;
          *(byte *)(uVar5 + param_2) =
               ~(byte)(0x80 >> (bVar6 & 7)) & *(byte *)(uVar5 + param_2) |
               (local_47[0] & 0x80) >> (bVar6 & 7);
        } while (uVar7 < uVar4 * 8);
      }
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      uVar7 = param_4;
      if (uVar4 <= param_4) {
        uVar7 = uVar4;
      }
      uVar4 = uVar7;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e99880 FUN_144e99880 body=270 status=ok
// SIG undefined FUN_144e99880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99880(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144e9989f;
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_1452629a0(param_3,param_2,8,0x40000000,uVar3,uVar2,uVar1);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    uVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    FUN_1452629a0(param_3,param_2,8,param_4 & 0xffffffff,uVar3,uVar2,uVar1,uVar5);
  }
  return 1;
}



// FUNCTION 144e99990 FUN_144e99990 body=8 status=ok
// SIG undefined FUN_144e99990(void)

undefined * FUN_144e99990(void)

{
  return &DAT_149bd0d70;
}



// FUNCTION 144e999a0 FUN_144e999a0 body=8 status=ok
// SIG undefined FUN_144e999a0(void)

undefined * FUN_144e999a0(void)

{
  return &DAT_149bd0cb0;
}



// FUNCTION 144e999b0 FUN_144e999b0 body=8 status=ok
// SIG undefined FUN_144e999b0(void)

undefined * FUN_144e999b0(void)

{
  return &DAT_149bd0dd0;
}



// FUNCTION 144e999c0 FUN_144e999c0 body=8 status=ok
// SIG undefined FUN_144e999c0(void)

undefined * FUN_144e999c0(void)

{
  return &DAT_149bd0e30;
}



// FUNCTION 144e999d0 FUN_144e999d0 body=8 status=ok
// SIG undefined FUN_144e999d0(void)

undefined * FUN_144e999d0(void)

{
  return &DAT_149bd0d10;
}



// FUNCTION 144e999e0 FUN_144e999e0 body=8 status=ok
// SIG undefined FUN_144e999e0(void)

undefined * FUN_144e999e0(void)

{
  return &DAT_149bd0c50;
}



// FUNCTION 144e999f0 FUN_144e999f0 body=171 status=ok
// SIG undefined FUN_144e999f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e999f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144ba3e90();
  puVar1[0x30] = 0;
  FUN_1452631f0(param_2,puVar1);
  FUN_1452631f0(param_2 + 8,puVar1 + 0x10);
  puVar1[0x20] = *puVar1;
  puVar1[0x21] = puVar1[1];
  puVar1[0x22] = puVar1[2];
  puVar1[0x23] = puVar1[3];
  puVar1[0x24] = puVar1[4];
  puVar1[0x25] = puVar1[5];
  puVar1[0x26] = puVar1[6];
  puVar1[0x27] = puVar1[7];
  puVar1[0x28] = puVar1[8];
  puVar1[0x29] = puVar1[9];
  puVar1[0x2a] = puVar1[10];
  puVar1[0x2b] = puVar1[0xb];
  puVar1[0x2c] = puVar1[0xc];
  puVar1[0x2d] = puVar1[0xd];
  puVar1[0x2e] = puVar1[0xe];
  puVar1[0x2f] = puVar1[0xf];
  return 1;
}



// FUNCTION 144e99aa0 FUN_144e99aa0 body=100 status=ok
// SIG undefined FUN_144e99aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99aa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba3e90();
  *(undefined8 *)(lVar1 + 0x180) = 0;
  FUN_1452631f0(param_2,lVar1);
  FUN_1452631f0(param_2 + 8,lVar1 + 0x80);
  FUN_1452631f0(param_2 + 0x10,lVar1 + 0x100);
  return 1;
}



// FUNCTION 144e99b10 FUN_144e99b10 body=144 status=ok
// SIG undefined FUN_144e99b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99b10(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  uVar1 = FUN_144ba3de0();
  iVar2 = FUN_144bac8c0(param_4,uVar1);
  if (iVar2 < 1) {
    return 0;
  }
  FUN_145263190(param_4);
  iVar2 = FUN_144ba3de0(param_1);
  if (0xf < iVar2) {
    FUN_145263190(param_4 + 8);
  }
  iVar2 = FUN_144ba3de0(param_1);
  if (0x17 < iVar2) {
    FUN_145263190(param_4 + 0x10);
  }
  return 1;
}



// FUNCTION 144e99ba0 FUN_144e99ba0 body=210 status=ok
// SIG undefined FUN_144e99ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99ba0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0x144e99bb4;
  lVar2 = FUN_144ba3db0();
  uVar6 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar6 <= param_4) {
    lVar2 = param_3;
    do {
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar1 = FUN_144ba3dc0(param_1);
      lVar3 = FUN_144ba3e90(param_1);
      lVar4 = FUN_144ba3e90(param_1);
      uVar5 = FUN_144ba3e90(param_1);
      uVar7 = CONCAT44(uVar8,uVar1);
      FUN_1452638c0(lVar2,(param_2 - param_3) + lVar2,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar7);
      lVar2 = lVar2 + uVar6;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar6);
  }
  return 1;
}



// FUNCTION 144e99c80 FUN_144e99c80 body=396 status=ok
// SIG undefined FUN_144e99c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99c80(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      lVar2 = FUN_144ba3e90(param_1);
      lVar3 = FUN_144ba3e90(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      FUN_1452644c0(param_3,param_2,0x40000000,uVar4,lVar3 + 0x80,lVar2 + 0x100,uVar1,local_res20);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    lVar2 = FUN_144ba3e90(param_1);
    lVar3 = FUN_144ba3e90(param_1);
    uVar4 = FUN_144ba3e90(param_1);
    FUN_1452644c0(param_3,param_2,param_4 & 0xffffffff,uVar4,lVar3 + 0x80,lVar2 + 0x100,uVar1,
                  local_res20);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e99e10 FUN_144e99e10 body=370 status=ok
// SIG undefined FUN_144e99e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99e10(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144e99e23;
  lVar3 = FUN_144ba3e90();
  uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (*(longlong *)(lVar3 + 0x180) == 0) {
    if (0x3fffffff < param_4) {
      uVar5 = param_4 >> 0x1e;
      param_4 = param_4 + uVar5 * -0x40000000;
      do {
        uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar1 = FUN_144ba3dc0(param_1);
        uVar4 = FUN_144ba3e50(param_1);
        uVar6 = CONCAT44(uVar2,uVar1);
        FUN_145262420(param_3,param_2,0x40000000,lVar3,lVar3 + 0x80,lVar3 + 0x100,uVar4,uVar6);
        uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 != 0) {
      uVar2 = FUN_144ba3dc0(param_1);
      uVar6 = FUN_144ba3e50(param_1);
      FUN_145262420(param_3,param_2,param_4 & 0xffffffff,lVar3,lVar3 + 0x80,lVar3 + 0x100,uVar6,
                    CONCAT44(uVar1,uVar2));
    }
    return 1;
  }
  uVar6 = FUN_144ba3e50(param_1);
  (**(code **)(lVar3 + 0x180))(param_3,param_2,param_4,lVar3,uVar6);
  return 1;
}



// FUNCTION 144e99f90 FUN_144e99f90 body=452 status=ok
// SIG undefined FUN_144e99f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e99f90(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  undefined4 local_48 [2];
  undefined8 uStack_40;
  
  uStack_40 = 0x144e99faf;
  if (0x3fffffff < param_4) {
    uVar6 = param_4 >> 0x1e;
    local_res20 = param_4 + uVar6 * -0x40000000;
    do {
      local_48[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      lVar3 = FUN_144ba3e90(param_1);
      lVar4 = FUN_144ba3e90(param_1);
      uVar5 = FUN_144ba3e90(param_1);
      FUN_1452639b0(param_3,param_2,0x40000000,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,local_48,uVar1
                   );
      FUN_144ba3e80(param_1,local_48[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar6 = uVar6 - 1;
      param_4 = local_res20;
    } while (uVar6 != 0);
  }
  if (param_4 != 0) {
    uVar1 = FUN_144ba3e70(param_1);
    local_res20 = CONCAT44(local_res20._4_4_,uVar1);
    uVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    lVar3 = FUN_144ba3e90(param_1);
    lVar4 = FUN_144ba3e90(param_1);
    uVar5 = FUN_144ba3e90(param_1);
    FUN_1452639b0(param_3,param_2,param_4 & 0xffffffff,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,
                  &local_res20,uVar1);
    FUN_144ba3e80(param_1,local_res20 & 0xffffffff);
  }
  return 1;
}



// FUNCTION 144e9a160 FUN_144e9a160 body=359 status=ok
// SIG undefined FUN_144e9a160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9a160(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte local_res20 [8];
  byte local_48 [16];
  
  iVar1 = FUN_144ba3f00(param_1,0x2000);
  if (iVar1 == 0) {
    param_4 = param_4 * 8;
  }
  uVar8 = 0;
  if (param_4 != 0) {
    do {
      bVar7 = (byte)uVar8;
      uVar9 = uVar8 >> 3;
      local_res20[0] =
           -(((byte)(1 << (7 - (bVar7 & 7) & 0x1f)) & *(byte *)(uVar9 + param_3)) != 0) & 0x80;
      uVar2 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      lVar4 = FUN_144ba3e90(param_1);
      lVar5 = FUN_144ba3e90(param_1);
      uVar6 = FUN_144ba3e90(param_1);
      FUN_145263c30(local_res20,local_48,1,1,uVar6,lVar5 + 0x80,lVar4 + 0x100,uVar3,uVar2);
      uVar8 = uVar8 + 1;
      *(byte *)(uVar9 + param_2) =
           ~(byte)(0x80 >> (bVar7 & 7)) & *(byte *)(uVar9 + param_2) |
           (local_48[0] & 0x80) >> (bVar7 & 7);
    } while (uVar8 < param_4);
  }
  return 1;
}



// FUNCTION 144e9a2d0 FUN_144e9a2d0 body=383 status=ok
// SIG undefined FUN_144e9a2d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9a2d0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (0x3fffffff < param_4) {
    uVar6 = param_4 >> 0x1e;
    param_4 = param_4 + uVar6 * -0x40000000;
    do {
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      lVar3 = FUN_144ba3e90(param_1);
      lVar4 = FUN_144ba3e90(param_1);
      uVar5 = FUN_144ba3e90(param_1);
      FUN_145263c30(param_3,param_2,8,0x40000000,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,uVar1);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_4 != 0) {
    uVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    lVar3 = FUN_144ba3e90(param_1);
    lVar4 = FUN_144ba3e90(param_1);
    uVar5 = FUN_144ba3e90(param_1);
    FUN_145263c30(param_3,param_2,8,param_4 & 0xffffffff,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,
                  uVar1);
  }
  return 1;
}



// FUNCTION 144e9a450 FUN_144e9a450 body=173 status=ok
// SIG undefined FUN_144e9a450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9a450(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144e9a46a;
  if ((param_4 < 0x40000000) && ((param_4 & 7) == 0)) {
    iVar1 = FUN_144ba53b0(param_2,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_144ba3dc0(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_144e9a5b0(param_1,param_2,param_3,param_4);
      }
      else {
        uVar2 = FUN_144e9a800();
      }
    }
    else {
      FUN_144ba24f0(6,0xab,0xa2,"crypto\\evp\\e_des3.c",0x18e,uVar2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144e9a500 FUN_144e9a500 body=8 status=ok
// SIG undefined FUN_144e9a500(void)

undefined * FUN_144e9a500(void)

{
  return &DAT_149bd0fb0;
}



// FUNCTION 144e9a510 FUN_144e9a510 body=8 status=ok
// SIG undefined FUN_144e9a510(void)

undefined * FUN_144e9a510(void)

{
  return &DAT_149bd1130;
}



// FUNCTION 144e9a520 FUN_144e9a520 body=8 status=ok
// SIG undefined FUN_144e9a520(void)

undefined * FUN_144e9a520(void)

{
  return &DAT_149bd0ef0;
}



// FUNCTION 144e9a530 FUN_144e9a530 body=8 status=ok
// SIG undefined FUN_144e9a530(void)

undefined * FUN_144e9a530(void)

{
  return &DAT_149bd1070;
}



// FUNCTION 144e9a540 FUN_144e9a540 body=8 status=ok
// SIG undefined FUN_144e9a540(void)

undefined * FUN_144e9a540(void)

{
  return &DAT_149bd1190;
}



// FUNCTION 144e9a550 FUN_144e9a550 body=8 status=ok
// SIG undefined FUN_144e9a550(void)

undefined * FUN_144e9a550(void)

{
  return &DAT_149bd11f0;
}



// FUNCTION 144e9a560 FUN_144e9a560 body=8 status=ok
// SIG undefined FUN_144e9a560(void)

undefined * FUN_144e9a560(void)

{
  return &DAT_149bd0f50;
}



// FUNCTION 144e9a570 FUN_144e9a570 body=8 status=ok
// SIG undefined FUN_144e9a570(void)

undefined * FUN_144e9a570(void)

{
  return &DAT_149bd10d0;
}



// FUNCTION 144e9a580 FUN_144e9a580 body=8 status=ok
// SIG undefined FUN_144e9a580(void)

undefined * FUN_144e9a580(void)

{
  return &DAT_149bd0e90;
}



// FUNCTION 144e9a590 FUN_144e9a590 body=8 status=ok
// SIG undefined FUN_144e9a590(void)

undefined * FUN_144e9a590(void)

{
  return &DAT_149bd1010;
}



// FUNCTION 144e9a5a0 FUN_144e9a5a0 body=8 status=ok
// SIG undefined FUN_144e9a5a0(void)

undefined * FUN_144e9a5a0(void)

{
  return &DAT_149bd1250;
}



// FUNCTION 144e9a5b0 FUN_144e9a5b0 body=558 status=ok
// SIG undefined FUN_144e9a5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9a5b0(undefined8 param_1,void *param_2,void *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = -1;
  if ((0x17 < param_4) && (param_2 != (void *)0x0)) {
    puVar3 = (undefined8 *)FUN_144ba3e50();
    *puVar3 = 0x521e8792ca2dd4a;
    FUN_144e99e10(param_1,local_68,param_3,8);
    if (param_2 == param_3) {
      memmove(param_2,(void *)((longlong)param_2 + 8),param_4 - 8);
      param_3 = (void *)((longlong)param_3 + -8);
    }
    FUN_144e99e10(param_1,param_2,(longlong)param_3 + 8,param_4 - 0x10);
    FUN_144e99e10(param_1,local_60,(param_4 - 8) + (longlong)param_3,8);
    FUN_144ea73a0(local_68,0,8);
    FUN_144ea73a0(param_2,0,param_4 - 0x10);
    uVar4 = FUN_144ba3e50(param_1);
    FUN_144ea73a0(uVar4,local_60,8);
    FUN_144e99e10(param_1,param_2,param_2,param_4 - 0x10);
    lVar5 = FUN_144ba3e90(param_1);
    if (*(longlong *)(lVar5 + 0x180) == 0) {
      uVar1 = FUN_144ba3dc0(param_1);
      local_78 = FUN_144ba3e50(param_1);
      local_80 = lVar5 + 0x100;
      local_88 = lVar5 + 0x80;
      local_70 = uVar1;
      FUN_145262420(local_68,local_68,8,lVar5);
    }
    else {
      local_88 = FUN_144ba3e50();
      (**(code **)(lVar5 + 0x180))(local_68,local_68,8,lVar5);
    }
    FUN_1452646d0(param_2,param_4 - 0x10,local_58);
    iVar2 = FUN_14259f120(local_58,local_68,8);
    if (iVar2 == 0) {
      iVar6 = (int)param_4 + -0x10;
    }
    FUN_14259f0c0(local_68,8);
    FUN_14259f0c0(local_58,0x14);
    FUN_14259f0c0(local_60,8);
    uVar4 = FUN_144ba3e50(param_1);
    FUN_14259f0c0(uVar4,8);
    if (iVar6 == -1) {
      FUN_14259f0c0(param_2,param_4 - 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e9a800 FUN_144e9a800 body=257 status=ok
// SIG undefined FUN_144e9a800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9a800(undefined8 param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (undefined8 *)0x0) {
    memmove(param_2 + 1,param_3,param_4);
    FUN_1452646d0(param_3,param_4,local_48);
    *(undefined8 *)(param_4 + 8 + (longlong)param_2) = local_48[0];
    FUN_14259f0c0(local_48,0x14);
    uVar2 = FUN_144ba3e50(param_1);
    iVar1 = FUN_144bac850(uVar2,8);
    if (0 < iVar1) {
      puVar3 = (undefined8 *)FUN_144ba3e50(param_1);
      *param_2 = *puVar3;
      FUN_144e99e10(param_1,param_2 + 1,param_2 + 1,param_4 + 8);
      FUN_144ea73a0(param_2,0,param_4 + 0x10);
      puVar3 = (undefined8 *)FUN_144ba3e50(param_1);
      *puVar3 = 0x521e8792ca2dd4a;
      FUN_144e99e10(param_1,param_2,param_2,param_4 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 144e9a910 FUN_144e9a910 body=79 status=ok
// SIG undefined FUN_144e9a910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9a910(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_144ba3de0();
  uVar2 = FUN_144ba3e90(param_1);
  FUN_142638520(uVar2,uVar1,param_2);
  return 1;
}



// FUNCTION 144e9a960 FUN_144e9a960 body=76 status=ok
// SIG undefined FUN_144e9a960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144e9a960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3e90();
  FUN_142637e80(uVar1,param_4,param_3,param_2);
  return 1;
}



// FUNCTION 144e9a9b0 FUN_144e9a9b0 body=8 status=ok
// SIG undefined FUN_144e9a9b0(void)

undefined * FUN_144e9a9b0(void)

{
  return &DAT_149bd12c0;
}



// FUNCTION 144e9a9c0 FUN_144e9a9c0 body=8 status=ok
// SIG undefined FUN_144e9a9c0(void)

undefined * FUN_144e9a9c0(void)

{
  return &DAT_149bd1320;
}



// FUNCTION 144e9a9d0 FUN_144e9a9d0 body=584 status=ok
// SIG undefined FUN_144e9a9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9a9d0(undefined8 param_1,int param_2,int param_3,void *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong auStack_98 [4];
  ulonglong local_78 [9];
  undefined8 uStack_30;
  
  uStack_30 = 0x144e9a9e1;
  local_78[8] = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_144ba3e90();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar6 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      iVar2 = FUN_144ba3dc0(param_1);
      if (iVar2 == 0) {
        if (uVar6 < 0x10) goto LAB_144e9ac0b;
        uVar6 = uVar6 - 0x10;
        *(char *)((longlong)param_4 + 0xc) = (char)uVar6;
        *(char *)((longlong)param_4 + 0xb) = (char)(uVar6 >> 8);
      }
      *(ulonglong *)(lVar3 + 0x520) = (ulonglong)uVar6;
      *(undefined8 *)(lVar3 + 0x4c0) = *(undefined8 *)(lVar3 + 0x408);
      *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x410);
      *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x418);
      *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x420);
      *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x428);
      *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x430);
      *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x438);
      *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x440);
      *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x448);
      *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x450);
      *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x458);
      *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x460);
      FUN_14525f2a0((undefined8 *)(lVar3 + 0x4c0),param_4,0xd);
    }
  }
  else if (param_2 == 0x17) {
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    local_78[6] = 0;
    local_78[7] = 0;
    if (param_3 < 0x41) {
      memcpy(local_78,param_4,(longlong)param_3);
    }
    else {
      FUN_14525f250(lVar3 + 0x408);
      FUN_14525f2a0(lVar3 + 0x408,param_4,(longlong)param_3);
      FUN_14525f3d0(local_78,lVar3 + 0x408);
    }
    lVar7 = 2;
    lVar5 = 2;
    puVar1 = auStack_98;
    do {
      puVar4 = puVar1 + 4;
      *puVar4 = *puVar4 ^ 0x3636363636363636;
      puVar1[5] = puVar1[5] ^ 0x3636363636363636;
      puVar1[6] = puVar1[6] ^ 0x3636363636363636;
      puVar1[7] = puVar1[7] ^ 0x3636363636363636;
      lVar5 = lVar5 + -1;
      puVar1 = puVar4;
    } while (lVar5 != 0);
    FUN_14525f250(lVar3 + 0x408);
    FUN_14525f2a0(lVar3 + 0x408,local_78,0x40);
    puVar1 = auStack_98;
    do {
      puVar4 = puVar1 + 4;
      *puVar4 = *puVar4 ^ 0x6a6a6a6a6a6a6a6a;
      puVar1[5] = puVar1[5] ^ 0x6a6a6a6a6a6a6a6a;
      puVar1[6] = puVar1[6] ^ 0x6a6a6a6a6a6a6a6a;
      puVar1[7] = puVar1[7] ^ 0x6a6a6a6a6a6a6a6a;
      lVar7 = lVar7 + -1;
      puVar1 = puVar4;
    } while (lVar7 != 0);
    FUN_14525f250(lVar3 + 0x464);
    FUN_14525f2a0(lVar3 + 0x464,local_78,0x40);
    FUN_14259f0c0(local_78,0x40);
  }
LAB_144e9ac0b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_78[8] ^ (ulonglong)auStack_98);
}



// FUNCTION 144e9ac30 FUN_144e9ac30 body=255 status=ok
// SIG undefined FUN_144e9ac30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9ac30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_144ba3e90();
  uVar2 = FUN_144ba3de0(param_1);
  FUN_142638520(lVar3,uVar2,param_2);
  puVar1 = (undefined8 *)(lVar3 + 0x408);
  FUN_14525f250(puVar1);
  *(undefined8 *)(lVar3 + 0x520) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x464) = *puVar1;
  *(undefined8 *)(lVar3 + 0x46c) = *(undefined8 *)(lVar3 + 0x410);
  *(undefined8 *)(lVar3 + 0x474) = *(undefined8 *)(lVar3 + 0x418);
  *(undefined8 *)(lVar3 + 0x47c) = *(undefined8 *)(lVar3 + 0x420);
  *(undefined8 *)(lVar3 + 0x484) = *(undefined8 *)(lVar3 + 0x428);
  *(undefined8 *)(lVar3 + 0x48c) = *(undefined8 *)(lVar3 + 0x430);
  *(undefined8 *)(lVar3 + 0x494) = *(undefined8 *)(lVar3 + 0x438);
  *(undefined8 *)(lVar3 + 0x49c) = *(undefined8 *)(lVar3 + 0x440);
  *(undefined8 *)(lVar3 + 0x4a4) = *(undefined8 *)(lVar3 + 0x448);
  *(undefined8 *)(lVar3 + 0x4ac) = *(undefined8 *)(lVar3 + 0x450);
  *(undefined8 *)(lVar3 + 0x4b4) = *(undefined8 *)(lVar3 + 0x458);
  *(undefined4 *)(lVar3 + 0x4bc) = *(undefined4 *)(lVar3 + 0x460);
  *(undefined8 *)(lVar3 + 0x4c0) = *puVar1;
  *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x410);
  *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x418);
  *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x420);
  *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x428);
  *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x430);
  *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x438);
  *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x440);
  *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x448);
  *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x450);
  *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x458);
  *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x460);
  return 1;
}



// FUNCTION 144e9ad30 FUN_144e9ad30 body=1036 status=ok
// SIG undefined FUN_144e9ad30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9ad30(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  ulonglong local_60 [2];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x144e9ad47;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60[0] = param_1;
  puVar3 = (uint *)FUN_144ba3e90();
  lVar8 = 0x40;
  uVar9 = (ulonglong)(0x40 - puVar3[0x146]);
  uVar11 = *(ulonglong *)(puVar3 + 0x148);
  uVar7 = (ulonglong)(0x1f - (*puVar3 & 0x1f));
  if ((uVar11 != 0xffffffffffffffff) && (param_4 != uVar11 + 0x10)) goto LAB_144e9b12f;
  iVar2 = FUN_144ba3dc0(local_60[0]);
  if (iVar2 == 0) {
    if (uVar7 < uVar9) {
      lVar8 = 0x80;
    }
    uVar7 = uVar7 + lVar8;
    if (uVar7 < param_4) {
      uVar10 = param_4 - uVar7 >> 6;
      if ((uVar10 == 0) || (((uint)DAT_14c7973a0 & 0x100000) != 0)) goto LAB_144e9b03a;
      FUN_142637e80(puVar3,uVar7,param_3,param_2);
      FUN_14525f2a0(puVar3 + 0x130,param_2,uVar9);
      local_78 = param_2 + uVar9;
      local_70 = uVar10;
      FUN_142638800(puVar3,uVar7 + param_3,uVar7 + param_2,puVar3 + 0x130);
      lVar5 = uVar7 + uVar10 * 0x40;
      uVar4 = (int)(uVar10 << 9) + puVar3[0x134];
      if (uVar4 < puVar3[0x134]) {
        puVar3[0x135] = puVar3[0x135] + 1;
      }
      puVar3[0x135] = puVar3[0x135] + (int)(param_4 - uVar7 >> 0x1d);
      puVar3[0x134] = uVar4;
      lVar8 = uVar9 + uVar10 * 0x40;
    }
    else {
LAB_144e9b03a:
      lVar5 = 0;
      lVar8 = lVar5;
    }
    FUN_142637e80(puVar3,param_4 - lVar5,param_3 + lVar5,param_2 + lVar5);
    if (uVar11 == 0xffffffffffffffff) {
      FUN_14525f2a0(puVar3 + 0x130,param_2 + lVar8,param_4 - lVar8);
    }
    else {
      puVar1 = puVar3 + 0x130;
      FUN_14525f2a0(puVar1,param_2 + lVar8,uVar11 - lVar8);
      FUN_14525f3d0(local_60,puVar1);
      *(undefined8 *)puVar1 = *(undefined8 *)(puVar3 + 0x119);
      *(undefined8 *)(puVar3 + 0x132) = *(undefined8 *)(puVar3 + 0x11b);
      *(undefined8 *)(puVar3 + 0x134) = *(undefined8 *)(puVar3 + 0x11d);
      *(undefined8 *)(puVar3 + 0x136) = *(undefined8 *)(puVar3 + 0x11f);
      *(undefined8 *)(puVar3 + 0x138) = *(undefined8 *)(puVar3 + 0x121);
      *(undefined8 *)(puVar3 + 0x13a) = *(undefined8 *)(puVar3 + 0x123);
      *(undefined8 *)(puVar3 + 0x13c) = *(undefined8 *)(puVar3 + 0x125);
      *(undefined8 *)(puVar3 + 0x13e) = *(undefined8 *)(puVar3 + 0x127);
      puVar3[0x140] = puVar3[0x129];
      puVar3[0x141] = puVar3[0x12a];
      puVar3[0x142] = puVar3[299];
      puVar3[0x143] = puVar3[300];
      *(undefined8 *)(puVar3 + 0x144) = *(undefined8 *)(puVar3 + 0x12d);
      puVar3[0x146] = puVar3[0x12f];
      FUN_14525f2a0(puVar1,local_60,0x10);
      FUN_14525f3d0(local_60,puVar1);
      iVar2 = FUN_14259f120(param_2 + uVar11,local_60,0x10);
      if (iVar2 != 0) goto LAB_144e9b12f;
    }
  }
  else {
    if (uVar11 == 0xffffffffffffffff) {
      uVar11 = param_4;
    }
    local_60[0] = uVar9 + 0x40;
    if (uVar7 <= uVar9) {
      local_60[0] = uVar9;
    }
    if (local_60[0] < uVar11) {
      uVar9 = uVar11 - local_60[0];
      uVar10 = uVar9 >> 6;
      if ((uVar10 == 0) || (((uint)DAT_14c7973a0 & 0x100000) != 0)) goto LAB_144e9ae90;
      FUN_14525f2a0(puVar3 + 0x130,param_3,local_60[0]);
      FUN_142637e80(puVar3,uVar7,param_3,param_2);
      local_78 = local_60[0] + param_3;
      local_70 = uVar10;
      FUN_142638800(puVar3,uVar7 + param_3,param_2 + uVar7,puVar3 + 0x130);
      lVar8 = uVar7 + uVar10 * 0x40;
      lVar5 = local_60[0] + uVar10 * 0x40;
      uVar6 = (int)(uVar9 >> 0x1d) + puVar3[0x135];
      puVar3[0x135] = uVar6;
      uVar4 = (uint)(uVar10 << 9);
      puVar3[0x134] = puVar3[0x134] + uVar4;
      if (puVar3[0x134] < uVar4) {
        puVar3[0x135] = uVar6 + 1;
      }
    }
    else {
LAB_144e9ae90:
      lVar5 = 0;
      lVar8 = lVar5;
    }
    puVar1 = puVar3 + 0x130;
    FUN_14525f2a0(puVar1,lVar5 + param_3,uVar11 - lVar5);
    if (uVar11 == param_4) {
      FUN_142637e80(puVar3,param_4 - lVar8,lVar8 + param_3,param_2 + lVar8);
    }
    else {
      if (param_3 != param_2) {
        memcpy((void *)(param_2 + lVar8),(void *)(lVar8 + param_3),uVar11 - lVar8);
      }
      lVar5 = param_2 + uVar11;
      FUN_14525f3d0(lVar5,puVar1);
      *(undefined8 *)puVar1 = *(undefined8 *)(puVar3 + 0x119);
      *(undefined8 *)(puVar3 + 0x132) = *(undefined8 *)(puVar3 + 0x11b);
      *(undefined8 *)(puVar3 + 0x134) = *(undefined8 *)(puVar3 + 0x11d);
      *(undefined8 *)(puVar3 + 0x136) = *(undefined8 *)(puVar3 + 0x11f);
      *(undefined8 *)(puVar3 + 0x138) = *(undefined8 *)(puVar3 + 0x121);
      *(undefined8 *)(puVar3 + 0x13a) = *(undefined8 *)(puVar3 + 0x123);
      *(undefined8 *)(puVar3 + 0x13c) = *(undefined8 *)(puVar3 + 0x125);
      *(undefined8 *)(puVar3 + 0x13e) = *(undefined8 *)(puVar3 + 0x127);
      puVar3[0x140] = puVar3[0x129];
      puVar3[0x141] = puVar3[0x12a];
      puVar3[0x142] = puVar3[299];
      puVar3[0x143] = puVar3[300];
      *(undefined8 *)(puVar3 + 0x144) = *(undefined8 *)(puVar3 + 0x12d);
      puVar3[0x146] = puVar3[0x12f];
      FUN_14525f2a0(puVar1,lVar5,0x10);
      FUN_14525f3d0(lVar5,puVar1);
      FUN_142637e80(puVar3,param_4 - lVar8,param_2 + lVar8,param_2 + lVar8);
    }
  }
  puVar3[0x148] = 0xffffffff;
  puVar3[0x149] = 0xffffffff;
LAB_144e9b12f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e9b150 FUN_144e9b150 body=8 status=ok
// SIG undefined FUN_144e9b150(void)

undefined * FUN_144e9b150(void)

{
  return &DAT_14c70adc0;
}



// FUNCTION 144e9b160 FUN_144e9b160 body=188 status=ok
// SIG undefined FUN_144e9b160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9b160(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [224];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144e9b170;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 == 0) {
    uVar2 = FUN_144ba3db0();
    uVar1 = FUN_144ba3da0(uVar2);
    if ((uVar1 & 0xf0007) != 4) {
      uVar2 = FUN_144ba3db0(param_1);
      uVar1 = FUN_144ba3da0(uVar2);
      if ((uVar1 & 0xf0007) != 3) {
        FUN_145264830(param_2,local_f8);
        uVar2 = FUN_144ba3e90(param_1);
        FUN_1452649a0(local_f8,uVar2);
        FUN_14259f0c0(local_f8,0xd8);
        goto LAB_144e9b207;
      }
    }
  }
  uVar2 = FUN_144ba3e90(param_1);
  FUN_145264830(param_2,uVar2);
LAB_144e9b207:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_118);
}



// FUNCTION 144e9b230 FUN_144e9b230 body=136 status=ok
// SIG undefined FUN_144e9b230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b230(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_144ba3db0();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      uVar2 = FUN_144ba3e90(param_1);
      FUN_145264770(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}



// FUNCTION 144e9b2c0 FUN_144e9b2c0 body=254 status=ok
// SIG undefined FUN_144e9b2c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b2c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144e9b2df;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_145264af0(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = FUN_144ba3dc0(param_1);
    uVar6 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    FUN_145264af0(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 144e9b3c0 FUN_144e9b3c0 body=279 status=ok
// SIG undefined FUN_144e9b3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b3c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_145265a80(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_145265a80(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e9b4e0 FUN_144e9b4e0 body=235 status=ok
// SIG undefined FUN_144e9b4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b4e0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_145265860(param_3,param_2,uVar4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9b5d0 FUN_144e9b5d0 body=8 status=ok
// SIG undefined FUN_144e9b5d0(void)

undefined * FUN_144e9b5d0(void)

{
  return &DAT_149bd14c0;
}



// FUNCTION 144e9b5e0 FUN_144e9b5e0 body=8 status=ok
// SIG undefined FUN_144e9b5e0(void)

undefined * FUN_144e9b5e0(void)

{
  return &DAT_149bd1400;
}



// FUNCTION 144e9b5f0 FUN_144e9b5f0 body=8 status=ok
// SIG undefined FUN_144e9b5f0(void)

undefined * FUN_144e9b5f0(void)

{
  return &DAT_149bd1460;
}



// FUNCTION 144e9b600 FUN_144e9b600 body=8 status=ok
// SIG undefined FUN_144e9b600(void)

undefined * FUN_144e9b600(void)

{
  return &DAT_149bd13a0;
}



// FUNCTION 144e9b610 FUN_144e9b610 body=104 status=ok
// SIG undefined FUN_144e9b610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b610(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)FUN_144ba3e90();
  uVar1 = FUN_144ba3de0(param_1);
  lVar3 = FUN_144ba3e90(param_1);
  FUN_145265c70(lVar3 + 4,uVar1,param_2,*puVar2);
  return 1;
}



// FUNCTION 144e9b680 FUN_144e9b680 body=171 status=ok
// SIG undefined FUN_144e9b680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b680(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int local_res10 [2];
  
  uVar4 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_144ba5290(param_1,2,0,local_res10);
    if (0 < iVar1) {
      if (local_res10[0] == 0x80) {
        uVar4 = 0x3a;
      }
      else if (local_res10[0] == 0x40) {
        uVar4 = 0x78;
      }
      else {
        uVar4 = 0;
        if (local_res10[0] == 0x28) {
          uVar4 = 0xa0;
        }
      }
    }
    uVar2 = FUN_144ba3df0(param_1);
    uVar3 = FUN_144ba3e40(param_1);
    uVar3 = FUN_144ed1330(param_2,uVar4,uVar3,uVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 144e9b730 FUN_144e9b730 body=297 status=ok
// SIG undefined FUN_144e9b730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9b730(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  int local_38 [2];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144ba3df0();
    if (0x10 < uVar1) {
      FUN_144ecfe40("assertion failed: l <= sizeof(iv)","crypto\\evp\\e_rc2.c",0x83);
    }
    uVar2 = FUN_144ed1390(param_2,local_38,local_30,uVar1);
    if (uVar2 == uVar1) {
      if (local_38[0] == 0x3a) {
        uVar1 = 0x80;
      }
      else if (local_38[0] == 0x78) {
        uVar1 = 0x40;
      }
      else {
        if (local_38[0] != 0xa0) {
          local_48 = (undefined1 *)CONCAT44(local_48._4_4_,0x74);
          FUN_144ba24f0(6,0x6d,0x6c,"crypto\\evp\\e_rc2.c");
          goto LAB_144e9b84c;
        }
        uVar1 = 0x28;
      }
      if (0 < (int)uVar2) {
        local_48 = local_30;
        local_40 = 0xffffffff;
        iVar3 = FUN_144ba4d00(param_1,0,0,0);
        if (iVar3 == 0) goto LAB_144e9b84c;
      }
      iVar3 = FUN_144ba5290(param_1,3,uVar1);
      if (0 < iVar3) {
        FUN_144ba51b0(param_1,uVar1 >> 3);
      }
    }
  }
LAB_144e9b84c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 144e9b870 FUN_144e9b870 body=140 status=ok
// SIG undefined FUN_144e9b870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b870(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_3 = FUN_144ba3de0();
    param_3 = param_3 << 3;
  }
  else {
    if (param_2 == 2) {
      puVar1 = (undefined4 *)FUN_144ba3e90();
      *param_4 = *puVar1;
      return 1;
    }
    if (param_2 != 3) {
      return 0xffffffff;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  piVar2 = (int *)FUN_144ba3e90(param_1);
  *piVar2 = param_3;
  return 1;
}



// FUNCTION 144e9b900 FUN_144e9b900 body=256 status=ok
// SIG undefined FUN_144e9b900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9b900(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144e9b91f;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      lVar4 = FUN_144ba3e90(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_145266140(param_3,param_2,0x40000000,lVar4 + 4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = FUN_144ba3dc0(param_1);
    uVar6 = FUN_144ba3e50(param_1);
    lVar4 = FUN_144ba3e90(param_1);
    FUN_145266140(param_3,param_2,param_4 & 0xffffffff,lVar4 + 4,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 144e9ba00 FUN_144e9ba00 body=236 status=ok
// SIG undefined FUN_144e9ba00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9ba00(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      lVar3 = FUN_144ba3e90(param_1);
      FUN_1452666a0(param_3,param_2,uVar4 & 0xffffffff,lVar3 + 4,uVar2,local_res20,uVar1);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9baf0 FUN_144e9baf0 body=164 status=ok
// SIG undefined FUN_144e9baf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9baf0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_144ba3db0();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = FUN_144ba3dc0(param_1);
      lVar3 = FUN_144ba3e90(param_1);
      FUN_145265dd0(lVar2,(param_2 - param_3) + lVar2,lVar3 + 4,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 144e9bba0 FUN_144e9bba0 body=281 status=ok
// SIG undefined FUN_144e9bba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9bba0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      lVar2 = FUN_144ba3e90(param_1);
      FUN_1452668c0(param_3,param_2,0x40000000,lVar2 + 4,uVar1,local_res20);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    lVar2 = FUN_144ba3e90(param_1);
    FUN_1452668c0(param_3,param_2,param_4 & 0xffffffff,lVar2 + 4,uVar1,local_res20);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e9bcc0 FUN_144e9bcc0 body=8 status=ok
// SIG undefined FUN_144e9bcc0(void)

undefined * FUN_144e9bcc0(void)

{
  return &DAT_149bd1700;
}



// FUNCTION 144e9bcd0 FUN_144e9bcd0 body=8 status=ok
// SIG undefined FUN_144e9bcd0(void)

undefined * FUN_144e9bcd0(void)

{
  return &DAT_149bd15e0;
}



// FUNCTION 144e9bce0 FUN_144e9bce0 body=8 status=ok
// SIG undefined FUN_144e9bce0(void)

undefined * FUN_144e9bce0(void)

{
  return &DAT_149bd1580;
}



// FUNCTION 144e9bcf0 FUN_144e9bcf0 body=8 status=ok
// SIG undefined FUN_144e9bcf0(void)

undefined * FUN_144e9bcf0(void)

{
  return &DAT_149bd1520;
}



// FUNCTION 144e9bd00 FUN_144e9bd00 body=8 status=ok
// SIG undefined FUN_144e9bd00(void)

undefined * FUN_144e9bd00(void)

{
  return &DAT_149bd1640;
}



// FUNCTION 144e9bd10 FUN_144e9bd10 body=8 status=ok
// SIG undefined FUN_144e9bd10(void)

undefined * FUN_144e9bd10(void)

{
  return &DAT_149bd16a0;
}



// FUNCTION 144e9bd20 FUN_144e9bd20 body=267 status=ok
// SIG undefined FUN_144e9bd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144e9bd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FUN_144ba3e90();
  iVar2 = FUN_144ba3de0(param_1);
  if (param_4 == 0) {
    uVar3 = FUN_1425a4630(param_2,iVar2 << 3,lVar4);
  }
  else {
    uVar3 = FUN_1425a46a0();
  }
  puVar1 = (undefined8 *)(lVar4 + 0xf4);
  FUN_144edb280(puVar1);
  *(undefined8 *)(lVar4 + 0x154) = *puVar1;
  *(undefined8 *)(lVar4 + 0x15c) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x218) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x164) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x16c) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x174) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x17c) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x184) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x18c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x194) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x19c) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x1a4) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x1ac) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x1b4) = *puVar1;
  *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
  return ~uVar3 >> 0x1f;
}



// FUNCTION 144e9be30 FUN_144e9be30 body=2030 status=ok
// SIG undefined FUN_144e9be30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9be30(ulonglong param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  char *pcVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_c8;
  undefined8 local_c0;
  uint local_b8;
  ulonglong local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  longlong local_98;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x144e9be47;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  local_a8 = param_3;
  lVar9 = FUN_144ba3e90();
  uVar14 = 0;
  local_b0 = 0;
  uVar20 = (ulonglong)(0x40 - *(int *)(lVar9 + 0x210));
  uVar21 = *(ulonglong *)(lVar9 + 0x218);
  *(undefined8 *)(lVar9 + 0x218) = 0xffffffffffffffff;
  if ((param_4 & 0xf) == 0) {
    iVar7 = FUN_144ba3dc0(local_c0);
    if (iVar7 == 0) {
      if (uVar21 == 0xffffffffffffffff) {
        local_e8 = FUN_144ba3e50(local_c0);
        local_e0 = local_e0 & 0xffffffff00000000;
        FUN_1425a3bf0(param_3,param_2,param_4,lVar9);
        FUN_144e9cbe0(lVar9 + 0x1b4,param_2,param_4);
      }
      else {
        puVar1 = (undefined8 *)(lVar9 + 0x1d0);
        if (CONCAT11(*(undefined1 *)(uVar21 + 0x21c + lVar9),*(undefined1 *)(uVar21 + 0x21d + lVar9)
                    ) < 0x302) {
          if (param_4 < 0x15) goto LAB_144e9c60e;
        }
        else {
          if (param_4 < 0x25) goto LAB_144e9c60e;
          puVar10 = (undefined4 *)FUN_144ba3e50(local_c0);
          uVar3 = *param_3;
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          param_3 = param_3 + 4;
          param_2 = param_2 + 4;
          param_4 = param_4 - 0x10;
          *puVar10 = uVar3;
          puVar10[1] = uVar4;
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
        }
        local_e8 = FUN_144ba3e50(local_c0);
        local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
        FUN_1425a3bf0(param_3,param_2,param_4,lVar9);
        bVar11 = *(byte *)((param_4 - 1) + (longlong)param_2);
        uVar8 = (int)param_4 - 0x15;
        uVar15 = 0xff - uVar8 >> 0x18 | uVar8 & 0xff;
        local_b0 = CONCAT44(local_b0._4_4_,uVar15);
        uVar8 = 0xffffffff -
                ((int)((uVar15 - bVar11 ^ (uint)bVar11 | uVar15 ^ bVar11) ^ uVar15) >> 0x1f);
        local_c0 = CONCAT44(local_c0._4_4_,uVar8) & 0xffffffff00000001;
        local_b8 = uVar8 & bVar11 | ~uVar8 & uVar15;
        lVar16 = param_4 - (local_b8 + 0x15);
        *(char *)(uVar21 + 0x21f + lVar9) = (char)lVar16;
        *(char *)(uVar21 + 0x21e + lVar9) = (char)((ulonglong)lVar16 >> 8);
        *(undefined8 *)(lVar9 + 0x1b4) = *(undefined8 *)(lVar9 + 0xf4);
        *(undefined8 *)(lVar9 + 0x1bc) = *(undefined8 *)(lVar9 + 0xfc);
        *(undefined8 *)(lVar9 + 0x1c4) = *(undefined8 *)(lVar9 + 0x104);
        *(undefined8 *)(lVar9 + 0x1cc) = *(undefined8 *)(lVar9 + 0x10c);
        *(undefined8 *)(lVar9 + 0x1d4) = *(undefined8 *)(lVar9 + 0x114);
        *(undefined8 *)(lVar9 + 0x1dc) = *(undefined8 *)(lVar9 + 0x11c);
        *(undefined8 *)(lVar9 + 0x1e4) = *(undefined8 *)(lVar9 + 0x124);
        *(undefined8 *)(lVar9 + 0x1ec) = *(undefined8 *)(lVar9 + 300);
        *(undefined4 *)(lVar9 + 500) = *(undefined4 *)(lVar9 + 0x134);
        *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar9 + 0x138);
        *(undefined4 *)(lVar9 + 0x1fc) = *(undefined4 *)(lVar9 + 0x13c);
        *(undefined4 *)(lVar9 + 0x200) = *(undefined4 *)(lVar9 + 0x140);
        *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar9 + 0x144);
        *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar9 + 0x148);
        *(undefined4 *)(lVar9 + 0x20c) = *(undefined4 *)(lVar9 + 0x14c);
        *(undefined4 *)(lVar9 + 0x210) = *(undefined4 *)(lVar9 + 0x150);
        local_c8 = lVar16;
        FUN_144e9cbe0((undefined8 *)(lVar9 + 0x1b4),lVar9 + 0x220,uVar21);
        uVar21 = param_4 - 0x14;
        if (0x13f < uVar21) {
          lVar16 = (ulonglong)(0x40 - *(int *)(lVar9 + 0x210)) +
                   (param_4 - 0x154 & 0xffffffffffffffc0);
          FUN_144e9cbe0(lVar9 + 0x1b4,param_2,lVar16);
          param_2 = (undefined4 *)((longlong)param_2 + lVar16);
          uVar21 = uVar21 - lVar16;
          lVar16 = local_c8 - lVar16;
          local_c8 = lVar16;
        }
        uVar8 = *(uint *)(lVar9 + 0x210);
        uVar15 = (int)lVar16 * 8 + *(int *)(lVar9 + 0x1c8);
        local_80 = 0;
        uStack_7c = 0;
        local_78 = 0;
        uStack_74 = 0;
        local_70 = 0;
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                 uVar15 * 0x1000000;
        puVar10 = (undefined4 *)(ulonglong)uVar15;
        uVar20 = uVar14;
        local_a8 = puVar10;
        if (uVar21 != 0) {
          local_a0 = (-0x48 - (longlong)param_2) - lVar16;
          local_98 = -((longlong)param_2 + lVar16);
          do {
            bVar11 = (byte)((ulonglong)((byte *)((longlong)param_2 + uVar20) + local_98) >> 0x38);
            uVar15 = uVar8 + 1;
            *(byte *)((ulonglong)uVar8 + (longlong)puVar1) =
                 ~(byte)(lVar16 - uVar20 >> 0x38) & ~bVar11 & 0x80 |
                 bVar11 & *(byte *)((longlong)param_2 + uVar20);
            uVar8 = uVar15;
            if (uVar15 == 0x40) {
              uVar8 = (uint)((lVar16 - uVar20) + 7 >> 0x20);
              *(uint *)(lVar9 + 0x20c) =
                   *(uint *)(lVar9 + 0x20c) | (uint)puVar10 & (int)uVar8 >> 0x1f;
              FUN_14263c640(lVar9 + 0x1b4,puVar1,1);
              uVar8 = (int)(uVar8 & (uint)((longlong)param_2 + local_a0 + uVar20 >> 0x20)) >> 0x1f;
              local_80 = local_80 | *(uint *)(lVar9 + 0x1b4) & uVar8;
              uStack_7c = uStack_7c | *(uint *)(lVar9 + 0x1b8) & uVar8;
              local_78 = local_78 | *(uint *)(lVar9 + 0x1bc) & uVar8;
              uStack_74 = uStack_74 | *(uint *)(lVar9 + 0x1c0) & uVar8;
              local_70 = local_70 | *(uint *)(lVar9 + 0x1c4) & uVar8;
              puVar10 = local_a8;
              uVar8 = 0;
            }
            uVar15 = (uint)puVar10;
            uVar20 = uVar20 + 1;
            lVar16 = local_c8;
          } while (uVar20 < uVar21);
        }
        uVar21 = (ulonglong)uVar8;
        if (uVar21 < 0x40) {
          lVar16 = 0x40 - uVar21;
          uVar20 = uVar20 + lVar16;
          puVar18 = (undefined1 *)(uVar21 + (longlong)puVar1);
          for (; lVar16 != 0; lVar16 = lVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
        }
        if (0x38 < uVar8) {
          uVar8 = (uint)((local_c8 - uVar20) + 8 >> 0x20);
          *(uint *)(lVar9 + 0x20c) = *(uint *)(lVar9 + 0x20c) | uVar15 & (int)uVar8 >> 0x1f;
          FUN_14263c640(lVar9 + 0x1b4,puVar1,1);
          uVar8 = (int)(uVar8 & (uint)((uVar20 - local_c8) + -0x49 >> 0x20)) >> 0x1f;
          local_80 = local_80 | *(uint *)(lVar9 + 0x1b4) & uVar8;
          uStack_7c = uStack_7c | *(uint *)(lVar9 + 0x1b8) & uVar8;
          local_78 = local_78 | *(uint *)(lVar9 + 0x1bc) & uVar8;
          uStack_74 = uStack_74 | *(uint *)(lVar9 + 0x1c0) & uVar8;
          local_70 = local_70 | *(uint *)(lVar9 + 0x1c4) & uVar8;
          *puVar1 = 0;
          uVar20 = uVar20 + 0x40;
          *(undefined8 *)(lVar9 + 0x1d8) = 0;
          *(undefined8 *)(lVar9 + 0x1e0) = 0;
          *(undefined8 *)(lVar9 + 0x1e8) = 0;
          *(undefined8 *)(lVar9 + 0x1f0) = 0;
          *(undefined8 *)(lVar9 + 0x1f8) = 0;
          *(undefined8 *)(lVar9 + 0x200) = 0;
          *(undefined8 *)(lVar9 + 0x208) = 0;
        }
        *(int *)(lVar9 + 0x20c) = (int)local_a8;
        puVar2 = (uint *)(lVar9 + 0x1b4);
        FUN_14263c640(puVar2,puVar1,1);
        uVar8 = (uint)((longlong)((uVar20 - local_c8) + -0x49) >> 0x3f);
        local_80 = *puVar2 & uVar8 | local_80;
        uStack_7c = *(uint *)(lVar9 + 0x1b8) & uVar8 | uStack_7c;
        _local_80 = CONCAT44(uStack_7c >> 0x18 | (uStack_7c & 0xff0000) >> 8 |
                             (uStack_7c & 0xff00) << 8 | uStack_7c << 0x18,
                             local_80 >> 0x18 | (local_80 & 0xff0000) >> 8 |
                             (local_80 & 0xff00) << 8 | local_80 << 0x18);
        local_78 = *(uint *)(lVar9 + 0x1bc) & uVar8 | local_78;
        uStack_74 = *(uint *)(lVar9 + 0x1c0) & uVar8 | uStack_74;
        _local_78 = CONCAT44(uStack_74 >> 0x18 | (uStack_74 & 0xff0000) >> 8 |
                             (uStack_74 & 0xff00) << 8 | uStack_74 << 0x18,
                             local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 |
                             (local_78 & 0xff00) << 8 | local_78 << 0x18);
        *(undefined8 *)puVar2 = *(undefined8 *)(lVar9 + 0x154);
        *(undefined8 *)(lVar9 + 0x1bc) = *(undefined8 *)(lVar9 + 0x15c);
        local_70 = *(uint *)(lVar9 + 0x1c4) & uVar8 | local_70;
        *(undefined8 *)(lVar9 + 0x1c4) = *(undefined8 *)(lVar9 + 0x164);
        *(undefined8 *)(lVar9 + 0x1cc) = *(undefined8 *)(lVar9 + 0x16c);
        local_70 = local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
                   local_70 << 0x18;
        *(undefined8 *)(lVar9 + 0x1d4) = *(undefined8 *)(lVar9 + 0x174);
        *(undefined8 *)(lVar9 + 0x1dc) = *(undefined8 *)(lVar9 + 0x17c);
        *(undefined8 *)(lVar9 + 0x1e4) = *(undefined8 *)(lVar9 + 0x184);
        *(undefined8 *)(lVar9 + 0x1ec) = *(undefined8 *)(lVar9 + 0x18c);
        *(undefined4 *)(lVar9 + 500) = *(undefined4 *)(lVar9 + 0x194);
        *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar9 + 0x198);
        *(undefined4 *)(lVar9 + 0x1fc) = *(undefined4 *)(lVar9 + 0x19c);
        *(undefined4 *)(lVar9 + 0x200) = *(undefined4 *)(lVar9 + 0x1a0);
        *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar9 + 0x1a4);
        *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar9 + 0x1a8);
        *(undefined4 *)(lVar9 + 0x20c) = *(undefined4 *)(lVar9 + 0x1ac);
        *(undefined4 *)(lVar9 + 0x210) = *(undefined4 *)(lVar9 + 0x1b0);
        FUN_144e9cbe0(puVar2,&local_80,0x14);
        FUN_144edb400(&local_80,puVar2);
        if ((int)local_b0 + 0x14U != 0) {
          do {
            uVar14 = uVar14 + 1;
          } while (uVar14 < (int)local_b0 + 0x14U);
        }
      }
    }
    else {
      uVar12 = uVar14;
      uVar19 = param_4;
      if (uVar21 != 0xffffffffffffffff) {
        if (param_4 != (uVar21 + 0x24 & 0xfffffffffffffff0)) goto LAB_144e9c60e;
        uVar19 = uVar21;
        local_b0 = uVar14;
        if (0x301 < *(uint *)(lVar9 + 0x220)) {
          local_b0 = 0x10;
          uVar12 = local_b0;
        }
      }
      uVar21 = uVar14;
      if (uVar12 + uVar20 < uVar19) {
        uVar12 = (uVar19 - uVar20) - local_b0;
        uVar13 = uVar12 >> 6;
        if (uVar13 != 0) {
          FUN_144e9cbe0(lVar9 + 0x1b4U,(longlong)param_3 + local_b0,uVar20);
          lVar16 = (longlong)param_3 + local_b0 + uVar20;
          local_e8 = FUN_144ba3e50(local_c0);
          param_3 = local_a8;
          local_e0 = lVar9 + 0x1b4U;
          local_d8 = lVar16;
          FUN_142639980(local_a8,param_2,uVar13,lVar9);
          uVar14 = uVar13 * 0x40;
          iVar7 = (int)(uVar12 >> 0x1d) + *(int *)(lVar9 + 0x1cc);
          uVar8 = (uint)(uVar13 << 9);
          *(int *)(lVar9 + 0x1c8) = *(int *)(lVar9 + 0x1c8) + uVar8;
          *(int *)(lVar9 + 0x1cc) = iVar7;
          uVar21 = uVar20 + uVar14;
          if (*(uint *)(lVar9 + 0x1c8) < uVar8) {
            *(int *)(lVar9 + 0x1cc) = iVar7 + 1;
          }
        }
      }
      puVar1 = (undefined8 *)(lVar9 + 0x1b4);
      FUN_144e9cbe0(puVar1,(longlong)param_3 + uVar21 + local_b0,uVar19 - (uVar21 + local_b0));
      if (uVar19 == param_4) {
        local_e8 = FUN_144ba3e50(local_c0);
        local_e0 = CONCAT44(local_e0._4_4_,1);
        FUN_1425a3bf0((longlong)param_3 + uVar14,(longlong)param_2 + uVar14,param_4 - uVar14,lVar9);
      }
      else {
        if (param_3 != param_2) {
          memcpy((void *)((longlong)param_2 + uVar14),(void *)((longlong)param_3 + uVar14),
                 uVar19 - uVar14);
        }
        lVar16 = (longlong)param_2 + uVar19;
        FUN_144edb400(lVar16,puVar1);
        *puVar1 = *(undefined8 *)(lVar9 + 0x154);
        *(undefined8 *)(lVar9 + 0x1bc) = *(undefined8 *)(lVar9 + 0x15c);
        *(undefined8 *)(lVar9 + 0x1c4) = *(undefined8 *)(lVar9 + 0x164);
        *(undefined8 *)(lVar9 + 0x1cc) = *(undefined8 *)(lVar9 + 0x16c);
        *(undefined8 *)(lVar9 + 0x1d4) = *(undefined8 *)(lVar9 + 0x174);
        *(undefined8 *)(lVar9 + 0x1dc) = *(undefined8 *)(lVar9 + 0x17c);
        *(undefined8 *)(lVar9 + 0x1e4) = *(undefined8 *)(lVar9 + 0x184);
        *(undefined8 *)(lVar9 + 0x1ec) = *(undefined8 *)(lVar9 + 0x18c);
        *(undefined4 *)(lVar9 + 500) = *(undefined4 *)(lVar9 + 0x194);
        *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar9 + 0x198);
        *(undefined4 *)(lVar9 + 0x1fc) = *(undefined4 *)(lVar9 + 0x19c);
        *(undefined4 *)(lVar9 + 0x200) = *(undefined4 *)(lVar9 + 0x1a0);
        *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar9 + 0x1a4);
        *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar9 + 0x1a8);
        *(undefined4 *)(lVar9 + 0x20c) = *(undefined4 *)(lVar9 + 0x1ac);
        *(undefined4 *)(lVar9 + 0x210) = *(undefined4 *)(lVar9 + 0x1b0);
        FUN_144e9cbe0(puVar1,lVar16,0x14);
        FUN_144edb400(lVar16,puVar1);
        uVar19 = uVar19 + 0x14;
        if (uVar19 < param_4) {
          pcVar17 = (char *)((longlong)param_2 + uVar19);
          for (lVar16 = param_4 - uVar19; lVar16 != 0; lVar16 = lVar16 + -1) {
            *pcVar17 = ((char)param_4 - (char)uVar19) + -1;
            pcVar17 = pcVar17 + 1;
          }
        }
        local_e8 = FUN_144ba3e50(local_c0);
        local_e0 = CONCAT44(local_e0._4_4_,1);
        FUN_1425a3bf0((longlong)param_2 + uVar14,(longlong)param_2 + uVar14,param_4 - uVar14,lVar9);
      }
    }
  }
LAB_144e9c60e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_108);
}



// FUNCTION 144e9c640 FUN_144e9c640 body=1357 status=ok
// SIG undefined FUN_144e9c640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9c640(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined1 auStack_b8 [32];
  uint local_98;
  ulonglong local_88 [10];
  
  local_88[8] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_144ba3e90();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar3 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      iVar2 = FUN_144ba3dc0(param_1);
      if (iVar2 == 0) {
        *(undefined8 *)(lVar4 + 0x220) = *param_4;
        *(undefined4 *)(lVar4 + 0x228) = *(undefined4 *)(param_4 + 1);
        *(undefined1 *)(lVar4 + 0x22c) = *(undefined1 *)((longlong)param_4 + 0xc);
        *(undefined8 *)(lVar4 + 0x218) = 0xd;
      }
      else {
        *(ulonglong *)(lVar4 + 0x218) = (ulonglong)uVar3;
        uVar5 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 9),
                               *(undefined1 *)((longlong)param_4 + 10));
        *(uint *)(lVar4 + 0x220) = uVar5;
        if (0x301 < uVar5) {
          if (uVar3 < 0x10) goto LAB_144e9c6c6;
          *(char *)((longlong)param_4 + 0xc) = (char)(uVar3 - 0x10);
          *(char *)((longlong)param_4 + 0xb) = (char)(uVar3 - 0x10 >> 8);
        }
        *(undefined8 *)(lVar4 + 0x1b4) = *(undefined8 *)(lVar4 + 0xf4);
        *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
        *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
        *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
        *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
        *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
        *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
        *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
        *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
        *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
        *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
        *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
        FUN_144e9cbe0((undefined8 *)(lVar4 + 0x1b4),param_4,0xd);
      }
    }
  }
  else if (param_2 == 0x17) {
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    if (param_3 < 0x41) {
      memcpy(local_88,param_4,(longlong)param_3);
    }
    else {
      FUN_144edb280(lVar4 + 0xf4);
      FUN_144e9cbe0(lVar4 + 0xf4,param_4,(longlong)param_3);
      FUN_144edb400(local_88,lVar4 + 0xf4);
    }
    lVar8 = 2;
    lVar6 = 2;
    puVar11 = local_88;
    do {
      *puVar11 = *puVar11 ^ 0x3636363636363636;
      puVar11[1] = puVar11[1] ^ 0x3636363636363636;
      puVar11[2] = puVar11[2] ^ 0x3636363636363636;
      puVar11[3] = puVar11[3] ^ 0x3636363636363636;
      lVar6 = lVar6 + -1;
      puVar11 = puVar11 + 4;
    } while (lVar6 != 0);
    lVar6 = lVar4 + 0xf4;
    FUN_144edb280(lVar6);
    puVar11 = local_88;
    lVar9 = 0x40;
    if ((ulonglong)*(uint *)(lVar4 + 0x150) != 0) {
      uVar7 = 0x40 - (ulonglong)*(uint *)(lVar4 + 0x150);
      if (0x40 < uVar7) {
        uVar7 = 0x40;
      }
      FUN_144edb2d0(lVar6,local_88,uVar7);
      puVar11 = (ulonglong *)((longlong)local_88 + uVar7);
      lVar9 = 0x40 - uVar7;
    }
    uVar7 = (ulonglong)((uint)lVar9 & 0x3f);
    uVar10 = lVar9 - uVar7;
    if (uVar10 != 0) {
      FUN_14263c640(lVar6,puVar11,uVar10 >> 6);
      puVar11 = (ulonglong *)((longlong)puVar11 + uVar10);
      iVar2 = (int)(uVar10 >> 0x1d) + *(int *)(lVar4 + 0x10c);
      uVar3 = (int)uVar10 * 8;
      *(int *)(lVar4 + 0x108) = *(int *)(lVar4 + 0x108) + uVar3;
      *(int *)(lVar4 + 0x10c) = iVar2;
      if (*(uint *)(lVar4 + 0x108) < uVar3) {
        *(int *)(lVar4 + 0x10c) = iVar2 + 1;
      }
    }
    if (uVar7 != 0) {
      FUN_144edb2d0(lVar6,puVar11,uVar7);
    }
    puVar11 = local_88;
    do {
      *puVar11 = *puVar11 ^ 0x6a6a6a6a6a6a6a6a;
      puVar11[1] = puVar11[1] ^ 0x6a6a6a6a6a6a6a6a;
      puVar11[2] = puVar11[2] ^ 0x6a6a6a6a6a6a6a6a;
      puVar11[3] = puVar11[3] ^ 0x6a6a6a6a6a6a6a6a;
      lVar8 = lVar8 + -1;
      puVar11 = puVar11 + 4;
    } while (lVar8 != 0);
    lVar6 = lVar4 + 0x154;
    FUN_144edb280(lVar6);
    puVar11 = local_88;
    lVar8 = 0x40;
    if ((ulonglong)*(uint *)(lVar4 + 0x1b0) != 0) {
      uVar7 = 0x40 - (ulonglong)*(uint *)(lVar4 + 0x1b0);
      if (0x40 < uVar7) {
        uVar7 = 0x40;
      }
      FUN_144edb2d0(lVar6,local_88,uVar7);
      puVar11 = (ulonglong *)((longlong)local_88 + uVar7);
      lVar8 = 0x40 - uVar7;
    }
    uVar7 = (ulonglong)((uint)lVar8 & 0x3f);
    uVar10 = lVar8 - uVar7;
    if (uVar10 != 0) {
      FUN_14263c640(lVar6,puVar11,uVar10 >> 6);
      puVar11 = (ulonglong *)((longlong)puVar11 + uVar10);
      iVar2 = (int)(uVar10 >> 0x1d) + *(int *)(lVar4 + 0x16c);
      uVar3 = (int)uVar10 * 8;
      *(int *)(lVar4 + 0x168) = *(int *)(lVar4 + 0x168) + uVar3;
      *(int *)(lVar4 + 0x16c) = iVar2;
      if (*(uint *)(lVar4 + 0x168) < uVar3) {
        *(int *)(lVar4 + 0x16c) = iVar2 + 1;
      }
    }
    if (uVar7 != 0) {
      FUN_144edb2d0(lVar6,puVar11,uVar7);
    }
    FUN_14259f0c0(local_88,0x40);
  }
  else if (param_2 == 0x19) {
    if (0x1f < param_3) {
      uVar1 = CONCAT11(*(undefined1 *)(param_4[1] + 0xb),*(undefined1 *)(param_4[1] + 0xc));
      iVar2 = FUN_144ba3dc0(param_1);
      if ((iVar2 != 0) &&
         (0x301 < CONCAT11(*(undefined1 *)(param_4[1] + 9),*(undefined1 *)(param_4[1] + 10)))) {
        if (uVar1 == 0) {
          uVar3 = *(uint *)(param_4 + 3) >> 2;
          if (uVar3 != 1 && uVar3 != 2) goto LAB_144e9c6c6;
        }
        else {
          if (uVar1 < 0x1000) goto LAB_144e9c6c6;
          uVar3 = 1;
          if ((0x1fff < uVar1) && (uVar3 = 1, ((byte)DAT_14c7973a8 & 0x20) != 0)) {
            uVar3 = 2;
          }
        }
        *(undefined8 *)(lVar4 + 0x1b4) = *(undefined8 *)(lVar4 + 0xf4);
        *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
        *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
        *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
        *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
        *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
        *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
        *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
        *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
        *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
        *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
        *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
        FUN_144e9cbe0((undefined8 *)(lVar4 + 0x1b4),param_4[1],0xd);
        *(uint *)(param_4 + 3) = uVar3 * 4;
      }
    }
  }
  else if (param_2 == 0x1a) {
    local_98 = *(uint *)(param_4 + 3) >> 2;
    FUN_144e9cc90(lVar4,*param_4,param_4[1],param_4[2]);
  }
LAB_144e9c6c6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_88[8] ^ (ulonglong)auStack_b8);
}



// FUNCTION 144e9cba0 FUN_144e9cba0 body=27 status=ok
// SIG undefined FUN_144e9cba0(void)

undefined * FUN_144e9cba0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14c70ae20;
  }
  return puVar1;
}



// FUNCTION 144e9cbc0 FUN_144e9cbc0 body=27 status=ok
// SIG undefined FUN_144e9cbc0(void)

undefined * FUN_144e9cbc0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14c70ae80;
  }
  return puVar1;
}



// FUNCTION 144e9cbe0 FUN_144e9cbe0 body=172 status=ok
// SIG undefined FUN_144e9cbe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9cbe0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x5c) != 0) {
    uVar1 = 0x40 - (ulonglong)*(uint *)(param_1 + 0x5c);
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    FUN_144edb2d0(param_1,param_2,uVar1);
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
  }
  uVar1 = (ulonglong)((uint)param_3 & 0x3f);
  param_3 = param_3 - uVar1;
  if (param_3 != 0) {
    FUN_14263c640(param_1,param_2,param_3 >> 6);
    param_2 = param_2 + param_3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)(param_3 >> 0x1d);
    uVar2 = (int)param_3 * 8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar2;
    if (*(uint *)(param_1 + 0x14) < uVar2) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  if (uVar1 != 0) {
    FUN_144edb2d0(param_1,param_2,uVar1);
  }
  return;
}



// FUNCTION 144e9cc90 FUN_144e9cc90 body=1996 status=ok
// SIG undefined FUN_144e9cc90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9cc90(uint *param_1,undefined1 *param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 **ppuVar10;
  byte bVar11;
  int iVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  longlong *plVar28;
  ulonglong uVar29;
  uint *puVar30;
  longlong lVar31;
  undefined1 auStack_7b8 [32];
  undefined1 local_798;
  undefined1 local_797;
  undefined1 local_796;
  uint local_794;
  uint local_790;
  uint local_78c;
  uint local_788;
  uint local_784;
  uint *local_780;
  undefined1 *local_778;
  uint local_770;
  ulonglong local_768;
  longlong *local_760;
  undefined1 *local_758;
  int local_750;
  uint local_74c;
  longlong local_748;
  uint auStack_740 [2];
  longlong local_738 [14];
  undefined8 local_6c8;
  undefined4 local_6c0 [30];
  longlong local_648;
  undefined1 *local_640;
  undefined4 local_638 [2];
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  longlong local_618 [34];
  undefined8 local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint auStack_4cc [16];
  uint auStack_48c [225];
  undefined1 local_108 [32];
  undefined1 local_e8 [64];
  uint auStack_a8 [24];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144e9ccad;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7b8;
  uVar27 = 0;
  local_78c = 0;
  uVar20 = param_5 * 4;
  local_760 = (longlong *)CONCAT44(local_760._4_4_,uVar20);
  local_780 = param_1;
  local_758 = param_2;
  iVar9 = FUN_144bac850(&local_508,param_5 << 6);
  if (0 < iVar9) {
    bVar11 = (char)param_5 + 1;
    local_790 = param_4 >> (bVar11 & 0x1f);
    lVar31 = -(ulonglong)((uint)local_108 & 0x1f);
    local_778 = local_e8 + lVar31;
    uVar22 = (param_4 - (local_790 << (bVar11 & 0x1f))) + local_790;
    local_768 = (ulonglong)uVar22;
    if ((local_790 < uVar22) && ((uVar22 + 0x16 & 0x3f) < uVar20 - 1)) {
      local_790 = local_790 + 1;
      local_768 = (ulonglong)(uVar22 + param_5 * -4 + 1);
    }
    uVar14 = local_768;
    uVar22 = local_790;
    uVar23 = (uint)local_768;
    local_748 = param_3;
    local_648 = param_3;
    local_640 = local_758 + 0x15;
    *(ulonglong *)(local_758 + 5) = local_508;
    *(ulonglong *)(local_758 + 0xd) = CONCAT44(uStack_4fc,uStack_500);
    local_630 = (undefined4)local_508;
    uStack_62c = local_508._4_4_;
    uStack_628 = uStack_500;
    uStack_624 = uStack_4fc;
    if (1 < uVar20) {
      plVar26 = local_738;
      ppuVar10 = &local_640;
      plVar28 = &local_748;
      uVar21 = (ulonglong)(uVar20 - 1);
      plVar15 = local_618;
      puVar24 = &local_4f8;
      do {
        lVar1 = *plVar28;
        uVar3 = *puVar24;
        uVar8 = puVar24[1];
        *plVar26 = lVar1 + (ulonglong)local_790;
        plVar28 = plVar28 + 2;
        plVar15[-1] = lVar1 + (ulonglong)local_790;
        plVar26 = plVar26 + 2;
        puVar13 = *ppuVar10;
        ppuVar10 = ppuVar10 + 5;
        puVar13 = puVar13 + ((local_790 + 0x24 & 0xfffffff0) + 0x15);
        *plVar15 = (longlong)puVar13;
        *(undefined8 *)(puVar13 + -0x10) = uVar3;
        *(undefined8 *)(puVar13 + -8) = uVar8;
        uVar5 = *(undefined4 *)((longlong)puVar24 + 4);
        uVar6 = *(undefined4 *)(puVar24 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar24 + 0xc);
        *(undefined4 *)(plVar15 + 2) = *(undefined4 *)puVar24;
        *(undefined4 *)((longlong)plVar15 + 0x14) = uVar5;
        *(undefined4 *)(plVar15 + 3) = uVar6;
        *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar7;
        uVar21 = uVar21 - 1;
        plVar15 = plVar15 + 5;
        puVar24 = puVar24 + 2;
        param_1 = local_780;
      } while (uVar21 != 0);
    }
    local_508 = *(ulonglong *)(param_1 + 0x74);
    if (uVar20 != 0) {
      local_74c = param_1[0x70];
      puVar30 = (uint *)((longlong)auStack_a8 + lVar31);
      local_794 = param_1[0x6d];
      local_770 = param_1[0x6f];
      local_788 = param_1[0x71];
      local_798 = (undefined1)param_1[0x76];
      local_797 = *(undefined1 *)((longlong)param_1 + 0x1d9);
      local_796 = *(undefined1 *)((longlong)param_1 + 0x1da);
      local_784 = param_1[0x6e];
      puVar24 = &local_508;
      local_750 = uVar20 - 1;
      uVar21 = uVar27;
      puVar16 = &uStack_500;
      uVar25 = local_508 >> 0x38 | (local_508 & 0xff000000000000) >> 0x28 |
               (local_508 & 0xff0000000000) >> 0x18 | (local_508 & 0xff00000000) >> 8 |
               (local_508 & 0xff000000) << 8 | (local_508 & 0xff0000) << 0x18 |
               (local_508 & 0xff00) << 0x28 | local_508 << 0x38;
      uVar29 = uVar27;
      do {
        puVar30[-8] = local_784;
        uVar19 = local_790;
        if ((int)uVar21 == local_750) {
          uVar19 = uVar23;
        }
        puVar30[8] = local_74c;
        uVar18 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar18;
        puVar30[0x10] = local_788;
        *(char *)(puVar16 + 1) = (char)uVar19;
        *puVar30 = local_770;
        puVar2 = *(undefined8 **)((longlong)auStack_740 + (uVar29 - 8));
        puVar30[-0x10] = local_794;
        puVar30 = puVar30 + 1;
        *(ulonglong *)(puVar16 + -2) =
             uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28 |
             uVar25 << 0x38;
        *(undefined1 *)puVar16 = local_798;
        *(undefined1 *)((longlong)puVar16 + 1) = local_797;
        *(undefined1 *)((longlong)puVar16 + 2) = local_796;
        *(char *)((longlong)puVar16 + 3) = (char)(uVar19 >> 8);
        uVar3 = puVar2[1];
        *(undefined8 *)((longlong)puVar16 + 5) = *puVar2;
        *(undefined8 *)((longlong)puVar16 + 0xd) = uVar3;
        uVar3 = puVar2[3];
        *(undefined8 *)((longlong)puVar16 + 0x15) = puVar2[2];
        *(undefined8 *)((longlong)puVar16 + 0x1d) = uVar3;
        uVar5 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uVar6 = *(undefined4 *)(puVar2 + 5);
        uVar7 = *(undefined4 *)((longlong)puVar2 + 0x2c);
        *(undefined4 *)((longlong)puVar16 + 0x25) = *(undefined4 *)(puVar2 + 4);
        *(undefined4 *)((longlong)puVar16 + 0x29) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0x2d) = uVar6;
        *(undefined4 *)((longlong)puVar16 + 0x31) = uVar7;
        *(undefined2 *)((longlong)puVar16 + 0x35) = *(undefined2 *)(puVar2 + 6);
        *(undefined1 *)((longlong)puVar16 + 0x37) = *(undefined1 *)((longlong)puVar2 + 0x32);
        *(longlong *)((longlong)auStack_740 + (uVar29 - 8)) = (longlong)puVar2 + 0x33;
        *(undefined8 **)((longlong)local_6c0 + (uVar29 - 8)) = puVar24;
        puVar24 = puVar24 + 0x10;
        *(uint *)((longlong)auStack_740 + uVar29) = uVar19 - 0x33 >> 6;
        *(undefined4 *)((longlong)local_6c0 + uVar29) = 1;
        puVar16 = puVar16 + 0x20;
        uVar25 = uVar25 + 1;
        uVar29 = uVar29 + 0x10;
        param_1 = local_780;
      } while (uVar18 < uVar20);
    }
    FUN_142641300(local_778,&local_6c8,param_5);
    puVar13 = local_778;
    if (uVar22 <= uVar23) {
      uVar23 = uVar22;
    }
    uVar19 = uVar23 - 0x33 >> 6;
    uVar23 = local_78c;
    if (0x20 < uVar19) {
      uVar21 = uVar27;
      if (uVar20 != 0) {
        puVar16 = local_638;
        uVar25 = (ulonglong)uVar20;
        uVar14 = uVar27;
        do {
          *(undefined8 *)((longlong)local_6c0 + (uVar14 - 8)) =
               *(undefined8 *)((longlong)auStack_740 + (uVar14 - 8));
          *(undefined4 *)((longlong)local_6c0 + uVar14) = 0x20;
          uVar14 = uVar14 + 0x10;
          *puVar16 = 0x80;
          puVar16 = puVar16 + 10;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      do {
        FUN_142641300(puVar13,&local_6c8,param_5);
        FUN_142648ec0(&local_648,param_1,param_5);
        if (uVar20 != 0) {
          uVar25 = (ulonglong)uVar20;
          ppuVar10 = &local_640;
          uVar14 = uVar27;
          do {
            plVar26 = (longlong *)((longlong)auStack_740 + (uVar14 - 8));
            *plVar26 = *plVar26 + 0x800;
            *ppuVar10 = *ppuVar10 + 0x800;
            uVar3 = *(undefined8 *)((longlong)auStack_740 + (uVar14 - 8));
            *(int *)((longlong)auStack_740 + uVar14) =
                 *(int *)((longlong)auStack_740 + uVar14) + -0x20;
            ppuVar10[-1] = ppuVar10[-1] + 0x800;
            *(undefined8 *)((longlong)local_6c0 + (uVar14 - 8)) = uVar3;
            puVar4 = *ppuVar10;
            *(undefined4 *)((longlong)local_6c0 + uVar14) = 0x20;
            uVar14 = uVar14 + 0x10;
            *(undefined4 *)(ppuVar10 + 1) = 0x80;
            uVar5 = *(undefined4 *)(puVar4 + -0xc);
            uVar6 = *(undefined4 *)(puVar4 + -8);
            uVar7 = *(undefined4 *)(puVar4 + -4);
            *(undefined4 *)(ppuVar10 + 2) = *(undefined4 *)(puVar4 + -0x10);
            *(undefined4 *)((longlong)ppuVar10 + 0x14) = uVar5;
            *(undefined4 *)(ppuVar10 + 3) = uVar6;
            *(undefined4 *)((longlong)ppuVar10 + 0x1c) = uVar7;
            uVar25 = uVar25 - 1;
            ppuVar10 = ppuVar10 + 5;
          } while (uVar25 != 0);
        }
        uVar23 = (int)uVar21 + 0x800;
        uVar19 = uVar19 - 0x20;
        uVar14 = local_768;
        uVar21 = (ulonglong)uVar23;
        uVar22 = local_790;
      } while (0x20 < uVar19);
    }
    local_78c = uVar23;
    puVar13 = local_778;
    FUN_142641300(local_778,&local_748,param_5);
    memset(&local_508,0,0x400);
    local_794 = 0;
    if (uVar20 != 0) {
      lVar31 = 0;
      puVar24 = &local_508;
      uVar21 = uVar27;
      do {
        uVar22 = local_790;
        if ((int)uVar27 == uVar20 - 1) {
          uVar22 = (uint)local_768;
        }
        uVar23 = ((uVar22 + *(int *)((longlong)auStack_740 + lVar31) * -0x40) - local_78c) - 0x33;
        memcpy(puVar24,(void *)((ulonglong)(uint)(*(int *)((longlong)auStack_740 + lVar31) * 0x40) +
                               *(longlong *)((longlong)auStack_740 + lVar31 + -8)),(ulonglong)uVar23
              );
        *(undefined1 *)((longlong)&local_508 + uVar21 + uVar23) = 0x80;
        uVar22 = uVar22 * 8 + 0x268;
        uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                 uVar22 * 0x1000000;
        if (uVar23 < 0x38) {
          *(uint *)((longlong)auStack_4cc + uVar21) = uVar22;
          *(undefined4 *)((longlong)local_6c0 + lVar31) = 1;
        }
        else {
          *(uint *)((longlong)auStack_48c + uVar21) = uVar22;
          *(undefined4 *)((longlong)local_6c0 + lVar31) = 2;
        }
        *(undefined8 **)((longlong)local_6c0 + lVar31 + -8) = puVar24;
        local_794 = local_794 + 1;
        uVar27 = (ulonglong)local_794;
        puVar24 = puVar24 + 0x10;
        uVar21 = uVar21 + 0x80;
        lVar31 = lVar31 + 0x10;
        puVar13 = local_778;
        uVar14 = local_768;
        param_1 = local_780;
        uVar22 = local_790;
      } while (local_794 < uVar20);
    }
    FUN_142641300(puVar13,&local_6c8,param_5);
    memset(&local_508,0,0x400);
    uVar23 = 0;
    if (uVar20 != 0) {
      local_770 = param_1[0x57];
      puVar16 = local_6c0;
      uVar22 = param_1[0x55];
      uVar23 = param_1[0x56];
      puVar24 = &local_508;
      local_784 = param_1[0x58];
      uVar19 = param_1[0x59];
      uVar27 = (ulonglong)uVar20;
      puVar30 = (uint *)(puVar13 + 0x40);
      puVar17 = (uint *)((longlong)&local_508 + 4);
      do {
        uVar20 = puVar30[-0x10];
        *(undefined8 **)(puVar16 + -2) = puVar24;
        puVar24 = puVar24 + 0x10;
        puVar30[-0x10] = uVar22;
        *(undefined1 *)(puVar17 + 4) = 0x80;
        puVar17[0xe] = 0xa0020000;
        *puVar16 = 1;
        puVar16 = puVar16 + 4;
        puVar17[-1] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                      uVar20 << 0x18;
        uVar20 = puVar30[-8];
        puVar30[-8] = uVar23;
        *puVar17 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18;
        uVar20 = *puVar30;
        *puVar30 = local_770;
        puVar17[1] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar30[8];
        puVar30[8] = local_784;
        puVar17[2] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar30[0x10];
        puVar30[0x10] = uVar19;
        puVar17[3] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar27 = uVar27 - 1;
        puVar30 = puVar30 + 1;
        puVar17 = puVar17 + 0x20;
      } while (uVar27 != 0);
      param_1 = local_780;
      uVar22 = local_790;
      uVar23 = (uint)local_760;
    }
    FUN_142641300(puVar13,&local_6c8,param_5);
    local_794 = 0;
    if (uVar23 != 0) {
      plVar26 = &local_648;
      local_780 = (uint *)(puVar13 + 0x40);
      do {
        puVar13 = local_758;
        uVar20 = uVar22;
        if (local_794 == uVar23 - 1) {
          uVar20 = (uint)uVar14;
        }
        local_760 = plVar26;
        memcpy((void *)plVar26[1],(void *)*plVar26,(ulonglong)(uVar20 - local_78c));
        *plVar26 = plVar26[1];
        puVar30 = (uint *)(local_758 + (uVar20 + 0x15));
        uVar19 = local_780[-0x10];
        *puVar30 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                   uVar19 << 0x18;
        uVar19 = local_780[-8];
        puVar30[1] = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
        uVar19 = *local_780;
        puVar30[2] = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
        uVar19 = local_780[8];
        puVar30[3] = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
        uVar19 = local_780[0x10];
        local_780 = local_780 + 1;
        puVar30[4] = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
        iVar12 = -(uVar20 + 0x14 & 0xf);
        iVar9 = iVar12 + 0xf;
        uVar27 = (ulonglong)(iVar12 + 0x10);
        local_758 = (undefined1 *)((longlong)(puVar30 + 5) + uVar27);
        puVar30 = puVar30 + 5;
        for (; uVar27 != 0; uVar27 = uVar27 - 1) {
          *(char *)puVar30 = (char)iVar9;
          puVar30 = (uint *)((longlong)puVar30 + 1);
        }
        iVar9 = uVar20 + 0x14 + iVar9;
        iVar12 = iVar9 + 0x11;
        *(uint *)(local_760 + 2) = (iVar9 + 1) - local_78c >> 4;
        plVar26 = local_760 + 5;
        *puVar13 = (char)param_1[0x76];
        puVar13[1] = *(undefined1 *)((longlong)param_1 + 0x1d9);
        puVar13[2] = *(undefined1 *)((longlong)param_1 + 0x1da);
        puVar13[3] = (char)((uint)iVar12 >> 8);
        puVar13[4] = (char)iVar12;
        local_794 = local_794 + 1;
        puVar13 = local_778;
        uVar14 = local_768;
        local_760 = plVar26;
      } while (local_794 < uVar23);
    }
    FUN_142648ec0(&local_648,param_1,param_5);
    FUN_14259f0c0(&local_508,0x400);
    FUN_14259f0c0(puVar13,0xa0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_7b8);
}



// FUNCTION 144e9d470 FUN_144e9d470 body=289 status=ok
// SIG undefined FUN_144e9d470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144e9d470(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FUN_144ba3e90();
  iVar2 = FUN_144ba3de0(param_1);
  if (param_4 == 0) {
    uVar3 = FUN_1425a4630(param_2,iVar2 << 3,lVar4);
  }
  else {
    uVar3 = FUN_1425a46a0();
  }
  puVar1 = (undefined8 *)(lVar4 + 0xf4);
  FUN_144baee60(puVar1);
  *(undefined8 *)(lVar4 + 0x164) = *puVar1;
  *(undefined8 *)(lVar4 + 0x16c) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x248) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x174) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x17c) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x184) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x18c) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x194) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x19c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x1a4) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x1ac) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x1b4) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x154);
  *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x15c);
  *(undefined8 *)(lVar4 + 0x1d4) = *puVar1;
  *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x224) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x22c) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x234) = *(undefined8 *)(lVar4 + 0x154);
  *(undefined8 *)(lVar4 + 0x23c) = *(undefined8 *)(lVar4 + 0x15c);
  return ~uVar3 >> 0x1f;
}



// FUNCTION 144e9d5a0 FUN_144e9d5a0 body=2203 status=ok
// SIG undefined FUN_144e9d5a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9d5a0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x144e9d5b7;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f0 = param_3;
  local_e0 = param_1;
  lVar5 = FUN_144ba3e90();
  uVar6 = 0;
  local_e8 = 0;
  uVar9 = (ulonglong)(0x40 - *(int *)(lVar5 + 0x23c));
  uVar18 = *(ulonglong *)(lVar5 + 0x248);
  *(undefined8 *)(lVar5 + 0x248) = 0xffffffffffffffff;
  local_d8 = uVar9;
  if ((param_4 & 0xf) == 0) {
    iVar3 = FUN_144ba3dc0(param_1);
    lVar7 = local_f0;
    if (iVar3 == 0) {
      local_118 = FUN_144ba3e50(local_e0);
      local_110 = local_110 & 0xffffffff00000000;
      FUN_1425a3bf0(param_3,param_2,param_4,lVar5);
      if (uVar18 == 0xffffffffffffffff) {
        FUN_144e9e410(lVar5 + 0x1d4,param_2,param_4);
      }
      else {
        puVar1 = (undefined8 *)(lVar5 + 0x1fc);
        uVar9 = 0x10;
        if (CONCAT11(*(undefined1 *)(uVar18 + 0x24c + lVar5),*(undefined1 *)(uVar18 + 0x24d + lVar5)
                    ) < 0x302) {
          uVar9 = uVar6;
        }
        if (uVar9 + 0x21 <= param_4) {
          lVar11 = param_4 - uVar9;
          param_2 = param_2 + uVar9;
          uVar4 = (int)lVar11 - 0x21;
          bVar8 = *(byte *)(lVar11 + -1 + param_2);
          uVar10 = 0xff - uVar4 >> 0x18 | uVar4 & 0xff;
          local_e0 = CONCAT44(local_e0._4_4_,uVar10);
          uVar4 = 0xffffffff -
                  ((int)((uVar10 - bVar8 ^ (uint)bVar8 | uVar10 ^ bVar8) ^ uVar10) >> 0x1f);
          local_e8 = CONCAT44(local_e8._4_4_,uVar4) & 0xffffffff00000001;
          uVar4 = uVar4 & bVar8 | ~uVar4 & uVar10;
          local_f0 = CONCAT44(local_f0._4_4_,uVar4);
          lVar7 = lVar11 - (ulonglong)(uVar4 + 0x21);
          *(char *)(uVar18 + 0x24f + lVar5) = (char)lVar7;
          *(char *)(uVar18 + 0x24e + lVar5) = (char)((ulonglong)lVar7 >> 8);
          *(undefined8 *)(lVar5 + 0x1d4) = *(undefined8 *)(lVar5 + 0xf4);
          *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0xfc);
          *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x104);
          *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x10c);
          *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x114);
          *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x11c);
          *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x124);
          *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 300);
          *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x134);
          *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x13c);
          *(undefined4 *)(lVar5 + 0x224) = *(undefined4 *)(lVar5 + 0x144);
          *(undefined4 *)(lVar5 + 0x228) = *(undefined4 *)(lVar5 + 0x148);
          *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)(lVar5 + 0x14c);
          *(undefined4 *)(lVar5 + 0x230) = *(undefined4 *)(lVar5 + 0x150);
          *(undefined4 *)(lVar5 + 0x234) = *(undefined4 *)(lVar5 + 0x154);
          *(undefined4 *)(lVar5 + 0x238) = *(undefined4 *)(lVar5 + 0x158);
          *(undefined4 *)(lVar5 + 0x23c) = *(undefined4 *)(lVar5 + 0x15c);
          *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(lVar5 + 0x160);
          local_f8 = lVar7;
          FUN_144e9e410((undefined8 *)(lVar5 + 0x1d4),lVar5 + 0x250,uVar18);
          uVar18 = lVar11 - 0x20;
          if (0x13f < uVar18) {
            lVar7 = (ulonglong)(0x40 - *(int *)(lVar5 + 0x23c)) +
                    (lVar11 - 0x160U & 0xffffffffffffffc0);
            FUN_144e9e410(lVar5 + 0x1d4,param_2,lVar7);
            param_2 = param_2 + lVar7;
            uVar18 = uVar18 - lVar7;
            lVar7 = local_f8 - lVar7;
            local_f8 = lVar7;
          }
          uVar4 = *(uint *)(lVar5 + 0x23c);
          uVar10 = (int)lVar7 * 8 + *(int *)(lVar5 + 500);
          local_80 = 0;
          uStack_7c = 0;
          local_78 = 0;
          uStack_74 = 0;
          local_70 = 0;
          uStack_6c = 0;
          local_68 = 0;
          uStack_64 = 0;
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 * 0x1000000;
          uVar9 = (ulonglong)uVar10;
          uVar15 = uVar6;
          local_d8 = uVar9;
          if (uVar18 != 0) {
            local_d0 = (-0x48 - param_2) - lVar7;
            local_c8 = -(param_2 + lVar7);
            do {
              bVar8 = (byte)((ulonglong)((byte *)(param_2 + uVar15) + local_c8) >> 0x38);
              uVar10 = uVar4 + 1;
              *(byte *)((ulonglong)uVar4 + (longlong)puVar1) =
                   ~(byte)(lVar7 - uVar15 >> 0x38) & ~bVar8 & 0x80 |
                   *(byte *)(param_2 + uVar15) & bVar8;
              uVar4 = uVar10;
              if (uVar10 == 0x40) {
                uVar4 = (uint)((lVar7 - uVar15) + 7 >> 0x20);
                *(uint *)(lVar5 + 0x238) =
                     *(uint *)(lVar5 + 0x238) | (uint)uVar9 & (int)uVar4 >> 0x1f;
                FUN_1425a8100(lVar5 + 0x1d4,puVar1,1);
                uVar4 = (int)(uVar4 & (uint)(param_2 + uVar15 + local_d0 >> 0x20)) >> 0x1f;
                local_80 = local_80 | *(uint *)(lVar5 + 0x1d4) & uVar4;
                uStack_7c = uStack_7c | *(uint *)(lVar5 + 0x1d8) & uVar4;
                local_78 = local_78 | *(uint *)(lVar5 + 0x1dc) & uVar4;
                uStack_74 = uStack_74 | *(uint *)(lVar5 + 0x1e0) & uVar4;
                local_70 = local_70 | *(uint *)(lVar5 + 0x1e4) & uVar4;
                uStack_6c = uStack_6c | *(uint *)(lVar5 + 0x1e8) & uVar4;
                local_68 = local_68 | *(uint *)(lVar5 + 0x1ec) & uVar4;
                uStack_64 = uStack_64 | *(uint *)(lVar5 + 0x1f0) & uVar4;
                uVar9 = local_d8;
                uVar4 = 0;
              }
              uVar10 = (uint)uVar9;
              uVar15 = uVar15 + 1;
              lVar7 = local_f8;
            } while (uVar15 < uVar18);
          }
          uVar18 = (ulonglong)uVar4;
          if (uVar18 < 0x40) {
            lVar7 = 0x40 - uVar18;
            uVar15 = uVar15 + lVar7;
            puVar13 = (undefined1 *)(uVar18 + (longlong)puVar1);
            for (; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
          }
          if (0x38 < uVar4) {
            uVar4 = (uint)((local_f8 - uVar15) + 8 >> 0x20);
            *(uint *)(lVar5 + 0x238) = *(uint *)(lVar5 + 0x238) | uVar10 & (int)uVar4 >> 0x1f;
            FUN_1425a8100(lVar5 + 0x1d4,puVar1,1);
            uVar4 = (int)(uVar4 & (uint)((uVar15 - local_f8) + -0x49 >> 0x20)) >> 0x1f;
            local_80 = local_80 | *(uint *)(lVar5 + 0x1d4) & uVar4;
            uStack_7c = uStack_7c | *(uint *)(lVar5 + 0x1d8) & uVar4;
            local_78 = local_78 | *(uint *)(lVar5 + 0x1dc) & uVar4;
            uStack_74 = uStack_74 | *(uint *)(lVar5 + 0x1e0) & uVar4;
            local_70 = local_70 | *(uint *)(lVar5 + 0x1e4) & uVar4;
            uStack_6c = uStack_6c | *(uint *)(lVar5 + 0x1e8) & uVar4;
            local_68 = local_68 | *(uint *)(lVar5 + 0x1ec) & uVar4;
            uStack_64 = uStack_64 | *(uint *)(lVar5 + 0x1f0) & uVar4;
            *puVar1 = 0;
            uVar15 = uVar15 + 0x40;
            *(undefined8 *)(lVar5 + 0x204) = 0;
            *(undefined8 *)(lVar5 + 0x20c) = 0;
            *(undefined8 *)(lVar5 + 0x214) = 0;
            *(undefined8 *)(lVar5 + 0x21c) = 0;
            *(undefined8 *)(lVar5 + 0x224) = 0;
            *(undefined8 *)(lVar5 + 0x22c) = 0;
            *(undefined8 *)(lVar5 + 0x234) = 0;
          }
          puVar2 = (uint *)(lVar5 + 0x1d4);
          *(int *)(lVar5 + 0x238) = (int)local_d8;
          FUN_1425a8100(puVar2,puVar1,1);
          uVar4 = (uint)((longlong)((uVar15 - local_f8) + -0x49) >> 0x3f);
          local_80 = *puVar2 & uVar4 | local_80;
          uStack_7c = *(uint *)(lVar5 + 0x1d8) & uVar4 | uStack_7c;
          _local_80 = CONCAT44(uStack_7c >> 0x18 | (uStack_7c & 0xff0000) >> 8 |
                               (uStack_7c & 0xff00) << 8 | uStack_7c << 0x18,
                               local_80 >> 0x18 | (local_80 & 0xff0000) >> 8 |
                               (local_80 & 0xff00) << 8 | local_80 << 0x18);
          local_78 = *(uint *)(lVar5 + 0x1dc) & uVar4 | local_78;
          uStack_74 = *(uint *)(lVar5 + 0x1e0) & uVar4 | uStack_74;
          _local_78 = CONCAT44(uStack_74 >> 0x18 | (uStack_74 & 0xff0000) >> 8 |
                               (uStack_74 & 0xff00) << 8 | uStack_74 << 0x18,
                               local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 |
                               (local_78 & 0xff00) << 8 | local_78 << 0x18);
          local_70 = *(uint *)(lVar5 + 0x1e4) & uVar4 | local_70;
          uStack_6c = *(uint *)(lVar5 + 0x1e8) & uVar4 | uStack_6c;
          _local_70 = CONCAT44(uStack_6c >> 0x18 | (uStack_6c & 0xff0000) >> 8 |
                               (uStack_6c & 0xff00) << 8 | uStack_6c << 0x18,
                               local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 |
                               (local_70 & 0xff00) << 8 | local_70 << 0x18);
          local_68 = *(uint *)(lVar5 + 0x1ec) & uVar4 | local_68;
          *(undefined8 *)puVar2 = *(undefined8 *)(lVar5 + 0x164);
          *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0x16c);
          uStack_64 = *(uint *)(lVar5 + 0x1f0) & uVar4 | uStack_64;
          *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x174);
          *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x17c);
          _local_68 = CONCAT44(uStack_64 >> 0x18 | (uStack_64 & 0xff0000) >> 8 |
                               (uStack_64 & 0xff00) << 8 | uStack_64 << 0x18,
                               local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 |
                               (local_68 & 0xff00) << 8 | local_68 << 0x18);
          *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x184);
          *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x18c);
          *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x194);
          *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 0x19c);
          *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x1a4);
          *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x1ac);
          *(undefined4 *)(lVar5 + 0x224) = *(undefined4 *)(lVar5 + 0x1b4);
          *(undefined4 *)(lVar5 + 0x228) = *(undefined4 *)(lVar5 + 0x1b8);
          *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)(lVar5 + 0x1bc);
          *(undefined4 *)(lVar5 + 0x230) = *(undefined4 *)(lVar5 + 0x1c0);
          *(undefined4 *)(lVar5 + 0x234) = *(undefined4 *)(lVar5 + 0x1c4);
          *(undefined4 *)(lVar5 + 0x238) = *(undefined4 *)(lVar5 + 0x1c8);
          *(undefined4 *)(lVar5 + 0x23c) = *(undefined4 *)(lVar5 + 0x1cc);
          *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(lVar5 + 0x1d0);
          FUN_144e9e410(puVar2,&local_80,0x20);
          FUN_144baf000(&local_80,puVar2);
          if ((int)local_e0 + 0x20U != 0) {
            do {
              uVar6 = uVar6 + 1;
            } while (uVar6 < (int)local_e0 + 0x20U);
          }
        }
      }
    }
    else {
      uVar15 = uVar6;
      uVar14 = param_4;
      if (uVar18 != 0xffffffffffffffff) {
        if (param_4 != (uVar18 + 0x30 & 0xfffffffffffffff0)) goto LAB_144e9de2b;
        uVar14 = uVar18;
        local_e8 = uVar6;
        if (0x301 < *(uint *)(lVar5 + 0x250)) {
          local_e8 = 0x10;
          uVar15 = local_e8;
        }
      }
      uVar18 = uVar6;
      if ((((DAT_14c7973a8 & 0x20000000) != 0) ||
          (((DAT_14c7973a0._4_4_ >> 0x1c & 1) != 0 &&
           (((uint)DAT_14c7973a0 & 0x40000000) != 0 || (DAT_14c7973a0._4_4_ & 0x800) != 0)))) &&
         (uVar9 + uVar15 < uVar14)) {
        uVar16 = (uVar14 - uVar9) - uVar15;
        uVar17 = uVar16 >> 6;
        if (uVar17 != 0) {
          FUN_144e9e410(lVar5 + 0x1d4U,uVar15 + local_f0,uVar9);
          lVar11 = uVar9 + lVar7 + local_e8;
          local_118 = FUN_144ba3e50(local_e0);
          local_110 = lVar5 + 0x1d4U;
          local_108 = lVar11;
          FUN_14264a940(lVar7,param_2,uVar17,lVar5);
          uVar18 = uVar17 * 0x40;
          uVar6 = local_d8 + uVar18;
          iVar3 = (int)(uVar16 >> 0x1d) + *(int *)(lVar5 + 0x1f8);
          uVar4 = (uint)(uVar17 << 9);
          *(int *)(lVar5 + 500) = *(int *)(lVar5 + 500) + uVar4;
          *(int *)(lVar5 + 0x1f8) = iVar3;
          if (*(uint *)(lVar5 + 500) < uVar4) {
            *(int *)(lVar5 + 0x1f8) = iVar3 + 1;
          }
        }
      }
      puVar1 = (undefined8 *)(lVar5 + 0x1d4);
      FUN_144e9e410(puVar1,lVar7 + uVar6 + local_e8,uVar14 - (uVar6 + local_e8));
      if (uVar14 == param_4) {
        local_118 = FUN_144ba3e50(local_e0);
        local_110 = CONCAT44(local_110._4_4_,1);
        FUN_1425a3bf0(lVar7 + uVar18,param_2 + uVar18,param_4 - uVar18,lVar5);
      }
      else {
        if (lVar7 != param_2) {
          memcpy((void *)(param_2 + uVar18),(void *)(lVar7 + uVar18),uVar14 - uVar18);
        }
        lVar7 = param_2 + uVar14;
        FUN_144baf000(lVar7,puVar1);
        *puVar1 = *(undefined8 *)(lVar5 + 0x164);
        *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0x16c);
        *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x174);
        *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x17c);
        *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x184);
        *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x18c);
        *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x194);
        *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 0x19c);
        *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x1a4);
        *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x1ac);
        *(undefined4 *)(lVar5 + 0x224) = *(undefined4 *)(lVar5 + 0x1b4);
        *(undefined4 *)(lVar5 + 0x228) = *(undefined4 *)(lVar5 + 0x1b8);
        *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)(lVar5 + 0x1bc);
        *(undefined4 *)(lVar5 + 0x230) = *(undefined4 *)(lVar5 + 0x1c0);
        *(undefined4 *)(lVar5 + 0x234) = *(undefined4 *)(lVar5 + 0x1c4);
        *(undefined4 *)(lVar5 + 0x238) = *(undefined4 *)(lVar5 + 0x1c8);
        *(undefined4 *)(lVar5 + 0x23c) = *(undefined4 *)(lVar5 + 0x1cc);
        *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(lVar5 + 0x1d0);
        FUN_144e9e410(puVar1,lVar7,0x20);
        FUN_144baf000(lVar7,puVar1);
        uVar14 = uVar14 + 0x20;
        if (uVar14 < param_4) {
          pcVar12 = (char *)(param_2 + uVar14);
          for (lVar7 = param_4 - uVar14; lVar7 != 0; lVar7 = lVar7 + -1) {
            *pcVar12 = ((char)param_4 - (char)uVar14) + -1;
            pcVar12 = pcVar12 + 1;
          }
        }
        local_118 = FUN_144ba3e50(local_e0);
        local_110 = CONCAT44(local_110._4_4_,1);
        FUN_1425a3bf0(param_2 + uVar18,param_2 + uVar18,param_4 - uVar18,lVar5);
      }
    }
  }
LAB_144e9de2b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_138);
}



// FUNCTION 144e9de50 FUN_144e9de50 body=1256 status=ok
// SIG undefined FUN_144e9de50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9de50(undefined8 param_1,int param_2,uint param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  uint local_98;
  ulonglong local_88 [10];
  
  local_88[8] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_144ba3e90();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar3 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      iVar2 = FUN_144ba3dc0(param_1);
      if (iVar2 == 0) {
        *(undefined8 *)(lVar4 + 0x250) = *param_4;
        *(undefined4 *)(lVar4 + 600) = *(undefined4 *)(param_4 + 1);
        *(undefined1 *)(lVar4 + 0x25c) = *(undefined1 *)((longlong)param_4 + 0xc);
        *(undefined8 *)(lVar4 + 0x248) = 0xd;
      }
      else {
        *(ulonglong *)(lVar4 + 0x248) = (ulonglong)uVar3;
        uVar5 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 9),
                               *(undefined1 *)((longlong)param_4 + 10));
        *(uint *)(lVar4 + 0x250) = uVar5;
        if (0x301 < uVar5) {
          if (uVar3 < 0x10) goto LAB_144e9ded6;
          *(char *)((longlong)param_4 + 0xc) = (char)(uVar3 - 0x10);
          *(char *)((longlong)param_4 + 0xb) = (char)(uVar3 - 0x10 >> 8);
        }
        *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0xf4);
        *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
        *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
        *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
        *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
        *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
        *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
        *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
        *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
        *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
        *(undefined8 *)(lVar4 + 0x224) = *(undefined8 *)(lVar4 + 0x144);
        *(undefined8 *)(lVar4 + 0x22c) = *(undefined8 *)(lVar4 + 0x14c);
        *(undefined8 *)(lVar4 + 0x234) = *(undefined8 *)(lVar4 + 0x154);
        *(undefined8 *)(lVar4 + 0x23c) = *(undefined8 *)(lVar4 + 0x15c);
        FUN_144e9e410((undefined8 *)(lVar4 + 0x1d4),param_4,0xd);
      }
    }
  }
  else if (param_2 == 0x17) {
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    if (-1 < (int)param_3) {
      if (param_3 < 0x41) {
        memcpy(local_88,param_4,(longlong)(int)param_3);
      }
      else {
        FUN_144baee60(lVar4 + 0xf4);
        FUN_144e9e410(lVar4 + 0xf4,param_4,(longlong)(int)param_3);
        FUN_144baf000(local_88,lVar4 + 0xf4);
      }
      lVar8 = 2;
      lVar6 = 2;
      puVar9 = local_88;
      do {
        *puVar9 = *puVar9 ^ 0x3636363636363636;
        puVar9[1] = puVar9[1] ^ 0x3636363636363636;
        puVar9[2] = puVar9[2] ^ 0x3636363636363636;
        puVar9[3] = puVar9[3] ^ 0x3636363636363636;
        lVar6 = lVar6 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar6 != 0);
      FUN_144baee60(lVar4 + 0xf4);
      FUN_144e9e410(lVar4 + 0xf4,local_88,0x40);
      puVar9 = local_88;
      do {
        *puVar9 = *puVar9 ^ 0x6a6a6a6a6a6a6a6a;
        puVar9[1] = puVar9[1] ^ 0x6a6a6a6a6a6a6a6a;
        puVar9[2] = puVar9[2] ^ 0x6a6a6a6a6a6a6a6a;
        puVar9[3] = puVar9[3] ^ 0x6a6a6a6a6a6a6a6a;
        lVar8 = lVar8 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar8 != 0);
      lVar6 = lVar4 + 0x164;
      FUN_144baee60(lVar6);
      puVar9 = local_88;
      lVar8 = 0x40;
      if ((ulonglong)*(uint *)(lVar4 + 0x1cc) != 0) {
        uVar7 = 0x40 - (ulonglong)*(uint *)(lVar4 + 0x1cc);
        if (0x40 < uVar7) {
          uVar7 = 0x40;
        }
        FUN_144baeed0(lVar6,local_88,uVar7);
        puVar9 = (ulonglong *)((longlong)local_88 + uVar7);
        lVar8 = 0x40 - uVar7;
      }
      uVar7 = (ulonglong)((uint)lVar8 & 0x3f);
      uVar10 = lVar8 - uVar7;
      if (uVar10 != 0) {
        FUN_1425a8100(lVar6,puVar9,uVar10 >> 6);
        puVar9 = (ulonglong *)((longlong)puVar9 + uVar10);
        iVar2 = (int)(uVar10 >> 0x1d) + *(int *)(lVar4 + 0x188);
        uVar3 = (int)uVar10 * 8;
        *(int *)(lVar4 + 0x184) = *(int *)(lVar4 + 0x184) + uVar3;
        *(int *)(lVar4 + 0x188) = iVar2;
        if (*(uint *)(lVar4 + 0x184) < uVar3) {
          *(int *)(lVar4 + 0x188) = iVar2 + 1;
        }
      }
      if (uVar7 != 0) {
        FUN_144baeed0(lVar6,puVar9,uVar7);
      }
      FUN_14259f0c0(local_88,0x40);
    }
  }
  else if (param_2 == 0x19) {
    if ((-1 < (int)param_3) && (0x1f < param_3)) {
      uVar1 = CONCAT11(*(undefined1 *)(param_4[1] + 0xb),*(undefined1 *)(param_4[1] + 0xc));
      iVar2 = FUN_144ba3dc0(param_1);
      if ((iVar2 != 0) &&
         (0x301 < CONCAT11(*(undefined1 *)(param_4[1] + 9),*(undefined1 *)(param_4[1] + 10)))) {
        if (uVar1 == 0) {
          uVar3 = *(uint *)(param_4 + 3) >> 2;
          if (uVar3 != 1 && uVar3 != 2) goto LAB_144e9ded6;
        }
        else {
          if (uVar1 < 0x1000) goto LAB_144e9ded6;
          uVar3 = 1;
          if ((0x1fff < uVar1) && (uVar3 = 1, ((byte)DAT_14c7973a8 & 0x20) != 0)) {
            uVar3 = 2;
          }
        }
        *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0xf4);
        *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
        *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
        *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
        *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
        *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
        *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
        *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
        *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
        *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
        *(undefined8 *)(lVar4 + 0x224) = *(undefined8 *)(lVar4 + 0x144);
        *(undefined8 *)(lVar4 + 0x22c) = *(undefined8 *)(lVar4 + 0x14c);
        *(undefined8 *)(lVar4 + 0x234) = *(undefined8 *)(lVar4 + 0x154);
        *(undefined8 *)(lVar4 + 0x23c) = *(undefined8 *)(lVar4 + 0x15c);
        FUN_144e9e410((undefined8 *)(lVar4 + 0x1d4),param_4[1],0xd);
        *(uint *)(param_4 + 3) = uVar3 * 4;
      }
    }
  }
  else if (param_2 == 0x1a) {
    local_98 = *(uint *)(param_4 + 3) >> 2;
    FUN_144e9e4c0(lVar4,*param_4,param_4[1],param_4[2]);
  }
LAB_144e9ded6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_88[8] ^ (ulonglong)auStack_b8);
}



// FUNCTION 144e9e350 FUN_144e9e350 body=90 status=ok
// SIG undefined FUN_144e9e350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144e9e350(void)

{
  int iVar1;
  
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    iVar1 = FUN_14264a940(0,0,0,0,0,0,0);
    if (iVar1 != 0) {
      return &DAT_14c70aee0;
    }
  }
  return (undefined *)0x0;
}



// FUNCTION 144e9e3b0 FUN_144e9e3b0 body=90 status=ok
// SIG undefined FUN_144e9e3b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144e9e3b0(void)

{
  int iVar1;
  
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    iVar1 = FUN_14264a940(0,0,0,0,0,0,0);
    if (iVar1 != 0) {
      return &DAT_14c70af40;
    }
  }
  return (undefined *)0x0;
}



// FUNCTION 144e9e410 FUN_144e9e410 body=172 status=ok
// SIG undefined FUN_144e9e410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9e410(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x68) != 0) {
    uVar1 = 0x40 - (ulonglong)*(uint *)(param_1 + 0x68);
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    FUN_144baeed0(param_1,param_2,uVar1);
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
  }
  uVar1 = (ulonglong)((uint)param_3 & 0x3f);
  param_3 = param_3 - uVar1;
  if (param_3 != 0) {
    FUN_1425a8100(param_1,param_2,param_3 >> 6);
    param_2 = param_2 + param_3;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)(param_3 >> 0x1d);
    uVar2 = (int)param_3 * 8;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar2;
    if (*(uint *)(param_1 + 0x20) < uVar2) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  if (uVar1 != 0) {
    FUN_144baeed0(param_1,param_2,uVar1);
  }
  return;
}



// FUNCTION 144e9e4c0 FUN_144e9e4c0 body=2231 status=ok
// SIG undefined FUN_144e9e4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e9e4c0(uint *param_1,undefined1 *param_2,longlong param_3,uint param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 **ppuVar9;
  byte bVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong *plVar27;
  uint *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 *puVar31;
  longlong lVar32;
  undefined1 auStack_828 [32];
  undefined1 local_808;
  undefined1 local_807;
  undefined1 local_806;
  uint local_804;
  uint local_800;
  uint local_7fc;
  uint local_7f8;
  uint local_7f4;
  uint local_7f0;
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  undefined1 *local_7e0;
  uint *local_7d8;
  ulonglong local_7d0;
  undefined1 *local_7c8;
  uint local_7c0;
  longlong *local_7b8;
  longlong local_7a8;
  uint auStack_7a0 [2];
  longlong local_798 [14];
  undefined8 local_728;
  undefined4 local_720 [30];
  longlong local_6a8;
  undefined1 *local_6a0;
  undefined4 local_698 [2];
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  longlong local_678 [34];
  undefined8 local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  uint auStack_52c [16];
  uint auStack_4ec [225];
  undefined1 local_168 [32];
  undefined1 local_148 [64];
  uint auStack_108 [48];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144e9e4dd;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_828;
  uVar23 = 0;
  local_7fc = 0;
  uVar18 = param_5 * 4;
  local_7b8 = (longlong *)CONCAT44(local_7b8._4_4_,uVar18);
  local_7d8 = param_1;
  local_7c8 = param_2;
  iVar8 = FUN_144bac850(&local_568,param_5 << 6);
  if (0 < iVar8) {
    bVar10 = (char)param_5 + 1;
    local_800 = param_4 >> (bVar10 & 0x1f);
    lVar30 = -(ulonglong)((uint)local_168 & 0x1f);
    puVar19 = local_148 + lVar30;
    uVar20 = (param_4 - (local_800 << (bVar10 & 0x1f))) + local_800;
    local_7d0 = (ulonglong)uVar20;
    if ((local_800 < uVar20) && ((uVar20 + 0x16 & 0x3f) < uVar18 - 1)) {
      local_800 = local_800 + 1;
      local_7d0 = (ulonglong)(uVar20 + param_5 * -4 + 1);
    }
    uVar16 = local_7d0;
    uVar20 = local_800;
    uVar21 = (uint)local_7d0;
    local_7a8 = param_3;
    local_6a8 = param_3;
    local_6a0 = local_7c8 + 0x15;
    *(ulonglong *)(local_7c8 + 5) = local_568;
    *(ulonglong *)(local_7c8 + 0xd) = CONCAT44(uStack_55c,uStack_560);
    local_690 = (undefined4)local_568;
    uStack_68c = local_568._4_4_;
    uStack_688 = uStack_560;
    uStack_684 = uStack_55c;
    if (1 < uVar18) {
      plVar24 = local_798;
      ppuVar9 = &local_6a0;
      plVar27 = &local_7a8;
      uVar29 = (ulonglong)(uVar18 - 1);
      plVar14 = local_678;
      puVar22 = &local_558;
      do {
        lVar32 = *plVar27;
        uVar2 = *puVar22;
        uVar7 = puVar22[1];
        *plVar24 = lVar32 + (ulonglong)local_800;
        plVar27 = plVar27 + 2;
        plVar14[-1] = lVar32 + (ulonglong)local_800;
        plVar24 = plVar24 + 2;
        puVar11 = *ppuVar9;
        ppuVar9 = ppuVar9 + 5;
        puVar11 = puVar11 + ((local_800 + 0x30 & 0xfffffff0) + 0x15);
        *plVar14 = (longlong)puVar11;
        *(undefined8 *)(puVar11 + -0x10) = uVar2;
        *(undefined8 *)(puVar11 + -8) = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar22 + 4);
        uVar5 = *(undefined4 *)(puVar22 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar22 + 0xc);
        *(undefined4 *)(plVar14 + 2) = *(undefined4 *)puVar22;
        *(undefined4 *)((longlong)plVar14 + 0x14) = uVar4;
        *(undefined4 *)(plVar14 + 3) = uVar5;
        *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar6;
        uVar29 = uVar29 - 1;
        plVar14 = plVar14 + 5;
        puVar22 = puVar22 + 2;
        param_1 = local_7d8;
      } while (uVar29 != 0);
    }
    local_568 = *(ulonglong *)(param_1 + 0x7f);
    if (uVar18 != 0) {
      local_7f4 = param_1[0x79];
      puVar22 = &local_568;
      local_804 = param_1[0x75];
      puVar12 = (uint *)((longlong)auStack_108 + lVar30);
      local_7c0 = param_1[0x78];
      uVar17 = param_1[0x76];
      local_7f0 = param_1[0x7a];
      local_7ec = param_1[0x7b];
      local_7e8 = param_1[0x7c];
      local_808 = (undefined1)param_1[0x81];
      local_807 = *(undefined1 *)((longlong)param_1 + 0x205);
      local_806 = *(undefined1 *)((longlong)param_1 + 0x206);
      local_7f8 = uVar18 - 1;
      local_7e4 = param_1[0x77];
      uVar29 = uVar23;
      puVar15 = &uStack_560;
      uVar25 = local_568 >> 0x38 | (local_568 & 0xff000000000000) >> 0x28 |
               (local_568 & 0xff0000000000) >> 0x18 | (local_568 & 0xff00000000) >> 8 |
               (local_568 & 0xff000000) << 8 | (local_568 & 0xff0000) << 0x18 |
               (local_568 & 0xff00) << 0x28 | local_568 << 0x38;
      do {
        *puVar12 = local_7e4;
        uVar13 = local_800;
        if ((uint)uVar23 == local_7f8) {
          uVar13 = uVar21;
        }
        puVar12[0x10] = local_7f4;
        uVar26 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar26;
        puVar12[0x18] = local_7f0;
        puVar12[0x20] = local_7ec;
        puVar12[0x28] = local_7e8;
        *(char *)(puVar15 + 1) = (char)uVar13;
        puVar12[8] = local_7c0;
        puVar1 = *(undefined8 **)((longlong)auStack_7a0 + (uVar29 - 8));
        puVar12[-0x10] = local_804;
        puVar12[-8] = uVar17;
        puVar12 = puVar12 + 1;
        *(ulonglong *)(puVar15 + -2) =
             uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28 |
             uVar25 << 0x38;
        *(undefined1 *)puVar15 = local_808;
        *(undefined1 *)((longlong)puVar15 + 1) = local_807;
        *(undefined1 *)((longlong)puVar15 + 2) = local_806;
        *(char *)((longlong)puVar15 + 3) = (char)(uVar13 >> 8);
        uVar2 = puVar1[1];
        *(undefined8 *)((longlong)puVar15 + 5) = *puVar1;
        *(undefined8 *)((longlong)puVar15 + 0xd) = uVar2;
        uVar2 = puVar1[3];
        *(undefined8 *)((longlong)puVar15 + 0x15) = puVar1[2];
        *(undefined8 *)((longlong)puVar15 + 0x1d) = uVar2;
        uVar4 = *(undefined4 *)((longlong)puVar1 + 0x24);
        uVar5 = *(undefined4 *)(puVar1 + 5);
        uVar6 = *(undefined4 *)((longlong)puVar1 + 0x2c);
        *(undefined4 *)((longlong)puVar15 + 0x25) = *(undefined4 *)(puVar1 + 4);
        *(undefined4 *)((longlong)puVar15 + 0x29) = uVar4;
        *(undefined4 *)((longlong)puVar15 + 0x2d) = uVar5;
        *(undefined4 *)((longlong)puVar15 + 0x31) = uVar6;
        *(undefined2 *)((longlong)puVar15 + 0x35) = *(undefined2 *)(puVar1 + 6);
        *(undefined1 *)((longlong)puVar15 + 0x37) = *(undefined1 *)((longlong)puVar1 + 0x32);
        *(longlong *)((longlong)auStack_7a0 + (uVar29 - 8)) = (longlong)puVar1 + 0x33;
        *(undefined8 **)((longlong)local_720 + (uVar29 - 8)) = puVar22;
        puVar22 = puVar22 + 0x10;
        *(uint *)((longlong)auStack_7a0 + uVar29) = uVar13 - 0x33 >> 6;
        *(undefined4 *)((longlong)local_720 + uVar29) = 1;
        uVar29 = uVar29 + 0x10;
        puVar15 = puVar15 + 0x20;
        uVar25 = uVar25 + 1;
        param_1 = local_7d8;
      } while (uVar26 < uVar18);
    }
    local_7e0 = puVar19;
    FUN_14264f400(puVar19,&local_728,param_5);
    if (uVar20 <= uVar21) {
      uVar21 = uVar20;
    }
    uVar17 = uVar21 - 0x33 >> 6;
    uVar21 = local_7fc;
    if (0x20 < uVar17) {
      if (uVar18 != 0) {
        puVar15 = local_698;
        uVar23 = (ulonglong)uVar18;
        lVar30 = 0;
        do {
          *(undefined8 *)((longlong)&local_728 + lVar30) =
               *(undefined8 *)((longlong)auStack_7a0 + lVar30 + -8);
          *(undefined4 *)((longlong)local_720 + lVar30) = 0x20;
          lVar30 = lVar30 + 0x10;
          *puVar15 = 0x80;
          puVar15 = puVar15 + 10;
          uVar23 = uVar23 - 1;
          puVar19 = local_7e0;
        } while (uVar23 != 0);
      }
      uVar23 = 0;
      do {
        FUN_14264f400(puVar19,&local_728,param_5);
        FUN_142648ec0(&local_6a8,param_1,param_5);
        if (uVar18 != 0) {
          uVar29 = (ulonglong)uVar18;
          ppuVar9 = &local_6a0;
          uVar16 = 0;
          do {
            plVar24 = (longlong *)((longlong)auStack_7a0 + (uVar16 - 8));
            *plVar24 = *plVar24 + 0x800;
            *ppuVar9 = *ppuVar9 + 0x800;
            uVar2 = *(undefined8 *)((longlong)auStack_7a0 + (uVar16 - 8));
            *(int *)((longlong)auStack_7a0 + uVar16) =
                 *(int *)((longlong)auStack_7a0 + uVar16) + -0x20;
            ppuVar9[-1] = ppuVar9[-1] + 0x800;
            *(undefined8 *)((longlong)&local_728 + uVar16) = uVar2;
            puVar19 = *ppuVar9;
            *(undefined4 *)((longlong)local_720 + uVar16) = 0x20;
            uVar16 = uVar16 + 0x10;
            *(undefined4 *)(ppuVar9 + 1) = 0x80;
            uVar4 = *(undefined4 *)(puVar19 + -0xc);
            uVar5 = *(undefined4 *)(puVar19 + -8);
            uVar6 = *(undefined4 *)(puVar19 + -4);
            *(undefined4 *)(ppuVar9 + 2) = *(undefined4 *)(puVar19 + -0x10);
            *(undefined4 *)((longlong)ppuVar9 + 0x14) = uVar4;
            *(undefined4 *)(ppuVar9 + 3) = uVar5;
            *(undefined4 *)((longlong)ppuVar9 + 0x1c) = uVar6;
            uVar29 = uVar29 - 1;
            ppuVar9 = ppuVar9 + 5;
            puVar19 = local_7e0;
          } while (uVar29 != 0);
        }
        uVar21 = (int)uVar23 + 0x800;
        uVar23 = (ulonglong)uVar21;
        uVar17 = uVar17 - 0x20;
        uVar16 = local_7d0;
        uVar20 = local_800;
      } while (0x20 < uVar17);
    }
    local_7fc = uVar21;
    FUN_14264f400(puVar19,&local_7a8,param_5);
    memset(&local_568,0,0x400);
    local_804 = 0;
    if (uVar18 != 0) {
      lVar30 = 0;
      puVar22 = &local_568;
      lVar32 = 0;
      do {
        uVar20 = local_800;
        if (local_804 == uVar18 - 1) {
          uVar20 = (uint)local_7d0;
        }
        uVar21 = ((uVar20 + *(int *)((longlong)auStack_7a0 + lVar32) * -0x40) - local_7fc) - 0x33;
        memcpy(puVar22,(void *)((ulonglong)(uint)(*(int *)((longlong)auStack_7a0 + lVar32) * 0x40) +
                               *(longlong *)((longlong)auStack_7a0 + lVar32 + -8)),(ulonglong)uVar21
              );
        *(undefined1 *)((longlong)&local_568 + lVar30 + (ulonglong)uVar21) = 0x80;
        uVar20 = uVar20 * 8 + 0x268;
        uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                 uVar20 * 0x1000000;
        if (uVar21 < 0x38) {
          *(uint *)((longlong)auStack_52c + lVar30) = uVar20;
          *(undefined4 *)((longlong)local_720 + lVar32) = 1;
        }
        else {
          *(uint *)((longlong)auStack_4ec + lVar30) = uVar20;
          *(undefined4 *)((longlong)local_720 + lVar32) = 2;
        }
        *(undefined8 **)((longlong)&local_728 + lVar32) = puVar22;
        local_804 = local_804 + 1;
        puVar22 = puVar22 + 0x10;
        lVar30 = lVar30 + 0x80;
        lVar32 = lVar32 + 0x10;
        uVar16 = local_7d0;
        param_1 = local_7d8;
        uVar20 = local_800;
      } while (local_804 < uVar18);
    }
    puVar19 = local_7e0;
    FUN_14264f400(local_7e0,&local_728,param_5);
    memset(&local_568,0,0x400);
    uVar21 = 0;
    if (uVar18 != 0) {
      local_7c0 = param_1[0x5a];
      uVar20 = param_1[0x59];
      puVar15 = local_720;
      local_7e4 = param_1[0x5b];
      puVar22 = &local_568;
      local_7e8 = param_1[0x5c];
      local_7ec = param_1[0x5d];
      local_7f0 = param_1[0x5e];
      local_7f4 = param_1[0x5f];
      local_7f8 = param_1[0x60];
      uVar23 = (ulonglong)uVar18;
      puVar12 = (uint *)(puVar19 + 0x40);
      puVar28 = (uint *)((longlong)&local_568 + 4);
      do {
        uVar18 = puVar12[-0x10];
        *(undefined8 **)(puVar15 + -2) = puVar22;
        puVar22 = puVar22 + 0x10;
        puVar12[-0x10] = uVar20;
        *(undefined1 *)(puVar28 + 7) = 0x80;
        puVar28[0xe] = 0x30000;
        *puVar15 = 1;
        puVar15 = puVar15 + 4;
        puVar28[-1] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                      uVar18 << 0x18;
        uVar18 = puVar12[-8];
        puVar12[-8] = local_7c0;
        *puVar28 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
        uVar18 = *puVar12;
        *puVar12 = local_7e4;
        puVar28[1] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
        uVar18 = puVar12[8];
        puVar12[8] = local_7e8;
        puVar28[2] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
        uVar18 = puVar12[0x10];
        puVar12[0x10] = local_7ec;
        puVar28[3] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
        uVar18 = puVar12[0x18];
        puVar12[0x18] = local_7f0;
        puVar28[4] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
        uVar18 = puVar12[0x20];
        puVar12[0x20] = local_7f4;
        puVar28[5] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
        uVar18 = puVar12[0x28];
        puVar28[6] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
        puVar12[0x28] = local_7f8;
        uVar23 = uVar23 - 1;
        puVar12 = puVar12 + 1;
        puVar28 = puVar28 + 0x20;
      } while (uVar23 != 0);
      puVar19 = local_7e0;
      uVar16 = local_7d0;
      param_1 = local_7d8;
      uVar20 = local_800;
      uVar21 = (uint)local_7b8;
    }
    FUN_14264f400(puVar19,&local_728,param_5);
    local_804 = 0;
    if (uVar21 != 0) {
      local_7b8 = &local_6a8;
      local_7d8 = (uint *)(puVar19 + 0x40);
      puVar31 = (undefined1 *)0x0;
      puVar11 = local_7c8;
      do {
        local_7c8 = puVar11;
        puVar19 = local_7c8;
        puVar12 = local_7d8;
        uVar18 = uVar20;
        if (local_804 == uVar21 - 1) {
          uVar18 = (uint)uVar16;
        }
        memcpy((void *)local_7b8[1],(void *)*local_7b8,(ulonglong)(uVar18 - local_7fc));
        puVar28 = (uint *)(local_7c8 + (uVar18 + 0x15));
        *local_7b8 = local_7b8[1];
        uVar17 = puVar12[-0x10];
        *puVar28 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18;
        uVar17 = puVar12[-8];
        puVar28[1] = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18;
        uVar17 = *puVar12;
        puVar28[2] = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18;
        uVar17 = puVar12[8];
        puVar28[3] = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18;
        uVar17 = puVar12[0x10];
        puVar28[4] = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18;
        uVar17 = puVar12[0x18];
        puVar28[5] = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18;
        uVar17 = puVar12[0x20];
        puVar28[6] = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18;
        uVar17 = puVar12[0x28];
        puVar28[7] = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                     uVar17 << 0x18;
        iVar3 = -(uVar18 + 0x20 & 0xf);
        iVar8 = iVar3 + 0xf;
        uVar23 = (ulonglong)(iVar3 + 0x10);
        puVar11 = (undefined1 *)((longlong)(puVar28 + 8) + uVar23);
        puVar12 = puVar28 + 8;
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(char *)puVar12 = (char)iVar8;
          puVar12 = (uint *)((longlong)puVar12 + 1);
        }
        iVar8 = uVar18 + 0x20 + iVar8;
        local_7d8 = local_7d8 + 1;
        *(uint *)(local_7b8 + 2) = (iVar8 + 1) - local_7fc >> 4;
        local_7b8 = local_7b8 + 5;
        *puVar19 = (char)param_1[0x81];
        puVar19[1] = *(undefined1 *)((longlong)param_1 + 0x205);
        puVar19[2] = *(undefined1 *)((longlong)param_1 + 0x206);
        puVar19[3] = (char)((uint)(iVar8 + 0x11) >> 8);
        puVar19[4] = (char)(iVar8 + 0x11);
        local_804 = local_804 + 1;
        puVar31 = puVar31 + (iVar8 + 0x16);
        puVar19 = local_7e0;
        uVar16 = local_7d0;
        local_7c8 = puVar31;
      } while (local_804 < uVar21);
    }
    FUN_142648ec0(&local_6a8,param_1,param_5);
    FUN_14259f0c0(&local_568,0x400);
    FUN_14259f0c0(puVar19,0x100);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_828);
}



// FUNCTION 144e9ed90 FUN_144e9ed90 body=276 status=ok
// SIG undefined FUN_144e9ed90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9ed90(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      iVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      if (iVar1 == 0) {
        FUN_144ed66b0(param_3,param_2,0x40000000,uVar3,uVar2,FUN_145267a80);
      }
      else {
        FUN_144ed64e0();
      }
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    iVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    if (iVar1 == 0) {
      FUN_144ed66b0(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,FUN_145267a80);
    }
    else {
      FUN_144ed64e0();
    }
  }
  return 1;
}



// FUNCTION 144e9eeb0 FUN_144e9eeb0 body=271 status=ok
// SIG undefined FUN_144e9eeb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9eeb0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_144ed6f20(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,FUN_145267a80
                   );
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9efc0 FUN_144e9efc0 body=142 status=ok
// SIG undefined FUN_144e9efc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9efc0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_144ba3db0();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_145267a80(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}



// FUNCTION 144e9f050 FUN_144e9f050 body=314 status=ok
// SIG undefined FUN_144e9f050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f050(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x144e9f067;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_144ed6db0(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,FUN_145267a80);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_144ed6db0(param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,FUN_145267a80,uVar4
                 );
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e9f190 FUN_144e9f190 body=276 status=ok
// SIG undefined FUN_144e9f190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f190(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      iVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      if (iVar1 == 0) {
        FUN_144ed66b0(param_3,param_2,0x40000000,uVar3,uVar2,FUN_145267a80);
      }
      else {
        FUN_144ed64e0();
      }
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    iVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    if (iVar1 == 0) {
      FUN_144ed66b0(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,FUN_145267a80);
    }
    else {
      FUN_144ed64e0();
    }
  }
  return 1;
}



// FUNCTION 144e9f2b0 FUN_144e9f2b0 body=271 status=ok
// SIG undefined FUN_144e9f2b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f2b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_144ed6f20(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,FUN_145267a80
                   );
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9f3c0 FUN_144e9f3c0 body=142 status=ok
// SIG undefined FUN_144e9f3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f3c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_144ba3db0();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_145267a80(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}



// FUNCTION 144e9f450 FUN_144e9f450 body=314 status=ok
// SIG undefined FUN_144e9f450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f450(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x144e9f467;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_144ed6db0(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,FUN_145267a80);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_144ed6db0(param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,FUN_145267a80,uVar4
                 );
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e9f590 FUN_144e9f590 body=276 status=ok
// SIG undefined FUN_144e9f590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f590(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      iVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      if (iVar1 == 0) {
        FUN_144ed66b0(param_3,param_2,0x40000000,uVar3,uVar2,FUN_145267a80);
      }
      else {
        FUN_144ed64e0();
      }
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    iVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    if (iVar1 == 0) {
      FUN_144ed66b0(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,FUN_145267a80);
    }
    else {
      FUN_144ed64e0();
    }
  }
  return 1;
}



// FUNCTION 144e9f6b0 FUN_144e9f6b0 body=271 status=ok
// SIG undefined FUN_144e9f6b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f6b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_144ed6f20(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,FUN_145267a80
                   );
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9f7c0 FUN_144e9f7c0 body=142 status=ok
// SIG undefined FUN_144e9f7c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f7c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_144ba3db0();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_145267a80(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}



// FUNCTION 144e9f850 FUN_144e9f850 body=314 status=ok
// SIG undefined FUN_144e9f850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f850(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x144e9f867;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_144ed6db0(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,FUN_145267a80);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_144ed6db0(param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,FUN_145267a80,uVar4
                 );
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144e9f990 FUN_144e9f990 body=312 status=ok
// SIG undefined FUN_144e9f990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9f990(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 local_res20 [2];
  
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar6) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      iVar1 = FUN_144ba3f00(param_1,0x2000);
      iVar7 = (int)uVar6 * 8;
      if (iVar1 != 0) {
        iVar7 = (int)uVar6;
      }
      uVar2 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      FUN_144ed7280(param_3,param_2,(longlong)iVar7,uVar4,uVar3,local_res20,uVar2,FUN_145267a80);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar6;
      param_3 = param_3 + uVar6;
      param_2 = param_2 + uVar6;
      uVar5 = param_4;
      if (uVar6 <= param_4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9fad0 FUN_144e9fad0 body=312 status=ok
// SIG undefined FUN_144e9fad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9fad0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 local_res20 [2];
  
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar6) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      iVar1 = FUN_144ba3f00(param_1,0x2000);
      iVar7 = (int)uVar6 * 8;
      if (iVar1 != 0) {
        iVar7 = (int)uVar6;
      }
      uVar2 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      FUN_144ed7280(param_3,param_2,(longlong)iVar7,uVar4,uVar3,local_res20,uVar2,FUN_145267a80);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar6;
      param_3 = param_3 + uVar6;
      param_2 = param_2 + uVar6;
      uVar5 = param_4;
      if (uVar6 <= param_4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9fc10 FUN_144e9fc10 body=312 status=ok
// SIG undefined FUN_144e9fc10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9fc10(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 local_res20 [2];
  
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar6) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      iVar1 = FUN_144ba3f00(param_1,0x2000);
      iVar7 = (int)uVar6 * 8;
      if (iVar1 != 0) {
        iVar7 = (int)uVar6;
      }
      uVar2 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      FUN_144ed7280(param_3,param_2,(longlong)iVar7,uVar4,uVar3,local_res20,uVar2,FUN_145267a80);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar6;
      param_3 = param_3 + uVar6;
      param_2 = param_2 + uVar6;
      uVar5 = param_4;
      if (uVar6 <= param_4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9fd50 FUN_144e9fd50 body=271 status=ok
// SIG undefined FUN_144e9fd50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9fd50(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_144ed71b0(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,FUN_145267a80
                   );
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9fe60 FUN_144e9fe60 body=271 status=ok
// SIG undefined FUN_144e9fe60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9fe60(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_144ed71b0(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,FUN_145267a80
                   );
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144e9ff70 FUN_144e9ff70 body=271 status=ok
// SIG undefined FUN_144e9ff70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144e9ff70(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_144ed71b0(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,FUN_145267a80
                   );
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144ea0080 FUN_144ea0080 body=178 status=ok
// SIG undefined FUN_144ea0080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ea0080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ea009e;
  local_28[0] = FUN_144ba3e70();
  uVar1 = FUN_144ba3e90(param_1);
  uVar2 = FUN_144ba3e60(param_1);
  uVar3 = FUN_144ba3e50(param_1);
  FUN_144ed69a0(param_3,param_2,param_4,uVar1,uVar3,uVar2,local_28,FUN_145267a80);
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 144ea0140 FUN_144ea0140 body=322 status=ok
// SIG undefined FUN_144ea0140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea0140(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ea015a;
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x118) == 0) {
      memcpy(*(void **)(lVar2 + 0x2d8),param_3,(longlong)*(int *)(lVar2 + 0x2e0));
    }
    else {
      FUN_144ed7560(lVar2 + 0x120);
    }
    *(undefined4 *)(lVar2 + 0x11c) = 1;
    *(undefined4 *)(lVar2 + 0x2e8) = 0;
    return 1;
  }
  iVar1 = FUN_144ba3de0(param_1);
  iVar1 = FUN_145266aa0(param_2,iVar1 << 3,lVar2);
  FUN_144ed7460(lVar2 + 0x120,lVar2,FUN_145267a80);
  if (-1 < iVar1) {
    if ((param_3 != (void *)0x0) ||
       ((*(int *)(lVar2 + 0x11c) != 0 &&
        (param_3 = *(void **)(lVar2 + 0x2d8), param_3 != (void *)0x0)))) {
      FUN_144ed7560(lVar2 + 0x120,param_3,(longlong)*(int *)(lVar2 + 0x2e0));
      *(undefined4 *)(lVar2 + 0x11c) = 1;
    }
    *(undefined4 *)(lVar2 + 0x118) = 1;
    return 1;
  }
  FUN_144ba24f0(6,0xb0,0xb0,"crypto\\evp\\e_aria.c",0xdd,uVar3);
  return 0;
}



// FUNCTION 144ea0290 FUN_144ea0290 body=1212 status=ok
// SIG undefined FUN_144ea0290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea0290(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  size_t _Size;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  _Size = (size_t)param_3;
  lVar4 = FUN_144ba3e90();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar4 + 0x118) = 0;
    uVar12 = FUN_144ba3d90(*param_1);
    *(undefined4 *)(lVar4 + 0x2e0) = uVar12;
    uVar8 = FUN_144ba3e50(param_1);
    *(undefined8 *)(lVar4 + 0x2d8) = uVar8;
    *(undefined4 *)(lVar4 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x2e8) = 0;
    *(undefined4 *)(lVar4 + 0x2ec) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = FUN_144ba3e90(param_4);
    if (*(longlong *)(lVar4 + 0x2a0) != 0) {
      if (*(longlong *)(lVar4 + 0x2a0) != lVar4) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x2a0) = lVar5;
    }
    lVar9 = FUN_144ba3e50(param_1);
    if (*(longlong *)(lVar4 + 0x2d8) == lVar9) {
      uVar8 = FUN_144ba3e50(param_4);
      *(undefined8 *)(lVar5 + 0x2d8) = uVar8;
      return 1;
    }
    pvVar6 = (void *)FUN_144ea64e0((longlong)*(int *)(lVar4 + 0x2e0),"crypto\\evp\\e_aria.c",0x17a);
    *(void **)(lVar5 + 0x2d8) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      memcpy(pvVar6,*(void **)(lVar4 + 0x2d8),(longlong)*(int *)(lVar4 + 0x2e0));
      return 1;
    }
    uVar12 = 0x17b;
    goto LAB_144ea0398;
  case 9:
    if (param_3 < 1) {
      return 0;
    }
    if ((param_3 < 0x11) || (param_3 <= *(int *)(lVar4 + 0x2e0))) {
LAB_144ea03b9:
      *(int *)(lVar4 + 0x2e0) = param_3;
      return 1;
    }
    lVar5 = *(longlong *)(lVar4 + 0x2d8);
    lVar9 = FUN_144ba3e50(param_1);
    if (lVar5 != lVar9) {
      FUN_144ea6530(lVar5,"crypto\\evp\\e_aria.c",0x10c);
    }
    lVar5 = FUN_144ea64e0(_Size,"crypto\\evp\\e_aria.c",0x10d);
    *(longlong *)(lVar4 + 0x2d8) = lVar5;
    if (lVar5 != 0) goto LAB_144ea03b9;
    uVar12 = 0x10e;
LAB_144ea0398:
    FUN_144ba24f0(6,0xc5,0x41,"crypto\\evp\\e_aria.c",uVar12);
    break;
  case 0x10:
    if (((param_3 - 1U < 0x10) && (iVar3 = FUN_144ba3dc0(param_1), iVar3 != 0)) &&
       (-1 < *(int *)(lVar4 + 0x2e4))) {
      pvVar6 = (void *)FUN_144ba3e60(param_1);
      memcpy(param_4,pvVar6,_Size);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1U < 0x10) && (iVar3 = FUN_144ba3dc0(param_1), iVar3 == 0)) {
      pvVar6 = (void *)FUN_144ba3e60(param_1);
      memcpy(pvVar6,param_4,_Size);
      *(int *)(lVar4 + 0x2e4) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == -1) {
      memcpy(*(void **)(lVar4 + 0x2d8),param_4,(longlong)*(int *)(lVar4 + 0x2e0));
    }
    else {
      if (param_3 < 4) {
        return 0;
      }
      if (*(int *)(lVar4 + 0x2e0) - param_3 < 8) {
        return 0;
      }
      memcpy(*(void **)(lVar4 + 0x2d8),param_4,_Size);
      iVar3 = FUN_144ba3dc0(param_1);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_144bac850(*(longlong *)(lVar4 + 0x2d8) + _Size,
                                *(int *)(lVar4 + 0x2e0) - param_3), iVar3 < 1)) {
        return 0;
      }
    }
    *(undefined4 *)(lVar4 + 0x2e8) = 1;
    return 1;
  case 0x13:
    if ((*(int *)(lVar4 + 0x2e8) != 0) && (*(int *)(lVar4 + 0x118) != 0)) {
      FUN_144ed7560(lVar4 + 0x120,*(undefined8 *)(lVar4 + 0x2d8),(longlong)*(int *)(lVar4 + 0x2e0));
      if ((param_3 < 1) || (iVar3 = *(int *)(lVar4 + 0x2e0), iVar3 < param_3)) {
        iVar3 = *(int *)(lVar4 + 0x2e0);
        param_3 = iVar3;
      }
      memcpy(param_4,(void *)(((longlong)iVar3 - (longlong)param_3) + *(longlong *)(lVar4 + 0x2d8)),
             (longlong)param_3);
      lVar9 = *(longlong *)(lVar4 + 0x2d8) + (longlong)*(int *)(lVar4 + 0x2e0) + -8;
      lVar5 = lVar9 + 8;
      do {
        pcVar1 = (char *)(lVar5 + -1);
        *pcVar1 = *pcVar1 + '\x01';
        lVar5 = lVar5 + -1;
        if (*pcVar1 != '\0') break;
      } while (lVar5 != lVar9);
      *(undefined4 *)(lVar4 + 0x11c) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar7 = (undefined8 *)FUN_144ba3e60(param_1);
      *puVar7 = *param_4;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar4 + 0x2ec) = 0xd;
      lVar4 = FUN_144ba3e60(param_1);
      uVar2 = *(undefined1 *)(lVar4 + 0xb);
      lVar4 = FUN_144ba3e60(param_1);
      uVar10 = (uint)CONCAT11(uVar2,*(undefined1 *)(lVar4 + 0xc));
      if (7 < uVar10) {
        uVar11 = uVar10 - 8;
        iVar3 = FUN_144ba3dc0(param_1);
        if (iVar3 == 0) {
          if (uVar11 < 0x10) {
            return 0;
          }
          uVar11 = uVar10 - 0x18;
        }
        lVar4 = FUN_144ba3e60(param_1);
        *(char *)(lVar4 + 0xb) = (char)(uVar11 >> 8);
        lVar4 = FUN_144ba3e60(param_1);
        *(char *)(lVar4 + 0xc) = (char)uVar11;
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(lVar4 + 0x2e8) != 0) && (*(int *)(lVar4 + 0x118) != 0)) &&
       (iVar3 = FUN_144ba3dc0(param_1), iVar3 == 0)) {
      memcpy((void *)(((longlong)*(int *)(lVar4 + 0x2e0) - _Size) + *(longlong *)(lVar4 + 0x2d8)),
             param_4,_Size);
      FUN_144ed7560(lVar4 + 0x120,*(undefined8 *)(lVar4 + 0x2d8),(longlong)*(int *)(lVar4 + 0x2e0));
      *(undefined4 *)(lVar4 + 0x11c) = 1;
      return 1;
    }
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar4 + 0x2e0);
    return 1;
  }
  return 0;
}



// FUNCTION 144ea07a0 FUN_144ea07a0 body=334 status=ok
// SIG undefined FUN_144ea07a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ea07a0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_144ba3e90();
  if (*(int *)(lVar2 + 0x118) != 0) {
    if (-1 < *(int *)(lVar2 + 0x2ec)) {
      uVar3 = FUN_144ea1230(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    if (*(int *)(lVar2 + 0x11c) == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      iVar1 = FUN_144ba3dc0(param_1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(lVar2 + 0x2e4);
        if (iVar1 < 0) {
          return 0xffffffff;
        }
        uVar4 = FUN_144ba3e60(param_1);
        iVar1 = FUN_144ed84f0(lVar2 + 0x120,uVar4,(longlong)iVar1);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
      }
      else {
        uVar4 = FUN_144ba3e60(param_1);
        FUN_144ed8620(lVar2 + 0x120,uVar4,0x10);
        *(undefined4 *)(lVar2 + 0x2e4) = 0x10;
      }
      *(undefined4 *)(lVar2 + 0x11c) = 0;
      return 0;
    }
    if (param_2 == 0) {
      iVar1 = FUN_144ed76f0(lVar2 + 0x120,param_3,param_4);
    }
    else {
      iVar1 = FUN_144ba3dc0(param_1);
      if (iVar1 != 0) {
        iVar1 = FUN_144ed7820();
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        goto LAB_144ea0863;
      }
      iVar1 = FUN_144ed7ba0(lVar2 + 0x120,param_3,param_2,param_4);
    }
    if (iVar1 == 0) {
LAB_144ea0863:
      return param_4 & 0xffffffff;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144ea08f0 FUN_144ea08f0 body=84 status=ok
// SIG undefined FUN_144ea08f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea08f0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144ba3e90();
  lVar1 = *(longlong *)(lVar1 + 0x2d8);
  lVar2 = FUN_144ba3e50(param_1);
  if (lVar1 != lVar2) {
    FUN_144ea6530(lVar1,"crypto\\evp\\e_aria.c",0x1f2);
  }
  return 1;
}



// FUNCTION 144ea0950 FUN_144ea0950 body=276 status=ok
// SIG undefined FUN_144ea0950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea0950(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ea096a;
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_144ea0a17;
  iVar1 = FUN_144ba3de0(param_1);
  iVar1 = FUN_145266aa0(param_2,iVar1 << 3,lVar2);
  uVar3 = 1;
  FUN_144ed88c0(lVar2 + 0x138,*(undefined4 *)(lVar2 + 300),*(undefined4 *)(lVar2 + 0x128),lVar2,
                FUN_145267a80,uVar4);
  if (iVar1 < 0) {
    FUN_144ba24f0(6,0xaf,0xb0,"crypto\\evp\\e_aria.c",CONCAT44(uVar3,0x206));
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x170) = 0;
  *(undefined4 *)(lVar2 + 0x118) = 1;
LAB_144ea0a17:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x128);
    _Dst = (void *)FUN_144ba3e50(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0x11c) = 1;
  }
  return 1;
}



// FUNCTION 144ea0a70 FUN_144ea0a70 body=630 status=ok
// SIG undefined FUN_144ea0a70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ea0a70(undefined8 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  void *_Dst;
  ushort uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  lVar3 = FUN_144ba3e90();
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar3 + 0x128) = 8;
    *(undefined8 *)(lVar3 + 0x118) = 0;
    *(undefined8 *)(lVar3 + 0x120) = 0;
    *(undefined4 *)(lVar3 + 300) = 0xc;
    *(undefined4 *)(lVar3 + 0x130) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = FUN_144ba3e90(param_4);
    if (*(longlong *)(lVar3 + 0x168) != 0) {
      if (*(longlong *)(lVar3 + 0x168) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x168) = lVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (param_3 - 2U < 7) {
      *(int *)(lVar3 + 0x128) = param_3;
      return 1;
    }
    break;
  case 0x10:
    iVar2 = FUN_144ba3dc0(param_1);
    if (((iVar2 != 0) && (*(int *)(lVar3 + 0x120) != 0)) &&
       (lVar5 = FUN_144ed9490(lVar3 + 0x138,param_4,_Size), lVar5 != 0)) {
      *(undefined8 *)(lVar3 + 0x11c) = 0;
      *(undefined4 *)(lVar3 + 0x124) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((_Size & 1) == 0) && (param_3 - 4U < 0xd)) {
      iVar2 = FUN_144ba3dc0(param_1);
      if (iVar2 == 0) {
        if (param_4 != (int *)0x0) {
          *(undefined4 *)(lVar3 + 0x120) = 1;
          _Dst = (void *)FUN_144ba3e60(param_1);
          memcpy(_Dst,param_4,_Size);
        }
      }
      else if (param_4 != (int *)0x0) {
        return 0;
      }
      *(int *)(lVar3 + 300) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      piVar6 = (int *)FUN_144ba3e50(param_1);
      *piVar6 = *param_4;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)FUN_144ba3e60(param_1);
      *puVar4 = *(undefined8 *)param_4;
      *(int *)(puVar4 + 1) = param_4[2];
      *(char *)((longlong)puVar4 + 0xc) = (char)param_4[3];
      *(undefined4 *)(lVar3 + 0x130) = 0xd;
      lVar5 = FUN_144ba3e60(param_1);
      uVar1 = *(undefined1 *)(lVar5 + 0xb);
      lVar5 = FUN_144ba3e60(param_1);
      uVar7 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 0xc));
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        iVar2 = FUN_144ba3dc0(param_1);
        if (iVar2 == 0) {
          if ((int)(uint)uVar7 < *(int *)(lVar3 + 300)) {
            return 0;
          }
          uVar7 = uVar7 - *(short *)(lVar3 + 300);
        }
        lVar5 = FUN_144ba3e60(param_1);
        *(char *)(lVar5 + 0xb) = (char)(uVar7 >> 8);
        lVar5 = FUN_144ba3e60(param_1);
        *(char *)(lVar5 + 0xc) = (char)uVar7;
        return *(undefined4 *)(lVar3 + 300);
      }
    }
    break;
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar3 + 0x128);
    return 1;
  }
  return 0;
}



// FUNCTION 144ea0d40 FUN_144ea0d40 body=579 status=ok
// SIG undefined FUN_144ea0d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea0d40(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_144ba3e90();
  lVar5 = lVar3 + 0x138;
  if (*(int *)(lVar3 + 0x118) == 0) goto LAB_144ea0f76;
  if (-1 < *(int *)(lVar3 + 0x130)) {
    FUN_144ea13d0(param_1,param_2,param_3,param_4);
    goto LAB_144ea0f76;
  }
  if (((param_3 == 0) && (param_2 != 0)) || (*(int *)(lVar3 + 0x11c) == 0)) goto LAB_144ea0f76;
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(lVar3 + 0x128);
      uVar4 = FUN_144ba3e50(param_1);
      iVar2 = FUN_144ed8900(lVar5,uVar4,(longlong)(0xf - iVar2),param_4);
      if (iVar2 == 0) {
        *(undefined4 *)(lVar3 + 0x124) = 1;
      }
    }
    else if ((*(int *)(lVar3 + 0x124) != 0) || (param_4 == 0)) {
      FUN_144ed89b0(lVar5,param_3,param_4);
    }
    goto LAB_144ea0f76;
  }
  iVar2 = FUN_144ba3dc0(param_1);
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x120) == 0)) goto LAB_144ea0f76;
  if (*(int *)(lVar3 + 0x124) == 0) {
    iVar2 = *(int *)(lVar3 + 0x128);
    uVar4 = FUN_144ba3e50(param_1);
    iVar2 = FUN_144ed8900(lVar5,uVar4,(longlong)(0xf - iVar2),param_4);
    if (iVar2 != 0) goto LAB_144ea0f76;
    *(undefined4 *)(lVar3 + 0x124) = 1;
  }
  iVar2 = FUN_144ba3dc0(param_1);
  lVar1 = *(longlong *)(lVar3 + 0x170);
  if (iVar2 != 0) {
    if (lVar1 == 0) {
      iVar2 = FUN_144ed8b10();
    }
    else {
      local_78 = lVar1;
      iVar2 = FUN_144ed8fb0();
    }
    if (iVar2 == 0) {
      *(undefined4 *)(lVar3 + 0x120) = 1;
    }
    goto LAB_144ea0f76;
  }
  if (lVar1 == 0) {
    iVar2 = FUN_144ed8dd0(lVar5,param_3,param_2,param_4);
  }
  else {
    local_78 = lVar1;
    iVar2 = FUN_144ed9280();
  }
  if ((iVar2 == 0) &&
     (lVar5 = FUN_144ed9490(lVar5,local_68,(longlong)*(int *)(lVar3 + 300)), lVar5 != 0)) {
    iVar2 = *(int *)(lVar3 + 300);
    uVar4 = FUN_144ba3e60(param_1);
    iVar2 = FUN_14259f120(local_68,uVar4,(longlong)iVar2);
    if ((iVar2 != 0) || ((int)param_4 == -1)) goto LAB_144ea0f52;
  }
  else {
LAB_144ea0f52:
    FUN_14259f0c0(param_2,param_4);
  }
  *(undefined8 *)(lVar3 + 0x11c) = 0;
  *(undefined4 *)(lVar3 + 0x124) = 0;
LAB_144ea0f76:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ea0fa0 FUN_144ea0fa0 body=211 status=ok
// SIG undefined FUN_144ea0fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea0fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_144ba3db0();
  uVar1 = FUN_144ba3da0(uVar3);
  if ((param_4 == 0) && ((uVar1 & 0xf0007) - 1 < 2)) {
    uVar3 = FUN_144ba3e90(param_1);
    iVar2 = FUN_144ba3de0(param_1);
    iVar2 = FUN_145267760(param_2,iVar2 << 3,uVar3);
  }
  else {
    uVar3 = FUN_144ba3e90(param_1);
    iVar2 = FUN_144ba3de0(param_1);
    iVar2 = FUN_145266aa0(param_2,iVar2 << 3,uVar3);
  }
  if (iVar2 < 0) {
    FUN_144ba24f0(6,0xb9,0xb0,"crypto\\evp\\e_aria.c",0x49);
    return 0;
  }
  return 1;
}



// FUNCTION 144ea1080 FUN_144ea1080 body=8 status=ok
// SIG undefined FUN_144ea1080(void)

undefined * FUN_144ea1080(void)

{
  return &DAT_149bd18c0;
}



// FUNCTION 144ea1090 FUN_144ea1090 body=8 status=ok
// SIG undefined FUN_144ea1090(void)

undefined * FUN_144ea1090(void)

{
  return &DAT_149bd17a0;
}



// FUNCTION 144ea10a0 FUN_144ea10a0 body=8 status=ok
// SIG undefined FUN_144ea10a0(void)

undefined * FUN_144ea10a0(void)

{
  return &DAT_149bd1c20;
}



// FUNCTION 144ea10b0 FUN_144ea10b0 body=8 status=ok
// SIG undefined FUN_144ea10b0(void)

undefined * FUN_144ea10b0(void)

{
  return &DAT_149bd1d40;
}



// FUNCTION 144ea10c0 FUN_144ea10c0 body=8 status=ok
// SIG undefined FUN_144ea10c0(void)

undefined * FUN_144ea10c0(void)

{
  return &DAT_149bd1800;
}



// FUNCTION 144ea10d0 FUN_144ea10d0 body=8 status=ok
// SIG undefined FUN_144ea10d0(void)

undefined * FUN_144ea10d0(void)

{
  return &DAT_149bd1e60;
}



// FUNCTION 144ea10e0 FUN_144ea10e0 body=8 status=ok
// SIG undefined FUN_144ea10e0(void)

undefined * FUN_144ea10e0(void)

{
  return &DAT_149bd1860;
}



// FUNCTION 144ea10f0 FUN_144ea10f0 body=8 status=ok
// SIG undefined FUN_144ea10f0(void)

undefined * FUN_144ea10f0(void)

{
  return &DAT_149bd1f80;
}



// FUNCTION 144ea1100 FUN_144ea1100 body=8 status=ok
// SIG undefined FUN_144ea1100(void)

undefined * FUN_144ea1100(void)

{
  return &DAT_149bd20a0;
}



// FUNCTION 144ea1110 FUN_144ea1110 body=8 status=ok
// SIG undefined FUN_144ea1110(void)

undefined * FUN_144ea1110(void)

{
  return &DAT_149bd1a40;
}



// FUNCTION 144ea1120 FUN_144ea1120 body=8 status=ok
// SIG undefined FUN_144ea1120(void)

undefined * FUN_144ea1120(void)

{
  return &DAT_149bd1920;
}



// FUNCTION 144ea1130 FUN_144ea1130 body=8 status=ok
// SIG undefined FUN_144ea1130(void)

undefined * FUN_144ea1130(void)

{
  return &DAT_149bd1c80;
}



// FUNCTION 144ea1140 FUN_144ea1140 body=8 status=ok
// SIG undefined FUN_144ea1140(void)

undefined * FUN_144ea1140(void)

{
  return &DAT_149bd1da0;
}



// FUNCTION 144ea1150 FUN_144ea1150 body=8 status=ok
// SIG undefined FUN_144ea1150(void)

undefined * FUN_144ea1150(void)

{
  return &DAT_149bd1980;
}



// FUNCTION 144ea1160 FUN_144ea1160 body=8 status=ok
// SIG undefined FUN_144ea1160(void)

undefined * FUN_144ea1160(void)

{
  return &DAT_149bd1ec0;
}



// FUNCTION 144ea1170 FUN_144ea1170 body=8 status=ok
// SIG undefined FUN_144ea1170(void)

undefined * FUN_144ea1170(void)

{
  return &DAT_149bd19e0;
}



// FUNCTION 144ea1180 FUN_144ea1180 body=8 status=ok
// SIG undefined FUN_144ea1180(void)

undefined * FUN_144ea1180(void)

{
  return &DAT_149bd1fe0;
}



// FUNCTION 144ea1190 FUN_144ea1190 body=8 status=ok
// SIG undefined FUN_144ea1190(void)

undefined * FUN_144ea1190(void)

{
  return &DAT_149bd2100;
}



// FUNCTION 144ea11a0 FUN_144ea11a0 body=8 status=ok
// SIG undefined FUN_144ea11a0(void)

undefined * FUN_144ea11a0(void)

{
  return &DAT_149bd1bc0;
}



// FUNCTION 144ea11b0 FUN_144ea11b0 body=8 status=ok
// SIG undefined FUN_144ea11b0(void)

undefined * FUN_144ea11b0(void)

{
  return &DAT_149bd1aa0;
}



// FUNCTION 144ea11c0 FUN_144ea11c0 body=8 status=ok
// SIG undefined FUN_144ea11c0(void)

undefined * FUN_144ea11c0(void)

{
  return &DAT_149bd1ce0;
}



// FUNCTION 144ea11d0 FUN_144ea11d0 body=8 status=ok
// SIG undefined FUN_144ea11d0(void)

undefined * FUN_144ea11d0(void)

{
  return &DAT_149bd1e00;
}



// FUNCTION 144ea11e0 FUN_144ea11e0 body=8 status=ok
// SIG undefined FUN_144ea11e0(void)

undefined * FUN_144ea11e0(void)

{
  return &DAT_149bd1b00;
}



// FUNCTION 144ea11f0 FUN_144ea11f0 body=8 status=ok
// SIG undefined FUN_144ea11f0(void)

undefined * FUN_144ea11f0(void)

{
  return &DAT_149bd1f20;
}



// FUNCTION 144ea1200 FUN_144ea1200 body=8 status=ok
// SIG undefined FUN_144ea1200(void)

undefined * FUN_144ea1200(void)

{
  return &DAT_149bd1b60;
}



// FUNCTION 144ea1210 FUN_144ea1210 body=8 status=ok
// SIG undefined FUN_144ea1210(void)

undefined * FUN_144ea1210(void)

{
  return &DAT_149bd2040;
}



// FUNCTION 144ea1220 FUN_144ea1220 body=8 status=ok
// SIG undefined FUN_144ea1220(void)

undefined * FUN_144ea1220(void)

{
  return &DAT_149bd2160;
}



// FUNCTION 144ea1230 FUN_144ea1230 body=402 status=ok
// SIG undefined FUN_144ea1230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea1230(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = FUN_144ba3e90();
  iVar3 = -1;
  if ((param_2 == param_3) && (0x17 < param_4)) {
    iVar1 = FUN_144ba3dc0(param_1);
    uVar5 = 0x18;
    if (iVar1 != 0) {
      uVar5 = 0x13;
    }
    iVar2 = FUN_144ba5290(param_1,uVar5,8,param_2);
    iVar1 = -1;
    if (0 < iVar2) {
      iVar2 = *(int *)(lVar4 + 0x2ec);
      uVar5 = FUN_144ba3e60(param_1);
      iVar2 = FUN_144ed76f0(lVar4 + 0x120,uVar5,(longlong)iVar2);
      if (iVar2 == 0) {
        param_2 = param_2 + 8;
        lVar6 = param_4 - 0x18;
        iVar2 = FUN_144ba3dc0(param_1);
        iVar1 = iVar3;
        if (iVar2 == 0) {
          iVar2 = FUN_144ed7ba0(lVar4 + 0x120,param_3 + 8,param_2,lVar6);
          if (iVar2 == 0) {
            uVar5 = FUN_144ba3e60(param_1);
            FUN_144ed8620(lVar4 + 0x120,uVar5,0x10);
            uVar5 = FUN_144ba3e60(param_1);
            iVar2 = FUN_14259f120(uVar5,param_3 + 8 + lVar6,0x10);
            iVar1 = (int)lVar6;
            if (iVar2 != 0) {
              FUN_14259f0c0(param_2,lVar6);
              iVar1 = iVar3;
            }
          }
        }
        else {
          iVar3 = FUN_144ed7820();
          if (iVar3 == 0) {
            FUN_144ed8620(lVar4 + 0x120,param_2 + lVar6,0x10);
            iVar1 = (int)lVar6 + 0x18;
          }
        }
      }
    }
    *(undefined4 *)(lVar4 + 0x11c) = 0;
    *(undefined4 *)(lVar4 + 0x2ec) = 0xffffffff;
    return iVar1;
  }
  return -1;
}



// FUNCTION 144ea13d0 FUN_144ea13d0 body=475 status=ok
// SIG undefined FUN_144ea13d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea13d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_144ba3e90();
  lVar7 = lVar3 + 0x138;
  if ((param_2 == param_3) && ((longlong)*(int *)(lVar3 + 300) + 8U <= param_4)) {
    iVar2 = FUN_144ba3dc0(param_1);
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)FUN_144ba3e60(param_1);
      *param_2 = *puVar4;
    }
    lVar5 = FUN_144ba3e50(param_1);
    *(undefined8 *)(lVar5 + 4) = *param_3;
    lVar5 = param_4 - (longlong)(*(int *)(lVar3 + 300) + 8);
    iVar2 = *(int *)(lVar3 + 0x128);
    uVar6 = FUN_144ba3e50(param_1);
    iVar2 = FUN_144ed8900(lVar7,uVar6,(longlong)(0xf - iVar2),lVar5);
    if (iVar2 == 0) {
      iVar2 = *(int *)(lVar3 + 0x130);
      uVar6 = FUN_144ba3e60(param_1);
      FUN_144ed89b0(lVar7,uVar6,(longlong)iVar2);
      param_2 = param_2 + 1;
      iVar2 = FUN_144ba3dc0(param_1);
      lVar1 = *(longlong *)(lVar3 + 0x170);
      if (iVar2 == 0) {
        if (lVar1 == 0) {
          iVar2 = FUN_144ed8dd0(lVar7,param_3 + 1,param_2,lVar5);
        }
        else {
          local_68 = lVar1;
          iVar2 = FUN_144ed9280();
        }
        if (((iVar2 != 0) ||
            (lVar7 = FUN_144ed9490(lVar7,local_58,(longlong)*(int *)(lVar3 + 300)), lVar7 == 0)) ||
           (iVar2 = FUN_14259f120(local_58,lVar5 + (longlong)(param_3 + 1),
                                  (longlong)*(int *)(lVar3 + 300)), iVar2 != 0)) {
          FUN_14259f0c0(param_2,lVar5);
        }
      }
      else {
        if (lVar1 == 0) {
          iVar2 = FUN_144ed8b10();
        }
        else {
          local_68 = lVar1;
          iVar2 = FUN_144ed8fb0();
        }
        if (iVar2 == 0) {
          FUN_144ed9490(lVar7,lVar5 + (longlong)param_2,(longlong)*(int *)(lVar3 + 300));
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}


