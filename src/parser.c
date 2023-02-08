#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  aux_sym__text_token1 = 2,
  aux_sym__not_token1 = 3,
  aux_sym__not_token2 = 4,
  aux_sym__not_token3 = 5,
  aux_sym__not_token4 = 6,
  anon_sym_LBRACE_PERCENT = 7,
  anon_sym_PERCENT_RBRACE = 8,
  anon_sym_LBRACE_LBRACE = 9,
  anon_sym_RBRACE_RBRACE = 10,
  anon_sym_LBRACE_POUND = 11,
  aux_sym_comment_token1 = 12,
  anon_sym_POUND_RBRACE = 13,
  anon_sym_for = 14,
  anon_sym_in = 15,
  anon_sym_endfor = 16,
  anon_sym_if = 17,
  anon_sym_endif = 18,
  anon_sym_else = 19,
  anon_sym_elif = 20,
  anon_sym_raw = 21,
  anon_sym_endraw = 22,
  anon_sym_macro = 23,
  anon_sym_endmacro = 24,
  anon_sym_extends = 25,
  anon_sym_block = 26,
  anon_sym_endblock = 27,
  anon_sym_call = 28,
  anon_sym_endcall = 29,
  anon_sym_filter = 30,
  anon_sym_endfilter = 31,
  anon_sym_set = 32,
  anon_sym_endset = 33,
  anon_sym_include = 34,
  anon_sym_import = 35,
  anon_sym_from = 36,
  anon_sym_autoescape = 37,
  anon_sym_endautoescape = 38,
  anon_sym_trans = 39,
  anon_sym_endtrans = 40,
  anon_sym_pluralize = 41,
  anon_sym_with = 42,
  anon_sym_endwith = 43,
  anon_sym_debug = 44,
  anon_sym_do = 45,
  sym_white_space_control = 46,
  sym__white_space = 47,
  sym_source_file = 48,
  sym__text = 49,
  sym__not = 50,
  sym__node = 51,
  sym_statement = 52,
  sym_statement_begin = 53,
  sym_statement_end = 54,
  sym_expression = 55,
  sym_comment = 56,
  sym_keyword = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_statement_repeat1 = 59,
  aux_sym_expression_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym__text_token1] = "_text_token1",
  [aux_sym__not_token1] = "_not_token1",
  [aux_sym__not_token2] = "_not_token2",
  [aux_sym__not_token3] = "_not_token3",
  [aux_sym__not_token4] = "_not_token4",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_endfor] = "endfor",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_else] = "else",
  [anon_sym_elif] = "elif",
  [anon_sym_raw] = "raw",
  [anon_sym_endraw] = "endraw",
  [anon_sym_macro] = "macro",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_extends] = "extends",
  [anon_sym_block] = "block",
  [anon_sym_endblock] = "endblock",
  [anon_sym_call] = "call",
  [anon_sym_endcall] = "endcall",
  [anon_sym_filter] = "filter",
  [anon_sym_endfilter] = "endfilter",
  [anon_sym_set] = "set",
  [anon_sym_endset] = "endset",
  [anon_sym_include] = "include",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_autoescape] = "autoescape",
  [anon_sym_endautoescape] = "endautoescape",
  [anon_sym_trans] = "trans",
  [anon_sym_endtrans] = "endtrans",
  [anon_sym_pluralize] = "pluralize",
  [anon_sym_with] = "with",
  [anon_sym_endwith] = "endwith",
  [anon_sym_debug] = "debug",
  [anon_sym_do] = "do",
  [sym_white_space_control] = "white_space_control",
  [sym__white_space] = "_white_space",
  [sym_source_file] = "source_file",
  [sym__text] = "_text",
  [sym__not] = "_not",
  [sym__node] = "_node",
  [sym_statement] = "statement",
  [sym_statement_begin] = "statement_begin",
  [sym_statement_end] = "statement_end",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym_keyword] = "keyword",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [aux_sym__not_token1] = aux_sym__not_token1,
  [aux_sym__not_token2] = aux_sym__not_token2,
  [aux_sym__not_token3] = aux_sym__not_token3,
  [aux_sym__not_token4] = aux_sym__not_token4,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_endblock] = anon_sym_endblock,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_endcall] = anon_sym_endcall,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_endfilter] = anon_sym_endfilter,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_endset] = anon_sym_endset,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_autoescape] = anon_sym_autoescape,
  [anon_sym_endautoescape] = anon_sym_endautoescape,
  [anon_sym_trans] = anon_sym_trans,
  [anon_sym_endtrans] = anon_sym_endtrans,
  [anon_sym_pluralize] = anon_sym_pluralize,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_endwith] = anon_sym_endwith,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_do] = anon_sym_do,
  [sym_white_space_control] = sym_white_space_control,
  [sym__white_space] = sym__white_space,
  [sym_source_file] = sym_source_file,
  [sym__text] = sym__text,
  [sym__not] = sym__not,
  [sym__node] = sym__node,
  [sym_statement] = sym_statement,
  [sym_statement_begin] = sym_statement_begin,
  [sym_statement_end] = sym_statement_end,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym_keyword] = sym_keyword,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endautoescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pluralize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [sym_white_space_control] = {
    .visible = true,
    .named = true,
  },
  [sym__white_space] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__not] = {
    .visible = false,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(40);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__not_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__not_token1);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__not_token1);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__not_token2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__not_token2);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__not_token3);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__not_token4);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__not_token4);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__not_token4);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_white_space_control);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_white_space_control);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__white_space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_endset);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_endwith);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 125:
      if (lookahead == 'z') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_endtrans);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_pluralize);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_autoescape);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_endautoescape);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__not_token1] = ACTIONS(1),
    [aux_sym__not_token3] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_endraw] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_endblock] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_endcall] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_endfilter] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_endset] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_autoescape] = ACTIONS(1),
    [anon_sym_endautoescape] = ACTIONS(1),
    [anon_sym_trans] = ACTIONS(1),
    [anon_sym_endtrans] = ACTIONS(1),
    [anon_sym_pluralize] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_endwith] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [sym_white_space_control] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__text] = STATE(8),
    [sym__not] = STATE(8),
    [sym__node] = STATE(8),
    [sym_statement] = STATE(8),
    [sym_statement_begin] = STATE(4),
    [sym_expression] = STATE(8),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__text_token1] = ACTIONS(5),
    [aux_sym__not_token1] = ACTIONS(5),
    [aux_sym__not_token2] = ACTIONS(5),
    [aux_sym__not_token3] = ACTIONS(5),
    [aux_sym__not_token4] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [2] = {
    [sym_statement_end] = STATE(10),
    [sym_keyword] = STATE(3),
    [aux_sym_statement_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_endfor] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_endif] = ACTIONS(17),
    [anon_sym_else] = ACTIONS(17),
    [anon_sym_elif] = ACTIONS(17),
    [anon_sym_raw] = ACTIONS(17),
    [anon_sym_endraw] = ACTIONS(17),
    [anon_sym_macro] = ACTIONS(17),
    [anon_sym_endmacro] = ACTIONS(17),
    [anon_sym_extends] = ACTIONS(17),
    [anon_sym_block] = ACTIONS(17),
    [anon_sym_endblock] = ACTIONS(17),
    [anon_sym_call] = ACTIONS(17),
    [anon_sym_endcall] = ACTIONS(17),
    [anon_sym_filter] = ACTIONS(17),
    [anon_sym_endfilter] = ACTIONS(17),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_endset] = ACTIONS(17),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(17),
    [anon_sym_from] = ACTIONS(17),
    [anon_sym_autoescape] = ACTIONS(17),
    [anon_sym_endautoescape] = ACTIONS(17),
    [anon_sym_trans] = ACTIONS(17),
    [anon_sym_endtrans] = ACTIONS(17),
    [anon_sym_pluralize] = ACTIONS(17),
    [anon_sym_with] = ACTIONS(17),
    [anon_sym_endwith] = ACTIONS(17),
    [anon_sym_debug] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(17),
    [sym_white_space_control] = ACTIONS(19),
    [sym__white_space] = ACTIONS(21),
  },
  [3] = {
    [sym_keyword] = STATE(3),
    [aux_sym_statement_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(26),
    [anon_sym_for] = ACTIONS(28),
    [anon_sym_in] = ACTIONS(28),
    [anon_sym_endfor] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(28),
    [anon_sym_endif] = ACTIONS(28),
    [anon_sym_else] = ACTIONS(28),
    [anon_sym_elif] = ACTIONS(28),
    [anon_sym_raw] = ACTIONS(28),
    [anon_sym_endraw] = ACTIONS(28),
    [anon_sym_macro] = ACTIONS(28),
    [anon_sym_endmacro] = ACTIONS(28),
    [anon_sym_extends] = ACTIONS(28),
    [anon_sym_block] = ACTIONS(28),
    [anon_sym_endblock] = ACTIONS(28),
    [anon_sym_call] = ACTIONS(28),
    [anon_sym_endcall] = ACTIONS(28),
    [anon_sym_filter] = ACTIONS(28),
    [anon_sym_endfilter] = ACTIONS(28),
    [anon_sym_set] = ACTIONS(28),
    [anon_sym_endset] = ACTIONS(28),
    [anon_sym_include] = ACTIONS(28),
    [anon_sym_import] = ACTIONS(28),
    [anon_sym_from] = ACTIONS(28),
    [anon_sym_autoescape] = ACTIONS(28),
    [anon_sym_endautoescape] = ACTIONS(28),
    [anon_sym_trans] = ACTIONS(28),
    [anon_sym_endtrans] = ACTIONS(28),
    [anon_sym_pluralize] = ACTIONS(28),
    [anon_sym_with] = ACTIONS(28),
    [anon_sym_endwith] = ACTIONS(28),
    [anon_sym_debug] = ACTIONS(28),
    [anon_sym_do] = ACTIONS(28),
    [sym_white_space_control] = ACTIONS(26),
    [sym__white_space] = ACTIONS(31),
  },
  [4] = {
    [sym_keyword] = STATE(2),
    [aux_sym_statement_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(34),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_endfor] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_endif] = ACTIONS(17),
    [anon_sym_else] = ACTIONS(17),
    [anon_sym_elif] = ACTIONS(17),
    [anon_sym_raw] = ACTIONS(17),
    [anon_sym_endraw] = ACTIONS(17),
    [anon_sym_macro] = ACTIONS(17),
    [anon_sym_endmacro] = ACTIONS(17),
    [anon_sym_extends] = ACTIONS(17),
    [anon_sym_block] = ACTIONS(17),
    [anon_sym_endblock] = ACTIONS(17),
    [anon_sym_call] = ACTIONS(17),
    [anon_sym_endcall] = ACTIONS(17),
    [anon_sym_filter] = ACTIONS(17),
    [anon_sym_endfilter] = ACTIONS(17),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_endset] = ACTIONS(17),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(17),
    [anon_sym_from] = ACTIONS(17),
    [anon_sym_autoescape] = ACTIONS(17),
    [anon_sym_endautoescape] = ACTIONS(17),
    [anon_sym_trans] = ACTIONS(17),
    [anon_sym_endtrans] = ACTIONS(17),
    [anon_sym_pluralize] = ACTIONS(17),
    [anon_sym_with] = ACTIONS(17),
    [anon_sym_endwith] = ACTIONS(17),
    [anon_sym_debug] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(17),
    [sym__white_space] = ACTIONS(36),
  },
  [5] = {
    [sym_identifier] = ACTIONS(38),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(38),
    [anon_sym_for] = ACTIONS(38),
    [anon_sym_in] = ACTIONS(38),
    [anon_sym_endfor] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(38),
    [anon_sym_endif] = ACTIONS(38),
    [anon_sym_else] = ACTIONS(38),
    [anon_sym_elif] = ACTIONS(38),
    [anon_sym_raw] = ACTIONS(38),
    [anon_sym_endraw] = ACTIONS(38),
    [anon_sym_macro] = ACTIONS(38),
    [anon_sym_endmacro] = ACTIONS(38),
    [anon_sym_extends] = ACTIONS(38),
    [anon_sym_block] = ACTIONS(38),
    [anon_sym_endblock] = ACTIONS(38),
    [anon_sym_call] = ACTIONS(38),
    [anon_sym_endcall] = ACTIONS(38),
    [anon_sym_filter] = ACTIONS(38),
    [anon_sym_endfilter] = ACTIONS(38),
    [anon_sym_set] = ACTIONS(38),
    [anon_sym_endset] = ACTIONS(38),
    [anon_sym_include] = ACTIONS(38),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_from] = ACTIONS(38),
    [anon_sym_autoescape] = ACTIONS(38),
    [anon_sym_endautoescape] = ACTIONS(38),
    [anon_sym_trans] = ACTIONS(38),
    [anon_sym_endtrans] = ACTIONS(38),
    [anon_sym_pluralize] = ACTIONS(38),
    [anon_sym_with] = ACTIONS(38),
    [anon_sym_endwith] = ACTIONS(38),
    [anon_sym_debug] = ACTIONS(38),
    [anon_sym_do] = ACTIONS(38),
    [sym_white_space_control] = ACTIONS(38),
    [sym__white_space] = ACTIONS(40),
  },
  [6] = {
    [sym_identifier] = ACTIONS(42),
    [anon_sym_for] = ACTIONS(42),
    [anon_sym_in] = ACTIONS(42),
    [anon_sym_endfor] = ACTIONS(42),
    [anon_sym_if] = ACTIONS(42),
    [anon_sym_endif] = ACTIONS(42),
    [anon_sym_else] = ACTIONS(42),
    [anon_sym_elif] = ACTIONS(42),
    [anon_sym_raw] = ACTIONS(42),
    [anon_sym_endraw] = ACTIONS(42),
    [anon_sym_macro] = ACTIONS(42),
    [anon_sym_endmacro] = ACTIONS(42),
    [anon_sym_extends] = ACTIONS(42),
    [anon_sym_block] = ACTIONS(42),
    [anon_sym_endblock] = ACTIONS(42),
    [anon_sym_call] = ACTIONS(42),
    [anon_sym_endcall] = ACTIONS(42),
    [anon_sym_filter] = ACTIONS(42),
    [anon_sym_endfilter] = ACTIONS(42),
    [anon_sym_set] = ACTIONS(42),
    [anon_sym_endset] = ACTIONS(42),
    [anon_sym_include] = ACTIONS(42),
    [anon_sym_import] = ACTIONS(42),
    [anon_sym_from] = ACTIONS(42),
    [anon_sym_autoescape] = ACTIONS(42),
    [anon_sym_endautoescape] = ACTIONS(42),
    [anon_sym_trans] = ACTIONS(42),
    [anon_sym_endtrans] = ACTIONS(42),
    [anon_sym_pluralize] = ACTIONS(42),
    [anon_sym_with] = ACTIONS(42),
    [anon_sym_endwith] = ACTIONS(42),
    [anon_sym_debug] = ACTIONS(42),
    [anon_sym_do] = ACTIONS(42),
    [sym_white_space_control] = ACTIONS(44),
    [sym__white_space] = ACTIONS(46),
  },
  [7] = {
    [sym_identifier] = ACTIONS(48),
    [anon_sym_for] = ACTIONS(48),
    [anon_sym_in] = ACTIONS(48),
    [anon_sym_endfor] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(48),
    [anon_sym_endif] = ACTIONS(48),
    [anon_sym_else] = ACTIONS(48),
    [anon_sym_elif] = ACTIONS(48),
    [anon_sym_raw] = ACTIONS(48),
    [anon_sym_endraw] = ACTIONS(48),
    [anon_sym_macro] = ACTIONS(48),
    [anon_sym_endmacro] = ACTIONS(48),
    [anon_sym_extends] = ACTIONS(48),
    [anon_sym_block] = ACTIONS(48),
    [anon_sym_endblock] = ACTIONS(48),
    [anon_sym_call] = ACTIONS(48),
    [anon_sym_endcall] = ACTIONS(48),
    [anon_sym_filter] = ACTIONS(48),
    [anon_sym_endfilter] = ACTIONS(48),
    [anon_sym_set] = ACTIONS(48),
    [anon_sym_endset] = ACTIONS(48),
    [anon_sym_include] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(48),
    [anon_sym_from] = ACTIONS(48),
    [anon_sym_autoescape] = ACTIONS(48),
    [anon_sym_endautoescape] = ACTIONS(48),
    [anon_sym_trans] = ACTIONS(48),
    [anon_sym_endtrans] = ACTIONS(48),
    [anon_sym_pluralize] = ACTIONS(48),
    [anon_sym_with] = ACTIONS(48),
    [anon_sym_endwith] = ACTIONS(48),
    [anon_sym_debug] = ACTIONS(48),
    [anon_sym_do] = ACTIONS(48),
    [sym__white_space] = ACTIONS(50),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_statement_begin,
    ACTIONS(54), 5,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
    STATE(9), 7,
      sym__text,
      sym__not,
      sym__node,
      sym_statement,
      sym_expression,
      sym_comment,
      aux_sym_source_file_repeat1,
  [32] = 7,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(64), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACE_POUND,
    STATE(4), 1,
      sym_statement_begin,
    ACTIONS(58), 5,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
    STATE(9), 7,
      sym__text,
      sym__not,
      sym__node,
      sym_statement,
      sym_expression,
      sym_comment,
      aux_sym_source_file_repeat1,
  [64] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [78] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [92] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [106] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [120] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [134] = 4,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(94), 1,
      sym__white_space,
    STATE(16), 1,
      aux_sym_expression_repeat1,
  [147] = 4,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(101), 1,
      sym__white_space,
    STATE(16), 1,
      aux_sym_expression_repeat1,
  [160] = 3,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym__white_space,
    STATE(15), 1,
      aux_sym_expression_repeat1,
  [170] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [174] = 1,
    ACTIONS(110), 1,
      anon_sym_PERCENT_RBRACE,
  [178] = 1,
    ACTIONS(112), 1,
      aux_sym_comment_token1,
  [182] = 1,
    ACTIONS(114), 1,
      anon_sym_POUND_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 32,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 78,
  [SMALL_STATE(12)] = 92,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 147,
  [SMALL_STATE(17)] = 160,
  [SMALL_STATE(18)] = 170,
  [SMALL_STATE(19)] = 174,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 182,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(16),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jinja2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
