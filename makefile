upload:
	scp -r generated_site/* admin@sci-prog.physics.unitn.it:/var/www/html

build:
	mkdocs build

serve:
	mkdocs serve

clean:
	rm -rf generated_site/*

publish:
	git pull
	git add generated_site/
	git commit -m "update site"
	git push

