#!/bin/bash
ifconfig -a | awk '/ether/ {if("ether"==$1) print $2}'
