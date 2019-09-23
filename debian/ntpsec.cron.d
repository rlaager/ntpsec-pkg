25 6     * * * root if [ ! -d /run/systemd/system ] && [ -x /usr/lib/ntp/rotate-stats ] ; then /usr/lib/ntp/rotate-stats ; fi
