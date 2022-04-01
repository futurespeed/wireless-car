#include <stdint.h>
#include <stdio.h>
#include "../src/camera_index.h"

int main(int argc, char const *argv[])
{
    FILE *f = fopen("./cam-index.html.zip", "wb");
    fwrite(index_ov2640_html_gz,index_ov2640_html_gz_len,1, f);
    fclose(f);
    return 0;
}