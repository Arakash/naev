/*
 * See Licensing and Copyright notice in naev.h
 */


#ifndef START_H
#  define START_H


/*
 * Initialization/clean up.
 */
int start_load (void);
void start_cleanup (void);

/*
 * Getting data.
 */
const char* start_name (void);
const char* start_ship (void);
unsigned int start_credits (void);
int start_date (void);
const char* start_system (void);
void start_position( double *x, double *y );
const char* start_mission (void);


#endif /* START_H */

