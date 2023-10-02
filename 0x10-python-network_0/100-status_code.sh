#!/bin/bash
# Sends a GET request and displays the response status code.
curl -s -o /dev/null -w "%{http_code}" "$1"
