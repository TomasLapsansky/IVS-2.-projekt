# author: Tomas Lapsansky (xlapsa00)
# date: 22.4.2017
# project: IVS 2. project
# error: all, run

# Optimalized for linux

pack: doc
	git clone git@github.com:TomasLapsansky/IVS-2.-projekt.git repository
	zip -r xlapsa00_xdejma00_xdeing00.zip ../doc/ ../install/ repository
	
clean:
	rm -rf repository
	rm -r ../doc
	rm -f warn_doxyfile
	
test:
	./googletest-master/tdd_test
	
doc:
	doxygen
