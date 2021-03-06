// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// glmPR
RcppExport SEXP glmPR(SEXP x_, SEXP y_, SEXP lambda_, SEXP rho_);
RcppExport SEXP mustbechecked_glmPR(SEXP x_SEXP, SEXP y_SEXP, SEXP lambda_SEXP, SEXP rho_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type lambda_(lambda_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type rho_(rho_SEXP);
    rcpp_result_gen = Rcpp::wrap(glmPR(x_, y_, lambda_, rho_));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP mustbechecked_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
