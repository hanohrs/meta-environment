#ifndef __TEXT_CONNECTOR_H
#define __TEXT_CONNECTOR_H

#include <TextEditor.h>

void setFileName(const char *);
const char *getFileName();

void protocolExpect(int fd, const char *expected);

typedef struct _TextEditor *TextEditor;

typedef int (*handle_editor_input_t)(TE_Pipe hiveToEditor,
				     TE_Pipe editorToHive);

typedef void (*move_to_front_t)(int write_to_editor_fd);
typedef void (*clear_focus_t)(int write_to_editor_fd);
typedef void (*write_contents_t)(int write_to_editor_fd);
typedef void (*reread_contents_t)(int write_to_editor_fd);
typedef void (*hive_closed_t)(int write_to_editor_fd);
typedef void (*display_message_t)(int write_to_editor_fd, TE_Action);
typedef void (*set_cursor_at_offset_t)(int write_to_editor_fd, TE_Action);
typedef void (*add_actions_t)(int write_to_editor_fd, TE_Action);
typedef void (*set_focus_t)(int write_to_editor_fd, TE_Action);
typedef void (*is_modified_t)(int write_to_editor_fd);

TextEditor initTextEditor(hive_closed_t,
			  clear_focus_t,
			  move_to_front_t,
			  write_contents_t,
			  reread_contents_t,
			  display_message_t,
			  add_actions_t,
			  set_focus_t,
			  set_cursor_at_offset_t,
			  is_modified_t);

void setEditorInputHandler(TextEditor te, handle_editor_input_t handler);

int eventloop(TextEditor editor, TE_Pipe hiveToEditor, TE_Pipe editorToHive);

void sendToHive(int write_to_hive_fd, TE_Event event);

#endif /* __TEXT_CONNECTOR_H */
