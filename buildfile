upstream/docs/
{
	doc{*}:
	{
    install         = share/doc/libtts/
		install.subdirs = true
	}
}

./: upstream/docs/doc{**}
./: {*/ -build/ -upstream/} upstream/doc{README.md LICENSE.md} manifest

# Don't install tests.
#
tests/: install = false
