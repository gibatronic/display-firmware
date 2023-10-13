.DEFAULT_GOAL := upload

.PHONY: example \
		setup \
		upload

.SILENT:

setup:
	scripts/setup

example:
	scripts/example

upload:
	scripts/upload
