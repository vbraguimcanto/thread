// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// init
void init();
RcppExport SEXP thread_init() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    init();
    return R_NilValue;
END_RCPP
}
// join_bg
void join_bg();
RcppExport SEXP thread_join_bg() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    join_bg();
    return R_NilValue;
END_RCPP
}
// store
void store(Rcpp::Function fun, Rcpp::RObject data);
RcppExport SEXP thread_store(SEXP funSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type fun(funSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type data(dataSEXP);
    store(fun, data);
    return R_NilValue;
END_RCPP
}
// trigger_evaluation
void trigger_evaluation();
RcppExport SEXP thread_trigger_evaluation() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    trigger_evaluation();
    return R_NilValue;
END_RCPP
}
// evaluation_result
Rcpp::RObject evaluation_result();
RcppExport SEXP thread_evaluation_result() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(evaluation_result());
    return rcpp_result_gen;
END_RCPP
}
