// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// scalar_min
int scalar_min(int x, int y);
RcppExport SEXP _epistasisGA_scalar_min(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(scalar_min(x, y));
    return rcpp_result_gen;
END_RCPP
}
// scalar_max
int scalar_max(int x, int y);
RcppExport SEXP _epistasisGA_scalar_max(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(scalar_max(x, y));
    return rcpp_result_gen;
END_RCPP
}
// concat
IntegerVector concat(IntegerVector x, IntegerVector y);
RcppExport SEXP _epistasisGA_concat(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(concat(x, y));
    return rcpp_result_gen;
END_RCPP
}
// concat_list
List concat_list(List x, List y);
RcppExport SEXP _epistasisGA_concat_list(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(concat_list(x, y));
    return rcpp_result_gen;
END_RCPP
}
// sort_by_order
IntegerVector sort_by_order(IntegerVector x, NumericVector y, int sort_type);
RcppExport SEXP _epistasisGA_sort_by_order(SEXP xSEXP, SEXP ySEXP, SEXP sort_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type sort_type(sort_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(sort_by_order(x, y, sort_type));
    return rcpp_result_gen;
END_RCPP
}
// seq_by2
IntegerVector seq_by2(int l);
RcppExport SEXP _epistasisGA_seq_by2(SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(seq_by2(l));
    return rcpp_result_gen;
END_RCPP
}
// unique_chrom_list
LogicalVector unique_chrom_list(List chromosome_list, int chrom_size);
RcppExport SEXP _epistasisGA_unique_chrom_list(SEXP chromosome_listSEXP, SEXP chrom_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type chromosome_list(chromosome_listSEXP);
    Rcpp::traits::input_parameter< int >::type chrom_size(chrom_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(unique_chrom_list(chromosome_list, chrom_size));
    return rcpp_result_gen;
END_RCPP
}
// subset_matrix_cols
IntegerMatrix subset_matrix_cols(IntegerMatrix in_matrix, IntegerVector cols);
RcppExport SEXP _epistasisGA_subset_matrix_cols(SEXP in_matrixSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type in_matrix(in_matrixSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_matrix_cols(in_matrix, cols));
    return rcpp_result_gen;
END_RCPP
}
// subset_lmatrix_cols
LogicalMatrix subset_lmatrix_cols(LogicalMatrix in_matrix, IntegerVector cols);
RcppExport SEXP _epistasisGA_subset_lmatrix_cols(SEXP in_matrixSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type in_matrix(in_matrixSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_lmatrix_cols(in_matrix, cols));
    return rcpp_result_gen;
END_RCPP
}
// sign_scalar
int sign_scalar(int x);
RcppExport SEXP _epistasisGA_sign_scalar(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sign_scalar(x));
    return rcpp_result_gen;
END_RCPP
}
// subset_matrix
IntegerMatrix subset_matrix(IntegerMatrix in_matrix, IntegerVector rows, IntegerVector cols);
RcppExport SEXP _epistasisGA_subset_matrix(SEXP in_matrixSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type in_matrix(in_matrixSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_matrix(in_matrix, rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// weighted_sub_colsums
NumericVector weighted_sub_colsums(IntegerMatrix in_mat, IntegerVector target_rows, IntegerVector target_cols, IntegerVector row_weights);
RcppExport SEXP _epistasisGA_weighted_sub_colsums(SEXP in_matSEXP, SEXP target_rowsSEXP, SEXP target_colsSEXP, SEXP row_weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type in_mat(in_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_rows(target_rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_cols(target_colsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type row_weights(row_weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_sub_colsums(in_mat, target_rows, target_cols, row_weights));
    return rcpp_result_gen;
END_RCPP
}
// sub_rowsums_start
IntegerVector sub_rowsums_start(LogicalMatrix in_mat, IntegerVector target_cols);
RcppExport SEXP _epistasisGA_sub_rowsums_start(SEXP in_matSEXP, SEXP target_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type in_mat(in_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_cols(target_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(sub_rowsums_start(in_mat, target_cols));
    return rcpp_result_gen;
END_RCPP
}
// sub_colsumsl
IntegerVector sub_colsumsl(LogicalMatrix in_mat, IntegerVector target_rows, IntegerVector target_cols);
RcppExport SEXP _epistasisGA_sub_colsumsl(SEXP in_matSEXP, SEXP target_rowsSEXP, SEXP target_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type in_mat(in_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_rows(target_rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_cols(target_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(sub_colsumsl(in_mat, target_rows, target_cols));
    return rcpp_result_gen;
END_RCPP
}
// sub_rowsumsl
IntegerVector sub_rowsumsl(LogicalMatrix in_mat, IntegerVector target_rows, IntegerVector target_cols);
RcppExport SEXP _epistasisGA_sub_rowsumsl(SEXP in_matSEXP, SEXP target_rowsSEXP, SEXP target_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type in_mat(in_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_rows(target_rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_cols(target_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(sub_rowsumsl(in_mat, target_rows, target_cols));
    return rcpp_result_gen;
END_RCPP
}
// n_pos_high_risk
IntegerVector n_pos_high_risk(IntegerMatrix in_mat, IntegerVector target_rows, IntegerVector target_cols);
RcppExport SEXP _epistasisGA_n_pos_high_risk(SEXP in_matSEXP, SEXP target_rowsSEXP, SEXP target_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type in_mat(in_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_rows(target_rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_cols(target_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(n_pos_high_risk(in_mat, target_rows, target_cols));
    return rcpp_result_gen;
END_RCPP
}
// n_neg_high_risk
IntegerVector n_neg_high_risk(IntegerMatrix in_mat, IntegerVector target_rows, IntegerVector target_cols);
RcppExport SEXP _epistasisGA_n_neg_high_risk(SEXP in_matSEXP, SEXP target_rowsSEXP, SEXP target_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type in_mat(in_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_rows(target_rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_cols(target_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(n_neg_high_risk(in_mat, target_rows, target_cols));
    return rcpp_result_gen;
END_RCPP
}
// sub_colmeans
NumericVector sub_colmeans(LogicalMatrix in_mat, IntegerVector target_rows, IntegerVector target_cols);
RcppExport SEXP _epistasisGA_sub_colmeans(SEXP in_matSEXP, SEXP target_rowsSEXP, SEXP target_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type in_mat(in_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_rows(target_rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_cols(target_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(sub_colmeans(in_mat, target_rows, target_cols));
    return rcpp_result_gen;
END_RCPP
}
// find_high_risk
List find_high_risk(int n_target, int n_pos, int n_neg, IntegerVector neg_risk_int, IntegerVector pos_risk_int, IntegerMatrix case_data, IntegerMatrix comp, IntegerVector informative_families, IntegerVector target_snps);
RcppExport SEXP _epistasisGA_find_high_risk(SEXP n_targetSEXP, SEXP n_posSEXP, SEXP n_negSEXP, SEXP neg_risk_intSEXP, SEXP pos_risk_intSEXP, SEXP case_dataSEXP, SEXP compSEXP, SEXP informative_familiesSEXP, SEXP target_snpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_target(n_targetSEXP);
    Rcpp::traits::input_parameter< int >::type n_pos(n_posSEXP);
    Rcpp::traits::input_parameter< int >::type n_neg(n_negSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type neg_risk_int(neg_risk_intSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type pos_risk_int(pos_risk_intSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_data(case_dataSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type comp(compSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type informative_families(informative_familiesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_snps(target_snpsSEXP);
    rcpp_result_gen = Rcpp::wrap(find_high_risk(n_target, n_pos, n_neg, neg_risk_int, pos_risk_int, case_data, comp, informative_families, target_snps));
    return rcpp_result_gen;
END_RCPP
}
// compute_dif_vecs
List compute_dif_vecs(IntegerMatrix case_genetic_data, IntegerMatrix comp_genetic_data, LogicalMatrix case_comp_dif, IntegerVector target_snps, IntegerMatrix cases_minus_complements, LogicalMatrix both_one_mat, IntegerVector weight_lookup, int n_different_snps_weight, int n_both_one_weight);
RcppExport SEXP _epistasisGA_compute_dif_vecs(SEXP case_genetic_dataSEXP, SEXP comp_genetic_dataSEXP, SEXP case_comp_difSEXP, SEXP target_snpsSEXP, SEXP cases_minus_complementsSEXP, SEXP both_one_matSEXP, SEXP weight_lookupSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_genetic_data(case_genetic_dataSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type comp_genetic_data(comp_genetic_dataSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case_comp_dif(case_comp_difSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_snps(target_snpsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type cases_minus_complements(cases_minus_complementsSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type both_one_mat(both_one_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_dif_vecs(case_genetic_data, comp_genetic_data, case_comp_dif, target_snps, cases_minus_complements, both_one_mat, weight_lookup, n_different_snps_weight, n_both_one_weight));
    return rcpp_result_gen;
END_RCPP
}
// chrom_fitness_score
List chrom_fitness_score(IntegerMatrix case_genetic_data_in, IntegerMatrix complement_genetic_data_in, LogicalMatrix case_comp_differences_in, IntegerVector target_snps_in, IntegerMatrix cases_minus_complements_in, LogicalMatrix both_one_mat_in, LogicalMatrix block_ld_mat, IntegerVector weight_lookup, LogicalMatrix case2_mat, LogicalMatrix case0_mat, int n_different_snps_weight, int n_both_one_weight, double recessive_ref_prop, double recode_test_stat, bool epi_test);
RcppExport SEXP _epistasisGA_chrom_fitness_score(SEXP case_genetic_data_inSEXP, SEXP complement_genetic_data_inSEXP, SEXP case_comp_differences_inSEXP, SEXP target_snps_inSEXP, SEXP cases_minus_complements_inSEXP, SEXP both_one_mat_inSEXP, SEXP block_ld_matSEXP, SEXP weight_lookupSEXP, SEXP case2_matSEXP, SEXP case0_matSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP, SEXP recessive_ref_propSEXP, SEXP recode_test_statSEXP, SEXP epi_testSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_genetic_data_in(case_genetic_data_inSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type complement_genetic_data_in(complement_genetic_data_inSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case_comp_differences_in(case_comp_differences_inSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_snps_in(target_snps_inSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type cases_minus_complements_in(cases_minus_complements_inSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type both_one_mat_in(both_one_mat_inSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type block_ld_mat(block_ld_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case2_mat(case2_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case0_mat(case0_matSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    Rcpp::traits::input_parameter< double >::type recessive_ref_prop(recessive_ref_propSEXP);
    Rcpp::traits::input_parameter< double >::type recode_test_stat(recode_test_statSEXP);
    Rcpp::traits::input_parameter< bool >::type epi_test(epi_testSEXP);
    rcpp_result_gen = Rcpp::wrap(chrom_fitness_score(case_genetic_data_in, complement_genetic_data_in, case_comp_differences_in, target_snps_in, cases_minus_complements_in, both_one_mat_in, block_ld_mat, weight_lookup, case2_mat, case0_mat, n_different_snps_weight, n_both_one_weight, recessive_ref_prop, recode_test_stat, epi_test));
    return rcpp_result_gen;
END_RCPP
}
// chrom_fitness_list
List chrom_fitness_list(IntegerMatrix case_genetic_data, IntegerMatrix complement_genetic_data, LogicalMatrix case_comp_differences, List chromosome_list, IntegerMatrix cases_minus_complements, LogicalMatrix both_one_mat, LogicalMatrix block_ld_mat, IntegerVector weight_lookup, LogicalMatrix case2_mat, LogicalMatrix case0_mat, int n_different_snps_weight, int n_both_one_weight, double recessive_ref_prop, double recode_test_stat, bool epi_test);
RcppExport SEXP _epistasisGA_chrom_fitness_list(SEXP case_genetic_dataSEXP, SEXP complement_genetic_dataSEXP, SEXP case_comp_differencesSEXP, SEXP chromosome_listSEXP, SEXP cases_minus_complementsSEXP, SEXP both_one_matSEXP, SEXP block_ld_matSEXP, SEXP weight_lookupSEXP, SEXP case2_matSEXP, SEXP case0_matSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP, SEXP recessive_ref_propSEXP, SEXP recode_test_statSEXP, SEXP epi_testSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_genetic_data(case_genetic_dataSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type complement_genetic_data(complement_genetic_dataSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case_comp_differences(case_comp_differencesSEXP);
    Rcpp::traits::input_parameter< List >::type chromosome_list(chromosome_listSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type cases_minus_complements(cases_minus_complementsSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type both_one_mat(both_one_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type block_ld_mat(block_ld_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case2_mat(case2_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case0_mat(case0_matSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    Rcpp::traits::input_parameter< double >::type recessive_ref_prop(recessive_ref_propSEXP);
    Rcpp::traits::input_parameter< double >::type recode_test_stat(recode_test_statSEXP);
    Rcpp::traits::input_parameter< bool >::type epi_test(epi_testSEXP);
    rcpp_result_gen = Rcpp::wrap(chrom_fitness_list(case_genetic_data, complement_genetic_data, case_comp_differences, chromosome_list, cases_minus_complements, both_one_mat, block_ld_mat, weight_lookup, case2_mat, case0_mat, n_different_snps_weight, n_both_one_weight, recessive_ref_prop, recode_test_stat, epi_test));
    return rcpp_result_gen;
END_RCPP
}
// initiate_population
List initiate_population(IntegerMatrix case_genetic_data, int n_migrations, int n_chromosomes, int chromosome_size, NumericVector snp_chisq, int max_generations, bool initial_sample_duplicates);
RcppExport SEXP _epistasisGA_initiate_population(SEXP case_genetic_dataSEXP, SEXP n_migrationsSEXP, SEXP n_chromosomesSEXP, SEXP chromosome_sizeSEXP, SEXP snp_chisqSEXP, SEXP max_generationsSEXP, SEXP initial_sample_duplicatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_genetic_data(case_genetic_dataSEXP);
    Rcpp::traits::input_parameter< int >::type n_migrations(n_migrationsSEXP);
    Rcpp::traits::input_parameter< int >::type n_chromosomes(n_chromosomesSEXP);
    Rcpp::traits::input_parameter< int >::type chromosome_size(chromosome_sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type snp_chisq(snp_chisqSEXP);
    Rcpp::traits::input_parameter< int >::type max_generations(max_generationsSEXP);
    Rcpp::traits::input_parameter< bool >::type initial_sample_duplicates(initial_sample_duplicatesSEXP);
    rcpp_result_gen = Rcpp::wrap(initiate_population(case_genetic_data, n_migrations, n_chromosomes, chromosome_size, snp_chisq, max_generations, initial_sample_duplicates));
    return rcpp_result_gen;
END_RCPP
}
// compute_population_fitness
List compute_population_fitness(IntegerMatrix case_genetic_data, IntegerMatrix complement_genetic_data, LogicalMatrix case_comp_different, IntegerMatrix case_minus_comp, LogicalMatrix both_one_mat, LogicalMatrix block_ld_mat, List chromosome_list, IntegerVector original_col_numbers, IntegerVector weight_lookup, LogicalMatrix case2_mat, LogicalMatrix case0_mat, int n_different_snps_weight, int n_both_one_weight, double recessive_ref_prop, double recode_test_stat);
RcppExport SEXP _epistasisGA_compute_population_fitness(SEXP case_genetic_dataSEXP, SEXP complement_genetic_dataSEXP, SEXP case_comp_differentSEXP, SEXP case_minus_compSEXP, SEXP both_one_matSEXP, SEXP block_ld_matSEXP, SEXP chromosome_listSEXP, SEXP original_col_numbersSEXP, SEXP weight_lookupSEXP, SEXP case2_matSEXP, SEXP case0_matSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP, SEXP recessive_ref_propSEXP, SEXP recode_test_statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_genetic_data(case_genetic_dataSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type complement_genetic_data(complement_genetic_dataSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case_comp_different(case_comp_differentSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_minus_comp(case_minus_compSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type both_one_mat(both_one_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type block_ld_mat(block_ld_matSEXP);
    Rcpp::traits::input_parameter< List >::type chromosome_list(chromosome_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type original_col_numbers(original_col_numbersSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case2_mat(case2_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case0_mat(case0_matSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    Rcpp::traits::input_parameter< double >::type recessive_ref_prop(recessive_ref_propSEXP);
    Rcpp::traits::input_parameter< double >::type recode_test_stat(recode_test_statSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_population_fitness(case_genetic_data, complement_genetic_data, case_comp_different, case_minus_comp, both_one_mat, block_ld_mat, chromosome_list, original_col_numbers, weight_lookup, case2_mat, case0_mat, n_different_snps_weight, n_both_one_weight, recessive_ref_prop, recode_test_stat));
    return rcpp_result_gen;
END_RCPP
}
// evolve_island
List evolve_island(int n_migrations, IntegerMatrix case_genetic_data, IntegerMatrix complement_genetic_data, LogicalMatrix case_comp_different, IntegerMatrix case_minus_comp, LogicalMatrix both_one_mat, LogicalMatrix block_ld_mat, int n_chromosomes, int chromosome_size, IntegerVector weight_lookup, LogicalMatrix case2_mat, LogicalMatrix case0_mat, NumericVector snp_chisq, IntegerVector original_col_numbers, List population, bool all_converged, int n_different_snps_weight, int n_both_one_weight, int migration_interval, int gen_same_fitness, int max_generations, double tol, int n_top_chroms, bool initial_sample_duplicates, double crossover_prop, double recessive_ref_prop, double recode_test_stat);
RcppExport SEXP _epistasisGA_evolve_island(SEXP n_migrationsSEXP, SEXP case_genetic_dataSEXP, SEXP complement_genetic_dataSEXP, SEXP case_comp_differentSEXP, SEXP case_minus_compSEXP, SEXP both_one_matSEXP, SEXP block_ld_matSEXP, SEXP n_chromosomesSEXP, SEXP chromosome_sizeSEXP, SEXP weight_lookupSEXP, SEXP case2_matSEXP, SEXP case0_matSEXP, SEXP snp_chisqSEXP, SEXP original_col_numbersSEXP, SEXP populationSEXP, SEXP all_convergedSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP, SEXP migration_intervalSEXP, SEXP gen_same_fitnessSEXP, SEXP max_generationsSEXP, SEXP tolSEXP, SEXP n_top_chromsSEXP, SEXP initial_sample_duplicatesSEXP, SEXP crossover_propSEXP, SEXP recessive_ref_propSEXP, SEXP recode_test_statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_migrations(n_migrationsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_genetic_data(case_genetic_dataSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type complement_genetic_data(complement_genetic_dataSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case_comp_different(case_comp_differentSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_minus_comp(case_minus_compSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type both_one_mat(both_one_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type block_ld_mat(block_ld_matSEXP);
    Rcpp::traits::input_parameter< int >::type n_chromosomes(n_chromosomesSEXP);
    Rcpp::traits::input_parameter< int >::type chromosome_size(chromosome_sizeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case2_mat(case2_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case0_mat(case0_matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type snp_chisq(snp_chisqSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type original_col_numbers(original_col_numbersSEXP);
    Rcpp::traits::input_parameter< List >::type population(populationSEXP);
    Rcpp::traits::input_parameter< bool >::type all_converged(all_convergedSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    Rcpp::traits::input_parameter< int >::type migration_interval(migration_intervalSEXP);
    Rcpp::traits::input_parameter< int >::type gen_same_fitness(gen_same_fitnessSEXP);
    Rcpp::traits::input_parameter< int >::type max_generations(max_generationsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type n_top_chroms(n_top_chromsSEXP);
    Rcpp::traits::input_parameter< bool >::type initial_sample_duplicates(initial_sample_duplicatesSEXP);
    Rcpp::traits::input_parameter< double >::type crossover_prop(crossover_propSEXP);
    Rcpp::traits::input_parameter< double >::type recessive_ref_prop(recessive_ref_propSEXP);
    Rcpp::traits::input_parameter< double >::type recode_test_stat(recode_test_statSEXP);
    rcpp_result_gen = Rcpp::wrap(evolve_island(n_migrations, case_genetic_data, complement_genetic_data, case_comp_different, case_minus_comp, both_one_mat, block_ld_mat, n_chromosomes, chromosome_size, weight_lookup, case2_mat, case0_mat, snp_chisq, original_col_numbers, population, all_converged, n_different_snps_weight, n_both_one_weight, migration_interval, gen_same_fitness, max_generations, tol, n_top_chroms, initial_sample_duplicates, crossover_prop, recessive_ref_prop, recode_test_stat));
    return rcpp_result_gen;
END_RCPP
}
// run_GADGETS
List run_GADGETS(int island_cluster_size, int n_migrations, IntegerMatrix case_genetic_data, IntegerMatrix complement_genetic_data, LogicalMatrix case_comp_different, IntegerMatrix case_minus_comp, LogicalMatrix both_one_mat, LogicalMatrix block_ld_mat, int n_chromosomes, int chromosome_size, IntegerVector weight_lookup, LogicalMatrix case2_mat, LogicalMatrix case0_mat, NumericVector snp_chisq, IntegerVector original_col_numbers, int n_different_snps_weight, int n_both_one_weight, int migration_interval, int gen_same_fitness, int max_generations, double tol, int n_top_chroms, bool initial_sample_duplicates, double crossover_prop, double recessive_ref_prop, double recode_test_stat);
RcppExport SEXP _epistasisGA_run_GADGETS(SEXP island_cluster_sizeSEXP, SEXP n_migrationsSEXP, SEXP case_genetic_dataSEXP, SEXP complement_genetic_dataSEXP, SEXP case_comp_differentSEXP, SEXP case_minus_compSEXP, SEXP both_one_matSEXP, SEXP block_ld_matSEXP, SEXP n_chromosomesSEXP, SEXP chromosome_sizeSEXP, SEXP weight_lookupSEXP, SEXP case2_matSEXP, SEXP case0_matSEXP, SEXP snp_chisqSEXP, SEXP original_col_numbersSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP, SEXP migration_intervalSEXP, SEXP gen_same_fitnessSEXP, SEXP max_generationsSEXP, SEXP tolSEXP, SEXP n_top_chromsSEXP, SEXP initial_sample_duplicatesSEXP, SEXP crossover_propSEXP, SEXP recessive_ref_propSEXP, SEXP recode_test_statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type island_cluster_size(island_cluster_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type n_migrations(n_migrationsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_genetic_data(case_genetic_dataSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type complement_genetic_data(complement_genetic_dataSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case_comp_different(case_comp_differentSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type case_minus_comp(case_minus_compSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type both_one_mat(both_one_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type block_ld_mat(block_ld_matSEXP);
    Rcpp::traits::input_parameter< int >::type n_chromosomes(n_chromosomesSEXP);
    Rcpp::traits::input_parameter< int >::type chromosome_size(chromosome_sizeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case2_mat(case2_matSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type case0_mat(case0_matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type snp_chisq(snp_chisqSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type original_col_numbers(original_col_numbersSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    Rcpp::traits::input_parameter< int >::type migration_interval(migration_intervalSEXP);
    Rcpp::traits::input_parameter< int >::type gen_same_fitness(gen_same_fitnessSEXP);
    Rcpp::traits::input_parameter< int >::type max_generations(max_generationsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type n_top_chroms(n_top_chromsSEXP);
    Rcpp::traits::input_parameter< bool >::type initial_sample_duplicates(initial_sample_duplicatesSEXP);
    Rcpp::traits::input_parameter< double >::type crossover_prop(crossover_propSEXP);
    Rcpp::traits::input_parameter< double >::type recessive_ref_prop(recessive_ref_propSEXP);
    Rcpp::traits::input_parameter< double >::type recode_test_stat(recode_test_statSEXP);
    rcpp_result_gen = Rcpp::wrap(run_GADGETS(island_cluster_size, n_migrations, case_genetic_data, complement_genetic_data, case_comp_different, case_minus_comp, both_one_mat, block_ld_mat, n_chromosomes, chromosome_size, weight_lookup, case2_mat, case0_mat, snp_chisq, original_col_numbers, n_different_snps_weight, n_both_one_weight, migration_interval, gen_same_fitness, max_generations, tol, n_top_chroms, initial_sample_duplicates, crossover_prop, recessive_ref_prop, recode_test_stat));
    return rcpp_result_gen;
END_RCPP
}
// epistasis_test_permute
double epistasis_test_permute(arma::mat case_inf, arma::mat comp_inf, List ld_blocks, int n_families, LogicalMatrix block_ld_mat, IntegerVector weight_lookup, int n_different_snps_weight, int n_both_one_weight, double recessive_ref_prop, double recode_test_stat);
RcppExport SEXP _epistasisGA_epistasis_test_permute(SEXP case_infSEXP, SEXP comp_infSEXP, SEXP ld_blocksSEXP, SEXP n_familiesSEXP, SEXP block_ld_matSEXP, SEXP weight_lookupSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP, SEXP recessive_ref_propSEXP, SEXP recode_test_statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type case_inf(case_infSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type comp_inf(comp_infSEXP);
    Rcpp::traits::input_parameter< List >::type ld_blocks(ld_blocksSEXP);
    Rcpp::traits::input_parameter< int >::type n_families(n_familiesSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type block_ld_mat(block_ld_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    Rcpp::traits::input_parameter< double >::type recessive_ref_prop(recessive_ref_propSEXP);
    Rcpp::traits::input_parameter< double >::type recode_test_stat(recode_test_statSEXP);
    rcpp_result_gen = Rcpp::wrap(epistasis_test_permute(case_inf, comp_inf, ld_blocks, n_families, block_ld_mat, weight_lookup, n_different_snps_weight, n_both_one_weight, recessive_ref_prop, recode_test_stat));
    return rcpp_result_gen;
END_RCPP
}
// epistasis_test_null_scores
NumericVector epistasis_test_null_scores(int n_permutes, arma::mat case_inf, arma::mat comp_inf, List ld_blocks, int n_families, LogicalMatrix block_ld_mat, IntegerVector weight_lookup, int n_different_snps_weight, int n_both_one_weight, double recessive_ref_prop, double recode_test_stat);
RcppExport SEXP _epistasisGA_epistasis_test_null_scores(SEXP n_permutesSEXP, SEXP case_infSEXP, SEXP comp_infSEXP, SEXP ld_blocksSEXP, SEXP n_familiesSEXP, SEXP block_ld_matSEXP, SEXP weight_lookupSEXP, SEXP n_different_snps_weightSEXP, SEXP n_both_one_weightSEXP, SEXP recessive_ref_propSEXP, SEXP recode_test_statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_permutes(n_permutesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type case_inf(case_infSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type comp_inf(comp_infSEXP);
    Rcpp::traits::input_parameter< List >::type ld_blocks(ld_blocksSEXP);
    Rcpp::traits::input_parameter< int >::type n_families(n_familiesSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type block_ld_mat(block_ld_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weight_lookup(weight_lookupSEXP);
    Rcpp::traits::input_parameter< int >::type n_different_snps_weight(n_different_snps_weightSEXP);
    Rcpp::traits::input_parameter< int >::type n_both_one_weight(n_both_one_weightSEXP);
    Rcpp::traits::input_parameter< double >::type recessive_ref_prop(recessive_ref_propSEXP);
    Rcpp::traits::input_parameter< double >::type recode_test_stat(recode_test_statSEXP);
    rcpp_result_gen = Rcpp::wrap(epistasis_test_null_scores(n_permutes, case_inf, comp_inf, ld_blocks, n_families, block_ld_mat, weight_lookup, n_different_snps_weight, n_both_one_weight, recessive_ref_prop, recode_test_stat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_epistasisGA_scalar_min", (DL_FUNC) &_epistasisGA_scalar_min, 2},
    {"_epistasisGA_scalar_max", (DL_FUNC) &_epistasisGA_scalar_max, 2},
    {"_epistasisGA_concat", (DL_FUNC) &_epistasisGA_concat, 2},
    {"_epistasisGA_concat_list", (DL_FUNC) &_epistasisGA_concat_list, 2},
    {"_epistasisGA_sort_by_order", (DL_FUNC) &_epistasisGA_sort_by_order, 3},
    {"_epistasisGA_seq_by2", (DL_FUNC) &_epistasisGA_seq_by2, 1},
    {"_epistasisGA_unique_chrom_list", (DL_FUNC) &_epistasisGA_unique_chrom_list, 2},
    {"_epistasisGA_subset_matrix_cols", (DL_FUNC) &_epistasisGA_subset_matrix_cols, 2},
    {"_epistasisGA_subset_lmatrix_cols", (DL_FUNC) &_epistasisGA_subset_lmatrix_cols, 2},
    {"_epistasisGA_sign_scalar", (DL_FUNC) &_epistasisGA_sign_scalar, 1},
    {"_epistasisGA_subset_matrix", (DL_FUNC) &_epistasisGA_subset_matrix, 3},
    {"_epistasisGA_weighted_sub_colsums", (DL_FUNC) &_epistasisGA_weighted_sub_colsums, 4},
    {"_epistasisGA_sub_rowsums_start", (DL_FUNC) &_epistasisGA_sub_rowsums_start, 2},
    {"_epistasisGA_sub_colsumsl", (DL_FUNC) &_epistasisGA_sub_colsumsl, 3},
    {"_epistasisGA_sub_rowsumsl", (DL_FUNC) &_epistasisGA_sub_rowsumsl, 3},
    {"_epistasisGA_n_pos_high_risk", (DL_FUNC) &_epistasisGA_n_pos_high_risk, 3},
    {"_epistasisGA_n_neg_high_risk", (DL_FUNC) &_epistasisGA_n_neg_high_risk, 3},
    {"_epistasisGA_sub_colmeans", (DL_FUNC) &_epistasisGA_sub_colmeans, 3},
    {"_epistasisGA_find_high_risk", (DL_FUNC) &_epistasisGA_find_high_risk, 9},
    {"_epistasisGA_compute_dif_vecs", (DL_FUNC) &_epistasisGA_compute_dif_vecs, 9},
    {"_epistasisGA_chrom_fitness_score", (DL_FUNC) &_epistasisGA_chrom_fitness_score, 15},
    {"_epistasisGA_chrom_fitness_list", (DL_FUNC) &_epistasisGA_chrom_fitness_list, 15},
    {"_epistasisGA_initiate_population", (DL_FUNC) &_epistasisGA_initiate_population, 7},
    {"_epistasisGA_compute_population_fitness", (DL_FUNC) &_epistasisGA_compute_population_fitness, 15},
    {"_epistasisGA_evolve_island", (DL_FUNC) &_epistasisGA_evolve_island, 27},
    {"_epistasisGA_run_GADGETS", (DL_FUNC) &_epistasisGA_run_GADGETS, 26},
    {"_epistasisGA_epistasis_test_permute", (DL_FUNC) &_epistasisGA_epistasis_test_permute, 10},
    {"_epistasisGA_epistasis_test_null_scores", (DL_FUNC) &_epistasisGA_epistasis_test_null_scores, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_epistasisGA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
