
#include <tlua/config.h>
#include <tlua/ast.h>

void tlua_print_const(const tlua_const *k, FILE *fp)
{
    switch (k->tag)
    {
        case CONST_INT:
            fprintf(fp, ""LUA_INTEGER_FMT"", k->val.int_);
            break;
        case CONST_WORD:
            fprintf(fp, "0w%"LUA_INTEGER_FRMLEN"u", k->val.word);
            break;
        case CONST_STRING:
            fprintf(fp, "\"%.*s\"", k->val.string.len, k->val.string.buf);
            break;
        case CONST_CHAR:
            fprintf(fp, "$\"%c\"", k->val.char_);
            break;
        case CONST_REAL:
            fprintf(fp, "%f", k->val.real);
            break;
        case CONST_BOOL:
            fprintf(fp, "%s", k->val.bool_ ? "true" : "false");
            break;
        default:
            fprintf(fp, "<const %d>", k->tag);
    }
}

void tlua_print_type(const tlua_type *t, FILE *fp)
{
    switch (t->tag)
    {
        case TYPE_CON: {
            list(type) *it;
            tlua_type *arg;
            if (t->val.con.args) {
                fprintf(fp, "(");
                list_foreach(arg, it, t->val.con.args) {
                    tlua_print_type(arg, fp);
                    if (it && it->cdr)
                        fprintf(fp, ", ");
                }
                fprintf(fp, ") ");
            }
            tlua_print_var(t->val.con.tycon, fp);
            break;
        }
        case TYPE_RECORD: {
            list(record_item) *it;
            tlua_record_item *item;

            fprintf(fp, "{");
            list_foreach(item, it, t->val.record) {
                tlua_print_field(item->field, fp);
                fprintf(fp, ": ");
                tlua_print_type(item->val, fp);
                if (it && it->cdr)
                    fprintf(fp, ", ");
            }
            fprintf(fp, "}");
            break;
        }
        default:
            fprintf(fp, "<type %d>", t->tag);
    }
}

void tlua_print_field(const tlua_field *fld, FILE *fp)
{
    switch (fld->tag)
    {
        case FIELD_NUM:
            fprintf(fp, "%u", (unsigned)fld->val.num);
            break;
        case FIELD_ID:
            fprintf(fp, "%s", fld->val.ident);
            break;
        default:
            fprintf(fp, "<field %d>", fld->tag);
    }
}

void tlua_print_fixity(const tlua_fixity *fix, FILE *fp)
{
    switch (fix->tag)
    {
        case FIXITY_INFIX:
            fprintf(fp, "infix");
            break;
        case FIXITY_INFIXR:
            fprintf(fp, "infixr");
            break;
        case FIXITY_NONFIX:
            fprintf(fp, "nonfix");
            break;
        default:
            fprintf(fp, "<fixity %d>", fix->tag);
            return;
    }
    if (fix->precedence != -1)
        fprintf(fp, " %d", fix->precedence);
}

void tlua_print_var(const tlua_var *var, FILE *fp)
{
    fprintf(fp, "%s", var->name);
}

