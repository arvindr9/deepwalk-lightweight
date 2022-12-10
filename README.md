CS 7650 (NLP) project by Arvind Ramaswami and Jeffrey Chang

Adapted from the original deepwalk repository. Moved the deepwalk files outside of the deepwalk folder, as this is a relatively lightweight project.

Some of the modules in Deepwalk were outdated, so we had to modify some of them here.

Example usage: python3 __main__.py --input example_graphs/karate.adjlist --output karate.embeddings
python3 __main__.py --input example_graphs/blogcatalog.mat --format mat --output blogcatalog.embeddings

Speed benchmarking:
python3 __main__.py --input example_graphs/erdos_5.adjlist --format adjlist --output erdos_5.embeddings -- 0.1s
python3 __main__.py --input example_graphs/erdos_10.adjlist --format adjlist --output erdos_10.embeddings -- 0.7s
python3 __main__.py --input example_graphs/erdos_50.adjlist --format adjlist --output erdos_50.embeddings -- 1s
python3 __main__.py --input example_graphs/erdos_100.adjlist --format adjlist --output erdos_100.embeddings -- 1s
python3 __main__.py --input example_graphs/erdos_500.adjlist --format adjlist --output erdos_500.embeddings -- 6s

See https://github.com/phanein/deepwalk for the original documentation

(The below script is taken from https://github.com/xptree/NetMF as it is lightweight to run)
python3 predict.py --label example_graphs/blogcatalog.mat --embedding blogcatalog.embeddings --seed 0
python3 predict.py --label example_graphs/blogcatalog.mat --embedding blogcatalog_netmf.embeddings.npy --seed 0

__main__.py, graph.py, skipgram.py -- DeepWalk code from https://github.com/phanein/deepwalk
netmf.py, predict.py -- Taken from https://github.com/xptree/NetMF

generate_erdos_renyi.cpp -- generates Erdos-Renyi graphs to test the scaling ability of Deepwalk

Future directions:
- Use adaptive context window sizes
- Try these algorithms on larger datasets
