53 *     * * * root ntpviz -p 1 -o /var/lib/ntp/ntpviz/day  @/etc/ntpviz/options 2> /dev/null ; find /var/lib/ntp/ntpviz/day  -type f -mtime +1 -delete
45 11,23 * * * root ntpviz -p 7 -o /var/lib/ntp/ntpviz/week @/etc/ntpviz/options 2> /dev/null ; find /var/lib/ntp/ntpviz/week -type f -mtime +7 -delete
