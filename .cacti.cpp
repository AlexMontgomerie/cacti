

    // create an instance of input parameters
    g_ip = new InputParameter();
    init_tech_params(g_ip->F_sz_um, false);

    // initialise parameters (defaults)

    // create Tech parameters
    IOTechParam iot(g_ip, g_ip->io_type, g_ip->num_mem_dq, g_ip->mem_data_width, g_ip->num_dq,g_ip->dram_dimm, 1,g_ip->bus_freq ); 
    Extio extio(&iot);  
    extio.extio_power_dynamic();
    extio.extio_power_phy();
    extio.extio_power_term();	   
 
