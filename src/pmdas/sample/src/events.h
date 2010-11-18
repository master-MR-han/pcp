/*
 * The "event" records here are all fake.  But the logic does show
 * how a real PMDA could deliver values for metrics of type
 * PM_TYPE_EVENT.
 *
 * Copyright (c) 2010 Ken McDonell.  All Rights Reserved.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef _EVENTS_H
#define _EVENTS_H

extern int mydomain;

extern int sample_fetch_events(pmEventArray **);
extern void event_set_c(unsigned int);
extern unsigned int event_get_c(void);

#endif /* _EVENTS_H */
