#!/bin/sh
ifconfig | grep "ether " | sed 's/.......//' | sed 's/.$//'