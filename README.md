# Sadaf (صدف)

A Unix shell written from scratch in C. *Sadaf* means seashell in Arabic.

Part of [machine](https://github.com/O1Wg/machine), a year of rebuilding the stack from scratch, one project at a time.

## Roadmap

- [X] Builds with `make`
- [ ] REPL loop: `sadaf>` prompt, quits on `exit` and Ctrl-D
- [ ] Runs commands with `fork` and `execvp`
- [ ] Tests and CI
- [ ] Built-ins: `cd`, `exit`
- [ ] Redirection: `>`, `>>`, `<`
- [ ] Pipes: `|`
- [ ] Background jobs: `&`
- [ ] Signals: Ctrl-C kills the command, not the shell
- [ ] v1.0

## Build

```
make
./sadaf
```

## Log

What I built, broke, and learned each session: [LOG.md](LOG.md)

**Next:** the REPL loop
