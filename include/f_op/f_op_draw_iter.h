#ifndef F_F_OP_DRAW_ITER_H_
#define F_F_OP_DRAW_ITER_H_

typedef struct create_tag_class create_tag_class;

create_tag_class* fopDwIt_GetTag();
create_tag_class* fopDwIt_Begin();
create_tag_class* fopDwIt_Next(create_tag_class* i_createTag);

#endif
