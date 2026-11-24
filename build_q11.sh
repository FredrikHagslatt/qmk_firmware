#!/bin/bash
source .venv/bin/activate
qmk compile -kb keychron/q11/iso_encoder -km freppan
deactivate
