#!/bin/bash
echo "Descend into 'Project4' directory"
cd Project4
#
  whoami > SystemUNAME.txt
  cd ..
  echo "tar and zip directory Project4"
  tar cvfz Project4.tar.gz Project4
#
  echo "Done, please check Project4.tar.gz and submit it"
