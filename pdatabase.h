#ifndef _PSYNC_DATABASE_H
#define _PSYNC_DATABASE_H

#define PSYNC_DATABASE_STRUCTURE \
"BEGIN;\
CREATE TABLE IF NOT EXISTS settings (id VARCHAR(16) PRIMARY KEY, value TEXT);\
COMMIT;\
"


#endif
