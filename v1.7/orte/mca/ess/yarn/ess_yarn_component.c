/*
 * Copyright (c) 2004-2008 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart, 
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * $COPYRIGHT$
 * 
 * Additional copyrights may follow
 * 
 * $HEADER$
 *
 * These symbols are in a file by themselves to provide nice linker
 * semantics.  Since linkers generally pull in symbols by object
 * files, keeping these symbols as the only symbols in this file
 * prevents utility programs such as "ompi_info" from having to import
 * entire components just to query their version and parameters.
 */

#include "orte_config.h"
#include "orte/constants.h"

#include "opal/mca/base/mca_base_param.h"

#include "orte/util/proc_info.h"

#include "orte/mca/ess/ess.h"
#include "orte/mca/ess/yarn/ess_yarn.h"

extern orte_ess_base_module_t orte_ess_yarn_module;

/*
 * Instantiate the public struct with all of our public information
 * and pointers to our public functions in it
 */
orte_ess_base_component_t mca_ess_yarn_component = {
    {
        ORTE_ESS_BASE_VERSION_3_0_0,

        /* Component name and version */
        "yarn",
        ORTE_MAJOR_VERSION,
        ORTE_MINOR_VERSION,
        ORTE_RELEASE_VERSION,

        /* Component open and close functions */
        orte_ess_yarn_component_open,
        orte_ess_yarn_component_close,
        orte_ess_yarn_component_query
    },
    {
        /* The component is checkpoint ready */
        MCA_BASE_METADATA_PARAM_CHECKPOINT
    }
};


int
orte_ess_yarn_component_open(void)
{
    return ORTE_SUCCESS;
}


int orte_ess_yarn_component_query(mca_base_module_t **module, int *priority)
{

    /* we are the yarn module - we need to be selected
     * IFF we are designated as the yarn
     */
    if (ORTE_PROC_IS_HNP) {
        *priority = 0;
        *module = (mca_base_module_t *)&orte_ess_yarn_module;
        return ORTE_SUCCESS;
    }
    
    /* else, we are not */
    *priority = 0;
    *module = NULL;
    return ORTE_ERROR;
}


int
orte_ess_yarn_component_close(void)
{
    return ORTE_SUCCESS;
}

