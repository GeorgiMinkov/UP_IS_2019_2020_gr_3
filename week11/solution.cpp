

int main() {
    int min = -1, max = -1;
    int arr[] = {1, 2, 3 , 4};
    findMaxMin(arr, 4, &min, &max);
}


bool isSen(char*  str)
{
    bool hasUpperCase = true;
    bool hasEnd = false;

    if(!(str[0] >= 'A' && str[0] <= 'Z')) 
    {
        return false;
    } 

    // if(!)
    // for( int i = 0; str[i] != '\0'; i++) {

    // }

}


void findMaxMin(int* arr, int size, int* min, int* max) {
    if (arr == nullptr || size == 0) {
        return;
    }
    
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < *min) {
            *min = arr[i];
        }

        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
