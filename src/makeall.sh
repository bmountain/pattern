#!/usr/bin/bash
wd="/home/$(whoami)/code/pattern/src"
pushd $wd
for dir in $(ls); do 
  if [[ -d $dir ]]; then
    echo "building ${dir}...";
    cd $dir && make && cd ..;
  fi
done
popd