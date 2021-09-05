#!/bin/bash
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"
