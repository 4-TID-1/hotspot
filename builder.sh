build_dir="build"
link_name="main"

if [ ! -d "$build_dir/" ]; then
	mkdir $build_dir
fi

cd $build_dir
cmake ..
make

cd ..
rm -f $link_name
ln -s $build_dir/main $link_name
