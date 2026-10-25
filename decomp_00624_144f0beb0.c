// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144f0beb0 FUN_144f0beb0 body=788 status=ok
// SIG undefined FUN_144f0beb0(void)

int FUN_144f0beb0(longlong *param_1,longlong param_2,char param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 local_48 [16];
  
  lVar12 = param_1[2];
  if (*(char *)((longlong)param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  uVar4 = *(undefined8 *)(lVar12 + 0x28);
  *(longlong *)(lVar12 + 0x28) = param_2;
  FUN_144f14c60(param_2,param_1,"cf_connect()");
  iVar8 = (**(code **)(*(longlong *)param_1[1] + 0x18))
                    ((longlong *)param_1[1],param_2,param_3,param_4);
  if ((iVar8 != 0) || (*param_4 == '\0')) goto LAB_144f0c18a;
  *param_4 = '\0';
  lVar5 = param_1[2];
  lVar10 = param_1[3];
  if ((undefined **)*param_1 == &PTR_s_SSL_PROXY_14c70f130) {
    pcVar13 = *(char **)(lVar10 + 0xf8);
    lVar15 = *(longlong *)(lVar10 + 0x100);
    uVar16 = *(undefined4 *)(lVar10 + 0x108);
  }
  else {
    pcVar13 = *(char **)(lVar10 + 0x70);
    lVar15 = *(longlong *)(lVar10 + 0x78);
    uVar16 = *(undefined4 *)(lVar10 + 0x4c4);
  }
  if (pcVar13 != (char *)0x0) {
    lVar10 = *(longlong *)(lVar5 + 8);
    if (lVar10 != 0) {
      pcVar9 = pcVar13;
      do {
        cVar1 = *pcVar9;
        cVar2 = pcVar9[lVar10 - (longlong)pcVar13];
        if (cVar1 != cVar2) break;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) goto LAB_144f0c067;
    }
    if (*(longlong *)(lVar5 + 0x10) != lVar10) {
      (*(code *)PTR_free_14c6d9f28)();
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar5 + 8));
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 8) = 0;
    lVar10 = (*(code *)PTR__strdup_14c6d9f38)(pcVar13);
    *(longlong *)(lVar5 + 8) = lVar10;
    if (lVar10 == 0) {
      lVar12 = *(longlong *)(lVar5 + 0x10);
      if (lVar12 != 0) {
LAB_144f0c041:
        (*(code *)PTR_free_14c6d9f28)(lVar12);
      }
LAB_144f0c047:
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar5 + 8));
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 8) = 0;
      iVar8 = 0x1b;
      goto LAB_144f0c18a;
    }
    if (lVar15 != 0) {
      lVar14 = lVar15 - (longlong)pcVar13;
      do {
        cVar1 = *pcVar13;
        cVar2 = pcVar13[lVar14];
        if (cVar1 != cVar2) break;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      if (cVar1 != cVar2) {
        lVar10 = (*(code *)PTR__strdup_14c6d9f38)(lVar15);
        *(longlong *)(lVar5 + 0x10) = lVar10;
        if (lVar10 != 0) goto LAB_144f0c067;
        if (*(longlong *)(lVar5 + 8) != 0) {
          lVar12 = 0;
          goto LAB_144f0c041;
        }
        goto LAB_144f0c047;
      }
    }
    *(longlong *)(lVar5 + 0x10) = lVar10;
  }
LAB_144f0c067:
  *(undefined4 *)(lVar5 + 0x40) = uVar16;
  bVar3 = *(byte *)(param_2 + 0x5a0);
  if (param_3 == '\0') {
    if (7 < bVar3) {
      FUN_144f14b70(param_2,"Unrecognized parameter value passed via CURLOPT_SSLVERSION");
      iVar8 = 0x23;
      goto LAB_144f0c18a;
    }
    if (((*(uint *)(param_2 + 0x59c) & 0xfffeffff) != 0) &&
       (*(uint *)(param_2 + 0x59c) >> 0x10 < (uint)bVar3)) {
      FUN_144f14b70(param_2,"CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION");
      iVar8 = 0x23;
      goto LAB_144f0c18a;
    }
    iVar8 = (**(code **)(PTR_DAT_14c70f1a0 + 0x68))(param_1,param_2,param_4);
  }
  else if (bVar3 < 8) {
    if (((*(uint *)(param_2 + 0x59c) & 0xfffeffff) == 0) ||
       ((uint)bVar3 <= *(uint *)(param_2 + 0x59c) >> 0x10)) {
      *(undefined4 *)param_1[2] = 1;
      iVar8 = (**(code **)(PTR_DAT_14c70f1a0 + 0x60))(param_1,param_2);
      *param_4 = iVar8 == 0;
    }
    else {
      FUN_144f14b70(param_2,"CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION");
      iVar8 = 0x23;
      *param_4 = '\0';
    }
  }
  else {
    FUN_144f14b70(param_2,"Unrecognized parameter value passed via CURLOPT_SSLVERSION");
    iVar8 = 0x23;
    *param_4 = '\0';
  }
  if ((iVar8 == 0) && (*param_4 != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    puVar11 = (undefined4 *)FUN_144f07150(local_48);
    uVar16 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    *(undefined4 *)(lVar12 + 0x30) = *puVar11;
    *(undefined4 *)(lVar12 + 0x34) = uVar16;
    *(undefined4 *)(lVar12 + 0x38) = uVar6;
    *(undefined4 *)(lVar12 + 0x3c) = uVar7;
  }
LAB_144f0c18a:
  FUN_144f14c60(param_2,param_1,"cf_connect() -> %d, done=%d",iVar8,*param_4);
  *(undefined8 *)(param_1[2] + 0x28) = uVar4;
  return iVar8;
}



// FUNCTION 144f0c1d0 FUN_144f0c1d0 body=88 status=ok
// SIG undefined FUN_144f0c1d0(void)

undefined8 FUN_144f0c1d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
  cVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0x48))();
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  }
  else {
    uVar3 = 1;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
  return uVar3;
}



// FUNCTION 144f0c230 FUN_144f0c230 body=73 status=ok
// SIG undefined FUN_144f0c230(void)

void FUN_144f0c230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
  *param_5 = 0;
  (**(code **)(PTR_DAT_14c70f1a0 + 0xe0))();
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
  return;
}



// FUNCTION 144f0c280 FUN_144f0c280 body=152 status=ok
// SIG undefined FUN_144f0c280(void)

longlong FUN_144f0c280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
  *param_5 = 0;
  lVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0xd8))();
  if (lVar2 == 0) {
    *param_5 = 0;
  }
  FUN_144f14c60(param_2,param_1,"cf_recv(len=%zu) -> %zd, %d",param_4,lVar2,*param_5);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
  return lVar2;
}



// FUNCTION 144f0c320 FUN_144f0c320 body=94 status=ok
// SIG undefined FUN_144f0c320(void)

undefined8 FUN_144f0c320(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((longlong)*(longlong **)(param_1 + 8) + 0x24) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000144f0c33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    return uVar1;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
    uVar2 = (**(code **)(PTR_DAT_14c70f1a0 + 0x70))(param_1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f0c380 FUN_144f0c380 body=132 status=ok
// SIG undefined FUN_144f0c380(void)

undefined8 FUN_144f0c380(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 1) {
    if (*(longlong *)(PTR_DAT_14c70f1a0 + 0xc0) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
    (**(code **)(PTR_DAT_14c70f1a0 + 0xc0))();
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    if (*(longlong *)(PTR_DAT_14c70f1a0 + 200) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
    (**(code **)(PTR_DAT_14c70f1a0 + 200))();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
  return 0;
}



// FUNCTION 144f0c460 FUN_144f0c460 body=133 status=ok
// SIG undefined FUN_144f0c460(void)

bool FUN_144f0c460(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = param_2;
  iVar4 = (**(code **)(PTR_DAT_14c70f1a0 + 0x38))();
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28) = uVar1;
  if (iVar4 < 1) {
    if (iVar4 == 0) {
      *param_3 = 0;
      bVar5 = false;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 8);
      if (plVar2 == (longlong *)0x0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3);
      }
      bVar5 = cVar3 != '\0';
    }
  }
  else {
    *param_3 = 1;
    bVar5 = true;
  }
  return bVar5;
}



// FUNCTION 144f0c4f0 FUN_144f0c4f0 body=142 status=ok
// SIG undefined FUN_144f0c4f0(void)

undefined8 FUN_144f0c4f0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0xffffffffffffffff;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (*(char *)(param_2 + uVar1) != '\0');
  if ((uVar1 != 0) && (*(char *)(uVar2 + param_2) == '.')) {
    uVar1 = uVar2;
  }
  if (*(uint *)(param_1 + 0x6cc) <= uVar1) {
    return 0;
  }
  FUN_144f19680(*(undefined8 *)(param_1 + 0xcd8),param_2,uVar1);
  *(undefined1 *)(uVar1 + *(longlong *)(param_1 + 0xcd8)) = 0;
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = uVar1;
  }
  return *(undefined8 *)(param_1 + 0xcd8);
}



// FUNCTION 144f0c580 FUN_144f0c580 body=457 status=ok
// SIG undefined FUN_144f0c580(void)

bool FUN_144f0c580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  
  if ((((*(char *)(param_1 + 0xd) == *(char *)(param_2 + 0xd)) &&
       (*(int *)((longlong)param_1 + 100) == *(int *)((longlong)param_2 + 100))) &&
      (*(char *)(param_1 + 0xc) == *(char *)(param_2 + 0xc))) &&
     (((*(char *)((longlong)param_1 + 0x69) == *(char *)((longlong)param_2 + 0x69) &&
       (*(char *)((longlong)param_1 + 0x6a) == *(char *)((longlong)param_2 + 0x6a))) &&
      (*(char *)((longlong)param_1 + 0x6b) == *(char *)((longlong)param_2 + 0x6b))))) {
    puVar1 = (undefined8 *)param_1[8];
    puVar2 = (undefined8 *)param_2[8];
    if (puVar1 == (undefined8 *)0x0) {
      bVar5 = puVar2 == (undefined8 *)0x0;
    }
    else {
      if (puVar2 == (undefined8 *)0x0) {
        return false;
      }
      if (puVar1[1] != puVar2[1]) {
        return false;
      }
      iVar4 = memcmp((void *)*puVar1,(void *)*puVar2,puVar1[1]);
      bVar5 = iVar4 == 0;
    }
    if (bVar5) {
      puVar1 = (undefined8 *)param_1[9];
      puVar2 = (undefined8 *)param_2[9];
      if (puVar1 == (undefined8 *)0x0) {
        bVar5 = puVar2 == (undefined8 *)0x0;
      }
      else {
        if (puVar2 == (undefined8 *)0x0) {
          return false;
        }
        if (puVar1[1] != puVar2[1]) {
          return false;
        }
        iVar4 = memcmp((void *)*puVar1,(void *)*puVar2,puVar1[1]);
        bVar5 = iVar4 == 0;
      }
      if (bVar5) {
        puVar1 = (undefined8 *)param_1[10];
        puVar2 = (undefined8 *)param_2[10];
        if (puVar1 == (undefined8 *)0x0) {
          bVar5 = puVar2 == (undefined8 *)0x0;
        }
        else {
          if (puVar2 == (undefined8 *)0x0) {
            return false;
          }
          if (puVar1[1] != puVar2[1]) {
            return false;
          }
          iVar4 = memcmp((void *)*puVar1,(void *)*puVar2,puVar1[1]);
          bVar5 = iVar4 == 0;
        }
        if (((bVar5) && (cVar3 = FUN_144f196b0(*param_1,*param_2), cVar3 != '\0')) &&
           (((cVar3 = FUN_144f196b0(param_1[1],param_2[1]), cVar3 != '\0' &&
             ((((cVar3 = FUN_144f196b0(param_1[2],param_2[2]), cVar3 != '\0' &&
                (cVar3 = FUN_144f196b0(param_1[3],param_2[3]), cVar3 != '\0')) &&
               (iVar4 = FUN_144f19540(param_1[4],param_2[4]), iVar4 != 0)) &&
              ((iVar4 = FUN_144f19540(param_1[5],param_2[5]), iVar4 != 0 &&
               (iVar4 = FUN_144f19540(param_1[0xb],param_2[0xb]), iVar4 != 0)))))) &&
            (iVar4 = FUN_144f19540(param_1[7],param_2[7]), iVar4 != 0)))) {
          iVar4 = FUN_144f19540(param_1[6],param_2[6]);
          return iVar4 != 0;
        }
      }
    }
  }
  return false;
}



// FUNCTION 144f0c750 FUN_144f0c750 body=605 status=ok
// SIG undefined FUN_144f0c750(void)

undefined8 FUN_144f0c750(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *(char *)(param_2 + 0xd) = (char)param_1[0xd];
  *(undefined4 *)((longlong)param_2 + 100) = *(undefined4 *)((longlong)param_1 + 100);
  *(undefined1 *)((longlong)param_2 + 0x69) = *(undefined1 *)((longlong)param_1 + 0x69);
  *(undefined1 *)((longlong)param_2 + 0x6a) = *(undefined1 *)((longlong)param_1 + 0x6a);
  *(undefined1 *)((longlong)param_2 + 0x6b) = *(undefined1 *)((longlong)param_1 + 0x6b);
  *(undefined1 *)((longlong)param_2 + 0x6c) = *(undefined1 *)((longlong)param_1 + 0x6c);
  *(char *)(param_2 + 0xc) = (char)param_1[0xc];
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 == (undefined8 *)0x0) {
LAB_144f0c7e4:
    puVar1 = (undefined8 *)param_1[9];
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(puVar1[1] + 0x18);
      if (puVar2 == (undefined8 *)0x0) goto LAB_144f0c98d;
      puVar2[1] = puVar1[1];
      *puVar2 = puVar2 + 3;
      *(undefined4 *)(puVar2 + 2) = 1;
      memcpy(puVar2 + 3,(void *)*puVar1,puVar1[1]);
      param_2[9] = (longlong)puVar2;
    }
    puVar1 = (undefined8 *)param_1[10];
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(puVar1[1] + 0x18);
      if (puVar2 == (undefined8 *)0x0) goto LAB_144f0c98d;
      puVar2[1] = puVar1[1];
      *puVar2 = puVar2 + 3;
      *(undefined4 *)(puVar2 + 2) = 1;
      memcpy(puVar2 + 3,(void *)*puVar1,puVar1[1]);
      param_2[10] = (longlong)puVar2;
    }
    if (*param_1 == 0) {
      *param_2 = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      *param_2 = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[1] == 0) {
      param_2[1] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[1] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[2] == 0) {
      param_2[2] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[2] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[3] == 0) {
      param_2[3] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[3] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[4] == 0) {
      param_2[4] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[4] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[5] == 0) {
      param_2[5] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[5] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[6] == 0) {
      param_2[6] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[6] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[0xb] == 0) {
      param_2[0xb] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[0xb] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    if (param_1[7] == 0) {
      param_2[7] = 0;
    }
    else {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      param_2[7] = lVar3;
      if (lVar3 == 0) goto LAB_144f0c98d;
    }
    uVar4 = 1;
  }
  else {
    puVar2 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(puVar1[1] + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = puVar1[1];
      *puVar2 = puVar2 + 3;
      *(undefined4 *)(puVar2 + 2) = 1;
      memcpy(puVar2 + 3,(void *)*puVar1,puVar1[1]);
      param_2[8] = (longlong)puVar2;
      goto LAB_144f0c7e4;
    }
LAB_144f0c98d:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144f0c9b0 FUN_144f0c9b0 body=192 status=ok
// SIG undefined FUN_144f0c9b0(void)

void FUN_144f0c9b0(undefined8 *param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  *param_1 = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[1]);
  param_1[1] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[2]);
  param_1[2] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[3]);
  param_1[3] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[4]);
  param_1[4] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[5]);
  param_1[5] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[6]);
  param_1[6] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[8]);
  param_1[8] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[9]);
  param_1[9] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[10]);
  param_1[10] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[0xb]);
  param_1[0xb] = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1[7]);
  param_1[7] = 0;
  return;
}



// FUNCTION 144f0ca70 FUN_144f0ca70 body=25 status=ok
// SIG undefined FUN_144f0ca70(void)

undefined4 FUN_144f0ca70(void)

{
  FUN_144f0df10(0);
  return *(undefined4 *)PTR_DAT_14c70f1a0;
}



// FUNCTION 144f0ca90 FUN_144f0ca90 body=33 status=ok
// SIG undefined FUN_144f0ca90(void)

undefined8 FUN_144f0ca90(void)

{
  undefined8 uVar1;
  
  if (DAT_14c7976b8 != '\0') {
    return 1;
  }
  DAT_14c7976b8 = 1;
                    /* WARNING: Could not recover jumptable at 0x000144f0caad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_DAT_14c70f1a0 + 0x20))();
  return uVar1;
}



// FUNCTION 144f0cac0 FUN_144f0cac0 body=35 status=ok
// SIG undefined FUN_144f0cac0(void)

void FUN_144f0cac0(void)

{
  if (DAT_14c7976b8 != '\0') {
    (**(code **)(PTR_DAT_14c70f1a0 + 0x28))();
    DAT_14c7976b8 = '\0';
  }
  return;
}



// FUNCTION 144f0caf0 FUN_144f0caf0 body=236 status=ok
// SIG undefined FUN_144f0caf0(void)

void FUN_144f0caf0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0xd08) != 0) &&
     ((*(longlong *)(param_1 + 0xe8) == 0 ||
      ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 4) & 0x10) == 0)))) {
    uVar1 = 0;
    uVar3 = uVar1;
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      do {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xd08) + uVar3);
        if (puVar2[3] != 0) {
          (**(code **)(PTR_DAT_14c70f1a0 + 0x90))();
          puVar2[3] = 0;
          *(undefined4 *)(puVar2 + 5) = 0;
          FUN_144f0c9b0(puVar2 + 7);
          (*(code *)PTR_free_14c6d9f28)(*puVar2);
          *puVar2 = 0;
          (*(code *)PTR_free_14c6d9f28)(puVar2[1]);
          puVar2[1] = 0;
        }
        uVar1 = uVar1 + 1;
        uVar3 = uVar3 + 0xa8;
      } while (uVar1 < *(ulonglong *)(param_1 + 0x6b8));
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xd08));
    *(undefined8 *)(param_1 + 0xd08) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f0cbd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_14c70f1a0 + 0x88))(param_1);
  return;
}



// FUNCTION 144f0cbe0 thunk_FUN_1452b39f0 body=14 status=ok
// SIG undefined thunk_FUN_1452b39f0(void)

void thunk_FUN_1452b39f0(void)

{
  (**(code **)(PTR_DAT_14c70f1a0 + 0x98))();
  return;
}



// FUNCTION 144f0cbf0 thunk_FUN_1452b3b90 body=14 status=ok
// SIG undefined thunk_FUN_1452b3b90(void)

void thunk_FUN_1452b3b90(void)

{
  (**(code **)(PTR_DAT_14c70f1a0 + 0xa0))();
  return;
}



// FUNCTION 144f0cc00 thunk_FUN_1452b3c00 body=14 status=ok
// SIG undefined thunk_FUN_1452b3c00(void)

void thunk_FUN_1452b3c00(void)

{
  (**(code **)(PTR_DAT_14c70f1a0 + 0xa8))();
  return;
}



// FUNCTION 144f0cc10 FUN_144f0cc10 body=98 status=ok
// SIG undefined FUN_144f0cc10(void)

undefined8 FUN_144f0cc10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xd08) == 0) {
    lVar1 = (*(code *)PTR_calloc_14c6d9f40)(param_2,0xa8);
    if (lVar1 == 0) {
      return 0x1b;
    }
    *(undefined8 *)(param_1 + 0x6b8) = param_2;
    *(longlong *)(param_1 + 0xd08) = lVar1;
    *(undefined4 *)(param_1 + 0xd10) = 1;
  }
  return 0;
}



// FUNCTION 144f0cc80 thunk_FUN_1452b3920 body=11 status=ok
// SIG undefined thunk_FUN_1452b3920(void)

void thunk_FUN_1452b3920(void)

{
  (**(code **)(PTR_DAT_14c70f1a0 + 0x30))();
  return;
}



// FUNCTION 144f0cc90 FUN_144f0cc90 body=159 status=ok
// SIG undefined FUN_144f0cc90(void)

void FUN_144f0cc90(longlong param_1)

{
  uint uVar1;
  ulonglong uVar3;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x14b0) != 0) {
    uVar2 = 0;
    uVar3 = uVar2;
    if (0 < *(int *)(param_1 + 0x14b0)) {
      do {
        FUN_144b472a0(*(undefined8 *)(*(longlong *)(param_1 + 0x14b8) + uVar3));
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        *(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0x14b8)) = 0;
        uVar3 = uVar3 + 8;
      } while ((int)uVar1 < *(int *)(param_1 + 0x14b0));
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x14b8));
    *(undefined8 *)(param_1 + 0x14b8) = 0;
    *(undefined4 *)(param_1 + 0x14b0) = 0;
  }
  return;
}



// FUNCTION 144f0cd30 FUN_144f0cd30 body=206 status=ok
// SIG undefined FUN_144f0cd30(void)

undefined8 FUN_144f0cd30(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x14b0) != 0) {
    uVar3 = 0;
    uVar4 = uVar3;
    if (0 < *(int *)(param_1 + 0x14b0)) {
      do {
        FUN_144b472a0(*(undefined8 *)(*(longlong *)(param_1 + 0x14b8) + uVar4));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        *(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x14b8)) = 0;
        uVar4 = uVar4 + 8;
      } while ((int)uVar2 < *(int *)(param_1 + 0x14b0));
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x14b8));
    *(undefined8 *)(param_1 + 0x14b8) = 0;
    *(undefined4 *)(param_1 + 0x14b0) = 0;
  }
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)((longlong)param_2,8);
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x14b8) = lVar1;
    *(int *)(param_1 + 0x14b0) = param_2;
    return 0;
  }
  return 0x1b;
}



// FUNCTION 144f0ce00 FUN_144f0ce00 body=254 status=ok
// SIG undefined FUN_144f0ce00(void)

undefined4 FUN_144f0ce00(longlong param_1,int param_2,longlong param_3,void *param_4,size_t param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  lVar2 = (*(code *)PTR_malloc_14c6d9f20)(lVar4 + param_5 + 2);
  if (lVar2 == 0) {
    uVar1 = 0x1b;
  }
  else {
    FUN_144f2b7e0(lVar2,lVar4 + param_5 + 2,&DAT_149c05cfc,param_3);
    memcpy((void *)(lVar4 + lVar2 + 1),param_4,param_5);
    *(undefined1 *)(lVar4 + lVar2 + 1 + param_5) = 0;
    lVar4 = (longlong)param_2 * 8;
    lVar3 = FUN_144bbee90(*(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x14b8)),lVar2);
    if (lVar3 == 0) {
      (*(code *)PTR_free_14c6d9f28)(lVar2);
      FUN_144b472a0(*(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x14b8)));
      uVar1 = 0x1b;
    }
    *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x14b8)) = lVar3;
  }
  return uVar1;
}



// FUNCTION 144f0cf00 FUN_144f0cf00 body=33 status=ok
// SIG undefined FUN_144f0cf00(void)

void FUN_144f0cf00(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xe8) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 4) & 0x10) != 0)) {
    FUN_144bbeca0(param_1,4,2);
    return;
  }
  return;
}



// FUNCTION 144f0cf30 FUN_144f0cf30 body=29 status=ok
// SIG undefined FUN_144f0cf30(void)

void FUN_144f0cf30(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xe8) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 4) & 0x10) != 0)) {
    FUN_144bbece0(param_1,4);
    return;
  }
  return;
}



// FUNCTION 144f0cf50 FUN_144f0cf50 body=91 status=ok
// SIG undefined FUN_144f0cf50(void)

void FUN_144f0cf50(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    (**(code **)(PTR_DAT_14c70f1a0 + 0x90))();
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_144f0c9b0(param_1 + 7);
    (*(code *)PTR_free_14c6d9f28)(*param_1);
    *param_1 = 0;
    (*(code *)PTR_free_14c6d9f28)(param_1[1]);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 144f0cfb0 FUN_144f0cfb0 body=140 status=ok
// SIG undefined FUN_144f0cfb0(void)

void FUN_144f0cfb0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (*(ulonglong *)(param_1 + 0x6b8) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xd08);
    while (puVar2[3] != param_2) {
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x15;
      if (*(ulonglong *)(param_1 + 0x6b8) <= uVar1) {
        return;
      }
    }
    if (puVar2[3] != 0) {
      (**(code **)(PTR_DAT_14c70f1a0 + 0x90))();
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_144f0c9b0(puVar2 + 7);
      (*(code *)PTR_free_14c6d9f28)(*puVar2);
      *puVar2 = 0;
      (*(code *)PTR_free_14c6d9f28)(puVar2[1]);
      puVar2[1] = 0;
    }
  }
  return;
}



// FUNCTION 144f0d040 thunk_FUN_1452b37b0 body=11 status=ok
// SIG undefined thunk_FUN_1452b37b0(void)

void thunk_FUN_1452b37b0(void)

{
  (**(code **)(PTR_DAT_14c70f1a0 + 0x50))();
  return;
}



// FUNCTION 144f0d050 FUN_144f0d050 body=997 status=ok
// SIG undefined FUN_144f0d050(void)

int FUN_144f0d050(undefined8 param_1,char *param_2,void *param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char *_Str;
  size_t sVar6;
  char *pcVar7;
  FILE *_File;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  int iVar12;
  void *local_res10;
  void *local_38;
  size_t local_30;
  
  local_38 = (void *)0x0;
  pcVar11 = (char *)0x0;
  iVar12 = 0x5a;
  iVar3 = 0x5a;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    return 0x5a;
  }
  if (param_4 == (void *)0x0) {
    return 0x5a;
  }
  iVar2 = strncmp(param_2,"sha256//",8);
  if (iVar2 == 0) {
    local_30 = 0;
    local_res10 = (void *)0x0;
    if (*(longlong *)(PTR_DAT_14c70f1a0 + 0xb8) == 0) {
      return 0x5a;
    }
    lVar5 = (*(code *)PTR_malloc_14c6d9f20)(0x20);
    if (lVar5 != 0) {
      iVar3 = (**(code **)(PTR_DAT_14c70f1a0 + 0xb8))(param_3,param_4,lVar5,0x20);
      if (iVar3 == 0) {
        iVar3 = FUN_1452b8b50(lVar5,0x20,&local_res10,&local_30);
      }
      (*(code *)PTR_free_14c6d9f28)(lVar5);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_144f14ad0(param_1," public key hash: sha256//%s",local_res10);
      lVar5 = -1;
      do {
        lVar9 = lVar5;
        lVar5 = lVar9 + 1;
      } while (param_2[lVar9 + 1] != '\0');
      pcVar11 = (char *)(*(code *)PTR_malloc_14c6d9f20)(lVar9 + 2);
      if (pcVar11 != (char *)0x0) {
        memcpy(pcVar11,param_2,lVar9 + 2);
        pcVar7 = pcVar11;
        do {
          _Str = strstr(pcVar7,";sha256//");
          pvVar8 = local_res10;
          if (_Str != (char *)0x0) {
            *_Str = '\0';
          }
          sVar6 = 0xffffffffffffffff;
          do {
            sVar6 = sVar6 + 1;
          } while ((pcVar7 + 8)[sVar6] != '\0');
          if (((local_30 == sVar6) &&
              (iVar2 = memcmp(local_res10,pcVar7 + 8,local_30), iVar3 = 0, iVar2 == 0)) ||
             (iVar3 = iVar12, _Str == (char *)0x0)) break;
          *_Str = ';';
          pcVar7 = strstr(_Str,"sha256//");
          pvVar8 = local_res10;
        } while (pcVar7 != (char *)0x0);
        (*(code *)PTR_free_14c6d9f28)(pvVar8);
        local_res10 = (void *)0x0;
        (*(code *)PTR_free_14c6d9f28)(pcVar11);
        return iVar3;
      }
      (*(code *)PTR_free_14c6d9f28)(local_res10);
    }
    return 0x1b;
  }
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 0x5a;
  }
  iVar2 = fseek(_File,0,2);
  pcVar7 = (char *)0x0;
  if (iVar2 == 0) {
    uVar4 = ftell(_File);
    iVar2 = fseek(_File,0,0);
    pcVar7 = pcVar11;
    if (((iVar2 == 0) && (uVar4 < 0x100001)) &&
       ((pvVar8 = (void *)FUN_144f17010((longlong)(int)uVar4), param_4 <= pvVar8 &&
        ((pcVar7 = (char *)(*(code *)PTR_malloc_14c6d9f20)((longlong)pvVar8 + 1),
         pcVar7 != (char *)0x0 &&
         (sVar6 = fread(pcVar7,(size_t)pvVar8,1,_File), iVar12 = iVar3, (int)sVar6 == 1)))))) {
      if (param_4 == pvVar8) {
        iVar3 = memcmp(param_3,pcVar7,(size_t)param_4);
        if (iVar3 == 0) {
          iVar12 = 0;
        }
      }
      else {
        pcVar7[(longlong)pvVar8] = '\0';
        lVar5 = 0;
        pcVar11 = strstr(pcVar7,"-----BEGIN PUBLIC KEY-----");
        if ((pcVar11 != (char *)0x0) &&
           (((longlong)pcVar11 - (longlong)pcVar7 == 0 || (pcVar11[-1] == '\n')))) {
          uVar10 = ((longlong)pcVar11 - (longlong)pcVar7) + 0x1a;
          pcVar11 = strstr(pcVar7 + uVar10,"\n-----END PUBLIC KEY-----");
          if (pcVar11 != (char *)0x0) {
            lVar9 = (*(code *)PTR_malloc_14c6d9f20)
                              ((((longlong)pcVar11 - (longlong)pcVar7) - uVar10) + 1);
            if (lVar9 != 0) {
              for (; uVar10 < (ulonglong)((longlong)pcVar11 - (longlong)pcVar7); uVar10 = uVar10 + 1
                  ) {
                cVar1 = pcVar7[uVar10];
                if ((cVar1 != '\n') && (cVar1 != '\r')) {
                  *(char *)(lVar9 + lVar5) = cVar1;
                  lVar5 = lVar5 + 1;
                }
              }
              *(undefined1 *)(lVar9 + lVar5) = 0;
              iVar12 = FUN_1452b8bb0(lVar9,&local_38,&local_res10);
              (*(code *)PTR_free_14c6d9f28)(lVar9);
              if ((iVar12 == 0) && (param_4 == local_res10)) {
                iVar3 = memcmp(param_3,local_38,(size_t)param_4);
                iVar12 = 0x5a;
                if (iVar3 == 0) {
                  iVar12 = 0;
                }
                goto LAB_144f0d3f1;
              }
            }
            iVar12 = 0x5a;
          }
        }
      }
    }
  }
LAB_144f0d3f1:
  (*(code *)PTR_free_14c6d9f28)(pcVar7);
  (*(code *)PTR_free_14c6d9f28)(local_38);
  local_38 = (void *)0x0;
  fclose(_File);
  return iVar12;
}



// FUNCTION 144f0d440 thunk_FUN_1452b38c0 body=11 status=ok
// SIG undefined thunk_FUN_1452b38c0(void)

void thunk_FUN_1452b38c0(void)

{
  (**(code **)(PTR_DAT_14c70f1a0 + 0x58))();
  return;
}



// FUNCTION 144f0d450 thunk_FUN_144f0b960 body=14 status=ok
// SIG undefined thunk_FUN_144f0b960(void)

void thunk_FUN_144f0b960(void)

{
  (**(code **)(PTR_DAT_14c70f1a0 + 0xb0))();
  return;
}



// FUNCTION 144f0d460 FUN_144f0d460 body=28 status=ok
// SIG undefined FUN_144f0d460(void)

void FUN_144f0d460(longlong param_1)

{
  if ((*(code **)(PTR_DAT_14c70f1a0 + 0xd0) != (code *)0x0) && (param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000144f0d478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_DAT_14c70f1a0 + 0xd0))();
    return;
  }
  return;
}



// FUNCTION 144f0d480 FUN_144f0d480 body=93 status=ok
// SIG undefined FUN_144f0d480(void)

ulonglong FUN_144f0d480(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined8 local_res20;
  
  uVar1 = FUN_144f0e0f0(&local_res20,param_1,param_2);
  if ((int)uVar1 == 0) {
    FUN_144f13ba0(param_1,param_2,param_3,local_res20);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144f0d4e0 FUN_144f0d4e0 body=59 status=ok
// SIG undefined FUN_144f0d4e0(void)

ulonglong FUN_144f0d4e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_res8;
  
  uVar1 = FUN_144f0e0f0(&local_res8,param_2,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar1 == 0) {
    FUN_144f13bd0(param_1,local_res8);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144f0d520 FUN_144f0d520 body=146 status=ok
// SIG undefined FUN_144f0d520(void)

undefined4 FUN_144f0d520(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
    for (plVar2 = plVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
      if ((undefined **)*plVar2 == &PTR_DAT_14c70f0c0) {
        iVar3 = (**(code **)(PTR_DAT_14c70f1a0 + 0x40))(plVar2,param_1);
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = 0x50;
        }
        FUN_144f13c00(plVar1,plVar2,param_1,0);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 144f0d5c0 FUN_144f0d5c0 body=193 status=ok
// SIG undefined FUN_144f0d5c0(void)

int FUN_144f0d5c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 local_res8;
  
  pcVar3 = (char *)0x0;
  local_res8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x10c) == '\x03') {
    pcVar3 = "h2";
  }
  else if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2e1) != '\0') {
    pcVar3 = "http/1.1";
  }
  lVar2 = FUN_144f0e000(param_2,pcVar3);
  if (lVar2 != 0) {
    iVar1 = FUN_144f13b40(&local_res8,&PTR_s_SSL_PROXY_14c70f130,lVar2);
    if (iVar1 == 0) {
      FUN_144f13bd0(param_1,local_res8);
    }
    else {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar2 + 0x20));
      (*(code *)PTR_free_14c6d9f28)(lVar2);
    }
    return iVar1;
  }
  return 0x1b;
}



// FUNCTION 144f0d690 FUN_144f0d690 body=14 status=ok
// SIG undefined FUN_144f0d690(void)

undefined8 FUN_144f0d690(undefined8 param_1,uint param_2)

{
  return CONCAT71((int7)((ulonglong)PTR_DAT_14c70f1a0 >> 8),
                  (*(uint *)(PTR_DAT_14c70f1a0 + 0x10) & param_2) != 0);
}



// FUNCTION 144f0d6a0 FUN_144f0d6a0 body=147 status=ok
// SIG undefined FUN_144f0d6a0(void)

undefined8 FUN_144f0d6a0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    if (((undefined **)*plVar1 == &PTR_DAT_14c70f0c0) ||
       ((undefined **)*plVar1 == &PTR_s_SSL_PROXY_14c70f130)) break;
    plVar1 = (longlong *)plVar1[1];
  }
  uVar2 = *(undefined8 *)(plVar1[2] + 0x28);
  *(longlong *)(plVar1[2] + 0x28) = param_1;
  uVar3 = (**(code **)(PTR_DAT_14c70f1a0 + 0x78))(plVar1[2],param_3);
  *(undefined8 *)(plVar1[2] + 0x28) = uVar2;
  return uVar3;
}



// FUNCTION 144f0d740 FUN_144f0d740 body=182 status=ok
// SIG undefined FUN_144f0d740(void)

undefined8 FUN_144f0d740(undefined8 *param_1,longlong param_2)

{
  void *_Src;
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 != 0) {
    for (; uVar4 < *(ulonglong *)(param_2 + 0x20); uVar4 = uVar4 + 1) {
      _Src = (void *)(param_2 + uVar4 * 10);
      uVar2 = 0xffffffffffffffff;
      do {
        uVar2 = uVar2 + 1;
      } while (*(char *)((longlong)_Src + uVar2) != '\0');
      if (9 < uVar2) {
        return 2;
      }
      uVar1 = (uint)uVar2 & 0xff;
      if (0x20 < (int)(uVar1 + 1 + iVar3)) {
        return 2;
      }
      *(char *)((longlong)iVar3 + (longlong)param_1) = (char)uVar2;
      memcpy((void *)((longlong)(iVar3 + 1) + (longlong)param_1),_Src,uVar2 & 0xff);
      iVar3 = iVar3 + 1 + uVar1;
    }
  }
  *(int *)((longlong)param_1 + 0x24) = iVar3;
  return 0;
}



// FUNCTION 144f0d800 FUN_144f0d800 body=188 status=ok
// SIG undefined FUN_144f0d800(void)

undefined8 FUN_144f0d800(undefined8 *param_1,void *param_2)

{
  ulonglong *puVar1;
  ulonglong _Size;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 != (void *)0x0) {
    puVar1 = (ulonglong *)((longlong)param_2 + 0x20);
    for (uVar3 = uVar2; uVar3 < *puVar1; uVar3 = uVar3 + 1) {
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while (*(char *)((longlong)param_2 + _Size) != '\0');
      if ((9 < _Size) || (0x20 < uVar2 + 2 + _Size)) {
        return 2;
      }
      if (uVar2 != 0) {
        *(undefined1 *)(uVar2 + (longlong)param_1) = 0x2c;
        uVar2 = uVar2 + 1;
      }
      memcpy((void *)(uVar2 + (longlong)param_1),param_2,_Size);
      uVar2 = uVar2 + _Size;
      param_2 = (void *)((longlong)param_2 + 10);
    }
  }
  *(undefined1 *)(uVar2 + (longlong)param_1) = 0;
  *(int *)((longlong)param_1 + 0x24) = (int)uVar2;
  return 0;
}



// FUNCTION 144f0d8c0 FUN_144f0d8c0 body=277 status=ok
// SIG undefined FUN_144f0d8c0(void)

undefined8 FUN_144f0d8c0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = param_1[3];
  bVar2 = false;
  if ((*(char *)(lVar1 + 0x2cb) == '\0') ||
     (lVar4 = 0x4d6, (undefined **)*param_1 != &PTR_s_SSL_PROXY_14c70f130)) {
    lVar4 = 0x4d5;
  }
  if ((param_3 == (longlong *)0x0) || (param_4 == 0)) {
    *(undefined1 *)(lVar1 + lVar4) = 0;
    FUN_144f14ad0(param_2,"ALPN: server did not agree on a protocol. Uses default.");
    goto LAB_144f0d9a2;
  }
  if (param_4 == 8) {
    if (*param_3 == 0x312e312f70747468) {
      *(undefined1 *)(lVar1 + lVar4) = 2;
      bVar2 = false;
    }
    else {
      if (*param_3 != 0x302e312f70747468) goto LAB_144f0d974;
      *(undefined1 *)(lVar1 + lVar4) = 1;
    }
  }
  else {
    if ((param_4 != 2) || ((short)*param_3 != 0x3268)) {
LAB_144f0d974:
      *(undefined1 *)(lVar1 + lVar4) = 0;
      FUN_144f14b70(param_2,"unsupported ALPN protocol: \'%.*s\'",param_4 & 0xffffffff,param_3);
      bVar2 = false;
      goto LAB_144f0d9a2;
    }
    *(undefined1 *)(lVar1 + lVar4) = 3;
    bVar2 = true;
  }
  FUN_144f14ad0(param_2,"ALPN: server accepted %.*s",param_4 & 0xffffffff,param_3);
LAB_144f0d9a2:
  if ((undefined **)*param_1 != &PTR_s_SSL_PROXY_14c70f130) {
    uVar3 = 0xffffffff;
    if (bVar2) {
      uVar3 = 2;
    }
    FUN_144bbade0(param_2,uVar3);
  }
  return 0;
}



// FUNCTION 144f0d9e0 FUN_144f0d9e0 body=78 status=ok
// SIG undefined FUN_144f0d9e0(void)

undefined8 FUN_144f0d9e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = FUN_144f13ec0(*(undefined8 *)(param_1 + 8));
  if (lVar3 == -1) {
    return 0;
  }
  iVar1 = *(int *)(lVar2 + 4);
  *param_3 = lVar3;
  uVar4 = 1;
  if (iVar1 == 3) {
    uVar4 = 0x10000;
  }
  return uVar4;
}



// FUNCTION 144f0da30 FUN_144f0da30 body=29 status=ok
// SIG undefined FUN_144f0da30(void)

longlong FUN_144f0da30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x5f0;
  if ((undefined **)*param_1 != &PTR_s_SSL_PROXY_14c70f130) {
    lVar1 = 0x538;
  }
  return lVar1 + param_2;
}



// FUNCTION 144f0da50 FUN_144f0da50 body=28 status=ok
// SIG undefined FUN_144f0da50(void)

longlong FUN_144f0da50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = 600;
  if ((undefined **)*param_1 != &PTR_s_SSL_PROXY_14c70f130) {
    lVar1 = 0x1e8;
  }
  return lVar1 + param_1[3];
}



// FUNCTION 144f0da70 FUN_144f0da70 body=48 status=ok
// SIG undefined FUN_144f0da70(void)

longlong * FUN_144f0da70(longlong *param_1)

{
  while( true ) {
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    if (((undefined **)*param_1 == &PTR_DAT_14c70f0c0) ||
       ((undefined **)*param_1 == &PTR_s_SSL_PROXY_14c70f130)) break;
    param_1 = (longlong *)param_1[1];
  }
  return param_1;
}



// FUNCTION 144f0daa0 FUN_144f0daa0 body=14 status=ok
// SIG undefined FUN_144f0daa0(void)

undefined8 FUN_144f0daa0(longlong *param_1)

{
  return CONCAT71(0x14c70f1,(undefined **)*param_1 == &PTR_s_SSL_PROXY_14c70f130);
}



// FUNCTION 144f0dab0 FUN_144f0dab0 body=472 status=ok
// SIG undefined FUN_144f0dab0(void)

undefined8 FUN_144f0dab0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined **ppuVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  
  lVar1 = param_1[2];
  uVar9 = 0;
  lVar10 = 600;
  if ((undefined **)*param_1 != &PTR_s_SSL_PROXY_14c70f130) {
    lVar10 = 0x1e8;
  }
  lVar2 = param_1[3];
  ppuVar3 = (undefined **)*param_1;
  *param_3 = 0;
  lVar7 = 0x5f0;
  if (ppuVar3 != &PTR_s_SSL_PROXY_14c70f130) {
    lVar7 = 0x538;
  }
  if (((lVar7 + param_2 == 0) || (*(char *)(lVar7 + param_2 + 0x6c) == '\0')) ||
     (*(longlong *)(param_2 + 0xd08) == 0)) {
    return 1;
  }
  lVar7 = *(longlong *)(param_2 + 0xe8);
  if ((lVar7 == 0) || (piVar11 = (int *)(lVar7 + 0xd8), (*(byte *)(lVar7 + 4) & 0x10) == 0)) {
    piVar11 = (int *)(param_2 + 0xd10);
  }
  if (*(longlong *)(param_2 + 0x6b8) != 0) {
    lVar7 = 0;
    do {
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0xd08) + lVar7);
      if ((puVar8[3] != 0) &&
         (iVar6 = FUN_144f19540(*(undefined8 *)(lVar1 + 8),*puVar8), iVar6 != 0)) {
        if (*(char *)(param_1[3] + 0x2d1) == '\0') {
          if (puVar8[1] == 0) {
LAB_144f0dbc6:
            lVar4 = param_1[3];
            iVar6 = *(int *)(puVar8 + 6);
            if (*(char *)(lVar4 + 0x2d2) == '\0') {
              if (iVar6 == -1) {
LAB_144f0dbea:
                if (((*(int *)(lVar1 + 0x40) == *(int *)((longlong)puVar8 + 0x2c)) &&
                    (iVar6 = FUN_144f19540(**(undefined8 **)(lVar4 + 0x2e8),puVar8[2]), iVar6 != 0))
                   && (cVar5 = FUN_144f0c580(lVar10 + lVar2,puVar8 + 7), cVar5 != '\0')) {
                  *piVar11 = *piVar11 + 1;
                  *(int *)(puVar8 + 5) = *piVar11;
                  *param_3 = puVar8[3];
                  if (param_4 != (undefined8 *)0x0) {
                    *param_4 = puVar8[4];
                  }
                  return 0;
                }
              }
            }
            else if ((iVar6 != -1) && (*(int *)(lVar4 + 0x4c8) == iVar6)) goto LAB_144f0dbea;
          }
        }
        else if ((puVar8[1] != 0) &&
                (iVar6 = FUN_144f19540(*(undefined8 *)(param_1[3] + 0xa0)), iVar6 != 0))
        goto LAB_144f0dbc6;
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (uVar9 < *(ulonglong *)(param_2 + 0x6b8));
  }
  return 1;
}



// FUNCTION 144f0dc90 FUN_144f0dc90 body=637 status=ok
// SIG undefined FUN_144f0dc90(void)

undefined8
FUN_144f0dc90(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  
  puVar5 = param_5;
  lVar1 = param_1[2];
  lVar16 = 600;
  if ((undefined **)*param_1 != &PTR_s_SSL_PROXY_14c70f130) {
    lVar16 = 0x1e8;
  }
  lVar2 = param_1[3];
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  plVar14 = *(longlong **)(param_2 + 0xd08);
  if (plVar14 != (longlong *)0x0) {
    iVar15 = (int)plVar14[5];
    lVar9 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar1 + 8));
    if (lVar9 == 0) {
      return 0x1b;
    }
    if (*(char *)(param_1[3] + 0x2d1) == '\0') {
      lVar10 = 0;
    }
    else {
      lVar10 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1[3] + 0xa0));
      if (lVar10 == 0) {
        (*(code *)PTR_free_14c6d9f28)(lVar9);
        return 0x1b;
      }
    }
    if (*(char *)(param_1[3] + 0x2d2) == '\0') {
      param_5._0_4_ = -1;
    }
    else {
      param_5._0_4_ = *(int *)(param_1[3] + 0x4c8);
    }
    lVar3 = *(longlong *)(param_2 + 0xe8);
    if ((lVar3 == 0) || ((*(byte *)(lVar3 + 4) & 0x10) == 0)) {
      piVar11 = (int *)(param_2 + 0xd10);
    }
    else {
      piVar11 = (int *)(lVar3 + 0xd8);
    }
    uVar4 = *(ulonglong *)(param_2 + 0x6b8);
    uVar13 = 1;
    bVar17 = uVar4 == 1;
    if (1 < uVar4) {
      piVar12 = (int *)(*(longlong *)(param_2 + 0xd08) + 0xd0);
      do {
        if (*(longlong *)(piVar12 + -4) == 0) break;
        iVar6 = *piVar12;
        plVar7 = (longlong *)(piVar12 + -10);
        if (iVar15 <= *piVar12) {
          iVar6 = iVar15;
          plVar7 = plVar14;
        }
        plVar14 = plVar7;
        iVar15 = iVar6;
        uVar13 = uVar13 + 1;
        piVar12 = piVar12 + 0x2a;
      } while (uVar13 < uVar4);
      bVar17 = uVar13 == uVar4;
    }
    if (bVar17) {
      if (plVar14[3] != 0) {
        (**(code **)(PTR_DAT_14c70f1a0 + 0x90))();
        plVar14[3] = 0;
        *(int *)(plVar14 + 5) = 0;
        FUN_144f0c9b0(plVar14 + 7);
        (*(code *)PTR_free_14c6d9f28)(*plVar14);
        *plVar14 = 0;
        (*(code *)PTR_free_14c6d9f28)(plVar14[1]);
        plVar14[1] = 0;
      }
    }
    else {
      plVar14 = (longlong *)(uVar13 * 0xa8 + *(longlong *)(param_2 + 0xd08));
    }
    plVar14[3] = param_3;
    plVar14[4] = param_4;
    *(int *)(plVar14 + 5) = *piVar11;
    (*(code *)PTR_free_14c6d9f28)(*plVar14);
    (*(code *)PTR_free_14c6d9f28)(plVar14[1]);
    *(int *)(plVar14 + 6) = (int)param_5;
    *plVar14 = lVar9;
    plVar14[1] = lVar10;
    *(int *)((longlong)plVar14 + 0x2c) = *(int *)(lVar1 + 0x40);
    plVar14[2] = **(longlong **)(param_1[3] + 0x2e8);
    cVar8 = FUN_144f0c750(lVar16 + lVar2,plVar14 + 7);
    if (cVar8 == '\0') {
      FUN_144f0c9b0(plVar14 + 7);
      plVar14[3] = 0;
      (*(code *)PTR_free_14c6d9f28)(lVar9);
      (*(code *)PTR_free_14c6d9f28)(lVar10);
      return 0x1b;
    }
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 1;
    }
  }
  return 0;
}



// FUNCTION 144f0df10 FUN_144f0df10 body=235 status=ok
// SIG undefined FUN_144f0df10(void)

undefined8 FUN_144f0df10(undefined *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (PTR_DAT_14c70f1a0 == &DAT_149c05b20) {
    if (param_1 != (undefined *)0x0) {
      PTR_DAT_14c70f1a0 = param_1;
      return 0;
    }
    if (PTR_DAT_14c70f1a8 != (undefined *)0x0) {
      lVar5 = FUN_1452b8aa0("CURL_SSL_BACKEND");
      puVar3 = PTR_DAT_14c70f1a8;
      if (lVar5 != 0) {
        uVar6 = 0;
        uVar7 = uVar6;
        puVar2 = PTR_DAT_14c70f1a8;
        while (puVar3 = PTR_DAT_14c70f1a8, puVar2 != (undefined *)0x0) {
          iVar4 = FUN_144f19540(lVar5,*(undefined8 *)(puVar2 + 8));
          if (iVar4 != 0) {
            puVar3 = (&PTR_DAT_14c70f1a8)[(int)uVar7];
            break;
          }
          plVar1 = &DAT_14c70f1b0 + uVar6;
          uVar6 = uVar6 + 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          puVar2 = (undefined *)*plVar1;
        }
      }
      PTR_DAT_14c70f1a0 = puVar3;
      (*(code *)PTR_free_14c6d9f28)(lVar5);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144f0e000 FUN_144f0e000 body=106 status=ok
// SIG undefined FUN_144f0e000(void)

longlong FUN_144f0e000(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    lVar2 = (*(code *)PTR_calloc_14c6d9f40)(1,*(undefined8 *)(PTR_DAT_14c70f1a0 + 0x18));
    *(longlong *)(lVar1 + 0x20) = lVar2;
    if (lVar2 != 0) {
      return lVar1;
    }
    (*(code *)PTR_free_14c6d9f28)(lVar1);
  }
  return 0;
}



// FUNCTION 144f0e070 FUN_144f0e070 body=113 status=ok
// SIG undefined FUN_144f0e070(void)

void FUN_144f0e070(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(PTR_DAT_14c70f1a0 + 0x80))();
    *puVar1 = 0;
    if (*(longlong *)(puVar1 + 4) != *(longlong *)(puVar1 + 2)) {
      (*(code *)PTR_free_14c6d9f28)();
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 144f0e0f0 FUN_144f0e0f0 body=189 status=ok
// SIG undefined FUN_144f0e0f0(void)

int FUN_144f0e0f0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  char *local_res8;
  
  local_res8 = (char *)0x0;
  pcVar2 = (char *)0x0;
  if (*(char *)(param_3 + 0x2e1) != '\0') {
    if (*(byte *)(param_2 + 0x13c0) == 1) {
      pcVar2 = "http/1.0";
    }
    else {
      pcVar2 = "h2";
      if (*(byte *)(param_2 + 0x13c0) < 3) {
        pcVar2 = "http/1.1";
      }
    }
  }
  lVar1 = FUN_144f0e000(param_2,pcVar2);
  if (lVar1 == 0) {
    iVar3 = 0x1b;
  }
  else {
    iVar3 = FUN_144f13b40(&local_res8,&PTR_DAT_14c70f0c0,lVar1);
    if (iVar3 != 0) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar1 + 0x20));
      (*(code *)PTR_free_14c6d9f28)(lVar1);
    }
  }
  if (iVar3 != 0) {
    local_res8 = (char *)0x0;
  }
  *param_1 = local_res8;
  return iVar3;
}



// FUNCTION 144f0e1b0 FUN_144f0e1b0 body=190 status=ok
// SIG undefined FUN_144f0e1b0(void)

undefined8 FUN_144f0e1b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  
  uVar5 = FUN_144bbad40();
  if ((int)uVar5 == 0) {
    if (((param_2 != 0) &&
        (*(char *)(param_2 + 0x2d5) = (char)uVar5, *(char *)(param_1 + 0x13ca) != (char)uVar5)) &&
       ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 0x1000) == 0)) {
      *(undefined1 *)(param_1 + 0x13ca) = 0;
    }
    *(undefined1 *)(param_1 + 0x13cf) = 0;
    *(undefined1 *)(param_1 + 0x13cb) = 0;
    if (*(char *)(param_1 + 0x1d4) != '\0') {
      *(undefined1 *)(param_1 + 0x13c2) = 5;
    }
    puVar6 = (undefined4 *)FUN_144f07150(local_18);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined1 *)(param_1 + 0x1ca) = 1;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    *(undefined4 *)(param_1 + 0x11c) = uVar2;
    *(undefined4 *)(param_1 + 0x120) = uVar3;
    *(undefined4 *)(param_1 + 0x124) = uVar4;
    *(undefined1 *)(param_1 + 0x1cd) = 0;
    FUN_144f27160(param_1);
    FUN_144f25da0(param_1,0);
    FUN_144f25d60(param_1,0);
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144f0e270 FUN_144f0e270 body=831 status=ok
// SIG undefined FUN_144f0e270(void)

int FUN_144f0e270(undefined8 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x14e0);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x1b;
  }
  *puVar2 = 0xc0dedbad;
  iVar1 = FUN_144f07320(puVar2,puVar2 + 0x396);
  if (iVar1 != 0) {
    (*(code *)PTR_free_14c6d9f28)(puVar2);
    return iVar1;
  }
  uVar3 = __acrt_iob_func(1);
  *(undefined8 *)(puVar2 + 0x7c) = uVar3;
  uVar3 = __acrt_iob_func(0);
  *(undefined8 *)(puVar2 + 0x7e) = uVar3;
  uVar3 = __acrt_iob_func(2);
  *(undefined1 *)((longlong)puVar2 + 0xab3) = 0;
  *(undefined8 *)(puVar2 + 0x76) = uVar3;
  *(code **)(puVar2 + 0x8e) = fwrite_exref;
  *(code **)(puVar2 + 0x94) = fread_exref;
  *(undefined8 *)(puVar2 + 0x88) = 0;
  *(undefined8 *)(puVar2 + 0xae) = 0;
  *(undefined8 *)(puVar2 + 200) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x8a) = 0xffffffffffffffff;
  puVar2[0x85] = 0x1e;
  *(undefined1 *)((longlong)puVar2 + 0x531) = 0;
  puVar2[0x27e] = 1;
  puVar2[0x2b0] = 0x1000101;
  *(undefined1 *)(puVar2 + 0x1be) = 1;
  puVar2[0x1b2] = 0x3c;
  *(undefined8 *)(puVar2 + 0x1ae) = 5;
  puVar2[0x1b0] = 0x15180;
  puVar2[0x83] = 1;
  puVar2[0x1ac] = 0x5000000;
  puVar2[0x84] = 1;
  *(undefined1 *)((longlong)puVar2 + 0xac5) = 1;
  FUN_144f08cb0(puVar2 + 0xd6);
  *(undefined2 *)((longlong)puVar2 + 0x5a1) = 0x101;
  *(undefined1 *)(puVar2 + 0x169) = 1;
  *(undefined2 *)((longlong)puVar2 + 0xae5) = 0x101;
  puVar2[0x1c7] = 0x1a4;
  *(undefined8 *)(puVar2 + 0x17c) = *(undefined8 *)(puVar2 + 0x14e);
  *(undefined8 *)(puVar2 + 0x17e) = *(undefined8 *)(puVar2 + 0x150);
  puVar2[0x279] = 0xffffffff;
  puVar2[0x27a] = 0xf;
  *(undefined8 *)(puVar2 + 0x180) = *(undefined8 *)(puVar2 + 0x152);
  *(undefined8 *)(puVar2 + 0x182) = *(undefined8 *)(puVar2 + 0x154);
  *(undefined8 *)(puVar2 + 0x184) = *(undefined8 *)(puVar2 + 0x156);
  *(undefined8 *)(puVar2 + 0x186) = *(undefined8 *)(puVar2 + 0x158);
  *(undefined8 *)(puVar2 + 0x188) = *(undefined8 *)(puVar2 + 0x15a);
  *(undefined8 *)(puVar2 + 0x18a) = *(undefined8 *)(puVar2 + 0x15c);
  *(undefined8 *)(puVar2 + 0x18c) = *(undefined8 *)(puVar2 + 0x15e);
  *(undefined8 *)(puVar2 + 0x18e) = *(undefined8 *)(puVar2 + 0x160);
  *(undefined8 *)(puVar2 + 400) = *(undefined8 *)(puVar2 + 0x162);
  *(undefined8 *)(puVar2 + 0x192) = *(undefined8 *)(puVar2 + 0x164);
  *(undefined8 *)(puVar2 + 0x194) = *(undefined8 *)(puVar2 + 0x166);
  *(undefined8 *)(puVar2 + 0x196) = *(undefined8 *)(puVar2 + 0x168);
  *(undefined8 *)(puVar2 + 0x198) = *(undefined8 *)(puVar2 + 0x16a);
  *(undefined8 *)(puVar2 + 0x19a) = *(undefined8 *)(puVar2 + 0x16c);
  *(undefined8 *)(puVar2 + 0x19c) = *(undefined8 *)(puVar2 + 0x16e);
  *(undefined8 *)(puVar2 + 0x19e) = *(undefined8 *)(puVar2 + 0x170);
  puVar2[0x1a0] = puVar2[0x172];
  puVar2[0x1a1] = puVar2[0x173];
  puVar2[0x1a2] = puVar2[0x174];
  puVar2[0x1a3] = puVar2[0x175];
  puVar2[0x1a4] = puVar2[0x176];
  puVar2[0x1a5] = puVar2[0x177];
  puVar2[0x1a6] = puVar2[0x178];
  puVar2[0x1a7] = puVar2[0x179];
  *(undefined8 *)(puVar2 + 0x1a8) = *(undefined8 *)(puVar2 + 0x17a);
  FUN_144f0ca70();
  *(undefined1 *)(puVar2 + 0x2b1) = 0;
  *(undefined8 *)(puVar2 + 0x280) = 0;
  *(undefined8 *)(puVar2 + 0x282) = 0;
  *(undefined8 *)(puVar2 + 0x284) = 0;
  *(undefined2 *)((longlong)puVar2 + 0xada) = 0;
  puVar2[0x28c] = 0x3c;
  puVar2[0x28b] = 0x3c;
  *(undefined1 *)(puVar2 + 0x2b5) = 1;
  *(undefined1 *)(puVar2 + 0x2b7) = 1;
  puVar2[0x290] = 1000;
  *(undefined1 *)((longlong)puVar2 + 0xab5) = 1;
  puVar2[0x1b3] = 0x4000;
  puVar2[0x1b4] = 0x10000;
  puVar2[0xc2] = 200;
  puVar2[0x29c] = 60000;
  *(undefined8 *)(puVar2 + 0x28e) = 5;
  *(undefined8 *)(puVar2 + 0xc4) = 0x76;
  *(undefined1 *)(puVar2 + 0x2ba) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x532) = 4;
  *(undefined8 *)(puVar2 + 0x292) = 0;
  *(undefined8 *)(puVar2 + 0x294) = 0;
  *(undefined8 *)(puVar2 + 0x296) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xab9) = 0;
  FUN_144f07cf0(puVar2 + 0x32e,0x19000);
  FUN_144f13850(puVar2);
  puVar2[0x2cf] = puVar2[0x2cf] | 0x10;
  *(undefined8 *)(puVar2 + 0x32a) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x32c) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x33a) = 0xffffffffffffffff;
  *param_1 = puVar2;
  return 0;
}



// FUNCTION 144f0e5b0 FUN_144f0e5b0 body=231 status=ok
// SIG undefined FUN_144f0e5b0(void)

void FUN_144f0e5b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x720);
  lVar2 = 0x50;
  do {
    (*(code *)PTR_free_14c6d9f28)(*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (undefined8 *)(param_1 + 0x9a0);
  lVar2 = 8;
  do {
    (*(code *)PTR_free_14c6d9f28)(*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (*(char *)(param_1 + 0x13d5) != '\0') {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1278));
    *(undefined8 *)(param_1 + 0x1278) = 0;
    *(undefined1 *)(param_1 + 0x13d5) = 0;
  }
  *(undefined8 *)(param_1 + 0x1278) = 0;
  if (*(char *)(param_1 + 0x13d4) != '\0') {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1270));
    *(undefined8 *)(param_1 + 0x1270) = 0;
    *(undefined1 *)(param_1 + 0x13d4) = 0;
  }
  *(undefined8 *)(param_1 + 0x1270) = 0;
  FUN_144f08d20(param_1 + 0x358);
  FUN_144b472a0(*(undefined8 *)(param_1 + 0x2c0));
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  return;
}



// FUNCTION 144f0e6a0 FUN_144f0e6a0 body=39 status=ok
// SIG undefined FUN_144f0e6a0(void)

undefined8 FUN_144f0e6a0(int param_1)

{
  if (param_1 == 5) {
    return 1;
  }
  if (param_1 != 7) {
    if (param_1 != 8) {
      return 3;
    }
    return 0x43;
  }
  return 0x1b;
}



// FUNCTION 144f0e6d0 FUN_144f0e6d0 body=1299 status=ok
// SIG undefined FUN_144f0e6d0(void)

undefined8 FUN_144f0e6d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar3 = (undefined4 *)*param_1, puVar3 != (undefined4 *)0x0)) {
    *param_1 = 0;
    FUN_144bbaa50(puVar3);
    FUN_144bbac60(puVar3);
    if (*(longlong *)(puVar3 + 0x36) != 0) {
      FUN_144bba090(*(longlong *)(puVar3 + 0x36),puVar3);
    }
    if (*(longlong *)(puVar3 + 0x38) != 0) {
      FUN_144bba490();
      *(undefined8 *)(puVar3 + 0x38) = 0;
    }
    *puVar3 = 0;
    if (*(char *)((longlong)puVar3 + 0x13ce) != '\0') {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x46e));
    }
    FUN_144f0eee0(puVar3);
    FUN_144f0caf0(puVar3);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x33c));
    *(undefined8 *)(puVar3 + 0x33c) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x366));
    *(undefined8 *)(puVar3 + 0x366) = 0;
    FUN_144f0cc90(puVar3);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 100));
    *(undefined8 *)(puVar3 + 100) = 0;
    if (*(char *)((longlong)puVar3 + 0x13d5) != '\0') {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x49e));
      *(undefined8 *)(puVar3 + 0x49e) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x13d5) = 0;
    }
    *(undefined8 *)(puVar3 + 0x49e) = 0;
    FUN_144f0f3c0(puVar3);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x336));
    *(undefined8 *)(puVar3 + 0x336) = 0;
    FUN_144f07d10(puVar3 + 0x32e);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x338));
    *(undefined8 *)(puVar3 + 0x338) = 0;
    FUN_144f06020(puVar3,1);
    FUN_144f17760(puVar3,*(undefined8 *)(puVar3 + 0x2c0),*(undefined8 *)(puVar3 + 0x250));
    FUN_144f17ac0(puVar3 + 0x2c0);
    FUN_144f18d70(puVar3,*(undefined8 *)(puVar3 + 0x2be),*(undefined8 *)(puVar3 + 0x252));
    if ((*(longlong *)(puVar3 + 0x3a) == 0) ||
       (*(longlong *)(*(longlong *)(puVar3 + 0x3a) + 0xc0) == 0)) {
      FUN_144f18900(puVar3 + 0x2be);
    }
    FUN_144b472a0(*(undefined8 *)(puVar3 + 0xb2));
    FUN_144f172c0(puVar3);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x506));
    *(undefined8 *)(puVar3 + 0x506) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x508));
    *(undefined8 *)(puVar3 + 0x508) = 0;
    FUN_144f07390(puVar3);
    free(*(void **)(puVar3 + 0x396));
    puVar4 = *(undefined8 **)(puVar3 + 0x294);
    while (puVar4 != (undefined8 *)0x0) {
      lVar5 = puVar4[1];
      puVar11 = (undefined8 *)(puVar3 + 0x294);
      do {
        puVar9 = puVar4;
        puVar4 = (undefined8 *)*puVar9;
        if (puVar9[1] == lVar5) {
          *puVar11 = puVar4;
          (*(code *)PTR_free_14c6d9f28)(puVar9);
          break;
        }
        puVar11 = puVar9;
      } while (puVar4 != (undefined8 *)0x0);
      *(undefined8 *)(lVar5 + 0xa48) = 0;
      *(undefined1 *)(lVar5 + 0xa5c) = 0;
      lVar6 = *(longlong *)(puVar3 + 0x292);
      if ((lVar6 != 0) && (lVar10 = (*(code *)PTR_calloc_14c6d9f40)(1), lVar10 != 0)) {
        plVar2 = (longlong *)(lVar6 + 0xa50);
        *(longlong *)(lVar10 + 8) = lVar5;
        lVar7 = *plVar2;
        while (lVar7 != 0) {
          *(undefined1 *)(*(longlong *)(lVar7 + 8) + 0xa5c) = 0;
          plVar2 = (longlong *)*plVar2;
          lVar7 = *plVar2;
        }
        *plVar2 = lVar10;
        *(longlong *)(lVar5 + 0xa48) = lVar6;
        *(undefined1 *)(lVar5 + 0xa5c) = 0;
      }
      puVar4 = *(undefined8 **)(puVar3 + 0x294);
    }
    if (*(longlong *)(puVar3 + 0x292) != 0) {
      puVar11 = (undefined8 *)(*(longlong *)(puVar3 + 0x292) + 0xa50);
      puVar4 = (undefined8 *)*puVar11;
      do {
        puVar9 = puVar11;
        if (puVar4 == (undefined8 *)0x0) goto LAB_144f0e9e0;
        puVar8 = (undefined8 *)*puVar4;
        puVar1 = puVar4 + 1;
        puVar11 = puVar4;
        puVar4 = puVar8;
      } while ((undefined4 *)*puVar1 != puVar3);
      *puVar9 = puVar8;
      (*(code *)PTR_free_14c6d9f28)();
LAB_144f0e9e0:
      *(undefined8 *)(puVar3 + 0x292) = 0;
      *(undefined1 *)(puVar3 + 0x297) = 0;
    }
    if (*(longlong *)(puVar3 + 0x3a) != 0) {
      FUN_144bbeca0(puVar3,1,2);
      *(int *)(*(longlong *)(puVar3 + 0x3a) + 8) = *(int *)(*(longlong *)(puVar3 + 0x3a) + 8) + -1;
      FUN_144bbece0(puVar3,1);
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4d4));
    *(undefined8 *)(puVar3 + 0x4d4) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4d6));
    *(undefined8 *)(puVar3 + 0x4d6) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4da));
    *(undefined8 *)(puVar3 + 0x4da) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4d8));
    *(undefined8 *)(puVar3 + 0x4d8) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4e6));
    *(undefined8 *)(puVar3 + 0x4e6) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4dc));
    *(undefined8 *)(puVar3 + 0x4dc) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4de));
    *(undefined8 *)(puVar3 + 0x4de) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4e0));
    *(undefined8 *)(puVar3 + 0x4e0) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4e2));
    *(undefined8 *)(puVar3 + 0x4e2) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4e4));
    *(undefined8 *)(puVar3 + 0x4e4) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4e8));
    *(undefined8 *)(puVar3 + 0x4e8) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4ea));
    *(undefined8 *)(puVar3 + 0x4ea) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4ec));
    *(undefined8 *)(puVar3 + 0x4ec) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4ee));
    *(undefined8 *)(puVar3 + 0x4ee) = 0;
    if (*(longlong *)(puVar3 + 0x6c) != 0) {
      FUN_144f07d10(*(longlong *)(puVar3 + 0x6c) + 0x220);
      FUN_144f07d10(*(longlong *)(puVar3 + 0x6c) + 0x458);
      FUN_144b472a0(**(undefined8 **)(puVar3 + 0x6c));
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x6c));
      *(undefined8 *)(puVar3 + 0x6c) = 0;
    }
    FUN_144f08d20(*(undefined8 *)(puVar3 + 0x4a4));
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar3 + 0x4a4));
    *(undefined8 *)(puVar3 + 0x4a4) = 0;
    FUN_144f23730(puVar3 + 0x4f8);
    FUN_144f0e5b0(puVar3);
    FUN_1452cf6e0(puVar3);
    (*(code *)PTR_free_14c6d9f28)(puVar3);
  }
  return 0;
}



// FUNCTION 144f0ebf0 FUN_144f0ebf0 body=329 status=ok
// SIG undefined FUN_144f0ebf0(void)

int FUN_144f0ebf0(longlong param_1,char *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong local_res8;
  undefined1 local_28 [16];
  
  *param_2 = '\0';
  FUN_144f0eee0();
  memset((void *)(param_1 + 0xf0),0,0xe8);
  *(undefined1 *)(param_1 + 0x1d4) = *(undefined1 *)(param_1 + 0xace);
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  iVar5 = FUN_144f12290(param_1,&local_res8,param_2);
  if (iVar5 == 0) {
    if (*(ulonglong *)(local_res8 + 0x330) < 2) {
      if (*param_2 != '\0') {
        return 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x20);
      iVar5 = 0;
      FUN_144f25fd0(local_28,param_1,3);
      if ((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 0x10) == 0) {
        *(undefined1 *)(lVar1 + 0x2cc) = 0;
        puVar6 = (undefined4 *)FUN_144f07150(local_28);
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *(undefined4 *)(lVar1 + 0x178) = *puVar6;
        *(undefined4 *)(lVar1 + 0x17c) = uVar2;
        *(undefined4 *)(lVar1 + 0x180) = uVar3;
        *(undefined4 *)(lVar1 + 0x184) = uVar4;
        if (*(char *)(lVar1 + 0x2cf) == '\0') {
          iVar5 = FUN_144f16330(param_1,lVar1,0,*(undefined8 *)(lVar1 + 0x50),0xffffffff);
        }
        *param_3 = 0;
        goto LAB_144f0ecee;
      }
    }
    *param_3 = 1;
  }
  else {
LAB_144f0ecee:
    if (((iVar5 != 0x59) && (iVar5 != 0)) && (local_res8 != 0)) {
      FUN_144bbac60(param_1);
      FUN_144f0b160(param_1,local_res8,1);
      FUN_144f0ed40(param_1,local_res8,1);
    }
  }
  return iVar5;
}



// FUNCTION 144f0ed40 FUN_144f0ed40 body=226 status=ok
// SIG undefined FUN_144f0ed40(void)

void FUN_144f0ed40(undefined8 param_1,longlong param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  
  if ((*(longlong *)(param_2 + 0x330) == 0) || (param_3 != '\0')) {
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_144f1b540();
      *(undefined8 *)(param_2 + 0x50) = 0;
    }
    FUN_1452cf3c0(param_2);
    cVar1 = *(char *)(param_2 + 0x4da);
    FUN_144bbac00(param_1,param_2);
    if ((*(longlong *)(param_2 + 0x2e8) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_2 + 0x2e8) + 0x60), pcVar2 != (code *)0x0)) {
      cVar3 = '\x01';
      if (cVar1 == '\0') {
        cVar3 = param_3;
      }
      (*pcVar2)(param_1,param_2,cVar3);
    }
    FUN_144f14ad0(param_1,"Closing connection");
    FUN_144f07390(param_1);
    FUN_144f14100(param_1,1);
    FUN_144f14100(param_1,0);
    FUN_144bbac60(param_1);
    FUN_144f0f490(param_1,param_2);
  }
  return;
}



// FUNCTION 144f0ee30 FUN_144f0ee30 body=162 status=ok
// SIG undefined FUN_144f0ee30(void)

undefined4 FUN_144f0ee30(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar5 = 0;
  FUN_144f25fd0(local_18,param_1,3);
  if ((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 0x10) == 0) {
    *(undefined1 *)(lVar1 + 0x2cc) = 0;
    puVar6 = (undefined4 *)FUN_144f07150(local_18);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined4 *)(lVar1 + 0x178) = *puVar6;
    *(undefined4 *)(lVar1 + 0x17c) = uVar2;
    *(undefined4 *)(lVar1 + 0x180) = uVar3;
    *(undefined4 *)(lVar1 + 0x184) = uVar4;
    if (*(char *)(lVar1 + 0x2cf) == '\0') {
      uVar5 = FUN_144f16330(param_1,lVar1,0,*(undefined8 *)(lVar1 + 0x50),0xffffffff);
    }
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144f0eee0 FUN_144f0eee0 body=110 status=ok
// SIG undefined FUN_144f0eee0(void)

void FUN_144f0eee0(longlong param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 400));
  *(undefined8 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_144f0e6d0(*(longlong *)(param_1 + 0x1b0) + 8);
    FUN_144f0e6d0(*(longlong *)(param_1 + 0x1b0) + 0x240);
  }
  FUN_144f14e10(param_1);
  return;
}



// FUNCTION 144f0ef50 FUN_144f0ef50 body=518 status=ok
// SIG undefined FUN_144f0ef50(void)

undefined8
FUN_144f0ef50(void *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *_Dst;
  void *_Dst_00;
  void *_Dst_01;
  void *pvVar3;
  size_t sVar4;
  size_t _Size;
  size_t local_48;
  
  _Dst = (void *)0x0;
  _Dst_00 = (void *)0x0;
  _Dst_01 = (void *)0x0;
  pvVar1 = (void *)0x0;
  pvVar2 = (void *)0x0;
  if (param_4 != (undefined8 *)0x0) {
    pvVar1 = memchr(param_1,0x3a,param_2);
  }
  if (param_5 != (undefined8 *)0x0) {
    pvVar2 = memchr(param_1,0x3b,param_2);
  }
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
    sVar4 = param_2;
    if (pvVar2 != (void *)0x0) {
      sVar4 = (longlong)pvVar2 - (longlong)param_1;
    }
  }
  else {
    if ((pvVar2 == (void *)0x0) || (pvVar3 = pvVar2, pvVar1 <= pvVar2)) {
      pvVar3 = pvVar1;
    }
    sVar4 = (longlong)pvVar3 - (longlong)param_1;
    if ((pvVar2 == (void *)0x0) || (pvVar2 <= pvVar1)) {
      local_48 = (longlong)param_1 + (param_2 - (longlong)pvVar1) + -1;
    }
    else {
      local_48 = (longlong)pvVar2 + (-1 - (longlong)pvVar1);
    }
  }
  if (pvVar2 == (void *)0x0) {
    _Size = 0;
  }
  else if ((pvVar1 == (void *)0x0) || (pvVar1 <= pvVar2)) {
    _Size = (longlong)param_1 + (param_2 - (longlong)pvVar2) + -1;
  }
  else {
    _Size = (longlong)pvVar1 + (-1 - (longlong)pvVar2);
  }
  if ((param_3 == (undefined8 *)0x0) ||
     (_Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(sVar4 + 1), _Dst != (void *)0x0)) {
    if ((param_4 == (undefined8 *)0x0) ||
       ((pvVar1 == (void *)0x0 ||
        (_Dst_00 = (void *)(*(code *)PTR_malloc_14c6d9f20)(local_48 + 1), _Dst_00 != (void *)0x0))))
    {
      if ((param_5 == (undefined8 *)0x0) ||
         ((_Size == 0 ||
          (_Dst_01 = (void *)(*(code *)PTR_malloc_14c6d9f20)(_Size + 1), _Dst_01 != (void *)0x0))))
      {
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,param_1,sVar4);
          *(undefined1 *)(sVar4 + (longlong)_Dst) = 0;
          (*(code *)PTR_free_14c6d9f28)(*param_3);
          *param_3 = _Dst;
        }
        if (_Dst_00 != (void *)0x0) {
          memcpy(_Dst_00,(void *)((longlong)pvVar1 + 1),local_48);
          *(undefined1 *)(local_48 + (longlong)_Dst_00) = 0;
          (*(code *)PTR_free_14c6d9f28)(*param_4);
          *param_4 = _Dst_00;
        }
        if (_Dst_01 != (void *)0x0) {
          memcpy(_Dst_01,(void *)((longlong)pvVar2 + 1),_Size);
          *(undefined1 *)(_Size + (longlong)_Dst_01) = 0;
          (*(code *)PTR_free_14c6d9f28)(*param_5);
          *param_5 = _Dst_01;
        }
        return 0;
      }
      (*(code *)PTR_free_14c6d9f28)(_Dst_00);
    }
    (*(code *)PTR_free_14c6d9f28)(_Dst);
  }
  return 0x1b;
}



// FUNCTION 144f0f160 FUN_144f0f160 body=132 status=ok
// SIG undefined FUN_144f0f160(void)

undefined ** FUN_144f0f160(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  if (param_2 == -1) {
    do {
      param_2 = param_2 + 1;
    } while (*(char *)(param_2 + param_1) != '\0');
  }
  ppuVar3 = &PTR_DAT_149c075d0;
  ppuVar2 = &PTR_PTR_149c05e20;
  while ((iVar1 = FUN_144f195b0(*ppuVar3,param_1,param_2), iVar1 == 0 ||
         ((*ppuVar3)[param_2] != '\0'))) {
    ppuVar3 = (undefined **)ppuVar2[1];
    ppuVar2 = ppuVar2 + 1;
    if (ppuVar3 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  return ppuVar3;
}



// FUNCTION 144f0f1f0 FUN_144f0f1f0 body=105 status=ok
// SIG undefined FUN_144f0f1f0(void)

void FUN_144f0f1f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xacf) != '\0') {
    if (*(char *)(param_2 + 0x2c9) == '\0') {
      if (*(char *)(param_2 + 0x2c8) == '\0') {
        if (*(char *)(param_2 + 0x2d1) == '\0') {
          uVar1 = *(undefined8 *)(param_2 + 0x78);
        }
        else {
          uVar1 = *(undefined8 *)(param_2 + 0xa8);
        }
      }
      else {
        uVar1 = *(undefined8 *)(param_2 + 0x100);
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 200);
    }
    FUN_144f14ad0(param_1,"Connected to %s (%s) port %u",uVar1,param_2 + 0x120,
                  *(undefined4 *)(param_2 + 0x4c0));
  }
  return;
}



// FUNCTION 144f0f260 FUN_144f0f260 body=20 status=ok
// SIG undefined FUN_144f0f260(void)

void FUN_144f0f260(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1200) = 0;
  *(undefined8 *)(param_1 + 0x1208) = 0;
  *(undefined8 *)(param_1 + 0x1210) = 0;
  return;
}



// FUNCTION 144f0f280 FUN_144f0f280 body=313 status=ok
// SIG undefined FUN_144f0f280(void)

undefined4 FUN_144f0f280(longlong param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_2 + 0xa48) != 0) {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0xa48) + 0xa50);
    puVar4 = (undefined8 *)*puVar7;
    do {
      puVar3 = puVar7;
      if (puVar4 == (undefined8 *)0x0) goto LAB_144f0f2d3;
      puVar1 = (undefined8 *)*puVar4;
      plVar8 = puVar4 + 1;
      puVar7 = puVar4;
      puVar4 = puVar1;
    } while (*plVar8 != param_2);
    *puVar3 = puVar1;
    (*(code *)PTR_free_14c6d9f28)();
LAB_144f0f2d3:
    *(undefined8 *)(param_2 + 0xa48) = 0;
    *(undefined1 *)(param_2 + 0xa5c) = 0;
  }
  if (param_1 != 0) {
    lVar5 = (*(code *)PTR_calloc_14c6d9f40)(1);
    if (lVar5 == 0) {
      return 0x1b;
    }
    plVar8 = (longlong *)(param_1 + 0xa50);
    *(longlong *)(lVar5 + 8) = param_2;
    plVar6 = (longlong *)*plVar8;
    if (plVar6 != (longlong *)0x0) {
      if (param_3 == '\0') {
        while (plVar6 != (longlong *)0x0) {
          *(undefined1 *)(plVar6[1] + 0xa5c) = 0;
          plVar8 = (longlong *)*plVar8;
          plVar6 = (longlong *)*plVar8;
        }
      }
      else {
        do {
          *(longlong *)(plVar6[1] + 0xa48) = param_2;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
        plVar6 = (longlong *)(param_2 + 0xa50);
        for (plVar2 = *(longlong **)(param_2 + 0xa50); plVar2 != (longlong *)0x0;
            plVar2 = (longlong *)*plVar2) {
          plVar6 = plVar2;
        }
        *plVar6 = *plVar8;
        *plVar8 = 0;
      }
    }
    *plVar8 = lVar5;
  }
  *(char *)(param_2 + 0xa5c) = param_3;
  *(longlong *)(param_2 + 0xa48) = param_1;
  return 0;
}



// FUNCTION 144f0f3c0 FUN_144f0f3c0 body=205 status=ok
// SIG undefined FUN_144f0f3c0(void)

void FUN_144f0f3c0(longlong param_1)

{
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1230));
  *(undefined8 *)(param_1 + 0x1230) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1238));
  *(undefined8 *)(param_1 + 0x1238) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1240));
  *(undefined8 *)(param_1 + 0x1240) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1248));
  *(undefined8 *)(param_1 + 0x1248) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1250));
  *(undefined8 *)(param_1 + 0x1250) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1258));
  *(undefined8 *)(param_1 + 0x1258) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1260));
  *(undefined8 *)(param_1 + 0x1260) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1268));
  *(undefined8 *)(param_1 + 0x1268) = 0;
  FUN_1452cb920(*(undefined8 *)(param_1 + 0x1228));
  *(undefined8 *)(param_1 + 0x1228) = 0;
  return;
}



// FUNCTION 144f0f490 FUN_144f0f490 body=455 status=ok
// SIG undefined FUN_144f0f490(void)

void FUN_144f0f490(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    FUN_144f13cf0(param_1,param_2,uVar1 & 0xffffffff);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x110));
  *(undefined8 *)(param_2 + 0x110) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0xd8));
  *(undefined8 *)(param_2 + 0xd8) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x118));
  *(undefined8 *)(param_2 + 0x118) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0xe0));
  *(undefined8 *)(param_2 + 0xe0) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0xe8));
  *(undefined8 *)(param_2 + 0xe8) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0xb0) = 0;
  FUN_144f0c9b0(param_2 + 600);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x150));
  *(undefined8 *)(param_2 + 0x150) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x158));
  *(undefined8 *)(param_2 + 0x158) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x168));
  *(undefined8 *)(param_2 + 0x168) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x160));
  *(undefined8 *)(param_2 + 0x160) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x170));
  *(undefined8 *)(param_2 + 0x170) = 0;
  FUN_144f07d10(param_2 + 0x380);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x60));
  *(undefined8 *)(param_2 + 0x60) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x90));
  *(undefined8 *)(param_2 + 0x90) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0x80) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x88));
  *(undefined8 *)(param_2 + 0x88) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x4b0));
  *(undefined8 *)(param_2 + 0x4b0) = 0;
  FUN_144f0c9b0(param_2 + 0x1e8);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x4a8));
  *(undefined8 *)(param_2 + 0x4a8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144f0f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(param_2);
  return;
}



// FUNCTION 144f0f660 FUN_144f0f660 body=421 status=ok
// SIG undefined FUN_144f0f660(void)

undefined8 FUN_144f0f660(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  char local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(longlong *)(param_1 + 0x330) == 0) {
    puVar4 = (undefined8 *)FUN_144f07150(&local_28);
    local_38 = *(undefined8 *)(param_1 + 0x198);
    uStack_30 = *(undefined8 *)(param_1 + 0x1a0);
    uVar6 = *puVar4;
    uVar1 = puVar4[1];
    local_28 = uVar6;
    uStack_20 = uVar1;
    lVar5 = FUN_144f071e0(&local_28,&local_38);
    if ((longlong)*(int *)(param_2 + 0x310) < lVar5 / 1000) {
      FUN_144f14ad0(param_2,"Too old connection (%I64d seconds idle), disconnect it",lVar5 / 1000);
    }
    else {
      local_28 = *(undefined8 *)(param_1 + 0x188);
      uStack_20 = *(undefined8 *)(param_1 + 400);
      local_38 = uVar6;
      uStack_30 = uVar1;
      lVar5 = FUN_144f071e0(&local_38,&local_28);
      if ((*(int *)(param_2 + 0x314) == 0) || (lVar5 / 1000 <= (longlong)*(int *)(param_2 + 0x314)))
      {
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x70) == 0) {
          FUN_144bbac00(param_2,param_1);
          cVar3 = FUN_144f14800(param_2,param_1,local_res8);
          bVar7 = cVar3 == '\0';
          if (local_res8[0] != '\0') {
            bVar7 = true;
          }
        }
        else {
          FUN_144bbac00(param_2,param_1);
          bVar2 = (**(code **)(*(longlong *)(param_1 + 0x2e8) + 0x70))(param_2,param_1,1);
          bVar7 = (bool)(bVar2 & 1);
        }
        FUN_144bbac60(param_2);
        if (bVar7 == false) goto LAB_144f0f7ee;
      }
      else {
        FUN_144f14ad0(param_2,"Too old connection (%I64d seconds since creation), disconnect it",
                      lVar5 / 1000);
      }
    }
    FUN_144f14ad0(param_2,"Connection %I64d seems to be dead",*(undefined8 *)(param_1 + 0x48));
    FUN_144f0b160(param_2,param_1,0);
    uVar6 = 1;
  }
  else {
LAB_144f0f7ee:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 144f0f810 FUN_144f0f810 body=64 status=ok
// SIG undefined FUN_144f0f810(void)

undefined8 FUN_144f0f810(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144f0f660(param_2,param_1);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_3 + 8) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 144f0f850 FUN_144f0f850 body=2538 status=ok
// SIG undefined FUN_144f0f850(void)

undefined8
FUN_144f0f850(longlong param_1,longlong param_2,longlong *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  char *pcVar17;
  longlong lVar18;
  bool bVar19;
  
  bVar7 = false;
  bVar3 = false;
  if (((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 3) != 0) &&
     ((((bVar3 = false, *(char *)(param_2 + 0x2d6) == '\0' || (*(char *)(param_2 + 0x2ce) == '\0'))
       && (cVar9 = FUN_144bbacc0(*(undefined8 *)(param_1 + 0xd8)), cVar9 != '\0')) &&
      (bVar3 = false, 2 < *(byte *)(param_1 + 0x13c0))))) {
    bVar3 = true;
  }
  if (((*(byte *)(param_1 + 0xe20) & 0x28) == 0) ||
     (bVar6 = true, (*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 3) == 0)) {
    bVar6 = false;
  }
  if (((*(char *)(param_2 + 0x2ca) == '\0') || ((*(byte *)(param_1 + 0xe30) & 0x28) == 0)) ||
     ((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 3) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(param_1 + 0x13c0) != '\x03') ||
     (bVar5 = true, (*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 1) == 0)) {
    bVar5 = false;
  }
  *param_4 = 0;
  *param_5 = 0;
  piVar12 = (int *)FUN_144f0ab60(param_1,param_2,*(undefined8 *)(param_1 + 0xc90));
  lVar18 = 0;
  if (piVar12 != (int *)0x0) {
    pcVar17 = "serially";
    if (*piVar12 == 2) {
      pcVar17 = "can multiplex";
    }
    FUN_144f14ad0(param_1,"Found bundle for host: %p [%s]",piVar12,pcVar17);
    if (bVar3) {
      if (*piVar12 == 0) {
        if (*(char *)(param_1 + 0xade) != '\0') {
          FUN_144f14ad0(param_1,"Server doesn\'t support multiplex yet, wait");
          *param_5 = 1;
          lVar18 = *(longlong *)(param_1 + 0xe8);
LAB_144f10170:
          if (lVar18 == 0) {
            return 0;
          }
          FUN_144bbece0(param_1,5);
          return 0;
        }
        FUN_144f14ad0(param_1,"Server doesn\'t support multiplex (yet)");
        bVar3 = false;
      }
      if ((*piVar12 == 2) && (cVar9 = FUN_144bbacc0(*(undefined8 *)(param_1 + 0xd8)), cVar9 == '\0')
         ) {
        FUN_144f14ad0(param_1,"Could multiplex, but not asked to");
        bVar3 = false;
      }
      if (*piVar12 == -1) {
        FUN_144f14ad0(param_1,"Can not multiplex, even if we wanted to");
        bVar3 = false;
      }
    }
    plVar2 = *(longlong **)(piVar12 + 4);
    lVar8 = 0;
joined_r0x000144f0fa27:
    while( true ) {
      do {
        do {
          while( true ) {
            do {
              lVar18 = lVar8;
              if (plVar2 == (longlong *)0x0) goto LAB_144f101b4;
              lVar18 = *plVar2;
              uVar15 = 0;
              plVar2 = (longlong *)plVar2[2];
            } while ((*(char *)(lVar18 + 0x4da) != '\0') || (*(char *)(lVar18 + 0x2ce) != '\0'));
            cVar9 = FUN_144f0f660(lVar18,param_1);
            if (cVar9 == '\0') break;
            FUN_144f0ed40(param_1,lVar18,1);
          }
        } while ((*(char *)(param_1 + 0x6e8) != '\0') &&
                (*(char *)(param_1 + 0x6e8) != *(char *)(lVar18 + 0x4d8)));
        if (*piVar12 == 2) {
          uVar15 = *(ulonglong *)(lVar18 + 0x330);
        }
      } while ((!bVar3) && ((uVar15 != 0 || (*(char *)(lVar18 + 0x120) == '\0'))));
      cVar9 = FUN_144f14020(lVar18,0);
      if (cVar9 != '\0') break;
      bVar7 = true;
      FUN_144f14ad0(param_1,"Connection #%I64d isn\'t open enough, can\'t reuse",
                    *(undefined8 *)(lVar18 + 0x48));
    }
    pcVar17 = *(char **)(param_2 + 0x4a8);
    lVar16 = *(longlong *)(lVar18 + 0x4a8);
    if (pcVar17 == (char *)0x0) {
      bVar19 = lVar16 == 0;
    }
    else {
      if (lVar16 == 0) goto joined_r0x000144f0fa27;
      lVar16 = lVar16 - (longlong)pcVar17;
      do {
        cVar9 = *pcVar17;
        cVar1 = pcVar17[lVar16];
        if (cVar9 != cVar1) break;
        pcVar17 = pcVar17 + 1;
      } while (cVar1 != '\0');
      if (cVar9 != cVar1) goto joined_r0x000144f0fa27;
      bVar19 = *(char *)(param_2 + 0x2e3) == *(char *)(lVar18 + 0x2e3);
    }
    if (bVar19) {
      if (((((((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) ^
               *(uint *)(*(longlong *)(lVar18 + 0x2e8) + 0x8c)) & 1) == 0) ||
            ((*(int *)(*(longlong *)(lVar18 + 0x2e8) + 0x88) ==
              *(int *)(*(longlong *)(param_2 + 0x2e8) + 0x84) && (*(char *)(lVar18 + 0x2e4) != '\0')
             ))) && (*(char *)(param_2 + 0x2c8) == *(char *)(lVar18 + 0x2c8))) &&
          (*(char *)(param_2 + 0x2c9) == *(char *)(lVar18 + 0x2c9))) &&
         (((*(char *)(param_2 + 0x2c9) == '\0' ||
           ((((*(char *)(param_2 + 0xd4) == *(char *)(lVar18 + 0xd4) &&
              (*(int *)(param_2 + 0xd0) == *(int *)(lVar18 + 0xd0))) &&
             (iVar10 = FUN_144f19540(*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(lVar18 + 0xc0))
             , iVar10 != 0)) &&
            ((iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(lVar18 + 0xd8))
             , iVar10 == 0 &&
             (iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(lVar18 + 0xe0))
             , iVar10 == 0)))))) &&
          ((*(char *)(param_2 + 0x2d1) == *(char *)(lVar18 + 0x2d1) &&
           (*(char *)(param_2 + 0x2d2) == *(char *)(lVar18 + 0x2d2))))))) {
        if (*(char *)(param_2 + 0x2c8) != '\0') {
          if (((*(char *)(param_2 + 0x10c) != *(char *)(lVar18 + 0x10c)) ||
              (*(int *)(param_2 + 0x108) != *(int *)(lVar18 + 0x108))) ||
             ((iVar10 = FUN_144f19540(*(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(lVar18 + 0xf8)
                                     ), iVar10 == 0 ||
              (*(char *)(param_2 + 0x2cb) != *(char *)(lVar18 + 0x2cb)))))
          goto joined_r0x000144f0fa27;
          if ((byte)(*(char *)(param_2 + 0x10c) - 2U) < 2) {
            if (*(char *)(param_2 + 0x10c) != *(char *)(lVar18 + 0x10c))
            goto joined_r0x000144f0fa27;
            if ((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 1) == 0) {
              lVar16 = lVar18 + 0x1e8;
              lVar14 = param_2 + 0x1e8;
            }
            else {
              lVar16 = lVar18 + 600;
              lVar14 = param_2 + 600;
            }
            cVar9 = FUN_144f0c580(lVar14,lVar16);
            if (cVar9 == '\0') goto joined_r0x000144f0fa27;
          }
        }
        if ((bVar5) && (*(char *)(lVar18 + 0x4d9) == '\0')) {
          if (bVar3) {
            if (*(char *)(param_1 + 0xade) != '\0') {
              FUN_144f14ad0(param_1,"Server upgrade doesn\'t support multiplex yet, wait");
              *param_5 = 1;
              lVar18 = *(longlong *)(param_1 + 0xe8);
              goto LAB_144f10170;
            }
            FUN_144f14ad0(param_1,"Server upgrade cannot be used");
            goto joined_r0x000144f0fa27;
          }
LAB_144f0fd2b:
          bVar19 = *(longlong *)(lVar18 + 0x330) == 0;
LAB_144f0fd57:
          if (!bVar19) goto joined_r0x000144f0fa27;
        }
        else {
          if (!bVar3) goto LAB_144f0fd2b;
          if (*(longlong *)(lVar18 + 0x330) != 0) {
            bVar19 = *(longlong *)(**(longlong **)(lVar18 + 0x318) + 0xd8) ==
                     *(longlong *)(param_1 + 0xd8);
            goto LAB_144f0fd57;
          }
        }
        lVar16 = *(longlong *)(param_2 + 0x4b0);
        if ((lVar16 != 0) || (*(short *)(param_2 + 0x4d0) != 0)) {
          if ((*(short *)(lVar18 + 0x4d0) != *(short *)(param_2 + 0x4d0)) ||
             (*(short *)(lVar18 + 0x4b8) != *(short *)(param_2 + 0x4b8)))
          goto joined_r0x000144f0fa27;
          if (lVar16 != 0) {
            pcVar17 = *(char **)(lVar18 + 0x4b0);
            if (pcVar17 == (char *)0x0) goto joined_r0x000144f0fa27;
            lVar16 = lVar16 - (longlong)pcVar17;
            do {
              cVar9 = *pcVar17;
              cVar1 = pcVar17[lVar16];
              if (cVar9 != cVar1) break;
              pcVar17 = pcVar17 + 1;
            } while (cVar1 != '\0');
            if (cVar9 != cVar1) goto joined_r0x000144f0fa27;
          }
        }
        if ((((((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 0x80) != 0) ||
              ((((iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x150),
                                         *(undefined8 *)(lVar18 + 0x150)), iVar10 == 0 &&
                 (iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x158),
                                         *(undefined8 *)(lVar18 + 0x158)), iVar10 == 0)) &&
                (iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x168),
                                        *(undefined8 *)(lVar18 + 0x168)), iVar10 == 0)) &&
               (iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x170),
                                       *(undefined8 *)(lVar18 + 0x170)), iVar10 == 0)))) &&
             ((*(char *)(param_2 + 0x4db) == *(char *)(lVar18 + 0x4db) &&
              (((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 3) == 0 ||
               (((*(byte *)(lVar18 + 0x4d9) < 0x14 || (2 < *(byte *)(param_1 + 0x13c0))) &&
                ((*(byte *)(lVar18 + 0x4d9) < 0x1e || (0x1d < *(byte *)(param_1 + 0x13c0)))))))))))
            && (((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x88) & 0xc) == 0 ||
                (((iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x428),
                                          *(undefined8 *)(lVar18 + 0x428)), iVar10 == 0 &&
                  (iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x430),
                                          *(undefined8 *)(lVar18 + 0x430)), iVar10 == 0)) &&
                 ((*(char *)(param_2 + 0x498) == *(char *)(lVar18 + 0x498) &&
                  (*(char *)(param_2 + 0x499) == *(char *)(lVar18 + 0x499))))))))) &&
           (((((*(byte *)((longlong)*(undefined8 **)(param_2 + 0x2e8) + 0x8c) & 1) == 0 &&
              (*(char *)(param_2 + 0x2c8) != '\0')) && (*(char *)(param_2 + 0x2cb) == '\0')) ||
            (((iVar10 = FUN_144f19540(**(undefined8 **)(param_2 + 0x2e8),
                                      **(undefined8 **)(lVar18 + 0x2e8)), iVar10 != 0 ||
              ((*(int *)(*(longlong *)(lVar18 + 0x2e8) + 0x88) ==
                *(int *)(*(longlong *)(param_2 + 0x2e8) + 0x84) &&
               (*(char *)(lVar18 + 0x2e4) != '\0')))) &&
             ((((*(char *)(param_2 + 0x2d1) == '\0' ||
                (iVar10 = FUN_144f19540(*(undefined8 *)(param_2 + 0xa0),
                                        *(undefined8 *)(lVar18 + 0xa0)), iVar10 != 0)) &&
               (((*(char *)(param_2 + 0x2d2) == '\0' ||
                 (*(int *)(param_2 + 0x4c8) == *(int *)(lVar18 + 0x4c8))) &&
                (iVar10 = FUN_144f19540(*(undefined8 *)(param_2 + 0x70),
                                        *(undefined8 *)(lVar18 + 0x70)), iVar10 != 0)))) &&
              ((*(int *)(param_2 + 0x4c4) == *(int *)(lVar18 + 0x4c4) &&
               (((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 1) == 0 ||
                (cVar9 = FUN_144f0c580(param_2 + 0x1e8,lVar18 + 0x1e8), cVar9 != '\0')))))))))))) {
          if (bVar6) {
            iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x150),*(undefined8 *)(lVar18 + 0x150))
            ;
            if ((iVar10 != 0) ||
               (iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x158),
                                       *(undefined8 *)(lVar18 + 0x158)), iVar10 != 0)) {
              if (*(int *)(lVar18 + 0x348) == 0) {
                lVar8 = lVar18;
              }
              goto joined_r0x000144f0fa27;
            }
          }
          else if (*(int *)(lVar18 + 0x348) != 0) goto joined_r0x000144f0fa27;
          if (bVar4) {
            if (((*(longlong *)(lVar18 + 0x110) == 0) || (*(longlong *)(lVar18 + 0x118) == 0)) ||
               (iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x110)), iVar10 != 0))
            goto joined_r0x000144f0fa27;
            iVar10 = FUN_144f196f0(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(lVar18 + 0x118))
            ;
          }
          else {
            iVar10 = *(int *)(lVar18 + 0x34c);
          }
          if (iVar10 == 0) {
            if ((!bVar6) && (!bVar4)) {
              if ((!bVar3) || (uVar15 == 0)) goto LAB_144f101b4;
              if (*(char *)(lVar18 + 0x2df) != '\0') {
                uVar13 = FUN_144f14890(param_1,lVar18,0);
                if (uVar13 <= uVar15) {
                  FUN_144f14ad0(param_1,"MAX_CONCURRENT_STREAMS reached, skip (%zu)",uVar15);
                  goto joined_r0x000144f0fa27;
                }
                uVar11 = FUN_144bbafa0(*(undefined8 *)(param_1 + 0xd8));
                if (uVar11 <= uVar15) {
                  FUN_144f14ad0(param_1,"client side MAX_CONCURRENT_STREAMS reached, skip (%zu)",
                                uVar15);
                  goto joined_r0x000144f0fa27;
                }
              }
              FUN_144f14ad0(param_1,"Multiplexed connection found");
              goto LAB_144f101b4;
            }
            if (((bVar6) && (*(int *)(lVar18 + 0x348) != 0)) ||
               ((lVar8 = lVar18, bVar4 && (*(int *)(lVar18 + 0x34c) != 0)))) goto LAB_144f101a1;
          }
        }
      }
    }
    goto joined_r0x000144f0fa27;
  }
LAB_144f101b4:
  if (lVar18 == 0) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbece0(param_1,5);
    }
    if ((bVar7) && (*(char *)(param_1 + 0xade) != '\0')) {
      FUN_144f14ad0(param_1,"Found pending candidate for reuse and CURLOPT_PIPEWAIT is set");
      *param_5 = 1;
    }
    return 0;
  }
  FUN_144bbac00(param_1,lVar18);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,5);
  }
  *param_3 = lVar18;
  return 1;
LAB_144f101a1:
  *param_4 = 1;
  goto LAB_144f101b4;
}



// FUNCTION 144f10240 FUN_144f10240 body=637 status=ok
// SIG undefined FUN_144f10240(void)

longlong FUN_144f10240(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 local_18 [16];
  
  lVar8 = (*(code *)PTR_calloc_14c6d9f40)(1,0x4e0);
  if (lVar8 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar8 + 0x1a8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar8 + 0x1b0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar8 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(lVar8 + 0x4c0) = 0xffffffffffffffff;
  FUN_144f16220(lVar8,1);
  puVar9 = (undefined4 *)FUN_144f07150(local_18);
  uVar2 = *puVar9;
  uVar3 = puVar9[1];
  uVar4 = puVar9[2];
  uVar5 = puVar9[3];
  *(undefined4 *)(lVar8 + 0x188) = uVar2;
  *(undefined4 *)(lVar8 + 0x18c) = uVar3;
  *(undefined4 *)(lVar8 + 400) = uVar4;
  *(undefined4 *)(lVar8 + 0x194) = uVar5;
  *(undefined4 *)(lVar8 + 0x2f8) = uVar2;
  *(undefined4 *)(lVar8 + 0x2fc) = uVar3;
  *(undefined4 *)(lVar8 + 0x300) = uVar4;
  *(undefined4 *)(lVar8 + 0x304) = uVar5;
  cVar1 = *(char *)(param_1 + 0x6b2);
  *(char *)(lVar8 + 0x10c) = cVar1;
  *(undefined1 *)(lVar8 + 0xd4) = 4;
  if ((*(char **)(param_1 + 0x7c8) == (char *)0x0) || (**(char **)(param_1 + 0x7c8) == '\0')) {
    bVar6 = false;
    *(undefined1 *)(lVar8 + 0x2cd) = 0;
LAB_144f1044b:
    *(undefined1 *)(lVar8 + 0x2c8) = 0;
    if (bVar6) {
      uVar7 = 1;
      goto LAB_144f10312;
    }
  }
  else {
    bVar6 = true;
    *(undefined1 *)(lVar8 + 0x2cd) = 1;
    if (((cVar1 != '\0') && (1 < (byte)(cVar1 - 1U))) && (cVar1 != '\x03')) goto LAB_144f1044b;
    *(undefined1 *)(lVar8 + 0x2c8) = 1;
  }
  uVar7 = 0;
LAB_144f10312:
  *(undefined1 *)(lVar8 + 0x2c9) = uVar7;
  if ((*(char **)(param_1 + 2000) != (char *)0x0) && (**(char **)(param_1 + 2000) != '\0')) {
    *(undefined1 *)(lVar8 + 0x2cd) = 1;
    *(undefined1 *)(lVar8 + 0x2c9) = 1;
  }
  *(bool *)(lVar8 + 0x2ca) = *(longlong *)(param_1 + 0x13b0) != 0;
  *(undefined1 *)(lVar8 + 0x2cb) = *(undefined1 *)(param_1 + 0xabb);
  *(undefined1 *)(lVar8 + 0x2d9) = *(undefined1 *)(param_1 + 0xac0);
  *(undefined1 *)(lVar8 + 0x2da) = *(undefined1 *)(param_1 + 0xac1);
  *(undefined1 *)(lVar8 + 0x253) = *(undefined1 *)(param_1 + 0x5a3);
  *(undefined1 *)(lVar8 + 0x251) = *(undefined1 *)(param_1 + 0x5a1);
  *(undefined1 *)(lVar8 + 0x252) = *(undefined1 *)(param_1 + 0x5a2);
  *(undefined1 *)(lVar8 + 0x248) = *(undefined1 *)(param_1 + 0x598);
  *(undefined1 *)(lVar8 + 0x2c3) = *(undefined1 *)(param_1 + 0x65b);
  *(undefined1 *)(lVar8 + 0x2c1) = *(undefined1 *)(param_1 + 0x659);
  *(undefined1 *)(lVar8 + 0x2c2) = *(undefined1 *)(param_1 + 0x65a);
  *(undefined1 *)(lVar8 + 0x2b8) = *(undefined1 *)(param_1 + 0x650);
  *(undefined1 *)(lVar8 + 0x4d8) = *(undefined1 *)(param_1 + 0x6e8);
  *(undefined1 *)(lVar8 + 0x4da) = *(undefined1 *)(param_1 + 0xab2);
  *(undefined1 *)(lVar8 + 0x4d7) = 3;
  FUN_144f1a730(lVar8 + 0x318,0);
  if (*(longlong *)(param_1 + 0x760) != 0) {
    lVar10 = (*(code *)PTR__strdup_14c6d9f38)();
    *(longlong *)(lVar8 + 0x4b0) = lVar10;
    if (lVar10 == 0) {
      (*(code *)PTR_free_14c6d9f28)(0);
      (*(code *)PTR_free_14c6d9f28)(lVar8);
      return 0;
    }
  }
  *(undefined2 *)(lVar8 + 0x4b8) = *(undefined2 *)(param_1 + 0x232);
  *(undefined2 *)(lVar8 + 0x4d0) = *(undefined2 *)(param_1 + 0x230);
  *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(lVar8 + 0x198) = *(undefined8 *)(lVar8 + 0x188);
  *(undefined8 *)(lVar8 + 0x1a0) = *(undefined8 *)(lVar8 + 400);
  *(undefined1 *)(lVar8 + 0x4db) = *(undefined1 *)(param_1 + 0xa28);
  return lVar8;
}



// FUNCTION 144f104c0 FUN_144f104c0 body=207 status=ok
// SIG undefined FUN_144f104c0(void)

void FUN_144f104c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_148 [32];
  char *local_128;
  char *local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar1 = FUN_1452cbab0(param_1,10,&local_128);
  if ((iVar1 != 0) || (local_128 == (char *)0x0)) goto LAB_144f1057f;
  uVar2 = strtoul(local_128,&local_120,10);
  if ((*local_120 == '\0') && (uVar2 != 0xffffffff)) {
LAB_144f1056e:
    *(ulong *)(param_3 + 0x4cc) = uVar2;
  }
  else if (DAT_14c7976c0 != (code *)0x0) {
    uVar2 = (*DAT_14c7976c0)(local_128);
    if (uVar2 != 0) goto LAB_144f1056e;
    piVar3 = _errno();
    uVar4 = FUN_144bbe240(*piVar3,local_118,0x100);
    FUN_144f14ad0(param_2,"Invalid zoneid: %s; %s",local_128,uVar4);
  }
  (*(code *)PTR_free_14c6d9f28)(local_128);
LAB_144f1057f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144f105a0 FUN_144f105a0 body=1795 status=ok
// SIG undefined FUN_144f105a0(void)

ulonglong FUN_144f105a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined1 *local_res8;
  
  if ((*(longlong *)(param_1 + 0xa88) == 0) || (*(char *)(param_1 + 0x13c5) != '\0')) {
    bVar2 = false;
    FUN_144f0f3c0();
    lVar8 = FUN_1452cb910();
  }
  else {
    bVar2 = true;
    FUN_144f0f3c0();
    lVar8 = FUN_1452cb950(*(undefined8 *)(param_1 + 0xa88));
  }
  *(longlong *)(param_1 + 0x1228) = lVar8;
  if (lVar8 == 0) {
LAB_144f10b8b:
    uVar12 = 0x1b;
  }
  else {
    if ((*(longlong *)(param_1 + 0x758) != 0) &&
       (lVar9 = FUN_1452cc990(*(undefined8 *)(param_1 + 0x1270),0,0,1), lVar9 == 0)) {
      lVar9 = FUN_144f2b8b0("%s://%s",*(undefined8 *)(param_1 + 0x758),
                            *(undefined8 *)(param_1 + 0x1270));
      if (lVar9 == 0) goto LAB_144f10b8b;
      if (*(char *)(param_1 + 0x13d4) != '\0') {
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1270));
      }
      *(longlong *)(param_1 + 0x1270) = lVar9;
      *(undefined1 *)(param_1 + 0x13d4) = 1;
    }
    if (bVar2) {
LAB_144f1075c:
      plVar1 = (longlong *)(param_1 + 0x1230);
      iVar5 = FUN_1452cbab0(lVar8,1,plVar1);
      if (iVar5 == 0) {
        iVar5 = FUN_1452cbab0(lVar8,5,param_1 + 0x1238,0);
        lVar9 = -1;
        if (iVar5 == 0) {
          uVar12 = 0xffffffffffffffff;
          do {
            uVar12 = uVar12 + 1;
          } while (*(char *)(*(longlong *)(param_1 + 0x1238) + uVar12) != '\0');
          if (0xffff < uVar12) {
            FUN_144f14b70(param_1,"Too long host name (maximum is %d)",0xffff);
            return 3;
          }
        }
        else {
          iVar5 = FUN_144f19540(&DAT_14997dd50,*plVar1);
          if (iVar5 == 0) goto LAB_144f10b8b;
        }
        pcVar13 = *(char **)(param_1 + 0x1238);
        pcVar14 = pcVar13;
        if ((pcVar13 != (char *)0x0) && (*pcVar13 == '[')) {
          *(undefined1 *)(param_2 + 0x2d3) = 1;
          pcVar14 = pcVar13 + 1;
          lVar11 = -1;
          do {
            lVar3 = lVar11 + 2;
            lVar11 = lVar11 + 1;
          } while (pcVar13[lVar3] != '\0');
          pcVar13[lVar11] = '\0';
          FUN_144f104c0(lVar8,param_1,param_2);
        }
        pcVar13 = "";
        if (pcVar14 != (char *)0x0) {
          pcVar13 = pcVar14;
        }
        lVar11 = (*(code *)PTR__strdup_14c6d9f38)(pcVar13);
        *(longlong *)(param_2 + 0x60) = lVar11;
        if (lVar11 == 0) goto LAB_144f10b8b;
        *(longlong *)(param_2 + 0x70) = lVar11;
        uVar12 = FUN_1452cef00(param_2 + 0x60);
        if ((int)uVar12 != 0) {
          return uVar12;
        }
        if (((*(longlong *)(param_1 + 0xaf8) == 0) ||
            (iVar5 = FUN_144f19540(&DAT_14997dd78,*plVar1), iVar5 == 0)) ||
           (lVar11 = FUN_144f18bf0(*(undefined8 *)(param_1 + 0xaf8),*(undefined8 *)(param_2 + 0x70),
                                   1), lVar11 == 0)) {
LAB_144f10966:
          lVar11 = *plVar1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(char *)(lVar9 + lVar11) != '\0');
          ppuVar15 = &PTR_DAT_149c075d0;
          ppuVar16 = &PTR_PTR_149c05e20;
          while ((iVar5 = FUN_144f195b0(*ppuVar15,lVar11,lVar9), iVar5 == 0 ||
                 ((*ppuVar15)[lVar9] != '\0'))) {
            ppuVar15 = (undefined **)ppuVar16[1];
            ppuVar16 = ppuVar16 + 1;
            if (ppuVar15 == (undefined **)0x0) {
LAB_144f109b8:
              FUN_144f14b70(param_1,"Protocol \"%s\" not supported or disabled in libcurl",lVar11);
              return 1;
            }
          }
          if (((*(uint *)(param_1 + 0x9e4) & *(uint *)((longlong)ppuVar15 + 0x84)) != 0) &&
             ((*(char *)(param_1 + 0x13c5) == '\0' ||
              ((*(uint *)(param_1 + 0x9e8) & *(uint *)((longlong)ppuVar15 + 0x84)) != 0)))) {
            *(undefined ***)(param_2 + 0x2f0) = ppuVar15;
            *(undefined ***)(param_2 + 0x2e8) = ppuVar15;
            if (*(longlong *)(param_1 + 0x878) != 0) {
LAB_144f10a8d:
              uVar6 = 0;
              if (*(longlong *)(param_1 + 0x870) == 0) {
                iVar5 = FUN_1452cbab0(lVar8,2,param_1 + 0x1248);
                if (iVar5 == 0) {
                  uVar12 = FUN_1452ce930(*(undefined8 *)(param_1 + 0x1248),0,&local_res8,0,
                                         ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 0x2000
                                          ) != 0) + '\x03');
                  if ((int)uVar12 != 0) {
                    return uVar12;
                  }
                  *(undefined1 **)(param_2 + 0x150) = local_res8;
LAB_144f10b3d:
                  uVar6 = FUN_144bb6f60(param_1 + 0x13a0,local_res8);
                }
                else {
                  if (iVar5 != 0xb) goto LAB_144f10b04;
                  if (*(longlong *)(param_1 + 0x13a8) != 0) {
                    local_res8 = &DAT_14996de1b;
                    goto LAB_144f10b3d;
                  }
                }
                if (uVar6 != 0) {
                  return (ulonglong)uVar6;
                }
              }
              iVar5 = FUN_1452cbab0(lVar8,4,param_1 + 0x1258);
              if (iVar5 == 0) {
                lVar9 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x1258));
                *(longlong *)(param_2 + 0x160) = lVar9;
                if (lVar9 == 0) goto LAB_144f10b8b;
              }
              else if (iVar5 != 0xd) goto LAB_144f10b04;
              iVar5 = FUN_1452cbab0(lVar8,7,param_1 + 0x1260,0x80);
              if (iVar5 != 0) {
                if (iVar5 == 5) goto LAB_144f10702;
                if (iVar5 != 7) {
                  if (iVar5 != 8) {
                    return 3;
                  }
                  return 0x43;
                }
                goto LAB_144f106f6;
              }
              iVar5 = FUN_1452cbab0(lVar8,6,param_1 + 0x1240);
              if (iVar5 == 0) {
                uVar7 = strtoul(*(char **)(param_1 + 0x1240),(char **)0x0,10);
                uVar4 = *(ushort *)(param_1 + 0x208);
                if ((uVar4 == 0) || (*(char *)(param_1 + 0x13c8) == '\0')) {
                  uVar4 = FUN_144f16fa0(uVar7);
                }
                *(uint *)(param_2 + 0x4c4) = (uint)uVar4;
                *(uint *)(param_2 + 0x4c0) = (uint)uVar4;
              }
              else {
                iVar5 = FUN_144f19540(&DAT_14997dd50,*(undefined8 *)(param_1 + 0x1230));
                if (iVar5 == 0) goto LAB_144f10b8b;
              }
              FUN_1452cbab0(lVar8,8,param_1 + 0x1268);
              if (*(int *)(param_1 + 0x9e0) != 0) {
                *(int *)(param_2 + 0x4cc) = *(int *)(param_1 + 0x9e0);
              }
              return 0;
            }
            iVar5 = FUN_1452cbab0(lVar8,3,param_1 + 0x1250,0);
            if (iVar5 == 0) {
              uVar12 = FUN_1452ce930(*(undefined8 *)(param_1 + 0x1250),0,&local_res8,0,
                                     ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 0x2000) !=
                                     0) + '\x03');
              if ((int)uVar12 != 0) {
                return uVar12;
              }
              *(undefined1 **)(param_2 + 0x158) = local_res8;
              uVar12 = FUN_144bb6f60(param_1 + 0x13a8);
              if ((int)uVar12 != 0) {
                return uVar12;
              }
              goto LAB_144f10a8d;
            }
            if (iVar5 == 0xc) goto LAB_144f10a8d;
LAB_144f10b04:
            if (iVar5 == 5) goto LAB_144f10702;
            if (iVar5 == 7) goto LAB_144f106f6;
            if (iVar5 != 8) {
              return 3;
            }
            goto LAB_144f10b1f;
          }
          goto LAB_144f109b8;
        }
        (*(code *)PTR_free_14c6d9f28)(*plVar1);
        *plVar1 = 0;
        iVar5 = FUN_1452cc2c0(lVar8,1,"https",0);
        if (iVar5 == 0) {
          if (*(char *)(param_1 + 0x13d4) != '\0') {
            (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1270));
            *(undefined8 *)(param_1 + 0x1270) = 0;
          }
          iVar5 = FUN_1452cbab0(lVar8,0,&local_res8,0);
          if (iVar5 == 0) {
            iVar5 = FUN_1452cbab0(lVar8,1,plVar1,0);
            if (iVar5 == 0) {
              *(undefined1 **)(param_1 + 0x1270) = local_res8;
              *(undefined1 *)(param_1 + 0x13d4) = 1;
              FUN_144f14ad0(param_1,"Switched from HTTP to HTTPS due to HSTS => %s");
              goto LAB_144f10966;
            }
            (*(code *)PTR_free_14c6d9f28)(local_res8);
          }
        }
      }
    }
    else {
      uVar6 = 0x208;
      if (*(char *)(param_1 + 0xadd) != '\0') {
        uVar6 = 0x218;
      }
      iVar5 = FUN_1452cc2c0(lVar8,0,*(undefined8 *)(param_1 + 0x1270),
                            uVar6 | -(uint)(*(char *)(param_1 + 0xae3) != '\0') & 0x20);
      if (iVar5 == 0) {
        iVar5 = FUN_1452cbab0(lVar8,0,&local_res8,0);
        if (iVar5 == 0) {
          if (*(char *)(param_1 + 0x13d4) != '\0') {
            (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1270));
          }
          *(undefined1 **)(param_1 + 0x1270) = local_res8;
          *(undefined1 *)(param_1 + 0x13d4) = 1;
          goto LAB_144f1075c;
        }
      }
      else {
        uVar10 = FUN_144bbe0a0(iVar5);
        FUN_144f14b70(param_1,"URL rejected: %s",uVar10);
      }
    }
    if (iVar5 == 5) {
LAB_144f10702:
      uVar12 = 1;
    }
    else if (iVar5 == 7) {
LAB_144f106f6:
      uVar12 = 0x1b;
    }
    else if (iVar5 == 8) {
LAB_144f10b1f:
      uVar12 = 0x43;
    }
    else {
      uVar12 = 3;
    }
  }
  return uVar12;
}



// FUNCTION 144f10cb0 FUN_144f10cb0 body=156 status=ok
// SIG undefined FUN_144f10cb0(void)

undefined4 FUN_144f10cb0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  *(longlong *)(param_1 + 0x11c0) = *(longlong *)(param_1 + 0x340);
  if ((*(longlong *)(param_1 + 0x340) == 0) && (*(longlong *)(param_1 + 0x7d8) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x13ce) != '\0') {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x11b8));
    }
    if (*(longlong *)(param_1 + 0x11c0) == 0) {
      lVar1 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x7d8));
    }
    else {
      lVar1 = FUN_144f2b8b0("%I64d-");
    }
    *(longlong *)(param_1 + 0x11b8) = lVar1;
    *(bool *)(param_1 + 0x13ce) = lVar1 != 0;
    if (lVar1 == 0) {
      return 0x1b;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x13cd) = uVar2;
  return 0;
}



// FUNCTION 144f10d50 FUN_144f10d50 body=1182 status=ok
// SIG undefined FUN_144f10d50(void)

int FUN_144f10d50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  char *local_38;
  char *local_30;
  
  local_30 = (char *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_58 = (char *)0x0;
  lVar6 = FUN_1452cb910();
  local_50 = 0;
  local_38 = (char *)0x0;
  if (lVar6 == 0) goto LAB_144f10da6;
  iVar3 = FUN_1452cc2c0(lVar6,0,param_3,0x208);
  if (iVar3 != 0) {
    uVar8 = FUN_144bbe0a0(iVar3);
    FUN_144f14b70(param_1,"Unsupported proxy syntax in \'%s\': %s",param_3,uVar8);
    iVar3 = 5;
    goto LAB_144f11194;
  }
  iVar3 = FUN_1452cbab0(lVar6,1,&local_50,0);
  if (iVar3 != 0) goto LAB_144f10da6;
  iVar3 = FUN_144f19540("https",local_50);
  if (iVar3 == 0) {
    iVar3 = FUN_144f19540("socks5h",local_50);
    if (iVar3 == 0) {
      iVar3 = FUN_144f19540("socks5",local_50);
      if (iVar3 == 0) {
        iVar3 = FUN_144f19540("socks4a",local_50);
        if (iVar3 == 0) {
          iVar3 = FUN_144f19540("socks4",local_50);
          if ((iVar3 == 0) && (iVar3 = FUN_144f19540("socks",local_50), iVar3 == 0)) {
            iVar3 = FUN_144f19540(&DAT_14997dd78,local_50);
            if (iVar3 == 0) {
              FUN_144f14b70(param_1,"Unsupported proxy scheme for \'%s\'",param_3);
              iVar3 = 7;
              goto LAB_144f11194;
            }
          }
          else {
            param_4 = 4;
          }
        }
        else {
          param_4 = 6;
        }
      }
      else {
        param_4 = 5;
      }
    }
    else {
      param_4 = 7;
    }
  }
  else {
    param_4 = (param_4 == 3) + 2;
  }
  cVar2 = FUN_144f0d690(param_1,0x10);
  if ((cVar2 == '\0') && (param_4 - 2U < 2)) {
    FUN_144f14b70(param_1,
                  "Unsupported proxy \'%s\', libcurl is built without the HTTPS-proxy support.",
                  param_3);
    iVar3 = 4;
    goto LAB_144f11194;
  }
  bVar1 = param_4 - 4U < 4;
  lVar9 = 0xb0;
  if (!bVar1) {
    lVar9 = 0xe8;
  }
  puVar10 = (undefined8 *)(lVar9 + param_2);
  *(char *)((longlong)puVar10 + 0x24) = (char)param_4;
  iVar4 = FUN_1452cbab0(lVar6,2,&local_40);
  if (((iVar4 != 0) && (iVar3 = 0, iVar4 != 0xb)) ||
     ((iVar4 = FUN_1452cbab0(lVar6,3,&local_48), iVar4 != 0 && (iVar3 = 0, iVar4 != 0xc))))
  goto LAB_144f11194;
  if ((local_40 != 0) || (iVar3 = 0, local_48 != 0)) {
    (*(code *)PTR_free_14c6d9f28)(puVar10[5]);
    puVar10[5] = local_40;
    iVar3 = FUN_144bb6f60(param_1 + 0x13b0);
    local_40 = 0;
    if (iVar3 != 0) goto LAB_144f11194;
    (*(code *)PTR_free_14c6d9f28)(puVar10[6]);
    puVar10[6] = 0;
    if ((local_48 == 0) &&
       (local_48 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b), local_48 == 0))
    goto LAB_144f10da6;
    puVar10[6] = local_48;
    iVar3 = FUN_144bb6f60(param_1 + 0x13b8,local_48);
    local_48 = 0;
    if (iVar3 != 0) goto LAB_144f11194;
    *(undefined1 *)(param_2 + 0x2ca) = 1;
  }
  FUN_1452cbab0(lVar6,6,&local_30);
  if (local_30 == (char *)0x0) {
    if (*(ushort *)(param_1 + 0x6b0) != 0) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x6b0);
      goto LAB_144f1103a;
    }
    uVar5 = 0x1bb;
    if (1 < param_4 - 2U) {
      uVar5 = 0x438;
    }
LAB_144f11053:
    *(uint *)(puVar10 + 4) = uVar5;
    if (((*(int *)(param_2 + 0x4c0) < 0) || (bVar1)) || (*(longlong *)(param_2 + 0xb0) == 0)) {
      *(uint *)(param_2 + 0x4c0) = uVar5;
    }
  }
  else {
    uVar5 = strtol(local_30,(char **)0x0,10);
    (*(code *)PTR_free_14c6d9f28)(local_30);
LAB_144f1103a:
    if (-1 < (int)uVar5) goto LAB_144f11053;
  }
  iVar4 = FUN_1452cbab0(lVar6,5,&local_58);
  if (iVar4 == 0) {
    if ((!bVar1) || (iVar4 = FUN_144f19540("localhost",local_58), iVar4 == 0)) {
LAB_144f11127:
      (*(code *)PTR_free_14c6d9f28)(*puVar10);
      *puVar10 = local_58;
      if (*local_58 == '[') {
        lVar9 = -1;
        do {
          lVar7 = lVar9;
          lVar9 = lVar7 + 1;
        } while (local_58[lVar7 + 1] != '\0');
        local_58[lVar7] = '\0';
        local_58 = local_58 + 1;
        FUN_144f104c0(lVar6,param_1,param_2);
      }
      puVar10[2] = local_58;
      local_58 = (char *)0x0;
      goto LAB_144f11194;
    }
    iVar4 = FUN_1452cbab0(lVar6,7,&local_38);
    if (iVar4 == 0) {
      if ((*local_38 == '/') && (local_38[1] == '\0')) goto LAB_144f11127;
      (*(code *)PTR_free_14c6d9f28)(local_58);
      local_58 = (char *)FUN_144f2b8b0("localhost%s",local_38);
      if (local_58 != (char *)0x0) {
        (*(code *)PTR_free_14c6d9f28)(*puVar10);
        *puVar10 = local_58;
        puVar10[2] = local_58;
        local_58 = (char *)0x0;
        goto LAB_144f11194;
      }
    }
  }
LAB_144f10da6:
  iVar3 = 0x1b;
LAB_144f11194:
  (*(code *)PTR_free_14c6d9f28)(local_40);
  (*(code *)PTR_free_14c6d9f28)(local_48);
  (*(code *)PTR_free_14c6d9f28)(local_58);
  (*(code *)PTR_free_14c6d9f28)(local_50);
  (*(code *)PTR_free_14c6d9f28)(local_38);
  FUN_1452cb920(lVar6);
  return iVar3;
}



// FUNCTION 144f111f0 FUN_144f111f0 body=1244 status=ok
// SIG undefined FUN_144f111f0(void)

void FUN_144f111f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  char local_d8 [16];
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pcVar7 = (char *)0x0;
  pcVar6 = (char *)0x0;
  lVar8 = 0;
  local_d8[0] = '\0';
  if (*(char *)(param_2 + 0x2ca) != '\0') {
    local_e8 = 4;
    puVar9 = &DAT_14996de1b;
    if (*(undefined1 **)(param_1 + 0x13b0) != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_1 + 0x13b0);
    }
    puVar10 = &DAT_14996de1b;
    if (*(undefined1 **)(param_1 + 0x13b8) != (undefined1 *)0x0) {
      puVar10 = *(undefined1 **)(param_1 + 0x13b8);
    }
    iVar5 = FUN_1452ce930(puVar9,0,param_2 + 0x110,0);
    if ((iVar5 == 0) &&
       (iVar5 = FUN_144bb6f60(param_1 + 0x13b0,*(undefined8 *)(param_2 + 0x110)), iVar5 == 0)) {
      local_e8 = 4;
      iVar5 = FUN_1452ce930(puVar10,0,param_2 + 0x118,0);
      if (iVar5 == 0) {
        iVar5 = FUN_144bb6f60(param_1 + 0x13b8,*(undefined8 *)(param_2 + 0x118));
      }
    }
    if (iVar5 != 0) goto LAB_144f116a8;
  }
  if (((*(longlong *)(param_1 + 0x7c8) != 0) &&
      (pcVar6 = (char *)(*(code *)PTR__strdup_14c6d9f38)(), pcVar6 == (char *)0x0)) ||
     ((*(longlong *)(param_1 + 2000) != 0 &&
      (pcVar7 = (char *)(*(code *)PTR__strdup_14c6d9f38)(), pcVar7 == (char *)0x0)))) {
    FUN_144f14b70(param_1,"memory shortage");
    goto LAB_144f116a8;
  }
  if (*(longlong *)(param_1 + 0x898) == 0) {
    pcVar11 = "no_proxy";
    lVar8 = FUN_1452b8aa0("no_proxy");
    if (lVar8 == 0) {
      pcVar11 = "NO_PROXY";
      lVar8 = FUN_1452b8aa0("NO_PROXY");
      if (lVar8 == 0) goto LAB_144f1137b;
    }
    FUN_144f14ad0(param_1,"Uses proxy env variable %s == \'%s\'",pcVar11,lVar8);
  }
LAB_144f1137b:
  if (*(longlong *)(param_1 + 0x898) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x898);
  }
  cVar3 = FUN_1452ceae0(*(undefined8 *)(param_2 + 0x70),lVar8,local_d8);
  if (cVar3 == '\0') {
    if ((pcVar6 == (char *)0x0) && (pcVar7 == (char *)0x0)) {
      pcVar11 = local_c8;
      pcVar6 = (char *)**(undefined8 **)(param_2 + 0x2e8);
      cVar3 = *pcVar6;
      while (cVar3 != '\0') {
        cVar3 = FUN_144f19640(cVar3);
        *pcVar11 = cVar3;
        pcVar6 = pcVar6 + 1;
        pcVar11 = pcVar11 + 1;
        cVar3 = *pcVar6;
      }
      builtin_strncpy(pcVar11,"_proxy",7);
      pcVar6 = (char *)FUN_1452b8aa0(local_c8);
      if ((pcVar6 == (char *)0x0) && (iVar5 = FUN_144f19540("http_proxy",local_c8), iVar5 == 0)) {
        FUN_144f19650(local_c8,local_c8,0x80);
        pcVar6 = (char *)FUN_1452b8aa0(local_c8);
      }
      pcVar11 = local_c8;
      if (pcVar6 == (char *)0x0) {
        pcVar11 = "all_proxy";
        pcVar6 = (char *)FUN_1452b8aa0("all_proxy");
        if (pcVar6 == (char *)0x0) {
          pcVar11 = "ALL_PROXY";
          pcVar6 = (char *)FUN_1452b8aa0("ALL_PROXY");
          if (pcVar6 == (char *)0x0) goto LAB_144f114ae;
        }
      }
      FUN_144f14ad0(param_1,"Uses proxy env variable %s == \'%s\'",pcVar11,pcVar6);
    }
  }
  else {
    (*(code *)PTR_free_14c6d9f28)(pcVar6);
    pcVar6 = (char *)0x0;
    (*(code *)PTR_free_14c6d9f28)(pcVar7);
    pcVar7 = (char *)0x0;
  }
LAB_144f114ae:
  if (local_d8[0] != '\0') {
    FUN_144f14ad0(param_1,"space-separated NOPROXY patterns are deprecated");
  }
  (*(code *)PTR_free_14c6d9f28)();
  if ((pcVar6 != (char *)0x0) &&
     (((*(longlong *)(param_2 + 0x4a8) != 0 || (*pcVar6 == '\0')) ||
      ((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 0x10) != 0)))) {
    (*(code *)PTR_free_14c6d9f28)();
    pcVar6 = (char *)0x0;
  }
  if ((pcVar7 != (char *)0x0) &&
     ((*pcVar7 == '\0' || ((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 0x10) != 0)))) {
    (*(code *)PTR_free_14c6d9f28)();
    pcVar7 = (char *)0x0;
  }
  if ((pcVar6 == (char *)0x0) && (pcVar7 == (char *)0x0)) {
    *(undefined1 *)(param_2 + 0x2c8) = 0;
LAB_144f11535:
    bVar2 = false;
    *(undefined1 *)(param_2 + 0x2c9) = 0;
  }
  else {
    uVar4 = *(undefined1 *)(param_2 + 0x10c);
    if (pcVar6 != (char *)0x0) {
      iVar5 = FUN_144f10d50(param_1,param_2,pcVar6,uVar4);
      (*(code *)PTR_free_14c6d9f28)(pcVar6);
      pcVar6 = (char *)0x0;
      if (iVar5 != 0) goto LAB_144f116a8;
    }
    if (pcVar7 != (char *)0x0) {
      iVar5 = FUN_144f10d50(param_1,param_2,pcVar7,uVar4);
      (*(code *)PTR_free_14c6d9f28)(pcVar7);
      pcVar7 = (char *)0x0;
      if (iVar5 != 0) goto LAB_144f116a8;
    }
    if (*(longlong *)(param_2 + 0xe8) == 0) {
      *(undefined1 *)(param_2 + 0x2cb) = 0;
      uVar4 = 0;
    }
    else {
      if ((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 3) == 0) {
        if (((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 0x800) != 0) &&
           (*(char *)(param_2 + 0x2cb) == '\0')) {
          *(undefined ***)(param_2 + 0x2e8) = &PTR_DAT_149c07540;
          uVar4 = 1;
          goto LAB_144f11632;
        }
        *(undefined1 *)(param_2 + 0x2cb) = 1;
      }
      uVar4 = 1;
    }
LAB_144f11632:
    *(undefined1 *)(param_2 + 0x2c8) = uVar4;
    if (*(longlong *)(param_2 + 0xb0) == 0) goto LAB_144f11535;
    if ((*(longlong *)(param_2 + 0xe8) == 0) && (*(longlong *)(param_2 + 0xd8) == 0)) {
      uVar1 = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)(param_2 + 0x110) = 0;
      *(undefined8 *)(param_2 + 0xd8) = uVar1;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0xe0));
      *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(param_2 + 0x118) = 0;
    }
    *(undefined1 *)(param_2 + 0x2c9) = 1;
    bVar2 = true;
  }
  if ((*(char *)(param_2 + 0x2c8) != '\0') || (bVar2)) {
    *(undefined1 *)(param_2 + 0x2cd) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 0x2cd) = 0;
    *(undefined1 *)(param_2 + 0x2cd) = 0;
    *(char *)(param_2 + 0x2c8) = '\0';
    *(undefined2 *)(param_2 + 0x2c9) = 0;
    *(undefined1 *)(param_2 + 0x2cb) = 0;
    *(undefined1 *)(param_2 + 0x10c) = 0;
  }
LAB_144f116a8:
  (*(code *)PTR_free_14c6d9f28)(pcVar7);
  (*(code *)PTR_free_14c6d9f28)(pcVar6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 144f116e0 FUN_144f116e0 body=681 status=ok
// SIG undefined FUN_144f116e0(void)

undefined8 FUN_144f116e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char *pcVar7;
  
  plVar1 = (longlong *)(param_2 + 0x150);
  plVar2 = (longlong *)(param_2 + 0x158);
  if (*(longlong *)(param_1 + 0x880) != 0) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x160));
    lVar4 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x880));
    *(longlong *)(param_2 + 0x160) = lVar4;
    if (lVar4 == 0) {
      return 0x1b;
    }
  }
  if (*(char *)(param_1 + 0x719) == '\x02') {
    (*(code *)PTR_free_14c6d9f28)(*plVar1);
    *plVar1 = 0;
    (*(code *)PTR_free_14c6d9f28)(*plVar2);
    *plVar2 = 0;
  }
  *(undefined1 *)(param_2 + 0x2dd) = 0;
  plVar6 = plVar1;
  if ((*(char *)(param_1 + 0x719) != '\0') && (*(longlong *)(param_1 + 0x870) == 0)) {
    lVar4 = *(longlong *)(param_1 + 0x13a0);
    plVar6 = (longlong *)(param_1 + 0x13a0);
    if (lVar4 == 0) {
      plVar6 = plVar1;
    }
    iVar3 = FUN_1452ce260(*(undefined8 *)(param_2 + 0x70),plVar6,plVar2,
                          *(undefined8 *)(param_1 + 0x7c0));
    if (iVar3 < 1) {
      if (iVar3 < 0) {
        FUN_144f14b70(param_1,".netrc parser error");
        return 0x1a;
      }
      *(undefined1 *)(param_2 + 0x2dd) = 1;
    }
    else {
      pcVar7 = ".netrc";
      if (*(char **)(param_1 + 0x7c0) != (char *)0x0) {
        pcVar7 = *(char **)(param_1 + 0x7c0);
      }
      FUN_144f14ad0(param_1,"Couldn\'t find host %s in the %s file; using defaults",
                    *(undefined8 *)(param_2 + 0x70),pcVar7);
    }
    if (lVar4 != 0) {
      (*(code *)PTR_free_14c6d9f28)(*plVar1);
      *plVar1 = 0;
      lVar4 = (*(code *)PTR__strdup_14c6d9f38)(*plVar6);
      *plVar1 = lVar4;
      if (lVar4 == 0) {
        return 0x1b;
      }
    }
    if ((*plVar6 == 0) && (*plVar2 != 0)) {
      lVar4 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
      *plVar6 = lVar4;
      if (lVar4 == 0) {
        return 0x1b;
      }
    }
  }
  if (((*plVar6 != 0) && (*(longlong *)(param_1 + 0x13a0) != *plVar6)) &&
     (uVar5 = FUN_144bb6f60(), (int)uVar5 != 0)) {
    return uVar5;
  }
  if (*(longlong *)(param_1 + 0x13a0) == 0) {
LAB_144f118ec:
    plVar1 = (longlong *)(param_1 + 0x13a8);
    if ((*plVar2 != 0) && (uVar5 = FUN_144bb6f60(plVar1), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*plVar1 != 0) {
      iVar3 = FUN_1452cc2c0(*(undefined8 *)(param_1 + 0x1228),3,*plVar1,0x80);
      if (iVar3 != 0) {
        if (iVar3 != 5) {
          if (iVar3 == 7) {
            return 0x1b;
          }
          if (iVar3 == 8) {
            return 0x43;
          }
          return 3;
        }
        goto LAB_144f118bf;
      }
      if (*plVar2 == 0) {
        lVar4 = (*(code *)PTR__strdup_14c6d9f38)(*plVar1);
        *plVar2 = lVar4;
        if (lVar4 == 0) {
          return 0x1b;
        }
        return 0;
      }
    }
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_1452cc2c0(*(undefined8 *)(param_1 + 0x1228),2,*(longlong *)(param_1 + 0x13a0),0x80);
    if (iVar3 == 0) {
      if (*plVar6 == 0) {
        lVar4 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x13a0));
        *plVar6 = lVar4;
        if (lVar4 == 0) {
          return 0x1b;
        }
      }
      goto LAB_144f118ec;
    }
    if (iVar3 != 5) {
      if (iVar3 == 7) {
        return 0x1b;
      }
      if (iVar3 == 8) {
        return 0x43;
      }
      return 3;
    }
LAB_144f118bf:
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144f11990 FUN_144f11990 body=512 status=ok
// SIG undefined FUN_144f11990(void)

undefined4 FUN_144f11990(undefined8 param_1,char *param_2,longlong *param_3,uint *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *local_res10;
  
  uVar8 = 0;
  uVar4 = 0xffffffff;
  *param_3 = 0;
  *param_4 = 0xffffffff;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  pcVar5 = (char *)(*(code *)PTR__strdup_14c6d9f38)(param_2);
  if (pcVar5 == (char *)0x0) {
    return 0x1b;
  }
  pcVar7 = pcVar5;
  pcVar9 = pcVar5;
  if (*pcVar5 == '[') {
    pcVar9 = pcVar5 + 1;
    bVar2 = pcVar5[1];
    pcVar7 = pcVar9;
    while ((bVar2 != 0 &&
           ((((byte)(bVar2 - 0x30) < 0x37 &&
             ((0x7e0000007e07ffU >> ((ulonglong)(bVar2 - 0x30) & 0x3f) & 1) != 0)) ||
            (bVar2 == 0x2e))))) {
      pbVar1 = (byte *)(pcVar7 + 1);
      pcVar7 = pcVar7 + 1;
      bVar2 = *pbVar1;
    }
    if (bVar2 == 0x25) {
      iVar3 = strncmp("%25",pcVar7,3);
      if (iVar3 != 0) {
        FUN_144f14ad0(param_1,"Please URL encode %% as %%25, see RFC 6874.");
      }
      bVar2 = pcVar7[1];
      while ((pcVar7 = pcVar7 + 1, bVar2 != 0 &&
             ((((byte)(bVar2 + 0x9f) < 0x1a ||
               (((byte)(bVar2 - 0x2d) < 0x33 &&
                ((0x43ffffff01ffbU >> ((ulonglong)(bVar2 - 0x2d) & 0x3f) & 1) != 0)))) ||
              (bVar2 == 0x7e))))) {
        bVar2 = pcVar7[1];
      }
    }
    if (bVar2 == 0x5d) {
      *pcVar7 = '\0';
      pcVar7 = pcVar7 + 1;
    }
    else {
      FUN_144f14ad0(param_1,"Invalid IPv6 address format");
    }
  }
  pcVar7 = strchr(pcVar7,0x3a);
  if (pcVar7 != (char *)0x0) {
    *pcVar7 = '\0';
    local_res10 = (char *)0x0;
    if ((pcVar7[1] != '\0') &&
       (((uVar4 = strtol(pcVar7 + 1,&local_res10,10), local_res10 != (char *)0x0 &&
         (*local_res10 != '\0')) || (0xffff < uVar4)))) {
      FUN_144f14b70(param_1,"No valid port number in connect to host string (%s)",pcVar7 + 1);
      uVar8 = 0x31;
      goto LAB_144f11b5a;
    }
  }
  lVar6 = (*(code *)PTR__strdup_14c6d9f38)(pcVar9);
  *param_3 = lVar6;
  if (lVar6 == 0) {
    uVar8 = 0x1b;
  }
  else {
    *param_4 = uVar4;
  }
LAB_144f11b5a:
  (*(code *)PTR_free_14c6d9f28)(pcVar5);
  return uVar8;
}



// FUNCTION 144f11b90 FUN_144f11b90 body=998 status=ok
// SIG undefined FUN_144f11b90(void)

int FUN_144f11b90(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char *pcVar13;
  longlong lVar14;
  undefined1 *puVar16;
  int iVar17;
  bool bVar18;
  undefined8 *local_res18;
  int local_res20 [2];
  undefined8 **ppuVar19;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffffa0;
  ulonglong uVar21;
  char *local_48;
  char *local_40;
  longlong lVar15;
  
  pcVar13 = (char *)0x0;
  bVar18 = param_3 == (undefined8 *)0x0;
  iVar17 = -1;
  local_res18 = param_3;
  do {
    if (((bVar18) || (pcVar13 != (char *)0x0)) || (iVar17 != -1)) {
      lVar7 = *(longlong *)(param_1 + 0xb00);
      if ((((lVar7 != 0) && (pcVar13 == (char *)0x0)) && (iVar17 == -1)) &&
         (*(int *)(*(longlong *)(param_2 + 0x2e8) + 0x84) == 2)) {
        uVar2 = *(undefined4 *)(lVar7 + 0x28);
        ppuVar19 = &local_res18;
        uVar3 = *(undefined8 *)(param_2 + 0x60);
        iVar17 = 0x10;
        uVar21 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20),uVar2) &
                 0xffffffff00000018;
        cVar4 = FUN_144f18240(lVar7,0x10,uVar3,*(undefined4 *)(param_2 + 0x4c4),ppuVar19,uVar21);
        uVar20 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
        if (cVar4 == '\0') {
          ppuVar19 = &local_res18;
          iVar17 = 8;
          cVar4 = FUN_144f18240(*(undefined8 *)(param_1 + 0xb00),8,uVar3,
                                *(undefined4 *)(param_2 + 0x4c4),ppuVar19,
                                CONCAT44((int)(uVar21 >> 0x20),uVar2) & 0xffffffff00000018);
          uVar20 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
          if (cVar4 == '\0') {
            return 0;
          }
        }
        lVar7 = (*(code *)PTR__strdup_14c6d9f38)(local_res18[2]);
        if (lVar7 == 0) {
          return 0x1b;
        }
        *(longlong *)(param_2 + 0x90) = lVar7;
        *(longlong *)(param_2 + 0xa0) = lVar7;
        *(undefined1 *)(param_2 + 0x2d1) = 1;
        *(uint *)(param_2 + 0x4c8) = (uint)*(ushort *)(local_res18 + 3);
        *(undefined1 *)(param_2 + 0x2d2) = 1;
        *(undefined1 *)(param_2 + 0x2d0) = 1;
        uVar1 = *(undefined2 *)(local_res18 + 3);
        uVar9 = FUN_144f175d0(*(undefined4 *)((longlong)local_res18 + 0x1c));
        uVar10 = FUN_144f175d0(iVar17);
        FUN_144f14ad0(param_1,"Alt-svc connecting from [%s]%s:%d to [%s]%s:%d",uVar10,uVar3,
                      CONCAT44(uVar20,*(undefined4 *)(param_2 + 0x4c4)),uVar9,lVar7,uVar1);
        iVar6 = *(int *)((longlong)local_res18 + 0x1c);
        if (iVar17 != iVar6) {
          if (iVar6 == 8) {
            *(undefined1 *)(param_2 + 0x4d9) = 0xb;
          }
          else if (iVar6 == 0x10) {
            *(undefined1 *)(param_2 + 0x4d9) = 0x14;
          }
          else if (iVar6 == 0x20) {
            *(undefined1 *)(param_2 + 0x4d7) = 5;
            *(undefined1 *)(param_2 + 0x4d9) = 0x1e;
          }
        }
      }
      return 0;
    }
    pcVar11 = (char *)*local_res18;
    local_res20[0] = iVar17;
    local_40 = pcVar13;
    if (*pcVar11 == ':') {
      pcVar11 = pcVar11 + 1;
LAB_144f11c9c:
      if ((*pcVar11 == ':') ||
         (((pcVar8 = strchr(pcVar11,0x3a), iVar6 = 0, pcVar8 != (char *)0x0 &&
           (local_48 = pcVar13, lVar5 = strtol(pcVar11,&local_48,10), local_48 == pcVar8)) &&
          (pcVar11 = pcVar8, iVar6 = 0, lVar5 == *(int *)(param_2 + 0x4c4))))) {
        iVar6 = FUN_144f11990(param_1,pcVar11 + 1,&local_40,local_res20);
        pcVar13 = local_40;
        iVar17 = local_res20[0];
      }
    }
    else {
      puVar16 = &DAT_14996de1b;
      puVar12 = &DAT_14996de1b;
      if (*(char *)(param_2 + 0x2d3) != '\0') {
        puVar16 = &DAT_149c06564;
        puVar12 = &DAT_149c06568;
      }
      lVar7 = FUN_144f2b8b0("%s%s%s",puVar12,*(undefined8 *)(param_2 + 0x70),puVar16);
      if (lVar7 == 0) {
        return 0x1b;
      }
      lVar14 = -1;
      do {
        lVar15 = lVar14;
        lVar14 = lVar15 + 1;
      } while (*(char *)(lVar7 + lVar14) != '\0');
      iVar6 = FUN_144f195b0(pcVar11,lVar7,lVar14);
      (*(code *)PTR_free_14c6d9f28)(lVar7);
      if ((iVar6 == 0) || (pcVar11[lVar14] != ':')) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pcVar11 = pcVar11 + lVar15 + 2;
      iVar6 = 0;
      if (bVar18) goto LAB_144f11c9c;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
      *(undefined1 *)(param_2 + 0x2d1) = 0;
      (*(code *)PTR_free_14c6d9f28)(pcVar13);
      pcVar13 = (char *)0x0;
    }
    else {
      *(char **)(param_2 + 0x90) = pcVar13;
      *(char **)(param_2 + 0xa0) = pcVar13;
      *(undefined1 *)(param_2 + 0x2d1) = 1;
      FUN_144f14ad0(param_1,"Connecting to hostname: %s",pcVar13);
    }
    if (iVar17 < 0) {
      iVar17 = -1;
      *(undefined1 *)(param_2 + 0x2d2) = 0;
      local_res18 = (undefined8 *)local_res18[1];
      bVar18 = local_res18 == (undefined8 *)0x0;
    }
    else {
      *(int *)(param_2 + 0x4c8) = iVar17;
      *(undefined1 *)(param_2 + 0x2d2) = 1;
      FUN_144f14ad0(param_1,"Connecting to port: %d",iVar17);
      local_res18 = (undefined8 *)local_res18[1];
      bVar18 = local_res18 == (undefined8 *)0x0;
    }
  } while( true );
}



// FUNCTION 144f11f80 FUN_144f11f80 body=781 status=ok
// SIG undefined FUN_144f11f80(void)

undefined4 FUN_144f11f80(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong local_res10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  lVar8 = *(longlong *)(param_2 + 0x4a8);
  if ((lVar8 != 0) ||
     (((*(char **)(param_2 + 0xc0) != (char *)0x0 &&
       (iVar2 = strncmp("localhost/",*(char **)(param_2 + 0xc0),10), iVar2 == 0)) &&
      (lVar8 = *(longlong *)(param_2 + 0xc0) + 9, lVar8 != 0)))) {
    *(undefined1 *)(param_2 + 0x4d7) = 6;
    local_res10 = local_res10 & 0xffffffffffffff00;
    plVar5 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(1);
    if (plVar5 == (longlong *)0x0) {
      return 0x1b;
    }
    lVar6 = FUN_1452b2e00(lVar8,&local_res10,*(undefined1 *)(param_2 + 0x2e3));
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
      *(longlong **)(param_2 + 0x50) = plVar5;
      return 0;
    }
    if ((char)local_res10 != '\0') {
      FUN_144f14b70(param_1,"Unix socket path too long: \'%s\'",lVar8);
    }
    (*(code *)PTR_free_14c6d9f28)(plVar5);
    if ((char)local_res10 != '\0') {
      return 6;
    }
    return 0x1b;
  }
  local_res10 = 0;
  if (*(char *)(param_2 + 0x2cd) == '\0') {
    uVar3 = FUN_144f15e70(param_1,0,1);
    cVar1 = *(char *)(param_2 + 0x2d1);
    if (*(char *)(param_2 + 0x2d2) == '\0') {
      uVar7 = *(undefined4 *)(param_2 + 0x4c4);
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x4c8);
    }
    *(undefined4 *)(param_2 + 0x4c0) = uVar7;
    lVar8 = 0xa0;
    if (cVar1 == '\0') {
      lVar8 = 0x70;
    }
    lVar8 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar8 + param_2));
    *(longlong *)(param_2 + 0x80) = lVar8;
    if (lVar8 != 0) {
      iVar2 = FUN_144f1b490(param_1,lVar8,*(undefined4 *)(param_2 + 0x4c0),&local_res10,uVar3);
      *(ulonglong *)(param_2 + 0x50) = local_res10;
      if (iVar2 != 1) {
        if (iVar2 == -2) {
          local_48 = *(undefined4 *)(param_1 + 0xb98);
          uStack_44 = *(undefined4 *)(param_1 + 0xb9c);
          uStack_40 = *(undefined4 *)(param_1 + 0xba0);
          uStack_3c = *(undefined4 *)(param_1 + 0xba4);
          puVar4 = (undefined4 *)FUN_144f07150(local_28);
          local_38 = *puVar4;
          uStack_34 = puVar4[1];
          uStack_30 = puVar4[2];
          uStack_2c = puVar4[3];
          uVar3 = FUN_144f071e0(&local_38,&local_48);
          lVar8 = 0xa8;
          if (cVar1 == '\0') {
            lVar8 = 0x78;
          }
          FUN_144f14b70(param_1,"Failed to resolve host \'%s\' with timeout after %I64d ms",
                        *(undefined8 *)(lVar8 + param_2),uVar3);
          return 0x1c;
        }
        if (local_res10 == 0) {
          lVar8 = 0xa8;
          if (cVar1 == '\0') {
            lVar8 = 0x78;
          }
          FUN_144f14b70(param_1,"Could not resolve host: %s",*(undefined8 *)(lVar8 + param_2));
          return 6;
        }
        return 0;
      }
      goto LAB_144f1208c;
    }
  }
  else {
    uVar3 = FUN_144f15e70(param_1,0,1);
    cVar1 = *(char *)(param_2 + 0x2c9);
    lVar8 = 0xc0;
    if (cVar1 == '\0') {
      lVar8 = 0xf8;
    }
    lVar8 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(lVar8 + param_2));
    *(longlong *)(param_2 + 0x80) = lVar8;
    if (lVar8 != 0) {
      iVar2 = FUN_144f1b490(param_1,lVar8,*(undefined4 *)(param_2 + 0x4c0),&local_res10,uVar3);
      *(ulonglong *)(param_2 + 0x50) = local_res10;
      if (iVar2 != 1) {
        if (iVar2 == -2) {
          return 0x1c;
        }
        if (local_res10 == 0) {
          lVar8 = 200;
          if (cVar1 == '\0') {
            lVar8 = 0x100;
          }
          FUN_144f14b70(param_1,"Couldn\'t resolve proxy \'%s\'",*(undefined8 *)(lVar8 + param_2));
          return 5;
        }
        return 0;
      }
LAB_144f1208c:
      *param_3 = 1;
      return 0;
    }
  }
  return 0x1b;
}



// FUNCTION 144f12290 FUN_144f12290 body=3049 status=ok
// SIG undefined FUN_144f12290(void)

void FUN_144f12290(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  char cVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined1 auStack_c8 [32];
  char *local_a8;
  char local_98;
  undefined1 local_97 [7];
  longlong local_90;
  undefined1 *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = 0;
  local_98 = '\0';
  local_88 = param_3;
  uVar8 = FUN_144bbada0(*(undefined8 *)(param_1 + 0xd8));
  local_80 = FUN_144bbadc0(*(undefined8 *)(param_1 + 0xd8));
  *param_3 = 0;
  *param_2 = 0;
  if ((*(longlong *)(param_1 + 0x1270) == 0) || (lVar9 = FUN_144f10240(param_1), lVar9 == 0))
  goto LAB_144f12d1c;
  *param_2 = lVar9;
  iVar7 = FUN_144f105a0(param_1,lVar9);
  if (iVar7 != 0) goto LAB_144f12d1c;
  if (*(longlong *)(param_1 + 0x950) != 0) {
    lVar10 = (*(code *)PTR__strdup_14c6d9f38)();
    *(longlong *)(lVar9 + 0x168) = lVar10;
    if (lVar10 == 0) goto LAB_144f12d1c;
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    lVar10 = (*(code *)PTR__strdup_14c6d9f38)();
    *(longlong *)(lVar9 + 0x170) = lVar10;
    if (lVar10 == 0) goto LAB_144f12d1c;
  }
  if (*(longlong *)(param_1 + 0x928) != 0) {
    lVar10 = (*(code *)PTR__strdup_14c6d9f38)();
    *(longlong *)(lVar9 + 0x4a8) = lVar10;
    if (lVar10 == 0) goto LAB_144f12d1c;
    *(undefined1 *)(lVar9 + 0x2e3) = *(undefined1 *)(param_1 + 0xae2);
  }
  iVar7 = FUN_144f111f0(param_1,lVar9);
  if (iVar7 != 0) goto LAB_144f12d1c;
  if (((*(byte *)(*(longlong *)(lVar9 + 0x2f0) + 0x8c) & 1) != 0) &&
     (*(char *)(lVar9 + 0x2c8) != '\0')) {
    *(undefined1 *)(lVar9 + 0x2cb) = 1;
  }
  uVar1 = *(ushort *)(param_1 + 0x208);
  if ((uVar1 != 0) && (*(char *)(param_1 + 0x13c8) != '\0')) {
    *(uint *)(lVar9 + 0x4c4) = (uint)uVar1;
    FUN_144f2b7e0(&local_68,0x10,&DAT_1499c1968,(uint)uVar1);
    iVar7 = FUN_1452cc2c0(*(undefined8 *)(param_1 + 0x1228),6,&local_68);
    if (iVar7 != 0) goto LAB_144f12d1c;
  }
  iVar7 = FUN_144f116e0(param_1,lVar9);
  if (iVar7 != 0) goto LAB_144f12d1c;
  pcVar14 = "anonymous";
  iVar7 = 0;
  pcVar16 = "ftp@example.com";
  if (((*(byte *)(*(longlong *)(lVar9 + 0x2e8) + 0x8c) & 0x20) == 0) ||
     (*(longlong *)(param_1 + 0x13a0) != 0)) {
    pcVar14 = "";
    pcVar16 = "";
  }
  if (*(longlong *)(lVar9 + 0x150) == 0) {
    lVar10 = (*(code *)PTR__strdup_14c6d9f38)(pcVar14);
    *(longlong *)(lVar9 + 0x150) = lVar10;
    if (lVar10 == 0) goto LAB_144f12d1c;
  }
  if (*(longlong *)(lVar9 + 0x158) == 0) {
    lVar10 = (*(code *)PTR__strdup_14c6d9f38)(pcVar16);
    *(longlong *)(lVar9 + 0x158) = lVar10;
    iVar7 = 0;
    if (lVar10 == 0) {
      iVar7 = 0x1b;
    }
  }
  if ((((iVar7 != 0) ||
       (iVar7 = FUN_144f11b90(param_1,lVar9,*(undefined8 *)(param_1 + 0x520)), iVar7 != 0)) ||
      ((*(char *)(lVar9 + 0x2c8) != '\0' && (iVar7 = FUN_1452cef00(lVar9 + 0xe8), iVar7 != 0)))) ||
     ((*(char *)(lVar9 + 0x2c9) != '\0' && (iVar7 = FUN_1452cef00(lVar9 + 0xb0), iVar7 != 0))))
  goto LAB_144f12d1c;
  if (*(char *)(lVar9 + 0x2d1) != '\0') {
    iVar7 = FUN_1452cef00(lVar9 + 0x90);
    if (iVar7 != 0) goto LAB_144f12d1c;
    if ((*(char *)(lVar9 + 0x2d1) != '\0') &&
       (iVar7 = FUN_144f19540(*(undefined8 *)(lVar9 + 0xa0),*(undefined8 *)(lVar9 + 0x70)),
       iVar7 != 0)) {
      *(undefined1 *)(lVar9 + 0x2d1) = 0;
    }
  }
  cVar13 = *(char *)(lVar9 + 0x2d2);
  if ((cVar13 != '\0') && (*(int *)(lVar9 + 0x4c8) == *(int *)(lVar9 + 0x4c4))) {
    *(undefined1 *)(lVar9 + 0x2d2) = 0;
    cVar13 = '\0';
  }
  if (((*(char *)(lVar9 + 0x2d1) != '\0') || (cVar13 != '\0')) && (*(char *)(lVar9 + 0x2c8) != '\0')
     ) {
    *(undefined1 *)(lVar9 + 0x2cb) = 1;
  }
  lVar10 = *(longlong *)(lVar9 + 0x2e8);
  if (*(code **)(lVar10 + 8) != (code *)0x0) {
    iVar7 = (**(code **)(lVar10 + 8))(param_1,lVar9);
    if (iVar7 != 0) goto LAB_144f12d1c;
    lVar10 = *(longlong *)(lVar9 + 0x2e8);
  }
  if (*(int *)(lVar9 + 0x4c0) < 0) {
    *(undefined4 *)(lVar9 + 0x4c0) = *(undefined4 *)(lVar10 + 0x80);
  }
  if ((*(byte *)(lVar10 + 0x8c) & 0x10) != 0) {
    FUN_144f16130(param_1,lVar9,0,0xffffffff);
    iVar7 = (**(code **)(*(longlong *)(lVar9 + 0x2e8) + 0x28))(param_1,&local_98);
    if (iVar7 == 0) {
      FUN_144bbac00(param_1,lVar9);
      iVar7 = FUN_144f0aef0(param_1);
      if (iVar7 != 0) goto LAB_144f12d1c;
      iVar7 = FUN_144f10cb0(param_1);
      if (iVar7 != 0) {
        (**(code **)(*(longlong *)(lVar9 + 0x2e8) + 0x18))(param_1,iVar7,0);
        goto LAB_144f12d1c;
      }
      local_a8 = (char *)CONCAT44(local_a8._4_4_,0xffffffff);
      FUN_144f24c20(param_1,0xffffffff,0xffffffffffffffff);
    }
    FUN_144f0e1b0(param_1,lVar9);
    goto LAB_144f12d1c;
  }
  *(code **)(lVar9 + 0x1b8) = FUN_144f14230;
  *(code **)(lVar9 + 0x1c8) = FUN_144f142a0;
  *(code **)(lVar9 + 0x1c0) = FUN_144f14230;
  *(code **)(lVar9 + 0x1d0) = FUN_144f142a0;
  *(undefined1 *)(lVar9 + 0x2e0) = *(undefined1 *)(param_1 + 0xadb);
  *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_1 + 0x7f0);
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x858);
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x9c0);
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x830);
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x810);
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x9a0);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x9d0);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x978);
  *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(param_1 + 0x7f8);
  *(undefined8 *)(param_1 + 0x5f8) = *(undefined8 *)(param_1 + 0x808);
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x828);
  *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(param_1 + 0x838);
  *(undefined8 *)(param_1 + 0x620) = *(undefined8 *)(param_1 + 0x818);
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_1 + 0x9a8);
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_1 + 0x9d8);
  *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(param_1 + 0x860);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_1 + 0x9c8);
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_1 + 0x850);
  *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(param_1 + 0x738);
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_1 + 0x790);
  *(undefined8 *)(param_1 + 0x690) = *(undefined8 *)(param_1 + 0x7b0);
  *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(param_1 + 0x7a0);
  *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_1 + 0x728);
  *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(param_1 + 0x9b8);
  *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x848);
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x730);
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x788);
  *(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)(param_1 + 0x7a8);
  *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)(param_1 + 0x798);
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x720);
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_1 + 0x9b0);
  cVar13 = FUN_144f0c750((undefined8 *)(param_1 + 0x538),lVar9 + 0x1e8);
  if ((cVar13 == '\0') || (cVar13 = FUN_144f0c750(param_1 + 0x5f0,lVar9 + 600), cVar13 == '\0'))
  goto LAB_144f12d1c;
  puVar11 = (undefined8 *)FUN_144f07150(&local_78);
  uVar15 = *puVar11;
  uVar5 = puVar11[1];
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbeca0(param_1,5,2);
  }
  local_68 = *(longlong *)(*(longlong *)(param_1 + 0xc90) + 0x48);
  uStack_60 = *(undefined8 *)(*(longlong *)(param_1 + 0xc90) + 0x50);
  local_78 = uVar15;
  uStack_70 = uVar5;
  lVar10 = FUN_144f071e0(&local_78,&local_68);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,5);
  }
  if (999 < lVar10) {
    uStack_60 = 0;
    local_68 = param_1;
    cVar13 = FUN_144f0b280(param_1,*(undefined8 *)(param_1 + 0xc90),&local_68,FUN_144f0f810);
    while (cVar13 != '\0') {
      FUN_144f0b160(param_1,uStack_60,1);
      FUN_144f0ed40(param_1,uStack_60,1);
      cVar13 = FUN_144f0b280(param_1,*(undefined8 *)(param_1 + 0xc90),&local_68,FUN_144f0f810);
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbeca0(param_1,5,2);
    }
    lVar10 = *(longlong *)(param_1 + 0xc90);
    *(undefined8 *)(lVar10 + 0x48) = uVar15;
    *(undefined8 *)(lVar10 + 0x50) = uVar5;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbece0(param_1,5);
    }
  }
  cVar13 = '\0';
  if (((*(char *)(param_1 + 0xad2) == '\0') || (*(int *)(param_1 + 0xda0) != 0)) &&
     (*(char *)(param_1 + 0xab2) == '\0')) {
    local_a8 = &local_98;
    cVar6 = FUN_144f0f850(param_1,lVar9,&local_90,local_97);
    lVar10 = local_90;
    cVar13 = local_98;
    if (cVar6 == '\0') goto LAB_144f12c59;
    if (*(longlong *)(lVar9 + 0x150) != 0) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(local_90 + 0x150));
      *(undefined8 *)(lVar10 + 0x150) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0x158));
      *(undefined8 *)(lVar10 + 0x158) = 0;
      *(undefined8 *)(lVar10 + 0x150) = *(undefined8 *)(lVar9 + 0x150);
      *(undefined8 *)(lVar10 + 0x158) = *(undefined8 *)(lVar9 + 0x158);
      *(undefined8 *)(lVar9 + 0x150) = 0;
      *(undefined8 *)(lVar9 + 0x158) = 0;
    }
    cVar13 = *(char *)(lVar9 + 0x2ca);
    *(char *)(lVar10 + 0x2ca) = cVar13;
    if (cVar13 != '\0') {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0x110));
      *(undefined8 *)(lVar10 + 0x110) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0xd8));
      *(undefined8 *)(lVar10 + 0xd8) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0x118));
      *(undefined8 *)(lVar10 + 0x118) = 0;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0xe0));
      *(undefined8 *)(lVar10 + 0xe0) = 0;
      *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)(lVar9 + 0x110);
      *(undefined8 *)(lVar10 + 0xd8) = *(undefined8 *)(lVar9 + 0xd8);
      *(undefined8 *)(lVar10 + 0x118) = *(undefined8 *)(lVar9 + 0x118);
      *(undefined8 *)(lVar10 + 0xe0) = *(undefined8 *)(lVar9 + 0xe0);
      *(undefined8 *)(lVar9 + 0x110) = 0;
      *(undefined8 *)(lVar9 + 0xd8) = 0;
      *(undefined8 *)(lVar9 + 0x118) = 0;
      *(undefined8 *)(lVar9 + 0xe0) = 0;
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0x60));
    *(undefined8 *)(lVar10 + 0x60) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0x90));
    *(undefined8 *)(lVar10 + 0x90) = 0;
    uVar15 = *(undefined8 *)(lVar9 + 0x68);
    *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar9 + 0x60);
    *(undefined8 *)(lVar10 + 0x68) = uVar15;
    uVar15 = *(undefined8 *)(lVar9 + 0x78);
    *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar9 + 0x70);
    *(undefined8 *)(lVar10 + 0x78) = uVar15;
    *(undefined8 *)(lVar9 + 0x60) = 0;
    uVar2 = *(undefined4 *)(lVar9 + 0x94);
    uVar3 = *(undefined4 *)(lVar9 + 0x98);
    uVar4 = *(undefined4 *)(lVar9 + 0x9c);
    *(undefined8 *)(lVar9 + 0x68) = 0;
    *(undefined4 *)(lVar10 + 0x90) = *(undefined4 *)(lVar9 + 0x90);
    *(undefined4 *)(lVar10 + 0x94) = uVar2;
    *(undefined4 *)(lVar10 + 0x98) = uVar3;
    *(undefined4 *)(lVar10 + 0x9c) = uVar4;
    uVar2 = *(undefined4 *)(lVar9 + 0xa4);
    uVar3 = *(undefined4 *)(lVar9 + 0xa8);
    uVar4 = *(undefined4 *)(lVar9 + 0xac);
    *(undefined4 *)(lVar10 + 0xa0) = *(undefined4 *)(lVar9 + 0xa0);
    *(undefined4 *)(lVar10 + 0xa4) = uVar2;
    *(undefined4 *)(lVar10 + 0xa8) = uVar3;
    *(undefined4 *)(lVar10 + 0xac) = uVar4;
    *(undefined8 *)(lVar9 + 0x90) = 0;
    *(undefined4 *)(lVar10 + 0x4c8) = *(undefined4 *)(lVar9 + 0x4c8);
    *(undefined4 *)(lVar10 + 0x4c4) = *(undefined4 *)(lVar9 + 0x4c4);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar10 + 0x80));
    *(undefined8 *)(lVar10 + 0x80) = 0;
    *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar9 + 0x80);
    *(undefined8 *)(lVar9 + 0x80) = 0;
    *(undefined1 *)(lVar10 + 0x2cf) = 1;
    FUN_144f0f490(param_1,lVar9);
    *param_2 = lVar10;
    if (*(longlong *)(lVar10 + 0xc0) == 0) {
      if (*(longlong *)(lVar10 + 0xf8) == 0) {
        uVar15 = *(undefined8 *)(lVar10 + 0x78);
      }
      else {
        uVar15 = *(undefined8 *)(lVar10 + 0x100);
      }
    }
    else {
      uVar15 = *(undefined8 *)(lVar10 + 200);
    }
    pcVar14 = "host";
    if (*(char *)(lVar10 + 0x2cd) != '\0') {
      pcVar14 = "proxy";
    }
    FUN_144f14ad0(param_1,"Re-using existing connection with %s %s",pcVar14,uVar15);
    lVar9 = lVar10;
  }
  else {
LAB_144f12c59:
    if (((*(uint *)(*(longlong *)(lVar9 + 0x2e8) + 0x8c) & 0x100) != 0) &&
       (*(char *)(param_1 + 0xadc) != '\0')) {
      *(undefined1 *)(lVar9 + 0x2e1) = 1;
    }
    if (cVar13 != '\0') {
LAB_144f12cf8:
      FUN_144f14ad0(param_1,"No connections available.");
      FUN_144f0f490(param_1,lVar9);
      *param_2 = 0;
      goto LAB_144f12d1c;
    }
    lVar10 = FUN_144f0ab60(param_1,lVar9,*(undefined8 *)(param_1 + 0xc90));
    if (((uVar8 == 0) || (lVar10 == 0)) || (*(ulonglong *)(lVar10 + 8) < uVar8)) {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbece0(param_1,5);
      }
    }
    else {
      lVar10 = FUN_144f0b380(param_1,lVar10);
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbece0(param_1,5);
      }
      if (lVar10 == 0) {
        FUN_144f14ad0(param_1,"No more connections allowed to host: %zu",uVar8);
        goto LAB_144f12cf8;
      }
      FUN_144f0ed40(param_1,lVar10,0);
    }
    uVar8 = local_80;
    if ((local_80 != 0) && (uVar12 = FUN_144f0ac70(param_1), uVar8 <= uVar12)) {
      lVar10 = FUN_144f0b450(param_1);
      if (lVar10 == 0) {
        FUN_144f14ad0(param_1,"No connections available in cache");
        goto LAB_144f12cf8;
      }
      FUN_144f0ed40(param_1,lVar10,0);
    }
    FUN_144bbac00(param_1,lVar9);
    iVar7 = FUN_144f0aef0(param_1);
    if (iVar7 != 0) goto LAB_144f12d1c;
    if (((*(byte *)(param_1 + 0xe24) & 0x28) != 0) && (*(char *)(param_1 + 0xe2c) != '\0')) {
      FUN_144f14ad0(param_1,"NTLM picked AND auth done set, clear picked");
      *(undefined4 *)(param_1 + 0xe24) = 0;
      *(undefined1 *)(param_1 + 0xe2c) = 0;
    }
    if (((*(byte *)(param_1 + 0xe34) & 0x28) != 0) && (*(char *)(param_1 + 0xe3c) != '\0')) {
      FUN_144f14ad0(param_1,"NTLM-proxy picked AND auth done set, clear picked");
      *(undefined4 *)(param_1 + 0xe34) = 0;
      *(undefined1 *)(param_1 + 0xe3c) = 0;
    }
  }
  FUN_144f0e1b0(param_1,lVar9);
  iVar7 = FUN_144f10cb0(param_1);
  if (iVar7 == 0) {
    *(undefined8 *)(lVar9 + 0x338) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(lVar9 + 0x340) = *(undefined8 *)(param_1 + 0x2b8);
    if (*(char *)(lVar9 + 0x2cf) == '\0') {
      iVar7 = FUN_144f11f80(param_1,lVar9);
      if (iVar7 == 0) {
        FUN_144f14430(param_1);
      }
    }
    else {
      *local_88 = 0;
      FUN_144f14430(param_1);
    }
  }
LAB_144f12d1c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144f12ea0 FUN_144f12ea0 body=1929 status=ok
// SIG undefined FUN_144f12ea0(void)

undefined4 FUN_144f12ea0(longlong param_1,uint param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  
  uVar7 = 0x30;
  if (param_1 == 0) {
    return 0x2b;
  }
  uVar1 = param_2 & 0xf00000;
  if (uVar1 < 0x400001) {
    if (uVar1 == 0x400000) {
      if (param_3 == (double *)0x0) {
        return 0x30;
      }
      if (param_2 == 0x40001b) {
        dVar5 = (double)thunk_FUN_1452b3c00(param_1);
        *param_3 = dVar5;
      }
      else if (param_2 == 0x40001c) {
        dVar5 = (double)FUN_144f063b0(param_1);
        *param_3 = dVar5;
      }
      else if (param_2 == 0x400022) {
        *param_3 = (double)(param_1 + 0x14b0);
      }
      else {
        if ((param_2 != 0x40002b) && (param_2 != 0x40002d)) {
          return 0x30;
        }
        lVar3 = *(longlong *)(param_1 + 0x20);
        *param_3 = (double)(param_1 + 0x14c8);
        iVar2 = FUN_144f0ca70();
        *(int *)(param_1 + 0x14c8) = iVar2;
        *(undefined8 *)(param_1 + 0x14d0) = 0;
        if ((lVar3 != 0) && (iVar2 != 0)) {
          uVar4 = FUN_144f0d6a0(param_1,0,param_2,0);
          *(undefined8 *)(param_1 + 0x14d0) = uVar4;
        }
      }
    }
    else if (uVar1 == 0x100000) {
      if (param_3 == (double *)0x0) {
        return 0x30;
      }
      switch(param_2) {
      case 0x100001:
        puVar6 = &DAT_14996de1b;
        if (*(undefined1 **)(param_1 + 0x1270) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_1 + 0x1270);
        }
        *param_3 = (double)puVar6;
        break;
      default:
        goto switchD_144f12f4a_caseD_30000b;
      case 0x100012:
        *param_3 = *(double *)(param_1 + 0x1418);
        break;
      case 0x100015:
        *param_3 = *(double *)(param_1 + 0x6d8);
        break;
      case 0x10001e:
        *param_3 = *(double *)(param_1 + 0x11b0);
        break;
      case 0x10001f:
        *param_3 = *(double *)(param_1 + 0x1420);
        break;
      case 0x100020:
        *param_3 = (double)(param_1 + 0x1434);
        break;
      case 0x100024:
        *param_3 = *(double *)(param_1 + 0x8a0);
        break;
      case 0x100029:
        *param_3 = (double)(param_1 + 0x146c);
        break;
      case 0x100031:
        *param_3 = *(double *)(param_1 + 0x14a0);
        break;
      case 0x10003a:
        dVar5 = *(double *)(param_1 + 0x750);
        if (dVar5 != 0.0) goto LAB_144f133e0;
        if (*(char *)(param_1 + 0xace) == '\0') {
          switch(*(undefined1 *)(param_1 + 0x13c2)) {
          default:
            *param_3 = (double)&DAT_149c067b0;
            break;
          case 1:
          case 2:
          case 3:
            *param_3 = (double)&DAT_149c067a4;
            break;
          case 4:
            *param_3 = (double)&DAT_149c067ac;
            break;
          case 5:
            goto switchD_144f13328_caseD_5;
          }
        }
        else {
switchD_144f13328_caseD_5:
          *param_3 = (double)&DAT_149c0679c;
        }
        break;
      case 0x10003c:
        *param_3 = *(double *)(param_1 + 0x1278);
        break;
      case 0x10003d:
      case 0x10003e:
        dVar5 = 0.0;
LAB_144f133e0:
        *param_3 = dVar5;
      }
    }
    else if (uVar1 == 0x200000) {
      if (param_3 == (double *)0x0) {
        return 0x30;
      }
      switch(param_2) {
      case 0x200002:
        *(uint *)param_3 = *(uint *)(param_1 + 0x13e8);
        break;
      default:
        goto switchD_144f12f4a_caseD_30000b;
      case 0x20000b:
        *(uint *)param_3 = *(uint *)(param_1 + 0x1430);
        break;
      case 0x20000c:
        *(uint *)param_3 = *(uint *)(param_1 + 0x1400);
        break;
      case 0x20000d:
        *(uint *)param_3 = *(uint *)(param_1 + 0x5a8);
        break;
      case 0x20000e:
        lVar3 = *(longlong *)(param_1 + 0x13f8);
        uVar1 = 0x7fffffff;
        if ((lVar3 < 0x80000000) && (uVar1 = (uint)lVar3, lVar3 < -0x80000000)) {
          uVar1 = 0x80000000;
        }
        *(uint *)param_3 = uVar1;
        break;
      case 0x200014:
        *(uint *)param_3 = *(uint *)(param_1 + 0xda0);
        break;
      case 0x200016:
        *(uint *)param_3 = *(uint *)(param_1 + 0x13ec);
        break;
      case 0x200017:
        *(uint *)param_3 = *(uint *)(param_1 + 0x140c);
        break;
      case 0x200018:
        *(uint *)param_3 = *(uint *)(param_1 + 0x1408);
        break;
      case 0x200019:
        *(uint *)param_3 = *(uint *)(param_1 + 0xd94);
        break;
      case 0x20001a:
        *(uint *)param_3 = *(uint *)(param_1 + 0x1410);
        break;
      case 0x20001d:
        lVar3 = FUN_144f15fa0(param_1,0);
        uVar1 = 0xffffffff;
        if (lVar3 != -1) {
          uVar1 = (uint)lVar3;
        }
        *(uint *)param_3 = uVar1;
        break;
      case 0x200023:
        if (*(int *)(param_1 + 0x13e8) == 0x130) {
LAB_144f131fa:
          *(uint *)param_3 = 1;
        }
        else {
          *(uint *)param_3 = (uint)(*(char *)(param_1 + 0x14c4) != '\0');
        }
        break;
      case 0x200025:
        *(uint *)param_3 = *(uint *)(param_1 + 0x11c8);
        break;
      case 0x200026:
        *(uint *)param_3 = *(uint *)(param_1 + 0x11cc);
        break;
      case 0x200027:
        *(uint *)param_3 = *(uint *)(param_1 + 0x11d0);
        break;
      case 0x200028:
        *(uint *)param_3 = *(uint *)(param_1 + 0x1464);
        break;
      case 0x20002a:
        *(uint *)param_3 = *(uint *)(param_1 + 0x149c);
        break;
      case 0x20002e:
        iVar2 = *(int *)(param_1 + 0x13f0);
        if (iVar2 == 10) goto LAB_144f131fa;
        if (iVar2 == 0xb) {
          *(uint *)param_3 = 2;
        }
        else if (iVar2 == 0x14) {
          *(uint *)param_3 = 3;
        }
        else if (iVar2 == 0x1e) {
          *(uint *)param_3 = 0x1e;
        }
        else {
          *(uint *)param_3 = 0;
        }
        break;
      case 0x20002f:
        *(uint *)param_3 = *(uint *)(param_1 + 0x660);
        break;
      case 0x200030:
        *(uint *)param_3 = *(uint *)(param_1 + 0x14a8);
        break;
      case 0x20003b:
        *(uint *)param_3 = *(uint *)(param_1 + 0x14c0);
      }
    }
    else {
      if (uVar1 != 0x300000) {
        return 0x30;
      }
      if (param_3 == (double *)0x0) {
        return 0x30;
      }
      switch(param_2) {
      case 0x300003:
        *param_3 = (double)*(longlong *)(param_1 + 0xb40) / 1000000.0;
        break;
      case 0x300004:
        *param_3 = (double)*(longlong *)(param_1 + 0xb58) / 1000000.0;
        break;
      case 0x300005:
        *param_3 = (double)*(longlong *)(param_1 + 0xb60) / 1000000.0;
        break;
      case 0x300006:
        *param_3 = (double)*(longlong *)(param_1 + 0xb70) / 1000000.0;
        break;
      case 0x300007:
        *param_3 = (double)*(longlong *)(param_1 + 0xb28);
        break;
      case 0x300008:
        *param_3 = (double)*(longlong *)(param_1 + 0xb20);
        break;
      case 0x300009:
        *param_3 = (double)*(longlong *)(param_1 + 0xb48);
        break;
      case 0x30000a:
        *param_3 = (double)*(longlong *)(param_1 + 0xb50);
        break;
      default:
        goto switchD_144f12f4a_caseD_30000b;
      case 0x30000f:
        if ((*(byte *)(param_1 + 0xb3c) & 0x40) == 0) {
LAB_144f1306c:
          *param_3 = -1.0;
        }
        else {
          *param_3 = (double)*(longlong *)(param_1 + 0xb10);
        }
        break;
      case 0x300010:
        if ((*(byte *)(param_1 + 0xb3c) & 0x20) == 0) goto LAB_144f1306c;
        *param_3 = (double)*(longlong *)(param_1 + 0xb18);
        break;
      case 0x300011:
        *param_3 = (double)*(longlong *)(param_1 + 0xb78) / 1000000.0;
        break;
      case 0x300013:
        *param_3 = (double)*(longlong *)(param_1 + 0xb80) / 1000000.0;
        break;
      case 0x300021:
        *param_3 = (double)*(longlong *)(param_1 + 0xb68) / 1000000.0;
      }
    }
  }
  else if (uVar1 == 0x500000) {
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
    if (param_2 != 0x50002c) {
      return 0x30;
    }
    dVar5 = (double)FUN_144f15fa0(param_1,0);
    *param_3 = dVar5;
  }
  else {
    if (uVar1 != 0x600000) {
      return 0x30;
    }
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
    switch(param_2) {
    case 0x600007:
      *param_3 = *(double *)(param_1 + 0xb28);
      break;
    case 0x600008:
      *param_3 = *(double *)(param_1 + 0xb20);
      break;
    case 0x600009:
      *param_3 = *(double *)(param_1 + 0xb48);
      break;
    case 0x60000a:
      *param_3 = *(double *)(param_1 + 0xb50);
      break;
    default:
      goto switchD_144f12f4a_caseD_30000b;
    case 0x60000e:
      *param_3 = *(double *)(param_1 + 0x13f8);
      break;
    case 0x60000f:
      if ((*(byte *)(param_1 + 0xb3c) & 0x40) == 0) {
LAB_144f13541:
        *param_3 = -NAN;
      }
      else {
        *param_3 = *(double *)(param_1 + 0xb10);
      }
      break;
    case 0x600010:
      if ((*(byte *)(param_1 + 0xb3c) & 0x20) == 0) goto LAB_144f13541;
      *param_3 = *(double *)(param_1 + 0xb18);
      break;
    case 0x600032:
      *param_3 = *(double *)(param_1 + 0xb40);
      break;
    case 0x600033:
      *param_3 = *(double *)(param_1 + 0xb58);
      break;
    case 0x600034:
      *param_3 = *(double *)(param_1 + 0xb60);
      break;
    case 0x600035:
      *param_3 = *(double *)(param_1 + 0xb70);
      break;
    case 0x600036:
      *param_3 = *(double *)(param_1 + 0xb78);
      break;
    case 0x600037:
      *param_3 = *(double *)(param_1 + 0xb80);
      break;
    case 0x600038:
      *param_3 = *(double *)(param_1 + 0xb68);
      break;
    case 0x600039:
      *param_3 = *(double *)(param_1 + 0x1428);
      break;
    case 0x60003f:
      *param_3 = *(double *)(param_1 + 8);
      break;
    case 0x600040:
      if (*(longlong *)(param_1 + 0x20) == 0) {
        *param_3 = *(double *)(param_1 + 0xcb0);
      }
      else {
        *param_3 = *(double *)(*(longlong *)(param_1 + 0x20) + 0x48);
      }
    }
  }
  uVar7 = 0;
switchD_144f12f4a_caseD_30000b:
  return uVar7;
}



// FUNCTION 144f13850 FUN_144f13850 body=235 status=ok
// SIG undefined FUN_144f13850(void)

undefined8 FUN_144f13850(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x13f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb58) = 0;
  *(undefined8 *)(param_1 + 0xb60) = 0;
  *(undefined8 *)(param_1 + 0xb68) = 0;
  *(undefined8 *)(param_1 + 0xb70) = 0;
  *(undefined8 *)(param_1 + 0xb78) = 0;
  *(undefined8 *)(param_1 + 0xb40) = 0;
  *(undefined8 *)(param_1 + 0xb80) = 0;
  *(undefined1 *)(param_1 + 0xc8d) = 0;
  *(undefined8 *)(param_1 + 0x13e8) = 0;
  *(undefined4 *)(param_1 + 0x13f0) = 0;
  *(undefined1 *)(param_1 + 0x14c4) = 0;
  *(undefined4 *)(param_1 + 0x1430) = 0;
  *(undefined8 *)(param_1 + 0x1400) = 0;
  *(undefined8 *)(param_1 + 0x1408) = 0;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1418));
  *(undefined8 *)(param_1 + 0x1418) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1420));
  *(undefined8 *)(param_1 + 0x1420) = 0;
  *(undefined1 *)(param_1 + 0x1434) = 0;
  *(undefined1 *)(param_1 + 0x146c) = 0;
  *(undefined4 *)(param_1 + 0x1464) = 0;
  *(undefined4 *)(param_1 + 0x149c) = 0;
  *(undefined8 *)(param_1 + 0x1428) = 0;
  *(undefined8 *)(param_1 + 0x14a0) = 0;
  *(undefined4 *)(param_1 + 0x14a8) = 0;
  FUN_144f0cc90(param_1);
  return 0;
}



// FUNCTION 144f13940 FUN_144f13940 body=87 status=ok
// SIG undefined FUN_144f13940(void)

void * FUN_144f13940(void *param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(param_2);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  memcpy(_Dst,param_1,param_2);
  return _Dst;
}



// FUNCTION 144f139a0 FUN_144f139a0 body=68 status=ok
// SIG undefined FUN_144f139a0(void)

longlong FUN_144f139a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_realloc_14c6d9f30)();
  if ((param_2 != 0) && (lVar1 == 0)) {
    (*(code *)PTR_free_14c6d9f28)(param_1);
  }
  return lVar1;
}



// FUNCTION 144f13a50 FUN_144f13a50 body=44 status=ok
// SIG undefined FUN_144f13a50(void)

bool FUN_144f13a50(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 144f13ad0 FUN_144f13ad0 body=44 status=ok
// SIG undefined FUN_144f13ad0(void)

bool FUN_144f13ad0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 144f13b40 FUN_144f13b40 body=95 status=ok
// SIG undefined FUN_144f13b40(void)

undefined8 FUN_144f13b40(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[2] = param_3;
    *param_1 = (longlong)puVar1;
    return 0;
  }
  *param_1 = 0;
  return 0x1b;
}



// FUNCTION 144f13ba0 FUN_144f13ba0 body=48 status=ok
// SIG undefined FUN_144f13ba0(void)

void FUN_144f13ba0(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2 + (longlong)param_3 * 8;
  uVar2 = *(undefined8 *)(lVar1 + 0x1d8);
  *(longlong *)(param_4 + 0x18) = param_2;
  *(int *)(param_4 + 0x20) = param_3;
  *(undefined8 *)(param_4 + 8) = uVar2;
  *(longlong *)(lVar1 + 0x1d8) = param_4;
  FUN_144f14c60(param_1,param_4,"added");
  return;
}



// FUNCTION 144f13bd0 FUN_144f13bd0 body=47 status=ok
// SIG undefined FUN_144f13bd0(void)

void FUN_144f13bd0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = param_2;
  do {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    puVar1 = (undefined8 *)(param_2 + 8);
    param_2 = *(longlong *)(param_2 + 8);
  } while (param_2 != 0);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 144f13c00 FUN_144f13c00 body=114 status=ok
// SIG undefined FUN_144f13c00(void)

undefined8 FUN_144f13c00(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar2 = param_1;
  do {
    lVar1 = lVar3;
    if (lVar1 == 0) {
      if (param_4 != '\0') {
LAB_144f13c39:
        param_2[1] = 0;
        (**(code **)(*param_2 + 0x10))(param_2,param_3);
        (*(code *)PTR_free_14c6d9f28)(param_2);
      }
      return uVar4;
    }
    if (lVar1 == param_1) {
      uVar4 = 1;
      *(longlong *)(lVar2 + 8) = param_2[1];
      param_2[1] = 0;
      goto LAB_144f13c39;
    }
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = lVar1;
  } while( true );
}



// FUNCTION 144f13c80 FUN_144f13c80 body=106 status=ok
// SIG undefined FUN_144f13c80(void)

void FUN_144f13c80(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    *param_1 = 0;
    do {
      plVar1 = (longlong *)plVar2[1];
      plVar2[1] = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      (*(code *)PTR_free_14c6d9f28)(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 144f13cf0 FUN_144f13cf0 body=107 status=ok
// SIG undefined FUN_144f13cf0(void)

void FUN_144f13cf0(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 0x1d8 + (longlong)param_3 * 8);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x1d8 + (longlong)param_3 * 8) = 0;
    do {
      plVar1 = (longlong *)plVar2[1];
      plVar2[1] = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      (*(code *)PTR_free_14c6d9f28)(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 144f13d60 FUN_144f13d60 body=18 status=ok
// SIG undefined FUN_144f13d60(void)

undefined8 FUN_144f13d60(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f13d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x18))();
    return uVar1;
  }
  return 2;
}



// FUNCTION 144f13d80 FUN_144f13d80 body=13 status=ok
// SIG undefined FUN_144f13d80(void)

void FUN_144f13d80(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f13d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}



// FUNCTION 144f13d90 FUN_144f13d90 body=15 status=ok
// SIG undefined FUN_144f13d90(void)

undefined8 FUN_144f13d90(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f13d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144f13da0 FUN_144f13da0 body=31 status=ok
// SIG undefined FUN_144f13da0(void)

undefined8 FUN_144f13da0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 *in_stack_00000028;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f13dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x40))();
    return uVar1;
  }
  *in_stack_00000028 = 0x37;
  return 0xffffffffffffffff;
}



// FUNCTION 144f13dc0 FUN_144f13dc0 body=31 status=ok
// SIG undefined FUN_144f13dc0(void)

undefined8 FUN_144f13dc0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 *in_stack_00000028;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f13dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x48))();
    return uVar1;
  }
  *in_stack_00000028 = 0x38;
  return 0xffffffffffffffff;
}



// FUNCTION 144f13de0 FUN_144f13de0 body=166 status=ok
// SIG undefined FUN_144f13de0(void)

ulonglong FUN_144f13de0(longlong *param_1,undefined8 param_2,char param_3,undefined4 param_4,
                       undefined4 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  do {
    if (*(code **)(*param_1 + 0x50) != (code *)&LAB_144f13ac0) {
      uVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2,param_4,param_5,param_6);
      uVar2 = uVar1 & 0xffffffff;
      if ((param_3 == '\0') && ((int)uVar1 != 0)) {
        return uVar1;
      }
    }
    param_1 = (longlong *)param_1[1];
    if (param_1 == (longlong *)0x0) {
      return uVar2;
    }
  } while( true );
}



// FUNCTION 144f13e90 FUN_144f13e90 body=36 status=ok
// SIG undefined FUN_144f13e90(void)

ulonglong FUN_144f13e90(ulonglong *param_1)

{
  ulonglong in_RAX;
  
  for (; param_1 != (ulonglong *)0x0; param_1 = (ulonglong *)param_1[1]) {
    in_RAX = *param_1;
    if ((*(uint *)(in_RAX + 8) & 2) != 0) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
    if ((*(uint *)(in_RAX + 8) & 1) != 0) break;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144f13ec0 FUN_144f13ec0 body=53 status=ok
// SIG undefined FUN_144f13ec0(void)

undefined8 FUN_144f13ec0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,3,0,local_res8), iVar1 == 0)) {
    return local_res8[0];
  }
  return 0xffffffffffffffff;
}



// FUNCTION 144f13f00 FUN_144f13f00 body=281 status=ok
// SIG undefined FUN_144f13f00(void)

int FUN_144f13f00(longlong param_1,int param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_28 [16];
  
  iVar4 = 0;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  if (plVar2 == (longlong *)0x0) {
    iVar4 = 2;
  }
  else {
    cVar1 = *(char *)((longlong)plVar2 + 0x24);
    *param_4 = cVar1;
    if (cVar1 == '\0') {
      iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      if (iVar4 == 0) {
        if (*param_4 != '\0') {
          lVar5 = 2;
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1d8);
          do {
            for (plVar2 = (longlong *)*puVar6; plVar2 != (longlong *)0x0;
                plVar2 = (longlong *)plVar2[1]) {
              if (*(code **)(*plVar2 + 0x50) != (code *)&LAB_144f13ac0) {
                (**(code **)(*plVar2 + 0x50))(plVar2,param_1,0x100,0,0);
              }
            }
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          FUN_144f148e0(param_1,*(undefined8 *)(param_1 + 0x20));
          puVar6 = (undefined8 *)FUN_144f07150(local_28);
          lVar5 = *(longlong *)(param_1 + 0x20);
          uVar3 = puVar6[1];
          *(undefined8 *)(lVar5 + 0x2f8) = *puVar6;
          *(undefined8 *)(lVar5 + 0x300) = uVar3;
        }
      }
      else {
        FUN_144f148e0(param_1,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return iVar4;
}



// FUNCTION 144f14020 FUN_144f14020 body=28 status=ok
// SIG undefined FUN_144f14020(void)

longlong FUN_144f14020(longlong param_1,int param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8 + (longlong)param_2 * 8);
  uVar2 = (uint7)(int3)((uint)param_2 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x24) != '\0')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 144f14040 FUN_144f14040 body=50 status=ok
// SIG undefined FUN_144f14040(void)

ulonglong FUN_144f14040(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
      plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
    if (*(char *)((longlong)plVar1 + 0x24) != '\0') {
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
    if ((*(byte *)(*plVar1 + 8) & 1) != 0) break;
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 144f14080 FUN_144f14080 body=55 status=ok
// SIG undefined FUN_144f14080(void)

undefined8 FUN_144f14080(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_1 != 0) {
    for (plVar1 = *(longlong **)(param_1 + 0x1d8 + (longlong)param_2 * 8); plVar1 != (longlong *)0x0
        ; plVar1 = (longlong *)plVar1[1]) {
      if ((*(uint *)(*plVar1 + 8) & 2) != 0) {
        return 1;
      }
      if ((*(uint *)(*plVar1 + 8) & 1) != 0) {
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 144f140c0 FUN_144f140c0 body=52 status=ok
// SIG undefined FUN_144f140c0(void)

ulonglong FUN_144f140c0(longlong param_1,int param_2)

{
  longlong *in_RAX;
  
  if (param_1 != 0) {
    for (in_RAX = *(longlong **)(param_1 + 0x1d8 + (longlong)param_2 * 8); in_RAX != (longlong *)0x0
        ; in_RAX = (longlong *)in_RAX[1]) {
      if ((*(uint *)(*in_RAX + 8) & 4) != 0) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      if ((*(uint *)(*in_RAX + 8) & 3) != 0) break;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144f14100 FUN_144f14100 body=34 status=ok
// SIG undefined FUN_144f14100(void)

void FUN_144f14100(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f1411d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 144f14130 FUN_144f14130 body=51 status=ok
// SIG undefined FUN_144f14130(void)

longlong FUN_144f14130(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return (ulonglong)(uint7)(int7)(int3)((uint)param_2 >> 8) << 8;
    }
    if (*(char *)((longlong)plVar1 + 0x24) != '\0') break;
    plVar1 = (longlong *)plVar1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x000144f1415f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return lVar2;
}



// FUNCTION 144f14170 FUN_144f14170 body=122 status=ok
// SIG undefined FUN_144f14170(void)

undefined8 FUN_144f14170(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return 0xffffffffffffffff;
  }
  plVar2 = *(longlong **)(lVar1 + 0x1d8 + (longlong)param_2 * 8);
  if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x24) == '\0')) {
    iVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,3,0,local_res8);
    uVar4 = 0xffffffffffffffff;
    if (iVar3 == 0) {
      uVar4 = local_res8[0];
    }
    return uVar4;
  }
  return *(undefined8 *)(lVar1 + 0x1a8 + (longlong)param_2 * 8);
}



// FUNCTION 144f141f0 FUN_144f141f0 body=56 status=ok
// SIG undefined FUN_144f141f0(void)

undefined8 FUN_144f141f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  do {
    plVar3 = plVar1;
    plVar1 = (longlong *)plVar3[1];
    if (plVar1 == (longlong *)0x0) break;
  } while (*(char *)((longlong)plVar1 + 0x24) == '\0');
                    /* WARNING: Could not recover jumptable at 0x000144f14221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
  return uVar2;
}



// FUNCTION 144f14230 FUN_144f14230 body=99 status=ok
// SIG undefined FUN_144f14230(void)

undefined8
FUN_144f14230(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5
             )

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      FUN_144f14b70(param_1,"recv: no filter connected");
      *param_5 = 2;
      return 0xffffffffffffffff;
    }
    if (*(char *)((longlong)plVar1 + 0x24) != '\0') break;
    plVar1 = (longlong *)plVar1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x000144f1428f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
  return uVar2;
}



// FUNCTION 144f142a0 FUN_144f142a0 body=99 status=ok
// SIG undefined FUN_144f142a0(void)

undefined8
FUN_144f142a0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5
             )

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      FUN_144f14b70(param_1,"send: no filter connected");
      *param_5 = 2;
      return 0xffffffffffffffff;
    }
    if (*(char *)((longlong)plVar1 + 0x24) != '\0') break;
    plVar1 = (longlong *)plVar1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x000144f142ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
  return uVar2;
}



// FUNCTION 144f14310 FUN_144f14310 body=141 status=ok
// SIG undefined FUN_144f14310(void)

void FUN_144f14310(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x1d8);
  lVar2 = 2;
  do {
    for (plVar1 = (longlong *)*puVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
      if (*(code **)(*plVar1 + 0x50) != (code *)&LAB_144f13ac0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1,0,0);
      }
    }
    puVar3 = puVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144f143a0 FUN_144f143a0 body=141 status=ok
// SIG undefined FUN_144f143a0(void)

void FUN_144f143a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x1d8);
  lVar2 = 2;
  do {
    for (plVar1 = (longlong *)*puVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
      if (*(code **)(*plVar1 + 0x50) != (code *)&LAB_144f13ac0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_2,2,0,0);
      }
    }
    puVar3 = puVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144f14430 FUN_144f14430 body=156 status=ok
// SIG undefined FUN_144f14430(void)

ulonglong FUN_144f14430(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x1d8);
  uVar5 = uVar6;
  do {
    plVar3 = (longlong *)*plVar4;
    uVar2 = uVar6;
    if (plVar3 != (longlong *)0x0) {
      do {
        if (*(code **)(*plVar3 + 0x50) != (code *)&LAB_144f13ac0) {
          uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,param_1,4,0,0);
          uVar2 = (ulonglong)uVar1;
          if (uVar1 != 0) break;
        }
        plVar3 = (longlong *)plVar3[1];
      } while (plVar3 != (longlong *)0x0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar5 = uVar5 + 1;
    plVar4 = plVar4 + 1;
    if (1 < uVar5) {
      return uVar2;
    }
  } while( true );
}



// FUNCTION 144f144d0 FUN_144f144d0 body=156 status=ok
// SIG undefined FUN_144f144d0(void)

ulonglong FUN_144f144d0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x1d8);
  uVar5 = uVar6;
  do {
    plVar3 = (longlong *)*plVar4;
    uVar2 = uVar6;
    if (plVar3 != (longlong *)0x0) {
      do {
        if (*(code **)(*plVar3 + 0x50) != (code *)&LAB_144f13ac0) {
          uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,param_1,5,0,0);
          uVar2 = (ulonglong)uVar1;
          if (uVar1 != 0) break;
        }
        plVar3 = (longlong *)plVar3[1];
      } while (plVar3 != (longlong *)0x0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar5 = uVar5 + 1;
    plVar4 = plVar4 + 1;
    if (1 < uVar5) {
      return uVar2;
    }
  } while( true );
}



// FUNCTION 144f14570 FUN_144f14570 body=141 status=ok
// SIG undefined FUN_144f14570(void)

void FUN_144f14570(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1d8);
  lVar2 = 2;
  do {
    for (plVar1 = (longlong *)*puVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
      if (*(code **)(*plVar1 + 0x50) != (code *)&LAB_144f13ac0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_1,8,0,0);
      }
    }
    puVar3 = puVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144f14600 FUN_144f14600 body=165 status=ok
// SIG undefined FUN_144f14600(void)

void FUN_144f14600(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1d8);
  lVar3 = 2;
  do {
    for (plVar1 = (longlong *)*puVar2; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
      if (*(code **)(*plVar1 + 0x50) != (code *)&LAB_144f13ac0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_1,7,param_2,0);
      }
    }
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 144f146b0 FUN_144f146b0 body=183 status=ok
// SIG undefined FUN_144f146b0(void)

ulonglong FUN_144f146b0(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x1d8);
  uVar3 = uVar6;
  do {
    plVar2 = (longlong *)*plVar4;
    uVar5 = uVar6;
    if (plVar2 != (longlong *)0x0) {
      do {
        if (*(code **)(*plVar2 + 0x50) != (code *)&LAB_144f13ac0) {
          uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,param_1,6,param_2,0);
          uVar5 = (ulonglong)uVar1;
          if (uVar1 != 0) break;
        }
        plVar2 = (longlong *)plVar2[1];
      } while (plVar2 != (longlong *)0x0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 1;
    if (1 < uVar3) {
      return uVar5;
    }
  } while( true );
}



// FUNCTION 144f14770 FUN_144f14770 body=143 status=ok
// SIG undefined FUN_144f14770(void)

void FUN_144f14770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_2 + 0x1d8);
  lVar2 = 2;
  do {
    for (plVar1 = (longlong *)*puVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
      if (*(code **)(*plVar1 + 0x50) != (code *)&LAB_144f13ac0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_1,0x100,0,0);
      }
    }
    puVar3 = puVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144f14800 FUN_144f14800 body=59 status=ok
// SIG undefined FUN_144f14800(void)

undefined8 FUN_144f14800(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x1d8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(plVar1[3] + 0x2ce) == '\0')) {
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144f14840 FUN_144f14840 body=69 status=ok
// SIG undefined FUN_144f14840(void)

void FUN_144f14840(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1d8 + (longlong)param_2 * 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f1485d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    return;
  }
  *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x70);
  *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x78);
  *param_5 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x4c4);
  return;
}



// FUNCTION 144f14890 FUN_144f14890 body=79 status=ok
// SIG undefined FUN_144f14890(void)

longlong FUN_144f14890(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int local_res18 [4];
  
  local_res18[0] = 0;
  plVar1 = *(longlong **)(param_2 + 0x1d8 + (longlong)param_3 * 8);
  if (((plVar1 != (longlong *)0x0) &&
      (iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,1,local_res18,0), iVar2 == 0)) &&
     (0 < local_res18[0])) {
    return (longlong)local_res18[0];
  }
  return 1;
}



// FUNCTION 144f148e0 FUN_144f148e0 body=219 status=ok
// SIG undefined FUN_144f148e0(void)

void FUN_144f148e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_2 + 0x1d8);
  if (plVar1 != (longlong *)0x0) {
    local_58 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,4);
    if ((local_38 != 0) || ((int)uStack_30 != 0)) {
      local_48 = (undefined4)local_38;
      uStack_44 = local_38._4_4_;
      iStack_40 = (int)uStack_30;
      uStack_3c = uStack_30._4_4_;
      FUN_144f261f0(param_1,4,&local_48);
    }
    local_58 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,5);
    if ((local_28 != 0) || ((int)uStack_20 != 0)) {
      local_48 = (undefined4)local_28;
      uStack_44 = local_28._4_4_;
      iStack_40 = (int)uStack_20;
      uStack_3c = uStack_20._4_4_;
      FUN_144f261f0(param_1,5,&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 144f149d0 FUN_144f149d0 body=3 status=ok
// SIG undefined FUN_144f149d0(void)

undefined8 FUN_144f149d0(void)

{
  return 0;
}



// FUNCTION 144f149e0 FUN_144f149e0 body=225 status=ok
// SIG undefined FUN_144f149e0(void)

void FUN_144f149e0(longlong param_1,int param_2,void *param_3,size_t param_4)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xacf) != '\0') {
    if (*(longlong *)(param_1 + 0x268) == 0) {
      if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
        fwrite(&DAT_149c06800 + (longlong)param_2 * 3,2,1,*(FILE **)(param_1 + 0x1d8));
        fwrite(param_3,param_4,1,*(FILE **)(param_1 + 0x1d8));
      }
    }
    else {
      uVar1 = FUN_144bbad10();
      FUN_144bbace0(param_1,1);
      (**(code **)(param_1 + 0x268))
                (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x1e0));
      FUN_144bbace0(param_1,uVar1);
    }
  }
  return;
}



// FUNCTION 144f14ad0 FUN_144f14ad0 body=149 status=ok
// SIG undefined FUN_144f14ad0(void)

void FUN_144f14ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_848 [32];
  undefined1 local_828 [2064];
  ulonglong local_18;
  
  if (param_1 == 0) {
    return;
  }
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_848;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(char *)(param_1 + 0xacf) != '\0') {
    iVar1 = FUN_144f2b850(local_828,0x800,param_2,&local_res18);
    local_828[iVar1] = 10;
    if (0x801 < (ulonglong)(longlong)(iVar1 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_828[iVar1 + 1] = 0;
    FUN_144f149e0(param_1,0,local_828);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_848);
}



// FUNCTION 144f14b70 FUN_144f14b70 body=216 status=ok
// SIG undefined FUN_144f14b70(void)

void FUN_144f14b70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_148 [32];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((*(char *)(param_1 + 0xacf) != '\0') || (*(longlong *)(param_1 + 0x1e8) != 0)) {
    iVar2 = FUN_144f2b850(local_128,0x100,param_2,&local_res18);
    pcVar4 = *(char **)(param_1 + 0x1e8);
    if ((pcVar4 != (char *)0x0) && (*(char *)(param_1 + 0x13c7) == '\0')) {
      pcVar3 = local_128;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      *(undefined1 *)(param_1 + 0x13c7) = 1;
    }
    local_128[iVar2] = '\n';
    if (0x101 < (ulonglong)(longlong)(iVar2 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_128[iVar2 + 1] = '\0';
    FUN_144f149e0(param_1,0,local_128);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144f14c60 FUN_144f14c60 body=239 status=ok
// SIG undefined FUN_144f14c60(void)

void FUN_144f14c60(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res20;
  undefined1 auStack_858 [32];
  undefined1 local_838 [2064];
  ulonglong local_28;
  
  if (param_1 == 0) {
    return;
  }
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_858;
  local_res20 = param_4;
  if (((*(char *)(param_1 + 0xacf) != '\0') && (param_2 != (longlong *)0x0)) &&
     (0 < *(int *)(*param_2 + 0xc))) {
    iVar1 = FUN_144f2b7e0(local_838,0x800,"[%s] ",*(undefined8 *)*param_2);
    iVar2 = FUN_144f2b850(local_838 + iVar1,(longlong)(0x800 - iVar1),param_3,&local_res20);
    lVar3 = (longlong)(iVar2 + iVar1);
    local_838[lVar3] = 10;
    if (0x801 < lVar3 + 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_838[lVar3 + 1] = 0;
    FUN_144f149e0(param_1,0,local_838);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_858);
}



// FUNCTION 144f14d70 FUN_144f14d70 body=50 status=ok
// SIG undefined FUN_144f14d70(void)

undefined8 FUN_144f14d70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != 0) && (*(char *)(param_1 + 0x1cd) == '\0')) {
    uVar1 = FUN_144f152e0(param_1,1,0,param_3,param_4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144f14dc0 FUN_144f14dc0 body=80 status=ok
// SIG undefined FUN_144f14dc0(void)

undefined8 FUN_144f14dc0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0x1cd) != '\0') {
      return 0;
    }
    if ((*(longlong *)(param_1 + 0x170) != 0) && (*(char *)(param_1 + 0xad7) == '\0')) {
      uVar1 = FUN_144f1a1a0();
      return uVar1;
    }
  }
  uVar1 = FUN_144f152e0(param_1,param_2,0,param_3,param_4);
  return uVar1;
}



// FUNCTION 144f14e10 FUN_144f14e10 body=170 status=ok
// SIG undefined FUN_144f14e10(void)

void FUN_144f14e10(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  while (plVar1 != (longlong *)0x0) {
    *(longlong *)(param_1 + 0x170) = plVar1[1];
    (**(code **)(*plVar1 + 0x20))(param_1,plVar1);
    (*(code *)PTR_free_14c6d9f28)(plVar1);
    plVar1 = *(longlong **)(param_1 + 0x170);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xd90) == 0) {
    *(undefined4 *)(param_1 + 0xd90) = 0;
    return;
  }
  lVar3 = param_1 + 0xd18;
  do {
    FUN_144f07d10(lVar3);
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + 0x28;
  } while (uVar2 < *(uint *)(param_1 + 0xd90));
  *(undefined4 *)(param_1 + 0xd90) = 0;
  return;
}



// FUNCTION 144f14ec0 FUN_144f14ec0 body=131 status=ok
// SIG undefined FUN_144f14ec0(void)

int FUN_144f14ec0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  iVar1 = 0x1b;
  plVar2 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(1,*(undefined8 *)(param_3 + 0x28));
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_3;
    *(undefined4 *)(plVar2 + 2) = param_4;
    iVar1 = (**(code **)(param_3 + 0x10))(param_2,plVar2);
  }
  plVar3 = plVar2;
  if (iVar1 != 0) {
    plVar3 = (longlong *)0x0;
  }
  *param_1 = (longlong)plVar3;
  if (iVar1 != 0) {
    (*(code *)PTR_free_14c6d9f28)(plVar2);
  }
  return iVar1;
}



// FUNCTION 144f14f50 FUN_144f14f50 body=34 status=ok
// SIG undefined FUN_144f14f50(void)

void FUN_144f14f50(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x20))();
    (*(code *)PTR_free_14c6d9f28)(param_2);
  }
  return;
}



// FUNCTION 144f14f80 FUN_144f14f80 body=250 status=ok
// SIG undefined FUN_144f14f80(void)

undefined8 FUN_144f14f80(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x170) == 0) {
    puVar4 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)();
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = 0;
      (*(code *)PTR_free_14c6d9f28)(0);
      return 0x1b;
    }
    *puVar4 = &DAT_149c06820;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined8 **)(param_1 + 0x170) = puVar4;
  }
  bVar1 = *(byte *)(param_1 + 0x1c9);
  *(byte *)(param_1 + 0x1c9) = bVar1 + 1;
  if (bVar1 < 5) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    if (*(uint *)(param_2 + 0x10) < *(uint *)(lVar2 + 0x10)) {
      for (lVar3 = *(longlong *)(lVar2 + 8);
          (lVar3 != 0 && (*(uint *)(param_2 + 0x10) < *(uint *)(lVar3 + 0x10)));
          lVar3 = *(longlong *)(lVar3 + 8)) {
        lVar2 = lVar3;
      }
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar2 + 8);
      *(longlong *)(lVar2 + 8) = param_2;
      return 0;
    }
    *(longlong *)(param_2 + 8) = lVar2;
    *(longlong *)(param_1 + 0x170) = param_2;
    return 0;
  }
  FUN_144f14b70(param_1,"Reject response due to more than %u content encodings",5);
  return 0x3d;
}



// FUNCTION 144f15080 FUN_144f15080 body=122 status=ok
// SIG undefined FUN_144f15080(void)

undefined4
FUN_144f15080(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  local_res8[0] = 0x38;
  lVar1 = *(longlong *)(lVar3 + 0x1b0);
  *param_5 = 0;
  uVar2 = (ulonglong)(param_2 == lVar1);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x6cc);
  if (param_4 < *(uint *)(param_1 + 0x6cc)) {
    uVar4 = param_4;
  }
  lVar3 = (**(code **)(lVar3 + 0x1b8 + uVar2 * 8))(param_1,uVar2,param_3,uVar4,local_res8);
  if (-1 < lVar3) {
    *param_5 = *param_5 + lVar3;
    return 0;
  }
  return local_res8[0];
}



// FUNCTION 144f15100 FUN_144f15100 body=122 status=ok
// SIG undefined FUN_144f15100(void)

/* WARNING: Removing unreachable block (ram,0x000144f15167) */
/* WARNING: Removing unreachable block (ram,0x000144f1514b) */

undefined4
FUN_144f15100(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == -1) || (param_2 != *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1b0))) {
    lVar2 = 0;
  }
  else {
    lVar2 = 1;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x1c8 + lVar2 * 8))();
  *param_5 = uVar1;
  return 0;
}



// FUNCTION 144f15180 FUN_144f15180 body=93 status=ok
// SIG undefined FUN_144f15180(void)

/* WARNING: Removing unreachable block (ram,0x000144f151ca) */
/* WARNING: Removing unreachable block (ram,0x000144f151ae) */

undefined4
FUN_144f15180(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
             )

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x1c8 + (longlong)param_2 * 8))();
  *param_5 = uVar1;
  return 0;
}



// FUNCTION 144f151e0 FUN_144f151e0 body=248 status=ok
// SIG undefined FUN_144f151e0(void)

undefined8
FUN_144f151e0(longlong param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  bVar2 = true;
  FUN_144f146b0();
  uVar5 = 0;
  if (*(uint *)(param_1 + 0xd90) != 0) {
    do {
      lVar1 = param_1 + uVar5 * 0x28;
      if ((*(int *)(lVar1 + 0xd38) == param_2) &&
         ((*(char *)(lVar1 + 0xd3c) != '\0') == (param_3 != '\0'))) {
        bVar2 = false;
        break;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xd90));
    if (2 < (uint)uVar5) {
      return 0x1b;
    }
    if (!bVar2) goto LAB_144f1528f;
  }
  lVar1 = param_1 + uVar5 * 0x28;
  FUN_144f07cf0(lVar1 + 0xd18,0x4000000);
  *(int *)(lVar1 + 0xd38) = param_2;
  *(char *)(lVar1 + 0xd3c) = param_3;
  *(int *)(param_1 + 0xd90) = *(int *)(param_1 + 0xd90) + 1;
LAB_144f1528f:
  iVar3 = thunk_FUN_144f07eb0(param_1 + (uVar5 * 5 + 0x1a3) * 8,param_4,param_5);
  if (iVar3 != 0) {
    return 0x1b;
  }
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x10;
  return 0;
}



// FUNCTION 144f152e0 FUN_144f152e0 body=634 status=ok
// SIG undefined FUN_144f152e0(void)

undefined8
FUN_144f152e0(longlong param_1,ulonglong param_2,char param_3,longlong param_4,ulonglong param_5)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  longlong lVar8;
  code *local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x1f0);
  local_res8 = (code *)0x0;
  if (param_5 != 0) {
    if ((*(byte *)(param_1 + 0x154) & 0x10) != 0) {
      uVar3 = FUN_144f151e0(param_1,param_2,param_3 == '\0',param_4,param_5);
      return uVar3;
    }
    pcVar7 = (code *)0x0;
    if ((param_3 == '\0') &&
       (((param_2 & 1) != 0 ||
        ((pcVar7 = (code *)0x0, (param_2 & 4) != 0 && (*(char *)(param_1 + 0xacb) != '\0')))))) {
      pcVar7 = *(code **)(param_1 + 0x238);
    }
    uVar6 = param_5;
    lVar8 = param_4;
    pcVar2 = local_res8;
    if ((((param_2 & 6) != 0) &&
        (pcVar2 = *(code **)(param_1 + 0x240), *(code **)(param_1 + 0x240) == (code *)0x0)) &&
       (pcVar2 = local_res8, *(longlong *)(param_1 + 0x200) != 0)) {
      pcVar2 = *(code **)(param_1 + 0x238);
    }
    do {
      local_res8 = pcVar2;
      uVar5 = 0x4000;
      if (uVar6 < 0x4001) {
        uVar5 = uVar6;
      }
      if (pcVar7 != (code *)0x0) {
        FUN_144bbace0(param_1,1);
        uVar4 = (*pcVar7)(lVar8,1,uVar5,uVar3);
        FUN_144bbace0(param_1,0);
        if (uVar4 == 0x10000001) {
          if ((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 0x10) != 0) {
            FUN_144f14b70(param_1,"Write callback asked for PAUSE when not supported");
            return 0x17;
          }
          uVar3 = FUN_144f151e0(param_1,param_2 & 0xffffffff,1,lVar8,uVar6);
          return uVar3;
        }
        if (uVar4 != uVar5) {
          FUN_144f14b70(param_1,"Failure writing output to destination");
          return 0x17;
        }
      }
      uVar6 = uVar6 - uVar5;
      lVar8 = lVar8 + uVar5;
      pcVar2 = local_res8;
    } while (uVar6 != 0);
    if (((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x84) & 3) != 0) && (((byte)param_2 & 0xc) == 4))
    {
      if ((param_2 & 0x10) == 0) {
        if ((param_2 & 0x20) == 0) {
          uVar6 = (ulonglong)(byte)(((param_2 & 0x40) != 0) + 1);
        }
        else {
          uVar6 = 8;
        }
      }
      else {
        uVar6 = param_2 & 0xc;
      }
      uVar3 = FUN_1452cf3f0(param_1,param_4,uVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    if (local_res8 != (code *)0x0) {
      FUN_144bbace0(param_1,1);
      uVar6 = (*local_res8)(param_4,1,param_5,*(undefined8 *)(param_1 + 0x200));
      FUN_144bbace0(param_1,0);
      if (uVar6 == 0x10000001) {
        uVar3 = FUN_144f151e0(param_1,param_2 & 0xffffffff,0,param_4,param_5);
        return uVar3;
      }
      if (uVar6 != param_5) {
        FUN_144f14b70(param_1,"Failed writing header");
        return 0x17;
      }
    }
  }
  return 0;
}



// FUNCTION 144f15560 FUN_144f15560 body=185 status=ok
// SIG undefined FUN_144f15560(void)

void FUN_144f15560(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    lVar3 = 2;
    do {
      if (((*plVar4 != 0) && (lVar1 = *(longlong *)(*plVar4 + 0x20), lVar1 != 0)) &&
         (iVar2 = FUN_144f13d90(lVar1,param_2,local_58), iVar2 != 0)) {
        *(undefined8 *)(param_3 + lVar5 * 8) = local_58[0];
        lVar5 = lVar5 + 1;
      }
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 144f15630 FUN_144f15630 body=317 status=ok
// SIG undefined FUN_144f15630(void)

ulonglong FUN_144f15630(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_18 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) == '\0') {
    *param_4 = '\0';
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 == 0) {
      uVar4 = FUN_144f16c10(param_1,param_2,*(undefined8 *)(lVar2 + 0x10));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(undefined4 *)(lVar2 + 0x18) = 1;
    }
    else if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      *param_4 = '\x01';
      return 0;
    }
    uVar3 = FUN_144f166f0(param_1,param_2,param_4);
    uVar4 = (ulonglong)uVar3;
    if ((uVar3 == 0) && (*param_4 != '\0')) {
      *(undefined4 *)(lVar2 + 0x18) = 2;
      *(undefined1 *)(param_1 + 0x24) = 1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x20);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x20) = 0;
      FUN_144f16e10(param_1,param_2);
      FUN_144f13de0(*(undefined8 *)(param_1 + 8),param_2,1,0x100,0,0);
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2e8) + 0x84) & 0x30) != 0) {
        FUN_144f25fd0(local_18,param_2,5);
      }
      FUN_144f0f1f0(param_2,*(undefined8 *)(param_1 + 0x18));
      *(int *)(param_2 + 0x1410) = *(int *)(param_2 + 0x1410) + 1;
    }
  }
  else {
    *param_4 = '\x01';
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144f15770 FUN_144f15770 body=111 status=ok
// SIG undefined FUN_144f15770(void)

void FUN_144f15770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_144f14c60(param_2,param_1,"close");
  FUN_144f16e10(param_1,param_2);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    FUN_144f13c80(param_1 + 8,param_2);
  }
  return;
}



// FUNCTION 144f157e0 FUN_144f157e0 body=134 status=ok
// SIG undefined FUN_144f157e0(void)

undefined8 FUN_144f157e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000144f15808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    return uVar3;
  }
  uVar4 = 0;
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  do {
    if ((*plVar5 != 0) && (plVar1 = *(longlong **)(*plVar5 + 0x20), plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    uVar4 = uVar4 + 1;
    plVar5 = plVar5 + 1;
  } while (uVar4 < 2);
  return 0;
}



// FUNCTION 144f15870 FUN_144f15870 body=318 status=ok
// SIG undefined FUN_144f15870(void)

undefined8
FUN_144f15870(longlong param_1,undefined8 param_2,int param_3,int *param_4,undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int local_res8 [2];
  undefined1 local_38 [16];
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (param_3 == 2) {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      iVar5 = -1;
      lVar6 = 2;
      do {
        if ((*plVar7 != 0) && (plVar1 = *(longlong **)(*plVar7 + 0x20), plVar1 != (longlong *)0x0))
        {
          iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2,2,local_res8,0);
          if (((iVar2 == 0) && (-1 < local_res8[0])) && ((iVar5 < 0 || (local_res8[0] < iVar5)))) {
            iVar5 = local_res8[0];
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *param_4 = iVar5;
      FUN_144f14c60(param_2,param_1,"query connect reply: %dms",iVar5);
      return 0;
    }
    if (param_3 == 4) {
      uVar8 = 4;
    }
    else {
      if (param_3 != 5) goto LAB_144f15984;
      uVar8 = 5;
    }
    puVar3 = (undefined8 *)FUN_144f16ec0(local_38,param_1,param_2,uVar8);
    uVar4 = puVar3[1];
    *param_5 = *puVar3;
    param_5[1] = uVar4;
    return 0;
  }
LAB_144f15984:
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f1599a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
    return uVar4;
  }
  return 0x30;
}



// FUNCTION 144f159b0 FUN_144f159b0 body=84 status=ok
// SIG undefined FUN_144f159b0(void)

void FUN_144f159b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_144f14c60(param_2,param_1,"destroy");
  if (lVar1 != 0) {
    FUN_144f16e10(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000144f159fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(lVar1);
  return;
}



// FUNCTION 144f15a10 FUN_144f15a10 body=946 status=ok
// SIG undefined FUN_144f15a10(void)

ulonglong FUN_144f15a10(longlong param_1,longlong param_2,undefined1 param_3,char *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
LAB_144f15a72:
  lVar7 = *(longlong *)(param_1 + 8);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x24) == '\0')) {
    uVar5 = FUN_144f13d60(lVar7,param_2,param_3,param_4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*param_4 == (char)uVar5) {
      return uVar5;
    }
  }
  uVar4 = *puVar1;
  if ((int)uVar4 < 1) {
    uVar4 = puVar1[5];
    lVar7 = 0;
    uVar2 = *(undefined8 *)(puVar1 + 2);
    uVar5 = 0;
    while (uVar4 != *(uint *)((longlong)&DAT_149c06900 + uVar5)) {
      lVar7 = lVar7 + 1;
      uVar5 = uVar5 + 0x10;
      if (0x2f < uVar5) goto LAB_144f15ad3;
    }
    lVar7 = *(longlong *)(&UNK_149c06908 + lVar7 * 0x10);
    if (lVar7 == 0) {
LAB_144f15ad3:
      FUN_144f14c60(param_2,param_1,"unsupported transport type %d",uVar4);
      return 1;
    }
    local_res8 = 0;
    puVar6 = (uint *)(*(code *)PTR_calloc_14c6d9f40)(0x48);
    if (puVar6 == (uint *)0x0) {
      uVar5 = 0x1b;
LAB_144f15d8b:
      (*(code *)PTR_free_14c6d9f28)(local_res8);
      local_res8 = 0;
      (*(code *)PTR_free_14c6d9f28)(puVar6);
      return uVar5;
    }
    *puVar6 = uVar4;
    *(longlong *)(puVar6 + 2) = lVar7;
    *(undefined8 *)(puVar6 + 4) = uVar2;
    uVar4 = FUN_144f13b40(&local_res8,&PTR_s_HAPPY_EYEBALLS_14c70f240,puVar6);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 != 0) goto LAB_144f15d8b;
    FUN_144f13bd0(param_1,local_res8);
    *puVar1 = 1;
    if ((*(longlong *)(param_1 + 8) == 0) ||
       (uVar4 = 1, *(char *)(*(longlong *)(param_1 + 8) + 0x24) == '\0')) goto LAB_144f15a72;
  }
  if ((uVar4 < 2) && (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2c9) != '\0')) {
    uVar5 = FUN_1452d6b30(param_1,param_2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *puVar1 = 2;
    if ((*(longlong *)(param_1 + 8) == 0) ||
       (uVar4 = 2, *(char *)(*(longlong *)(param_1 + 8) + 0x24) == '\0')) goto LAB_144f15a72;
  }
  if ((uVar4 < 3) && (lVar7 = *(longlong *)(param_1 + 0x18), *(char *)(lVar7 + 0x2c8) != '\0')) {
    if ((((byte)(*(char *)(lVar7 + 0x10c) - 2U) < 2) &&
        (cVar3 = FUN_144f14080(lVar7,*(undefined4 *)(param_1 + 0x20)), cVar3 == '\0')) &&
       (uVar5 = FUN_144f0d5c0(param_1,param_2), (int)uVar5 != 0)) {
      return uVar5;
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x2cb) != '\0') &&
       (uVar5 = FUN_1452d22e0(param_1,param_2), (int)uVar5 != 0)) {
      return uVar5;
    }
    *puVar1 = 3;
    if ((*(longlong *)(param_1 + 8) == 0) ||
       (uVar4 = 3, *(char *)(*(longlong *)(param_1 + 8) + 0x24) == '\0')) goto LAB_144f15a72;
  }
  if (uVar4 < 4) {
    if (*(char *)(param_2 + 0xae1) != '\0') {
      cVar3 = FUN_144f14080(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
      if (cVar3 != '\0') {
        FUN_144f14b70(param_2,"haproxy protocol not support with SSL encryption in place (QUIC?)");
        return 1;
      }
      uVar5 = FUN_1452d5b00(param_1,param_2);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    *puVar1 = 4;
    if ((*(longlong *)(param_1 + 8) == 0) ||
       (uVar4 = 4, *(char *)(*(longlong *)(param_1 + 8) + 0x24) == '\0')) goto LAB_144f15a72;
  }
  if (4 < uVar4) goto LAB_144f15d54;
  if ((((puVar1[4] == 1) ||
       ((puVar1[4] != 0 &&
        ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2e8) + 0x8c) & 1) != 0)))) &&
      (cVar3 = FUN_144f14080(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20)),
      cVar3 == '\0')) && (uVar5 = FUN_144f0d4e0(param_1,param_2), (int)uVar5 != 0)) {
    return uVar5;
  }
  *puVar1 = 5;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != '\0')) {
LAB_144f15d54:
    *puVar1 = 6;
    *(undefined1 *)(param_1 + 0x24) = 1;
    *param_4 = '\x01';
    return 0;
  }
  goto LAB_144f15a72;
}



// FUNCTION 144f15dd0 FUN_144f15dd0 body=99 status=ok
// SIG undefined FUN_144f15dd0(void)

void FUN_144f15dd0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  FUN_144f14c60(param_2,param_1,"close");
  *(undefined1 *)(param_1 + 0x24) = 0;
  *puVar1 = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    FUN_144f13c80(param_1 + 8,param_2);
  }
  return;
}



// FUNCTION 144f15e40 FUN_144f15e40 body=46 status=ok
// SIG undefined FUN_144f15e40(void)

void FUN_144f15e40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_144f14c60(param_2,param_1,"destroy");
                    /* WARNING: Could not recover jumptable at 0x000144f15e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(uVar1);
  return;
}



// FUNCTION 144f15e70 FUN_144f15e70 body=282 status=ok
// SIG undefined FUN_144f15e70(void)

void FUN_144f15e70(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = 2;
  if (*(int *)(param_1 + 0x300) == 0) {
    uVar2 = 0;
  }
  if (param_3 != '\0') {
    uVar2 = uVar2 | 1;
  }
  if (uVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_144f07150(&local_68);
      param_2 = &local_48;
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
    }
    if ((uVar2 & 2) != 0) {
      local_58 = *(undefined4 *)(param_1 + 0xba8);
      uStack_54 = *(undefined4 *)(param_1 + 0xbac);
      uStack_50 = *(undefined4 *)(param_1 + 0xbb0);
      uStack_4c = *(undefined4 *)(param_1 + 0xbb4);
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      FUN_144f071e0(&local_68,&local_58);
    }
    if ((uVar2 & 1) != 0) {
      local_68 = *(undefined4 *)(param_1 + 0xb98);
      uStack_64 = *(undefined4 *)(param_1 + 0xb9c);
      uStack_60 = *(undefined4 *)(param_1 + 0xba0);
      uStack_5c = *(undefined4 *)(param_1 + 0xba4);
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      FUN_144f071e0(&local_58,&local_68);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 144f15fa0 FUN_144f15fa0 body=192 status=ok
// SIG undefined FUN_144f15fa0(void)

undefined8 FUN_144f15fa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0xca8);
  if ((local_18 != -1) &&
     ((lVar1 = *(longlong *)(param_1 + 0xe0), lVar1 != 0 || (*(longlong *)(param_1 + 0xd8) != 0))))
  {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    local_10 = 0;
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 4) & 0x20) == 0)) {
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0xd8);
      }
      lVar2 = lVar1 + 0x110;
    }
    else {
      lVar2 = lVar2 + 0x28;
    }
    FUN_144f0b280(param_1,lVar2,&local_18,&LAB_144f16420);
    if (local_10 != 0) {
      if (param_2 != (longlong *)0x0) {
        *param_2 = local_10;
      }
      return *(undefined8 *)(local_10 + 0x1a8);
    }
    *(undefined8 *)(param_1 + 0xca8) = 0xffffffffffffffff;
  }
  return 0xffffffffffffffff;
}



// FUNCTION 144f16060 FUN_144f16060 body=205 status=ok
// SIG undefined FUN_144f16060(void)

undefined8 FUN_144f16060(short *param_1,int param_2,undefined1 *param_3,uint *param_4)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  int *piVar4;
  short *psVar5;
  
  sVar1 = *param_1;
  if (sVar1 == 1) {
    if (param_2 < 3) {
      *param_3 = 0;
    }
    else {
      FUN_144f2b7e0(param_3,0x2e,&DAT_149972340,param_1 + 1);
    }
    *param_4 = 0;
    return 1;
  }
  if (sVar1 == 2) {
    psVar5 = param_1 + 2;
  }
  else {
    if (sVar1 != 0x17) goto LAB_144f160cb;
    psVar5 = param_1 + 4;
  }
  lVar3 = inet_ntop(sVar1,psVar5,param_3,0x2e);
  if (lVar3 != 0) {
    uVar2 = Ordinal_15(param_1[1]);
    *param_4 = (uint)uVar2;
    return 1;
  }
LAB_144f160cb:
  *param_3 = 0;
  *param_4 = 0;
  piVar4 = _errno();
  *piVar4 = 0x273f;
  return 0;
}



// FUNCTION 144f16130 FUN_144f16130 body=229 status=ok
// SIG undefined FUN_144f16130(void)

void FUN_144f16130(longlong param_1,longlong param_2,char *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x1434) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x143c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x1444) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x144c) = uVar1;
  *(undefined8 *)(param_1 + 0x1454) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x145c) = *(undefined4 *)(param_2 + 0x148);
  *(undefined2 *)(param_1 + 0x1460) = *(undefined2 *)(param_2 + 0x14c);
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    *(undefined1 *)(param_1 + 0x146c) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x146c) = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x1474) = uVar1;
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0x147c) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x1484) = uVar1;
    *(undefined8 *)(param_1 + 0x148c) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x1494) = *(undefined4 *)(param_3 + 0x28);
    *(undefined2 *)(param_1 + 0x1498) = *(undefined2 *)(param_3 + 0x2c);
  }
  *(undefined8 *)(param_1 + 0x14a0) = **(undefined8 **)(param_2 + 0x2e8);
  *(uint *)(param_1 + 0x14a8) = *(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x3ffffff;
  *(undefined4 *)(param_1 + 0x1464) = *(undefined4 *)(param_2 + 0x4c0);
  *(undefined4 *)(param_1 + 0x1468) = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x149c) = param_4;
  return;
}



// FUNCTION 144f16220 FUN_144f16220 body=76 status=ok
// SIG undefined FUN_144f16220(void)

void FUN_144f16220(longlong param_1,int param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_144f140c0((char)param_1,0);
  if ((param_2 == 1) || ((param_2 == 2 && (cVar1 == '\0')))) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  if (((param_2 != 2) || (cVar1 == '\0')) && (cVar2 != *(char *)(param_1 + 0x2ce))) {
    *(char *)(param_1 + 0x2ce) = cVar2;
  }
  return;
}



// FUNCTION 144f16270 FUN_144f16270 body=185 status=ok
// SIG undefined FUN_144f16270(void)

int FUN_144f16270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    (*(code *)PTR_free_14c6d9f28)(0);
    iVar2 = 0x1b;
  }
  else {
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 2) = param_3;
    puVar3[4] = param_5;
    puVar3[5] = param_4;
    iVar2 = FUN_144f13b40(local_18,&PTR_s_SETUP_14c70f2b0,puVar3);
    uVar1 = local_18[0];
    if (iVar2 == 0) {
      (*(code *)PTR_free_14c6d9f28)(0);
      FUN_144f13bd0(param_1,uVar1);
    }
    else {
      (*(code *)PTR_free_14c6d9f28)(puVar3);
    }
  }
  return iVar2;
}



// FUNCTION 144f16330 FUN_144f16330 body=238 status=ok
// SIG undefined FUN_144f16330(void)

ulonglong FUN_144f16330(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 local_res10;
  
  lVar1 = param_2 + (longlong)param_3 * 8;
  uVar7 = 0;
  if ((*(longlong *)(lVar1 + 0x1d8) == 0) &&
     (uVar7 = 0, *(int *)(*(longlong *)(param_2 + 0x2e8) + 0x84) == 2)) {
    uVar5 = FUN_1452d6260(param_1,param_2,param_3);
    uVar7 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if (*(longlong *)(lVar1 + 0x1d8) == 0) {
    bVar2 = *(byte *)(param_2 + 0x4d7);
    local_res10 = 0;
    puVar6 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(0x18);
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = 0x1b;
    }
    else {
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 2) = param_4;
      puVar6[4] = param_5;
      puVar6[5] = (uint)bVar2;
      uVar4 = FUN_144f13b40(&local_res10,&PTR_s_SETUP_14c70f2b0,puVar6);
      uVar3 = local_res10;
      uVar7 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        (*(code *)PTR_free_14c6d9f28)(0);
        FUN_144f13ba0(param_1,param_2,param_3,uVar3);
        return 0;
      }
    }
    (*(code *)PTR_free_14c6d9f28)(puVar6);
  }
  return uVar7;
}



// FUNCTION 144f16440 FUN_144f16440 body=253 status=ok
// SIG undefined FUN_144f16440(void)

undefined4
FUN_144f16440(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5
             ,undefined8 param_6,longlong param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x448);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    if (param_4 == 2) {
      puVar3 = &DAT_149c06930;
    }
    else {
      puVar3 = &DAT_149c06940;
      if (param_4 == 0x17) {
        puVar3 = &DAT_149c06938;
      }
    }
    *puVar2 = puVar3;
    puVar2[5] = param_5;
    puVar2[6] = param_6;
    puVar2[3] = param_2;
    puVar2[1] = param_3;
    *(int *)(puVar2 + 2) = param_4;
    lVar4 = param_7;
    if (param_3 != 0) {
      do {
        param_3 = *(longlong *)(param_3 + 0x28);
        if (param_3 == 0) goto LAB_144f16509;
      } while (*(int *)(param_3 + 4) != param_4);
      lVar4 = param_7 / 2;
      if (param_7 < 0x259) {
        lVar4 = param_7;
      }
    }
LAB_144f16509:
    puVar2[9] = lVar4;
    *(undefined4 *)(puVar2 + 10) = param_8;
    uVar1 = 0;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 7;
    *param_1 = puVar2;
  }
  return uVar1;
}



// FUNCTION 144f16540 FUN_144f16540 body=431 status=ok
// SIG undefined FUN_144f16540(void)

undefined4 FUN_144f16540(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res18;
  undefined1 local_28 [16];
  
  *(undefined4 *)(param_3 + 0xb) = 0;
  *(undefined1 *)((longlong)param_3 + 0x5e) = 0;
  *(undefined1 *)((longlong)param_3 + 0x5c) = 1;
  if (param_3[1] != 0) {
    do {
      puVar5 = (undefined4 *)FUN_144f07150(local_28);
      lVar8 = param_3[1];
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *(undefined4 *)(param_3 + 7) = *puVar5;
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar1;
      *(undefined4 *)(param_3 + 8) = uVar2;
      *(undefined4 *)((longlong)param_3 + 0x44) = uVar3;
      lVar6 = param_4;
      lVar7 = lVar8;
      if (lVar8 != 0) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x28);
          if (lVar7 == 0) goto LAB_144f165dc;
        } while (*(int *)(lVar7 + 4) != *(int *)(param_3 + 2));
        lVar6 = param_4 / 2;
        if (param_4 < 0x259) {
          lVar6 = param_4;
        }
      }
LAB_144f165dc:
      param_3[9] = lVar6;
      local_res18 = param_3[4];
      iVar4 = (*(code *)param_3[3])
                        (param_3 + 4,param_2,*(undefined8 *)(param_1 + 0x18),lVar8,
                         **(undefined4 **)(param_1 + 0x10));
      if (iVar4 == 0) {
        for (lVar8 = param_3[4]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 8)) {
          *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
          *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        }
        lVar8 = param_3[1];
        if (lVar8 != 0) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x28);
            if (lVar8 == 0) goto LAB_144f1667b;
          } while (*(int *)(lVar8 + 4) != *(int *)(param_3 + 2));
          FUN_144bba820(param_2,param_3[9],*(undefined4 *)(param_3 + 10));
        }
      }
      else {
        FUN_144f14c60(param_2,param_1,"%s failed",*param_3);
        if (param_3[4] != 0) {
          FUN_144f13c80(param_3 + 4,param_2);
        }
      }
LAB_144f1667b:
      if (local_res18 != 0) {
        FUN_144f13c80(&local_res18,param_2);
      }
      *(int *)((longlong)param_3 + 0x54) = iVar4;
      if (iVar4 == 0) break;
      lVar8 = param_3[1];
      if (lVar8 == 0) goto LAB_144f166ba;
      do {
        lVar8 = *(longlong *)(lVar8 + 0x28);
        if (lVar8 == 0) goto LAB_144f166ba;
      } while (*(int *)(lVar8 + 4) != *(int *)(param_3 + 2));
      param_3[1] = lVar8;
    } while( true );
  }
LAB_144f166cc:
  if (param_3[1] == 0) {
    *(undefined1 *)((longlong)param_3 + 0x5d) = 1;
  }
  return *(undefined4 *)((longlong)param_3 + 0x54);
LAB_144f166ba:
  param_3[1] = 0;
  goto LAB_144f166cc;
}



// FUNCTION 144f166f0 FUN_144f166f0 body=1270 status=ok
// SIG undefined FUN_144f166f0(void)

void FUN_144f166f0(longlong param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  byte *local_c8;
  int local_c0;
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = *(longlong *)(param_1 + 0x10);
  local_70 = *(longlong *)(param_1 + 0x18);
  local_88 = (longlong *)(local_80 + 0x30);
  local_b8 = (longlong *)(local_80 + 0x20);
  local_c8 = param_3;
  local_78 = local_88;
  do {
    plVar10 = local_b8;
    *local_c8 = 0;
    puVar5 = (undefined4 *)FUN_144f07150(local_68);
    iVar11 = 0;
    iVar12 = 0;
    local_c0 = 0;
    uVar9 = 0;
    local_58 = *puVar5;
    uStack_54 = puVar5[1];
    uStack_50 = puVar5[2];
    uStack_4c = puVar5[3];
    do {
      puVar3 = (undefined8 *)*plVar10;
      if ((puVar3 != (undefined8 *)0x0) && (*(char *)((longlong)puVar3 + 0x5d) == '\0')) {
        if (*(char *)((longlong)puVar3 + 0x5c) == '\0') {
          iVar11 = iVar11 + 1;
          local_c0 = iVar11;
        }
        else {
          bVar1 = *(byte *)((longlong)puVar3 + 0x5e);
          *local_c8 = bVar1;
          if ((*(int *)((longlong)puVar3 + 0x54) == 0) && (bVar1 == 0)) {
            iVar4 = FUN_144f13d60(puVar3[4],param_2,0,local_c8);
            *(int *)((longlong)puVar3 + 0x54) = iVar4;
            if (iVar4 == 0) {
              if (*local_c8 == 0) {
                local_a8 = *(undefined4 *)(puVar3 + 7);
                uStack_a4 = *(undefined4 *)((longlong)puVar3 + 0x3c);
                uStack_a0 = *(undefined4 *)(puVar3 + 8);
                uStack_9c = *(undefined4 *)((longlong)puVar3 + 0x44);
                lVar6 = puVar3[9];
                local_98 = local_58;
                uStack_94 = uStack_54;
                uStack_90 = uStack_50;
                uStack_8c = uStack_4c;
                lVar7 = FUN_144f071e0(&local_98,&local_a8);
                iVar11 = local_c0;
                if (lVar6 <= lVar7) {
                  FUN_144f14ad0(param_2,"%s connect timeout after %I64dms, move on!",*puVar3,lVar6);
                  *(undefined4 *)(puVar3 + 0xb) = 0x274c;
                  *(undefined4 *)((longlong)puVar3 + 0x54) = 0x1c;
                  iVar11 = local_c0;
                }
              }
              else {
                *(undefined2 *)((longlong)puVar3 + 0x5d) = 0x101;
              }
            }
          }
          uVar2 = *(undefined4 *)((longlong)puVar3 + 0x54);
          *(undefined4 *)((longlong)puVar3 + 0x54) = uVar2;
          local_d0 = CONCAT44(local_d0._4_4_,(uint)*local_c8);
          local_d8 = CONCAT44(local_d8._4_4_,uVar2);
          FUN_144f14c60(param_2,param_1,"%s connect -> %d, connected=%d",*puVar3);
          if (*(int *)((longlong)puVar3 + 0x54) == 0) {
            if (*local_c8 != 0) {
              local_88 = local_78;
              *local_78 = (longlong)puVar3;
              *(undefined8 *)(local_80 + 0x20 + uVar9 * 8) = 0;
              break;
            }
            iVar12 = iVar12 + 1;
          }
          else if (*(char *)((longlong)puVar3 + 0x5d) == '\0') {
            if (*(int *)(puVar3 + 0xb) != 0) {
              *(int *)(param_2 + 0xd94) = *(int *)(puVar3 + 0xb);
              Ordinal_112(*(undefined4 *)(puVar3 + 0xb));
            }
            uVar8 = FUN_144f15e70(param_2,&local_58,1);
            if (*(int *)(param_1 + 0x20) == 0) {
              lVar6 = puVar3[1];
              if (lVar6 == 0) {
LAB_144f168c3:
                lVar6 = 0;
              }
              else {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x28);
                  if (lVar6 == 0) goto LAB_144f168c3;
                } while (*(int *)(lVar6 + 4) != *(int *)(puVar3 + 2));
              }
              puVar3[1] = lVar6;
              FUN_144f16540(param_1,param_2,puVar3,uVar8);
            }
            else {
              *(undefined8 *)((longlong)puVar3 + 0x54) = 7;
              *(undefined2 *)((longlong)puVar3 + 0x5d) = 1;
              *(undefined1 *)((longlong)puVar3 + 0x5c) = 1;
            }
            if (*(char *)((longlong)puVar3 + 0x5d) == '\0') {
              FUN_144f14c60(param_2,param_1,"%s trying next",*puVar3);
              iVar12 = iVar12 + 1;
              FUN_144bba820(param_2);
            }
            else {
              FUN_144f14c60(param_2,param_1,"%s done",*puVar3);
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 < 2);
    if (*local_88 != 0) {
      *local_c8 = 1;
      goto LAB_144f16bdd;
    }
    if ((iVar12 == 0) && (iVar11 == 0)) goto LAB_144f16a71;
    lVar6 = FUN_144f15e70(param_2,&local_58);
    if (lVar6 < 0) {
      local_98 = *(undefined4 *)(param_2 + 0xb98);
      uStack_94 = *(undefined4 *)(param_2 + 0xb9c);
      uStack_90 = *(undefined4 *)(param_2 + 0xba0);
      uStack_8c = *(undefined4 *)(param_2 + 0xba4);
      local_a8 = local_58;
      uStack_a4 = uStack_54;
      uStack_a0 = uStack_50;
      uStack_9c = uStack_4c;
      uVar8 = FUN_144f071e0(&local_a8,&local_98);
      FUN_144f14b70(param_2,"Connection timeout after %I64d ms",uVar8);
      goto LAB_144f16bdd;
    }
    if (iVar11 < 1) break;
    iVar11 = 0;
    lVar6 = 2;
    plVar10 = local_b8;
    do {
      puVar3 = (undefined8 *)*plVar10;
      if ((puVar3 != (undefined8 *)0x0) && (*(char *)((longlong)puVar3 + 0x5c) == '\0')) {
        if ((puVar3[5] == 0) || (*(char *)(puVar3[5] + 0x5d) == '\0')) {
          local_a8 = local_58;
          uStack_a4 = uStack_54;
          uStack_a0 = uStack_50;
          uStack_9c = uStack_4c;
          local_98 = *(undefined4 *)(local_80 + 0x38);
          uStack_94 = *(undefined4 *)(local_80 + 0x3c);
          uStack_90 = *(undefined4 *)(local_80 + 0x40);
          uStack_8c = *(undefined4 *)(local_80 + 0x44);
          lVar7 = FUN_144f071e0(&local_a8,&local_98);
          if (lVar7 < (longlong)puVar3[6]) goto LAB_144f16a45;
        }
        uVar8 = FUN_144f15e70(param_2,&local_58,1);
        FUN_144f16540(param_1,param_2,puVar3,uVar8);
        if (*(char *)((longlong)puVar3 + 0x5d) == '\0') {
          local_d8 = puVar3[9];
          FUN_144f14c60(param_2,param_1,"%s starting (timeout=%I64dms)",*puVar3);
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 1;
        }
        else {
          FUN_144f14c60(param_2,param_1,"%s done",*puVar3);
        }
      }
LAB_144f16a45:
      plVar10 = plVar10 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  } while (0 < iVar11);
  if (iVar12 < 1) {
LAB_144f16a71:
    FUN_144f14c60(param_2,param_1,"all eyeballers failed");
    uVar9 = 0;
    plVar10 = local_b8;
    do {
      puVar3 = (undefined8 *)*plVar10;
      if (puVar3 == (undefined8 *)0x0) {
        local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
        local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
        FUN_144f14c60(param_2,param_1,"%s assess started=%d, result=%d",0);
      }
      else {
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)((longlong)puVar3 + 0x54));
        local_d8 = CONCAT44(local_d8._4_4_,(uint)*(byte *)((longlong)puVar3 + 0x5c));
        FUN_144f14c60(param_2,param_1,"%s assess started=%d, result=%d",*puVar3);
        if ((*(char *)((longlong)puVar3 + 0x5c) != '\0') &&
           (iVar11 = *(int *)((longlong)puVar3 + 0x54), iVar11 != 0)) goto LAB_144f16af6;
      }
      uVar9 = uVar9 + 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 < 2);
    iVar11 = 7;
LAB_144f16af6:
    lVar6 = local_70;
    if (*(char *)(local_70 + 0x2c9) == '\0') {
      if (*(char *)(local_70 + 0x2c8) == '\0') {
        if (*(char *)(local_70 + 0x2d1) == '\0') {
          uVar8 = *(undefined8 *)(local_70 + 0x70);
        }
        else {
          uVar8 = *(undefined8 *)(local_70 + 0xa0);
        }
      }
      else {
        uVar8 = *(undefined8 *)(local_70 + 0xf8);
      }
    }
    else {
      uVar8 = *(undefined8 *)(local_70 + 0xc0);
    }
    local_98 = *(undefined4 *)(param_2 + 0xb98);
    uStack_94 = *(undefined4 *)(param_2 + 0xb9c);
    uStack_90 = *(undefined4 *)(param_2 + 0xba0);
    uStack_8c = *(undefined4 *)(param_2 + 0xba4);
    local_a8 = local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    lVar7 = FUN_144bbdb50(iVar11);
    local_d8 = FUN_144f071e0(&local_a8,&local_98);
    local_d0 = lVar7;
    FUN_144f14b70(param_2,"Failed to connect to %s port %u after %I64d ms: %s",uVar8,
                  *(undefined4 *)(lVar6 + 0x4c0));
  }
  else {
    *local_c8 = 0;
  }
LAB_144f16bdd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144f16c10 FUN_144f16c10 body=502 status=ok
// SIG undefined FUN_144f16c10(void)

undefined8 FUN_144f16c10(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_38 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(param_1 + 0x18);
  lVar3 = FUN_144f15e70(param_2,0,1);
  if (lVar3 < 0) {
    FUN_144f14b70(param_2,"Connection time-out");
    uVar4 = 0x1c;
  }
  else {
    puVar5 = (undefined8 *)FUN_144f07150(local_38);
    uVar4 = puVar5[1];
    *(undefined8 *)(lVar2 + 0x38) = *puVar5;
    *(undefined8 *)(lVar2 + 0x40) = uVar4;
    cVar1 = *(char *)(lVar8 + 0x4d8);
    if (cVar1 == '\0') {
      iVar11 = 0;
      if (*param_3 != 0) {
        iVar11 = *(int *)(*param_3 + 4);
      }
      iVar9 = 0x17;
      if (iVar11 == 0x17) {
        iVar9 = 2;
      }
    }
    else {
      iVar11 = 0x17;
      if (cVar1 == '\x01') {
        iVar11 = 2;
      }
      iVar9 = 0;
    }
    lVar6 = 0;
    lVar8 = *param_3;
    for (lVar10 = lVar8; lVar7 = lVar6, lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x28)) {
      if (*(int *)(lVar10 + 4) == iVar11) goto LAB_144f16cd8;
    }
    for (; lVar10 = lVar7, lVar7 = lVar6, lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x28)) {
LAB_144f16cd8:
      lVar7 = lVar8;
      if (*(int *)(lVar8 + 4) == iVar9) break;
      lVar7 = lVar10;
    }
    lVar8 = lVar7;
    if ((lVar10 == 0) && (lVar8 = lVar6, lVar10 = lVar7, iVar11 = iVar9, lVar7 == 0)) {
      uVar4 = 7;
    }
    else {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      uVar4 = FUN_144f16440(lVar2 + 0x20,*(undefined8 *)(lVar2 + 8),lVar10,iVar11,0,0,lVar3,3);
      if ((int)uVar4 == 0) {
        FUN_144f14c60(param_2,param_1,"created %s (timeout %I64dms)",**(undefined8 **)(lVar2 + 0x20)
                      ,(*(undefined8 **)(lVar2 + 0x20))[9]);
        if (lVar8 != 0) {
          uVar4 = FUN_144f16440(lVar2 + 0x28,*(undefined8 *)(lVar2 + 8),lVar8,iVar9,
                                *(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(param_2 + 0x308),lVar3
                                ,4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          FUN_144f14c60(param_2,param_1,"created %s (timeout %I64dms)",
                        **(undefined8 **)(lVar2 + 0x28),(*(undefined8 **)(lVar2 + 0x28))[9]);
          FUN_144bba820(param_2,*(undefined4 *)(param_2 + 0x308),6);
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



// FUNCTION 144f16e10 FUN_144f16e10 body=161 status=ok
// SIG undefined FUN_144f16e10(void)

void FUN_144f16e10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar4 = 2;
  plVar3 = (longlong *)(lVar1 + 0x20);
  do {
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_144f13c80(lVar2 + 0x20,param_2);
      }
      (*(code *)PTR_free_14c6d9f28)(lVar2);
    }
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = *(longlong *)(lVar1 + 0x30);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x20) != 0) {
      FUN_144f13c80(lVar4 + 0x20,param_2);
    }
    (*(code *)PTR_free_14c6d9f28)(lVar4);
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}



// FUNCTION 144f16ec0 FUN_144f16ec0 body=205 status=ok
// SIG undefined FUN_144f16ec0(void)

void FUN_144f16ec0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)(lVar5 + 0x20);
  lVar5 = 2;
  do {
    local_48 = 0;
    uStack_40 = 0;
    if ((*plVar4 != 0) && (plVar1 = *(longlong **)(*plVar4 + 0x20), plVar1 != (longlong *)0x0)) {
      local_78 = &local_48;
      iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_3,param_4,0);
      if ((iVar2 == 0) && ((local_48 != 0 || ((int)uStack_40 != 0)))) {
        local_68 = *(undefined4 *)param_1;
        uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_60 = *(undefined4 *)(param_1 + 1);
        uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
        local_58 = (undefined4)local_48;
        uStack_54 = local_48._4_4_;
        iStack_50 = (int)uStack_40;
        uStack_4c = uStack_40._4_4_;
        lVar3 = FUN_144f072b0(&local_58,&local_68);
        if (0 < lVar3) {
          *(undefined4 *)param_1 = (undefined4)local_48;
          *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
          *(int *)(param_1 + 1) = (int)uStack_40;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
        }
      }
    }
    plVar4 = plVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144f16fa0 FUN_144f16fa0 body=4 status=ok
// SIG undefined FUN_144f16fa0(void)

undefined2 FUN_144f16fa0(undefined2 param_1)

{
  return param_1;
}



// FUNCTION 144f16fb0 FUN_144f16fb0 body=7 status=ok
// SIG undefined FUN_144f16fb0(void)

uint FUN_144f16fb0(uint param_1)

{
  return param_1 & 0x7fffffff;
}



// FUNCTION 144f16fc0 FUN_144f16fc0 body=3 status=ok
// SIG undefined FUN_144f16fc0(void)

undefined4 FUN_144f16fc0(undefined4 param_1)

{
  return param_1;
}



// FUNCTION 144f16fd0 FUN_144f16fd0 body=7 status=ok
// SIG undefined FUN_144f16fd0(void)

uint FUN_144f16fd0(uint param_1)

{
  return param_1 & 0x7fffffff;
}



// FUNCTION 144f16fe0 FUN_144f16fe0 body=3 status=ok
// SIG undefined FUN_144f16fe0(void)

undefined4 FUN_144f16fe0(undefined4 param_1)

{
  return param_1;
}



// FUNCTION 144f16ff0 FUN_144f16ff0 body=4 status=ok
// SIG undefined FUN_144f16ff0(void)

undefined2 FUN_144f16ff0(undefined2 param_1)

{
  return param_1;
}



// FUNCTION 144f17000 FUN_144f17000 body=14 status=ok
// SIG undefined FUN_144f17000(void)

ulonglong FUN_144f17000(ulonglong param_1)

{
  return param_1 & 0x7fffffffffffffff;
}



// FUNCTION 144f17010 FUN_144f17010 body=4 status=ok
// SIG undefined FUN_144f17010(void)

undefined8 FUN_144f17010(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144f17020 FUN_144f17020 body=4 status=ok
// SIG undefined FUN_144f17020(void)

undefined2 FUN_144f17020(undefined2 param_1)

{
  return param_1;
}



// FUNCTION 144f17030 FUN_144f17030 body=17 status=ok
// SIG undefined FUN_144f17030(void)

longlong FUN_144f17030(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _read(param_1,param_2,param_3);
  return (longlong)iVar1;
}



// FUNCTION 144f17050 FUN_144f17050 body=17 status=ok
// SIG undefined FUN_144f17050(void)

longlong FUN_144f17050(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _write(param_1,param_2,param_3);
  return (longlong)iVar1;
}



// FUNCTION 144f17070 FUN_144f17070 body=133 status=ok
// SIG undefined FUN_144f17070(void)

undefined8 FUN_144f17070(longlong param_1,char param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = 0xde8;
  if (param_2 == '\0') {
    lVar5 = 0xdb0;
  }
  iVar3 = FUN_144f195b0(param_3,"Digest",6);
  if (iVar3 != 0) {
    cVar2 = *(char *)(param_3 + 6);
    param_3 = param_3 + 6;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
        pcVar1 = (char *)(param_3 + 1);
        param_3 = param_3 + 1;
        cVar2 = *pcVar1;
      }
      uVar4 = FUN_1452d83c0(param_3,lVar5 + param_1);
      return uVar4;
    }
  }
  return 0x3d;
}



// FUNCTION 144f17100 FUN_144f17100 body=439 status=ok
// SIG undefined FUN_144f17100(void)

int FUN_144f17100(longlong param_1,char param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 local_58;
  longlong *local_50;
  undefined1 *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  if (param_2 == '\0') {
    puVar10 = *(undefined1 **)(param_1 + 0x13a0);
    lVar4 = 0x1368;
    puVar11 = *(undefined1 **)(param_1 + 0x13a8);
    lVar6 = 0xdb0;
    uVar8 = 0xe2c;
    uVar7 = 0xe2e;
  }
  else {
    puVar10 = *(undefined1 **)(param_1 + 0x13b0);
    lVar4 = 0x1350;
    puVar11 = *(undefined1 **)(param_1 + 0x13b8);
    lVar6 = 0xde8;
    uVar8 = 0xe3c;
    uVar7 = 0xe3e;
  }
  local_50 = (longlong *)(lVar6 + param_1);
  plVar1 = (longlong *)(lVar4 + param_1);
  local_40 = plVar1;
  (*(code *)PTR_free_14c6d9f28)(*plVar1);
  plVar2 = local_50;
  *plVar1 = 0;
  pcVar9 = "";
  local_48 = &DAT_14996de1b;
  if (puVar10 != (undefined1 *)0x0) {
    local_48 = puVar10;
  }
  puVar10 = &DAT_14996de1b;
  if (puVar11 != (undefined1 *)0x0) {
    puVar10 = puVar11;
  }
  if (*local_50 == 0) {
    *(undefined1 *)((ulonglong)uVar8 + param_1) = 0;
    return 0;
  }
  if ((*(char *)(param_1 + (ulonglong)uVar7) == '\0') ||
     (pcVar5 = strchr(param_4,0x3f), pcVar5 == (char *)0x0)) {
    lVar4 = (*(code *)PTR__strdup_14c6d9f38)(param_4);
  }
  else {
    lVar4 = FUN_144f2b8b0(&DAT_149c06b64,(int)pcVar5 - (int)param_4,param_4);
  }
  if (lVar4 != 0) {
    iVar3 = FUN_1452d8970(param_1,local_48,puVar10,param_3,lVar4,plVar2,&local_58,local_38);
    (*(code *)PTR_free_14c6d9f28)(lVar4);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (param_2 != '\0') {
      pcVar9 = "Proxy-";
    }
    lVar4 = FUN_144f2b8b0("%sAuthorization: Digest %s\r\n",pcVar9,local_58);
    plVar1 = local_40;
    *local_40 = lVar4;
    (*(code *)PTR_free_14c6d9f28)(local_58);
    if (*plVar1 != 0) {
      *(undefined1 *)((ulonglong)uVar8 + param_1) = 1;
      return 0;
    }
  }
  return 0x1b;
}



// FUNCTION 144f172c0 FUN_144f172c0 body=38 status=ok
// SIG undefined FUN_144f172c0(void)

void FUN_144f172c0(longlong param_1)

{
  FUN_1452d89f0(param_1 + 0xdb0);
  FUN_1452d89f0(param_1 + 0xde8);
  return;
}



// FUNCTION 144f172f0 FUN_144f172f0 body=630 status=ok
// SIG undefined FUN_144f172f0(void)

void FUN_144f172f0(ulonglong param_1)

{
  char cVar1;
  int iVar2;
  UINT UVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  uchar *puVar5;
  HMODULE hModule_00;
  FARPROC pFVar6;
  LPSTR lpBuffer;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((param_1 & 2) == 0) {
LAB_144f17356:
    hModule_00 = (HMODULE)0x0;
    hModule = GetModuleHandleA("kernel32");
    if (hModule == (HMODULE)0x0) {
      DAT_14c7976c8 = (HMODULE)0x0;
    }
    else {
      pFVar4 = GetProcAddress(hModule,"LoadLibraryExA");
      pcVar9 = "iphlpapi.dll";
      puVar5 = _mbspbrk((uchar *)"iphlpapi.dll","\\/");
      if (puVar5 == (uchar *)0x0) {
        if ((pFVar4 == (FARPROC)0x0) ||
           (pFVar6 = GetProcAddress(hModule,"AddDllDirectory"), pFVar6 == (FARPROC)0x0)) {
          UVar3 = GetSystemDirectoryA((LPSTR)0x0,0);
          if (UVar3 != 0) {
            lpBuffer = (LPSTR)(*(code *)PTR_malloc_14c6d9f20)((ulonglong)(UVar3 + 1) + 0xc);
            if ((lpBuffer != (LPSTR)0x0) &&
               (UVar3 = GetSystemDirectoryA(lpBuffer,UVar3), UVar3 != 0)) {
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar7 = lVar7 + 1;
              } while (lpBuffer[lVar8] != '\0');
              (lpBuffer + lVar7)[0] = '\\';
              (lpBuffer + lVar7)[1] = '\0';
              lVar7 = -1;
              do {
                lVar8 = lVar7;
                lVar7 = lVar8 + 1;
              } while (lpBuffer[lVar7] != '\0');
              do {
                cVar1 = *pcVar9;
                (lpBuffer + lVar8 + -0x149c06b97)[(longlong)pcVar9] = cVar1;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              if (pFVar4 == (FARPROC)0x0) {
                hModule_00 = LoadLibraryA(lpBuffer);
              }
              else {
                hModule_00 = (HMODULE)(*pFVar4)(lpBuffer,0,8);
              }
            }
            (*(code *)PTR_free_14c6d9f28)(lpBuffer);
          }
        }
        else {
          hModule_00 = (HMODULE)(*pFVar4)("iphlpapi.dll",0,0x800);
        }
      }
      else if (pFVar4 == (FARPROC)0x0) {
        hModule_00 = LoadLibraryA("iphlpapi.dll");
      }
      else {
        hModule_00 = (HMODULE)(*pFVar4)("iphlpapi.dll",0,8);
      }
      DAT_14c7976c8 = hModule_00;
      if ((hModule_00 != (HMODULE)0x0) &&
         (pFVar4 = GetProcAddress(hModule_00,"if_nametoindex"), pFVar4 != (FARPROC)0x0)) {
        DAT_14c7976c0 = pFVar4;
      }
    }
    local_1c8 = 3;
    cVar1 = FUN_1452d90f0(6,0,0,2);
    DAT_14c7976d8 = cVar1 != '\0';
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_14c7976d0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
  }
  iVar2 = Ordinal_115(0x202,local_1b8);
  if (iVar2 == 0) {
    if (((char)local_1b8._0_2_ == '\x02') && (SUB21(local_1b8._0_2_,1) == '\x02'))
    goto LAB_144f17356;
    Ordinal_116();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 144f17580 FUN_144f17580 body=65 status=ok
// SIG undefined FUN_144f17580(void)

void FUN_144f17580(uint param_1)

{
  if (DAT_14c7976c8 != (HMODULE)0x0) {
    FreeLibrary(DAT_14c7976c8);
    DAT_14c7976c8 = (HMODULE)0x0;
    DAT_14c7976c0 = 0;
  }
  if ((param_1 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144f175b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Ordinal_116();
    return;
  }
  return;
}



// FUNCTION 144f175d0 FUN_144f175d0 body=48 status=ok
// SIG undefined FUN_144f175d0(void)

undefined1 * FUN_144f175d0(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 8) {
    return &DAT_149c06bf0;
  }
  if (param_1 != 0x10) {
    puVar1 = &DAT_149c06bf8;
    if (param_1 != 0x20) {
      puVar1 = &DAT_14996de1b;
    }
    return puVar1;
  }
  return &DAT_149c06bf4;
}



// FUNCTION 144f17600 FUN_144f17600 body=61 status=ok
// SIG undefined FUN_144f17600(void)

longlong FUN_144f17600(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x30);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144f1a730(lVar1 + 8,0);
  *(undefined4 *)(lVar1 + 0x28) = 0x18;
  return lVar1;
}



// FUNCTION 144f17640 FUN_144f17640 body=288 status=ok
// SIG undefined FUN_144f17640(void)

undefined4 FUN_144f17640(longlong *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  FILE *_File;
  char *pcVar4;
  char *pcVar5;
  
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  lVar3 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    return 0x1b;
  }
  _File = fopen(param_2,"rt");
  if (_File != (FILE *)0x0) {
    pcVar4 = (char *)(*(code *)PTR_malloc_14c6d9f20)(0xfff);
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR_free_14c6d9f28)(*param_1);
      *param_1 = 0;
      (*(code *)PTR_free_14c6d9f28)(0);
      fclose(_File);
      return 0x1b;
    }
    lVar3 = FUN_1452b1ba0(pcVar4,0xfff,_File);
    while (lVar3 != 0) {
      cVar2 = *pcVar4;
      pcVar5 = pcVar4;
      while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
      if (cVar2 != '#') {
        FUN_144f184b0(param_1);
      }
      lVar3 = FUN_1452b1ba0(pcVar4,0xfff,_File);
    }
    (*(code *)PTR_free_14c6d9f28)(pcVar4);
    fclose(_File);
  }
  return 0;
}



// FUNCTION 144f17760 FUN_144f17760 body=835 status=ok
// SIG undefined FUN_144f17760(void)

void FUN_144f17760(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 *local_110;
  uint local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  uint local_e0;
  int local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined4 local_a0;
  int local_98;
  char *local_90;
  FILE *local_88;
  FILE *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_90 = (char *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    if ((param_3 == (char *)0x0) && ((char *)*param_2 != (char *)0x0)) {
      param_3 = (char *)*param_2;
    }
    if ((((*(byte *)(param_2 + 5) & 4) == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
      local_98 = FUN_1452b2520(param_1,param_3,&local_88,&local_90);
      if (local_98 == 0) {
        fputs("# Your alt-svc cache. https://curl.se/docs/alt-svc.html\n# This file was generated by libcurl! Edit at your own risk.\n"
              ,local_88);
        plVar3 = (longlong *)param_2[1];
        if (plVar3 != (longlong *)0x0) {
          local_98 = 0;
          do {
            puVar1 = (undefined8 *)*plVar3;
            plVar3 = (longlong *)plVar3[2];
            puVar7 = &DAT_14996de1b;
            local_80 = local_88;
            puVar8 = &DAT_14996de1b;
            puVar5 = &DAT_14996de1b;
            puVar6 = &DAT_14996de1b;
            iVar2 = FUN_1452b1c90(puVar1[4],&local_78);
            if (iVar2 != 0) {
              local_98 = iVar2;
              fclose(local_88);
              goto LAB_144f17a28;
            }
            iVar2 = inet_pton(0x17,puVar1[2],local_50);
            if (iVar2 == 1) {
              puVar7 = &DAT_149c06568;
              puVar8 = &DAT_149c06564;
            }
            iVar2 = inet_pton(0x17,*puVar1,local_50);
            if (iVar2 == 1) {
              puVar5 = &DAT_149c06568;
              puVar6 = &DAT_149c06564;
            }
            iVar2 = *(int *)((longlong)puVar1 + 0x1c);
            if (iVar2 == 8) {
              local_100 = &DAT_149c06bf0;
            }
            else if (iVar2 == 0x10) {
              local_100 = &DAT_149c06bf4;
            }
            else {
              local_100 = &DAT_14996de1b;
              if (iVar2 == 0x20) {
                local_100 = &DAT_149c06bf8;
              }
            }
            iVar2 = *(int *)((longlong)puVar1 + 0xc);
            if (iVar2 == 8) {
              puVar4 = &DAT_149c06bf0;
            }
            else if (iVar2 == 0x10) {
              puVar4 = &DAT_149c06bf4;
            }
            else {
              puVar4 = &DAT_14996de1b;
              if (iVar2 == 0x20) {
                puVar4 = &DAT_149c06bf8;
              }
            }
            local_a0 = *(undefined4 *)((longlong)puVar1 + 0x2c);
            local_d8 = local_64 + 0x76c;
            local_d0 = local_68 + 1;
            local_a8 = (uint)*(byte *)(puVar1 + 5);
            local_b0 = local_78;
            local_b8 = local_74;
            local_c0 = local_70;
            local_c8 = local_6c;
            local_f0 = puVar1[2];
            local_e0 = (uint)*(ushort *)(puVar1 + 3);
            local_118 = *puVar1;
            local_108 = (uint)*(ushort *)(puVar1 + 1);
            local_110 = puVar6;
            local_f8 = puVar7;
            local_e8 = puVar8;
            FUN_144f2b7b0(local_80,"%s %s%s%s %u %s %s%s%s %u \"%d%02d%02d %02d:%02d:%02d\" %u %d\n"
                          ,puVar4,puVar5);
          } while (plVar3 != (longlong *)0x0);
        }
        fclose(local_88);
        if ((local_90 != (char *)0x0) && (iVar2 = FUN_1452b2410(local_90,param_3), iVar2 != 0)) {
          local_98 = 0x17;
LAB_144f17a28:
          if (local_90 != (char *)0x0) {
            _unlink(local_90);
          }
        }
      }
      (*(code *)PTR_free_14c6d9f28)(local_90);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
}



// FUNCTION 144f17ab0 FUN_144f17ab0 body=16 status=ok
// SIG undefined FUN_144f17ab0(void)

undefined8 FUN_144f17ab0(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    return 0x2b;
  }
  *(int *)(param_1 + 0x28) = param_2;
  return 0;
}



// FUNCTION 144f17ac0 FUN_144f17ac0 body=135 status=ok
// SIG undefined FUN_144f17ac0(void)

void FUN_144f17ac0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)puVar1[1];
    while (plVar2 != (longlong *)0x0) {
      puVar3 = (undefined8 *)*plVar2;
      plVar2 = (longlong *)plVar2[2];
      (*(code *)PTR_free_14c6d9f28)(*puVar3);
      (*(code *)PTR_free_14c6d9f28)(puVar3[2]);
      (*(code *)PTR_free_14c6d9f28)(puVar3);
    }
    (*(code *)PTR_free_14c6d9f28)(*puVar1);
    (*(code *)PTR_free_14c6d9f28)(puVar1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144f17b50 FUN_144f17b50 body=1750 status=ok
// SIG undefined FUN_144f17b50(void)

void FUN_144f17b50(undefined8 param_1,longlong param_2,byte *param_3,undefined4 param_4,
                  undefined1 *param_5,ushort param_6)

{
  ushort uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ulonglong uVar8;
  __time64_t _Var9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  size_t sVar15;
  undefined1 *puVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_2f8 [32];
  undefined1 *local_2d8;
  uint local_2d0;
  char local_2c8;
  undefined1 local_2c7;
  ushort local_2c4;
  ushort local_2c2;
  uint local_2c0;
  undefined4 local_2bc;
  byte *local_2b8;
  undefined8 local_2b0;
  undefined1 *local_2a8;
  longlong local_2a0;
  longlong local_298;
  ulonglong local_290;
  undefined1 local_288;
  undefined8 local_287;
  undefined1 local_27f;
  undefined1 local_278 [32];
  undefined1 local_258 [512];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2a8 = param_5;
  local_2c4 = param_6;
  local_258[0] = 0;
  local_2bc = param_4;
  local_2b0 = param_1;
  local_298 = param_2;
  memset(local_258 + 1,0,0x1ff);
  local_288 = 0;
  local_287 = 0;
  local_27f = 0;
  bVar4 = *param_3;
  local_2c2 = param_6;
  while ((pbVar14 = param_3, bVar4 != 0 && ((bVar4 == 0x20 || (bVar4 == 9))))) {
    pbVar14 = param_3 + 1;
    param_3 = param_3 + 1;
    bVar4 = *pbVar14;
  }
  while ((bVar4 != 0 &&
         ((0x3d < bVar4 || ((0x2800000100000200U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0))))) {
    bVar4 = pbVar14[1];
    pbVar14 = pbVar14 + 1;
  }
  sVar15 = (longlong)pbVar14 - (longlong)param_3;
  if (sVar15 - 1 < 9) {
    memcpy(&local_288,param_3,sVar15);
    (&local_288)[sVar15] = 0;
    local_2a0 = 0;
    iVar6 = FUN_144f19540(&local_288,"clear");
    if (iVar6 == 0) {
      if (*pbVar14 == 0x3d) {
        while( true ) {
          iVar6 = FUN_144f19540(&local_288,&DAT_149c06bf0);
          if (iVar6 == 0) {
            iVar6 = FUN_144f19540(&local_288,&DAT_149c06bf4);
            if (iVar6 == 0) {
              iVar6 = FUN_144f19540(&local_288,&DAT_149c06bf8);
              uVar17 = -(uint)(iVar6 != 0) & 0x20;
            }
            else {
              uVar17 = 0x10;
            }
          }
          else {
            uVar17 = 8;
          }
          local_2c0 = uVar17;
          if (pbVar14[1] != 0x22) break;
          pbVar12 = pbVar14 + 2;
          local_2c8 = '\x01';
          puVar16 = &DAT_14996de1b;
          local_290 = 0x15180;
          bVar19 = false;
          local_2c7 = 0;
          bVar4 = *pbVar12;
          pbVar13 = pbVar12;
          if (bVar4 == 0x3a) {
LAB_144f17dd2:
            puVar16 = param_5;
            pbVar14 = pbVar13 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar12 = pbVar13;
            if ((((byte)(*pbVar14 - 0x30) < 10) &&
                (uVar7 = strtoul((char *)pbVar13,(char **)&local_2b8,10), pbVar12 = local_2b8,
                uVar7 - 1 < 0xffff)) && ((local_2b8 != pbVar13 && (*local_2b8 == 0x22)))) {
              local_2c2 = FUN_144f16fa0(uVar7);
              pbVar13 = local_2b8;
            }
            else {
              local_2b8 = pbVar12;
              FUN_144f14ad0(param_1,"Unknown alt-svc port number, ignoring.");
              local_2c8 = '\0';
            }
            bVar4 = *pbVar13;
          }
          else {
            if (bVar4 == 0x5b) {
              sVar15 = strspn((char *)(pbVar14 + 3),"0123456789abcdefABCDEF:.");
              if (pbVar12[sVar15 + 1] != 0x5d) break;
              sVar15 = sVar15 + 2;
              pbVar13 = pbVar12 + sVar15;
            }
            else {
              while ((bVar4 != 0 &&
                     ((((byte)(bVar4 - 0x2d) < 0x2e &&
                       ((0x3ffffff01ffbU >> ((longlong)(char)(bVar4 - 0x2d) & 0x3fU) & 1) != 0)) ||
                      ((byte)(bVar4 + 0x9f) < 0x1a))))) {
                bVar4 = pbVar13[1];
                pbVar13 = pbVar13 + 1;
              }
              sVar15 = (longlong)pbVar13 - (longlong)pbVar12;
            }
            if (sVar15 - 1 < 0x1ff) {
              memcpy(local_258,pbVar12,sVar15);
              local_258[sVar15] = 0;
              puVar16 = local_258;
            }
            else {
              FUN_144f14ad0(param_1,"Excessive alt-svc host name, ignoring.");
              local_2c8 = '\0';
            }
            bVar4 = *pbVar13;
            param_5 = puVar16;
            if (bVar4 == 0x3a) goto LAB_144f17dd2;
          }
          pbVar14 = pbVar13 + 1;
          uVar8 = local_290;
          if (bVar4 != 0x22) break;
          while( true ) {
            for (; (local_290 = uVar8, lVar3 = local_298, puVar2 = local_2a8, uVar1 = local_2c4,
                   bVar4 = *pbVar14, bVar4 == 0x20 || (bVar4 == 9)); pbVar14 = pbVar14 + 1) {
              uVar8 = local_290;
            }
            if (bVar4 != 0x3b) break;
            pbVar13 = pbVar14 + 1;
            uVar11 = (uint)(char)*pbVar13;
            pbVar14 = pbVar14 + 1;
            if ((*pbVar13 < 0xe) && ((0x2401U >> (uVar11 & 0x1f) & 1) != 0)) break;
            do {
              cVar10 = (char)uVar11;
              if ((cVar10 != ' ') && (uVar11 = uVar11 & 0xff, cVar10 != '\t')) break;
              pbVar13 = pbVar14 + 1;
              uVar11 = (uint)*pbVar13;
              pbVar14 = pbVar14 + 1;
            } while (*pbVar13 != 0);
            bVar4 = (byte)uVar11;
            uVar8 = (ulonglong)uVar11;
            pbVar13 = pbVar14;
            while ((bVar4 != 0 &&
                   ((0x3d < (byte)uVar8 || ((0x2800000100000200U >> (uVar8 & 0x3f) & 1) == 0))))) {
              bVar4 = pbVar13[1];
              pbVar13 = pbVar13 + 1;
              uVar8 = (ulonglong)bVar4;
            }
            sVar15 = (longlong)pbVar13 - (longlong)pbVar14;
            if (sVar15 - 1 < 0x1f) {
              memcpy(local_278,pbVar14,sVar15);
              local_278[sVar15] = 0;
            }
            else {
              local_278[0] = 0;
            }
            bVar4 = *pbVar13;
            while ((bVar4 != 0 && ((bVar4 == 0x20 || (bVar4 == 9))))) {
              pbVar14 = pbVar13 + 1;
              pbVar13 = pbVar13 + 1;
              bVar4 = *pbVar14;
            }
            if (bVar4 != 0x3d) goto LAB_144f18215;
            bVar4 = pbVar13[1];
            pbVar13 = pbVar13 + 1;
            if (bVar4 == 0) goto LAB_144f18215;
            do {
              if ((bVar4 != 0x20) && (bVar4 != 9)) break;
              bVar4 = pbVar13[1];
              pbVar13 = pbVar13 + 1;
            } while (bVar4 != 0);
            if (bVar4 == 0) goto LAB_144f18215;
            if (bVar4 == 0x22) {
              bVar4 = pbVar13[1];
              pbVar13 = pbVar13 + 1;
              uVar8 = (ulonglong)bVar4;
              bVar19 = true;
LAB_144f17f86:
              bVar5 = (byte)uVar8;
              pbVar14 = pbVar13;
              while ((bVar5 != 0 && (bVar4 = (byte)uVar8, bVar4 != 0x22))) {
                bVar5 = pbVar14[1];
                pbVar14 = pbVar14 + 1;
                bVar4 = 0;
                uVar8 = (ulonglong)bVar5;
              }
              pbVar14 = pbVar14 + 1;
              if (bVar4 == 0) goto LAB_144f18215;
            }
            else {
              bVar4 = *pbVar13;
              uVar8 = (ulonglong)bVar4;
              pbVar14 = pbVar13;
              if (bVar19) goto LAB_144f17f86;
              while ((bVar4 != 0 &&
                     ((uVar17 = local_2c0, 0x3b < (byte)uVar8 ||
                      ((0x800100100000200U >> (uVar8 & 0x3f) & 1) == 0))))) {
                bVar4 = pbVar14[1];
                pbVar14 = pbVar14 + 1;
                uVar8 = (ulonglong)bVar4;
              }
            }
            uVar7 = strtoul((char *)pbVar13,(char **)&local_2b8,10);
            uVar8 = local_290;
            if ((((local_2b8 != pbVar13) && (uVar7 != 0xffffffff)) &&
                (iVar6 = FUN_144f19540(&DAT_149c06d88,local_278), uVar8 = (ulonglong)uVar7,
                iVar6 == 0)) &&
               ((iVar6 = FUN_144f19540("persist",local_278), uVar8 = local_290, iVar6 != 0 &&
                (uVar7 == 1)))) {
              local_2c7 = 1;
            }
          }
          param_1 = local_2b0;
          if ((uVar17 != 0) && (local_2c8 != '\0')) {
            lVar18 = local_2a0 + 1;
            bVar19 = local_2a0 == 0;
            local_2a0 = lVar18;
            if (bVar19) {
              FUN_144f187e0(local_298,local_2bc,local_2a8,local_2c4);
            }
            uVar11 = (uint)local_2c2;
            local_2d8 = (undefined1 *)CONCAT44(local_2d8._4_4_,(uint)uVar1);
            local_2d0 = uVar11;
            lVar18 = FUN_144f18360(puVar2,puVar16,local_2bc,uVar17);
            param_1 = local_2b0;
            if (lVar18 != 0) {
              _Var9 = _time64((__time64_t *)0x0);
              *(ulonglong *)(lVar18 + 0x20) = _Var9 + local_290;
              *(undefined1 *)(lVar18 + 0x28) = local_2c7;
              FUN_144f1a750(lVar3 + 8,*(undefined8 *)(lVar3 + 0x10),lVar18,lVar18 + 0x30);
              param_1 = local_2b0;
              if (uVar17 == 8) {
                local_2d8 = &DAT_149c06bf0;
              }
              else if (uVar17 == 0x10) {
                local_2d8 = &DAT_149c06bf4;
              }
              else {
                local_2d8 = &DAT_14996de1b;
                if (uVar17 == 0x20) {
                  local_2d8 = &DAT_149c06bf8;
                }
              }
              FUN_144f14ad0(local_2b0,"Added alt-svc: %s:%d over %s",puVar16,uVar11);
            }
          }
          if (*pbVar14 == 0x2c) {
            bVar4 = pbVar14[1];
            pbVar13 = pbVar14;
            while ((pbVar13 = pbVar13 + 1, pbVar14 = pbVar13, bVar4 != 0 &&
                   ((bVar4 == 0x20 || (bVar4 == 9))))) {
              bVar4 = pbVar13[1];
            }
            while ((bVar4 != 0 &&
                   ((param_1 = local_2b0, 0x3d < bVar4 ||
                    ((0x2800000100000200U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0))))) {
              bVar4 = pbVar14[1];
              pbVar14 = pbVar14 + 1;
            }
            sVar15 = (longlong)pbVar14 - (longlong)pbVar13;
            if (8 < sVar15 - 1) break;
            memcpy(&local_288,pbVar13,sVar15);
            (&local_288)[sVar15] = 0;
          }
          bVar4 = *pbVar14;
          if (((bVar4 < 0x3c) && ((0x800000000002401U >> ((longlong)(char)bVar4 & 0x3fU) & 1) != 0))
             || (param_5 = local_2a8, bVar4 != 0x3d)) break;
        }
      }
    }
    else {
      FUN_144f187e0(param_2,param_4,param_5,param_6);
    }
  }
  else {
    FUN_144f14ad0(param_1,"Excessive alt-svc header, ignoring.");
  }
LAB_144f18215:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_2f8);
}



// FUNCTION 144f18240 FUN_144f18240 body=288 status=ok
// SIG undefined FUN_144f18240(void)

undefined8
FUN_144f18240(longlong param_1,int param_2,longlong param_3,uint param_4,longlong *param_5,
             uint param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  __time64_t _Var5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  _Var5 = _time64((__time64_t *)0x0);
  plVar3 = *(longlong **)(param_1 + 8);
  do {
    do {
      while( true ) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        plVar1 = (longlong *)*plVar3;
        plVar2 = (longlong *)plVar3[2];
        if (_Var5 <= plVar1[4]) break;
        FUN_144f1a7d0(param_1 + 8,plVar3,0);
        (*(code *)PTR_free_14c6d9f28)(*plVar1);
        (*(code *)PTR_free_14c6d9f28)(plVar1[2]);
        (*(code *)PTR_free_14c6d9f28)(plVar1);
        plVar3 = plVar2;
      }
      plVar3 = plVar2;
    } while (*(int *)((longlong)plVar1 + 0xc) != param_2);
    lVar7 = -1;
    do {
      lVar8 = lVar7;
      lVar7 = lVar8 + 1;
    } while (*(char *)(param_3 + lVar7) != '\0');
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)(*plVar1 + lVar6) != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar8 + param_3) == '.')) {
      lVar7 = lVar8;
    }
  } while ((((lVar7 != lVar6) || (iVar4 = FUN_144f195b0(param_3), iVar4 == 0)) ||
           (*(ushort *)(plVar1 + 1) != param_4)) ||
          ((*(uint *)((longlong)plVar1 + 0x1c) & param_6) == 0));
  *param_5 = (longlong)plVar1;
  return 1;
}



// FUNCTION 144f18360 FUN_144f18360 body=323 status=ok
// SIG undefined FUN_144f18360(void)

longlong *
FUN_144f18360(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  
  plVar2 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(0x48);
  if (plVar2 != (longlong *)0x0) {
    uVar4 = 0xffffffffffffffff;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
      uVar6 = 0xffffffffffffffff;
    } while (param_1[uVar4] != '\0');
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (param_2[uVar6] != '\0');
    if ((uVar4 != 0) && (uVar6 != 0)) {
      if ((uVar4 < 3) || (*param_1 != '[')) {
        if (param_1[uVar5] == '.') {
          uVar4 = uVar5;
        }
      }
      else {
        param_1 = param_1 + 1;
        uVar4 = uVar5 - 1;
      }
      if ((2 < uVar6) && (*param_2 == '[')) {
        param_2 = param_2 + 1;
        uVar6 = uVar7 - 1;
      }
      lVar3 = FUN_144f13940(param_1,uVar4 + 1);
      *plVar2 = lVar3;
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + uVar4) = 0;
        lVar3 = FUN_144f13940(param_2,uVar6 + 1);
        plVar2[2] = lVar3;
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + uVar6) = 0;
          *(undefined4 *)((longlong)plVar2 + 0xc) = param_3;
          *(undefined4 *)((longlong)plVar2 + 0x1c) = param_4;
          uVar1 = FUN_144f16fa0(param_5);
          *(undefined2 *)(plVar2 + 1) = uVar1;
          uVar1 = FUN_144f16fa0(param_6);
          *(undefined2 *)(plVar2 + 3) = uVar1;
          return plVar2;
        }
      }
      (*(code *)PTR_free_14c6d9f28)(*plVar2);
      (*(code *)PTR_free_14c6d9f28)(plVar2[2]);
      (*(code *)PTR_free_14c6d9f28)(plVar2);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 144f184b0 FUN_144f184b0 body=804 status=ok
// SIG undefined FUN_144f184b0(void)

void FUN_144f184b0(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_568 [32];
  undefined4 *local_548;
  undefined1 *local_540;
  char *local_538;
  undefined4 *local_530;
  undefined1 *local_528;
  int *local_520;
  undefined4 *local_518;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  int local_4f4;
  longlong local_4f0;
  longlong local_4e8;
  undefined1 local_4e0 [16];
  undefined1 local_4d0 [24];
  undefined1 local_4b8 [79];
  char acStack_469 [529];
  char local_258 [528];
  ulonglong local_48;
  ulonglong uVar6;
  ulonglong uVar8;
  
  pcVar9 = acStack_469 + 1;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_568;
  local_518 = &local_4f8;
  local_520 = &local_4f4;
  local_528 = local_4b8;
  local_530 = &local_508;
  local_538 = local_258;
  local_540 = local_4e0;
  local_548 = &local_504;
  local_4f0 = param_1;
  iVar2 = FUN_145834187(param_2,"%10s %512s %u %10s %512s %u \"%64[^\"]\" %u %u",local_4d0,pcVar9);
  if (iVar2 != 9) goto LAB_144f187bd;
  lVar3 = FUN_1452b1ce0(local_4b8);
  local_4fc = local_508;
  local_500 = local_504;
  local_4e8 = lVar3;
  iVar2 = FUN_144f19540(local_4e0,&DAT_149c06bf0);
  uVar12 = 8;
  if (iVar2 == 0) {
    iVar2 = FUN_144f19540(local_4e0,&DAT_149c06bf4);
    if (iVar2 == 0) {
      iVar2 = FUN_144f19540(local_4e0,&DAT_149c06bf8);
      uVar11 = -(uint)(iVar2 != 0) & 0x20;
    }
    else {
      uVar11 = 0x10;
    }
  }
  else {
    uVar11 = 8;
  }
  iVar2 = FUN_144f19540(local_4d0,&DAT_149c06bf0);
  if (iVar2 == 0) {
    iVar2 = FUN_144f19540(local_4d0,&DAT_149c06bf4);
    if (iVar2 == 0) {
      iVar2 = FUN_144f19540(local_4d0,&DAT_149c06bf8);
      if (iVar2 == 0) goto LAB_144f187bd;
      uVar12 = 0x20;
    }
    else {
      uVar12 = 0x10;
    }
  }
  if (uVar11 == 0) goto LAB_144f187bd;
  pcVar10 = local_258;
  plVar4 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(0x48);
  if (plVar4 == (longlong *)0x0) {
LAB_144f1875a:
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar8 = uVar7;
      uVar7 = uVar8 + 1;
      uVar5 = 0xffffffffffffffff;
    } while (pcVar9[uVar7] != '\0');
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (local_258[uVar6 + 1] != '\0');
    lVar3 = local_4e8;
    param_1 = local_4f0;
    if ((uVar7 == 0) || (uVar5 == 0)) goto LAB_144f1875a;
    if ((uVar7 < 3) || (acStack_469[1] != '[')) {
      if (acStack_469[uVar8 + 1] == '.') {
        uVar7 = uVar8;
      }
    }
    else {
      pcVar9 = acStack_469 + 2;
      uVar7 = uVar8 - 1;
    }
    if ((2 < uVar5) && (local_258[0] == '[')) {
      pcVar10 = local_258 + 1;
      uVar5 = uVar6 - 1;
    }
    lVar3 = FUN_144f13940(pcVar9,uVar7 + 1);
    *plVar4 = lVar3;
    if (lVar3 == 0) {
LAB_144f18735:
      (*(code *)PTR_free_14c6d9f28)(*plVar4);
      (*(code *)PTR_free_14c6d9f28)(plVar4[2]);
      (*(code *)PTR_free_14c6d9f28)(plVar4);
      lVar3 = local_4e8;
      param_1 = local_4f0;
      goto LAB_144f1875a;
    }
    *(undefined1 *)(lVar3 + uVar7) = 0;
    lVar3 = FUN_144f13940(pcVar10,uVar5 + 1);
    plVar4[2] = lVar3;
    if (lVar3 == 0) goto LAB_144f18735;
    *(undefined1 *)(lVar3 + uVar5) = 0;
    *(undefined4 *)((longlong)plVar4 + 0xc) = uVar12;
    *(uint *)((longlong)plVar4 + 0x1c) = uVar11;
    uVar1 = FUN_144f16fa0(local_500);
    *(undefined2 *)(plVar4 + 1) = uVar1;
    uVar1 = FUN_144f16fa0(local_4fc);
    *(undefined2 *)(plVar4 + 3) = uVar1;
    lVar3 = local_4e8;
    param_1 = local_4f0;
  }
  if (plVar4 != (longlong *)0x0) {
    plVar4[4] = lVar3;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = local_4f8;
    *(bool *)(plVar4 + 5) = local_4f4 != 0;
    FUN_144f1a750(param_1 + 8,*(undefined8 *)(param_1 + 0x10),plVar4,plVar4 + 6);
  }
LAB_144f187bd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_568);
}



// FUNCTION 144f187e0 FUN_144f187e0 body=240 status=ok
// SIG undefined FUN_144f187e0(void)

void FUN_144f187e0(longlong param_1,int param_2,longlong param_3,short param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 8);
  while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar3;
    plVar2 = (longlong *)plVar3[2];
    if ((param_2 == *(int *)((longlong)plVar1 + 0xc)) && (param_4 == (short)plVar1[1])) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (*(char *)(param_3 + lVar6) != '\0');
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(*plVar1 + lVar5) != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar7 + param_3) == '.')) {
        lVar6 = lVar7;
      }
      if ((lVar6 == lVar5) && (iVar4 = FUN_144f195b0(param_3), iVar4 != 0)) {
        FUN_144f1a7d0(param_1 + 8,plVar3,0);
        (*(code *)PTR_free_14c6d9f28)(*plVar1);
        (*(code *)PTR_free_14c6d9f28)(plVar1[2]);
        (*(code *)PTR_free_14c6d9f28)(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 144f188d0 FUN_144f188d0 body=47 status=ok
// SIG undefined FUN_144f188d0(void)

longlong FUN_144f188d0(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(0x30);
  if (lVar1 != 0) {
    FUN_144f1a730(lVar1,0);
  }
  return lVar1;
}



// FUNCTION 144f18900 FUN_144f18900 body=127 status=ok
// SIG undefined FUN_144f18900(void)

void FUN_144f18900(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)*puVar1;
    while (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
      plVar2 = (longlong *)plVar2[2];
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar3 + 0x18));
      (*(code *)PTR_free_14c6d9f28)(lVar3);
    }
    (*(code *)PTR_free_14c6d9f28)(puVar1[4]);
    (*(code *)PTR_free_14c6d9f28)(puVar1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144f18980 FUN_144f18980 body=609 status=ok
// SIG undefined FUN_144f18980(void)

undefined8 FUN_144f18980(undefined8 param_1,undefined8 param_2,char *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  __time64_t _Var5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong local_res18;
  char *local_res20;
  
  local_res18 = 0;
  bVar1 = false;
  bVar2 = false;
  uVar10 = 0;
  _Var5 = _time64((__time64_t *)0x0);
  cVar3 = FUN_144f1aef0(param_2);
  if (cVar3 == '\0') {
    cVar3 = *param_3;
    lVar9 = 0x7fffffffffffffff;
    if (cVar3 == '\0') goto LAB_144f189f5;
LAB_144f189e0:
    do {
      if ((cVar3 == ' ') || (cVar3 == '\t')) {
        cVar3 = param_3[1];
        param_3 = param_3 + 1;
        if (cVar3 != '\0') goto LAB_144f189e0;
      }
LAB_144f189f5:
      iVar4 = FUN_144f195b0("max-age=",param_3,8);
      if (iVar4 == 0) {
        iVar4 = FUN_144f195b0("includesubdomains",param_3,0x11);
        if (iVar4 != 0) {
          if (bVar2) {
            return 0x2b;
          }
          cVar3 = param_3[0x11];
          param_3 = param_3 + 0x11;
          uVar10 = 1;
          bVar2 = true;
          goto joined_r0x000144f18aef;
        }
        cVar3 = *param_3;
        if (cVar3 != '\0') {
          do {
            if (cVar3 == ';') break;
            cVar3 = param_3[1];
            param_3 = param_3 + 1;
          } while (cVar3 != '\0');
          goto joined_r0x000144f18aef;
        }
      }
      else {
        if (bVar1) {
          return 0x2b;
        }
        pcVar8 = param_3 + 8;
        cVar3 = param_3[8];
        while ((cVar3 != '\0' && ((cVar3 == ' ' || (cVar3 == '\t'))))) {
          pcVar7 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar3 = *pcVar7;
        }
        pcVar7 = pcVar8 + 1;
        if (cVar3 != '\"') {
          pcVar7 = pcVar8;
        }
        iVar4 = FUN_1452b1ac0(pcVar7,&local_res20,10,&local_res18);
        if (iVar4 == 1) {
          local_res18 = 0x7fffffffffffffff;
        }
        else if (iVar4 != 0) {
          return 0x2b;
        }
        param_3 = local_res20;
        if (cVar3 == '\"') {
          if (*local_res20 != '\"') {
            return 0x2b;
          }
          param_3 = local_res20 + 1;
        }
        cVar3 = *param_3;
        bVar1 = true;
joined_r0x000144f18aef:
        while ((cVar3 != '\0' && ((cVar3 == ' ' || (cVar3 == '\t'))))) {
          pcVar8 = param_3 + 1;
          param_3 = param_3 + 1;
          cVar3 = *pcVar8;
        }
      }
      if (cVar3 == ';') {
        cVar3 = param_3[1];
        param_3 = param_3 + 1;
      }
    } while (cVar3 != '\0');
    if (!bVar1) {
      return 0x2b;
    }
    if (local_res18 == 0) {
      lVar9 = FUN_144f18bf0(param_1,param_2,0);
      if (lVar9 != 0) {
        FUN_144f1a7d0(param_1,lVar9,0);
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar9 + 0x18));
        (*(code *)PTR_free_14c6d9f28)(lVar9);
      }
    }
    else {
      if (local_res18 <= 0x7fffffffffffffff - _Var5) {
        lVar9 = local_res18 + _Var5;
      }
      local_res18 = lVar9;
      lVar9 = FUN_144f18bf0(param_1,param_2,0);
      if (lVar9 == 0) {
        uVar6 = FUN_144f19260(param_1,param_2,uVar10,local_res18);
        return uVar6;
      }
      *(longlong *)(lVar9 + 0x28) = local_res18;
      *(undefined1 *)(lVar9 + 0x20) = uVar10;
    }
  }
  return 0;
}



// FUNCTION 144f18bf0 FUN_144f18bf0 body=345 status=ok
// SIG undefined FUN_144f18bf0(void)

void FUN_144f18bf0(undefined8 *param_1,void *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_168 [31];
  char local_149 [273];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_1 != (undefined8 *)0x0) {
    _Var4 = _time64((__time64_t *)0x0);
    uVar5 = 0xffffffffffffffff;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)((longlong)param_2 + uVar5) != '\0');
    if (uVar6 < 0x100) {
      memcpy(local_149 + 1,param_2,uVar5);
      if (*(char *)((longlong)param_2 + uVar6) != '.') {
        uVar6 = uVar5;
      }
      if (0x100 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_144e2bb84();
      }
      plVar1 = (longlong *)*param_1;
      local_149[uVar6 + 1] = '\0';
      do {
        while( true ) {
          if (plVar1 == (longlong *)0x0) goto LAB_144f18d2f;
          lVar2 = *plVar1;
          plVar1 = (longlong *)plVar1[2];
          if (_Var4 < *(longlong *)(lVar2 + 0x28)) break;
          FUN_144f1a7d0(param_1,lVar2,0);
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar2 + 0x18));
          (*(code *)PTR_free_14c6d9f28)(lVar2);
        }
        if ((param_3 != '\0') && (*(char *)(lVar2 + 0x20) != '\0')) {
          uVar5 = 0xffffffffffffffff;
          do {
            uVar5 = uVar5 + 1;
          } while (*(char *)(*(longlong *)(lVar2 + 0x18) + uVar5) != '\0');
          if (((uVar5 < uVar6) && (local_149[uVar6 - uVar5] == '.')) &&
             (iVar3 = FUN_144f195b0(), iVar3 != 0)) break;
        }
        iVar3 = FUN_144f19540(local_149 + 1,*(undefined8 *)(lVar2 + 0x18));
      } while (iVar3 == 0);
    }
  }
LAB_144f18d2f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 144f18d70 FUN_144f18d70 body=820 status=ok
// SIG undefined FUN_144f18d70(void)

void FUN_144f18d70(longlong param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  FILE *_File;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_108 [32];
  char *local_e8;
  int local_e0;
  int local_d8;
  int local_d0;
  int local_c8;
  int local_c0;
  char *local_b8;
  FILE *local_b0;
  longlong local_a8;
  longlong local_a0;
  uint local_98;
  char local_94 [8];
  undefined2 local_8c;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = (char *)0x0;
  if (param_2 != (longlong *)0x0) {
    if ((param_3 == (char *)0x0) && ((char *)param_2[4] != (char *)0x0)) {
      param_3 = (char *)param_2[4];
    }
    if ((((*(byte *)(param_2 + 5) & 2) == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
      iVar2 = FUN_1452b2520(param_1,param_3,&local_b0,&local_b8);
      if (iVar2 == 0) {
        fputs("# Your HSTS cache. https://curl.se/docs/hsts.html\n# This file was generated by libcurl! Edit at your own risk.\n"
              ,local_b0);
        plVar4 = (longlong *)*param_2;
        _File = local_b0;
        while (plVar4 != (longlong *)0x0) {
          lVar1 = *plVar4;
          plVar4 = (longlong *)plVar4[2];
          local_b0 = _File;
          if (*(longlong *)(lVar1 + 0x28) == 0x7fffffffffffffff) {
            puVar5 = &DAT_14996de1b;
            local_e8 = "unlimited";
            if (*(char *)(lVar1 + 0x20) != '\0') {
              puVar5 = &DAT_149971530;
            }
            FUN_144f2b7b0(_File,"%s%s \"%s\"\n",puVar5,*(undefined8 *)(lVar1 + 0x18));
            _File = local_b0;
          }
          else {
            iVar2 = FUN_1452b1c90(*(longlong *)(lVar1 + 0x28),&local_80);
            if (iVar2 != 0) {
              fclose(local_b0);
              goto LAB_144f18f23;
            }
            puVar5 = &DAT_14996de1b;
            local_e0 = local_70 + 1;
            if (*(char *)(lVar1 + 0x20) != '\0') {
              puVar5 = &DAT_149971530;
            }
            local_c0 = local_80;
            local_c8 = local_7c;
            local_d0 = local_78;
            local_d8 = local_74;
            local_e8 = (char *)CONCAT44(local_e8._4_4_,local_6c + 0x76c);
            FUN_144f2b7b0(_File,"%s%s \"%d%02d%02d %02d:%02d:%02d\"\n",puVar5,
                          *(undefined8 *)(lVar1 + 0x18));
            _File = local_b0;
          }
        }
        fclose(_File);
        if ((local_b8 != (char *)0x0) && (iVar2 = FUN_1452b2410(local_b8,param_3), iVar2 != 0)) {
LAB_144f18f23:
          if (local_b8 != (char *)0x0) {
            _unlink(local_b8);
          }
        }
      }
      (*(code *)PTR_free_14c6d9f28)(local_b8);
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      plVar4 = (longlong *)*param_2;
      local_50 = param_2[3];
      local_58 = 0;
      if (plVar4 != (longlong *)0x0) {
        do {
          lVar1 = *plVar4;
          local_a0 = -1;
          plVar4 = (longlong *)plVar4[2];
          local_a8 = *(longlong *)(lVar1 + 0x18);
          do {
            local_a0 = local_a0 + 1;
          } while (*(char *)(local_a8 + local_a0) != '\0');
          local_98 = local_98 ^ (*(byte *)(lVar1 + 0x20) ^ local_98) & 1;
          if (*(longlong *)(lVar1 + 0x28) == 0x7fffffffffffffff) {
            builtin_strncpy(local_94,"unlimite",8);
            local_8c = 100;
          }
          else {
            iVar2 = FUN_1452b1c90(*(longlong *)(lVar1 + 0x28),&local_80);
            if (iVar2 != 0) break;
            local_c8 = local_80;
            local_d0 = local_7c;
            local_d8 = local_78;
            local_e0 = local_74;
            local_e8 = (char *)CONCAT44(local_e8._4_4_,local_70 + 1);
            FUN_144f2b7e0(local_94,0x12,"%d%02d%02d %02d:%02d:%02d",local_6c + 0x76c);
          }
          iVar2 = (**(code **)(param_1 + 0x2e0))
                            (param_1,&local_a8,&local_58,*(undefined8 *)(param_1 + 0x2e8));
          iVar3 = 0;
          if (iVar2 == 2) {
            iVar3 = 0x2b;
          }
          if (((iVar3 != 0) || (iVar2 != 0)) || (local_58 = local_58 + 1, plVar4 == (longlong *)0x0)
             ) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 144f190c0 FUN_144f190c0 body=11 status=ok
// SIG undefined FUN_144f190c0(void)

void FUN_144f190c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144f19320(param_2,param_3);
  return;
}



// FUNCTION 144f190d0 FUN_144f190d0 body=274 status=ok
// SIG undefined FUN_144f190d0(void)

void FUN_144f190d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [32];
  char *local_158;
  undefined8 local_150;
  uint local_148;
  char local_144 [28];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    do {
      local_158 = local_128;
      local_148 = local_148 & 0xfffffffe;
      local_150 = 0x100;
      local_144[0] = '\0';
      local_128[0] = '\0';
      iVar1 = (**(code **)(param_1 + 0x2d0))(param_1,&local_158,*(undefined8 *)(param_1 + 0x2d8));
      if ((iVar1 != 0) || (*local_158 == '\0')) break;
      if (local_144[0] == '\0') {
        uVar2 = 0x7fffffffffffffff;
      }
      else {
        uVar2 = FUN_1452b1ce0(local_144);
      }
      iVar1 = FUN_144f19260(param_2,local_158,(byte)local_148 & 1,uVar2);
    } while (iVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_178);
}



// FUNCTION 144f19200 FUN_144f19200 body=94 status=ok
// SIG undefined FUN_144f19200(void)

void FUN_144f19200(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2c8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_144bbeca0(param_1,7,2);
    do {
      FUN_144f19320(*(undefined8 *)(param_1 + 0xaf8),*puVar1);
      puVar1 = (undefined8 *)puVar1[1];
    } while (puVar1 != (undefined8 *)0x0);
    FUN_144bbece0(param_1,7);
  }
  return;
}



// FUNCTION 144f19260 FUN_144f19260 body=183 status=ok
// SIG undefined FUN_144f19260(void)

undefined8 FUN_144f19260(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (*(code *)PTR_calloc_14c6d9f40)(0x30);
  if (lVar2 != 0) {
    lVar3 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
    if (lVar3 != 0) {
      lVar1 = -1;
      do {
        lVar4 = lVar1;
        lVar1 = lVar4 + 1;
      } while (*(char *)(lVar3 + 1 + lVar4) != '\0');
      if (*(char *)(lVar4 + lVar3) == '.') {
        *(undefined1 *)(lVar4 + lVar3) = 0;
      }
      *(longlong *)(lVar2 + 0x18) = lVar3;
      *(undefined8 *)(lVar2 + 0x28) = param_4;
      *(undefined1 *)(lVar2 + 0x20) = param_3;
      FUN_144f1a750(param_1,*(undefined8 *)(param_1 + 8),lVar2,lVar2);
      return 0;
    }
    (*(code *)PTR_free_14c6d9f28)(lVar2);
  }
  return 0x1b;
}



// FUNCTION 144f19320 FUN_144f19320 body=519 status=ok
// SIG undefined FUN_144f19320(void)

void FUN_144f19320(longlong param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  FILE *_File;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 auStack_1b8 [32];
  char local_198 [80];
  char local_148;
  char local_147 [271];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x20));
  lVar4 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
  *(longlong *)(param_1 + 0x20) = lVar4;
  if ((lVar4 != 0) && (_File = fopen(param_2,"rt"), _File != (FILE *)0x0)) {
    pcVar5 = (char *)(*(code *)PTR_malloc_14c6d9f20)(0xfff);
    if (pcVar5 == (char *)0x0) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      fclose(_File);
    }
    else {
      lVar4 = FUN_1452b1ba0(pcVar5,0xfff,_File);
      while (lVar4 != 0) {
        cVar2 = *pcVar5;
        pcVar7 = pcVar5;
        while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar2 = *pcVar1;
        }
        if ((cVar2 != '#') &&
           (iVar3 = FUN_145834187(pcVar7,"%256s \"%64[^\"]\"",&local_148,local_198), iVar3 == 2)) {
          iVar3 = strcmp(local_198,"unlimited");
          if (iVar3 == 0) {
            lVar4 = 0x7fffffffffffffff;
          }
          else {
            lVar4 = FUN_1452b1ce0(local_198);
          }
          pcVar7 = &local_148;
          bVar8 = local_148 == '.';
          if (bVar8) {
            pcVar7 = local_147;
          }
          lVar6 = FUN_144f18bf0(param_1,pcVar7,bVar8);
          if (lVar6 == 0) {
            FUN_144f19260(param_1,pcVar7,bVar8,lVar4);
          }
          else if (*(longlong *)(lVar6 + 0x28) < lVar4) {
            *(longlong *)(lVar6 + 0x28) = lVar4;
          }
        }
        lVar4 = FUN_1452b1ba0(pcVar5,0xfff,_File);
      }
      (*(code *)PTR_free_14c6d9f28)(pcVar5);
      fclose(_File);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 144f19540 FUN_144f19540 body=107 status=ok
// SIG undefined FUN_144f19540(void)

bool FUN_144f19540(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1 == (byte *)0x0) {
    if (param_2 == (byte *)0x0) {
      return true;
    }
  }
  else if (param_2 != (byte *)0x0) {
    bVar1 = *param_1;
    while( true ) {
      if ((bVar1 == 0) || (*param_2 == 0)) {
        return (*param_1 == 0) != (*param_2 != 0);
      }
      if ((&DAT_149c06ed0)[*param_1] != (&DAT_149c06ed0)[*param_2]) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    }
  }
  return false;
}



// FUNCTION 144f195b0 FUN_144f195b0 body=122 status=ok
// SIG undefined FUN_144f195b0(void)

bool FUN_144f195b0(byte *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  
  if (param_1 == (byte *)0x0) {
    if (param_2 != (byte *)0x0) {
      return false;
    }
    if (param_3 == 0) {
      return false;
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      return false;
    }
    bVar1 = *param_1;
    for (; (bVar1 != 0 && (*param_2 != 0)); param_2 = param_2 + 1) {
      if (param_3 == 0) {
        return true;
      }
      if ((&DAT_149c06ed0)[*param_1] != (&DAT_149c06ed0)[*param_2]) {
        return false;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
      bVar1 = *param_1;
    }
    if (param_3 != 0) {
      return (&DAT_149c06ed0)[*param_1] == (&DAT_149c06ed0)[*param_2];
    }
  }
  return true;
}



// FUNCTION 144f19630 FUN_144f19630 body=15 status=ok
// SIG undefined FUN_144f19630(void)

undefined1 FUN_144f19630(byte param_1)

{
  return (&DAT_149c06ed0)[param_1];
}



// FUNCTION 144f19640 FUN_144f19640 body=15 status=ok
// SIG undefined FUN_144f19640(void)

undefined1 FUN_144f19640(byte param_1)

{
  return (&DAT_149c06fd0)[param_1];
}



// FUNCTION 144f19650 FUN_144f19650 body=47 status=ok
// SIG undefined FUN_144f19650(void)

void FUN_144f19650(longlong param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  
  if (param_3 != 0) {
    pbVar1 = param_2;
    do {
      (pbVar1 + 1)[(param_1 - (longlong)param_2) + -1] = (&DAT_149c06ed0)[*pbVar1];
      if (*pbVar1 == 0) {
        return;
      }
      param_3 = param_3 + -1;
      pbVar1 = pbVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144f19680 FUN_144f19680 body=47 status=ok
// SIG undefined FUN_144f19680(void)

void FUN_144f19680(longlong param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  
  if (param_3 != 0) {
    pbVar1 = param_2;
    do {
      (pbVar1 + 1)[(param_1 - (longlong)param_2) + -1] = (&DAT_149c06fd0)[*pbVar1];
      if (*pbVar1 == 0) {
        return;
      }
      param_3 = param_3 + -1;
      pbVar1 = pbVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144f196b0 FUN_144f196b0 body=52 status=ok
// SIG undefined FUN_144f196b0(void)

bool FUN_144f196b0(char *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  
  if (param_1 == (char *)0x0) {
    if (param_2 == 0) {
      return true;
    }
  }
  else if (param_2 != 0) {
    param_2 = param_2 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      cVar2 = param_1[param_2];
      if (cVar1 != cVar2) break;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    return cVar1 == cVar2;
  }
  return false;
}



// FUNCTION 144f196f0 FUN_144f196f0 body=113 status=ok
// SIG undefined FUN_144f196f0(void)

uint FUN_144f196f0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
    if (param_2 == (byte *)0x0) {
      return 0;
    }
  }
  else if (param_2 != (byte *)0x0) {
    bVar3 = *param_2;
    uVar4 = (uint)(char)(bVar3 ^ *param_1);
    if (*param_1 != 0) {
      pbVar2 = param_2;
      do {
        if (bVar3 == 0) {
          return uVar4;
        }
        pbVar1 = pbVar2 + (longlong)(param_1 + (1 - (longlong)param_2));
        pbVar2 = pbVar2 + 1;
        bVar3 = *pbVar2;
        uVar4 = uVar4 | (int)(char)(*pbVar1 ^ bVar3);
      } while (*pbVar1 != 0);
    }
    return uVar4;
  }
  return 1;
}



// FUNCTION 144f19770 FUN_144f19770 body=172 status=ok
// SIG undefined FUN_144f19770(void)

undefined8 FUN_144f19770(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined1 **)(param_2 + 0x50) = &LAB_144f1a1c0;
  *(undefined1 **)(param_2 + 0x58) = &LAB_144f1a1d0;
  iVar1 = FUN_144b4fcd0(param_2 + 0x20,&DAT_14996cb70,0x58);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x18) = 1;
    return 0;
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
    return 0x3d;
  }
  FUN_144f14b70(param_1,
                "Error while processing content unencoding: Unknown failure within decompression software."
               );
  return 0x3d;
}



// FUNCTION 144f19820 FUN_144f19820 body=132 status=ok
// SIG undefined FUN_144f19820(void)

undefined8 FUN_144f19820(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_2 + 0x20) = param_3;
  piVar1 = (int *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x28) = param_4;
  if (*piVar1 != 3) {
    uVar3 = FUN_144f1a320(param_1,param_2,2);
    return uVar3;
  }
  uVar2 = *(uint *)(param_2 + 0x1c);
  uVar4 = 0;
  if (uVar2 <= param_4) {
    param_4 = uVar2;
  }
  *(uint *)(param_2 + 0x1c) = uVar2 - param_4;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) - param_4;
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + (ulonglong)param_4;
  if (*(int *)(param_2 + 0x28) == 0) {
    if (*(int *)(param_2 + 0x1c) != 0) {
      *piVar1 = 3;
      return 0;
    }
  }
  else {
    uVar4 = 0x17;
  }
  uVar3 = FUN_144f1a220(param_1,param_2 + 0x20,piVar1,uVar4);
  return uVar3;
}



// FUNCTION 144f198b0 FUN_144f198b0 body=125 status=ok
// SIG undefined FUN_144f198b0(void)

void FUN_144f198b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x18) == 4) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar1 = FUN_144b4fb40(param_2 + 0x20);
    if (iVar1 != 0) {
      if (*(longlong *)(param_2 + 0x40) == 0) {
        FUN_144f14b70(param_1,
                      "Error while processing content unencoding: Unknown failure within decompression software."
                     );
      }
      else {
        FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
      }
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 144f19930 FUN_144f19930 body=254 status=ok
// SIG undefined FUN_144f19930(void)

undefined8 FUN_144f19930(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined1 **)(param_2 + 0x50) = &LAB_144f1a1c0;
  *(undefined1 **)(param_2 + 0x58) = &LAB_144f1a1d0;
  lVar5 = FUN_144d907d0();
  lVar2 = 0;
  do {
    lVar6 = lVar2;
    bVar1 = (&DAT_149c07248)[lVar6];
    if (*(byte *)(lVar5 + lVar6) != bVar1) goto LAB_144f1998a;
    lVar2 = lVar6 + 1;
  } while (lVar6 + 1 != 8);
  bVar1 = (&DAT_149c07248)[lVar6];
LAB_144f1998a:
  if (*(byte *)(lVar5 + lVar6) < bVar1) {
    iVar3 = FUN_144b4fce0(param_2 + 0x20,0xfffffff1,&DAT_14996cb70);
    if (iVar3 != 0) goto LAB_144f199bf;
    *(undefined4 *)(param_2 + 0x1c) = 8;
    uVar4 = 1;
  }
  else {
    iVar3 = FUN_144b4fce0(param_2 + 0x20,0x2f,&DAT_14996cb70);
    if (iVar3 != 0) {
LAB_144f199bf:
      if (*(longlong *)(param_2 + 0x40) != 0) {
        FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
        return 0x3d;
      }
      FUN_144f14b70(param_1,
                    "Error while processing content unencoding: Unknown failure within decompression software."
                   );
      return 0x3d;
    }
    uVar4 = 6;
  }
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  return 0;
}



// FUNCTION 144f19a30 FUN_144f19a30 body=572 status=ok
// SIG undefined FUN_144f19a30(void)

ulonglong FUN_144f19a30(undefined8 param_1,longlong param_2,void *param_3,size_t param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong local_res10;
  
  iVar1 = *(int *)(param_2 + 0x18);
  iVar5 = (int)param_4;
  if (iVar1 == 6) {
    *(void **)(param_2 + 0x20) = param_3;
    uVar6 = 6;
    *(int *)(param_2 + 0x28) = iVar5;
LAB_144f19c51:
    uVar4 = FUN_144f1a320(param_1,param_2,uVar6);
  }
  else {
    if (iVar1 == 1) {
      iVar1 = FUN_144f1a640(param_3,param_4,&local_res10);
      if (iVar1 == 0) {
        *(int *)(param_2 + 0x28) = iVar5 - (int)local_res10;
LAB_144f19c37:
        *(longlong *)(param_2 + 0x20) = (longlong)param_3 + local_res10;
        *(undefined4 *)(param_2 + 0x18) = 5;
        goto LAB_144f19c42;
      }
      if ((iVar1 == 1) || (iVar1 != 2)) {
LAB_144f19adf:
        uVar2 = FUN_144f1a1e0(param_1,param_2 + 0x20);
        uVar4 = (ulonglong)uVar2;
        if (*(int *)(param_2 + 0x18) == 4) {
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        if (*(int *)(param_2 + 0x18) == 0) {
          return uVar4;
        }
        iVar1 = FUN_144b4fb40(param_2 + 0x20);
        if ((iVar1 != 0) && (uVar2 == 0)) {
          if (*(longlong *)(param_2 + 0x40) != 0) {
            FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
            *(undefined4 *)(param_2 + 0x18) = 0;
            return 0x3d;
          }
          FUN_144f14b70(param_1,
                        "Error while processing content unencoding: Unknown failure within decompression software."
                       );
          uVar4 = 0x3d;
        }
        *(undefined4 *)(param_2 + 0x18) = 0;
        return uVar4;
      }
      *(int *)(param_2 + 0x28) = iVar5;
      _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)();
      *(void **)(param_2 + 0x20) = _Dst;
      if (_Dst == (void *)0x0) goto LAB_144f19bca;
      memcpy(_Dst,param_3,(ulonglong)*(uint *)(param_2 + 0x28));
      *(undefined4 *)(param_2 + 0x18) = 4;
    }
    else {
      if (iVar1 == 3) {
        *(void **)(param_2 + 0x20) = param_3;
        *(int *)(param_2 + 0x28) = iVar5;
        uVar4 = FUN_144f1a2c0(param_1,param_2);
        return uVar4;
      }
      if (iVar1 == 4) {
        iVar5 = *(int *)(param_2 + 0x28) + iVar5;
        *(int *)(param_2 + 0x28) = iVar5;
        lVar3 = FUN_144f139a0(*(undefined8 *)(param_2 + 0x20),iVar5);
        *(longlong *)(param_2 + 0x20) = lVar3;
        if (lVar3 == 0) {
LAB_144f19bca:
          if (*(int *)(param_2 + 0x18) == 4) {
            (*(code *)PTR_free_14c6d9f28)(0);
            *(undefined8 *)(param_2 + 0x20) = 0;
          }
          if (*(int *)(param_2 + 0x18) != 0) {
            FUN_144b4fb40(param_2 + 0x20);
            *(undefined4 *)(param_2 + 0x18) = 0;
          }
          return 0x1b;
        }
        memcpy((void *)((*(uint *)(param_2 + 0x28) - param_4) + lVar3),param_3,param_4);
        iVar1 = FUN_144f1a640(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),
                              &local_res10);
        if (iVar1 == 0) {
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x20));
          uVar2 = *(uint *)(param_2 + 0x28);
          *(uint *)(param_2 + 0x28) = uVar2 - (int)local_res10;
          local_res10 = param_4 + (local_res10 - (ulonglong)uVar2);
          goto LAB_144f19c37;
        }
        if ((iVar1 == 1) || (iVar1 != 2)) goto LAB_144f19adf;
      }
      else {
        *(void **)(param_2 + 0x20) = param_3;
        *(int *)(param_2 + 0x28) = iVar5;
LAB_144f19c42:
        if (*(int *)(param_2 + 0x28) != 0) {
          uVar6 = 5;
          goto LAB_144f19c51;
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144f19c70 FUN_144f19c70 body=125 status=ok
// SIG undefined FUN_144f19c70(void)

void FUN_144f19c70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x18) == 4) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar1 = FUN_144b4fb40(param_2 + 0x20);
    if (iVar1 != 0) {
      if (*(longlong *)(param_2 + 0x40) == 0) {
        FUN_144f14b70(param_1,
                      "Error while processing content unencoding: Unknown failure within decompression software."
                     );
      }
      else {
        FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
      }
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 144f19d40 FUN_144f19d40 body=365 status=ok
// SIG undefined FUN_144f19d40(void)

undefined4 FUN_144f19d40(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **ppuVar8;
  char *pcVar9;
  longlong lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  
  ppuVar8 = &PTR_s_identity_149c07130;
  ppuVar12 = &PTR_PTR_149c07160;
  lVar10 = 0;
  ppuVar11 = &PTR_PTR_149c07160;
  do {
    iVar2 = FUN_144f19540(*ppuVar8,"identity");
    if (iVar2 == 0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while ((*ppuVar8)[lVar4] != '\0');
      lVar10 = lVar10 + 2 + lVar4;
    }
    ppuVar8 = (undefined **)ppuVar11[1];
    ppuVar11 = ppuVar11 + 1;
  } while (ppuVar8 != (undefined **)0x0);
  if (lVar10 == 0) {
    pcVar5 = (char *)(*(code *)PTR__strdup_14c6d9f38)("identity");
  }
  else {
    pcVar5 = (char *)(*(code *)PTR_malloc_14c6d9f20)(lVar10);
    if (pcVar5 != (char *)0x0) {
      ppuVar8 = &PTR_s_identity_149c07130;
      pcVar9 = pcVar5;
      do {
        iVar2 = FUN_144f19540(*ppuVar8,"identity");
        if (iVar2 == 0) {
          pcVar6 = *ppuVar8;
          pcVar7 = pcVar9;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            *pcVar7 = cVar1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (pcVar9[lVar10] != '\0');
          pcVar9 = pcVar9 + lVar10;
          pcVar9[0] = ',';
          pcVar9[1] = ' ';
          pcVar9 = pcVar9 + 2;
        }
        ppuVar8 = (undefined **)ppuVar12[1];
        ppuVar12 = ppuVar12 + 1;
      } while (ppuVar8 != (undefined **)0x0);
      pcVar9[-2] = '\0';
    }
  }
  if (pcVar5 == (char *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    FUN_144f14b70(param_1,
                  "Unrecognized content encoding type. libcurl understands %s content encodings.",
                  pcVar5);
    (*(code *)PTR_free_14c6d9f28)(pcVar5);
    uVar3 = 0x3d;
  }
  return uVar3;
}



// FUNCTION 144f19ec0 FUN_144f19ec0 body=302 status=ok
// SIG undefined FUN_144f19ec0(void)

char * FUN_144f19ec0(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
  char *pcVar8;
  longlong lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  ppuVar7 = &PTR_s_identity_149c07130;
  ppuVar11 = &PTR_PTR_149c07160;
  lVar9 = 0;
  ppuVar10 = &PTR_PTR_149c07160;
  do {
    iVar2 = FUN_144f19540(*ppuVar7,"identity");
    if (iVar2 == 0) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while ((*ppuVar7)[lVar3] != '\0');
      lVar9 = lVar9 + 2 + lVar3;
    }
    ppuVar7 = (undefined **)ppuVar10[1];
    ppuVar10 = ppuVar10 + 1;
  } while (ppuVar7 != (undefined **)0x0);
  if (lVar9 == 0) {
    pcVar4 = (char *)(*(code *)PTR__strdup_14c6d9f38)("identity");
  }
  else {
    pcVar4 = (char *)(*(code *)PTR_malloc_14c6d9f20)(lVar9);
    if (pcVar4 != (char *)0x0) {
      ppuVar7 = &PTR_s_identity_149c07130;
      pcVar8 = pcVar4;
      do {
        iVar2 = FUN_144f19540(*ppuVar7,"identity");
        if (iVar2 == 0) {
          pcVar6 = *ppuVar7;
          pcVar5 = pcVar8;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pcVar8[lVar9] != '\0');
          pcVar8 = pcVar8 + lVar9;
          pcVar8[0] = ',';
          pcVar8[1] = ' ';
          pcVar8 = pcVar8 + 2;
        }
        ppuVar7 = (undefined **)ppuVar11[1];
        ppuVar11 = ppuVar11 + 1;
      } while (ppuVar7 != (undefined **)0x0);
      pcVar8[-2] = '\0';
    }
  }
  return pcVar4;
}



// FUNCTION 144f19ff0 FUN_144f19ff0 body=431 status=ok
// SIG undefined FUN_144f19ff0(void)

ulonglong FUN_144f19ff0(longlong param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 local_res8;
  
  do {
    while( true ) {
      bVar2 = *param_2;
      uVar6 = (ulonglong)(char)bVar2;
      if ((0x2c < bVar2) || ((0x100100000200U >> (uVar6 & 0x3f) & 1) == 0)) break;
      param_2 = param_2 + 1;
    }
    pbVar8 = (byte *)0x0;
    pbVar7 = param_2;
    if (bVar2 != 0) {
      do {
        cVar3 = (char)uVar6;
        if (cVar3 == ',') break;
        if ((cVar3 != ' ') && (4 < (byte)(cVar3 - 9U))) {
          pbVar8 = pbVar7 + (1 - (longlong)param_2);
        }
        pbVar1 = pbVar7 + 1;
        uVar6 = (ulonglong)*pbVar1;
        pbVar7 = pbVar7 + 1;
      } while (*pbVar1 != 0);
    }
    if ((param_3 == 0) || (pbVar8 != &DAT_00000007)) {
      if (pbVar8 != (byte *)0x0) {
        if (param_3 != 0) goto LAB_144f1a0b5;
        goto LAB_144f1a0c3;
      }
    }
    else {
      iVar4 = FUN_144f195b0(param_2,"chunked",7);
      if (iVar4 == 0) {
LAB_144f1a0b5:
        if (*(char *)(param_1 + 0xac9) == '\0') {
          return 0;
        }
LAB_144f1a0c3:
        ppuVar9 = &PTR_s_identity_149c07130;
        ppuVar10 = &PTR_PTR_149c07160;
        do {
          iVar4 = FUN_144f195b0(param_2,*ppuVar9,pbVar8);
          if (((iVar4 != 0) && (pbVar8[(longlong)*ppuVar9] == 0)) ||
             ((ppuVar9[1] != (undefined *)0x0 &&
              ((iVar4 = FUN_144f195b0(param_2,ppuVar9[1],pbVar8), iVar4 != 0 &&
               (pbVar8[(longlong)ppuVar9[1]] == 0)))))) goto LAB_144f1a131;
          ppuVar9 = (undefined **)ppuVar10[1];
          ppuVar10 = ppuVar10 + 1;
        } while (ppuVar9 != (undefined **)0x0);
        ppuVar9 = (undefined **)&DAT_149c07180;
LAB_144f1a131:
        uVar6 = FUN_144f14ec0(&local_res8,param_1,ppuVar9,(param_3 != 0) + '\x01');
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar5 = FUN_144f14f80(param_1,local_res8);
        if (uVar5 != 0) {
          FUN_144f14f50(param_1,local_res8);
          return (ulonglong)uVar5;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1cf) = 1;
        FUN_1452d93b0(param_1);
      }
    }
    param_2 = pbVar7;
    if (*pbVar7 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144f1a1a0 FUN_144f1a1a0 body=24 status=ok
// SIG undefined FUN_144f1a1a0(void)

undefined8 FUN_144f1a1a0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_2 == (longlong *)0x0) {
    return 0x17;
  }
                    /* WARNING: Could not recover jumptable at 0x000144f1a1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0x18))();
  return uVar1;
}



// FUNCTION 144f1a1e0 FUN_144f1a1e0 body=57 status=ok
// SIG undefined FUN_144f1a1e0(void)

undefined8 FUN_144f1a1e0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
    return 0x3d;
  }
  FUN_144f14b70(param_1,
                "Error while processing content unencoding: Unknown failure within decompression software."
               );
  return 0x3d;
}



// FUNCTION 144f1a220 FUN_144f1a220 body=147 status=ok
// SIG undefined FUN_144f1a220(void)

int FUN_144f1a220(undefined8 param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (*param_3 == 4) {
    (*(code *)PTR_free_14c6d9f28)(*param_2);
    *param_2 = 0;
  }
  if (*param_3 != 0) {
    iVar1 = FUN_144b4fb40(param_2);
    if ((iVar1 != 0) && (param_4 == 0)) {
      if (param_2[4] == 0) {
        FUN_144f14b70(param_1,
                      "Error while processing content unencoding: Unknown failure within decompression software."
                     );
      }
      else {
        FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
      }
      param_4 = 0x3d;
    }
    *param_3 = 0;
  }
  return param_4;
}



// FUNCTION 144f1a2c0 FUN_144f1a2c0 body=81 status=ok
// SIG undefined FUN_144f1a2c0(void)

undefined8 FUN_144f1a2c0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  uVar3 = 0;
  uVar2 = *(uint *)(param_2 + 0x28);
  if (uVar1 <= *(uint *)(param_2 + 0x28)) {
    uVar2 = uVar1;
  }
  *(uint *)(param_2 + 0x1c) = uVar1 - uVar2;
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) - uVar2;
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + (ulonglong)uVar2;
  if (*(int *)(param_2 + 0x28) == 0) {
    if (*(int *)(param_2 + 0x1c) != 0) {
      *(undefined4 *)(param_2 + 0x18) = 3;
      return 0;
    }
  }
  else {
    uVar3 = 0x17;
  }
  uVar3 = FUN_144f1a220(param_1,param_2 + 0x20,param_2 + 0x18,uVar3);
  return uVar3;
}



// FUNCTION 144f1a320 FUN_144f1a320 body=784 status=ok
// SIG undefined FUN_144f1a320(void)

int FUN_144f1a320(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar2 = *(int *)(param_2 + 0x28);
  iVar6 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  if ((*(int *)(param_2 + 0x18) - 1U & 0xfffffffa) != 0) {
    if (*(int *)(param_2 + 0x18) == 4) {
      (*(code *)PTR_free_14c6d9f28)(uVar3);
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_144b4fb40(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    return 0x17;
  }
  lVar10 = (*(code *)PTR_malloc_14c6d9f20)(0x4000);
  if (lVar10 == 0) {
    if (*(int *)(param_2 + 0x18) == 4) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x20));
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_144b4fb40(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    return 0x1b;
  }
LAB_144f1a3d0:
  do {
    *(longlong *)(param_2 + 0x30) = lVar10;
    *(undefined4 *)(param_2 + 0x38) = 0x4000;
    uVar5 = FUN_144b4e2a0(param_2 + 0x20,5);
    if ((*(int *)(param_2 + 0x38) != 0x4000) && (uVar5 < 2)) {
      *(undefined4 *)(param_2 + 0x18) = param_3;
      if (*(int *)(param_2 + 0x38) != 0x4000) {
        plVar4 = *(longlong **)(param_2 + 8);
        if (plVar4 == (longlong *)0x0) {
          iVar6 = 0x17;
        }
        else {
          iVar6 = (**(code **)(*plVar4 + 0x18))(param_1,plVar4,lVar10);
          if (iVar6 == 0) goto LAB_144f1a433;
        }
        if (*(int *)(param_2 + 0x18) == 4) {
          (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        if (*(int *)(param_2 + 0x18) != 0) {
          FUN_144b4fb40(param_2 + 0x20);
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        goto LAB_144f1a5f9;
      }
      iVar6 = 0;
    }
LAB_144f1a433:
    if (uVar5 == 0xfffffffb) goto LAB_144f1a5f9;
    if (uVar5 == 0xfffffffd) {
      if (*(int *)(param_2 + 0x18) != 1) goto LAB_144f1a5a0;
      FUN_144b4fb40(param_2 + 0x20);
      iVar9 = FUN_144b4fce0(param_2 + 0x20,0xfffffff1,&DAT_14996cb70);
      if (iVar9 != 0) {
        *(undefined4 *)(param_2 + 0x18) = 0;
        goto LAB_144f1a5a0;
      }
      *(undefined8 *)(param_2 + 0x20) = uVar3;
      *(int *)(param_2 + 0x28) = iVar2;
      *(undefined4 *)(param_2 + 0x18) = 2;
      *(undefined4 *)(param_2 + 0x1c) = 4;
      goto LAB_144f1a3d0;
    }
  } while (uVar5 == 0);
  if (uVar5 == 1) {
    uVar5 = *(uint *)(param_2 + 0x1c);
    iVar9 = 0;
    iVar6 = 0;
    uVar7 = *(uint *)(param_2 + 0x28);
    if (uVar5 <= *(uint *)(param_2 + 0x28)) {
      uVar7 = uVar5;
    }
    *(uint *)(param_2 + 0x1c) = uVar5 - uVar7;
    piVar1 = (int *)(param_2 + 0x28);
    *piVar1 = *piVar1 - uVar7;
    *(ulonglong *)(param_2 + 0x20) = (ulonglong)uVar7 + *(longlong *)(param_2 + 0x20);
    if (*piVar1 == 0) {
      if (*(int *)(param_2 + 0x1c) != 0) {
        *(undefined4 *)(param_2 + 0x18) = 3;
        goto LAB_144f1a5f9;
      }
    }
    else {
      iVar9 = 0x17;
    }
    if (*(int *)(param_2 + 0x18) == 4) {
      (*(code *)PTR_free_14c6d9f28)();
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    iVar6 = iVar9;
    if (*(int *)(param_2 + 0x18) != 0) {
      iVar8 = FUN_144b4fb40(param_2 + 0x20);
      if ((iVar8 != 0) && (iVar9 == 0)) {
        if (*(longlong *)(param_2 + 0x40) != 0) {
          FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
          iVar6 = 0x3d;
          *(undefined4 *)(param_2 + 0x18) = 0;
          goto LAB_144f1a5f9;
        }
        FUN_144f14b70(param_1,
                      "Error while processing content unencoding: Unknown failure within decompression software."
                     );
        iVar6 = 0x3d;
      }
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
  }
  else {
LAB_144f1a5a0:
    if (*(longlong *)(param_2 + 0x40) == 0) {
      FUN_144f14b70(param_1,
                    "Error while processing content unencoding: Unknown failure within decompression software."
                   );
    }
    else {
      FUN_144f14b70(param_1,"Error while processing content unencoding: %s");
    }
    if (*(int *)(param_2 + 0x18) == 4) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_2 + 0x20));
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_144b4fb40(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    iVar6 = 0x3d;
  }
LAB_144f1a5f9:
  (*(code *)PTR_free_14c6d9f28)(lVar10);
  if ((iVar2 != 0) && (*(int *)(param_2 + 0x18) == 1)) {
    *(undefined4 *)(param_2 + 0x18) = param_3;
  }
  return iVar6;
}



// FUNCTION 144f1a640 FUN_144f1a640 body=227 status=ok
// SIG undefined FUN_144f1a640(void)

undefined4 FUN_144f1a640(char *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (9 < param_2) {
    if ((((*param_1 != '\x1f') || (param_1[1] != -0x75)) || (param_1[2] != '\b')) ||
       (bVar1 = param_1[3], (bVar1 & 0xe0) != 0)) {
      return 1;
    }
    lVar3 = param_2 + -10;
    puVar2 = (ushort *)(param_1 + 10);
    if ((bVar1 & 4) != 0) {
      if (lVar3 < 2) {
        return 2;
      }
      uVar4 = (ulonglong)*puVar2;
      if (lVar3 < (longlong)(uVar4 + 2)) {
        return 2;
      }
      lVar3 = lVar3 + (-2 - uVar4);
      puVar2 = (ushort *)(param_1 + uVar4 + 0xc);
    }
    if ((bVar1 & 8) == 0) {
LAB_144f1a6e0:
      if ((bVar1 & 0x10) != 0) {
        if (lVar3 == 0) {
          return 2;
        }
        while (lVar3 = lVar3 + -1, (char)*puVar2 != '\0') {
          puVar2 = (ushort *)((longlong)puVar2 + 1);
          if (lVar3 == 0) {
            return 2;
          }
        }
      }
      if ((bVar1 & 2) != 0) {
        if (lVar3 < 2) {
          return 2;
        }
        lVar3 = lVar3 + -2;
      }
      *param_3 = param_2 - lVar3;
      return 0;
    }
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      if ((char)*puVar2 == '\0') {
        puVar2 = (ushort *)((longlong)puVar2 + 1);
        goto LAB_144f1a6e0;
      }
      puVar2 = (ushort *)((longlong)puVar2 + 1);
    }
  }
  return 2;
}



// FUNCTION 144f1a730 FUN_144f1a730 body=18 status=ok
// SIG undefined FUN_144f1a730(void)

void FUN_144f1a730(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 144f1a750 FUN_144f1a750 body=113 status=ok
// SIG undefined FUN_144f1a750(void)

void FUN_144f1a750(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_4 = param_3;
  if (param_1[3] == 0) {
    *param_1 = (longlong)param_4;
    param_4[1] = 0;
    *(undefined8 *)(*param_1 + 0x10) = 0;
    param_1[3] = param_1[3] + 1;
    param_1[1] = (longlong)param_4;
    return;
  }
  if (param_2 != 0) {
    param_4[2] = *(undefined8 *)(param_2 + 0x10);
    param_4[1] = param_2;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 8) = param_4;
      *(undefined8 **)(param_2 + 0x10) = param_4;
      param_1[3] = param_1[3] + 1;
      return;
    }
    param_1[1] = (longlong)param_4;
    *(undefined8 **)(param_2 + 0x10) = param_4;
    param_1[3] = param_1[3] + 1;
    return;
  }
  param_4[2] = *param_1;
  param_4[1] = 0;
  *(undefined8 **)(*param_1 + 8) = param_4;
  param_1[3] = param_1[3] + 1;
  *param_1 = (longlong)param_4;
  return;
}



// FUNCTION 144f1a7d0 FUN_144f1a7d0 body=166 status=ok
// SIG undefined FUN_144f1a7d0(void)

void FUN_144f1a7d0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    plVar1 = param_2 + 2;
    if (param_2 == (undefined8 *)*param_1) {
      lVar2 = *plVar1;
      *param_1 = lVar2;
      if (lVar2 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(*plVar1 + 8) = 0;
      }
    }
    else {
      if (param_2[1] != 0) {
        *(longlong *)(param_2[1] + 0x10) = *plVar1;
      }
      if (*plVar1 == 0) {
        param_1[1] = param_2[1];
      }
      else {
        *(undefined8 *)(*plVar1 + 8) = param_2[1];
      }
    }
    uVar3 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    *plVar1 = 0;
    param_1[3] = param_1[3] + -1;
    if ((code *)param_1[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f1a86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[2])(param_3,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 144f1a880 FUN_144f1a880 body=5 status=ok
// SIG undefined FUN_144f1a880(void)

undefined8 FUN_144f1a880(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144f1a890 FUN_144f1a890 body=208 status=ok
// SIG undefined FUN_144f1a890(void)

void FUN_144f1a890(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = param_1[3];
    while (lVar2 != 0) {
      puVar3 = (undefined8 *)param_1[1];
      if ((puVar3 != (undefined8 *)0x0) && (lVar2 != 0)) {
        plVar1 = puVar3 + 2;
        if (puVar3 == (undefined8 *)*param_1) {
          lVar2 = *plVar1;
          *param_1 = lVar2;
          if (lVar2 == 0) {
            param_1[1] = 0;
          }
          else {
            *(undefined8 *)(*plVar1 + 8) = 0;
          }
        }
        else {
          if (puVar3[1] != 0) {
            *(longlong *)(puVar3[1] + 0x10) = *plVar1;
          }
          if (*plVar1 == 0) {
            param_1[1] = puVar3[1];
          }
          else {
            *(undefined8 *)(*plVar1 + 8) = puVar3[1];
          }
        }
        uVar4 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        *plVar1 = 0;
        param_1[3] = param_1[3] + -1;
        if ((code *)param_1[2] != (code *)0x0) {
          (*(code *)param_1[2])(param_2,uVar4);
        }
      }
      lVar2 = param_1[3];
    }
  }
  return;
}



// FUNCTION 144f1a960 FUN_144f1a960 body=31 status=ok
// SIG undefined FUN_144f1a960(void)

void FUN_144f1a960(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *param_1 = 0;
  param_1[3] = param_5;
  param_1[5] = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 144f1a980 FUN_144f1a980 body=293 status=ok
// SIG undefined FUN_144f1a980(void)

undefined8 FUN_144f1a980(longlong *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (*param_1 == 0) {
    lVar2 = (*(code *)PTR_malloc_14c6d9f20)((longlong)(int)param_1[4] << 5);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    iVar3 = 0;
    if (0 < (int)param_1[4]) {
      do {
        FUN_144f1a730((longlong)iVar3 * 0x20 + *param_1,FUN_144f1aeb0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
  }
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(longlong)(int)param_1[4]);
  puVar4 = (undefined8 *)(*param_1 + lVar2 * 0x20);
  plVar1 = (longlong *)*puVar4;
  do {
    if (plVar1 == (longlong *)0x0) {
LAB_144f1aa46:
      lVar2 = (*(code *)PTR_malloc_14c6d9f20)(param_3 + 0x30);
      if (lVar2 == 0) {
        return 0;
      }
      memcpy((void *)(lVar2 + 0x28),param_2,param_3);
      *(size_t *)(lVar2 + 0x20) = param_3;
      *(undefined8 *)(lVar2 + 0x18) = param_4;
      FUN_144f1a750(puVar4,puVar4[1],lVar2,lVar2);
      param_1[5] = param_1[5] + 1;
      return param_4;
    }
    lVar2 = (*(code *)param_1[2])(*plVar1 + 0x28,*(undefined8 *)(*plVar1 + 0x20),param_2,param_3);
    if (lVar2 != 0) {
      FUN_144f1a7d0(puVar4,plVar1,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_144f1aa46;
    }
    plVar1 = (longlong *)plVar1[2];
  } while( true );
}



// FUNCTION 144f1aab0 FUN_144f1aab0 body=168 status=ok
// SIG undefined FUN_144f1aab0(void)

undefined8 FUN_144f1aab0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 0) {
    lVar2 = (*(code *)param_1[1])(param_2,param_3,(longlong)(int)param_1[4]);
    puVar3 = (undefined8 *)(*param_1 + lVar2 * 0x20);
    for (plVar1 = (longlong *)*puVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      lVar2 = (*(code *)param_1[2])(*plVar1 + 0x28,*(undefined8 *)(*plVar1 + 0x20),param_2,param_3);
      if (lVar2 != 0) {
        FUN_144f1a7d0(puVar3,plVar1,param_1);
        param_1[5] = param_1[5] + -1;
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 144f1ab60 FUN_144f1ab60 body=149 status=ok
// SIG undefined FUN_144f1ab60(void)

undefined8 FUN_144f1ab60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar2 = (*(code *)param_1[1])(param_2,param_3,(longlong)(int)param_1[4]);
    for (plVar1 = *(longlong **)(lVar2 * 0x20 + *param_1); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[2]) {
      lVar2 = *plVar1;
      lVar3 = (*(code *)param_1[2])(lVar2 + 0x28,*(undefined8 *)(lVar2 + 0x20),param_2,param_3);
      if (lVar3 != 0) {
        return *(undefined8 *)(lVar2 + 0x18);
      }
    }
  }
  return 0;
}



// FUNCTION 144f1ac00 FUN_144f1ac00 body=110 status=ok
// SIG undefined FUN_144f1ac00(void)

void FUN_144f1ac00(longlong *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    if (0 < (int)param_1[4]) {
      do {
        FUN_144f1a890((longlong)iVar1 * 0x20 + *param_1,param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[4]);
    }
    (*(code *)PTR_free_14c6d9f28)(*param_1);
    *param_1 = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 144f1ac70 FUN_144f1ac70 body=128 status=ok
// SIG undefined FUN_144f1ac70(void)

void FUN_144f1ac70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (iVar4 = 0, 0 < (int)param_1[4])) {
    lVar5 = 0;
    do {
      lVar1 = *param_1;
      lVar3 = *(longlong *)(lVar1 + lVar5);
      while (lVar3 != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x10);
        FUN_144f1a7d0((longlong *)(lVar1 + lVar5),lVar3,param_1);
        param_1[5] = param_1[5] + -1;
        lVar3 = lVar2;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (iVar4 < (int)param_1[4]);
  }
  return;
}



// FUNCTION 144f1acf0 FUN_144f1acf0 body=194 status=ok
// SIG undefined FUN_144f1acf0(void)

void FUN_144f1acf0(longlong *param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (iVar6 = 0, 0 < (int)param_1[4])) {
    lVar5 = 0;
    do {
      lVar1 = *param_1;
      plVar2 = *(longlong **)(lVar1 + lVar5);
      while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar3[2];
        if ((param_3 == (code *)0x0) ||
           (iVar4 = (*param_3)(param_2,*(undefined8 *)(*plVar3 + 0x18)), iVar4 != 0)) {
          FUN_144f1a7d0((undefined8 *)(lVar1 + lVar5),plVar3,param_1);
          param_1[5] = param_1[5] + -1;
        }
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (iVar6 < (int)param_1[4]);
  }
  return;
}



// FUNCTION 144f1adf0 FUN_144f1adf0 body=45 status=ok
// SIG undefined FUN_144f1adf0(void)

bool FUN_144f1adf0(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = memcmp(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 144f1ae20 FUN_144f1ae20 body=13 status=ok
// SIG undefined FUN_144f1ae20(void)

void FUN_144f1ae20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 144f1ae30 FUN_144f1ae30 body=127 status=ok
// SIG undefined FUN_144f1ae30(void)

undefined8 FUN_144f1ae30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  plVar1 = (longlong *)*param_1;
  if (*plVar1 != 0) {
    if ((param_1[2] == 0) ||
       (lVar2 = *(longlong *)(param_1[2] + 0x10), param_1[2] = lVar2, lVar2 == 0)) {
      uVar4 = (ulonglong)(int)param_1[1];
      if ((int)param_1[1] < (int)plVar1[4]) {
        plVar3 = (longlong *)(uVar4 * 0x20 + *plVar1);
        uVar5 = uVar4;
        do {
          uVar6 = (int)uVar5 + 1;
          if (*plVar3 != 0) {
            param_1[2] = *(longlong *)((longlong)(int)uVar5 * 0x20 + *plVar1);
            *(uint *)(param_1 + 1) = uVar6;
            break;
          }
          uVar4 = uVar4 + 1;
          plVar3 = plVar3 + 4;
          uVar5 = (ulonglong)uVar6;
        } while ((longlong)uVar4 < (longlong)(int)plVar1[4]);
      }
    }
    if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
      return *(undefined8 *)param_1[2];
    }
  }
  return 0;
}



// FUNCTION 144f1aeb0 FUN_144f1aeb0 body=55 status=ok
// SIG undefined FUN_144f1aeb0(void)

void FUN_144f1aeb0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))();
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144f1aee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_14c6d9f28)(param_2);
  return;
}



// FUNCTION 144f1aef0 FUN_144f1aef0 body=99 status=ok
// SIG undefined FUN_144f1aef0(void)

void FUN_144f1aef0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = inet_pton(2,param_1,local_28);
  if (iVar1 < 1) {
    inet_pton(0x17,param_1,local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144f1af60 FUN_144f1af60 body=1302 status=ok
// SIG undefined FUN_144f1af60(void)

void FUN_144f1af60(longlong param_1,char *param_2,uint param_3,char param_4,longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  uint local_b8;
  char local_a8;
  longlong local_a0;
  int local_98;
  undefined1 local_94 [4];
  undefined4 local_90 [2];
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_60 [16];
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_88 = param_5;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar7 = uVar5;
    uVar5 = uVar7 + 1;
  } while (param_2[uVar5] != '\0');
  local_a8 = param_4;
  if (6 < uVar5) {
    iVar4 = FUN_144f19540(param_2 + (uVar7 - 5),".onion");
    if ((iVar4 != 0) || (iVar4 = FUN_144f19540(param_2 + (uVar7 - 6),".onion."), iVar4 != 0)) {
      FUN_144f14b70(param_1,"Not resolving .onion address (RFC 7686)");
      goto LAB_144f1b462;
    }
  }
  *local_88 = 0;
  *(undefined1 *)(lVar1 + 0x2e2) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbeca0(param_1,3,2);
  }
  local_a0 = FUN_144f1c150(param_1,param_2,param_3);
  if (local_a0 != 0) {
    FUN_144f14ad0(param_1,"Hostname %s was found in DNS cache",param_2);
    *(int *)(local_a0 + 0x10) = *(int *)(local_a0 + 0x10) + 1;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,3);
  }
  if (local_a0 == 0) {
    local_98 = 0;
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      FUN_144bbace0(param_1,1);
      iVar4 = (**(code **)(param_1 + 0xa60))
                        (*(undefined8 *)(param_1 + 0xe58),0,*(undefined8 *)(param_1 + 0xa68));
      FUN_144bbace0(param_1,0);
      if (iVar4 != 0) goto LAB_144f1b462;
    }
    iVar4 = inet_pton(2,param_2,local_94);
    if (((iVar4 < 1) ||
        (puVar6 = (undefined4 *)FUN_1452b2b50(2,local_94,param_2,param_3),
        puVar6 == (undefined4 *)0x0)) &&
       ((iVar4 = inet_pton(0x17,param_2,local_60), iVar4 < 1 ||
        (puVar6 = (undefined4 *)FUN_1452b2b50(0x17,local_60,param_2,param_3),
        puVar6 == (undefined4 *)0x0)))) {
      if (*(char *)(lVar1 + 0x4d8) == '\x02') {
        if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) == '\0') {
          cVar2 = FUN_144f1b4c0(0);
          *(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) = (cVar2 != '\0') + '\x01';
        }
        if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) != '\x02') goto LAB_144f1b462;
      }
      iVar4 = FUN_144f19540(param_2,"localhost");
      if (iVar4 == 0) {
        uVar5 = 0xffffffffffffffff;
        do {
          uVar7 = uVar5;
          uVar5 = uVar7 + 1;
        } while (param_2[uVar5] != '\0');
        if ((9 < uVar5) &&
           (iVar4 = FUN_144f195b0(".localhost",param_2 + (uVar7 - 9),10), iVar4 != 0))
        goto LAB_144f1b244;
        if ((local_a8 == '\0') || (*(char *)(param_1 + 0xae4) == '\0')) {
          cVar2 = FUN_1452d9760(param_1,lVar1);
          if (cVar2 == '\0') goto LAB_144f1b462;
          puVar6 = (undefined4 *)thunk_FUN_144f076d0(param_1,param_2,param_3,&local_98);
        }
        else {
          puVar6 = (undefined4 *)FUN_1452d9770(param_1,param_2,param_3,&local_98);
        }
        if (puVar6 != (undefined4 *)0x0) goto LAB_144f1b3da;
      }
      else {
LAB_144f1b244:
        lVar1 = -1;
        do {
          lVar11 = lVar1;
          lVar1 = lVar11 + 1;
        } while (param_2[lVar11 + 1] != '\0');
        uStack_48 = 0;
        local_50 = 2;
        uStack_4e = Ordinal_9(param_3 & 0xffff);
        iVar4 = inet_pton(2,"127.0.0.1",local_90);
        if (0 < iVar4) {
          uStack_4c = local_90[0];
          puVar6 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(lVar11 + 0x42,1);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
            *(undefined4 **)(puVar6 + 8) = puVar6 + 0xc;
            puVar6[1] = 2;
            puVar6[2] = 1;
            puVar6[3] = 6;
            puVar6[4] = 0x10;
            puVar6[0xc] = CONCAT22(uStack_4e,local_50);
            puVar6[0xd] = uStack_4c;
            puVar6[0xe] = (undefined4)uStack_48;
            puVar6[0xf] = uStack_48._4_4_;
            pcVar9 = (char *)(puVar6 + 0x10);
            *(char **)(puVar6 + 6) = pcVar9;
            pcVar10 = param_2;
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar9 = cVar2;
              pcVar9 = pcVar9 + 1;
              lVar1 = -1;
            } while (cVar2 != '\0');
            do {
              lVar11 = lVar1;
              lVar1 = lVar11 + 1;
            } while (param_2[lVar11 + 1] != '\0');
            puVar8 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(lVar11 + 0x4e,1);
            if (puVar8 != (undefined4 *)0x0) {
              local_80 = CONCAT22(local_80._2_2_,0x17);
              uVar3 = Ordinal_9(param_3 & 0xffff);
              local_80 = CONCAT22(uVar3,(undefined2)local_80);
              uStack_7c = 0;
              iVar4 = inet_pton(0x17,&DAT_149c07360,&local_50);
              if (0 < iVar4) {
                uStack_78 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,local_50));
                *puVar8 = 0;
                puVar8[1] = 0x17;
                puVar8[2] = 1;
                puVar8[3] = 6;
                pcVar10 = (char *)(puVar8 + 0x13);
                puVar8[4] = 0x1c;
                *(undefined8 *)(puVar8 + 10) = 0;
                *(undefined4 **)(puVar8 + 8) = puVar8 + 0xc;
                uStack_70 = uStack_48;
                puVar8[0xc] = local_80;
                puVar8[0xd] = uStack_7c;
                puVar8[0xe] = CONCAT22(uStack_4e,local_50);
                puVar8[0xf] = uStack_4c;
                *(undefined8 *)(puVar8 + 0x10) = uStack_48;
                puVar8[0x12] = 0;
                *(char **)(puVar8 + 6) = pcVar10;
                pcVar9 = param_2;
                do {
                  cVar2 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  *pcVar10 = cVar2;
                  pcVar10 = pcVar10 + 1;
                } while (cVar2 != '\0');
                *(undefined4 **)(puVar8 + 10) = puVar6;
                puVar6 = puVar8;
              }
            }
            goto LAB_144f1b3da;
          }
        }
      }
      if (local_98 != 0) {
        if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x2e2) == '\0') {
          iVar4 = FUN_144f074b0(param_1,&local_a0);
        }
        else {
          iVar4 = FUN_1452d98f0();
        }
        if (iVar4 != 0) goto LAB_144f1b462;
      }
    }
    else {
LAB_144f1b3da:
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbeca0(param_1,3,2);
      }
      local_b8 = param_3;
      local_a0 = FUN_144f1b810(param_1,puVar6,param_2,0);
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbece0(param_1,3);
      }
      if (local_a0 == 0) {
        FUN_1452b2970(puVar6);
      }
    }
  }
  *local_88 = local_a0;
LAB_144f1b462:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144f1b490 FUN_144f1b490 body=34 status=ok
// SIG undefined FUN_144f1b490(void)

undefined8 FUN_144f1b490(void)

{
  undefined8 uVar1;
  undefined8 *in_R9;
  longlong in_stack_00000028;
  
  *in_R9 = 0;
  if (in_stack_00000028 < 0) {
    return 0xfffffffe;
  }
  uVar1 = FUN_144f1af60();
  return uVar1;
}



// FUNCTION 144f1b4c0 FUN_144f1b4c0 body=127 status=ok
// SIG undefined FUN_144f1b4c0(void)

bool FUN_144f1b4c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) == '\0') {
      cVar1 = FUN_144f1b4c0(0);
      *(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) = (cVar1 != '\0') + '\x01';
    }
    return *(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b0) == '\x02';
  }
  lVar2 = Ordinal_23(0x17);
  if (lVar2 == -1) {
    return false;
  }
  Ordinal_3(lVar2);
  return true;
}



// FUNCTION 144f1b540 FUN_144f1b540 body=107 status=ok
// SIG undefined FUN_144f1b540(void)

void FUN_144f1b540(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    FUN_144bbeca0(param_1,3,2);
  }
  piVar1 = (int *)(param_2 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_1452b2970(*param_2);
    (*(code *)PTR_free_14c6d9f28)(param_2);
  }
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    FUN_144bbece0(param_1,3);
  }
  return;
}



// FUNCTION 144f1b5b0 FUN_144f1b5b0 body=40 status=ok
// SIG undefined FUN_144f1b5b0(void)

void FUN_144f1b5b0(undefined8 param_1,undefined8 param_2)

{
  FUN_144f1a960(param_1,param_2,&LAB_144f1adc0,FUN_144f1adf0,FUN_144f1c0f0);
  return;
}



// FUNCTION 144f1b5e0 FUN_144f1b5e0 body=223 status=ok
// SIG undefined FUN_144f1b5e0(void)

void FUN_144f1b5e0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  __time64_t local_38;
  __time64_t local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x6c8);
  if (*(longlong *)(param_1 + 200) != 0) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbeca0(param_1,3,2);
    }
    _time64(&local_38);
    do {
      local_30 = local_38;
      local_28 = 0;
      local_20 = iVar1;
      FUN_144f1acf0(*(undefined8 *)(param_1 + 200),&local_30,&LAB_144f1c120);
      if (local_28 < 0x7fffffff) {
        iVar1 = (int)local_28;
        if ((int)local_28 == 0) break;
      }
      else {
        iVar1 = 0x7ffffffe;
      }
    } while (29999 < *(ulonglong *)(*(longlong *)(param_1 + 200) + 0x28));
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbece0(param_1,3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144f1b6d0 FUN_144f1b6d0 body=114 status=ok
// SIG undefined FUN_144f1b6d0(void)

ulonglong FUN_144f1b6d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0xe48) != 0) {
    *(longlong *)(lVar1 + 0x50) = *(longlong *)(param_1 + 0xe48);
    *(undefined8 *)(param_1 + 0xe48) = 0;
  }
  uVar2 = FUN_144f0ee30();
  if ((int)uVar2 != 0) {
    FUN_144bbac60(param_1);
    FUN_144f0b160(param_1,lVar1,1);
    FUN_144f0ed40(param_1,lVar1,1);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144f1b750 FUN_144f1b750 body=59 status=ok
// SIG undefined FUN_144f1b750(void)

void FUN_144f1b750(longlong param_1,undefined1 *param_2,int param_3)

{
  *param_2 = 0;
  if (*(int *)(param_1 + 4) == 2) {
    inet_ntop(2,*(longlong *)(param_1 + 0x20) + 4,param_2,(longlong)param_3);
    return;
  }
  if (*(int *)(param_1 + 4) == 0x17) {
    inet_ntop(0x17,*(longlong *)(param_1 + 0x20) + 8,param_2,(longlong)param_3);
    return;
  }
  return;
}



// FUNCTION 144f1b790 FUN_144f1b790 body=115 status=ok
// SIG undefined FUN_144f1b790(void)

longlong FUN_144f1b790(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbeca0(param_1,3,2);
  }
  lVar1 = FUN_144f1c150(param_1,param_2,param_3);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,3);
  }
  return lVar1;
}



// FUNCTION 144f1b810 FUN_144f1b810 body=663 status=ok
// SIG undefined FUN_144f1b810(void)

void FUN_144f1b810(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  int iVar13;
  uint *puVar14;
  undefined1 auStack_188 [32];
  int local_168;
  longlong local_160;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar9 = 0;
  local_160 = param_1;
  if (*(char *)(param_1 + 0xae0) != '\0') {
    local_168 = 0;
    for (lVar10 = param_2; iVar13 = (int)uVar9, lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x28))
    {
      uVar9 = (ulonglong)(iVar13 + 1);
    }
    if (1 < iVar13) {
      FUN_144f14ad0(param_1,"Shuffling %i addresses",uVar9);
      lVar10 = (longlong)iVar13;
      plVar5 = (longlong *)(*(code *)PTR_malloc_14c6d9f20)(lVar10 * 8);
      if (plVar5 == (longlong *)0x0) goto LAB_144f1ba97;
      *plVar5 = param_2;
      if (1 < lVar10) {
        lVar6 = 1;
        do {
          plVar5[lVar6] = *(longlong *)(plVar5[lVar6 + -1] + 0x28);
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar10);
      }
      lVar6 = (*(code *)PTR_malloc_14c6d9f20)(lVar10 * 4);
      param_1 = local_160;
      if (lVar6 == 0) {
        local_168 = 0x1b;
      }
      else {
        iVar4 = FUN_1452b3040(local_160,lVar6,lVar10 * 4);
        if (iVar4 == 0) {
          iVar13 = iVar13 + -1;
          puVar14 = (uint *)(lVar6 + (longlong)iVar13 * 4);
          plVar12 = plVar5 + iVar13;
          do {
            uVar1 = *puVar14;
            puVar14 = puVar14 + -1;
            uVar8 = (ulonglong)uVar1 % uVar9;
            iVar13 = iVar13 + -1;
            uVar9 = (ulonglong)((int)uVar9 - 1);
            lVar7 = plVar5[uVar8];
            plVar5[uVar8] = *plVar12;
            *plVar12 = lVar7;
            plVar12 = plVar12 + -1;
          } while (0 < iVar13);
          if (1 < lVar10) {
            lVar7 = 1;
            do {
              lVar2 = lVar7 + -1;
              plVar12 = plVar5 + lVar7;
              lVar7 = lVar7 + 1;
              *(longlong *)(plVar5[lVar2] + 0x28) = *plVar12;
            } while (lVar7 < lVar10);
          }
          *(undefined8 *)(plVar5[lVar10 + -1] + 0x28) = 0;
          param_2 = *plVar5;
        }
        (*(code *)PTR_free_14c6d9f28)(lVar6);
      }
      (*(code *)PTR_free_14c6d9f28)(plVar5);
      if (local_168 != 0) goto LAB_144f1ba97;
    }
  }
  uVar9 = 0;
  plVar5 = (longlong *)(*(code *)PTR_calloc_14c6d9f40)(1);
  if (plVar5 == (longlong *)0x0) goto LAB_144f1ba97;
  puVar11 = local_158;
  if (param_4 == 0) {
    param_4 = 0xffffffffffffffff;
    do {
      param_4 = param_4 + 1;
    } while (*(char *)(param_3 + param_4) != '\0');
  }
  if (param_4 < 0x100) {
    if (param_4 != 0) goto LAB_144f1ba05;
  }
  else {
    param_4 = 0xff;
LAB_144f1ba05:
    uVar8 = param_4;
    do {
      uVar3 = FUN_144f19640(puVar11[param_3 - (longlong)local_158]);
      *puVar11 = uVar3;
      puVar11 = puVar11 + 1;
      uVar8 = uVar8 - 1;
      uVar9 = param_4;
    } while (uVar8 != 0);
  }
  iVar13 = FUN_144f2b7e0(puVar11,7,&DAT_149c072d8,param_5);
  *(undefined4 *)(plVar5 + 2) = 1;
  *plVar5 = param_2;
  _time64(plVar5 + 1);
  if (plVar5[1] == 0) {
    plVar5[1] = 1;
  }
  lVar10 = FUN_144f1a980(*(undefined8 *)(param_1 + 200),local_158,(longlong)iVar13 + 1 + uVar9,
                         plVar5);
  if (lVar10 == 0) {
    (*(code *)PTR_free_14c6d9f28)(plVar5);
  }
  else {
    *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + 1;
  }
LAB_144f1ba97:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_188);
}


