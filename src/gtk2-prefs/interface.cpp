/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_main_window (void)
{
  GtkWidget *main_window;
  GtkWidget *main_hbox;
  GtkWidget *vbox1;
  GtkWidget *hbox1;
  GtkWidget *frame2;
  GtkWidget *alignment3;
  GtkWidget *scrolledwindow3;
  GtkWidget *main_themelist;
  GtkWidget *label1234;
  GtkWidget *frame3;
  GtkWidget *alignment4;
  GtkWidget *vbox7;
  GtkWidget *hbox8;
  GtkWidget *vbox9;
  GtkWidget *main_use_default_font_radio;
  GSList *main_use_default_font_radio_group = NULL;
  GtkWidget *main_use_custom_font_radio;
  GtkWidget *alignment5;
  GtkWidget *vbox10;
  GtkWidget *hbox9;
  GtkWidget *vbox11;
  GtkWidget *main_font_selector_button;
  GtkWidget *label669;
  GtkWidget *vbox13;
  GtkWidget *hbox6666;
  GtkWidget *main_use_system_config_checkbutton;
  GtkWidget *main_showpreviewtoggle;
  GtkWidget *hbuttonbox1;
  GtkWidget *hbox7;
  GtkWidget *hbox6665;
  GtkWidget *image2;
  GtkWidget *label2;
  GtkWidget *vbox6;
  GtkWidget *hbox5;
  GtkWidget *main_ok_button;
  GtkWidget *main_cancel_button;
  GtkWidget *main_reset_button;
  GtkWidget *alignment2;
  GtkWidget *hbox6;
  GtkWidget *image1;
  GtkWidget *label667;
  GtkWidget *main_previewhbox;
  GtkWidget *vseparator2;
  GtkWidget *frame4;
  GtkWidget *alignment6;
  GtkWidget *vbox12;
  GtkWidget *main_previewbook;
  GtkWidget *table1;
  GtkWidget *vbox2;
  GtkWidget *checkbutton1;
  GtkWidget *checkbutton2;
  GtkWidget *button4;
  GtkWidget *togglebutton1;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkWidget *vbox4;
  GtkWidget *menubar2;
  GtkWidget *menuitem5;
  GtkWidget *menuitem5_menu;
  GtkWidget *new2;
  GtkWidget *open2;
  GtkWidget *save2;
  GtkWidget *save_as2;
  GtkWidget *separatormenuitem2;
  GtkWidget *quit2;
  GtkWidget *menuitem6;
  GtkWidget *menuitem6_menu;
  GtkWidget *cut2;
  GtkWidget *copy2;
  GtkWidget *paste2;
  GtkWidget *delete2;
  GtkWidget *menuitem8;
  GtkWidget *menuitem8_menu;
  GtkWidget *about2;
  GtkWidget *combobox1;
  GtkWidget *comboboxentry1;
  GtkWidget *hscale1;
  GtkWidget *scrolledwindow1;
  GtkWidget *preview_treeview;
  GtkWidget *statusbar1;
  GtkWidget *progressbar1;
  GtkWidget *vseparator1;
  GtkWidget *frame1;
  GtkWidget *vbox3;
  GtkWidget *radiobutton1;
  GSList *radiobutton1_group = NULL;
  GtkWidget *radiobutton2;
  GtkWidget *radiobutton3;
  GtkWidget *label6;
  GtkWidget *label4;
  GtkWidget *scrolledwindow2;
  GtkWidget *textview1;
  GtkWidget *label5;
  GtkWidget *vbox5;
  GtkWidget *hbox4;
  GtkWidget *about_label;
  GtkWidget *label666;
  GtkWidget *label670;
  GtkAccelGroup *accel_group;
  GtkTooltips *tooltips;

  tooltips = gtk_tooltips_new ();

  accel_group = gtk_accel_group_new ();

  main_window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (main_window, "main_window");
  gtk_window_set_title (GTK_WINDOW (main_window), "Gtk2 Theme Selector");

  main_hbox = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (main_hbox, "main_hbox");
  gtk_widget_show (main_hbox);
  gtk_container_add (GTK_CONTAINER (main_window), main_hbox);
  gtk_widget_set_size_request (main_hbox, 310, 320);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox1, "vbox1");
  gtk_widget_show (vbox1);
  gtk_box_pack_start (GTK_BOX (main_hbox), vbox1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox1), 3);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox1, "hbox1");
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox1, TRUE, TRUE, 0);

  frame2 = gtk_frame_new (NULL);
  gtk_widget_set_name (frame2, "frame2");
  gtk_widget_show (frame2);
  gtk_box_pack_start (GTK_BOX (hbox1), frame2, TRUE, TRUE, 0);
  gtk_frame_set_shadow_type (GTK_FRAME (frame2), GTK_SHADOW_NONE);

  alignment3 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment3, "alignment3");
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (frame2), alignment3);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment3), 0, 0, 12, 0);

  scrolledwindow3 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow3, "scrolledwindow3");
  gtk_widget_show (scrolledwindow3);
  gtk_container_add (GTK_CONTAINER (alignment3), scrolledwindow3);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow3), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow3), GTK_SHADOW_IN);

  main_themelist = gtk_tree_view_new ();
  gtk_widget_set_name (main_themelist, "main_themelist");
  gtk_widget_show (main_themelist);
  gtk_container_add (GTK_CONTAINER (scrolledwindow3), main_themelist);
  GTK_WIDGET_SET_FLAGS (main_themelist, GTK_CAN_DEFAULT);
  gtk_tree_view_set_headers_visible (GTK_TREE_VIEW (main_themelist), FALSE);

  label1234 = gtk_label_new ("<b>Theme</b>");
  gtk_widget_set_name (label1234, "label1234");
  gtk_widget_show (label1234);
  gtk_frame_set_label_widget (GTK_FRAME (frame2), label1234);
  gtk_label_set_use_markup (GTK_LABEL (label1234), TRUE);

  frame3 = gtk_frame_new (NULL);
  gtk_widget_set_name (frame3, "frame3");
  gtk_widget_show (frame3);
  gtk_box_pack_start (GTK_BOX (vbox1), frame3, FALSE, FALSE, 9);
  gtk_frame_set_shadow_type (GTK_FRAME (frame3), GTK_SHADOW_NONE);

  alignment4 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment4, "alignment4");
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (frame3), alignment4);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment4), 0, 0, 12, 0);

  vbox7 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox7, "vbox7");
  gtk_widget_show (vbox7);
  gtk_container_add (GTK_CONTAINER (alignment4), vbox7);

  hbox8 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox8, "hbox8");
  gtk_widget_show (hbox8);
  gtk_box_pack_start (GTK_BOX (vbox7), hbox8, FALSE, FALSE, 0);

  vbox9 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox9, "vbox9");
  gtk_widget_show (vbox9);
  gtk_box_pack_start (GTK_BOX (hbox8), vbox9, TRUE, TRUE, 0);

  main_use_default_font_radio = gtk_radio_button_new_with_mnemonic (NULL, "Use theme default font");
  gtk_widget_set_name (main_use_default_font_radio, "main_use_default_font_radio");
  gtk_widget_show (main_use_default_font_radio);
  gtk_box_pack_start (GTK_BOX (vbox9), main_use_default_font_radio, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (main_use_default_font_radio), main_use_default_font_radio_group);
  main_use_default_font_radio_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (main_use_default_font_radio));

  main_use_custom_font_radio = gtk_radio_button_new_with_mnemonic (NULL, "Use custom font:");
  gtk_widget_set_name (main_use_custom_font_radio, "main_use_custom_font_radio");
  gtk_widget_show (main_use_custom_font_radio);
  gtk_box_pack_start (GTK_BOX (vbox9), main_use_custom_font_radio, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (main_use_custom_font_radio), main_use_default_font_radio_group);
  main_use_default_font_radio_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (main_use_custom_font_radio));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (main_use_custom_font_radio), TRUE);

  alignment5 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment5, "alignment5");
  gtk_widget_show (alignment5);
  gtk_box_pack_start (GTK_BOX (vbox9), alignment5, TRUE, TRUE, 0);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment5), 0, 0, 12, 0);

  vbox10 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox10, "vbox10");
  gtk_widget_show (vbox10);
  gtk_container_add (GTK_CONTAINER (alignment5), vbox10);

  hbox9 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox9, "hbox9");
  gtk_widget_show (hbox9);
  gtk_box_pack_start (GTK_BOX (vbox10), hbox9, FALSE, FALSE, 0);

  vbox11 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox11, "vbox11");
  gtk_widget_show (vbox11);
  gtk_box_pack_start (GTK_BOX (hbox9), vbox11, TRUE, TRUE, 0);

  main_font_selector_button = gtk_font_button_new ();
  gtk_widget_set_name (main_font_selector_button, "main_font_selector_button");
  gtk_widget_show (main_font_selector_button);
  gtk_box_pack_start (GTK_BOX (vbox11), main_font_selector_button, FALSE, FALSE, 0);

  label669 = gtk_label_new ("<b>Font</b>");
  gtk_widget_set_name (label669, "label669");
  gtk_widget_show (label669);
  gtk_frame_set_label_widget (GTK_FRAME (frame3), label669);
  gtk_label_set_use_markup (GTK_LABEL (label669), TRUE);

  vbox13 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox13, "vbox13");
  gtk_widget_show (vbox13);
  gtk_box_pack_start (GTK_BOX (vbox1), vbox13, FALSE, FALSE, 0);

  hbox6666 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox6666, "hbox6666");
  gtk_widget_show (hbox6666);
  gtk_box_pack_start (GTK_BOX (vbox13), hbox6666, TRUE, TRUE, 0);

  main_use_system_config_checkbutton = gtk_check_button_new_with_mnemonic ("Apply for all users");
  gtk_widget_set_name (main_use_system_config_checkbutton, "main_use_system_config_checkbutton");
  gtk_widget_show (main_use_system_config_checkbutton);
  gtk_box_pack_start (GTK_BOX (hbox6666), main_use_system_config_checkbutton, FALSE, FALSE, 12);
  gtk_tooltips_set_tip (tooltips, main_use_system_config_checkbutton, "If this is enabled, the program will update the system-wide configuration file. NOT RECOMMENDED!", NULL);

  main_showpreviewtoggle = gtk_toggle_button_new_with_mnemonic ("Show preview >>");
  gtk_widget_set_name (main_showpreviewtoggle, "main_showpreviewtoggle");
  gtk_widget_show (main_showpreviewtoggle);
  gtk_box_pack_end (GTK_BOX (hbox6666), main_showpreviewtoggle, FALSE, FALSE, 2);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_set_name (hbuttonbox1, "hbuttonbox1");
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbuttonbox1, FALSE, FALSE, 0);

  hbox7 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox7, "hbox7");
  gtk_widget_show (hbox7);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox7, FALSE, TRUE, 6);

  hbox6665 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox6665, "hbox6665");
  gtk_widget_show (hbox6665);
  gtk_box_pack_start (GTK_BOX (hbox7), hbox6665, TRUE, FALSE, 0);

  image2 = gtk_image_new_from_stock ("gtk-dialog-info", GTK_ICON_SIZE_LARGE_TOOLBAR);
  gtk_widget_set_name (image2, "image2");
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox6665), image2, FALSE, FALSE, 0);

  label2 = gtk_label_new ("You should restart your programs\nfor this change to take effect.");
  gtk_widget_set_name (label2, "label2");
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox6665), label2, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label2), 0, 0.5);

  vbox6 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox6, "vbox6");
  gtk_widget_show (vbox6);
  gtk_box_pack_start (GTK_BOX (vbox1), vbox6, FALSE, FALSE, 0);

  hbox5 = gtk_hbox_new (TRUE, 0);
  gtk_widget_set_name (hbox5, "hbox5");
  gtk_widget_show (hbox5);
  gtk_box_pack_start (GTK_BOX (vbox6), hbox5, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox5), 4);

  main_ok_button = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_set_name (main_ok_button, "main_ok_button");
  gtk_widget_show (main_ok_button);
  gtk_box_pack_end (GTK_BOX (hbox5), main_ok_button, TRUE, TRUE, 4);
  GTK_WIDGET_SET_FLAGS (main_ok_button, GTK_CAN_DEFAULT);

  main_cancel_button = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_set_name (main_cancel_button, "main_cancel_button");
  gtk_widget_show (main_cancel_button);
  gtk_box_pack_end (GTK_BOX (hbox5), main_cancel_button, TRUE, TRUE, 4);
  GTK_WIDGET_SET_FLAGS (main_cancel_button, GTK_CAN_DEFAULT);

  main_reset_button = gtk_button_new ();
  gtk_widget_set_name (main_reset_button, "main_reset_button");
  gtk_widget_show (main_reset_button);
  gtk_box_pack_end (GTK_BOX (hbox5), main_reset_button, TRUE, TRUE, 4);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment2, "alignment2");
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (main_reset_button), alignment2);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox6, "hbox6");
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox6);

  image1 = gtk_image_new_from_stock ("gtk-revert-to-saved", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image1, "image1");
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox6), image1, FALSE, FALSE, 0);

  label667 = gtk_label_new_with_mnemonic ("_Reset");
  gtk_widget_set_name (label667, "label667");
  gtk_widget_show (label667);
  gtk_box_pack_start (GTK_BOX (hbox6), label667, FALSE, FALSE, 0);

  main_previewhbox = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (main_previewhbox, "main_previewhbox");
  gtk_box_pack_start (GTK_BOX (main_hbox), main_previewhbox, TRUE, TRUE, 0);

  vseparator2 = gtk_vseparator_new ();
  gtk_widget_set_name (vseparator2, "vseparator2");
  gtk_widget_show (vseparator2);
  gtk_box_pack_start (GTK_BOX (main_previewhbox), vseparator2, FALSE, TRUE, 4);

  frame4 = gtk_frame_new (NULL);
  gtk_widget_set_name (frame4, "frame4");
  gtk_widget_show (frame4);
  gtk_box_pack_start (GTK_BOX (main_previewhbox), frame4, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame4), 3);
  gtk_frame_set_shadow_type (GTK_FRAME (frame4), GTK_SHADOW_NONE);

  alignment6 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment6, "alignment6");
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (frame4), alignment6);

  vbox12 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox12, "vbox12");
  gtk_widget_show (vbox12);
  gtk_container_add (GTK_CONTAINER (alignment6), vbox12);

  main_previewbook = gtk_notebook_new ();
  gtk_widget_set_name (main_previewbook, "main_previewbook");
  gtk_widget_show (main_previewbook);
  gtk_box_pack_start (GTK_BOX (vbox12), main_previewbook, TRUE, TRUE, 0);

  table1 = gtk_table_new (3, 3, FALSE);
  gtk_widget_set_name (table1, "table1");
  gtk_widget_show (table1);
  gtk_container_add (GTK_CONTAINER (main_previewbook), table1);
  gtk_container_set_border_width (GTK_CONTAINER (table1), 5);

  vbox2 = gtk_vbox_new (FALSE, 4);
  gtk_widget_set_name (vbox2, "vbox2");
  gtk_widget_show (vbox2);
  gtk_table_attach (GTK_TABLE (table1), vbox2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  checkbutton1 = gtk_check_button_new_with_mnemonic ("check button 1");
  gtk_widget_set_name (checkbutton1, "checkbutton1");
  gtk_widget_show (checkbutton1);
  gtk_box_pack_start (GTK_BOX (vbox2), checkbutton1, FALSE, FALSE, 0);

  checkbutton2 = gtk_check_button_new_with_mnemonic ("check button 2");
  gtk_widget_set_name (checkbutton2, "checkbutton2");
  gtk_widget_show (checkbutton2);
  gtk_box_pack_start (GTK_BOX (vbox2), checkbutton2, FALSE, FALSE, 0);

  button4 = gtk_button_new_with_mnemonic ("button");
  gtk_widget_set_name (button4, "button4");
  gtk_widget_show (button4);
  gtk_box_pack_start (GTK_BOX (vbox2), button4, FALSE, FALSE, 0);

  togglebutton1 = gtk_toggle_button_new_with_mnemonic ("toggle button");
  gtk_widget_set_name (togglebutton1, "togglebutton1");
  gtk_widget_show (togglebutton1);
  gtk_box_pack_start (GTK_BOX (vbox2), togglebutton1, FALSE, FALSE, 0);

  spinbutton1_adj = gtk_adjustment_new (0, 0, 100, 1, 10, 10);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_set_name (spinbutton1, "spinbutton1");
  gtk_widget_show (spinbutton1);
  gtk_box_pack_start (GTK_BOX (vbox2), spinbutton1, FALSE, FALSE, 0);

  vbox4 = gtk_vbox_new (FALSE, 4);
  gtk_widget_set_name (vbox4, "vbox4");
  gtk_widget_show (vbox4);
  gtk_table_attach (GTK_TABLE (table1), vbox4, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  menubar2 = gtk_menu_bar_new ();
  gtk_widget_set_name (menubar2, "menubar2");
  gtk_widget_show (menubar2);
  gtk_box_pack_start (GTK_BOX (vbox4), menubar2, FALSE, FALSE, 0);

  menuitem5 = gtk_menu_item_new_with_mnemonic ("_File");
  gtk_widget_set_name (menuitem5, "menuitem5");
  gtk_widget_show (menuitem5);
  gtk_container_add (GTK_CONTAINER (menubar2), menuitem5);

  menuitem5_menu = gtk_menu_new ();
  gtk_widget_set_name (menuitem5_menu, "menuitem5_menu");
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem5), menuitem5_menu);

  new2 = gtk_image_menu_item_new_from_stock ("gtk-new", accel_group);
  gtk_widget_set_name (new2, "new2");
  gtk_widget_show (new2);
  gtk_container_add (GTK_CONTAINER (menuitem5_menu), new2);

  open2 = gtk_image_menu_item_new_from_stock ("gtk-open", accel_group);
  gtk_widget_set_name (open2, "open2");
  gtk_widget_show (open2);
  gtk_container_add (GTK_CONTAINER (menuitem5_menu), open2);

  save2 = gtk_image_menu_item_new_from_stock ("gtk-save", accel_group);
  gtk_widget_set_name (save2, "save2");
  gtk_widget_show (save2);
  gtk_container_add (GTK_CONTAINER (menuitem5_menu), save2);

  save_as2 = gtk_image_menu_item_new_from_stock ("gtk-save-as", accel_group);
  gtk_widget_set_name (save_as2, "save_as2");
  gtk_widget_show (save_as2);
  gtk_container_add (GTK_CONTAINER (menuitem5_menu), save_as2);

  separatormenuitem2 = gtk_separator_menu_item_new ();
  gtk_widget_set_name (separatormenuitem2, "separatormenuitem2");
  gtk_widget_show (separatormenuitem2);
  gtk_container_add (GTK_CONTAINER (menuitem5_menu), separatormenuitem2);
  gtk_widget_set_sensitive (separatormenuitem2, FALSE);

  quit2 = gtk_image_menu_item_new_from_stock ("gtk-quit", accel_group);
  gtk_widget_set_name (quit2, "quit2");
  gtk_widget_show (quit2);
  gtk_container_add (GTK_CONTAINER (menuitem5_menu), quit2);

  menuitem6 = gtk_menu_item_new_with_mnemonic ("_Edit");
  gtk_widget_set_name (menuitem6, "menuitem6");
  gtk_widget_show (menuitem6);
  gtk_container_add (GTK_CONTAINER (menubar2), menuitem6);

  menuitem6_menu = gtk_menu_new ();
  gtk_widget_set_name (menuitem6_menu, "menuitem6_menu");
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem6), menuitem6_menu);

  cut2 = gtk_image_menu_item_new_from_stock ("gtk-cut", accel_group);
  gtk_widget_set_name (cut2, "cut2");
  gtk_widget_show (cut2);
  gtk_container_add (GTK_CONTAINER (menuitem6_menu), cut2);

  copy2 = gtk_image_menu_item_new_from_stock ("gtk-copy", accel_group);
  gtk_widget_set_name (copy2, "copy2");
  gtk_widget_show (copy2);
  gtk_container_add (GTK_CONTAINER (menuitem6_menu), copy2);

  paste2 = gtk_image_menu_item_new_from_stock ("gtk-paste", accel_group);
  gtk_widget_set_name (paste2, "paste2");
  gtk_widget_show (paste2);
  gtk_container_add (GTK_CONTAINER (menuitem6_menu), paste2);

  delete2 = gtk_image_menu_item_new_from_stock ("gtk-delete", accel_group);
  gtk_widget_set_name (delete2, "delete2");
  gtk_widget_show (delete2);
  gtk_container_add (GTK_CONTAINER (menuitem6_menu), delete2);

  menuitem8 = gtk_menu_item_new_with_mnemonic ("_Help");
  gtk_widget_set_name (menuitem8, "menuitem8");
  gtk_widget_show (menuitem8);
  gtk_container_add (GTK_CONTAINER (menubar2), menuitem8);

  menuitem8_menu = gtk_menu_new ();
  gtk_widget_set_name (menuitem8_menu, "menuitem8_menu");
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem8), menuitem8_menu);

  about2 = gtk_menu_item_new_with_mnemonic ("_About");
  gtk_widget_set_name (about2, "about2");
  gtk_widget_show (about2);
  gtk_container_add (GTK_CONTAINER (menuitem8_menu), about2);

  combobox1 = gtk_combo_box_new_text ();
  gtk_widget_set_name (combobox1, "combobox1");
  gtk_widget_show (combobox1);
  gtk_box_pack_start (GTK_BOX (vbox4), combobox1, FALSE, FALSE, 0);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), "item 1");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), "item 2");
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), "item 3");

  comboboxentry1 = gtk_combo_box_entry_new_text ();
  gtk_widget_set_name (comboboxentry1, "comboboxentry1");
  gtk_widget_show (comboboxentry1);
  gtk_box_pack_start (GTK_BOX (vbox4), comboboxentry1, FALSE, FALSE, 0);
  gtk_widget_set_size_request (comboboxentry1, 80, 25);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), "item 1");
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), "item 2");
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), "item 3");

  hscale1 = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (15, 0, 50, 1, 0, 0)));
  gtk_widget_set_name (hscale1, "hscale1");
  gtk_widget_show (hscale1);
  gtk_box_pack_start (GTK_BOX (vbox4), hscale1, TRUE, TRUE, 0);
  gtk_scale_set_digits (GTK_SCALE (hscale1), 0);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow1, "scrolledwindow1");
  gtk_widget_show (scrolledwindow1);
  gtk_table_attach (GTK_TABLE (table1), scrolledwindow1, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  preview_treeview = gtk_tree_view_new ();
  gtk_widget_set_name (preview_treeview, "preview_treeview");
  gtk_widget_show (preview_treeview);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), preview_treeview);
  gtk_tree_view_set_reorderable (GTK_TREE_VIEW (preview_treeview), TRUE);

  statusbar1 = gtk_statusbar_new ();
  gtk_widget_set_name (statusbar1, "statusbar1");
  gtk_widget_show (statusbar1);
  gtk_table_attach (GTK_TABLE (table1), statusbar1, 1, 3, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (statusbar1, 6, 20);

  progressbar1 = gtk_progress_bar_new ();
  gtk_widget_set_name (progressbar1, "progressbar1");
  gtk_widget_show (progressbar1);
  gtk_table_attach (GTK_TABLE (table1), progressbar1, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (progressbar1, 80, 20);
  gtk_progress_bar_set_fraction (GTK_PROGRESS_BAR (progressbar1), 0.56);
  gtk_progress_bar_set_text (GTK_PROGRESS_BAR (progressbar1), "56%");

  vseparator1 = gtk_vseparator_new ();
  gtk_widget_set_name (vseparator1, "vseparator1");
  gtk_widget_show (vseparator1);
  gtk_table_attach (GTK_TABLE (table1), vseparator1, 1, 2, 0, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 5, 0);

  frame1 = gtk_frame_new (NULL);
  gtk_widget_set_name (frame1, "frame1");
  gtk_widget_show (frame1);
  gtk_table_attach (GTK_TABLE (table1), frame1, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND), 0, 0);
  gtk_frame_set_label_align (GTK_FRAME (frame1), 0.5, 0.5);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox3, "vbox3");
  gtk_widget_show (vbox3);
  gtk_container_add (GTK_CONTAINER (frame1), vbox3);
  gtk_container_set_border_width (GTK_CONTAINER (vbox3), 5);

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, "radio 1");
  gtk_widget_set_name (radiobutton1, "radiobutton1");
  gtk_widget_show (radiobutton1);
  gtk_box_pack_start (GTK_BOX (vbox3), radiobutton1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, "radio 2");
  gtk_widget_set_name (radiobutton2, "radiobutton2");
  gtk_widget_show (radiobutton2);
  gtk_box_pack_start (GTK_BOX (vbox3), radiobutton2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  radiobutton3 = gtk_radio_button_new_with_mnemonic (NULL, "radio 3");
  gtk_widget_set_name (radiobutton3, "radiobutton3");
  gtk_widget_show (radiobutton3);
  gtk_box_pack_start (GTK_BOX (vbox3), radiobutton3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton3), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton3));

  label6 = gtk_label_new ("frame");
  gtk_widget_set_name (label6, "label6");
  gtk_widget_show (label6);
  gtk_frame_set_label_widget (GTK_FRAME (frame1), label6);
  gtk_misc_set_padding (GTK_MISC (label6), 1, 0);

  label4 = gtk_label_new ("Common widgets");
  gtk_widget_set_name (label4, "label4");
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (main_previewbook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (main_previewbook), 0), label4);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow2, "scrolledwindow2");
  gtk_widget_show (scrolledwindow2);
  gtk_container_add (GTK_CONTAINER (main_previewbook), scrolledwindow2);

  textview1 = gtk_text_view_new ();
  gtk_widget_set_name (textview1, "textview1");
  gtk_widget_show (textview1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), textview1);
  gtk_text_view_set_wrap_mode (GTK_TEXT_VIEW (textview1), GTK_WRAP_WORD);
  gtk_text_view_set_left_margin (GTK_TEXT_VIEW (textview1), 8);
  gtk_text_view_set_right_margin (GTK_TEXT_VIEW (textview1), 8);
  gtk_text_buffer_set_text (gtk_text_view_get_buffer (GTK_TEXT_VIEW (textview1)), "You can type some text here.\nYou can also click the right mouse button for a popup menu.", -1);

  label5 = gtk_label_new ("Text area");
  gtk_widget_set_name (label5, "label5");
  gtk_widget_show (label5);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (main_previewbook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (main_previewbook), 1), label5);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox5, "vbox5");
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (main_previewbook), vbox5);

  hbox4 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox4, "hbox4");
  gtk_widget_show (hbox4);
  gtk_box_pack_start (GTK_BOX (vbox5), hbox4, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox4), 7);

  about_label = gtk_label_new ("");
  gtk_widget_set_name (about_label, "about_label");
  gtk_widget_show (about_label);
  gtk_box_pack_start (GTK_BOX (hbox4), about_label, FALSE, FALSE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (about_label), TRUE);

  label666 = gtk_label_new ("About");
  gtk_widget_set_name (label666, "label666");
  gtk_widget_show (label666);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (main_previewbook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (main_previewbook), 2), label666);

  label670 = gtk_label_new ("<b>Preview</b>");
  gtk_widget_set_name (label670, "label670");
  gtk_widget_show (label670);
  gtk_frame_set_label_widget (GTK_FRAME (frame4), label670);
  gtk_label_set_use_markup (GTK_LABEL (label670), TRUE);

  g_signal_connect ((gpointer) main_window, "delete_event",
                    G_CALLBACK (on_main_window_delete_event),
                    NULL);
  g_signal_connect ((gpointer) main_use_default_font_radio, "toggled",
                    G_CALLBACK (on_main_use_default_font_radio_toggled),
                    NULL);
  g_signal_connect ((gpointer) main_font_selector_button, "font_set",
                    G_CALLBACK (on_main_font_selector_button_font_set),
                    NULL);
  g_signal_connect ((gpointer) main_showpreviewtoggle, "toggled",
                    G_CALLBACK (on_main_showpreviewtoggle_toggled),
                    NULL);
  g_signal_connect ((gpointer) main_ok_button, "clicked",
                    G_CALLBACK (on_main_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) main_cancel_button, "clicked",
                    G_CALLBACK (on_main_cancel_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) main_reset_button, "clicked",
                    G_CALLBACK (on_main_reset_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) new2, "activate",
                    G_CALLBACK (on_new2_activate),
                    NULL);
  g_signal_connect ((gpointer) open2, "activate",
                    G_CALLBACK (on_open2_activate),
                    NULL);
  g_signal_connect ((gpointer) save2, "activate",
                    G_CALLBACK (on_save2_activate),
                    NULL);
  g_signal_connect ((gpointer) save_as2, "activate",
                    G_CALLBACK (on_save_as2_activate),
                    NULL);
  g_signal_connect ((gpointer) quit2, "activate",
                    G_CALLBACK (on_quit2_activate),
                    NULL);
  g_signal_connect ((gpointer) cut2, "activate",
                    G_CALLBACK (on_cut2_activate),
                    NULL);
  g_signal_connect ((gpointer) copy2, "activate",
                    G_CALLBACK (on_copy2_activate),
                    NULL);
  g_signal_connect ((gpointer) paste2, "activate",
                    G_CALLBACK (on_paste2_activate),
                    NULL);
  g_signal_connect ((gpointer) delete2, "activate",
                    G_CALLBACK (on_delete2_activate),
                    NULL);
  g_signal_connect ((gpointer) about2, "activate",
                    G_CALLBACK (on_about2_activate),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (main_window, main_window, "main_window");
  GLADE_HOOKUP_OBJECT (main_window, main_hbox, "main_hbox");
  GLADE_HOOKUP_OBJECT (main_window, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (main_window, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (main_window, frame2, "frame2");
  GLADE_HOOKUP_OBJECT (main_window, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (main_window, scrolledwindow3, "scrolledwindow3");
  GLADE_HOOKUP_OBJECT (main_window, main_themelist, "main_themelist");
  GLADE_HOOKUP_OBJECT (main_window, label1234, "label1234");
  GLADE_HOOKUP_OBJECT (main_window, frame3, "frame3");
  GLADE_HOOKUP_OBJECT (main_window, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (main_window, vbox7, "vbox7");
  GLADE_HOOKUP_OBJECT (main_window, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (main_window, vbox9, "vbox9");
  GLADE_HOOKUP_OBJECT (main_window, main_use_default_font_radio, "main_use_default_font_radio");
  GLADE_HOOKUP_OBJECT (main_window, main_use_custom_font_radio, "main_use_custom_font_radio");
  GLADE_HOOKUP_OBJECT (main_window, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (main_window, vbox10, "vbox10");
  GLADE_HOOKUP_OBJECT (main_window, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (main_window, vbox11, "vbox11");
  GLADE_HOOKUP_OBJECT (main_window, main_font_selector_button, "main_font_selector_button");
  GLADE_HOOKUP_OBJECT (main_window, label669, "label669");
  GLADE_HOOKUP_OBJECT (main_window, vbox13, "vbox13");
  GLADE_HOOKUP_OBJECT (main_window, hbox6666, "hbox6666");
  GLADE_HOOKUP_OBJECT (main_window, main_use_system_config_checkbutton, "main_use_system_config_checkbutton");
  GLADE_HOOKUP_OBJECT (main_window, main_showpreviewtoggle, "main_showpreviewtoggle");
  GLADE_HOOKUP_OBJECT (main_window, hbuttonbox1, "hbuttonbox1");
  GLADE_HOOKUP_OBJECT (main_window, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (main_window, hbox6665, "hbox6665");
  GLADE_HOOKUP_OBJECT (main_window, image2, "image2");
  GLADE_HOOKUP_OBJECT (main_window, label2, "label2");
  GLADE_HOOKUP_OBJECT (main_window, vbox6, "vbox6");
  GLADE_HOOKUP_OBJECT (main_window, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (main_window, main_ok_button, "main_ok_button");
  GLADE_HOOKUP_OBJECT (main_window, main_cancel_button, "main_cancel_button");
  GLADE_HOOKUP_OBJECT (main_window, main_reset_button, "main_reset_button");
  GLADE_HOOKUP_OBJECT (main_window, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (main_window, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (main_window, image1, "image1");
  GLADE_HOOKUP_OBJECT (main_window, label667, "label667");
  GLADE_HOOKUP_OBJECT (main_window, main_previewhbox, "main_previewhbox");
  GLADE_HOOKUP_OBJECT (main_window, vseparator2, "vseparator2");
  GLADE_HOOKUP_OBJECT (main_window, frame4, "frame4");
  GLADE_HOOKUP_OBJECT (main_window, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (main_window, vbox12, "vbox12");
  GLADE_HOOKUP_OBJECT (main_window, main_previewbook, "main_previewbook");
  GLADE_HOOKUP_OBJECT (main_window, table1, "table1");
  GLADE_HOOKUP_OBJECT (main_window, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (main_window, checkbutton1, "checkbutton1");
  GLADE_HOOKUP_OBJECT (main_window, checkbutton2, "checkbutton2");
  GLADE_HOOKUP_OBJECT (main_window, button4, "button4");
  GLADE_HOOKUP_OBJECT (main_window, togglebutton1, "togglebutton1");
  GLADE_HOOKUP_OBJECT (main_window, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (main_window, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (main_window, menubar2, "menubar2");
  GLADE_HOOKUP_OBJECT (main_window, menuitem5, "menuitem5");
  GLADE_HOOKUP_OBJECT (main_window, menuitem5_menu, "menuitem5_menu");
  GLADE_HOOKUP_OBJECT (main_window, new2, "new2");
  GLADE_HOOKUP_OBJECT (main_window, open2, "open2");
  GLADE_HOOKUP_OBJECT (main_window, save2, "save2");
  GLADE_HOOKUP_OBJECT (main_window, save_as2, "save_as2");
  GLADE_HOOKUP_OBJECT (main_window, separatormenuitem2, "separatormenuitem2");
  GLADE_HOOKUP_OBJECT (main_window, quit2, "quit2");
  GLADE_HOOKUP_OBJECT (main_window, menuitem6, "menuitem6");
  GLADE_HOOKUP_OBJECT (main_window, menuitem6_menu, "menuitem6_menu");
  GLADE_HOOKUP_OBJECT (main_window, cut2, "cut2");
  GLADE_HOOKUP_OBJECT (main_window, copy2, "copy2");
  GLADE_HOOKUP_OBJECT (main_window, paste2, "paste2");
  GLADE_HOOKUP_OBJECT (main_window, delete2, "delete2");
  GLADE_HOOKUP_OBJECT (main_window, menuitem8, "menuitem8");
  GLADE_HOOKUP_OBJECT (main_window, menuitem8_menu, "menuitem8_menu");
  GLADE_HOOKUP_OBJECT (main_window, about2, "about2");
  GLADE_HOOKUP_OBJECT (main_window, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (main_window, comboboxentry1, "comboboxentry1");
  GLADE_HOOKUP_OBJECT (main_window, hscale1, "hscale1");
  GLADE_HOOKUP_OBJECT (main_window, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (main_window, preview_treeview, "preview_treeview");
  GLADE_HOOKUP_OBJECT (main_window, statusbar1, "statusbar1");
  GLADE_HOOKUP_OBJECT (main_window, progressbar1, "progressbar1");
  GLADE_HOOKUP_OBJECT (main_window, vseparator1, "vseparator1");
  GLADE_HOOKUP_OBJECT (main_window, frame1, "frame1");
  GLADE_HOOKUP_OBJECT (main_window, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (main_window, radiobutton1, "radiobutton1");
  GLADE_HOOKUP_OBJECT (main_window, radiobutton2, "radiobutton2");
  GLADE_HOOKUP_OBJECT (main_window, radiobutton3, "radiobutton3");
  GLADE_HOOKUP_OBJECT (main_window, label6, "label6");
  GLADE_HOOKUP_OBJECT (main_window, label4, "label4");
  GLADE_HOOKUP_OBJECT (main_window, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (main_window, textview1, "textview1");
  GLADE_HOOKUP_OBJECT (main_window, label5, "label5");
  GLADE_HOOKUP_OBJECT (main_window, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (main_window, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (main_window, about_label, "about_label");
  GLADE_HOOKUP_OBJECT (main_window, label666, "label666");
  GLADE_HOOKUP_OBJECT (main_window, label670, "label670");
  GLADE_HOOKUP_OBJECT_NO_REF (main_window, tooltips, "tooltips");

  gtk_widget_grab_default (main_themelist);
  gtk_window_add_accel_group (GTK_WINDOW (main_window), accel_group);

  return main_window;
}

