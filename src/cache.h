/*
 * cache.h - A generic cache module
 *
 * Copyright (c) 2014   A. Dilly
 *
 * AirCat is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 *
 * AirCat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AirCat.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CACHE_H
#define _CACHE_H

struct cache_handle;

int cache_open(struct cache_handle **handle, unsigned long size, int use_thread,
	       void *input_callback, void *user_data);
int cache_read(struct cache_handle *h, unsigned char *buffer, size_t size);
int cache_close(struct cache_handle *h);

#endif
