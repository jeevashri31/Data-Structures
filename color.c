void sortColors(int* nums, int numsSize){
    int idx, count0s = 0, count1s = 0, count2s = 0;
    for (idx = 0; idx < numsSize ; idx++) {
        switch (nums[idx]) {
        case 0:
            count0s++;
            break;
        case 1:
            count1s++;
            break;
        case 2:
            count2s++;
            break;
        }
    }
    idx = 0;
    while (count0s > 0) {
        nums[idx++] = 0;
        count0s--;
    }
    while (count1s > 0) {
        nums[idx++] = 1;
        count1s--;
    }
    while (count2s > 0) {
        nums[idx++] = 2;
        count2s--;
    }
}