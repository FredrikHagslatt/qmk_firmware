#!/bin/bash
source .venv/bin/activate
qmk compile -kb sofle -km freppan -e CONVERT_TO=promicro_rp2040
deactivate
