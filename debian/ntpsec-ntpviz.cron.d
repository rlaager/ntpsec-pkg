53 *     * * * root cd /var/lib/ntp/ntpviz && ntpviz @/etc/ntpviz/day/optionfile  2> /dev/null ; find /var/lib/ntp/ntpviz/day  -type f -mtime +1 -delete
45 11,23 * * * root cd /var/lib/ntp/ntpviz && ntpviz @/etc/ntpviz/week/optionfile 2> /dev/null ; find /var/lib/ntp/ntpviz/week -type f -mtime +7 -delete
