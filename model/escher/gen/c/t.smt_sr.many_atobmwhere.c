T_b(ws);
T_b(te_set->module);
T_b(te_set->clear);
T_b("( ");
T_b(te_select_related->result_var);
T_b(" );");
T_b("\n");
T_b(ws);
T_b("if ( 0 != ");
T_b(te_lnk->left);
T_b(" ) {");
T_b("\n");
T_b(ws);
T_b("{");
T_b(te_lnk->te_classGeneratedName);
T_b(" * selected;");
T_b("\n");
T_b(ws);
T_b(te_set->scope);
T_b(te_set->iterator_class_name);
T_b(" ");
T_b(te_lnk->iterator);
T_b(";");
T_b("\n");
T_b(ws);
T_b(te_set->iterator_reset);
T_b("( &");
T_b(te_lnk->iterator);
T_b(", &");
T_b(te_lnk->left);
T_b("->");
T_b(te_lnk->linkage);
T_b(" );");
T_b("\n");
T_b(ws);
T_b("while ( 0 != ( selected = (");
T_b(te_lnk->te_classGeneratedName);
T_b(" *) ");
T_b(te_set->module);
T_b(te_set->iterator_next);
T_b("( &");
T_b(te_lnk->iterator);
T_b(" ) ) ) {");
T_b("\n");
T_b(ws);
T_b("  if ( ");
T_b(te_select_related->where_clause);
T_b(" ) {");
T_b("\n");
T_b(ws);
T_b("    if ( ! ");
T_b(te_set->module);
T_b(te_set->contains);
T_b("( (");
T_b(te_set->scope);
T_b(te_set->base_class);
T_b(" *) ");
T_b(te_select_related->result_var);
T_b(", selected ) ) {");
T_b("\n");
T_b(ws);
T_b("      ");
T_b(te_set->module);
T_b(te_set->insert_element);
T_b("( (");
T_b(te_set->scope);
T_b(te_set->base_class);
T_b(" *) ");
T_b(te_select_related->result_var);
T_b(", selected );");
T_b("\n");
T_b(ws);
T_b("}}}}}");
T_b("\n");
