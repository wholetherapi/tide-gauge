# Tide Gauge design package

Released build package for the Tide Gauge ultrasonic water-level instrument
(kit BH-TG-300).

## Contents

- `hardware/` - transducer housing, mast bracket and board layout
- `firmware/` - averaging firmware and radio telemetry protocol
- `docs/` - installation and servicing checklist
- `hardware/bom.csv` - released bill of materials

## Installation

Anchor the mast so the transducer sits 150 mm above the highest expected water
line. The averaging window is 32 pulses; do not reduce it below 16.
