#!/usr/bin/bash
marco() {
	echo $(pwd) > /tmp/marcosaved.txt
}
polo() {
	cd "$(cat /tmp/marcosaved.txt)"
}
