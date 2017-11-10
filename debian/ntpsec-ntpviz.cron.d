53 *     * * * root if [ ! -d /run/systemd/system ] ; then ntpviz -p 1 -o /var/lib/ntp/ntpviz/day  @/etc/ntpviz/options 2> /dev/null ; find /var/lib/ntp/ntpviz/day  -type f -mtime +1 -delete ; fi
45 11,23 * * * root if [ ! -d /run/systemd/system ] ; then ntpviz -p 7 -o /var/lib/ntp/ntpviz/week @/etc/ntpviz/options 2> /dev/null ; find /var/lib/ntp/ntpviz/week -type f -mtime +7 -delete ; fi
*/5      * * * root [ ! -d /run/systemd/system ] && [ -x /usr/sbin/ntplogtemp ] && /usr/sbin/ntplogtemp -o -l /var/log/ntpstats/temps
