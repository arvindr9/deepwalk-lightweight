Adapted from the original deepwalk repository. Moved the deepwalk files outside of the deepwalk folder.


Example usage: python3 __main__.py --input example_graphs/karate.adjlist --output karate.embeddings
python3 __main__.py --input example_graphs/blogcatalog.mat --format mat --output blogcatalog.embeddings

python3 predict.py --label example_graphs/blogcatalog.mat --embedding blogcatalog.embeddings --seed 0

See https://github.com/phanein/deepwalk for the original documentation