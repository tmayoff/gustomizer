#include <gtk/gtk.h>

static void app_activate(GApplication *app, gpointer *) {
  GtkWidget *win;
  win = gtk_application_window_new(GTK_APPLICATION(app));
  gtk_window_set_title(GTK_WINDOW(win), "Gustomizer");
  gtk_window_set_default_size(GTK_WINDOW(win), 1600, 900);
  gtk_widget_show(win);
}

int main(int argc, char **argv) {
  GtkApplication *app;
  app = gtk_application_new("com.tylermayoff.gustomizer",
                            G_APPLICATION_FLAGS_NONE);
  g_signal_connect(app, "activate", G_CALLBACK(app_activate), nullptr);
  int stat = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);
  return stat;
}
