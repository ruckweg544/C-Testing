#include <stdio.h>
const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, /* represents 0 */
    {0, 1, 1, 0, 0, 0, 0}, /* represents 1 */
    {1, 1, 0, 1, 1, 0, 1}, /* represents 2 */
    {1, 1, 1, 1, 0, 0, 1}, /* represents 3 */
    {0, 1, 1, 0, 0, 1, 1}, /* represents 4 */
    {1, 0, 1, 1, 0, 1, 1}, /* represents 5 */
    {1, 0, 1, 1, 1, 1, 1}, /* represents 6 */
    {1, 1, 1, 0, 0, 0, 0}, /* represents 7 */
    {1, 1, 1, 1, 1, 1, 1}, /* represents 8 */
    {1, 1, 1, 1, 0, 1, 1}  /* represents 9 */
};