void tlua_print_exp(const tlua_exp *e, FILE *fp)
{
    switch (e->tag)
    {
        case EXP_ANDALSO:
            fprintf(fp, "(");
            tlua_print_exp(e->val.andalso.left, fp);
            fprintf(fp, " andalso ");
            tlua_print_exp(e->val.andalso.right, fp);
            fprintf(fp, ")");
            break;
        case EXP_CASE:
            fprintf(fp, "(case ");
            tlua_print_exp(e->val.case_.exp, fp);
            fprintf(fp, " of ");
            fprintf(fp, ")");
            break;
        case EXP_CONST:
            tlua_print_const(e->val.const_, fp);
            break;
        case EXP_CONSTRAINT:
            tlua_print_exp(e->val.constraint.exp, fp);
            fprintf(fp, " : ");
            tlua_print_type(e->val.constraint.type, fp);
            break;
        case EXP_FLATAPP: {
            list(exp) *it;
            tlua_exp *e1;
            fprintf(fp, "(");
            list_foreach(e1, it, e->val.flatapp) {
                tlua_print_exp(e1, fp);
                if (it && it->cdr)
                    fprintf(fp, " ");
            }
            fprintf(fp, ")");
            break;
        }
        case EXP_FN:
            fprintf(fp, "fn ");
            tlua_print_match(e->val.fn, fp);
            break;
        case EXP_HANDLE:
            tlua_print_exp(e->val.handle.exp, fp);
            fprintf(fp, " handle ");
            tlua_print_match(e->val.handle.match, fp);
            break;
        case EXP_IF:
            fprintf(fp, "if ");
            tlua_print_exp(e->val.if_.cond, fp);
            fprintf(fp, " then ");
            tlua_print_exp(e->val.if_.true_, fp);
            fprintf(fp, " else ");
            tlua_print_exp(e->val.if_.false_, fp);
            break;
        case EXP_LET:
            fprintf(fp, "let ");
            fprintf(fp, " in ");
            tlua_print_exp(e->val.let.body, fp);
            fprintf(fp, " end");
            break;
        case EXP_LIST: {
            list(exp) *it;
            tlua_exp *e1;
            fprintf(fp, "[");
            list_foreach(e1, it, e->val.list) {
                tlua_print_exp(e1, fp);
                if (it && it->cdr)
                    fprintf(fp, ", ");
            }
            fprintf(fp, "]");
            break;
        }
        case EXP_ORELSE:
            fprintf(fp, "(");
            tlua_print_exp(e->val.orelse.left, fp);
            fprintf(fp, " orelse ");
            tlua_print_exp(e->val.orelse.right, fp);
            fprintf(fp, ")");
            break;
        case EXP_RAISE:
            fprintf(fp, "(raise ");
            tlua_print_exp(e->val.raise, fp);
            fprintf(fp, ")");
            break;
        case EXP_RECORD: {
            list(record_item) *it;
            tlua_record_item *item;
            fprintf(fp, "{");
            list_foreach(item, it, e->val.record) {
                tlua_print_field(item->field, fp);
                fprintf(fp, " = ");
                tlua_print_exp(item->val, fp);
                if (it && it->cdr)
                    fprintf(fp, ", ");
            }
            fprintf(fp, "}");
            break;
        }
        case EXP_SELECTOR:
            fprintf(fp, "#");
            tlua_print_field(e->val.sel, fp);
            break;
        case EXP_SEQ: {
            list(exp) *it;
            tlua_exp *e1;
            fprintf(fp, "(");
            list_foreach(e1, it, e->val.seq) {
                tlua_print_exp(e1, fp);
                if (it && it->cdr)
                    fprintf(fp, "; ");
            }
            fprintf(fp, ")");
            break;
        }
        case EXP_VAR:
            fprintf(fp, "%s", e->val.var->name);
            break;
        case EXP_VECTOR: {
            list(exp) *it;
            tlua_exp *e1;
            fprintf(fp, "#[");
            list_foreach(e1, it, e->val.vector) {
                tlua_print_exp(e1, fp);
                if (it && it->cdr)
                    fprintf(fp, ", ");
            }
            fprintf(fp, "]");
            break;
        }
        case EXP_WHILE:
            fprintf(fp, "while ");
            tlua_print_exp(e->val.while_.cond, fp);
            fprintf(fp, " do (");
            tlua_print_exp(e->val.while_.body, fp);
            fprintf(fp, ")");
            break;
        default:
            fprintf(fp, "<exp %d>", e->tag);
    }
}

void tlua_print_match(const tlua_match *m, FILE *fp)
{
    const tlua_rule *rule;
    const list(rule) *it;
    list_foreach(rule, it, m->rules) {
        if (it != m->rules)
            fprintf(fp, " | ");
        tlua_print_pat(rule->pat, fp);
        fprintf(fp, " => ");
        tlua_print_exp(rule->exp, fp);
    }
}

TLUA_API void tlua_print_pat(const tlua_pat *p, FILE *fp)
{
    switch (p->tag)
    {
        case PAT_APP:
            fprintf(fp, "%s ", p->val.app.con->name);
            tlua_print_pat(p->val.app.arg, fp);
            break;
        case PAT_CONST:
            tlua_print_const(p->val.const_, fp);
            break;
        case PAT_CONSTRAINT:
            tlua_print_pat(p->val.constraint.pat, fp);
            fprintf(fp, " : ");
            tlua_print_type(p->val.constraint.type, fp);
            break;
        case PAT_FLATAPP: {
            list(pat) *it;
            tlua_pat *p1;
            list_foreach(p1, it, p->val.flatapp) {
                tlua_print_pat(p1, fp);
                if (it && it->cdr)
                    fprintf(fp, " ");
            }
            break;
        }
        default:
            fprintf(fp, "<pat %d>", p->tag);
    }
}

