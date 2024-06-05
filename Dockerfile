FROM ubuntu:22.04 AS app

FROM pwn.red/jail
COPY --from=app / /srv

COPY /bin/chall /srv/app/run
COPY /bin/flag.txt /srv/app/flag.txt

RUN chmod 755 /srv/app/run