# The compiler
CC =	cc

# Compiler flags
CFLAGS :=	-Wall -Wextra -Werror

# Debugging (DEBUG=1)
ifeq ($(DEBUG), 1)
	CFLAGS		+=	-g3 -O0
endif

# Targets
TARGET =	so_long

# Directories
SRC_DIR =	src/
INC_DIR =	inc/
OBJ_DIR =	obj/
LIB_DIR =	lib/

# System Libraries
SYSLIBFLAGS +=	-lXext
SYSLIBFLAGS +=	-lX11


# My libraries
LIB1DIR =	Libft/
LIB2DIR =	FLib/
LIB3DIR =	minilibx-linux/
LIB1 = libft.a
LIB2 = flib.a
LIB3 = libmlx_Linux.a
MYLIBS +=	$(LIB_DIR)$(LIB2DIR)$(LIB2)
MYLIBS +=	$(LIB_DIR)$(LIB1DIR)$(LIB1)
MYLIBS +=	$(LIB_DIR)$(LIB3DIR)$(LIB3)

# Source files
SRC_FILES += f_coords_char_2da.c
SRC_FILES += f_is_2da_only_giv_chars.c
SRC_FILES += f_floodfill.c
SRC_FILES += f_is_2da_rctngl.c
SRC_FILES += f_len_line_2da.c
SRC_FILES += f_nbr_giv_char_2da.c
SRC_FILES += f_print_tile.c
SRC_FILES += f_is_2da_surrounded.c
SRC_FILES += f_load_map.c
SRC_FILES += f_open_exit.c
SRC_FILES += f_has_valid_path.c
SRC_FILES += f_is_map_valid.c
SRC_FILES += f_load_images.c
SRC_FILES += f_nbr_rows_2da.c
SRC_FILES += main.c
SRC_FILES += f_handle_key_press.c
SRC_FILES += f_move_player.c
SRC_FILES += f_print_map.c
SRC_FILES += f_exit_game.c
SRC_FILES += f_free_images.c
SRC_FILES += f_handle_close_button.c



# Object files
OBJ_FILES 		=	$(SRC_FILES:%.c=$(OBJ_DIR)%.o)

# Rules
all: $(TARGET)

$(LIB_DIR)$(LIB1DIR)$(LIB1):
	$(MAKE) -C $(LIB_DIR)$(LIB1DIR) all

$(LIB_DIR)$(LIB2DIR)$(LIB2):
	$(MAKE) -C $(LIB_DIR)$(LIB2DIR) all

$(LIB_DIR)$(LIB3DIR)$(LIB3):
	$(MAKE) -C $(LIB_DIR)$(LIB3DIR) all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ_FILES) $(MYLIBS)
	$(CC) $(OBJ_FILES) -o $(TARGET) $(SYSLIBFLAGS) $(MYLIBS)

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIB_DIR)$(LIB1DIR) clean
	$(MAKE) -C $(LIB_DIR)$(LIB2DIR) clean
	$(MAKE) -C $(LIB_DIR)$(LIB3DIR) clean

fclean: clean
	rm -f $(TARGET) $(BONUS_TARGET)
	$(MAKE) -C $(LIB_DIR)$(LIB1DIR) fclean
	$(MAKE) -C $(LIB_DIR)$(LIB2DIR) fclean
	$(MAKE) -C $(LIB_DIR)$(LIB3DIR) fclean

re: fclean all

.PHONY: clean fclean all re