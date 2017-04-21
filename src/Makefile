pack:
	git archive --format=zip master > repository.zip
	zip -r odovzdanie.zip ../doc/html/ ../install/ repository.zip
	
clean:
	rm repository.zip
	rm -r ../doc/html
	
test:
	./googletest-master/tdd_test
	
doc:
	doxygen
	

