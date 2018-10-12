#include <diag_lib/diagnostics_bridge.h>

diagnostics_bridge::diagnostics_bridge()
{
    std::vector<std::string> all_target_nodes = diag_filter_.get_node_lists();
    diag_sub_ = nh_.subscribe("/watchdog_node/diag/all", 10, &diagnostics_bridge::diag_callback_, this);
}

diagnostics_bridge::~diagnostics_bridge()
{

}

void diagnostics_bridge::diag_callback_(const diag_msgs::diag::ConstPtr msg)
{

}