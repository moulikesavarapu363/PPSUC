#include <stdio.h>

int main() {
    int a[10], key, i, l, h, mid, n, f = 0;

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Read the key to search
    scanf("%d", &key);

    l = 0;
    h = n - 1;

    while (l <= h) {
        mid = (l + h) / 2;

        if (key == a[mid]) {
            f = 1;
            printf("%d found at %d position\n", key, mid);
            break;
        } else if (key < a[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (!f)
        printf("%d not found\n", key);

    return 0;
}