/* static void print_field(const tlua_field *fld, FILE *fp)
{
    switch (fld->tag)
    {
        case FIELD_NUM:
            fprintf(fp, "%u", fld->val.num);
            break;
        case FIELD_ID:
            fprintf(fp, "%s", fld->val.ident);
            break;
        default:
            fprintf(fp, "<field %d>", fld->tag);
    }
}


void tlua_print_pat(const tlua_pat *p, FILE *fp)
{
    switch (p->tag)
    {
        case PAT_APP:
            fprintf(fp, "%s ", p->val.app.con->name);
            tlua_print_pat(p->val.app.arg, fp);
            break;
        case PAT_CONST:
            tlua_print_const(p->val.const_, fp);
            break;
        case PAT_CONSTRAINT:
            tlua_print_pat(p->val.constraint.pat, fp);
            fprintf(fp, " : ");
            [>tlua_print_type(p->val.constraint.type, fp);<]
            break;
        case PAT_FLATAPP: {
            const tlua_list *l;
            for (l = p->val.flatapp; l != NULL; l = l->cdr) {
                tlua_print_pat(l->car, fp);
                fprintf(fp, " ");
            }
            break;
        }
        default:
            fprintf(fp, "<pat %d>", p->tag);
    }
}

void tlua_print_exp(const tlua_exp *e, FILE *fp)
{
    switch (e->tag)
    {
        case EXP_ANDALSO:
            fprintf(fp, "(");
            tlua_print_exp(e->val.andalso.left, fp);
            fprintf(fp, " andalso ");
            tlua_print_exp(e->val.andalso.right, fp);
            fprintf(fp, ")");
            break;
        case EXP_CASE:
            fprintf(fp, "(case ");
            tlua_print_exp(e->val.case_.exp, fp);
            fprintf(fp, " of ");
            fprintf(fp, ")");
            break;
        case EXP_CONST:
            tlua_print_const(e->val.const_, fp);
            break;
        case EXP_CONSTRAINT:
            tlua_print_exp(e->val.constraint.exp, fp);
            fprintf(fp, " : ");
            [>tlua_print_type(e->val.constraint.type, fp);<]
            break;
        case EXP_FLATAPP: {
            tlua_list *tmp;
            fprintf(fp, "(");
            for (tmp = e->val.flatapp; tmp != NULL; tmp = tmp->cdr) {
                tlua_print_exp(tmp->car, fp);
                if (tmp->cdr)
                    fprintf(fp, " ");
            }
            fprintf(fp, ")");
            break;
        }
        case EXP_FN:
            fprintf(fp, "fn ");
            print_match(e->val.fn, fp);
            break;
        case EXP_HANDLE:
            tlua_print_exp(e->val.handle.exp, fp);
            fprintf(fp, " handle ");
            print_match(e->val.handle.match, fp);
            break;
        case EXP_IF:
            fprintf(fp, "(if ");
            tlua_print_exp(e->val.if_.cond, fp);
            fprintf(fp, " then ");
            tlua_print_exp(e->val.if_.true_, fp);
            fprintf(fp, " else ");
            tlua_print_exp(e->val.if_.false_, fp);
            fprintf(fp, ")");
            break;
        case EXP_LET:
            break;
        case EXP_LIST: {
            tlua_list *tmp;
            fprintf(fp, "[");
            for (tmp = e->val.list; tmp != NULL; tmp = tmp->cdr) {
                tlua_print_exp(tmp->car, fp);
                if (tmp->cdr)
                    fprintf(fp, ", ");
            }
            fprintf(fp, "]");
            break;
        }
        case EXP_ORELSE:
            fprintf(fp, "(");
            tlua_print_exp(e->val.orelse.left, fp);
            fprintf(fp, " orelse ");
            tlua_print_exp(e->val.orelse.right, fp);
            fprintf(fp, ")");
            break;
        case EXP_RAISE:
            fprintf(fp, "(raise ");
            tlua_print_exp(e->val.raise, fp);
            fprintf(fp, ")");
            break;
        case EXP_RECORD: {
            tlua_list *tmp;
            fprintf(fp, "{");
            for (tmp = e->val.record; tmp != NULL; tmp = tmp->cdr) {
                tlua_record_item *r = tmp->car;
                print_field(r->field, fp);
                fprintf(fp, " = ");
                tlua_print_exp(r->val, fp);
                if (tmp->cdr)
                    fprintf(fp, ", ");
            }
            fprintf(fp, "}");
            break;
        }
        case EXP_SELECTOR:
            fprintf(fp, "#");
            print_field(e->val.sel, fp);
            break;
        case EXP_SEQ: {
            tlua_list *tmp;
            fprintf(fp, "(");
            for (tmp = e->val.seq; tmp != NULL; tmp = tmp->cdr) {
                tlua_print_exp(tmp->car, fp);
                if (tmp->cdr)
                    fprintf(fp, "; ");
            }
            fprintf(fp, ")");
            break;
        }
        case EXP_VAR:
            fprintf(fp, "%s", e->val.var->name);
            break;
        case EXP_VECTOR: {
            tlua_list *tmp;
            fprintf(fp, "#[");
            for (tmp = e->val.list; tmp != NULL; tmp = tmp->cdr) {
                tlua_print_exp(tmp->car, fp);
                if (tmp->cdr)
                    fprintf(fp, ", ");
            }
            fprintf(fp, "]");
            break;
        }
        case EXP_WHILE:
            fprintf(fp, "while ");
            tlua_print_exp(e->val.while_.cond, fp);
            fprintf(fp, " do (");
            tlua_print_exp(e->val.while_.body, fp);
            fprintf(fp, ")");
            break;
        default:
            fprintf(fp, "<exp %d>", e->tag);
    }
} */
