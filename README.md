# ni-regex
The first non-insane regex tool

Why is this the world's first non-insane regex tool?

Because it will output what you actually want (capture groups) in a straightforward manner. Try searching for "regex print groups only" and be amazed by the black magic fuckery needed to this with any of the standard tooling. The same is true for any of the results on google for "online regex".

Example:

$ echo "abc 123 def" | ni-regex "(\d+)"

Building:

$ make
