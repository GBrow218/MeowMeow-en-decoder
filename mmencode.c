/* mmencode.c - MeowMeow, a stream encoder/decoder */

while (!feof(src)) {
    if (!fgets(buf, sizeof(buf), src))
        break;
    
    for (i = 0; i < strlen(buf); i++) {
        lo = (buf[i] & 0x000f);
        hi = (buf[i] & 0x00f0) >> 4;
        fputs(tbl[hi], dst);
        fputs(tbl[lo], dst);
    }
}