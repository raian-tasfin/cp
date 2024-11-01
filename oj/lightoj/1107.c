/* This is an over complicated silly implementation of a solution that
 * makes Java programmers feel at home. The Python3 solution for this
 * problem took 5 min and 22 lines to solve.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <iso646.h>

/* generic betweenness check.
 * prereqs: less than operator must be defined for objects
 */
#define between_strict(left, middle, right)         \
        ((left) < (middle) and (middle) < (right))

/* concatenate two strings with a space in between
 */
#define concat_spaced(lhs, rhs)                 \
        lhs " " rhs

/* treat next input as int32_t
 * input it and return it
 */
int32_t next_i32(void){
        int32_t res;
        scanf("%d", &res);
        return res;
}

/* This coordinate type is used for pos struct.
 * The coordinate_fmt is used to take coordinate input.
 * You can edit these to change types. Remember that everything that
 * uses coordinate_t internally are dependent on this.
 */
typedef int32_t coordinate_t;
#define coordinate_fmt                          \
        "%d"

/* The struct for pos  */
typedef struct pos_t {
        coordinate_t x;
        coordinate_t y;
} pos_t;

/* useful for functions that require addresses of x and y coordinates.
 */
#define exp_addr_pos(pos)                       \
        &(pos).x, &(pos).y

/* input format for pos.
 */
#define pos_fmt                                         \
        concat_spaced(coordinate_fmt, coordinate_fmt)

/* treat next input as next_pos
 * input it and return it
 */
pos_t next_pos(void){
        pos_t pos;
        scanf(pos_fmt, exp_addr_pos(pos));
        return pos;
}

/* struct for the land defined by the problem
 */
typedef struct land_t {
        pos_t lowerLeft;
        pos_t upperRight;
} land_t;

/* format for output land. As land uses pos which in turn uses
 * coordinate_t internally.
 */
#define land_fmt                                \
        concat_spaced(pos_fmt, pos_fmt)

/* expand a land to addresses of its coordinates
 */
#define exp_addr_land(land)                                         \
        exp_addr_pos(land.lowerLeft), exp_addr_pos(land.upperRight)

/* treat next input as next_land
 * input it and return it
 */
land_t next_land(void){
        land_t res;
        scanf(land_fmt, exp_addr_land(res));
        return res;
}

/* Check if a cow is in the land provided. This uses strict
 * between. That is cows can't be on the borders.
 */
bool cow_inland(land_t land, pos_t pos){
        bool in_x = between_strict(land.lowerLeft.x,
                                   pos.x,
                                   land.upperRight.x);
        bool in_y = between_strict(land.lowerLeft.y,
                                   pos.y,
                                   land.upperRight.y);
        return in_x and in_y;
}

/* Solve a particular case. Handle the outputs of the case as well */
void solve_case(int32_t caseno){
        printf("Case %d:\n", caseno);
        land_t land = next_land();
        int32_t cow_count = next_i32();
        while(cow_count--){
                pos_t pos = next_pos();
                bool cow_in = cow_inland(land, pos);
                printf("%s\n", cow_in ? "Yes" : "No");
        }
}

int32_t main(void){
        int32_t cases = next_i32();
        for(int32_t caseno = 1; caseno <= cases; caseno++){
                solve_case(caseno);
        }

        return 0;
}
