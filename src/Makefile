all:
	git archive --format=zip master > repository.zip
	zip -r odovzdanie.zip ../doc/ ../install/ repository.zip
	
clean:
	rm repository.zip
