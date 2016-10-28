53 *     * * * root ntpviz -p 1 -o /var/lib/ntp/ntpviz/day  2> /dev/null ; find /var/lib/ntp/ntpviz/day  -type f -mtime +1 -delete
45 11,23 * * * root ntpviz -p 7 -o /var/lib/ntp/ntpviz/week 2> /dev/null ; find /var/lib/ntp/ntpviz/week -type f -mtime +7 -delete

# This logs the system temperature.  If it does not work on your system,
# experiment with the other examples.
*/5 * * * * root [ -e /sys/class/thermal/thermal_zone0/temp ] && /usr/share/ntpsec-ntpviz/zone-temp-log >> /var/log/ntpstats/temps
#*/5 * * * * root /usr/share/doc/ntpsec-ntpviz/examples/cpu-temp-log >> /var/log/ntpstats/temps
#*/5 * * * * root /usr/share/doc/ntpsec-ntpviz/examples/smartctl-temp-log >> /var/log/ntpstats/temps
#*/5 * * * * root /usr/share/doc/ntpsec-ntpviz/examples/temper-temp-log >> /var/log/ntpstats/temps
