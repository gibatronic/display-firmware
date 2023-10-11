.DEFAULT_GOAL := upload

.PHONY: example \
		upload

.SILENT:

example:
	scripts/example

upload:
	scripts/upload
