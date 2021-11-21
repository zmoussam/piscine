#!/bin/sh
ifconfig | grep ether | sed 's/^.*ether //' | sed 's/ $//' | sed 2d
