SUBDIRS= cfg_templates toy_corpus ini_files

EXTRA_DIST = thot_check_installation.sh

installcheck-local: thot_check_installation
	./thot_check_installation

# Build using suffix rules (portable)
SUFFIXES= .sh .pl

.sh :
	rm -f $@
	echo "#! " $(BASH) > $@
	echo "pkgname=\""$(PACKAGE_NAME)"\"" >> $@
	echo "version=\""$(PACKAGE_VERSION)"\"" >> $@
	echo "bugreport="$(PACKAGE_BUGREPORT) >> $@
	echo "bindir="$(prefix)/bin/ >> $@
	echo "datadir="$(prefix)/share/$(PACKAGE_NAME) >> $@
	echo "AWK="$(AWK) >> $@
	echo "SORT="$(SORT) >> $@
	echo "sortpars=\""$(sortpars)"\"" >> $@
	echo "sortT=\""$(sortT)"\"" >> $@
	echo "sortm=\""$(sortm)"\"" >> $@
	echo "SPLIT="$(SPLIT) >> $@
	echo "SED="$(SED) >> $@
	echo "GREP="$(GREP) >> $@
	echo "UNIQ="$(UNIQ) >> $@
	echo "BASENAME="$(BASENAME) >> $@
	echo "DIRNAME="$(DIRNAME) >> $@
	echo "SSH="$(SSH) >> $@
	echo "HEAD="$(HEAD) >> $@
	echo "TAIL="$(TAIL) >> $@
	echo "FIND="$(FIND) >> $@
	echo "MKTEMP="$(MKTEMP) >> $@
	echo "LN="$(LN) >> $@
	echo "WC="$(WC) >> $@
	echo "QSUB="$(QSUB) >> $@
	echo "QSUB_WORKS=\""$(QSUB_WORKS)"\"" >> $@
	echo "QSUB_TERSE_OPT=\""$(QSUB_TERSE_OPT)"\"" >> $@
	echo "QSTAT="$(QSTAT) >> $@
	echo "QSTAT_J_OPT=\""$(QSTAT_J_OPT)"\"" >> $@
	echo "QRLS="$(QRLS) >> $@
	cat $< >> $@
	chmod ugo+x $@

.pl :
	$(PERL) -c $<
	rm -f $@
	echo "#! " $(PERL)  > $@
	cat $< >> $@
	chmod ugo+x $@
