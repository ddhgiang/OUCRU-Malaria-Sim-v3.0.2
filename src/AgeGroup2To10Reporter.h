/* 
 * File:   AgeGroup2To10Reporter.h
 * Author: Merlin
 *
 * Created on September 15, 2014, 10:18 AM
 */

#ifndef AGEGROUP2TO10REPORTER_H
#define    AGEGROUP2TO10REPORTER_H

#include "Reporter.h"

class AgeGroup2To10Reporter : public Reporter {
DISALLOW_COPY_AND_ASSIGN_(AgeGroup2To10Reporter)

VIRTUAL_PROPERTY_REF(double, last_reported_NTF)

VIRTUAL_PROPERTY_REF(int, last_reported_clinical_episodes)

VIRTUAL_PROPERTY_REF(int, last_reported_mutants)

public:
    AgeGroup2To10Reporter();

    //    AgeGroup2To10Reporter(const AgeGroup2To10Reporter& orig);
    virtual ~AgeGroup2To10Reporter();


    virtual void initialize();

    virtual void before_run();

    virtual void after_run();

    virtual void begin_time_step();

    virtual void after_time_step();

    void output_parameters();

    void print_ntf_by_location();

    void print_EIR_by_location();

    void print_20x_by_location();

    void print_EAMU();

    void print_prevalence_by_location();

    void print_fraction_of_positive_that_are_clinical_by_location();

    void print_mean_immune_by_location();

    void print_LOI();

    void print_mean_number_of_clones_per_positive_individual();

    void print_mean_number_of_clones_per_positive_individual_by_age_group();

    void print_death_by_age_group();

    void print_number_of_clinical_episode_by_age_class();

    void print_prevalence_by_age_class();

    void print_fraction_of_positive_that_are_clinical_by_location_age_class();

    void print_fraction_of_positive_that_are_clinical_by_location_age_class_by_5();

    void print_resistance_tracker();

    void print_treatments_by_therapy();

    void print_total_utl();

    void print_utl();

    void print_mean_immune_by_location_age_class();

    void print_moi_distribution();


    void print_popsize_by_age_class();

private:

};

#endif	/* AGEGROUP2TO10REPORTER_H */

