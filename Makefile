.PHONY: clean All

All:
	@echo "----------Building project:[ shallowCopy - Debug ]----------"
	@cd "shallowCopy" && "$(MAKE)" -f  "shallowCopy.mk"
clean:
	@echo "----------Cleaning project:[ shallowCopy - Debug ]----------"
	@cd "shallowCopy" && "$(MAKE)" -f  "shallowCopy.mk" clean
