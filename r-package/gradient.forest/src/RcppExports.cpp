// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// instrumental_train
Rcpp::List instrumental_train(Rcpp::NumericMatrix input_data, uint outcome_index, uint treatment_index, uint instrument_index, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, uint mtry, uint num_trees, bool verbose, uint num_threads, uint min_node_size, bool sample_with_replacement, bool keep_inbag, double sample_fraction, std::vector<size_t> no_split_variables, uint seed);
RcppExport SEXP gradient_forest_instrumental_train(SEXP input_dataSEXP, SEXP outcome_indexSEXP, SEXP treatment_indexSEXP, SEXP instrument_indexSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP min_node_sizeSEXP, SEXP sample_with_replacementSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP no_split_variablesSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< uint >::type outcome_index(outcome_indexSEXP);
    Rcpp::traits::input_parameter< uint >::type treatment_index(treatment_indexSEXP);
    Rcpp::traits::input_parameter< uint >::type instrument_index(instrument_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< uint >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< uint >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< uint >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< uint >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< double >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type no_split_variables(no_split_variablesSEXP);
    Rcpp::traits::input_parameter< uint >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(instrumental_train(input_data, outcome_index, treatment_index, instrument_index, sparse_data, variable_names, mtry, num_trees, verbose, num_threads, min_node_size, sample_with_replacement, keep_inbag, sample_fraction, no_split_variables, seed));
    return rcpp_result_gen;
END_RCPP
}
// instrumental_predict
Rcpp::NumericMatrix instrumental_predict(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, uint num_threads);
RcppExport SEXP gradient_forest_instrumental_predict(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< uint >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(instrumental_predict(forest, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// quantile_train
Rcpp::List quantile_train(std::vector<double>& quantiles, Rcpp::NumericMatrix input_data, uint outcome_index, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, uint mtry, uint num_trees, bool verbose, uint num_threads, uint min_node_size, bool sample_with_replacement, bool keep_inbag, double sample_fraction, std::vector<size_t> no_split_variables, uint seed);
RcppExport SEXP gradient_forest_quantile_train(SEXP quantilesSEXP, SEXP input_dataSEXP, SEXP outcome_indexSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP min_node_sizeSEXP, SEXP sample_with_replacementSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP no_split_variablesSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double>& >::type quantiles(quantilesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< uint >::type outcome_index(outcome_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< uint >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< uint >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< uint >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< uint >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< double >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type no_split_variables(no_split_variablesSEXP);
    Rcpp::traits::input_parameter< uint >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_train(quantiles, input_data, outcome_index, sparse_data, variable_names, mtry, num_trees, verbose, num_threads, min_node_size, sample_with_replacement, keep_inbag, sample_fraction, no_split_variables, seed));
    return rcpp_result_gen;
END_RCPP
}
// quantile_predict
Rcpp::NumericMatrix quantile_predict(Rcpp::List forest, std::vector<double>& quantiles, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, uint num_threads);
RcppExport SEXP gradient_forest_quantile_predict(SEXP forestSEXP, SEXP quantilesSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type quantiles(quantilesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< uint >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_predict(forest, quantiles, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// regression_train
Rcpp::List regression_train(Rcpp::NumericMatrix input_data, uint outcome_index, Rcpp::RawMatrix sparse_data, std::vector <std::string> variable_names, uint mtry, uint num_trees, bool verbose, uint num_threads, uint min_node_size, bool sample_with_replacement, bool keep_inbag, double sample_fraction, std::vector<size_t> no_split_variables, uint seed);
RcppExport SEXP gradient_forest_regression_train(SEXP input_dataSEXP, SEXP outcome_indexSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP min_node_sizeSEXP, SEXP sample_with_replacementSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP no_split_variablesSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< uint >::type outcome_index(outcome_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< uint >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< uint >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< uint >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< uint >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< double >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type no_split_variables(no_split_variablesSEXP);
    Rcpp::traits::input_parameter< uint >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(regression_train(input_data, outcome_index, sparse_data, variable_names, mtry, num_trees, verbose, num_threads, min_node_size, sample_with_replacement, keep_inbag, sample_fraction, no_split_variables, seed));
    return rcpp_result_gen;
END_RCPP
}
// regression_predict
Rcpp::NumericMatrix regression_predict(Rcpp::List forest, Rcpp::NumericMatrix input_data, Rcpp::RawMatrix sparse_data, std::vector<std::string> variable_names, uint num_threads);
RcppExport SEXP gradient_forest_regression_predict(SEXP forestSEXP, SEXP input_dataSEXP, SEXP sparse_dataSEXP, SEXP variable_namesSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type sparse_data(sparse_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< uint >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(regression_predict(forest, input_data, sparse_data, variable_names, num_threads));
    return rcpp_result_gen;
END_RCPP
}