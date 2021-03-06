/*
 * Copyright (C) 2008  Ignacio Casal Quinteiro <nacho.resa@gmail.com>
 * 
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 * 
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __DB_ORIG_H__
#define __DB_ORIG_H__

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include "db-base.h"

G_BEGIN_DECLS

/*
 * Type checking and casting macros
 */
#define GTR_TYPE_DB_ORIG		(gtranslator_db_orig_get_type ())
#define GTR_DB_ORIG(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), GTR_TYPE_DB_ORIG, GtranslatorDbOrig))
#define GTR_DB_ORIG_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), GTR_TYPE_DB_ORIG, GtranslatorDbOrigClass))
#define GTR_IS_DB_ORIG(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTR_TYPE_DB_ORIG))
#define GTR_IS_DB_ORIG_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), GTR_TYPE_DB_ORIG))
#define GTR_DB_ORIG_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTR_TYPE_DB_ORIG, GtranslatorDbOrigClass))

/* Private structure type */
typedef struct _GtranslatorDbOrigPrivate	GtranslatorDbOrigPrivate;

/*
 * Main object structure
 */
typedef struct _GtranslatorDbOrig		GtranslatorDbOrig;

struct _GtranslatorDbOrig
{
	GtranslatorDbBase parent_instance;
	
	/*< private > */
	GtranslatorDbOrigPrivate *priv;
};

/*
 * Class definition
 */
typedef struct _GtranslatorDbOrigClass	GtranslatorDbOrigClass;

struct _GtranslatorDbOrigClass
{
	GtranslatorDbBaseClass parent_class;
};

/*
 * Public methods
 */
GType		 gtranslator_db_orig_get_type	      (void) G_GNUC_CONST;

GType		 gtranslator_db_orig_register_type    (GTypeModule * module);

GtranslatorDbOrig *gtranslator_db_orig_new	      (void);

gboolean         gtranslator_db_orig_write            (GtranslatorDbOrig *orig,
						       const gchar *string,
						       db_recno_t value);
						       
db_recno_t       gtranslator_db_orig_read             (GtranslatorDbOrig *orig,
						       const gchar *string);

G_END_DECLS

#endif /* __DB_ORIG_H__ */
