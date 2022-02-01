#include <gtk/gtk.h>

#include <gui-resources.h>

#include <string>

static void app_activate(GApplication *app, gpointer *) {
  GtkWidget *win;
  GtkBuilder *build;

  build =
      gtk_builder_new_from_resource("/com/tylermayoff/gustomizer/window.ui");
  win = GTK_WIDGET(gtk_builder_get_object(build, "win"));
  gtk_window_set_application(GTK_WINDOW(win), GTK_APPLICATION(app));

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
