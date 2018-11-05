// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Kalman_smoother
List Kalman_smoother(arma::mat y, arma::mat u, arma::mat v, List theta);
RcppExport SEXP _ldsr_Kalman_smoother(SEXP ySEXP, SEXP uSEXP, SEXP vSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type v(vSEXP);
    Rcpp::traits::input_parameter< List >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(Kalman_smoother(y, u, v, theta));
    return rcpp_result_gen;
END_RCPP
}
// Mstep
List Mstep(arma::mat y, arma::mat u, arma::mat v, List fit);
RcppExport SEXP _ldsr_Mstep(SEXP ySEXP, SEXP uSEXP, SEXP vSEXP, SEXP fitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type v(vSEXP);
    Rcpp::traits::input_parameter< List >::type fit(fitSEXP);
    rcpp_result_gen = Rcpp::wrap(Mstep(y, u, v, fit));
    return rcpp_result_gen;
END_RCPP
}
// learnLDS
List learnLDS(arma::mat y, arma::mat u, arma::mat v, arma::vec init, int niter, double tol);
RcppExport SEXP _ldsr_learnLDS(SEXP ySEXP, SEXP uSEXP, SEXP vSEXP, SEXP initSEXP, SEXP niterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type v(vSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(learnLDS(y, u, v, init, niter, tol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ldsr_Kalman_smoother", (DL_FUNC) &_ldsr_Kalman_smoother, 4},
    {"_ldsr_Mstep", (DL_FUNC) &_ldsr_Mstep, 4},
    {"_ldsr_learnLDS", (DL_FUNC) &_ldsr_learnLDS, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_ldsr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
